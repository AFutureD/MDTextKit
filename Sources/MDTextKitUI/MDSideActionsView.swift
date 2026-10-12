import AppKit
import MDTextKit
import PolarMark

/// Bear: `MDSideActionsButton` — a borderless chevron that remembers the character index it acts on.
final class MDSideActionsButton: NSButton {
    var range: NSRange?
    override func resetCursorRects() { addCursorRect(bounds, cursor: .arrow) }
    override func mouseDown(with event: NSEvent) { if event.clickCount <= 1 { super.mouseDown(with: event) } }
}

/// Bear: `MDSideActionsView` — transparent overlay over the editor that shows fold chevrons next to
/// foldable headings and list items while the mouse hovers the left gutter.
public final class MDSideActionsView: NSView {
    public var foldingBlock: ((Int) -> Void)?
    public var fontSize: CGFloat = 15 { didSet { setupButtonsImages() } }
    public var buttonColor: NSColor = .systemGray { didSet { setupButtonsImages() } }
    public var accentColor: NSColor = .systemRed
    public var isEnabled = true

    private weak var hostingView: MDTextView?
    private weak var editorController: MDEditorController?
    private var usedButtons: [MDSideActionsButton] = []
    private var unusedButtons: [MDSideActionsButton] = []
    private var buttonsAreVisible = false
    private var hoverRects: [NSRect] = []
    private var debounceTimer: Timer?
    private var chevronDown: NSImage?, chevronRight: NSImage?, chevronLeft: NSImage?
    private var observers: [NSObjectProtocol] = []

    public init(hostingView: MDTextView, editorController: MDEditorController) {
        self.hostingView = hostingView
        self.editorController = editorController
        super.init(frame: .zero)
        wantsLayer = true
        setupButtonsImages()
        if let clip = hostingView.enclosingScrollView?.contentView {
            clip.postsBoundsChangedNotifications = true
            observers.append(NotificationCenter.default.addObserver(forName: NSView.boundsDidChangeNotification, object: clip, queue: .main) { [weak self] _ in
                self?.updateActionsButtons(debounce: !(self?.buttonsAreVisible ?? false)) })
            observers.append(NotificationCenter.default.addObserver(forName: NSView.frameDidChangeNotification, object: clip, queue: .main) { [weak self] _ in self?.updateActionsButtons(debounce: true) })
        }
        observers.append(NotificationCenter.default.addObserver(forName: MDTextViewTextDidChangeNotification, object: nil, queue: .main) { [weak self] _ in self?.updateActionsButtons(debounce: !(self?.buttonsAreVisible ?? false)) })
    }

    public required init?(coder: NSCoder) { fatalError() }
    deinit { observers.forEach { NotificationCenter.default.removeObserver($0) } }

    public override var isFlipped: Bool { true }
    public override func hitTest(_ point: NSPoint) -> NSView? { nil }   // the overlay never swallows events

    private func setupButtonsImages() {
        let config = NSImage.SymbolConfiguration(pointSize: fontSize, weight: .medium, scale: .small).applying(.init(paletteColors: [buttonColor]))
        chevronDown = NSImage(systemSymbolName: "chevron.down", accessibilityDescription: "Fold")?.withSymbolConfiguration(config)
        chevronRight = NSImage(systemSymbolName: "chevron.right", accessibilityDescription: "Unfold")?.withSymbolConfiguration(config)
        chevronLeft = NSImage(systemSymbolName: "chevron.left", accessibilityDescription: "Unfold")?.withSymbolConfiguration(config)
        for b in usedButtons + unusedButtons { b.image = chevronDown }
    }

