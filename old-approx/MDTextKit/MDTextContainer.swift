import AppKit

/// Bear: `MDTextContainer` — centers a column of at most `maxColumnWidth`
/// inside the (wider) text view, with `minInset` on both sides.
public final class MDTextContainer: NSTextContainer {
    public var maxColumnWidth: CGFloat = 680 { didSet { layoutManager?.textContainerChangedGeometry(self) } }
    public var minInset: CGFloat = 28 { didSet { layoutManager?.textContainerChangedGeometry(self) } }

    public override init(size: NSSize) {
        super.init(size: size)
        lineFragmentPadding = 0
        widthTracksTextView = true
    }

    public required init(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    /// Bear: `currentColumnWidth`
    public var currentColumnWidth: CGFloat { min(maxColumnWidth, max(0, size.width - 2 * minInset)) }

    /// Horizontal extent of the text column in container coordinates.
    public var columnFrame: NSRect {
        let w = currentColumnWidth
        return NSRect(x: ((size.width - w) / 2).rounded(), y: 0, width: w, height: size.height)
    }

    public override var isSimpleRectangularTextContainer: Bool { false }

    public override func lineFragmentRect(forProposedRect proposedRect: NSRect, at characterIndex: Int,
                                          writingDirection baseWritingDirection: NSWritingDirection,
                                          remaining remainingRect: UnsafeMutablePointer<NSRect>?) -> NSRect {
        var r = super.lineFragmentRect(forProposedRect: proposedRect, at: characterIndex, writingDirection: baseWritingDirection, remaining: remainingRect)
        let col = columnFrame
        let x = max(r.minX, col.minX)
        let maxX = min(r.maxX, col.maxX)
        r.origin.x = x
        r.size.width = max(0, maxX - x)
        return r
    }
}
