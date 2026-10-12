import AppKit
import PolarMark

/// Bear: `MDLayoutManager : NSLayoutManager` (TextKit 1). Draws block
/// backgrounds (code, quote bars, highlighter, tags) in `drawBackground` and
/// the decorations that replace hidden markers (bullets, numbers, checkboxes,
/// thematic rules, fence language labels) after the glyphs.
public final class MDLayoutManager: NSLayoutManager {
    public var context: MDStylerContext
    /// Bear: `showBackgroundGrid` debugging aid.
    public var showBackgroundGrid = false

    public init(context: MDStylerContext) {
        self.context = context
        super.init()
        allowsNonContiguousLayout = false
        usesFontLeading = true
    }

    public required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    private var mdContainer: MDTextContainer? { textContainers.first as? MDTextContainer }

    private func column(in container: NSTextContainer) -> NSRect {
        (container as? MDTextContainer)?.columnFrame ?? NSRect(origin: .zero, size: container.size)
    }

    // MARK: Background (Bear: drawBackgroundForGlyphRange:atPoint: + draw*BackgroundForGlyphRange:)

    public override func drawBackground(forGlyphRange glyphsToShow: NSRange, at origin: NSPoint) {
        super.drawBackground(forGlyphRange: glyphsToShow, at: origin)
        guard let storage = textStorage, let container = textContainers.first else { return }
        let charRange = characterRange(forGlyphRange: glyphsToShow, actualGlyphRange: nil)
        drawFencedCodeBackground(charRange, storage: storage, container: container, origin: origin)
        drawBlockQuoteBackground(charRange, storage: storage, container: container, origin: origin)
        drawInlineBackground(key: .mdCodeBackgroundColor, charRange, storage: storage, container: container, origin: origin, radius: 3, inset: 1)
        drawInlineBackground(key: .mdHighlighterBackgroundColor, charRange, storage: storage, container: container, origin: origin, radius: 2, inset: 0)
        drawInlineBackground(key: .mdTagBackgroundColor, charRange, storage: storage, container: container, origin: origin, radius: 4, inset: 1)
        if showBackgroundGrid { drawBackgroundGrid(glyphsToShow, origin: origin) }
    }

    /// Bear: `drawFencedCodeBackgroundForGlyphRange:atPoint:`
    private func drawFencedCodeBackground(_ charRange: NSRange, storage: NSTextStorage, container: NSTextContainer, origin: NSPoint) {
        storage.enumerateAttribute(.mdFencedCodeBlock, in: charRange, options: []) { value, _, _ in
            guard value != nil else { return }
            // whole block, not only the visible part, so the corners stay put while scrolling
            var full = NSRange()
            guard let s = storage.attribute(.mdFencedCodeBlock, at: _firstIndex(of: value!, storage: storage, near: charRange), longestEffectiveRange: &full, in: NSRange(location: 0, length: storage.length)) else { return }
            _ = s
            let glyphs = glyphRange(forCharacterRange: full, actualCharacterRange: nil)
            let bounds = boundingRect(forGlyphRange: glyphs, in: container)
            let col = column(in: container)
            let level = (storage.attribute(.mdBlockQuoteLevel, at: full.location, effectiveRange: nil) as? Int) ?? 0
            let left = col.minX + CGFloat(level) * context.quoteIndent
            var rect = NSRect(x: left, y: bounds.minY, width: col.maxX - left, height: bounds.height)
            rect = rect.offsetBy(dx: origin.x, dy: origin.y)
            let path = NSBezierPath(roundedRect: rect, xRadius: 6, yRadius: 6)
            context.codeBackgroundColor.setFill()
            path.fill()
            context.codeBorderColor.setStroke()
            path.lineWidth = 1
            path.stroke()
        }
    }

    private func _firstIndex(of value: Any, storage: NSTextStorage, near range: NSRange) -> Int {
        var idx = range.location
        storage.enumerateAttribute(.mdFencedCodeBlock, in: range, options: []) { v, r, stop in
            if let v = v as? NSObject, v.isEqual(value) { idx = r.location; stop.pointee = true }
        }
        return idx
    }

