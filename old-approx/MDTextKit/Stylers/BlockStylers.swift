import AppKit
import PolarMark

// Block-level stylers. Bear runs these first: body, bidi, heading, orderedList,
// unorderedList, blockQuote, indentSpace, fencedCode, mathBlock, mermaid, indentedCode.

/// Bear: `MDBodyTextStyler` — base font, color and paragraph style for everything.
public final class MDBodyTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        s.addAttributes(context.bodyAttributes, range: range)
    }
}

/// Bear: `MDHeadingTextStyler`.
public final class MDHeadingTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerateConstructs(.pmkHeading, in: s, range: range) { value, full in
            guard let level = value as? Int else { return }
            let font = self.context.headerFont(level: level)
            s.addAttributes([.font: font, .foregroundColor: self.context.headerTextColor], range: full)
            self.updateParagraphStyles(in: s, range: full) { p in
                p.lineHeightMultiple = self.context.headerLineHeightMultiplier
                if self.context.addHeaderPadding {
                    p.paragraphSpacingBefore = font.pointSize * self.context.headerPaddingTop
                    p.paragraphSpacing = font.pointSize * self.context.headerPaddingBottom
                }
            }
        }
        markMarkers(.pmkHeadingMarker, in: s, range: range)
        // marker keeps the heading font size so the line height does not jump when it is shown
    }
}

/// Shared implementation for Bear's `MDOrderedListTextStyler` / `MDUnorderedListTextStyler`.
open class MDListTextStyler: MDBaseTextStyler {
    open var handlesOrdered: Bool { false }

    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerateConstructs(.pmkListItem, in: s, range: range) { value, full in
            guard let info = value as? PMKListInfo, info.ordered == self.handlesOrdered else { return }
            let indent = CGFloat(info.level) * self.context.tabSize
            // Hidden leading tabs still advance to the next tab stop (tab width ignores the font size),
            // so the first N stops are placed a hair after the indent. Bear sidesteps this with attachments.
            var leadingTabs = 0
            if let ir = self.longestRange(of: .pmkIndentSpace, at: full.location, in: s), ir.location == full.location {
                let ns = s.string as NSString
                for i in ir.location..<NSMaxRange(ir) where ns.character(at: i) == 0x09 { leadingTabs += 1 }
            }
            self.updateParagraphStyles(in: s, range: full) { p in
                p.firstLineHeadIndent = indent
                p.headIndent = indent
                p.paragraphSpacing = 2
                p.tabStops = (0..<leadingTabs).map { NSTextTab(textAlignment: .left, location: indent + 0.01 * CGFloat($0 + 1), options: [:]) }
                p.defaultTabInterval = self.context.tabSize
            }
            if info.task == .completed {
                // completed tasks are dimmed, like Bear's `completedTaskTextColor`
                let ns = s.string as NSString
                let line = ns.lineRange(for: NSRange(location: full.location, length: 0))
                s.addAttribute(.foregroundColor, value: self.context.completedTaskTextColor, range: NSIntersectionRange(line, full))
            }
        }
        enumerate(.pmkListMarker, in: s, range: range) { _, r in
            guard let info = s.attribute(.pmkListItem, at: r.location, effectiveRange: nil) as? PMKListInfo,
                  info.ordered == self.handlesOrdered else { return }
            let decoration: MDLineDecoration
            if info.task != .notTask { decoration = .task(completed: info.task == .completed, level: info.level) }
            else if info.ordered { decoration = .number(info.number, level: info.level) }
            else { decoration = .bullet(level: info.level) }
            s.addAttributes([.mdMarker: true, .foregroundColor: self.context.markerColor,
                             .mdLineDecoration: decoration], range: r)
        }
    }
}

public final class MDOrderedListTextStyler: MDListTextStyler { public override var handlesOrdered: Bool { true } }
public final class MDUnorderedListTextStyler: MDListTextStyler { public override var handlesOrdered: Bool { false } }

