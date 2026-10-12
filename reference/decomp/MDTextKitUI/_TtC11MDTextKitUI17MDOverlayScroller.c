// ===== _TtC11MDTextKitUI17MDOverlayScroller::isCompatibleWithOverlayScrollers @ 000ffc78 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI17MDOverlayScroller::isCompatibleWithOverlayScrollers(ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI17MDOverlayScroller::drawKnob @ 000ffedc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI17MDOverlayScroller::drawKnob(ID param_1,SEL param_2)

{
  MDTextKitUI::MDOverlayScroller::drawKnob((MDOverlayScroller *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI17MDOverlayScroller::drawKnobSlotInRect:highlight: @ 000fff8c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x34 bytes */

void _TtC11MDTextKitUI17MDOverlayScroller::drawKnobSlotInRect_highlight_
               (ID param_1,SEL param_2,CGRect param_3,bool param_4)

{
  ID IVar1;
  objc_super local_60;
  
  IVar1 = param_1;
  _swift_getObjectType();
  _swift_getObjCClassFromMetadata();
  IVar1 = objc_stub::preferredScrollerStyle(IVar1);
  if (IVar1 != 1) {
    return;
  }
  local_60.super_class = (class_t *)MDTextKitUI::MDOverlayScroller::typeMetadataAccessor();
  local_60.receiver = param_1;
  _objc_msgSendSuper2(&local_60,"drawKnobSlotInRect:highlight:",param_3.field0_0x0.field0_0x0);
  return;
}


// ===== _TtC11MDTextKitUI17MDOverlayScroller::initWithFrame: @ 001000b8 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI17MDOverlayScroller::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDOverlayScroller::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI17MDOverlayScroller::initWithCoder: @ 00100190 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI17MDOverlayScroller::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDOverlayScroller::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


