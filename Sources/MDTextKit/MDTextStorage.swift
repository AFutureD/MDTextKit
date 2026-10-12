import AppKit
import PolarMark

public protocol MDTextStorageDelegate: AnyObject {
    /// Called from `processEditing` after the AST was updated.
    func textStorage(_ storage: MDTextStorage, processedChanges tracker: MDAttributedStringChangeTracker)
    func textStorage(_ storage: MDTextStorage, didAddAttachment attachment: NSTextAttachment)
    func textStorage(_ storage: MDTextStorage, didRemoveAttachment attachment: NSTextAttachment)
}

public extension MDTextStorageDelegate {
    func textStorage(_ storage: MDTextStorage, didAddAttachment attachment: NSTextAttachment) {}
    func textStorage(_ storage: MDTextStorage, didRemoveAttachment attachment: NSTextAttachment) {}
}

/// `MDTextStorage : NSTextStorage`. Backed by a plain NSMutableAttributedString
/// (`_imp`). Every edit is recorded by the change tracker; `processEditing` pushes the
/// recorded edits into the PolarMark AST (in markdown coordinates, which differ from the
/// attributed string's because attachments replace markdown runs) and remembers the
/// range that must be re-styled (`currentReparsedRange`, markdown coordinates).
public final class MDTextStorage: NSTextStorage {
    private let imp = NSMutableAttributedString()
    public var ast = PMKAST(markdown: "")
    public var changeTracker = MDAttributedStringChangeTracker()
    public var currentReparsedRange = NSNotFoundRange
    public var preventASTChanges = false
    public weak var mdDelegate: MDTextStorageDelegate?

    /// True while an edit of that kind is being processed.
    public var editedCharacters: Bool { editedMask.contains(.editedCharacters) && isProcessingEdits }
    public var editedCharactersOrAttributes: Bool { (editedMask.contains(.editedCharacters) || editedMask.contains(.editedAttributes)) && isProcessingEdits }
    private var isProcessingEdits = false

    public override init() {
        super.init()
    }

    public required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }
    public required init?(pasteboardPropertyList propertyList: Any, ofType type: NSPasteboard.PasteboardType) { fatalError() }

    // MARK: NSAttributedString primitives

    public override var string: String { imp.string }

    public override func attributes(at location: Int, effectiveRange range: NSRangePointer?) -> [NSAttributedString.Key: Any] {
        if location < imp.length { return imp.attributes(at: location, effectiveRange: range) }
        range?.pointee = NSNotFoundRange
        return [:]
    }

    /// Resets tracking and the AST, then lets NSTextStorage do the replacement.
    public override func setAttributedString(_ attrString: NSAttributedString) {
        preventASTChanges = true
        replaceCharacters(in: NSRange(location: 0, length: length), with: "")
        preventASTChanges = false
        ast.reset()
        changeTracker.resetChanges()
        currentReparsedRange = NSNotFoundRange
        super.setAttributedString(attrString)
    }

    public override func replaceCharacters(in range: NSRange, with str: String) {
        changeTracker.trackReplaceCharacters(in: range, in: imp, with: str)
        imp.replaceCharacters(in: range, with: NSAttributedString(string: str))
        edited(.editedCharacters, range: range, changeInLength: (str as NSString).length - range.length)
    }

    public override func setAttributes(_ attrs: [NSAttributedString.Key: Any]?, range: NSRange) {
        changeTracker.trackSetAttributes(attrs ?? [:], in: imp, range: range)
        imp.setAttributes(attrs, range: range)
        edited(.editedAttributes, range: range, changeInLength: 0)
    }

    // MARK: Editing pipeline

    public override func processEditing() {
        isProcessingEdits = true
        processChanges()
        super.processEditing()
        isProcessingEdits = false
    }

    private func processChanges() {
        updateAST(with: changeTracker.changes)
        mdDelegate?.textStorage(self, processedChanges: changeTracker)
        for a in changeTracker.addedAttachments { mdDelegate?.textStorage(self, didAddAttachment: a) }
        for a in changeTracker.removedAttachments { mdDelegate?.textStorage(self, didRemoveAttachment: a) }
        changeTracker.resetChanges()
    }

    private func updateAST(with changes: [MDAttributedStringChange]) {
        guard !changes.isEmpty, !preventASTChanges else { return }
        for change in changes {
            let replacement = change.currentString
            let reparsed = ast.replaceRange(change.oldPlainRange, withMarkdown: replacement)
            validateAndSetReparsedRange(reparsed, forReplacementRange: change.oldPlainRange, replacementLength: (replacement as NSString).length)
        }
    }

    /// Keeps the union
    /// of every reparsed range, shifting the earlier ones past the new edit.
    public func validateAndSetReparsedRange(_ reparsed: NSRange, forReplacementRange replacement: NSRange, replacementLength: Int) {
        var result = reparsed
        if currentReparsedRange.location != NSNotFound {
            currentReparsedRange = NSAttributedString.offsetSelectionRange(currentReparsedRange, forReplacementRange: replacement, replacementLength: replacementLength)
            result = NSUnionRange(currentReparsedRange, reparsed)
        }
        currentReparsedRange = result
    }

    /// Hands the annotated markdown of the reparsed range and
    /// the matching attributed-string range to the styler, then clears the pending range.
    public func parseChanges(using block: (NSAttributedString, NSRange) -> Void) {
        if currentReparsedRange.location != NSNotFound {
            let annotated = ast.annotatedString(forStringRange: currentReparsedRange)
            let attributedRange = attributedStringRange(fromStringRange: currentReparsedRange)
            preventASTChanges = true
            block(annotated, attributedRange)
            preventASTChanges = false
        }
        currentReparsedRange = NSNotFoundRange
    }

    /// Used when an
    /// operation already applied a replacement to the AST directly.
    public func recordNewReplacementChange(forStringRange range: NSRange, replacementString: String) {
        ast.replaceRange(range, withMarkdown: replacementString)
        if currentReparsedRange.location != NSNotFound {
            currentReparsedRange = NSAttributedString.offsetSelectionRange(currentReparsedRange, forReplacementRange: range, replacementLength: (replacementString as NSString).length)
        }
    }
}
