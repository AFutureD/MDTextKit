// swift-tools-version: 5.9
import PackageDescription

//   PolarMark   -> parser + AST + structural operations
//   MDTextKit   -> NSTextStorage / stylers / hider / layout manager
//   MDTextKitUI -> NSTextView subclass + editor view controller
//   SFThemeKit  -> JSON theme loading with $path references
//   TextBundle  -> .textbundle / .textpack packages per textbundle.org
let package = Package(
    name: "MDTextKit",
    platforms: [.macOS(.v13)],
    products: [
        .library(name: "PolarMark", targets: ["PolarMark"]),
        .library(name: "MDTextKit", targets: ["MDTextKit"]),
        .library(name: "MDTextKitUI", targets: ["MDTextKitUI"]),
        .library(name: "SFThemeKit", targets: ["SFThemeKit"]),
        .library(name: "TextBundle", targets: ["TextBundle"]),
        .executable(name: "MDTextKitDemo", targets: ["MDTextKitDemo"]),
    ],
    targets: [
        .target(name: "PolarMark"),
        .target(name: "SFThemeKit", resources: [.copy("Themes")]),
        .target(name: "TextBundle"),
        .target(name: "MDTextKit", dependencies: ["PolarMark", "SFThemeKit"]),
        .target(name: "MDTextKitUI", dependencies: ["MDTextKit", "PolarMark", "SFThemeKit", "TextBundle"]),
        .executableTarget(name: "MDTextKitDemo", dependencies: ["MDTextKitUI", "TextBundle"]),
        .testTarget(name: "PolarMarkTests", dependencies: ["PolarMark"]),
        .testTarget(name: "MDTextKitTests", dependencies: ["MDTextKit", "MDTextKitUI"]),
        .testTarget(name: "TextBundleTests", dependencies: ["TextBundle"]),
    ],
    swiftLanguageVersions: [.v5]
)