/// Bear: `MDBlockQuoteTextStyler`. Adds indentation per nesting level; the bar is drawn by the layout manager.
public final class MDBlockQuoteTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerateConstructs(.pmkBlockquote, in: s, range: range) { value, full in
            guard let level = value as? Int else { return }
            s.addAttributes([.mdBlockQuoteLevel: level, .foregroundColor: self.context.quoteTextColor], range: full)
            self.updateParagraphStyles(in: s, range: full) { p in
                let extra = CGFloat(level) * self.context.quoteIndent
                p.firstLineHeadIndent += extra
                p.headIndent += extra
            }
        }
        markMarkers(.pmkBlockquoteMarker, in: s, range: range)
    }
}

/// Bear: `MDFencedCodeTextStyler`.
public final class MDFencedCodeTextStyler: MDBaseTextStyler {
    public static let fenceLineHeight: CGFloat = 8

    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerateConstructs(.pmkFencedCode, in: s, range: range) { _, full in
            let language = (s.attribute(.pmkFencedCodeLanguage, at: full.location, effectiveRange: nil) as? String) ?? ""
            let blockID = "\(language)#\(full.location)"
            s.addAttributes([.font: self.context.codeFont, .foregroundColor: self.context.codeTextColor,
                             .mdFencedCodeBlock: blockID], range: full)
            self.updateParagraphStyles(in: s, range: full) { p in
                p.lineHeightMultiple = 1.25
                p.paragraphSpacing = 0
                p.paragraphSpacingBefore = 0
                p.firstLineHeadIndent += 12
                p.headIndent += 12
                p.tailIndent = -12
            }
            // content gets the language for the syntax highlighter
            if !language.isEmpty {
                s.enumerateAttribute(.pmkFencedCodeMarker, in: full, options: []) { v, mr, _ in
                    if v == nil { s.addAttribute(.mdSyntaxHighlightLanguage, value: language, range: mr) }
                }
            }
        }
        enumerate(.pmkFencedCodeMarker, in: s, range: range) { value, r in
            s.addAttributes([.mdMarker: true, .foregroundColor: self.context.markerColor], range: r)
            // The fence line collapses to a fixed small height when hidden: it becomes the box padding.
            self.updateParagraphStyles(in: s, range: r) { p in
                p.minimumLineHeight = MDFencedCodeTextStyler.fenceLineHeight
                p.maximumLineHeight = MDFencedCodeTextStyler.fenceLineHeight
                p.lineHeightMultiple = 1
            }
            if (value as? PMKMarkerValue) == .open,
               let language = s.attribute(.pmkFencedCodeLanguage, at: r.location, effectiveRange: nil) as? String, !language.isEmpty {
                s.addAttribute(.mdLineDecoration, value: MDLineDecoration.fenceLanguage(language), range: NSRange(location: r.location, length: 1))
            }
        }
    }
}

/// Bear: `MDThematicBreakTextStyler`. The `---` is hidden; the rule is drawn by the layout manager.
public final class MDThematicBreakTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkThematicBreak, in: s, range: range) { _, r in
            s.addAttributes([.mdMarker: true, .foregroundColor: self.context.markerColor], range: r)
            s.addAttribute(.mdLineDecoration, value: MDLineDecoration.thematicBreak, range: NSRange(location: r.location, length: 1))
            let h = self.context.bodyLineHeight
            self.updateParagraphStyles(in: s, range: r) { p in
                p.minimumLineHeight = h
                p.maximumLineHeight = h
            }
        }
    }
}

/// Bear: `MDHardLineBreakTextStyler`.
public final class MDHardLineBreakTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkHardLinebreak, in: s, range: range) { _, r in
            s.addAttributes([.mdMarker: true, .foregroundColor: self.context.markerColor], range: r)
        }
    }
}

/// Bear: `MDIndentSpaceTextStyler` — the tabs/spaces that nest a list item are markers: colored like
/// markers and always hidden (the paragraph indent provides the visual nesting instead).
public final class MDIndentSpaceTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkIndentSpace, in: s, range: range) { _, r in
            s.addAttributes([.mdMarker: true, .foregroundColor: self.context.markerColor], range: r)
        }
    }
}
