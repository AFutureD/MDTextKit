import AppKit

/// Attributes MDTextKit adds on top of the PMK* annotation. Bear exports the
/// same family as `MD*AttributeName` constants (MDOriginalAttributesName,
/// MDPreventMarkdownHidingAttributeName, MDCodeBackgroundColorAttributeName, ...).
public extension NSAttributedString.Key {
    static let mdMarker = NSAttributedString.Key("MDMarker")                                   // Bool: syntax characters
    static let mdOriginalAttributes = NSAttributedString.Key("MDOriginalAttributes")           // [Key: Any] stashed by the hider
    static let mdHidden = NSAttributedString.Key("MDHidden")                                   // Bool: collapsed by the hider
    static let mdPreventMarkdownHiding = NSAttributedString.Key("MDPreventMarkdownHiding")     // Bool
    static let mdCodeBackgroundColor = NSAttributedString.Key("MDCodeBackgroundColor")         // NSColor (inline code)
    static let mdFencedCodeBlock = NSAttributedString.Key("MDFencedCodeBlock")                 // MDFencedCodeInfo
    static let mdHighlighterBackgroundColor = NSAttributedString.Key("MDHighlighterBackgroundColor") // NSColor
    static let mdTagBackgroundColor = NSAttributedString.Key("MDTagBackgroundColor")           // NSColor
    static let mdBlockQuoteLevel = NSAttributedString.Key("MDBlockQuoteLevel")                 // Int
    static let mdLineDecoration = NSAttributedString.Key("MDLineDecoration")                   // MDLineDecoration
    static let mdSyntaxHighlightLanguage = NSAttributedString.Key("MDSyntaxHighlightLanguage") // String
    static let mdSyntaxToken = NSAttributedString.Key("MDSyntaxToken")                         // String token type
}

public struct MDFencedCodeInfo: Equatable {
    public var language: String
    public var isFenceLine: Bool
    public init(language: String, isFenceLine: Bool) { self.language = language; self.isFenceLine = isFenceLine }
}

/// Visual decorations the layout manager draws in place of hidden markers.
/// Bear implements these as `SFTextAttachment` subclasses (MDUnorderedListTextAttachment,
/// MDTaskTextAttachment, MDOrderedListTextAttachment, MDThematicBreakTextAttachment ...).
public enum MDLineDecoration: Hashable {
    case bullet(level: Int)
    case number(Int, level: Int)
    case task(completed: Bool, level: Int)
    case thematicBreak
    case fenceLanguage(String)
}

public let MDTextViewTextDidChangeNotification = Notification.Name("MDTextViewTextDidChangeNotification")
public let MDTextViewTextDidChangeSelectionNotification = Notification.Name("MDTextViewTextDidChangeSelectionNotification")
