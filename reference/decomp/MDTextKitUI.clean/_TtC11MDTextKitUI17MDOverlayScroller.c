// ===== _TtC11MDTextKitUI17MDOverlayScroller::isCompatibleWithOverlayScrollers @ 000ffc78 =====

bool _TtC11MDTextKitUI17MDOverlayScroller::isCompatibleWithOverlayScrollers(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI17MDOverlayScroller::drawKnob @ 000ffedc =====

void _TtC11MDTextKitUI17MDOverlayScroller::drawKnob(ID param_1,SEL param_2)

{
  MDTextKitUI::MDOverlayScroller::drawKnob((MDOverlayScroller *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI17MDOverlayScroller::drawKnobSlotInRect:highlight: @ 000fff8c =====

void _TtC11MDTextKitUI17MDOverlayScroller::drawKnobSlotInRect_highlight_
               (ID param_1,SEL param_2,CGRect param_3,bool param_4)

{
  
  IVar1 = param_1;
  _swift_getObjectType();
  _swift_getObjCClassFromMetadata();
  IVar1 = preferredScrollerStyle(IVar1);
  if (IVar1 != 1) {
    return;
  }
  local_60.super_class = (class_t *)MDTextKitUI::MDOverlayScroller::typeMetadataAccessor();
  local_60.receiver = param_1;
  _objc_msgSendSuper2(&local_60,"drawKnobSlotInRect:highlight:",param_3.field0_0x0.field0_0x0);
  return;
}

// ===== _TtC11MDTextKitUI17MDOverlayScroller::initWithFrame: @ 001000b8 =====

ID _TtC11MDTextKitUI17MDOverlayScroller::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  local_50.super_class = (class_t *)MDTextKitUI::MDOverlayScroller::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI17MDOverlayScroller::initWithCoder: @ 00100190 =====

ID _TtC11MDTextKitUI17MDOverlayScroller::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDOverlayScroller::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

