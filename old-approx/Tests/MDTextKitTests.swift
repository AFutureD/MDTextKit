import XCTest
import AppKit
@testable import MDTextKit
@testable import MDTextKitUI
import PolarMark
import SFThemeKit

final class MDTextKitTests: XCTestCase {

    private func makeEditor(_ markdown: String) -> (MDTextView, MDEditorController, MDTextStorage) {
        let context = MDStylerContext(themeManager: SFThemeManager(theme: SFThemeManager.bundledTheme(named: "Default")))
        let tv = MDTextView.make(context: context)
        let controller = MDEditorController(context: context)
        tv.editorController = controller
        controller.load(markdown, into: tv)
        return (tv, controller, tv.mdTextStorage!)
    }

    func testThemeReferencesResolve() {
        let theme = SFThemeManager.bundledTheme(named: "Default")!
        XCTAssertEqual(theme.string(forKeyPath: "editor.text color"), "#2F2F2F") // $base.text color
        XCTAssertNotNil(theme.color(forKeyPath: "editor.accent color"))
        XCTAssertEqual(theme.number(forKeyPath: "editor.headers.modular scale"), 1.125)
    }

    func testRendererStylesHeadingAndStrong() {
        let context = MDStylerContext(themeManager: SFThemeManager(theme: SFThemeManager.bundledTheme(named: "Default")))
        let renderer = MDAttributedStringRenderer(context: context)
        let s = renderer.styledAttributedString(from: "# Title\n\nsome **bold** text")
        let titleFont = s.attribute(.font, at: 2, effectiveRange: nil) as! NSFont
        XCTAssertGreaterThan(titleFont.pointSize, context.baseFontSize)
        XCTAssertTrue(titleFont.isBold)
        let boldFont = s.attribute(.font, at: 16, effectiveRange: nil) as! NSFont
        XCTAssertTrue(boldFont.isBold)
        XCTAssertEqual(boldFont.pointSize, context.baseFontSize)
        XCTAssertNotNil(s.attribute(.mdMarker, at: 14, effectiveRange: nil))      // "**"
        XCTAssertNil(s.attribute(.mdMarker, at: 16, effectiveRange: nil))         // "b"
    }

    func testStorageStaysInSyncWithAST() {
        let (tv, _, storage) = makeEditor("Hello\n\n- item")
        XCTAssertTrue(storage.isInSyncWithAST)
        tv.setSelectedRange(NSRange(location: 5, length: 0))
        tv.insertText(" world", replacementRange: NSRange(location: 5, length: 0))
        XCTAssertEqual(storage.string, "Hello world\n\n- item")
        XCTAssertTrue(storage.isInSyncWithAST)
        XCTAssertEqual(storage.ast.rootNode.children.map { $0.type }, [.paragraph, .list])
    }

    func testMarkersHiddenUntilCaretEnters() {
        let (tv, _, storage) = makeEditor("a **b** c")
        // caret at start: markers hidden with the placeholder font
        tv.setSelectedRange(NSRange(location: 0, length: 0))
        let hiddenFont = storage.attribute(.font, at: 2, effectiveRange: nil) as! NSFont
        XCTAssertEqual(hiddenFont.pointSize, 0.01, accuracy: 0.001)
        XCTAssertNotNil(storage.attribute(.mdHidden, at: 2, effectiveRange: nil))
        // move the caret into the strong span: markers restored
        tv.setSelectedRange(NSRange(location: 5, length: 0))
        let shownFont = storage.attribute(.font, at: 2, effectiveRange: nil) as! NSFont
        XCTAssertGreaterThan(shownFont.pointSize, 10)
        XCTAssertNil(storage.attribute(.mdHidden, at: 2, effectiveRange: nil))
        // and the content is still bold
        XCTAssertTrue((storage.attribute(.font, at: 4, effectiveRange: nil) as! NSFont).isBold)
        // leaving hides again
        tv.setSelectedRange(NSRange(location: 9, length: 0))
        XCTAssertNotNil(storage.attribute(.mdHidden, at: 2, effectiveRange: nil))
    }

    func testListMarkersAlwaysHiddenAndDecorated() {
        let (tv, _, storage) = makeEditor("- [ ] task\n- bullet")
        tv.setSelectedRange(NSRange(location: 8, length: 0))
        XCTAssertNotNil(storage.attribute(.mdHidden, at: 0, effectiveRange: nil))
        guard case .task(let completed, let level)? = storage.attribute(.mdLineDecoration, at: 0, effectiveRange: nil) as? MDLineDecoration else {
            return XCTFail("missing task decoration")
        }
        XCTAssertFalse(completed); XCTAssertEqual(level, 1)
        guard case .bullet? = storage.attribute(.mdLineDecoration, at: 11, effectiveRange: nil) as? MDLineDecoration else {
            return XCTFail("missing bullet decoration")
        }
        let p = storage.attribute(.paragraphStyle, at: 6, effectiveRange: nil) as! NSParagraphStyle
        XCTAssertEqual(p.headIndent, 22)
    }

