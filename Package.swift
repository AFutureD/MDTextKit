// swift-tools-version: 5.9
import PackageDescription

// Mirrors Bear.app's framework split:
//   PolarMark   -> parser + AST + structural operations (Bear: PolarMark.framework, C++ "Ice" engine)
//   MDTextKit   -> NSTextStorage / stylers / hider / layout manager (Bear: MDTextKit.framework, ObjC)
//   MDTextKitUI -> NSTextView subclass + editor view controller (Bear: MDTextKitUI.framework, Swift)
//   SFThemeKit  -> JSON theme loading with $path references (Bear: SFThemeKit.framework)
//   TextBundle  -> .textbundle / .textpack packages per textbundle.org (Bear: TextBundle.framework)
let package = Package(
    name: "BearClone",
    platforms: [.macOS(.v13)],
    products: [
        .library(name: "PolarMark", targets: ["PolarMark"]),
        .library(name: "MDTextKit", targets: ["MDTextKit"]),
        .library(name: "MDTextKitUI", targets: ["MDTextKitUI"]),
        .library(name: "SFThemeKit", targets: ["SFThemeKit"]),
        .library(name: "TextBundle", targets: ["TextBundle"]),
        .executable(name: "BearCloneApp", targets: ["BearCloneApp"]),
    ],
    targets: [
        .target(name: "PolarMark"),
        .target(name: "SFThemeKit", resources: [.copy("Themes")]),
        .target(name: "TextBundle"),
        .target(name: "MDTextKit", dependencies: ["PolarMark", "SFThemeKit"]),
        .target(name: "MDTextKitUI", dependencies: ["MDTextKit", "PolarMark", "SFThemeKit", "TextBundle"]),
        .executableTarget(name: "BearCloneApp", dependencies: ["MDTextKitUI", "TextBundle"]),
        .testTarget(name: "PolarMarkTests", dependencies: ["PolarMark"]),
        .testTarget(name: "MDTextKitTests", dependencies: ["MDTextKit", "MDTextKitUI"]),
        .testTarget(name: "TextBundleTests", dependencies: ["TextBundle"]),
    ],
    swiftLanguageVersions: [.v5]
)
