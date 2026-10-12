import AppKit
import MDTextKit
import PolarMark
import SFThemeKit
import TextBundle

/// Bear: `NoteEditorCoreViewController` — builds the editor, pushes the theme into the stylers and the
/// layout manager, and exposes the format commands.
public final class MDEditorViewController: NSViewController, SFStylable {
    public private(set) var textView: MDTextView!
    public private(set) var scrollView: NSScrollView!
    public private(set) var bottomBar: MDEditorBottomBar!
    public private(set) var sideActions: MDSideActionsView!
    public let editorController = MDEditorController()
    public let themeManager: SFThemeManager
    private var pendingMarkdown: String?
    public let tableRenderer = MDTableAttachmentRenderer()
    /// Bear: the host keeps the attachment view controllers alive (`attachmentViewController` is weak).
    private var attachmentControllers: [ObjectIdentifier: (controller: NSViewController, attachment: SFTextAttachment)] = [:]
    private var attachmentPruneObserver: NSObjectProtocol?
    /// Base folder for relative image paths (the note file's folder, or the TextBundle).
    public var documentBaseURL: URL?

    public init(themeManager: SFThemeManager = .shared) {
        self.themeManager = themeManager
        super.init(nibName: nil, bundle: nil)
    }

    public required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    public override func loadView() {
        scrollView = NSScrollView(frame: NSRect(x: 0, y: 0, width: 800, height: 600))
        scrollView.hasVerticalScroller = true
        scrollView.hasHorizontalScroller = false
        scrollView.autohidesScrollers = true
        scrollView.borderType = .noBorder
        textView = MDTextView(frame: NSRect(origin: .zero, size: scrollView.contentSize), editorController: editorController)
        scrollView.documentView = textView
        scrollView.drawsBackground = true
        let container = MDEditorContainerView(frame: scrollView.frame)
        scrollView.autoresizingMask = [.width, .height]
        container.addSubview(scrollView)
        sideActions = MDSideActionsView(hostingView: textView, editorController: editorController)
        sideActions.frame = container.bounds
        sideActions.autoresizingMask = [.width, .height]
        sideActions.foldingBlock = { [weak self] index in
            guard let self = self else { return }
            self.editorController.toggleFolding(at: index, in: self.textView)
            self.textView.needsDisplay = true
        }
        container.addSubview(sideActions)
        bottomBar = makeBottomBar()
        bottomBar.autoresizingMask = [.minXMargin, .maxYMargin]   // non-flipped container: pinned bottom-right
        let w = bottomBar.fittingWidth
        bottomBar.frame = NSRect(x: container.bounds.width - w - 12, y: 12, width: w, height: 40)
        container.addSubview(bottomBar)
        view = container
        editorController.autoHideMarkdown = true
        // Bear host hooks: image files and table rendering are provided by the UI layer.
        tableRenderer.editorController = editorController
        // Bear: NoteEditorCoreViewController.maxAvailableTextContainerWidth(for:) = textContainerMaxWidth − 2 × defaultParagraphIndent
        tableRenderer.maxAvailableWidth = { [weak self] in
            guard let self = self else { return 500 }
            let r = self.editorController.attributedStringRenderer
            return r.textContainerMaxWidth - 2 * r.defaultParagraphIndent
        }
        editorController.attributedStringRenderer.tableStyler.attachmentRenderer = { [weak self] att in
            guard let self = self else { return }
            self.tableRenderer.render(att)
            // Bear: MDAttachmentCoreViewController.viewController(for:…) — a live table editor per attachment.
            let vc = MDTableAttachmentViewController(attachment: att, hostTextView: self.textView, editorController: self.editorController,
                                                     gridRenderer: self.tableRenderer, themeManager: self.themeManager)
            att.attachmentViewController = vc
            _ = vc.view
            self.attachmentControllers[ObjectIdentifier(att)] = (vc, att)
        }
        attachmentPruneObserver = NotificationCenter.default.addObserver(forName: MDTextViewTextDidChangeNotification, object: nil, queue: .main) { [weak self] _ in self?.pruneAttachmentControllers() }
        editorController.attributedStringRenderer.imageStyler.fileResolver = { [weak self] path in
            guard let self = self else { return nil }
            if let bundle = self.textBundle, let base = bundle.url { return base.appendingPathComponent(path) }
            return self.documentBaseURL?.appendingPathComponent(path)
        }
        // Bear: NoteEditorCoreViewController.addFiles(from:in:) — copy into the note's assets and insert `![…](…)`.
        textView.addFilesBlock = { [weak self] urls, range in
            guard let self = self else { return }
            var md: [String] = []
            for url in urls {
                guard let rel = self.importAsset(from: url) else { continue }
                md.append("![" + url.deletingPathExtension().lastPathComponent + "](" + PMKAST.percentEscapedURL(rel) + ")")
            }
            guard !md.isEmpty else { return }
            self.editorController.replaceCharacters(in: range, with: NSAttributedString(string: md.joined(separator: "\n")), in: self.textView)
        }
        applyTheme(themeManager)
        themeManager.registerStylableObject(self)
        if let md = pendingMarkdown { pendingMarkdown = nil; load(markdown: md) }
    }

