import XCTest
import AppKit
@testable import MDTextKit
@testable import MDTextKitUI

/// Pixel-alignment regressions measured against Bear 3.0.1 with the Red Graphite theme (15pt BearSansUI):
/// line pitch 27pt (minimumLineHeight 23 + lineSpacing 4), tab 33, column 22, gutter 11, line width 720.
final class MDLinePitchTests: XCTestCase {
    func testBearMetricsForRedGraphite() {
        let vc = MDEditorViewController()
        _ = vc.view
        vc.load(markdown: "Welcome to a Swift re-implementation of Bear's editor pipeline PolarMark MDTextKit MDTextKitUI and more words to wrap the line for sure yes.\nMarkers like\n\n- A bullet\n- Another\n")
        let tv = vc.textView!
        tv.frame = NSRect(x: 0, y: 0, width: 708, height: 748)
        tv.layoutManager!.ensureLayout(for: tv.textContainer!)
        var ys: [CGFloat] = []
        tv.layoutManager!.enumerateLineFragments(forGlyphRange: NSRange(location: 0, length: tv.layoutManager!.numberOfGlyphs)) { rect, _, _, _, _ in ys.append(rect.minY) }
        for i in 1..<ys.count { XCTAssertEqual(ys[i] - ys[i - 1], 27, "line \(i)") }
        let p = tv.mdTextStorage.paragraphStyle(at: 0)!
        XCTAssertEqual(p.minimumLineHeight, 23)
        XCTAssertEqual(p.lineSpacing, 4)
        XCTAssertEqual(p.headIndent, 33)
        let r = vc.editorController.attributedStringRenderer
        XCTAssertEqual(r.tabSize, 33)
        XCTAssertEqual(r.columnSize, 22)
        XCTAssertEqual(r.gutterSize, 11)
        XCTAssertEqual(r.textContainerMaxWidth, 720)
        XCTAssertEqual(tv.mdTextContainer.lineFragmentPadding, 23)
        XCTAssertEqual(tv.mdTextStorage.font(at: 0)?.fontName, "BearSansUI-Regular")
    }
}
