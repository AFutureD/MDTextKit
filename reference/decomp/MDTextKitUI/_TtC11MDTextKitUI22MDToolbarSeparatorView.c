// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::scrollView @ 00100240 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::scrollView(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + scrollView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::setScrollView: @ 00100260 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::setScrollView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_001002cc(param_3);
  _swift_unknownObjectWeakAssign(param_1 + scrollView,param_3);
  FUN_0010043c();
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::backgroundColor @ 001007fc =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::backgroundColor(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::setBackgroundColor: @ 00100890 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::setBackgroundColor_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDToolbarSeparatorView::_set_backgroundColor((MDToolbarSeparatorView *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::wantShadowSeparator @ 00100a8c =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI22MDToolbarSeparatorView::wantShadowSeparator(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = wantShadowSeparator;
  _swift_beginAccess(param_1 + wantShadowSeparator,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::setWantShadowSeparator: @ 00100b10 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::setWantShadowSeparator_
               (ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = wantShadowSeparator;
  _swift_beginAccess(param_1 + wantShadowSeparator,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::acceptsFirstMouse: @ 00100ff4 =====

/* Function Stack Size: 0x18 bytes */

bool _TtC11MDTextKitUI22MDToolbarSeparatorView::acceptsFirstMouse_
               (ID param_1,SEL param_2,ID param_3)

{
  return 1;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseDownCanMoveWindow @ 00100ffc =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseDownCanMoveWindow(ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithFrame: @ 001012b8 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MDToolbarSeparatorView *pMVar1;
  
  pMVar1 = MDTextKitUI::MDToolbarSeparatorView::init
                     ((MDToolbarSeparatorView *)param_1,(CGRect)param_1);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithCoder: @ 00101308 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00102f48();
  return param_3;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::dealloc @ 001013b4 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::dealloc(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  *(undefined1 *)(param_1 + isObserving) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::MDToolbarSeparatorView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::.cxx_destruct @ 0010143c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + scrollView);
  _swift_unknownObjectWeakDestroy(param_1 + previous);
  _swift_unknownObjectWeakDestroy(param_1 + next);
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::viewDidChangeEffectiveAppearance @ 001014dc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::viewDidChangeEffectiveAppearance
               (ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class = (class_t *)MDTextKitUI::MDToolbarSeparatorView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidChangeEffectiveAppearance");
  FUN_001027cc();
  FUN_001026cc();
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::showWithAnimated:updateInsets:completion: @ 00101780 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::showWithAnimated_updateInsets_completion_
               (ID param_1,SEL param_2,bool param_3,bool param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_0020a538;
    _swift_allocObject(&DAT_0020a538,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN_00054c4c;
  }
  MDTextKitUI::MDToolbarSeparatorView::_show
            ((MDToolbarSeparatorView *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::hideWithAnimated:updateInsets:completion: @ 00101b6c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::hideWithAnimated_updateInsets_completion_
               (ID param_1,SEL param_2,bool param_3,bool param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_0020a510;
    _swift_allocObject(&DAT_0020a510,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_00054c4c;
  }
  MDTextKitUI::MDToolbarSeparatorView::_hide
            ((MDToolbarSeparatorView *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::updateScrollViewInsets @ 00101c14 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::updateScrollViewInsets(ID param_1,SEL param_2)

{
  FUN_00102b1c(param_1);
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::updateSeparatorOnScrollerStyleChange: @ 00101d6c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::updateSeparatorOnScrollerStyleChange_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00103198(param_1);
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::updateShadowOnBoundsChange: @ 00101fdc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::updateShadowOnBoundsChange_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00101db8(param_3);
  return;
}


// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseUp: @ 00102e0c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDToolbarSeparatorView::mouseUp((MDToolbarSeparatorView *)param_1,(NSEvent *)param_3)
  ;
  return;
}