    /// Bear: `drawBlockQuoteBackgroundForGlyphRange:atPoint:` — one vertical bar per nesting level.
    private func drawBlockQuoteBackground(_ charRange: NSRange, storage: NSTextStorage, container: NSTextContainer, origin: NSPoint) {
        let col = column(in: container)
        storage.enumerateAttribute(.mdBlockQuoteLevel, in: charRange, options: []) { value, r, _ in
            guard let level = value as? Int, level > 0 else { return }
            let glyphs = glyphRange(forCharacterRange: r, actualCharacterRange: nil)
            enumerateLineFragments(forGlyphRange: glyphs) { frag, _, _, _, _ in
                for k in 0..<level {
                    let x = col.minX + CGFloat(k) * self.context.quoteIndent + 2
                    let bar = NSRect(x: x + origin.x, y: frag.minY + origin.y, width: 3, height: frag.height)
                    self.context.quoteBarColor.withAlphaComponent(k == 0 ? 1 : 0.5).setFill()
                    NSBezierPath(roundedRect: bar, xRadius: 1.5, yRadius: 1.5).fill()
                }
            }
        }
    }

    /// Bear: `drawInlineCodeBackgroundForGlyphRange:` / `drawHighlighterBackgroundForGlyphRange:` / `drawTagsBackgroundForGlyphRange:`
    private func drawInlineBackground(key: NSAttributedString.Key, _ charRange: NSRange, storage: NSTextStorage,
                                      container: NSTextContainer, origin: NSPoint, radius: CGFloat, inset: CGFloat) {
        storage.enumerateAttribute(key, in: charRange, options: []) { value, r, _ in
            guard let color = value as? NSColor else { return }
            var full = NSRange()
            _ = storage.attribute(key, at: r.location, longestEffectiveRange: &full, in: NSRange(location: 0, length: storage.length))
            let glyphs = self.glyphRange(forCharacterRange: full, actualCharacterRange: nil)
            self.enumerateEnclosingRects(forGlyphRange: glyphs, withinSelectedGlyphRange: NSRange(location: NSNotFound, length: 0), in: container) { rect, _ in
                var rr = rect.insetBy(dx: -inset, dy: inset).offsetBy(dx: origin.x, dy: origin.y)
                rr.size.width = max(rr.width, 2)
                color.setFill()
                NSBezierPath(roundedRect: rr, xRadius: radius, yRadius: radius).fill()
            }
        }
    }

    private func drawBackgroundGrid(_ glyphs: NSRange, origin: NSPoint) {
        NSColor.systemBlue.withAlphaComponent(0.15).setStroke()
        enumerateLineFragments(forGlyphRange: glyphs) { frag, _, _, _, _ in
            NSBezierPath(rect: frag.offsetBy(dx: origin.x, dy: origin.y)).stroke()
        }
    }

    // MARK: Glyphs + decorations (Bear: drawGlyphsForGlyphRange:atPoint: + attachments)

    public override func drawGlyphs(forGlyphRange glyphsToShow: NSRange, at origin: NSPoint) {
        super.drawGlyphs(forGlyphRange: glyphsToShow, at: origin)
        guard let storage = textStorage, let container = textContainers.first else { return }
        let charRange = characterRange(forGlyphRange: glyphsToShow, actualGlyphRange: nil)
        storage.enumerateAttribute(.mdLineDecoration, in: charRange, options: []) { value, r, _ in
            guard let deco = value as? MDLineDecoration else { return }
            self.draw(deco, atCharacterIndex: r.location, storage: storage, container: container, origin: origin)
        }
    }

    /// Geometry shared by drawing and hit-testing.
    public struct MarkerSlot {
        public let lineFragment: NSRect   // container coordinates
        public let textStartX: CGFloat    // where the visible text begins (container coordinates)
        public let baselineY: CGFloat
        public let font: NSFont
    }

    public func markerSlot(atCharacterIndex index: Int, storage: NSTextStorage) -> MarkerSlot? {
        guard index < storage.length else { return nil }
        let glyph = glyphIndexForCharacter(at: index)
        var effective = NSRange()
        let frag = lineFragmentRect(forGlyphAt: glyph, effectiveRange: &effective)
        let loc = location(forGlyphAt: glyph)
        let p = (storage.attribute(.paragraphStyle, at: index, effectiveRange: nil) as? NSParagraphStyle) ?? NSParagraphStyle.default
        // font of the first visible (non hidden) character on the line
        var font = context.baseFont
        let ns = storage.string as NSString
        let line = ns.lineRange(for: NSRange(location: index, length: 0))
        var i = index
        while i < NSMaxRange(line) {
            if storage.attribute(.mdHidden, at: i, effectiveRange: nil) == nil, let f = storage.attribute(.font, at: i, effectiveRange: nil) as? NSFont {
                font = f; break
            }
            i += 1
        }
        return MarkerSlot(lineFragment: frag, textStartX: frag.minX + p.firstLineHeadIndent, baselineY: frag.minY + loc.y, font: font)
    }

