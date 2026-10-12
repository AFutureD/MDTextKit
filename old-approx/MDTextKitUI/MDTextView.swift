import AppKit
import MDTextKit
import PolarMark

/// Bear: `MDTextView : NSTextView` (MDTextKitUI, Swift). Adds checkbox
/// hit-testing, pointer feedback for links and keeps the TextKit 1 stack
/// (`MDLayoutManager` + `MDTextContainer` + `MDTextStorage`) wired together.
public final class MDTextView: NSTextView {
    public weak var editorController: MDEditorController?
    private var trackingArea: NSTrackingArea?

    /// Builds the full TextKit 1 stack the way Bear's `NoteEditorCoreViewController` does.
    public static func make(context: MDStylerContext) -> MDTextView {
        let storage = MDTextStorage()
        let layoutManager = MDLayoutManager(context: context)
        let container = MDTextContainer(size: NSSize(width: 0, height: CGFloat.greatestFiniteMagnitude))
        container.maxColumnWidth = context.maxColumnWidth
        layoutManager.addTextContainer(container)
        storage.addLayoutManager(layoutManager)
        let tv = MDTextView(frame: NSRect(x: 0, y: 0, width: 600, height: 400), textContainer: container)
        tv.setup()
        return tv
    }

    private func setup() {
        isRichText = false              // the string is markdown; attributes are derived, never pasted in
        importsGraphics = false
        allowsUndo = true
        isAutomaticQuoteSubstitutionEnabled = false
        isAutomaticDashSubstitutionEnabled = false
        isAutomaticTextReplacementEnabled = false
        isAutomaticSpellingCorrectionEnabled = false
        isContinuousSpellCheckingEnabled = true
        isGrammarCheckingEnabled = false
        isAutomaticLinkDetectionEnabled = false
        usesFindBar = true
        isIncrementalSearchingEnabled = true
        textContainerInset = NSSize(width: 0, height: 32)
        isVerticallyResizable = true
        isHorizontallyResizable = false
        autoresizingMask = [.width]
        minSize = NSSize(width: 0, height: 0)
        maxSize = NSSize(width: CGFloat.greatestFiniteMagnitude, height: CGFloat.greatestFiniteMagnitude)
        linkTextAttributes = [:]        // the stylers own link colors
        smartInsertDeleteEnabled = false
    }

    /// Bear overrides `didChangeText()` on MDTextView: this is where styling runs after every edit.
    public override func didChangeText() {
        super.didChangeText()
        editorController?.textViewDidChangeText()
    }

    public var mdLayoutManager: MDLayoutManager? { layoutManager as? MDLayoutManager }
    public var mdTextStorage: MDTextStorage? { textStorage as? MDTextStorage }

    // MARK: Checkbox hit-testing (Bear: MDTaskTextAttachment + didInteractWithAttachment)

    /// Character index of the task marker whose checkbox contains `point` (view coordinates), if any.
    public func taskMarkerIndex(at point: NSPoint) -> Int? {
        guard let lm = mdLayoutManager, let storage = textStorage, let container = textContainer else { return nil }
        let origin = textContainerOrigin
        let local = NSPoint(x: point.x - origin.x, y: point.y - origin.y)
        let glyph = lm.glyphIndex(for: local, in: container)
        guard glyph < lm.numberOfGlyphs else { return nil }
        let charIndex = lm.characterIndexForGlyph(at: glyph)
        let ns = storage.string as NSString
        let line = ns.lineRange(for: NSRange(location: min(charIndex, max(0, ns.length - 1)), length: 0))
        var found: Int?
        storage.enumerateAttribute(.mdLineDecoration, in: line, options: []) { value, r, stop in
            guard case .task = (value as? MDLineDecoration) else { return }
            if let rect = lm.taskCheckboxRect(atCharacterIndex: r.location, storage: storage), rect.insetBy(dx: -4, dy: -4).contains(local) {
                found = r.location
                stop.pointee = true
            }
        }
        return found
    }

    public override func mouseDown(with event: NSEvent) {
        let p = convert(event.locationInWindow, from: nil)
        if let idx = taskMarkerIndex(at: p), let controller = editorController {
            controller.toggleTask(atCharacterIndex: idx)
            return
        }
        super.mouseDown(with: event)
    }

    public override func mouseMoved(with event: NSEvent) {
        let p = convert(event.locationInWindow, from: nil)
        if taskMarkerIndex(at: p) != nil { NSCursor.pointingHand.set(); return }
        super.mouseMoved(with: event)
    }

    public override func updateTrackingAreas() {
        super.updateTrackingAreas()
        if let t = trackingArea { removeTrackingArea(t) }
        let t = NSTrackingArea(rect: bounds, options: [.mouseMoved, .activeInKeyWindow, .inVisibleRect], owner: self, userInfo: nil)
        addTrackingArea(t)
        trackingArea = t
    }

    // Plain-text pasteboard only (Bear's MDPasteboardReader converts rich text to markdown; we take the string).
    public override var writablePasteboardTypes: [NSPasteboard.PasteboardType] { [.string] }
    public override var readablePasteboardTypes: [NSPasteboard.PasteboardType] { [.string] }
}
