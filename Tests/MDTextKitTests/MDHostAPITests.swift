import XCTest
import AppKit
@testable import MDTextKit
@testable import MDTextKitUI
import SFThemeKit

/// The surface a host uses without `MDEditorViewController`: a bare text view, the formatting
/// query and the link hook.
@MainActor final class MDHostAPITests: XCTestCase {
    private func makeTextView(_ md: String) -> (MDTextView, NSWindow) {
        let controller = MDEditorController()
        controller.autoHideMarkdown = true
        let tv = MDTextView(frame: NSRect(x: 0, y: 0, width: 400, height: 300), editorController: controller)
        tv.applyTheme(TestTheme.makeManager())
        let scroll = NSScrollView(frame: tv.frame)
        scroll.documentView = tv
        let win = NSWindow(contentRect: tv.frame, styleMask: [.titled], backing: .buffered, defer: false)
        win.contentView = scroll
        controller.loadString(md, into: tv)
        return (tv, win)
    }

    func testBareTextViewStylesAndRoundTrips() {
        let md = "# Title\n\n- [ ] task\n\n**bold** text\n"
        let (tv, _) = makeTextView(md)
        XCTAssertEqual(tv.markdown, md)
        XCTAssertTrue(tv.mdTextStorage.textAttachment(at: 0) is MDATXHeadingAttachment)
        XCTAssertGreaterThan(tv.mdLayoutManager.basePointSize, 0, "applyTheme reached the layout manager")
        XCTAssertNotNil(tv.typingAttributes[.font])
    }

    func testFormattingFollowsTheSelection() {
        let (tv, _) = makeTextView("# Title\n\n**bold** plain\n\n- [ ] task\n\n> quote\n\n```\ncode\n```\n")
        let ts = tv.mdTextStorage
        func formatting(at markdownOffset: Int) -> MDFormatting {
            tv.setSelectedRange(ts.attributedStringRange(fromStringRange: NSRange(location: markdownOffset, length: 0)))
            return tv.editorController.formatting(in: tv)
        }
        XCTAssertEqual(formatting(at: 3).headingLevel, 1)
        let bold = formatting(at: 12)
        XCTAssertEqual(bold.headingLevel, 0)
        XCTAssertTrue(bold.inline.contains(.strong))
        XCTAssertFalse(formatting(at: 18).inline.contains(.strong))
        XCTAssertEqual(formatting(at: 26).list, .task)
        XCTAssertTrue(formatting(at: 39).isBlockquote)
        XCTAssertTrue(formatting(at: 51).isCodeBlock)
        tv.setSelectedRange(NSRange(location: 0, length: ts.length))
        XCTAssertNil(tv.editorController.formatting(in: tv).headingLevel, "mixed paragraphs report no level")
    }

    func testFormattingLightsWhatTheToggleUndoes() {
        let (tv, _) = makeTextView("plain\n")
        tv.setSelectedRange(NSRange(location: 0, length: 5))
        tv.editorController.toggleStrong(in: tv)
        XCTAssertEqual(tv.markdown, "**plain**\n")
        XCTAssertTrue(tv.editorController.formatting(in: tv).inline.contains(.strong))
        tv.editorController.toggleStrong(in: tv)
        XCTAssertEqual(tv.markdown, "plain\n")
        XCTAssertFalse(tv.editorController.formatting(in: tv).inline.contains(.strong))
        tv.editorController.toggleHeading(in: tv, headingLevel: 2)
        XCTAssertEqual(tv.editorController.formatting(in: tv).headingLevel, 2)
    }

    func testOpenURLHookReceivesTheClickedLink() {
        let (tv, _) = makeTextView("[label](https://example.com/x)\n")
        var opened: [URL] = []
        tv.openURL = { opened.append($0) }
        let ts = tv.mdTextStorage
        var index: Int?
        ts.enumerateAttribute(.attachment, in: NSRange(location: 0, length: ts.length), options: []) { v, r, stop in
            if v is MDLinkTextAttachment { index = r.location; stop.pointee = true }
        }
        let i = try! XCTUnwrap(index)
        let cell = try! XCTUnwrap(ts.textAttachment(at: i)?.attachmentCell)
        tv.textView(tv, clickedOn: cell, in: .zero, at: i)
        XCTAssertEqual(opened, [URL(string: "https://example.com/x")!])
    }

    func testThemeColorsMayBeDynamicNSColors() {
        let dynamic = NSColor(name: nil) { $0.bestMatch(from: [.aqua, .darkAqua]) == .darkAqua ? .white : .black }
        let theme = SFTheme(name: "Host", jsonObject: ["editor": ["text color": dynamic, "cursor color": "$editor.text color"]])
        let manager = SFThemeManager(theme: theme)
        XCTAssertTrue(manager.color(forKey: "editor.text color") === dynamic)
        XCTAssertTrue(manager.color(forKey: "editor.cursor color") === dynamic, "$ references resolve to the same object")
    }

    func testCJKFamilyJoinsTheCascade() {
        let manager = TestTheme.makeManager()
        manager.overrides["editor.text font cjk"] = "PingFang SC"
        let font = manager.font(forKey: "editor.text font", size: 15)
        let cascade = font.fontDescriptor.fontAttributes[.cascadeList] as? [NSFontDescriptor]
        XCTAssertEqual(cascade?.first?.fontAttributes[.family] as? String, "PingFang SC")
    }
}