    private func reusableButton() -> MDSideActionsButton {
        if let b = unusedButtons.popLast() { usedButtons.append(b); return b }
        let b = MDSideActionsButton(image: chevronDown ?? NSImage(), target: self, action: #selector(foldButtonClicked(_:)))
        b.isBordered = false
        b.imagePosition = .imageOnly
        b.setFrameSize(NSSize(width: fontSize * 1.5, height: fontSize * 1.5))
        usedButtons.append(b)
        return b
    }

    @objc private func foldButtonClicked(_ sender: MDSideActionsButton) {
        guard let r = sender.range else { return }
        foldingBlock?(r.location)
    }

    // MARK: Layout of the buttons

    public func updateActionsButtons(debounce: Bool) {
        debounceTimer?.invalidate()
        if debounce {
            debounceTimer = Timer.scheduledTimer(withTimeInterval: 0.5, repeats: false) { [weak self] _ in self?.updateActionsButtons(debounce: false) }
            return
        }
        guard let tv = hostingView, let ec = editorController, isEnabled else { return }
        let lm = tv.mdLayoutManager, tc = tv.mdTextContainer, ts = tv.mdTextStorage
        for b in usedButtons { b.removeFromSuperview(); unusedButtons.append(b) }
        usedButtons.removeAll()
        hoverRects.removeAll()
        let visibleGlyphs = lm.glyphRange(forBoundingRect: tv.visibleRect, in: tc)
        let visible = lm.characterRange(forGlyphRange: visibleGlyphs, actualGlyphRange: nil)
        guard visible.length > 0 else { return }
        let origin = tv.textContainerOrigin
        var hasRTL = false

        // Bear: updateActionsButtonsForHeaders
        ts.enumerateAttribute(.pmkHeadingMarker, in: visible, options: []) { v, run, _ in
            guard v != nil, !ts.isRangeInsideList(run), !ts.isRangeInsideBlockquote(run), ec.hasFoldableContent(at: run.location, in: tv),
                  let att = ts.textAttachment(at: run.location) as? SFTextAttachment else { return }
            let i = run.location
            let r = lm.boundingRect(forGlyphRange: NSRange(location: lm.glyphIndexForCharacter(at: i), length: 1), in: tc)
            let btn = reusableButton()
            tv.addSubview(btn)
            btn.range = run
            btn.alphaValue = buttonsAreVisible ? 1 : 0
            let font = ts.attribute(.font, at: i, effectiveRange: nil) as? NSFont
            let ps = ts.attribute(.paragraphStyle, at: i, effectiveRange: nil) as? NSParagraphStyle
            var y = r.maxY - btn.frame.height + (font?.descender ?? 0) - (ps?.lineSpacing ?? 0) - att.attachmentBaselineOffset
                + origin.y + (btn.frame.height - att.attachmentSize.height) * 0.5
            y = (y + (btn.frame.height * 0.05).rounded()).rounded()
            let rtl = (ts.attribute(.paragraphStyle, at: i, effectiveRange: nil) as? NSParagraphStyle)?.baseWritingDirection == .rightToLeft
            let x: CGFloat
            if rtl { hasRTL = true; x = att.isHidden ? r.maxX - btn.frame.width - fontSize / 3 : r.maxX + origin.x }
            else { x = (att.isHidden ? r.minX + fontSize / 3 : r.minX - btn.frame.width) + origin.x }
            btn.setFrameOrigin(NSPoint(x: floor(x), y: y))
            let hr = ts.headerRange(at: i)
            let end = NSMaxRange(hr)
            if end - 1 <= ts.length, end > 1 {
                let folded = ts.hasFold(at: end - 1) || ts.hasFold(at: end - 2)
                btn.image = folded ? (rtl ? chevronLeft : chevronRight) : chevronDown
            }
        }

        // Bear: updateActionsButtonsForListItems
        ts.enumerateAttribute(.pmkListMarker, in: visible, options: []) { v, run, _ in
            let i = run.location
            guard v != nil, !ts.isRangeInsideBlockquote(run), !(i > 0 && ts.hasListMarker(at: i - 1)),
                  ec.hasFoldableContent(at: i, in: tv), let att = ts.textAttachment(at: i) as? SFTextAttachment else { return }
            let r = lm.boundingRect(forGlyphRange: lm.glyphRange(forCharacterRange: run, actualCharacterRange: nil), in: tc)
            let btn = reusableButton()
            tv.addSubview(btn)
            btn.range = run
            btn.alphaValue = buttonsAreVisible ? 1 : 0
            let font = ts.attribute(.font, at: i, effectiveRange: nil) as? NSFont
            let ps = ts.attribute(.paragraphStyle, at: i, effectiveRange: nil) as? NSParagraphStyle
            let y = (r.maxY - btn.frame.height + (font?.descender ?? 0) - (ps?.lineSpacing ?? 0) - att.attachmentBaselineOffset
                + origin.y + (btn.frame.height - att.attachmentSize.height) * 0.5).rounded()
            let rtl = (ts.attribute(.paragraphStyle, at: i, effectiveRange: nil) as? NSParagraphStyle)?.baseWritingDirection == .rightToLeft
            let x = rtl ? floor(r.maxX + fontSize / 3 + origin.x) : floor(r.minX - lm.baseTabSize + fontSize / 3 + origin.x)
            if rtl { hasRTL = true }
            btn.setFrameOrigin(NSPoint(x: x, y: y))
            let end = NSMaxRange(ts.rangeOfListItemWithoutSublists(at: i))
            let folded = end >= 3 && (ts.hasFold(at: end - 1) || ts.hasFold(at: end - 2))
            btn.image = folded ? (rtl ? chevronLeft : chevronRight) : chevronDown
            let itemRect = lm.boundingRect(forGlyphRange: lm.glyphRange(forCharacterRange: ts.rangeOfListItem(at: i), actualCharacterRange: nil), in: tc)
            hoverRects.append(convert(itemRect.offsetBy(dx: origin.x, dy: origin.y), from: tv))
        }

        let strip = NSRect(x: bounds.minX, y: bounds.minY, width: tc.lineFragmentPadding + lm.baseTabSize, height: bounds.height)
        hoverRects.append(strip)
        if hasRTL { hoverRects.append(NSRect(x: bounds.maxX - strip.width, y: bounds.minY, width: strip.width, height: bounds.height)) }
        updateTrackingAreas()
    }

    public override func updateTrackingAreas() {
        super.updateTrackingAreas()
        trackingAreas.forEach { removeTrackingArea($0) }
        for r in hoverRects {
            addTrackingArea(NSTrackingArea(rect: r, options: [.mouseEnteredAndExited, .activeAlways], owner: self, userInfo: nil))
        }
    }

    public override func mouseEntered(with event: NSEvent) { showButtons(animated: true) }
    public override func mouseExited(with event: NSEvent) { hideButtons(animated: true) }

    private func showButtons(animated: Bool) {
        buttonsAreVisible = true
        updateActionsButtons(debounce: false)
        NSAnimationContext.runAnimationGroup { ctx in
            ctx.duration = animated ? 0.3 : 0
            usedButtons.forEach { $0.animator().alphaValue = 1 }
        }
    }

    private func hideButtons(animated: Bool) {
        buttonsAreVisible = false
        NSAnimationContext.runAnimationGroup { ctx in
            ctx.duration = animated ? 0.3 : 0
            usedButtons.forEach { $0.animator().alphaValue = 0 }
        }
    }
}