    // MARK: Content

    public func load(markdown: String) {
        guard isViewLoaded else { pendingMarkdown = markdown; return }
        editorController.loadString(markdown, into: textView)
    }

    public var markdown: String { textView?.markdown ?? pendingMarkdown ?? "" }

    // MARK: TextBundle (Bear: MDImporters / MDExporters + TextBundle.framework)

    public private(set) var textBundle: TextBundle?

    public func load(textBundle bundle: TextBundle) {
        textBundle = bundle
        load(markdown: bundle.text)
    }

    public func open(textBundleAt url: URL) throws { load(textBundle: try TextBundle(contentsOf: url)) }

    @discardableResult
    public func save(toTextBundleAt url: URL, creatorIdentifier: String = Bundle.main.bundleIdentifier ?? "net.bearclone.app") throws -> TextBundle {
        let bundle = textBundle ?? TextBundle(text: markdown)
        bundle.text = markdown
        let creatorURL = Bundle.main.bundleURL
        if TextBundle.isTextPack(url) {
            try bundle.writePack(to: url, creatorIdentifier: creatorIdentifier, creatorURL: creatorURL)
        } else {
            try bundle.write(to: url, creatorIdentifier: creatorIdentifier, creatorURL: creatorURL)
        }
        textBundle = bundle
        return bundle
    }

    public func assetURL(for relativePath: String) -> URL? { textBundle?.assetURL(for: relativePath) }

    // MARK: Theme → stylers (Bear: MDEditorViewController.configureStylers)

    public func styleObject(with themeManager: SFThemeManager) {
        guard isViewLoaded else { return }
        applyTheme(themeManager)
        editorController.restyleAll(in: textView)
    }

    /// Bear: `MDEditorController.styleTextView(_:with:)`
    private func applyTheme(_ tm: SFThemeManager) {
        let r = editorController.attributedStringRenderer
        r.styleObject(with: tm)
        tableRenderer.style(with: tm)
        textView.mdTextContainer.style(with: r, themeManager: tm)
        textView.mdLayoutManager.style(with: r, themeManager: tm)
        textView.typingAttributes = r.defaultTextAttributes
        textView.backgroundColor = tm.color(forKey: "base.background color", default: .white)
        textView.linkTextAttributes = [.cursor: NSCursor.pointingHand]
        let cursor = tm.color(forKey: "editor.cursor color", default: .textColor)
        let selection = tm.color(forKey: "editor.selection color", default: .selectedTextBackgroundColor)
        textView.insertionPointColor = cursor
        sideActions?.fontSize = r.defaultFontSize
        sideActions?.buttonColor = tm.color(forKey: "base.text secondary color", default: .systemGray).withAlphaComponent(0.7)
        sideActions?.accentColor = tm.color(forKey: "base.accent color", default: .systemRed)
        textView.selectedTextAttributes = [.backgroundColor: selection.withAlphaComponent(0.7), .foregroundColor: tm.color(forKey: "editor.text color", default: .textColor)]
        scrollView.backgroundColor = textView.backgroundColor
    }

