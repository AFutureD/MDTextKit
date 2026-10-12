import AppKit
import MDTextKit
import PolarMark
import SFThemeKit
import TextBundle

/// Bear: `NoteEditorCoreViewController` (BearCore) — assembles the scroll view,
/// the text view, the editor controller, and re-styles on theme changes
/// (`SFStylable`).
public final class MDEditorViewController: NSViewController, SFStylable {
    public private(set) var textView: MDTextView!
    public private(set) var scrollView: NSScrollView!
    public private(set) var editorController: MDEditorController!
    public let themeManager: SFThemeManager
    private var pendingMarkdown: String?

    public init(themeManager: SFThemeManager = .shared) {
        self.themeManager = themeManager
        super.init(nibName: nil, bundle: nil)
    }

    public required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    public override func loadView() {
        let context = MDStylerContext(themeManager: themeManager)
        textView = MDTextView.make(context: context)
        editorController = MDEditorController(context: context)
        textView.editorController = editorController

        scrollView = NSScrollView(frame: NSRect(x: 0, y: 0, width: 800, height: 600))
        scrollView.hasVerticalScroller = true
        scrollView.hasHorizontalScroller = false
        scrollView.borderType = .noBorder
        scrollView.documentView = textView
        scrollView.drawsBackground = true
        scrollView.backgroundColor = context.backgroundColor
        textView.frame = NSRect(origin: .zero, size: scrollView.contentSize)
        view = scrollView

        themeManager.registerStylableObject(self)
        if let md = pendingMarkdown { pendingMarkdown = nil; load(markdown: md) }
    }

    // MARK: Content

    /// Bear: `loadNote(note:)`
    public func load(markdown: String) {
        guard isViewLoaded else { pendingMarkdown = markdown; return }
        editorController.load(markdown, into: textView)
    }

    public var markdown: String { editorController?.markdown ?? pendingMarkdown ?? "" }

    // MARK: TextBundle documents (Bear: MDImporters / MDExporters + TextBundle.framework)

    /// The bundle the editor is showing, if the note was opened from or saved to one.
    public private(set) var textBundle: TextBundle?

    /// Opens a `.textbundle` / `.textpack` and loads its text.
    public func load(textBundle bundle: TextBundle) {
        textBundle = bundle
        load(markdown: bundle.text)
    }

    public func open(textBundleAt url: URL) throws {
        load(textBundle: try TextBundle(contentsOf: url))
    }

    /// Saves the current text into `url` (`.textbundle` directory or `.textpack` archive). Creates a new
    /// bundle when none is loaded, otherwise updates the loaded one (assets are carried over).
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

    /// Resolves `assets/...` references from the text against the loaded bundle.
    public func assetURL(for relativePath: String) -> URL? { textBundle?.assetURL(for: relativePath) }

    // MARK: SFStylable (Bear: styleObject(with:))

    public func styleObject(with themeManager: SFThemeManager) {
        guard isViewLoaded else { return }
        let context = MDStylerContext(themeManager: themeManager)
        editorController.context = context
        scrollView.backgroundColor = context.backgroundColor
        textView.mdLayoutManager?.context = context
    }

    // MARK: Format actions (wired to menu items by the app)

    @objc public func toggleStrong(_ sender: Any?) { editorController.toggleInlineStyle(.strong) }
    @objc public func toggleEmphasis(_ sender: Any?) { editorController.toggleInlineStyle(.emphasis) }
    @objc public func toggleStrikethrough(_ sender: Any?) { editorController.toggleInlineStyle(.strikethrough) }
    @objc public func toggleUnderline(_ sender: Any?) { editorController.toggleInlineStyle(.underline) }
    @objc public func toggleHighlighter(_ sender: Any?) { editorController.toggleInlineStyle(.highlighter) }
    @objc public func toggleCode(_ sender: Any?) { editorController.toggleInlineStyle(.code) }
    @objc public func toggleHeading1(_ sender: Any?) { editorController.toggleBlockStyle(.heading(1)) }
    @objc public func toggleHeading2(_ sender: Any?) { editorController.toggleBlockStyle(.heading(2)) }
    @objc public func toggleHeading3(_ sender: Any?) { editorController.toggleBlockStyle(.heading(3)) }
    @objc public func toggleUnorderedList(_ sender: Any?) { editorController.toggleBlockStyle(.unorderedList) }
    @objc public func toggleOrderedList(_ sender: Any?) { editorController.toggleBlockStyle(.orderedList) }
    @objc public func toggleTaskList(_ sender: Any?) { editorController.toggleBlockStyle(.taskList) }
    @objc public func toggleBlockQuote(_ sender: Any?) { editorController.toggleBlockStyle(.blockquote) }
    @objc public func toggleCodeBlock(_ sender: Any?) { editorController.toggleBlockStyle(.fencedCode) }
    @objc public func insertThematicBreak(_ sender: Any?) { editorController.insertThematicBreak() }
    @objc public func addIndent(_ sender: Any?) { editorController.addIndent() }
    @objc public func removeIndent(_ sender: Any?) { editorController.removeIndent() }
    @objc public func toggleMarkdownHiding(_ sender: Any?) {
        editorController.autoHideMarkdown.toggle()
        if !editorController.autoHideMarkdown, let s = textView.mdTextStorage {
            s.beginEditing(); editorController.hider.showMarkdown(in: s, range: NSRange(location: 0, length: s.length)); s.endEditing()
        } else {
            editorController.restyleAll()
        }
    }
    @objc public func toggleBackgroundGrid(_ sender: Any?) {
        textView.mdLayoutManager?.showBackgroundGrid.toggle()
        textView.needsDisplay = true
    }
}
