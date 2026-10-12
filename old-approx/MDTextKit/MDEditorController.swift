import AppKit
import PolarMark

/// Bear: `MDEditorBehaviourController` — collects the "automatic" edit
/// behaviours (newline continuation, tab indentation, smart backspace) and asks
/// the AST for the replacement each one produces.
public final class MDEditorBehaviourController {
    public init() {}

    public func newline(in ast: PMKAST, selection: NSRange) -> PMKASTOperationResult { ast.insertNewline(selection: selection) }
    public func tab(in ast: PMKAST, selection: NSRange) -> PMKASTOperationResult? {
        // Tab only indents inside lists / quotes; elsewhere a literal tab is inserted by the text view.
        guard ast.listItem(at: selection.location) != nil else { return nil }
        return ast.indent(selection: selection)
    }
    public func backtab(in ast: PMKAST, selection: NSRange) -> PMKASTOperationResult? { ast.outdent(selection: selection) }
    public func deleteBackward(in ast: PMKAST, selection: NSRange) -> PMKASTOperationResult? { ast.deletePrevious(selection: selection) }
}

/// Bear: `MDEditorController`. The glue between NSTextView, MDTextStorage, the
/// renderer and the hider. It is the text storage's delegate (re-styling) and the
/// text view's delegate (selection-driven marker hiding, key commands).
public final class MDEditorController: NSObject, MDTextStorageDelegate, NSTextViewDelegate {
    public let renderer: MDAttributedStringRenderer
    public let hider = MDMarkdownHider()
    public let behaviour = MDEditorBehaviourController()
    public var autoHideMarkdown = true
    public weak var textView: NSTextView?
    /// Bear keeps one undo manager per note; the text view asks for it through the delegate.
    public let undoManager = UndoManager()
    private var lastSelection: NSRange?
    private var styling = false

    public var context: MDStylerContext {
        didSet {
            renderer.context = context
            (textView?.layoutManager as? MDLayoutManager)?.context = context
            restyleAll()
        }
    }

    public init(context: MDStylerContext) {
        self.context = context
        self.renderer = MDAttributedStringRenderer(context: context)
        super.init()
    }

    public var storage: MDTextStorage? { textView?.textStorage as? MDTextStorage }

    // MARK: Loading

    /// Bear: `-[MDEditorController loadString:intoTextView:]`
    public func load(_ markdown: String, into textView: NSTextView) {
        self.textView = textView
        textView.delegate = self
        guard let storage = textView.textStorage as? MDTextStorage else { return }
        storage.mdDelegate = self
        undoManager.removeAllActions()
        storage.loadMarkdown(markdown)
        textView.setSelectedRange(NSRange(location: 0, length: 0))
        lastSelection = NSRange(location: 0, length: 0)
        textViewDidChangeText()
        applyViewAppearance()
    }

    public func applyViewAppearance() {
        guard let tv = textView else { return }
        tv.backgroundColor = context.backgroundColor
        tv.insertionPointColor = context.cursorColor
        tv.selectedTextAttributes = [.backgroundColor: context.selectionColor]
        tv.typingAttributes = context.bodyAttributes
        (tv.textContainer as? MDTextContainer)?.maxColumnWidth = context.maxColumnWidth
        tv.needsDisplay = true
    }

    // MARK: Styling (Bear: performStylingInTextView:)

    public func textStorage(_ storage: MDTextStorage, processedChangesIn reparsedRange: NSRange, editedRange: NSRange) {
        // Nothing to do here: the storage keeps the range pending and the text view's
        // `didChangeText()` calls `textViewDidChangeText()` once the character edit is complete.
    }

    /// Bear: `-[MDTextView didChangeText]` → `performStylingInTextView:`. Styles whatever the
    /// storage reparsed since the last call, as a separate attributes-only editing pass.
    public func textViewDidChangeText() {
        guard let tv = textView, let storage = storage, let range = storage.consumePendingStylingRange() else { return }
        storage.beginEditing()
        performStyling(in: storage, range: range, selection: tv.selectedRange())
        storage.endEditing()
        lastSelection = tv.selectedRange()
        fixTypingAttributes()
    }

    public func performStyling(in storage: MDTextStorage, range: NSRange, selection: NSRange) {
        guard !styling, storage.length > 0 else { return }
        styling = true
        defer { styling = false }
        let ns = storage.string as NSString
        var r = ns.paragraphRange(for: NSIntersectionRange(range, NSRange(location: 0, length: ns.length)))
        if r.length == 0 { r = NSRange(location: 0, length: ns.length) }
        let annotated = storage.ast.annotatedString(forRange: r)
        renderer.restyle(storage, annotated: annotated, range: r)
        if autoHideMarkdown {
            hider.updateHiding(in: storage, range: r, selection: selection)
        }
    }

    public func restyleAll() {
        guard let storage = storage, storage.length > 0 else { applyViewAppearance(); return }
        storage.beginEditing()
        performStyling(in: storage, range: NSRange(location: 0, length: storage.length), selection: textView?.selectedRange() ?? NSRange(location: 0, length: 0))
        storage.endEditing()
        applyViewAppearance()
    }

    // MARK: NSTextViewDelegate — selection drives marker visibility