    /// Drops controllers whose attachment is no longer in the text storage.
    private func pruneAttachmentControllers() {
        guard let ts = textView?.mdTextStorage else { return }
        var live = Set<ObjectIdentifier>()
        ts.enumerateAttribute(.attachment, in: NSRange(location: 0, length: ts.length), options: []) { v, _, _ in
            if let a = v as? SFTextAttachmentView { live.insert(ObjectIdentifier(a)) }
        }
        for key in attachmentControllers.keys where !live.contains(key) {
            attachmentControllers[key]?.controller.view.removeFromSuperview()
            attachmentControllers.removeValue(forKey: key)
        }
    }

    /// Copies a file next to the note (TextBundle assets or an `assets` folder) and returns its relative path.
    private func importAsset(from url: URL) -> String? {
        if let bundle = textBundle, let rel = try? bundle.addAsset(contentsOf: url) { return rel }
        guard let base = documentBaseURL else { return nil }
        let dir = base.appendingPathComponent("assets", isDirectory: true)
        try? FileManager.default.createDirectory(at: dir, withIntermediateDirectories: true)
        var name = url.lastPathComponent, i = 2
        while FileManager.default.fileExists(atPath: dir.appendingPathComponent(name).path) {
            name = url.deletingPathExtension().lastPathComponent + "-\(i)." + url.pathExtension; i += 1
        }
        do { try FileManager.default.copyItem(at: url, to: dir.appendingPathComponent(name)) } catch { return nil }
        return "assets/" + name
    }

    // MARK: Bottom bar (Bear: external note window toolbar)

