import AppKit
import PolarMark

/// Bear: `MDAttributedStringChange` — one recorded `replaceCharacters` call.
public struct MDAttributedStringChange {
    public let range: NSRange          // range in the string *before* this change
    public let replacement: String
    public var isDiscardable: Bool { range.length == 0 && replacement.isEmpty }
}

/// Bear: `MDAttributedStringChangeTracker`.
public final class MDAttributedStringChangeTracker {
    public private(set) var changes: [MDAttributedStringChange] = []

    public func trackReplaceCharacters(in range: NSRange, with string: String) {
        changes.append(MDAttributedStringChange(range: range, replacement: string))
    }

    public func resetChanges() { changes.removeAll() }
}

public protocol MDTextStorageDelegate: AnyObject {
    /// Called from inside `processEditing`, after the AST has been updated.
    /// `reparsedRange` is in the current string's coordinates.
    func textStorage(_ storage: MDTextStorage, processedChangesIn reparsedRange: NSRange, editedRange: NSRange)
}

/// Bear: `MDTextStorage : NSTextStorage`. The string is always the raw
/// markdown. Every character edit is recorded, pushed into the PolarMark AST
/// during `processEditing`, and the resulting reparsed range is handed to the
/// delegate (the editor controller) for re-styling.
public final class MDTextStorage: NSTextStorage {
    private let backing = NSMutableAttributedString()
    public let ast: PMKAST
    public let changeTracker = MDAttributedStringChangeTracker()
    public weak var mdDelegate: MDTextStorageDelegate?
    public private(set) var currentReparsedRange: NSRange?
    /// Union of reparsed ranges not yet styled. Styling never happens inside `processEditing`
    /// (an attribute edit there widens `editedRange` and NSTextView then pushes the caret to its
    /// end); the text view consumes this from `didChangeText()`, exactly like Bear's MDTextView.
    public private(set) var pendingStylingRange: NSRange?
    /// Bear: `preventASTChanges` — set while applying replacements the AST already reflects.
    public var preventASTChanges = false

    public override init() {
        ast = PMKAST(markdown: "")
        super.init()
    }

    public init(markdown: String) {
        ast = PMKAST(markdown: markdown)
        super.init()
        backing.append(NSAttributedString(string: markdown))
    }

    public required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }
    public required init?(pasteboardPropertyList propertyList: Any, ofType type: NSPasteboard.PasteboardType) { fatalError() }

    // MARK: NSAttributedString primitives

    public override var string: String { backing.string }

    public override func attributes(at location: Int, effectiveRange range: NSRangePointer?) -> [NSAttributedString.Key: Any] {
        backing.attributes(at: location, effectiveRange: range)
    }

    public override func replaceCharacters(in range: NSRange, with str: String) {
        if !preventASTChanges { changeTracker.trackReplaceCharacters(in: range, with: str) }
        backing.replaceCharacters(in: range, with: str)
        edited(.editedCharacters, range: range, changeInLength: (str as NSString).length - range.length)
    }

    public override func setAttributes(_ attrs: [NSAttributedString.Key: Any]?, range: NSRange) {
        backing.setAttributes(attrs, range: range)
        edited(.editedAttributes, range: range, changeInLength: 0)
    }

    /// Bulk attribute write used by the renderer: copies every run of `styled`
    /// into `range` with a single `edited` notification.
    public func replaceAttributes(with styled: NSAttributedString, in range: NSRange) {
        guard styled.length == range.length else { return }
        styled.enumerateAttributes(in: NSRange(location: 0, length: styled.length), options: []) { attrs, r, _ in
            backing.setAttributes(attrs, range: NSRange(location: range.location + r.location, length: r.length))
        }
        edited(.editedAttributes, range: range, changeInLength: 0)
    }

    // MARK: Editing pipeline (Bear: processEditing -> processChanges -> updateASTWithChanges:)

    public override func processEditing() {
        let mask = editedMask
        let edited = editedRange
        if mask.contains(.editedCharacters) {
            processChanges(editedRange: edited)
        }
        super.processEditing()
    }

    private func processChanges(editedRange: NSRange) {
        let changes = changeTracker.changes
        changeTracker.resetChanges()
        var union: NSRange? = nil
        if changes.isEmpty {
            union = editedRange
        } else {
            for c in changes {
                let r = ast.replaceRange(c.range, withMarkdown: c.replacement)
                union = union.map { NSUnionRange($0, r) } ?? r
            }
        }
        guard var reparsed = union else { return }
        reparsed = NSUnionRange(reparsed, editedRange)
        let total = backing.length
        reparsed.location = min(reparsed.location, total)
        reparsed.length = min(reparsed.length, total - reparsed.location)
        currentReparsedRange = reparsed
        pendingStylingRange = pendingStylingRange.map { NSUnionRange($0, reparsed) } ?? reparsed
        mdDelegate?.textStorage(self, processedChangesIn: reparsed, editedRange: editedRange)
    }

    /// Returns and clears the range that still needs styling.
    public func consumePendingStylingRange() -> NSRange? {
        defer { pendingStylingRange = nil }
        guard let r = pendingStylingRange else { return nil }
        let total = backing.length
        let loc = min(r.location, total)
        return NSRange(location: loc, length: min(r.length, total - loc))
    }

    /// The storage string must always equal the AST's markdown.
    public var isInSyncWithAST: Bool { ast.markdown == backing.string }

    /// Bear: `-[MDTextStorage setAttributedString:]` — replaces the whole document.
    public func loadMarkdown(_ markdown: String) {
        preventASTChanges = true
        ast.replaceAll(withMarkdown: markdown)
        beginEditing()
        let old = backing.length
        backing.setAttributedString(NSAttributedString(string: markdown))
        edited(.editedCharacters, range: NSRange(location: 0, length: old), changeInLength: backing.length - old)
        endEditing()
        preventASTChanges = false
    }
}
