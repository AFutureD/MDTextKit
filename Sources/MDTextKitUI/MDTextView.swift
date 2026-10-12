import AppKit
import MDTextKit
import PolarMark

/// Bear: `MDTextView : NSTextView` (MDTextKitUI, Swift). Routes every edit, key command and selection
/// change through `MDEditorController`, exactly the way Bear's view does.
public class MDTextView: NSTextView, NSTextViewDelegate {
    public let editorController: MDEditorController
    private var trackingArea: NSTrackingArea?
    private var lastSelection = NSRange(location: 0, length: 0)

    /// Builds the TextKit 1 stack (`MDTextStorage` + `MDLayoutManager` + `MDTextContainer`).
    public init(frame: NSRect, editorController: MDEditorController) {
        self.editorController = editorController
        let storage = MDTextStorage()
        let layoutManager = MDLayoutManager()
        let container = MDTextContainer(size: NSSize(width: frame.width, height: CGFloat.greatestFiniteMagnitude))
        container.widthTracksTextView = true
        layoutManager.addTextContainer(container)
        storage.addLayoutManager(layoutManager)
        super.init(frame: frame, textContainer: container)
        setup()
    }

    public required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    private func setup() {
        isRichText = false
        importsGraphics = false
        allowsUndo = true
        isAutomaticQuoteSubstitutionEnabled = false
        isAutomaticDashSubstitutionEnabled = false
        isAutomaticTextReplacementEnabled = false
        isAutomaticSpellingCorrectionEnabled = false
        isContinuousSpellCheckingEnabled = false   // Bear: MDTextViewContinuousSpellCheckingEnabled user default (off on this Mac)
        isAutomaticLinkDetectionEnabled = false
        usesFindBar = true
        isIncrementalSearchingEnabled = true
        textContainerInset = .zero   // Bear: defaultTextContainerInset = (0, 0); the host adds its own
        isVerticallyResizable = true
        isHorizontallyResizable = false
        autoresizingMask = [.width]
        minSize = NSSize(width: 0, height: 0)
        maxSize = NSSize(width: CGFloat.greatestFiniteMagnitude, height: CGFloat.greatestFiniteMagnitude)
        linkTextAttributes = [:]
        smartInsertDeleteEnabled = false
        delegate = self
    }

    public var mdLayoutManager: MDLayoutManager { layoutManager as! MDLayoutManager }
    public var mdTextStorage: MDTextStorage { textStorage as! MDTextStorage }
    public var mdTextContainer: MDTextContainer { textContainer as! MDTextContainer }

    /// The markdown behind the attributed string (attachments expanded).
    public var markdown: String { mdTextStorage.stringByExpandingTextAttachments }

    // MARK: Editing hooks

    /// Bear: styling runs from `didChangeText`.
    /// Bear: the editor's dedicated undo manager (`NoteEditorViewController.editorUndoManager`, returned from
    /// `undoManagerForTextView:`); the window's manager is never used.
    public let editorUndoManager = UndoManager()
    public func undoManager(for view: NSTextView) -> UndoManager? { editorUndoManager }

    /// Bear (MDTextView.didChangeText): super, then after an undo/redo the delegate's `textViewDidUndoOrRedo` runs
    /// asynchronously (the host makes the text view first responder again).
    public override func didChangeText() {
        super.didChangeText()
        if let um = undoManager, um.isUndoing || um.isRedoing {
            DispatchQueue.main.async { [weak self] in
                guard let self = self, self.window != nil else { return }
                self.window?.makeFirstResponder(self)
            }
        }
    }

    /// Bear (host `textDidChange:`): restyle after every change, including undo/redo.
    public func textDidChange(_ notification: Notification) {
        editorController.performStyling(in: self)
        editorController.fixTypingAttributes(in: self)
        editorController.notifyTextChanges(in: self)
        removeOrphanedAttachmentViews()
    }

