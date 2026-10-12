# BearClone

Swift re-implementation of the Markdown editor pipeline found in Bear.app 3.0.1
(`PolarMark` → `MDTextKit` → `MDTextKitUI`). `MDTextKit` and `MDTextKitUI` are ported
function by function from the Ghidra decompilation of the shipped frameworks
(`reference/decomp/`, not tracked by git).
Pure Swift, SwiftPM, macOS 13+, TextKit 1.

Port status: MDTextStorage, hider, differ, index map, all attachments, StyleKit paths, every
styler, renderer, layout manager, text operations, behaviour controller and editor controller are
1:1. `PolarMark` (Ice parser + `PMKAST` operations) is still the clone's own implementation;
`PMKAST+BearAPI.swift` exposes Bear's selectors and returns no results for unported operations.
App bundle: `scripts/make_app.sh` → `dist/BearClone.app`; `--size 708x748` opens the window at Bear's
editor-area size for screenshot comparisons; `--font-size 16` mirrors Bear's Settings › Typography › Font Size
(the user setting overrides the theme's `editor.text size`). Bear's text area is 708pt wide next to an 11pt
scroller, so use `--size 723x748` for a 708pt text area with the legacy scroller. `--dump-layout` prints every line
fragment (top, height, baseline) and exits. Themes are Bear's own `.theme` files (Red Graphite, Dark Graphite)
and Bear's bundled fonts are registered process-wide from `/Applications/Bear.app` when present.

## Run

```bash
swift run BearCloneApp
```

```bash
swift test
```

Offscreen render for visual checks (no window interaction needed):

```bash
swift run BearCloneApp --snapshot /tmp/editor.png 120 --dark
```

## Targets and their Bear counterparts

| Target | Bear framework | Role |
|---|---|---|
| `PolarMark` | PolarMark.framework (C++ `Ice::` engine + `PMKAST`) | Block + inline parser, AST, annotated string with `PMK*` attribute keys, structural operations (`toggleInlineStyle`, `toggleBlockStyle`, `insertNewline`, `indent`, `toggleTask`, ...). `replaceRange(_:withMarkdown:)` reports the block-aligned range that must be re-styled. |
| `MDTextKit` | MDTextKit.framework (ObjC) | `MDTextStorage` (string is always markdown), `MDAttributedStringRenderer` with the styler pipeline in Bear's order, `MDMarkdownHider` (0.01pt placeholder font + `MDOriginalAttributes`), `MDLayoutManager` (block backgrounds, quote bars, bullets, checkboxes, rules, fence language label), `MDTextContainer` (centered column), `MDEditorController`. |
| `MDTextKitUI` | MDTextKitUI.framework (Swift) | `MDTextView` (checkbox hit-testing, pointer feedback), `MDEditorViewController` (assembly, theme changes, TextBundle open/save). |
| `SFThemeKit` | SFThemeKit.framework | JSON `.theme` files with `$a.b.c` references, `SFThemeManager` + `SFStylable`. Two bundled themes: `Default`, `Dark`. |
| `TextBundle` | TextBundle.framework | `.textbundle` packages and `.textpack` archives per textbundle.org spec v2: `info.json` (foreign metadata preserved), `text.*`, `assets/`. |
| `BearCloneApp` | Bear.app | Demo window with Format / View / File menus. |

## Editing flow (same as Bear)

```
keystroke
 └─ MDTextStorage.replaceCharacters           change recorded
 └─ MDTextStorage.processEditing
     └─ PMKAST.replaceRange(withMarkdown:)     parse, compute reparsed range
     └─ delegate: MDEditorController.performStyling
         ├─ PMKAST.annotatedString(forRange:)  PMK* attributes
         ├─ MDAttributedStringRenderer         stylers in order
         └─ MDMarkdownHider.updateHiding       hide markers not under the caret
 └─ selection change → MDMarkdownHider.showHideMarkdown
```

## What is implemented

Headings, paragraphs, thematic breaks, fenced code (with regex syntax highlighting for
swift / js / python / go / rust / c / bash / sql), blockquotes (nested), bullet / numbered / task
lists (nested by tabs), strong, emphasis, strikethrough, underline, highlighter, inline code,
links, images (as links), hashtags, autolinks, escapes, hard line breaks. Marker hiding,
list continuation on return, smart backspace on markers, tab / shift-tab indentation,
format toggles with undo, themes, TextBundle / TextPack open and save.

## Deliberate differences from Bear

- Bullets, numbers, checkboxes, rules are drawn by the layout manager over hidden marker
  text instead of replacing text with `SFTextAttachment` subclasses. The storage string
  therefore equals the markdown at all times and no index map is needed.
- Code highlighting is a regex tokenizer, not Prism.js in a `JSContext`.

## Not implemented

Tables, footnotes, wiki links, math (MathJax) and Mermaid (WKWebView renderers), file and
image attachments with previews, folding, bidi handling, YAML metadata, callouts, search,
TOC and statistics panels, autocomplete.


## Ported block features (late 2026-10-12)

- Folding: `<!-- {"fold":true} -->` at the end of a heading or list-item line hides the section behind a "•••" pill
  (Format › Toggle Fold / Fold All / Unfold All, gutter chevrons on hover, click the pill or ⌘-click a heading marker).
- Callouts: `> [!NOTE]`, `[!TIP]`, `[!IMPORTANT]`, `[!WARNING]`, `[!CAUTION]` with Bear's icons and palette-derived colours.
- Tables: GitHub pipe tables render as a grid with Bear's column fitting; click a cell to edit it in place (Tab / Shift-Tab / arrows move between cells, Esc ends), hover for the ⋮ menu (rows, columns, alignment, copy as Markdown/CSV/HTML). Edits are written back to the note as Markdown.
- Images: `![alt](relative/path.png)` resolved against the note's folder or the TextBundle assets.
- Tags (`#tag`) are intentionally not styled (`RuleConfig.hashtags = false`).
- Samples: `Samples/all-styles.md` (`--file`), `Samples/fold.md`.

## 启动方式

```bash
cd ~/Developer/MDTextKit && ./scripts/make_app.sh && open -n dist/BearClone.app --args --size 723x748 --font-size 16 --file "$PWD/Samples/all-styles.md"
```

- `./scripts/make_app.sh`：`swift build` 后组装 `dist/BearClone.app`（每次改代码后重新执行）。
- `--size 723x748`：窗口内容尺寸，与 Bear 的 708pt 文本区 + 15pt 滚动条对应；`--font-size 16`：对应 Bear 设置里的字号；`--file`：打开任意 Markdown 文件（相对路径图片会相对该文件所在目录解析）；`--dark`：Dark Graphite 主题。
- 直接调试：`swift run BearCloneApp --size 723x748 --font-size 16`（没有 .app 外壳，字体/主题仍从 SFThemeKit 资源加载）。
- 测试：`swift test`。
- 辅助脚本在 `scripts/`（截图行列像素统计 `rows`/`cols`、拼图 `sidebyside`、Ghidra 导出 `ExportDecomp.java` + `clean.py`、按函数名取汇编 `asmfn.py`）；Bear 的反编译文本在 `reference/decomp/`。
