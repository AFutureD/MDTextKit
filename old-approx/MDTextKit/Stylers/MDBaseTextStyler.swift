import AppKit
import PolarMark

/// Bear: `MDBaseTextStyler` / `MDTextStyler` protocol. Each styler reads one
/// family of PMK* attributes and writes visual attributes. Stylers run in a
/// fixed order (see `MDAttributedStringRenderer`), block level first.
open class MDBaseTextStyler {
    public var context: MDStylerContext

    public init(context: MDStylerContext) { self.context = context }

    /// Bear: `-[MDBaseTextStyler styleTextInAttributedString:range:replacementBlock:]`
    open func style(_ s: NSMutableAttributedString, range: NSRange) {}

    /// Bear: `canStyleAsync` — only the syntax highlighter returns true.
    open var canStyleAsync: Bool { false }

    // MARK: Helpers shared by subclasses

    /// Enumerates runs of `key` in `range`, merging adjacent runs with equal values
    /// (`longestEffectiveRange` semantics) so paragraph-level work happens once per construct.
    public func enumerate(_ key: NSAttributedString.Key, in s: NSAttributedString, range: NSRange,
                          _ body: (Any, NSRange) -> Void) {
        s.enumerateAttribute(key, in: range, options: []) { value, r, _ in
            guard let v = value else { return }
            body(v, r)
        }
    }

    /// Like `enumerate`, but reports each construct once with its full extent even when the
    /// styled range only covers part of it (e.g. a partial restyle of a long code block).
    public func enumerateConstructs(_ key: NSAttributedString.Key, in s: NSAttributedString, range: NSRange,
                                    _ body: (Any, NSRange) -> Void) {
        var seen = Set<Int>()
        s.enumerateAttribute(key, in: range, options: []) { value, r, _ in
            guard let v = value else { return }
            let full = self.longestRange(of: key, at: r.location, in: s) ?? r
            guard !seen.contains(full.location) else { return }
            seen.insert(full.location)
            body(v, full)
        }
    }

    /// Full extent of the construct containing `index` (merging the marker splits).
    public func longestRange(of key: NSAttributedString.Key, at index: Int, in s: NSAttributedString) -> NSRange? {
        var r = NSRange()
        guard s.attribute(key, at: index, longestEffectiveRange: &r, in: NSRange(location: 0, length: s.length)) != nil else { return nil }
        return r
    }

    /// Marks syntax characters so they get the marker color and can be hidden.
    public func markMarkers(_ markerKey: NSAttributedString.Key, in s: NSMutableAttributedString, range: NSRange) {
        enumerate(markerKey, in: s, range: range) { _, r in
            s.addAttributes([.mdMarker: true, .foregroundColor: self.context.markerColor], range: r)
        }
    }

    public func font(at index: Int, in s: NSAttributedString) -> NSFont {
        (s.attribute(.font, at: index, effectiveRange: nil) as? NSFont) ?? context.baseFont
    }

    /// Applies `transform` to every distinct font run in `range`.
    public func transformFonts(in s: NSMutableAttributedString, range: NSRange, _ transform: (NSFont) -> NSFont) {
        s.enumerateAttribute(.font, in: range, options: []) { value, r, _ in
            let f = (value as? NSFont) ?? self.context.baseFont
            s.addAttribute(.font, value: transform(f), range: r)
        }
    }

    public func paragraphStyle(at index: Int, in s: NSAttributedString) -> NSMutableParagraphStyle {
        let p = (s.attribute(.paragraphStyle, at: index, effectiveRange: nil) as? NSParagraphStyle) ?? context.bodyParagraphStyle()
        return p.mutableCopy() as! NSMutableParagraphStyle
    }

    /// Mutates the paragraph style of every paragraph intersecting `range`.
    public func updateParagraphStyles(in s: NSMutableAttributedString, range: NSRange, _ body: (NSMutableParagraphStyle) -> Void) {
        let ns = s.string as NSString
        var loc = range.location
        let end = NSMaxRange(range)
        while loc < max(end, range.location + 1) && loc <= ns.length {
            let para = ns.paragraphRange(for: NSRange(location: min(loc, ns.length), length: 0))
            if para.length > 0 {
                let p = paragraphStyle(at: para.location, in: s)
                body(p)
                s.addAttribute(.paragraphStyle, value: p, range: para)
            }
            let next = NSMaxRange(para)
            if next <= loc { break }
            loc = next
            if loc >= ns.length { break }
        }
    }
}