    /// Drops views of view-backed attachments that are no longer in the text storage.
    public func removeOrphanedAttachmentViews() {
        var live = Set<ObjectIdentifier>()
        mdTextStorage.enumerateAttribute(.attachment, in: NSRange(location: 0, length: mdTextStorage.length), options: []) { v, _, _ in
            if let a = v as? SFTextAttachmentView, let c = a.attachmentViewController { live.insert(ObjectIdentifier(c.view)) }
        }
        for sub in subviews where sub is MDTableAttachmentView && !live.contains(ObjectIdentifier(sub)) { sub.removeFromSuperview() }
    }

    public override func shouldChangeText(in affectedCharRange: NSRange, replacementString: String?) -> Bool {
        guard super.shouldChangeText(in: affectedCharRange, replacementString: replacementString) else { return false }
        return editorController.textView(self, shouldChangeTextIn: affectedCharRange, replacementString: replacementString)
    }

    public func textView(_ textView: NSTextView, willChangeSelectionFromCharacterRange old: NSRange, toCharacterRange new: NSRange) -> NSRange {
        editorController.adjustedSelection(for: self, currentSelection: old, proposedSelection: new)
    }

    /// Bear (NoteEditorViewController.textViewDidChangeSelection + BearCore adjustMarkdownHidingFor(selection:)):
    /// typing attributes first, then an asynchronous show/hide pass — only while the view is first responder.
    public func textViewDidChangeSelection(_ notification: Notification) {
        editorController.fixTypingAttributes(in: self)
        if window?.firstResponder === self {
            DispatchQueue.main.async { [weak self] in
                guard let self = self else { return }
                let sel = self.selectedRange()
                if self.editorController.autoHideMarkdown, !self.hasMarkedText() {
                    self.editorController.autoHideMarkdown(in: self, forOldSelectionRange: self.lastSelection, newSelectionRange: sel)
                }
                self.lastSelection = sel
            }
        }
        editorController.notifyTextSelectionChanges(in: self)
    }

    public override func becomeFirstResponder() -> Bool {
        let ok = super.becomeFirstResponder()
        if ok { editorController.autodisableLinks(in: self) }
        return ok
    }

    public override func resignFirstResponder() -> Bool {
        let ok = super.resignFirstResponder()
        if ok { editorController.autodisableLinks(in: self) }
        return ok
    }

    // MARK: Key commands (Bear forwards these to the controller before NSTextView handles them)

    public override func insertNewline(_ sender: Any?) {
        // Bear: Shift-Return bypasses the AST newline handling (plain line break).
        if NSApp.currentEvent?.modifierFlags.contains(.shift) == true { super.insertNewline(sender); return }
        if editorController.textViewShouldInsertNewLine(self) { super.insertNewline(sender) }
    }

    /// Bear (BearCore handleLeftArrow/handleRightArrow): the arrow keys enter a table from either side.
    public override func moveLeft(_ sender: Any?) {
        let sel = selectedRange()
        if sel.length == 0, sel.location >= 1, let vc = tableController(at: sel.location - 1) {
            vc.enter(fromRight: true); return
        }
        super.moveLeft(sender)
    }

    public override func moveRight(_ sender: Any?) {
        let sel = selectedRange()
        if sel.length == 0, sel.location < mdTextStorage.length, let vc = tableController(at: sel.location) {
            vc.enter(fromRight: false); return
        }
        super.moveRight(sender)
    }

    private func tableController(at index: Int) -> MDTableAttachmentViewController? {
        (mdTextStorage.textAttachment(at: index) as? MDTableTextAttachment)?.attachmentViewController as? MDTableAttachmentViewController
    }

    /// Bear (MDTextView.selectAll → PMK SelectAllText): inside a fenced code / math block the first ⌘A selects the
    /// block content, the second selects everything.
    public override func selectAll(_ sender: Any?) {
        let ts = mdTextStorage
        let sel = ts.stringRange(fromAttributedStringRange: selectedRange())
        if let r = ts.ast.selectAllText(in: sel, selectionRange: sel).last {
            setSelectedRange(ts.attributedStringRange(fromStringRange: r.proposedSelection))
        } else {
            super.selectAll(sender)
        }
    }

    public override func insertTab(_ sender: Any?) {
        if editorController.textViewShouldInsertTab(self) { super.insertTab(sender) }
    }

    public override func insertBacktab(_ sender: Any?) {
        if editorController.textViewShouldRemoveTab(self) { super.insertBacktab(sender) }
    }

