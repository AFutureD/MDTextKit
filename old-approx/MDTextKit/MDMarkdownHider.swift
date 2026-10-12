import AppKit
import PolarMark

/// Bear: `MDMarkdownHider`. Markers are never removed from the text storage:
/// hiding sets a 0.01pt placeholder font (Bear's `placeholderFont`) and a clear
/// color, stashing the real attributes under `MDOriginalAttributes`; showing
/// restores them. Which markers are visible depends on the selection.
public final class MDMarkdownHider {
    /// Bear: `-[MDMarkdownHider placeholderFont]` = `[NSFont systemFontOfSize:0.01]`
    public static let placeholderFont = NSFont.systemFont(ofSize: 0.01)

    public enum Policy {
        case alwaysHide                      // list / quote markers: a decoration is drawn instead
        case showWhenSelectionInOwner        // inline markers: show while editing the construct
        case showWhenSelectionOnLine         // heading / fence / thematic break markers
    }

    public struct Rule {
        public let marker: NSAttributedString.Key
        public let owner: NSAttributedString.Key?
        public let policy: Policy
        public init(marker: NSAttributedString.Key, owner: NSAttributedString.Key?, policy: Policy) {
            self.marker = marker; self.owner = owner; self.policy = policy
        }
    }

    /// Bear: `attributesToHide` (from the disassembly: all `PMK*Marker` keys plus link URL/title parts).
    public var rules: [Rule] = [
        Rule(marker: .pmkHeadingMarker, owner: .pmkHeading, policy: .showWhenSelectionOnLine),
        Rule(marker: .pmkListMarker, owner: .pmkListItem, policy: .alwaysHide),
        Rule(marker: .pmkBlockquoteMarker, owner: .pmkBlockquote, policy: .alwaysHide),
        Rule(marker: .pmkIndentSpace, owner: .pmkListItem, policy: .alwaysHide),
        Rule(marker: .pmkFencedCodeMarker, owner: .pmkFencedCode, policy: .showWhenSelectionOnLine),
        Rule(marker: .pmkThematicBreak, owner: .pmkThematicBreak, policy: .showWhenSelectionOnLine),
        Rule(marker: .pmkStrongMarker, owner: .pmkStrong, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkEmphasisMarker, owner: .pmkEmphasis, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkStrikethroughMarker, owner: .pmkStrikethrough, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkUnderlineMarker, owner: .pmkUnderline, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkHighlighterMarker, owner: .pmkHighlighter, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkCodeMarker, owner: .pmkCode, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkLinkMarker, owner: .pmkLink, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkImageMarker, owner: .pmkImage, policy: .showWhenSelectionInOwner),
        Rule(marker: .pmkEscapeMarker, owner: .pmkEscape, policy: .showWhenSelectionInOwner),
    ]

    public init() {}

    // MARK: Range helpers (Bear: rangesToCheckForMarkdownHidingForRange:, extendedRangeForRange:)

    /// Paragraph-aligned range that can contain every marker whose visibility depends on `selection`.
    public func rangeToCheck(for selection: NSRange, in s: NSAttributedString) -> NSRange {
        let ns = s.string as NSString
        let safe = NSRange(location: min(selection.location, ns.length), length: min(selection.length, max(0, ns.length - selection.location)))
        var r = ns.paragraphRange(for: safe)
        // A caret at the very end of a paragraph may belong to a construct that ends with the newline.
        if r.location > 0 { r = NSUnionRange(r, ns.paragraphRange(for: NSRange(location: r.location - 1, length: 0))) }
        return r
    }

    /// Bear: `-[MDMarkdownHider showHideMarkdownInTextView:oldSelectionRange:newSelectionRange:]`
    public func showHideMarkdown(in s: NSMutableAttributedString, oldSelection: NSRange?, newSelection: NSRange) {
        var range = rangeToCheck(for: newSelection, in: s)
        if let old = oldSelection { range = NSUnionRange(range, rangeToCheck(for: old, in: s)) }
        updateHiding(in: s, range: range, selection: newSelection)
    }