    /// Bear: `MDTaskTextAttachment` bounds — used by the text view to hit-test clicks.
    public func taskCheckboxRect(atCharacterIndex index: Int, storage: NSTextStorage) -> NSRect? {
        guard let slot = markerSlot(atCharacterIndex: index, storage: storage) else { return nil }
        return checkboxRect(for: slot)
    }

    private func checkboxRect(for slot: MarkerSlot) -> NSRect {
        let size: CGFloat = 14
        let centerY = slot.baselineY - slot.font.xHeight / 2
        return NSRect(x: slot.textStartX - context.tabSize + (context.tabSize - size) / 2, y: centerY - size / 2, width: size, height: size)
    }

    private func draw(_ deco: MDLineDecoration, atCharacterIndex index: Int, storage: NSTextStorage, container: NSTextContainer, origin: NSPoint) {
        guard let slot = markerSlot(atCharacterIndex: index, storage: storage) else { return }
        let col = column(in: container)
        switch deco {
        case .bullet(let level):
            let d: CGFloat = level == 1 ? 6 : 5
            let cx = slot.textStartX - context.tabSize / 2
            let cy = slot.baselineY - slot.font.xHeight / 2
            let rect = NSRect(x: cx - d / 2 + origin.x, y: cy - d / 2 + origin.y, width: d, height: d)
            let path = level == 3 ? NSBezierPath(rect: rect) : NSBezierPath(ovalIn: rect)
            if level == 2 {
                context.bulletColor.setStroke(); path.lineWidth = 1.2; path.stroke()
            } else {
                context.bulletColor.setFill(); path.fill()
            }

        case .number(let n, _):
            let font = NSFont.systemFont(ofSize: slot.font.pointSize * 0.95, weight: .medium)
            let str = NSAttributedString(string: "\(n).", attributes: [.font: font, .foregroundColor: context.numberColor])
            let w = str.size().width
            let x = slot.textStartX - 5 - w
            let y = slot.baselineY - font.ascender
            str.draw(at: NSPoint(x: x + origin.x, y: y + origin.y))

        case .task(let completed, _):
            let rect = checkboxRect(for: slot).offsetBy(dx: origin.x, dy: origin.y)
            let path = NSBezierPath(roundedRect: rect, xRadius: 3.5, yRadius: 3.5)
            if completed {
                context.taskFillColor.setFill(); path.fill()
                let check = NSBezierPath()
                check.move(to: NSPoint(x: rect.minX + 3.5, y: rect.midY))
                check.line(to: NSPoint(x: rect.minX + 6, y: rect.maxY - 3.5))
                check.line(to: NSPoint(x: rect.maxX - 3.2, y: rect.minY + 4))
                check.lineWidth = 1.8
                check.lineCapStyle = .round
                check.lineJoinStyle = .round
                context.taskCheckColor.setStroke()
                check.stroke()
            } else {
                context.taskBorderColor.setStroke(); path.lineWidth = 1.2; path.stroke()
            }

        case .thematicBreak:
            let y = slot.lineFragment.midY + origin.y
            let line = NSBezierPath()
            line.move(to: NSPoint(x: col.minX + origin.x, y: y))
            line.line(to: NSPoint(x: col.maxX + origin.x, y: y))
            line.lineWidth = 1
            context.thematicBreakColor.setStroke()
            line.stroke()

        case .fenceLanguage(let lang):
            let font = NSFont.systemFont(ofSize: 10, weight: .medium)
            let str = NSAttributedString(string: lang, attributes: [.font: font, .foregroundColor: context.codeLanguageColor])
            let w = str.size().width
            str.draw(at: NSPoint(x: col.maxX - 10 - w + origin.x, y: slot.lineFragment.minY + 4 + origin.y))
        }
    }
}