    public override func deleteBackward(_ sender: Any?) {
        if editorController.textViewShouldDeleteBackward(self) { super.deleteBackward(sender) }
    }

    public override func deleteForward(_ sender: Any?) {
        if editorController.textViewShouldDeleteForward(self) { super.deleteForward(sender) }
    }

    public override func moveToLeftEndOfLine(_ sender: Any?) {
        if !editorController.handleMoveToLeftEndOfLine(in: self, extendSelection: false) { super.moveToLeftEndOfLine(sender) }
    }

    public override func moveToLeftEndOfLineAndModifySelection(_ sender: Any?) {
        if !editorController.handleMoveToLeftEndOfLine(in: self, extendSelection: true) { super.moveToLeftEndOfLineAndModifySelection(sender) }
    }

    public override func deleteToBeginningOfLine(_ sender: Any?) {
        if !editorController.handleDeleteToBeginningOfLine(in: self) { super.deleteToBeginningOfLine(sender) }
    }

    // MARK: Mouse (checkbox toggling, link pointer)

    /// Character index of the attachment under `point` (view coordinates).
    public func attachmentIndex(at point: NSPoint) -> Int? {
        let local = NSPoint(x: point.x - textContainerOrigin.x, y: point.y - textContainerOrigin.y)
        let r = mdLayoutManager.rangeOfTextAttachment(near: local, withDelta: 2)
        return r.location == NSNotFound ? nil : r.location
    }

    // Bear: MDTextView.mouseDown only calls super; attachment clicks arrive through the cell tracking →
    // `textView:clickedOnCell:inRect:atIndex:` (NoteEditorViewController) → `didInteract(with:at:)` (BearCore).
    public func textView(_ textView: NSTextView, clickedOnCell cell: NSTextAttachmentCellProtocol, in cellFrame: NSRect, at charIndex: Int) {
        guard let att = cell.attachment as? SFTextAttachment else { return }
        let flags = NSApp.currentEvent?.modifierFlags ?? []
        if flags.contains(.command) {
            if att is MDUnorderedListTextAttachment || att is MDOrderedListTextAttachment || att is MDATXHeadingAttachment {
                editorController.toggleFolding(at: charIndex, in: self)
            }
            return
        }
        if att is MDATXHeadingAttachment {
            showHeadingLevelMenu(at: charIndex, cellFrame: cellFrame)
        } else if att is MDLinkTextAttachment, let url = linkURL(at: charIndex) {
            NSWorkspace.shared.open(url)
        } else if att is MDHighlighterTextAttachment || att is MDCalloutTextAttachment {
            setSelectedRange(NSRange(location: charIndex, length: 1))   // Bear pops the highlighter / callout menu here
        } else if !didInteract(with: att, at: charIndex) {
            window?.makeFirstResponder(self)
            setSelectedRange(NSRange(location: charIndex, length: 1))
        }
    }

    public func textView(_ textView: NSTextView, doubleClickedOnCell cell: NSTextAttachmentCellProtocol, in cellFrame: NSRect, at charIndex: Int) {
        self.textView(textView, clickedOnCell: cell, in: cellFrame, at: charIndex)
    }

    /// Bear: `NoteEditorCoreViewController.didInteract(with:at:)` — tasks toggle, fold pills unfold.
    public func didInteract(with attachment: SFTextAttachment, at index: Int) -> Bool {
        if attachment is MDTaskTextAttachment, isEditable {
            editorController.toggleTask(in: self, range: NSRange(location: index, length: 1), style: 0)
            return true
        }
        if attachment is MDFoldTextAttachment, isEditable {
            editorController.toggleFolding(at: index, in: self)
            needsDisplay = true
            return true
        }
        return false
    }

    private func linkURL(at index: Int) -> URL? {
        guard index < mdTextStorage.length else { return nil }
        if let u = mdTextStorage.attribute(.link, at: index, effectiveRange: nil) { return (u as? URL) ?? (u as? String).flatMap { URL(string: $0) } }
        if let u = mdTextStorage.attribute(.pmkLinkURL, at: index, effectiveRange: nil) as? String { return URL(string: u) }
        return nil
    }

