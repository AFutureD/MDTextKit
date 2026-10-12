import AppKit
import SFThemeKit

/// Everything the stylers and the layout manager need from the theme, resolved
/// once. Bear spreads these over properties on each styler (`baseFontSize`,
/// `markerColor`, `baseTabSize`, `headerFont`, `modularScale`...); grouping them
/// keeps the Swift version compact.
public struct MDStylerContext {
    public var baseFont: NSFont
    public var baseFontSize: CGFloat
    public var lineHeightMultiplier: CGFloat
    public var paragraphSpacing: CGFloat
    public var tabSize: CGFloat               // Bear: baseTabSize — indent unit for lists
    public var maxColumnWidth: CGFloat
    public var textColor: NSColor
    public var backgroundColor: NSColor
    public var accentColor: NSColor
    public var markerColor: NSColor
    public var linkColor: NSColor
    public var selectionColor: NSColor
    public var cursorColor: NSColor
    public var thematicBreakColor: NSColor

    public var headerFontName: String
    public var headerTextColor: NSColor
    public var modularScale: CGFloat
    public var headerLineHeightMultiplier: CGFloat
    public var addHeaderPadding: Bool
    public var headerPaddingTop: CGFloat
    public var headerPaddingBottom: CGFloat

    public var codeFont: NSFont
    public var codeTextColor: NSColor
    public var codeBackgroundColor: NSColor
    public var codeBorderColor: NSColor
    public var codeLanguageColor: NSColor
    public var syntaxColors: [String: NSColor]

    public var quoteTextColor: NSColor
    public var quoteBarColor: NSColor
    public var quoteIndent: CGFloat

    public var bulletColor: NSColor
    public var numberColor: NSColor
    public var taskBorderColor: NSColor
    public var taskFillColor: NSColor
    public var taskCheckColor: NSColor
    public var completedTaskTextColor: NSColor

    public var tagTextColor: NSColor
    public var tagBackgroundColor: NSColor
    public var highlighterBackgroundColor: NSColor
    public var highlighterTextColor: NSColor

    public var themeManager: SFThemeManager

    public init(themeManager tm: SFThemeManager = .shared) {
        themeManager = tm
        let size = tm.number(forKey: "editor.font size", default: 15)
        baseFontSize = size
        baseFont = tm.font(forKey: "editor.font", size: size)
        lineHeightMultiplier = tm.number(forKey: "editor.line height multiplier", default: 1.35)
        paragraphSpacing = tm.number(forKey: "editor.paragraph spacing", default: 6)
        tabSize = tm.number(forKey: "editor.tab size", default: 22)
        maxColumnWidth = tm.number(forKey: "editor.max column width", default: 680)
        textColor = tm.color(forKey: "editor.text color")
        backgroundColor = tm.color(forKey: "editor.background color", default: .textBackgroundColor)
        accentColor = tm.color(forKey: "editor.accent color", default: .controlAccentColor)
        markerColor = tm.color(forKey: "editor.markers color", default: .tertiaryLabelColor)
        linkColor = tm.color(forKey: "editor.link color", default: .linkColor)
        selectionColor = tm.color(forKey: "editor.selection color", default: .selectedTextBackgroundColor)
        cursorColor = tm.color(forKey: "editor.cursor color", default: .textColor)
        thematicBreakColor = tm.color(forKey: "editor.thematic break color", default: .separatorColor)

        headerFontName = tm.string(forKey: "editor.headers.font") ?? "system"
        headerTextColor = tm.color(forKey: "editor.headers.text color")
        modularScale = tm.number(forKey: "editor.headers.modular scale", default: 1.125)
        headerLineHeightMultiplier = tm.number(forKey: "editor.headers.line height multiplier", default: 1.2)
        addHeaderPadding = tm.bool(forKey: "editor.headers.add top bottom padding", default: true)
        headerPaddingTop = tm.number(forKey: "editor.headers.padding top multiplier", default: 0.5)
        headerPaddingBottom = tm.number(forKey: "editor.headers.padding bottom multiplier", default: 0.3)

        codeFont = tm.font(forKey: "editor.code.font", size: size - 1)
        codeTextColor = tm.color(forKey: "editor.code.text color")
        codeBackgroundColor = tm.color(forKey: "editor.code.background color", default: .quaternaryLabelColor)
        codeBorderColor = tm.color(forKey: "editor.code.border color", default: .separatorColor)
        codeLanguageColor = tm.color(forKey: "editor.code.language color", default: .secondaryLabelColor)
        var syntax: [String: NSColor] = [:]
        for token in ["comment", "keyword", "string", "number", "constant", "function", "variable", "entity"] {
            syntax[token] = tm.color(forKey: "editor.code.syntax highlight.\(token)")
        }
        syntaxColors = syntax

        quoteTextColor = tm.color(forKey: "editor.quote.text color", default: .secondaryLabelColor)
        quoteBarColor = tm.color(forKey: "editor.quote.bar color", default: .controlAccentColor)
        quoteIndent = tm.number(forKey: "editor.quote.indent", default: 18)

        bulletColor = tm.color(forKey: "editor.list.bullet color", default: .controlAccentColor)
        numberColor = tm.color(forKey: "editor.list.number color", default: .secondaryLabelColor)
        taskBorderColor = tm.color(forKey: "editor.task.border color", default: .tertiaryLabelColor)
        taskFillColor = tm.color(forKey: "editor.task.fill color", default: .controlAccentColor)
        taskCheckColor = tm.color(forKey: "editor.task.check color", default: .white)
        completedTaskTextColor = tm.color(forKey: "editor.task.completed text color", default: .secondaryLabelColor)

        tagTextColor = tm.color(forKey: "editor.tags.text color", default: .controlAccentColor)
        tagBackgroundColor = tm.color(forKey: "editor.tags.background color", default: .quaternaryLabelColor)
        highlighterBackgroundColor = tm.color(forKey: "editor.highlighter.default.background color", default: .yellow)
        highlighterTextColor = tm.color(forKey: "editor.highlighter.default.text color")
    }

    // MARK: Derived values

    /// Bear: `-[MDHeadingTextStyler headerSizeForBaseSize:headerLevel:maxHeaderLevel:modularScale:]`
    public func headerSize(level: Int, maxHeaderLevel: Int = 6) -> CGFloat {
        let steps = CGFloat(max(0, maxHeaderLevel - level + 1))
        return (baseFontSize * pow(modularScale, steps)).rounded()
    }

    public func headerFont(level: Int) -> NSFont {
        let f = themeManager.font(forKey: "editor.headers.font", size: headerSize(level: level))
        return f.withTraits(.bold)
    }

    public var bodyLineHeight: CGFloat {
        (baseFont.ascender - baseFont.descender + baseFont.leading) * lineHeightMultiplier
    }

    public func bodyParagraphStyle() -> NSMutableParagraphStyle {
        let p = NSMutableParagraphStyle()
        p.lineHeightMultiple = lineHeightMultiplier
        p.paragraphSpacing = paragraphSpacing
        p.tabStops = []
        p.defaultTabInterval = tabSize
        return p
    }

    public var bodyAttributes: [NSAttributedString.Key: Any] {
        [.font: baseFont, .foregroundColor: textColor, .paragraphStyle: bodyParagraphStyle()]
    }
}
