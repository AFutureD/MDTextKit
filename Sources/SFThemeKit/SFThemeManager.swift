import AppKit

/// Bear: objects that re-style themselves when the theme changes
/// (`-[SFThemeManager registerStylableObject:]` / `styleObjectWithThemeManager:`).
public protocol SFStylable: AnyObject {
    func styleObject(with themeManager: SFThemeManager)
}

/// Bear: `SFThemeManager`. Holds the current theme, caches typed lookups and
/// pushes theme changes to registered objects.
public final class SFThemeManager {
    public static let shared = SFThemeManager()

    public static let themeDidChangeNotification = Notification.Name("SFThemeManagerThemeDidChange")

    public private(set) var currentTheme: SFTheme
    /// User typography settings override theme values such as
    /// "editor.text size", "editor.text font", "editor.line height multiplier", "editor.line width multiplier".
    public var overrides: [String: Any] = [:] {
        didSet { fontCache.removeAll(); styleRegisteredStylableObjects() }
    }
    private var stylables = NSHashTable<AnyObject>.weakObjects()
    private var fontCache: [String: NSFont] = [:]

    public init(theme: SFTheme? = nil) {
        SFFontLoader.registerFontsFromEnvironment()
        currentTheme = theme ?? SFThemeManager.bundledTheme(named: "Default") ?? SFTheme(name: "Empty", jsonObject: [:])
    }

    // MARK: Bundled themes

    public static func bundledThemeURLs() -> [URL] {
        guard let dir = Bundle.module.url(forResource: "Themes", withExtension: nil) else { return [] }
        let urls = (try? FileManager.default.contentsOfDirectory(at: dir, includingPropertiesForKeys: nil)) ?? []
        return urls.filter { $0.pathExtension == "theme" }.sorted { $0.lastPathComponent < $1.lastPathComponent }
    }

    public static func bundledTheme(named name: String) -> SFTheme? {
        guard let url = bundledThemeURLs().first(where: { $0.deletingPathExtension().lastPathComponent == name }) else { return nil }
        return try? SFTheme(contentsOf: url)
    }

    // MARK: Loading

    /// Bear: `-[SFThemeManager loadTheme:updateStylableObjects:]`
    public func loadTheme(_ theme: SFTheme, updateStylableObjects: Bool = true) {
        currentTheme = theme
        fontCache.removeAll()
        if updateStylableObjects { styleRegisteredStylableObjects() }
        NotificationCenter.default.post(name: SFThemeManager.themeDidChangeNotification, object: self)
    }

    public func registerStylableObject(_ object: SFStylable) {
        stylables.add(object)
        object.styleObject(with: self)
    }

    public func unregisterStylableObject(_ object: SFStylable) { stylables.remove(object) }

    public func styleRegisteredStylableObjects() {
        for o in stylables.allObjects { (o as? SFStylable)?.styleObject(with: self) }
    }

    // MARK: Typed lookups (Bear: colorForKey:, fontForKey:size:, numberForKey:, stringForKey:)

    public func color(forKey key: String, default fallback: NSColor = .textColor) -> NSColor {
        if let s = overrides[key] as? String, let c = SFTheme.color(fromHex: s) { return c }
        return currentTheme.color(forKeyPath: key) ?? fallback
    }

    public func number(forKey key: String, default fallback: CGFloat) -> CGFloat {
        if let n = overrides[key] as? NSNumber { return CGFloat(n.doubleValue) }
        if let d = overrides[key] as? Double { return CGFloat(d) }
        return currentTheme.number(forKeyPath: key) ?? fallback
    }

    public func bool(forKey key: String, default fallback: Bool) -> Bool {
        if let b = overrides[key] as? Bool { return b }
        return currentTheme.bool(forKeyPath: key) ?? fallback
    }

    public func string(forKey key: String) -> String? { (overrides[key] as? String) ?? currentTheme.string(forKeyPath: key) }

    /// Font names: "system", "system-rounded", "system-serif", "system-mono" or a PostScript name.
    public func font(forKey key: String, size: CGFloat) -> NSFont {
        let name = string(forKey: key) ?? "system"
        let cacheKey = "\(name)@\(size)"
        if let f = fontCache[cacheKey] { return f }
        let font: NSFont
        switch name {
        case "system", "": font = NSFont.systemFont(ofSize: size)
        case "system-bold": font = NSFont.boldSystemFont(ofSize: size)
        case "system-semibold": font = NSFont.systemFont(ofSize: size, weight: .semibold)
        case "system-rounded": font = NSFont.systemFont(ofSize: size).withDesign(.rounded)
        case "system-serif": font = NSFont.systemFont(ofSize: size).withDesign(.serif)
        case "system-mono": font = NSFont.monospacedSystemFont(ofSize: size, weight: .regular)
        default: font = NSFont(name: name, size: size) ?? NSFont.systemFont(ofSize: size)
        }
        fontCache[cacheKey] = font
        return font
    }
}

public extension NSFont {
    func withDesign(_ design: NSFontDescriptor.SystemDesign) -> NSFont {
        guard let d = fontDescriptor.withDesign(design) else { return self }
        return NSFont(descriptor: d, size: pointSize) ?? self
    }

    func withTraits(_ traits: NSFontDescriptor.SymbolicTraits) -> NSFont {
        let d = fontDescriptor.withSymbolicTraits(fontDescriptor.symbolicTraits.union(traits))
        return NSFont(descriptor: d, size: pointSize) ?? self
    }

    var isBold: Bool { fontDescriptor.symbolicTraits.contains(.bold) }
    var isItalic: Bool { fontDescriptor.symbolicTraits.contains(.italic) }
}