    public func undoManager(for view: NSTextView) -> UndoManager? { undoManager }

    public func textViewDidChangeSelection(_ notification: Notification) {
        guard let tv = textView, let storage = storage, autoHideMarkdown, !styling else { return }
        let sel = tv.selectedRange()
        storage.beginEditing()
        hider.showHideMarkdown(in: storage, oldSelection: lastSelection, newSelection: sel)
        storage.endEditing()
        lastSelection = sel
        fixTypingAttributes()
        NotificationCenter.default.post(name: MDTextViewTextDidChangeSelectionNotification, object: tv)
    }

    public func textDidChange(_ notification: Notification) {
        NotificationCenter.default.post(name: MDTextViewTextDidChangeNotification, object: textView)
    }

    /// Bear: `fixTypingAttributesInTextView:` — never let a hidden marker's 0.01pt font leak into typed text.
    public func fixTypingAttributes() {
        guard let tv = textView, let storage = storage else { return }
        let loc = tv.selectedRange().location
        var attrs = context.bodyAttributes
        if loc > 0, loc <= storage.length {
            let prev = storage.attributes(at: loc - 1, effectiveRange: nil)
            if prev[.mdHidden] == nil, let f = prev[.font] as? NSFont, f.pointSize > 1 {
                attrs[.font] = f
                if let c = prev[.foregroundColor] { attrs[.foregroundColor] = c }
            }
            if let p = prev[.paragraphStyle] { attrs[.paragraphStyle] = p }
        }
        tv.typingAttributes = attrs
    }

    public func textView(_ textView: NSTextView, doCommandBy commandSelector: Selector) -> Bool {
        guard let storage = storage else { return false }
        let sel = textView.selectedRange()
        switch commandSelector {
        case #selector(NSResponder.insertNewline(_:)):
            apply([behaviour.newline(in: storage.ast, selection: sel)], in: textView)
            return true
        case #selector(NSResponder.insertTab(_:)):
            if let r = behaviour.tab(in: storage.ast, selection: sel) { apply([r], in: textView); return true }
            return false
        case #selector(NSResponder.insertBacktab(_:)):
            if let r = behaviour.backtab(in: storage.ast, selection: sel) { apply([r], in: textView); return true }
            return true
        case #selector(NSResponder.deleteBackward(_:)):
            if let r = behaviour.deleteBackward(in: storage.ast, selection: sel) { apply([r], in: textView); return true }
            return false
        default:
            return false
        }
    }

    public func textView(_ textView: NSTextView, clickedOnLink link: Any, at charIndex: Int) -> Bool {
        if let url = link as? URL, url.scheme == MDHashtagTextStyler.tagScheme {
            NotificationCenter.default.post(name: MDEditorController.didClickTagNotification, object: textView, userInfo: ["tag": url.lastPathComponent])
            return true
        }
        return false
    }

    public static let didClickTagNotification = Notification.Name("MDEditorControllerDidClickTag")

    // MARK: Applying AST operations (Bear: applyASTOperationResults:inTextView:)

    public func apply(_ results: [PMKASTOperationResult], in textView: NSTextView) {
        guard !results.isEmpty else { return }
        var finalSelection: NSRange?
        for r in results {
            guard textView.shouldChangeText(in: r.replacementRange, replacementString: r.replacementString) else { continue }
            textView.textStorage?.replaceCharacters(in: r.replacementRange, with: r.replacementString)
            textView.didChangeText()
            finalSelection = r.proposedSelection
        }
        if let s = finalSelection {
            let len = textView.string.utf16.count
            let safe = NSRange(location: min(s.location, len), length: min(s.length, max(0, len - s.location)))
            textView.setSelectedRange(safe)
            textView.scrollRangeToVisible(safe)
        }
    }

    // MARK: Actions (Bear: toggleStrongInTextView: ... toggleHeadingInTextView:headingLevel:)

    public func toggleInlineStyle(_ style: PMKInlineStyleKind) {
        guard let tv = textView, let storage = storage, let r = storage.ast.toggleInlineStyle(style, selection: tv.selectedRange()) else { return }
        apply([r], in: tv)
    }

    public func toggleBlockStyle(_ style: PMKBlockStyleKind) {
        guard let tv = textView, let storage = storage, let r = storage.ast.toggleBlockStyle(style, selection: tv.selectedRange()) else { return }
        apply([r], in: tv)
    }

    public func toggleTask(atCharacterIndex index: Int) {
        guard let tv = textView, let storage = storage, let r = storage.ast.toggleTask(at: index) else { return }
        let keep = tv.selectedRange()
        var result = r
        result.proposedSelection = keep
        apply([result], in: tv)
    }

    public func insertThematicBreak() {
        guard let tv = textView, let storage = storage else { return }
        apply([storage.ast.insertThematicBreak(selection: tv.selectedRange())], in: tv)
    }

    public func addIndent() { guard let tv = textView, let storage = storage else { return }; apply([storage.ast.indent(selection: tv.selectedRange())], in: tv) }
    public func removeIndent() { guard let tv = textView, let storage = storage, let r = storage.ast.outdent(selection: tv.selectedRange()) else { return }; apply([r], in: tv) }

    /// Current markdown (always the storage string).
    public var markdown: String { storage?.string ?? "" }
}