    /// Bear: heading-level popup when the `#` attachment is clicked (NoteEditorViewController headingMenu).
    private func showHeadingLevelMenu(at index: Int, cellFrame: NSRect) {
        let level = mdTextStorage.headerLevel(at: index)
        let menu = NSMenu()
        for l in 1...6 {
            let item = NSMenuItem(title: "Heading \(l)", action: #selector(headingMenuItemSelected(_:)), keyEquivalent: "")
            item.target = self
            item.tag = l
            item.state = l == level ? .on : .off
            menu.addItem(item)
        }
        setSelectedRange(NSRange(location: index, length: 0))
        menu.popUp(positioning: nil, at: NSPoint(x: cellFrame.minX, y: cellFrame.maxY + 5), in: self)
    }

    @objc private func headingMenuItemSelected(_ sender: NSMenuItem) {
        editorController.toggleHeading(in: self, headingLevel: sender.tag)
    }

    public override func mouseMoved(with event: NSEvent) {
        let p = convert(event.locationInWindow, from: nil)
        if let idx = attachmentIndex(at: p), mdTextStorage.textAttachment(at: idx) is MDTaskTextAttachment {
            NSCursor.pointingHand.set()
            return
        }
        super.mouseMoved(with: event)
    }

    public override func updateTrackingAreas() {
        super.updateTrackingAreas()
        if let t = trackingArea { removeTrackingArea(t) }
        let t = NSTrackingArea(rect: bounds, options: [.mouseMoved, .activeInKeyWindow, .inVisibleRect], owner: self, userInfo: nil)
        addTrackingArea(t)
        trackingArea = t
    }

    // MARK: Pasteboard (Bear: MDTextView + NoteEditorViewController shouldWrite/ReadSelection)

    public static let attributedStringPboardType = NSPasteboard.PasteboardType("MDTextViewAttributedStringPboardType")

    public override var writablePasteboardTypes: [NSPasteboard.PasteboardType] {
        var types: [NSPasteboard.PasteboardType] = [.rtfd, MDTextView.attributedStringPboardType, .string]
        let sel = selectedRange()
        let ns = mdTextStorage.string as NSString
        let singleObject = sel.length == 1 || (sel.length == 2 && sel.location + 1 < ns.length && ns.character(at: sel.location + 1) == 0x0A)
        if singleObject, sel.location < mdTextStorage.length, let a = mdTextStorage.attribute(.attachment, at: sel.location, effectiveRange: nil) as? MDImageTextAttachment, a.resolvedFileURL != nil {
            types.append(.fileURL)
        }
        return types
    }

    public override var readablePasteboardTypes: [NSPasteboard.PasteboardType] {
        [MDTextView.attributedStringPboardType, .fileURL, .pdf, .tiff, NSPasteboard.PasteboardType("com.apple.drawing")] + super.readablePasteboardTypes
    }

    public override func writeSelection(to pboard: NSPasteboard, type: NSPasteboard.PasteboardType) -> Bool {
        let sel = selectedRange()
        guard NSMaxRange(sel) <= mdTextStorage.length else { return false }
        switch type {
        case MDTextView.attributedStringPboardType:
            if let data = mdTextStorage.attributedSubstring(from: sel).dataFromPolarRepresentation() { pboard.setData(data, forType: type); return true }
            return false
        case .string:
            pboard.setString(mdTextStorage.stringByExpandingTextAttachments(in: sel), forType: .string)
            return true
        case .fileURL:
            if let a = mdTextStorage.textAttachment(at: sel.location) as? MDImageTextAttachment, let url = a.resolvedFileURL {
                pboard.setData(url.dataRepresentation, forType: .fileURL); return true
            }
            return false
        case .rtfd:
            // Bear: MDRTFExporter renders the markdown to rich text; here the styled text with attachments expanded.
            let rich = MDRTFImporter.richText(fromStyled: mdTextStorage.attributedSubstring(from: sel))
            if let data = try? rich.data(from: NSRange(location: 0, length: rich.length), documentAttributes: [.documentType: NSAttributedString.DocumentType.rtfd]) {
                pboard.setData(data, forType: .rtfd); return true
            }
            return false
        default:
            return super.writeSelection(to: pboard, type: type)
        }
    }

    public override func readSelection(from pboard: NSPasteboard, type: NSPasteboard.PasteboardType) -> Bool {
        // Bear's delegate ignores `type` and reads the whole pasteboard itself; false → AppKit's plain-string paste.
        if readPasteboard(pboard) { return true }
        return super.readSelection(from: pboard, type: type)
    }

    /// Bear: NoteEditorViewController.textView(_:shouldReadSelectionFrom:type:) + MDPasteboardReader.
    private func readPasteboard(_ pb: NSPasteboard) -> Bool {
        let dest = rangeForUserTextChange
        if internalDraggingRange.location != NSNotFound {
            _ = editorController.dragRange(internalDraggingRange, toRange: dest, in: self, dropAsNewLine: singleLineDragging)
            return true
        }
        // URL over a selection → markdown link
        if let url = pb.string(forType: .URL).flatMap(URL.init(string:)) ?? (pb.readObjects(forClasses: [NSURL.self], options: nil)?.first as? URL), !url.isFileURL {
            let sel = selectedRange()
            let selected = (mdTextStorage.string as NSString).substring(with: sel)
            if sel.length > 0, !mdTextStorage.isRangeInsideLink(sel), !selected.trimmingCharacters(in: .whitespaces).isEmpty, !selected.contains("\n") {
                let md = mdTextStorage.isRangeInsideCode(sel) ? url.absoluteString : MDEditorController.markdownLink(label: selected, url: url.absoluteString)
                editorController.replaceCharacters(in: sel, with: NSAttributedString(string: md), in: self)
                return true
            }
        }
        let reader = MDPasteboardReader()
        reader.pasteDestinationInsideCode = mdTextStorage.isRangeInsideCode(dest)
        reader.markdownRenderer = editorController.attributedStringRenderer
        reader.readURLsBlock = { [weak self] urls in
            guard let self = self else { return }
            let md = urls.map { MDEditorController.markdownLink(label: $0.lastPathComponent.isEmpty ? $0.absoluteString : $0.lastPathComponent, url: $0.absoluteString) }.joined(separator: "\n")
            self.editorController.replaceCharacters(in: self.rangeForUserTextChange, with: NSAttributedString(string: md), in: self)
        }
        reader.readFilesBlock = { [weak self] urls in self?.addFilesBlock?(urls, self?.rangeForUserTextChange ?? dest) }
        reader.readAttributedStringBlock = { [weak self] a in self?.insertPasted(a, at: dest) }
        return reader.read(from: pb, withAttachments: addFilesBlock != nil)
    }

    /// Host hook (Bear: NoteEditorCoreViewController.addFiles(from:in:)) — copies files into the note's assets and
    /// inserts `![name](assets/name)`.
    public var addFilesBlock: (([URL], NSRange) -> Void)?

    /// Bear: NoteEditorViewController readAttributedStringBlock.
    private func insertPasted(_ pasted: NSAttributedString, at dest: NSRange) {
        guard pasted.length > 0 else { return }
        let full = NSRange(location: 0, length: pasted.length)
        if singleLineDragging {
            let m = NSMutableAttributedString(attributedString: pasted)
            let ns = mdTextStorage.string as NSString
            if dest.location > 0, ns.character(at: dest.location - 1) != 0x0A { m.insert(NSAttributedString(string: "\n"), at: 0) }
            if dest.location < ns.length, !m.string.hasSuffix("\n") { m.append(NSAttributedString(string: "\n")) }
            editorController.replaceCharacters(in: dest, with: m, in: self)
            return
        }
        let sel = selectedRange()
        let selected = (mdTextStorage.string as NSString).substring(with: sel)
        let selectable = sel.length >= 1 && !mdTextStorage.isRangeInsideLink(sel) && !selected.trimmingCharacters(in: .whitespaces).isEmpty && !selected.contains("\n")
        var linkRange = NSRange()
        if let u = pasted.attribute(.pmkLinkURL, at: 0, longestEffectiveRange: &linkRange, in: full) as? String, linkRange == full, let url = URL(string: u), selectable {
            editorController.replaceCharacters(in: sel, with: editorController.styledAttributedString(fromString: MDEditorController.markdownLink(label: selected, url: url.absoluteString)), in: self)
            return
        }
        let lower = pasted.string.lowercased()
        if ["http://", "https://", "omnifocus://", "readdle-spark://", "things:/"].contains(where: { lower.hasPrefix($0) }), selectable {
            editorController.replaceCharacters(in: sel, with: editorController.styledAttributedString(fromString: MDEditorController.markdownLink(label: selected, url: pasted.string)), in: self)
            return
        }
        if !pasted.containsFileBackedAttachments(in: full) {
            let md = pasted.stringByExpandingTextAttachments
            if editorController.pasteCorrection(forReplacementString: md, range: dest, in: self) { return }
        }
        let m = NSMutableAttributedString(attributedString: pasted)
        m.enumerateAttribute(.attachment, in: full, options: [.reverse]) { v, r, _ in
            if let a = v as? SFTextAttachment { m.replaceCharacters(in: r, with: NSAttributedString(string: a.representedText)) }
        }
        m.removeAttribute(.mdSpacer, range: NSRange(location: 0, length: m.length))
        editorController.replaceCharacters(in: dest, with: m, in: self)
    }

    // MARK: Drag & drop (Bear: internalDraggingRange / singleLineDragging / line insertion point)

    public var internalDraggingRange = NSRange(location: NSNotFound, length: 0)
    public private(set) var singleLineDragging = false
    private var selectionRectDuringDrag = CGRect.zero
    private var lineInsertionPointRect = CGRect.zero

    public override var rangeForUserTextChange: NSRange {
        singleLineDragging ? NSRange(location: lineInsertionIndex(), length: 0) : super.rangeForUserTextChange
    }

    public override func draggingEntered(_ sender: NSDraggingInfo) -> NSDragOperation {
        internalDraggingRange = (sender.draggingSource as? NSObject) === self ? selectedRange() : NSRange(location: NSNotFound, length: 0)
        if shouldSingleLineDrag(for: sender.draggingPasteboard) {
            singleLineDragging = true
            let g = mdLayoutManager.glyphRange(forCharacterRange: selectedRange(), actualCharacterRange: nil)
            selectionRectDuringDrag = mdLayoutManager.boundingRect(forGlyphRange: g, in: mdTextContainer).offsetBy(dx: textContainerOrigin.x, dy: textContainerOrigin.y)
        }
        return super.draggingEntered(sender)
    }

    public override func draggingUpdated(_ sender: NSDraggingInfo) -> NSDragOperation {
        guard singleLineDragging else { return super.draggingUpdated(sender) }
        let old = lineInsertionPointRect
        lineInsertionPointRect = lineInsertionPointRect(for: sender.draggingLocation)
        if !old.equalTo(lineInsertionPointRect) {
            if selectionRectDuringDrag.contains(convert(sender.draggingLocation, from: nil)) {
                lineInsertionPointRect = .zero
                setNeedsDisplay(old, avoidAdditionalLayout: true)
            } else {
                setNeedsDisplay(old.union(lineInsertionPointRect), avoidAdditionalLayout: true)
            }
        }
        return .generic
    }

    public override func draggingEnded(_ sender: NSDraggingInfo) {
        internalDraggingRange = NSRange(location: NSNotFound, length: 0)
        singleLineDragging = false
        setNeedsDisplay(lineInsertionPointRect, avoidAdditionalLayout: true)
        super.draggingEnded(sender)
    }

    public override func prepareForDragOperation(_ sender: NSDraggingInfo) -> Bool {
        super.prepareForDragOperation(sender) || !lineInsertionPointRect.equalTo(.zero)
    }

    public override func performDragOperation(_ sender: NSDraggingInfo) -> Bool {
        if super.performDragOperation(sender) { return true }
        if lineInsertionPointRect.equalTo(.zero) { return false }
        _ = readSelection(from: sender.draggingPasteboard, type: MDTextView.attributedStringPboardType)
        return true
    }

    /// Bear: `shouldSingleLineDragFor:` — block-level drags (list items, headings, tables, rules, quotes) drop as whole lines.
    private func shouldSingleLineDrag(for pb: NSPasteboard) -> Bool {
        guard let data = pb.data(forType: MDTextView.attributedStringPboardType), let a = NSMutableAttributedString.attributedString(fromPolarData: data), a.length > 0 else { return false }
        var i = 0
        if a.textAttachment(at: 0) is MDIndentSpaceTextAttachment, a.length > 1 { i = 1 }
        let att = a.textAttachment(at: i)
        return att is MDUnorderedListTextAttachment || att is MDOrderedListTextAttachment || att is MDTaskTextAttachment || att is MDATXHeadingAttachment
            || att is MDTableTextAttachment || att is MDThematicBreakTextAttachment || att is MDBlockQuoteTextAttachment
    }

    public func lineInsertionIndex() -> Int {
        let r = lineInsertionPointRect
        let probe = CGRect(x: r.minX, y: r.minY + r.height * 0.5, width: r.width, height: 1)
        let g = mdLayoutManager.glyphRange(forBoundingRect: probe, in: mdTextContainer)
        let c = mdLayoutManager.characterRange(forGlyphRange: g, actualGlyphRange: nil)
        return c.length == 0 ? mdTextStorage.length : c.location
    }

    public func lineInsertionPointRect(for windowPoint: NSPoint) -> CGRect {
        let p = convert(windowPoint, from: nil)
        let local = NSPoint(x: p.x - textContainerOrigin.x, y: p.y - textContainerOrigin.y)
        let idx = mdLayoutManager.characterIndex(for: local, in: mdTextContainer, fractionOfDistanceBetweenInsertionPoints: nil)
        let ns = mdTextStorage.string as NSString
        guard ns.length > 0 else { return .zero }
        let i = min(idx, ns.length - 1)
        var range = ns.paragraphRange(for: NSRange(location: i, length: 0))
        if mdTextStorage.isRangeInsideList(NSRange(location: i, length: 0)) { range = mdTextStorage.rangeOfListItem(at: i) }
        let glyphs = mdLayoutManager.glyphRange(forCharacterRange: range, actualCharacterRange: nil)
        var rect = CGRect.null
        mdLayoutManager.enumerateLineFragments(forGlyphRange: glyphs) { frag, _, _, _, _ in rect = rect.union(frag) }
        if rect.isNull { rect = mdLayoutManager.lineFragmentRect(forGlyphAt: glyphs.location, effectiveRange: nil) }
        rect.origin.y += textContainerOrigin.y
        rect.origin.x += mdTextContainer.lineFragmentPadding
        rect.size.width -= 2 * mdTextContainer.lineFragmentPadding
        if p.y >= rect.minY + rect.height / 2 { rect.origin.y += rect.height }
        rect.size.height = max(mdLayoutManager.basePointSize, 1)
        return rect
    }

    public override func draw(_ dirtyRect: NSRect) {
        super.draw(dirtyRect)
        if singleLineDragging { drawLineInsertionPoint(lineInsertionPointRect) }
    }

    /// Bear: `drawLineInsertionPoint` — chevron plus a bar in the insertion point colour.
    private func drawLineInsertionPoint(_ rect: CGRect) {
        guard !rect.equalTo(.zero) else { return }
        let lw = max(mdLayoutManager.basePointSize, 1), h = rect.height
        let chevron = NSBezierPath()
        chevron.move(to: NSPoint(x: rect.minX + 0.21429 * h, y: rect.minY + 0.92857 * h))
        chevron.line(to: NSPoint(x: rect.minX + 0.78571 * h, y: rect.minY + 0.5 * h))
        chevron.line(to: NSPoint(x: rect.minX + 0.21429 * h, y: rect.minY + 0.07143 * h))
        chevron.lineWidth = lw; chevron.lineCapStyle = .round; chevron.lineJoinStyle = .round
        insertionPointColor.setStroke(); chevron.stroke()
        insertionPointColor.withAlphaComponent(0.66).setFill()
        NSBezierPath(rect: CGRect(x: floor(rect.minX + 10 * lw), y: floor(rect.minY + h / 2 - lw / 2), width: rect.width, height: lw)).fill()
    }
}
