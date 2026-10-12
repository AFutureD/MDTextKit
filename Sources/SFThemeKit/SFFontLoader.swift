import AppKit
import CoreText

/// Registers Bear's bundled editor fonts (BearSansUI, BearSansUIHeading, RobotoMono, OpenDyslexic) for this
/// process only, so themes can ask for them by PostScript name exactly like Bear does. Nothing is installed
/// into the user's font library.
public enum SFFontLoader {
    public static let bearResourcesURL = URL(fileURLWithPath: "/Applications/Bear.app/Contents/Resources")
    private static var registered = false

    @discardableResult
    public static func registerBearFonts(from directory: URL = bearResourcesURL) -> [String] {
        guard !registered else { return [] }
        registered = true
        let urls = ((try? FileManager.default.contentsOfDirectory(at: directory, includingPropertiesForKeys: nil)) ?? [])
            .filter { ["otf", "ttf"].contains($0.pathExtension.lowercased()) }
        var names: [String] = []
        for url in urls {
            var error: Unmanaged<CFError>?
            if CTFontManagerRegisterFontsForURL(url as CFURL, .process, &error) {
                names.append(url.deletingPathExtension().lastPathComponent)
            }
        }
        return names
    }
}
