import AppKit
import PolarMark

/// Bear: `MDAttributedStringRenderer`. Owns the styler pipeline and turns a
/// PolarMark annotated string into a fully styled NSAttributedString. Styler
/// order matches Bear's `textStylers` array: block level first, inline next,
/// then table/metadata/fold (not implemented here).
public final class MDAttributedStringRenderer {
    public var context: MDStylerContext {
        didSet { for s in textStylers { s.context = context } }
    }
    public private(set) var textStylers: [MDBaseTextStyler] = []

    public let bodyStyler: MDBodyTextStyler
    public let headingStyler: MDHeadingTextStyler
    public let orderedListStyler: MDOrderedListTextStyler
    public let unorderedListStyler: MDUnorderedListTextStyler
    public let blockQuoteStyler: MDBlockQuoteTextStyler
    public let indentSpaceStyler: MDIndentSpaceTextStyler
    public let fencedCodeStyler: MDFencedCodeTextStyler
    public let strongStyler: MDStrongTextStyler
    public let emphasisStyler: MDEmphasisTextStyler
    public let strikethroughStyler: MDStrikethroughTextStyler
    public let underlineStyler: MDUnderlineTextStyler
    public let codeStyler: MDCodeTextStyler
    public let linkStyler: MDLinkTextStyler
    public let imageStyler: MDImageTextStyler
    public let thematicBreakStyler: MDThematicBreakTextStyler
    public let autoLinkStyler: MDAutoLinkTextStyler
    public let syntaxHighlightStyler: MDSyntaxHighlightTextStyler
    public let escapeStyler: MDEscapeTextStyler
    public let hashtagStyler: MDHashtagTextStyler
    public let highlighterStyler: MDHighlighterTextStyler
    public let hardLineBreakStyler: MDHardLineBreakTextStyler

    public init(context: MDStylerContext) {
        self.context = context
        bodyStyler = MDBodyTextStyler(context: context)
        headingStyler = MDHeadingTextStyler(context: context)
        orderedListStyler = MDOrderedListTextStyler(context: context)
        unorderedListStyler = MDUnorderedListTextStyler(context: context)
        blockQuoteStyler = MDBlockQuoteTextStyler(context: context)
        indentSpaceStyler = MDIndentSpaceTextStyler(context: context)
        fencedCodeStyler = MDFencedCodeTextStyler(context: context)
        strongStyler = MDStrongTextStyler(context: context)
        emphasisStyler = MDEmphasisTextStyler(context: context)
        strikethroughStyler = MDStrikethroughTextStyler(context: context)
        underlineStyler = MDUnderlineTextStyler(context: context)
        codeStyler = MDCodeTextStyler(context: context)
        linkStyler = MDLinkTextStyler(context: context)
        imageStyler = MDImageTextStyler(context: context)
        thematicBreakStyler = MDThematicBreakTextStyler(context: context)
        autoLinkStyler = MDAutoLinkTextStyler(context: context)
        syntaxHighlightStyler = MDSyntaxHighlightTextStyler(context: context)
        escapeStyler = MDEscapeTextStyler(context: context)
        hashtagStyler = MDHashtagTextStyler(context: context)
        highlighterStyler = MDHighlighterTextStyler(context: context)
        hardLineBreakStyler = MDHardLineBreakTextStyler(context: context)

        // Same order as -[MDAttributedStringRenderer init] in Bear 3.0.1 (minus unimplemented ones).
        textStylers = [
            bodyStyler, headingStyler, orderedListStyler, unorderedListStyler, blockQuoteStyler, indentSpaceStyler,
            fencedCodeStyler, strongStyler, emphasisStyler, strikethroughStyler, underlineStyler,
            codeStyler, linkStyler, imageStyler, thematicBreakStyler, autoLinkStyler,
            syntaxHighlightStyler, escapeStyler, hashtagStyler, highlighterStyler, hardLineBreakStyler,
        ]
    }

    /// Bear: `-[MDAttributedStringRenderer styledAttributedStringFromString:]`
    public func styledAttributedString(from markdown: String) -> NSAttributedString {
        let ast = PMKAST(markdown: markdown)
        let s = NSMutableAttributedString(attributedString: ast.annotatedString())
        style(s, range: NSRange(location: 0, length: s.length))
        return s
    }

    /// Bear: `-[MDAttributedStringRenderer attributedStringFromPolarMarkString:]` + `styleAttributedString:inRange:`.
    /// `s` must already carry the PMK* annotation in `range`.
    public func style(_ s: NSMutableAttributedString, range: NSRange) {
        guard range.length > 0 else { return }
        for styler in textStylers {
            styler.style(s, range: range)
        }
        s.fixAttributes(in: range)
    }

    /// Resets `range` of `target` to the plain annotation (dropping every visual attribute) and re-styles it.
    public func restyle(_ target: NSMutableAttributedString, annotated: NSAttributedString, range: NSRange) {
        guard annotated.length == range.length else { return }
        let work = NSMutableAttributedString(attributedString: annotated)
        style(work, range: NSRange(location: 0, length: work.length))
        if let storage = target as? MDTextStorage {
            storage.replaceAttributes(with: work, in: range)
        } else {
            work.enumerateAttributes(in: NSRange(location: 0, length: work.length), options: []) { attrs, r, _ in
                target.setAttributes(attrs, range: NSRange(location: range.location + r.location, length: r.length))
            }
        }
    }
}