    func testToggleTaskThroughController() {
        let (tv, controller, storage) = makeEditor("- [ ] task")
        controller.toggleTask(atCharacterIndex: 7)
        XCTAssertEqual(storage.string, "- [x] task")
        XCTAssertTrue(storage.isInSyncWithAST)
        guard case .task(let completed, _)? = storage.attribute(.mdLineDecoration, at: 0, effectiveRange: nil) as? MDLineDecoration else {
            return XCTFail("missing task decoration")
        }
        XCTAssertTrue(completed)
        // undo restores the text and the AST
        tv.undoManager?.undo()
        XCTAssertEqual(storage.string, "- [ ] task")
        XCTAssertTrue(storage.isInSyncWithAST)
    }

    func testNewlineContinuesListInTextView() {
        let (tv, controller, storage) = makeEditor("- item")
        tv.setSelectedRange(NSRange(location: 6, length: 0))
        _ = controller.textView(tv, doCommandBy: #selector(NSResponder.insertNewline(_:)))
        XCTAssertEqual(storage.string, "- item\n- ")
        XCTAssertEqual(tv.selectedRange(), NSRange(location: 9, length: 0))
        _ = controller.textView(tv, doCommandBy: #selector(NSResponder.insertNewline(_:)))
        XCTAssertEqual(storage.string, "- item\n", "return on an empty item exits the list")
    }

    func testToggleStrongViaController() {
        let (tv, controller, storage) = makeEditor("hello world")
        tv.setSelectedRange(NSRange(location: 6, length: 5))
        controller.toggleInlineStyle(.strong)
        XCTAssertEqual(storage.string, "hello **world**")
        XCTAssertEqual(tv.selectedRange(), NSRange(location: 8, length: 5))
        XCTAssertTrue((storage.attribute(.font, at: 9, effectiveRange: nil) as! NSFont).isBold)
        controller.toggleInlineStyle(.strong)
        XCTAssertEqual(storage.string, "hello world")
    }

    func testFencedCodeGetsSyntaxColors() {
        let (_, _, storage) = makeEditor("```swift\nlet x = \"hi\" // c\n```\n")
        XCTAssertEqual(storage.attribute(.mdSyntaxToken, at: 9, effectiveRange: nil) as? String, "keyword")   // let
        XCTAssertEqual(storage.attribute(.mdSyntaxToken, at: 17, effectiveRange: nil) as? String, "string")   // "hi"
        XCTAssertEqual(storage.attribute(.mdSyntaxToken, at: 23, effectiveRange: nil) as? String, "comment")  // // c
        XCTAssertNotNil(storage.attribute(.mdFencedCodeBlock, at: 0, effectiveRange: nil))
    }

    func testCaretDoesNotDriftWhenRestyleCoversNextParagraph() {
        // Regression: styling inside processEditing widened editedRange and NSTextView pushed the
        // caret to its end (next line). Insert at the end of "2. two" with a task list below.
        let (tv, _, storage) = makeEditor("1. one\n2. two\n- [ ] task\n- [x] done\n")
        tv.setSelectedRange(NSRange(location: 13, length: 0))
        tv.insertText("\n", replacementRange: NSRange(location: 13, length: 0))
        XCTAssertEqual(tv.selectedRange(), NSRange(location: 14, length: 0))
        tv.insertText("x", replacementRange: tv.selectedRange())
        XCTAssertEqual(storage.string, "1. one\n2. two\nx\n- [ ] task\n- [x] done\n")
        XCTAssertEqual(tv.selectedRange(), NSRange(location: 15, length: 0))
    }

    func testLayoutDrawsWithoutCrashing() {
        let (tv, _, _) = makeEditor(sample)
        tv.frame = NSRect(x: 0, y: 0, width: 800, height: 2000)
        tv.layoutManager?.ensureLayout(for: tv.textContainer!)
        let image = NSImage(size: tv.bounds.size)
        image.lockFocus()
        tv.draw(tv.bounds)
        image.unlockFocus()
        XCTAssertGreaterThan(tv.layoutManager!.numberOfGlyphs, 10)
    }

    private let sample = """
    # Title
    - [ ] task
    - [x] done
    1. one
    > quote
    ```js
    const a = 1;
    ```
    ---
    text with `code` and ==hl== #tag
    """
}