    private func makeBottomBar() -> MDEditorBottomBar {
        let sizeMenu = NSMenu()
        sizeMenu.addItem(withTitle: "Increase Text Size", action: #selector(increaseTextSize(_:)), keyEquivalent: "").target = self
        sizeMenu.addItem(withTitle: "Decrease Text Size", action: #selector(decreaseTextSize(_:)), keyEquivalent: "").target = self
        sizeMenu.addItem(withTitle: "Reset Text Size", action: #selector(resetTextSize(_:)), keyEquivalent: "").target = self
        let items: [MDEditorBottomBar.Item] = [
            .init("textformat.size", "Text Size", #selector(increaseTextSize(_:)), menu: sizeMenu),
            .init("bold", "Bold", #selector(toggleStrong(_:))),
            .init("italic", "Italic", #selector(toggleEmphasis(_:))),
            .init("strikethrough", "Strikethrough", #selector(toggleStrikethrough(_:))),
            .init("highlighter", "Highlight", #selector(toggleHighlighter(_:))),
            .init("chevron.left.forwardslash.chevron.right", "Inline Code", #selector(toggleCode(_:))),
            .init("link", "Link", #selector(insertLink(_:))),
            .init("curlybraces", "Code Block", #selector(toggleCodeBlock(_:))),
            .init("text.quote", "Quote", #selector(toggleBlockQuote(_:))),
            .init("list.number", "Numbered List", #selector(toggleOrderedList(_:))),
            .init("list.bullet", "Bullet List", #selector(toggleUnorderedList(_:))),
            .init("checklist", "Task List", #selector(toggleTaskList(_:))),
            .init("eye", "Show / Hide Markdown", #selector(toggleMarkdownHiding(_:))),
        ]
        return MDEditorBottomBar(items: items, target: self)
    }

    /// Bear: BearThemeManager increaseTextSize / decreaseTextSize / resetTextSize (±2pt, 10…30).
    @objc public func increaseTextSize(_ sender: Any?) { setUserFontSize(currentUserFontSize + 2) }
    @objc public func decreaseTextSize(_ sender: Any?) { setUserFontSize(currentUserFontSize - 2) }
    @objc public func resetTextSize(_ sender: Any?) { themeManager.overrides.removeValue(forKey: "editor.text size") }
    private var currentUserFontSize: Int { Int(themeManager.number(forKey: "editor.text size", default: 15)) }
    private func setUserFontSize(_ size: Int) {
        guard (10...30).contains(size) else { return }
        themeManager.overrides["editor.text size"] = Double(size)
    }

    /// Wraps the selection as `[selection](url)` and leaves the caret inside the parentheses.
    @objc public func insertLink(_ sender: Any?) {
        let range = textView.selectedRange()
        let selected = (textView.string as NSString).substring(with: range)
        let replacement = "[\(selected)]()"
        guard textView.shouldChangeText(in: range, replacementString: replacement) else { return }
        textView.textStorage?.replaceCharacters(in: range, with: replacement)
        textView.didChangeText()
        textView.setSelectedRange(NSRange(location: range.location + replacement.count - 1, length: 0))
    }

    // MARK: Folding (Bear: toggleFolding: / foldAll: / unfoldAll:)
    @objc public func toggleFolding(_ sender: Any?) { editorController.toggleFolding(at: textView.selectedRange().location, in: textView); textView.needsDisplay = true }
    @objc public func foldAll(_ sender: Any?) { editorController.foldAllHeading(in: textView); textView.needsDisplay = true }
    @objc public func unfoldAll(_ sender: Any?) { editorController.unfoldAllHeading(in: textView); textView.needsDisplay = true }

    // MARK: Format actions (wired to menu items by the app)

    @objc public func toggleStrong(_ sender: Any?) { editorController.toggleStrong(in: textView) }
    @objc public func toggleEmphasis(_ sender: Any?) { editorController.toggleEmphasis(in: textView) }
    @objc public func toggleStrikethrough(_ sender: Any?) { editorController.toggleStrikethrough(in: textView) }
    @objc public func toggleUnderline(_ sender: Any?) { editorController.toggleUnderline(in: textView) }
    @objc public func toggleHighlighter(_ sender: Any?) { editorController.toggleHighlighter(in: textView) }
    @objc public func toggleCode(_ sender: Any?) { editorController.toggleCode(in: textView) }
    @objc public func toggleHeading1(_ sender: Any?) { editorController.toggleHeading(in: textView, headingLevel: 1) }
    @objc public func toggleHeading2(_ sender: Any?) { editorController.toggleHeading(in: textView, headingLevel: 2) }
    @objc public func toggleHeading3(_ sender: Any?) { editorController.toggleHeading(in: textView, headingLevel: 3) }
    @objc public func toggleUnorderedList(_ sender: Any?) { editorController.toggleUnorderedList(in: textView) }
    @objc public func toggleOrderedList(_ sender: Any?) { editorController.toggleOrderedList(in: textView) }
    @objc public func toggleTaskList(_ sender: Any?) { editorController.toggleTaskList(in: textView) }
    @objc public func toggleBlockQuote(_ sender: Any?) { editorController.toggleBlockQuote(in: textView) }
    @objc public func toggleCodeBlock(_ sender: Any?) { editorController.toggleCodeBlock(in: textView) }
    @objc public func insertThematicBreak(_ sender: Any?) { editorController.insertThematicBreak(in: textView) }
    @objc public func addIndent(_ sender: Any?) { editorController.addIndent(in: textView) }
    @objc public func removeIndent(_ sender: Any?) { editorController.removeIndent(in: textView) }
    @objc public func toggleMarkdownHiding(_ sender: Any?) {
        editorController.autoHideMarkdown.toggle()
        if editorController.autoHideMarkdown {
            editorController.hideMarkdown(in: textView, range: NSRange(location: 0, length: textView.mdTextStorage.length))
            editorController.autoHideMarkdown(in: textView, forOldSelectionRange: textView.selectedRange(), newSelectionRange: textView.selectedRange())
        } else {
            editorController.showMarkdown(in: textView, range: NSRange(location: 0, length: textView.mdTextStorage.length))
        }
    }
    @objc public func toggleBackgroundGrid(_ sender: Any?) {
        textView.mdLayoutManager.showBackgroundGrid.toggle()
        textView.needsDisplay = true
    }
}

/// Hosts the scroll view and the floating bottom bar.
final class MDEditorContainerView: NSView {
    override var isFlipped: Bool { false }
}
