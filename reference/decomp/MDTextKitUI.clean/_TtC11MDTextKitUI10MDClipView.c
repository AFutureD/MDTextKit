// ===== _TtC11MDTextKitUI10MDClipView::scrollToPoint: @ 000d1544 =====

void _TtC11MDTextKitUI10MDClipView::scrollToPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  
  if (*(char *)(param_1 + scrollEnabled) == '\x01') {
    local_40.super_class = (class_t *)MDTextKitUI::MDClipView::typeMetadataAccessor();
    local_40.receiver = param_1;
    _objc_msgSendSuper2(&local_40,"scrollToPoint:");
  }
  return;
}

// ===== _TtC11MDTextKitUI10MDClipView::disableScroll @ 000d15d8 =====

void _TtC11MDTextKitUI10MDClipView::disableScroll(ID param_1,SEL param_2)

{
  
  if (*(long *)(param_1 + disableRequestCount) != -1) {
    *(long *)(param_1 + disableRequestCount) = *(long *)(param_1 + disableRequestCount) + 1;
    *(undefined1 *)(param_1 + scrollEnabled) = 0;
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd1604);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI10MDClipView::enableScroll @ 000d1638 =====

void _TtC11MDTextKitUI10MDClipView::enableScroll(ID param_1,SEL param_2)

{
  MDTextKitUI::MDClipView::enableScroll((MDClipView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDClipView::viewWillStartLiveResize @ 000d16bc =====

void _TtC11MDTextKitUI10MDClipView::viewWillStartLiveResize(ID param_1,SEL param_2)

{
  
  lVar1 = scrollEnabled;
  if (*(char *)(param_1 + scrollEnabled) == '\x01') {
    if (0xfffffffffffffffe < *(ulong *)(param_1 + disableRequestCount)) {
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd172c);
      (*pcVar2)();
    }
    *(ulong *)(param_1 + disableRequestCount) = *(ulong *)(param_1 + disableRequestCount) + 1;
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  local_30.super_class = (class_t *)MDTextKitUI::MDClipView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewWillStartLiveResize");
  return;
}

// ===== _TtC11MDTextKitUI10MDClipView::viewDidEndLiveResize @ 000d1790 =====

void _TtC11MDTextKitUI10MDClipView::viewDidEndLiveResize(ID param_1,SEL param_2)

{
  MDTextKitUI::MDClipView::viewDidEndLiveResize((MDClipView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDClipView::initWithFrame: @ 000d1834 =====

ID _TtC11MDTextKitUI10MDClipView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  *(undefined1 *)(param_1 + scrollEnabled) = 1;
  *(undefined8 *)(param_1 + disableRequestCount) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDClipView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI10MDClipView::initWithCoder: @ 000d1940 =====

ID _TtC11MDTextKitUI10MDClipView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined1 *)(param_1 + scrollEnabled) = 1;
  *(undefined8 *)(param_1 + disableRequestCount) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDClipView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

