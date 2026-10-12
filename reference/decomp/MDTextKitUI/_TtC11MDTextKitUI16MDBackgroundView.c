// ===== _TtC11MDTextKitUI16MDBackgroundView::backgroundColor @ 000f263c =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI16MDBackgroundView::backgroundColor(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI16MDBackgroundView::setBackgroundColor: @ 000f26d0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI16MDBackgroundView::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  objc_stub::bounds(param_1);
  objc_stub::setNeedsDisplayInRect_(param_1);
  return;
}


// ===== _TtC11MDTextKitUI16MDBackgroundView::drawRect: @ 000f2994 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI16MDBackgroundView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  MDTextKitUI::MDBackgroundView::draw((MDBackgroundView *)param_1,(CGRect)param_1);
  return;
}


// ===== _TtC11MDTextKitUI16MDBackgroundView::initWithFrame: @ 000f2a58 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI16MDBackgroundView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + backgroundColor) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDBackgroundView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI16MDBackgroundView::initWithCoder: @ 000f2b48 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI16MDBackgroundView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + backgroundColor) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDBackgroundView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI16MDBackgroundView::.cxx_destruct @ 000f2c04 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI16MDBackgroundView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


