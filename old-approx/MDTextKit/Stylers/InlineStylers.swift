import AppKit
import PolarMark

// Inline stylers. Bear order: strong, emphasis, strikethrough, underline, code, link,
// image, thematicBreak, color, arrow, autoLink, html, syntaxHighlight, reference, file,
// footnote, wikiLink, escape, highlighter, math, table, metadata, fold.

/// Bear: `MDStrongTextStyler`.
public final class MDStrongTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkStrong, in: s, range: range) { _, r in
            self.transformFonts(in: s, range: r) { $0.withTraits(.bold) }
        }
        markMarkers(.pmkStrongMarker, in: s, range: range)
    }
}

/// Bear: `MDEmphasisTextStyler` (`italicFontForFont:`).
public final class MDEmphasisTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkEmphasis, in: s, range: range) { _, r in
            self.transformFonts(in: s, range: r) { $0.withTraits(.italic) }
        }
        markMarkers(.pmkEmphasisMarker, in: s, range: range)
    }
}

/// Bear: `MDStrikethroughTextStyler`.
public final class MDStrikethroughTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkStrikethrough, in: s, range: range) { _, r in
            s.addAttribute(.strikethroughStyle, value: NSUnderlineStyle.single.rawValue, range: r)
        }
        markMarkers(.pmkStrikethroughMarker, in: s, range: range)
        enumerate(.pmkStrikethroughMarker, in: s, range: range) { _, r in s.removeAttribute(.strikethroughStyle, range: r) }
    }
}

/// Bear: `MDUnderlineTextStyler`.
public final class MDUnderlineTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkUnderline, in: s, range: range) { _, r in
            s.addAttribute(.underlineStyle, value: NSUnderlineStyle.single.rawValue, range: r)
        }
        markMarkers(.pmkUnderlineMarker, in: s, range: range)
        enumerate(.pmkUnderlineMarker, in: s, range: range) { _, r in s.removeAttribute(.underlineStyle, range: r) }
    }
}

/// Bear: `MDHighlighterTextStyler`. Background is drawn by the layout manager.
public final class MDHighlighterTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkHighlighter, in: s, range: range) { _, r in
            s.addAttributes([.mdHighlighterBackgroundColor: self.context.highlighterBackgroundColor,
                             .foregroundColor: self.context.highlighterTextColor], range: r)
        }
        markMarkers(.pmkHighlighterMarker, in: s, range: range)
        enumerate(.pmkHighlighterMarker, in: s, range: range) { _, r in s.removeAttribute(.mdHighlighterBackgroundColor, range: r) }
    }
}

/// Bear: `MDCodeTextStyler` (inline code).
public final class MDCodeTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkCode, in: s, range: range) { _, r in
            self.transformFonts(in: s, range: r) { f in
                let size = f.pointSize * 0.92
                return self.context.themeManager.font(forKey: "editor.code.font", size: size)
            }
            s.addAttributes([.foregroundColor: self.context.codeTextColor,
                             .mdCodeBackgroundColor: self.context.codeBackgroundColor], range: r)
        }
        markMarkers(.pmkCodeMarker, in: s, range: range)
    }
}

/// Bear: `MDLinkTextStyler`.
public final class MDLinkTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkLink, in: s, range: range) { _, r in
            let full = self.longestRange(of: .pmkLink, at: r.location, in: s) ?? r
            let urlString = (s.attribute(.pmkLinkURL, at: full.location, effectiveRange: nil) as? String) ?? ""
            let link: Any = URL(string: urlString) ?? urlString
            s.addAttributes([.foregroundColor: self.context.linkColor, .link: link, .cursor: NSCursor.pointingHand], range: r)
        }
        markMarkers(.pmkLinkMarker, in: s, range: range)
        enumerate(.pmkLinkMarker, in: s, range: range) { _, r in s.removeAttribute(.link, range: r) }
    }
}

/// Bear: `MDImageTextStyler`. Without an attachment provider the image syntax is styled like a link.
public final class MDImageTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkImage, in: s, range: range) { _, r in
            s.addAttribute(.foregroundColor, value: self.context.linkColor, range: r)
        }
        markMarkers(.pmkImageMarker, in: s, range: range)
    }
}

/// Bear: `MDHashtagTextStyler`. Tags become `bearclone://tag/<name>` links with a pill background.
public final class MDHashtagTextStyler: MDBaseTextStyler {
    public static let tagScheme = "bearclone"

    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkHashtag, in: s, range: range) { value, r in
            let full = self.longestRange(of: .pmkHashtag, at: r.location, in: s) ?? r
            let name = (value as? String) ?? ""
            var attrs: [NSAttributedString.Key: Any] = [.foregroundColor: self.context.tagTextColor,
                                                        .mdTagBackgroundColor: self.context.tagBackgroundColor,
                                                        .cursor: NSCursor.pointingHand]
            if let encoded = name.addingPercentEncoding(withAllowedCharacters: .urlPathAllowed),
               let url = URL(string: "\(MDHashtagTextStyler.tagScheme)://tag/\(encoded)") {
                attrs[.link] = url
            }
            s.addAttributes(attrs, range: full)
        }
        // The `#` stays visible inside the pill (Bear keeps it), but it is still a marker for coloring.
        enumerate(.pmkHashtagMarker, in: s, range: range) { _, r in
            s.addAttributes([.mdMarker: true, .mdPreventMarkdownHiding: true], range: r)
        }
    }
}

/// Bear: `MDAutoLinkTextStyler`.
public final class MDAutoLinkTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.pmkAutoLinkURL, in: s, range: range) { value, r in
            var urlString = (value as? String) ?? ""
            if urlString.hasPrefix("www.") { urlString = "https://" + urlString }
            let link: Any = URL(string: urlString) ?? urlString
            s.addAttributes([.foregroundColor: self.context.linkColor, .link: link, .cursor: NSCursor.pointingHand], range: r)
        }
    }
}

/// Bear: `MDEscapeTextStyler` — the backslash is a hidable marker.
public final class MDEscapeTextStyler: MDBaseTextStyler {
    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        markMarkers(.pmkEscapeMarker, in: s, range: range)
    }
}