    /// Re-evaluates every marker in `range` against `selection`. Bear splits this into
    /// `hideMarkdownInRange:` + `showMarkdownInRange:`; one pass is simpler.
    public func updateHiding(in s: NSMutableAttributedString, range: NSRange, selection: NSRange) {
        let total = s.length
        guard total > 0 else { return }
        let r = NSIntersectionRange(range, NSRange(location: 0, length: total))
        guard r.length > 0 else { return }
        let ns = s.string as NSString

        for rule in rules {
            s.enumerateAttribute(rule.marker, in: r, options: []) { value, mr, _ in
                guard value != nil else { return }
                if s.attribute(.mdPreventMarkdownHiding, at: mr.location, effectiveRange: nil) != nil {
                    self.show(mr, in: s); return
                }
                let visible: Bool
                switch rule.policy {
                case .alwaysHide:
                    visible = false
                case .showWhenSelectionInOwner:
                    var owner = mr
                    if let key = rule.owner {
                        var lr = NSRange()
                        if s.attribute(key, at: mr.location, longestEffectiveRange: &lr, in: NSRange(location: 0, length: total)) != nil { owner = lr }
                    }
                    visible = self.selection(selection, touches: owner)
                case .showWhenSelectionOnLine:
                    let line = ns.lineRange(for: NSRange(location: mr.location, length: 0))
                    // caret at the end of the line (before "\n") counts as on the line
                    let lineNoNewline = NSRange(location: line.location, length: max(0, line.length - (NSMaxRange(line) < total || ns.hasSuffix("\n") ? 1 : 0)))
                    visible = self.selection(selection, touches: lineNoNewline) || self.selection(selection, touches: line)
                }
                if visible { self.show(mr, in: s) } else { self.hide(mr, in: s) }
            }
        }
    }

    private func selection(_ sel: NSRange, touches owner: NSRange) -> Bool {
        if sel.length == 0 { return sel.location >= owner.location && sel.location <= NSMaxRange(owner) }
        return NSIntersectionRange(sel, owner).length > 0 || sel.location == NSMaxRange(owner) || NSMaxRange(sel) == owner.location
    }

    /// Bear: `hideMarkdownInRange:inAttributedString:` (unconditional).
    public func hideMarkdown(in s: NSMutableAttributedString, range: NSRange) {
        updateHiding(in: s, range: range, selection: NSRange(location: NSNotFound, length: 0))
    }

    /// Bear: `showMarkdownInRange:inAttributedString:` (unconditional).
    public func showMarkdown(in s: NSMutableAttributedString, range: NSRange) {
        let r = NSIntersectionRange(range, NSRange(location: 0, length: s.length))
        s.enumerateAttribute(.mdHidden, in: r, options: []) { value, mr, _ in
            if value != nil { self.show(mr, in: s) }
        }
    }

    // MARK: Primitive hide / show

    private func hide(_ range: NSRange, in s: NSMutableAttributedString) {
        s.enumerateAttributes(in: range, options: []) { attrs, r, _ in
            if attrs[.mdHidden] != nil { return }
            var stash: [NSAttributedString.Key: Any] = [:]
            if let f = attrs[.font] { stash[.font] = f }
            if let c = attrs[.foregroundColor] { stash[.foregroundColor] = c }
            s.addAttributes([.mdOriginalAttributes: stash, .mdHidden: true,
                             .font: MDMarkdownHider.placeholderFont, .foregroundColor: NSColor.clear], range: r)
        }
    }

    private func show(_ range: NSRange, in s: NSMutableAttributedString) {
        s.enumerateAttributes(in: range, options: []) { attrs, r, _ in
            guard attrs[.mdHidden] != nil else { return }
            s.removeAttribute(.mdHidden, range: r)
            s.removeAttribute(.mdOriginalAttributes, range: r)
            if let stash = attrs[.mdOriginalAttributes] as? [NSAttributedString.Key: Any] {
                s.addAttributes(stash, range: r)
            }
        }
    }
}
