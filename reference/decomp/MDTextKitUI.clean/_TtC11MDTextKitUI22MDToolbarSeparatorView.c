// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::scrollView @ 00100240 =====

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::scrollView(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + scrollView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::setScrollView: @ 00100260 =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::setScrollView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_001002cc(param_3);
  _swift_unknownObjectWeakAssign(param_1 + scrollView,param_3);
  FUN_0010043c();
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::backgroundColor @ 001007fc =====

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::backgroundColor(ID param_1,SEL param_2)

{
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::setBackgroundColor: @ 00100890 =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::setBackgroundColor_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDToolbarSeparatorView::_set_backgroundColor((MDToolbarSeparatorView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::wantShadowSeparator @ 00100a8c =====

bool _TtC11MDTextKitUI22MDToolbarSeparatorView::wantShadowSeparator(ID param_1,SEL param_2)

{
  
  lVar1 = wantShadowSeparator;
  _swift_beginAccess(param_1 + wantShadowSeparator,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::setWantShadowSeparator: @ 00100b10 =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::setWantShadowSeparator_
               (ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = wantShadowSeparator;
  _swift_beginAccess(param_1 + wantShadowSeparator,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::acceptsFirstMouse: @ 00100ff4 =====

bool _TtC11MDTextKitUI22MDToolbarSeparatorView::acceptsFirstMouse_
               (ID param_1,SEL param_2,ID param_3)

{
  return 1;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseDownCanMoveWindow @ 00100ffc =====

bool _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseDownCanMoveWindow(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithFrame: @ 001012b8 =====

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MDToolbarSeparatorView *pMVar1;
  
  pMVar1 = MDTextKitUI::MDToolbarSeparatorView::init
                     ((MDToolbarSeparatorView *)param_1,(CGRect)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithCoder: @ 00101308 =====

ID _TtC11MDTextKitUI22MDToolbarSeparatorView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00102f48();
  return param_3;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::dealloc @ 001013b4 =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::dealloc(ID param_1,SEL param_2)

{
  
  self = NSNotificationCenter::defaultCenter(NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  *(undefined1 *)(param_1 + isObserving) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::MDToolbarSeparatorView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::.cxx_destruct @ 0010143c =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + scrollView);
  _swift_unknownObjectWeakDestroy(param_1 + previous);
  _swift_unknownObjectWeakDestroy(param_1 + next);
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::viewDidChangeEffectiveAppearance @ 001014dc =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::viewDidChangeEffectiveAppearance
               (ID param_1,SEL param_2)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDToolbarSeparatorView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidChangeEffectiveAppearance");
  FUN_001027cc();
  FUN_001026cc();
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::showWithAnimated:updateInsets:completion: @ 00101780 =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::showWithAnimated_updateInsets_completion_
               (ID param_1,SEL param_2,bool param_3,bool param_4,ID param_5,undefined4 param_6)

{
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_0020a538;
    _swift_allocObject(&DAT_0020a538,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN;
  }
  MDTextKitUI::MDToolbarSeparatorView::_show
            ((MDToolbarSeparatorView *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::hideWithAnimated:updateInsets:completion: @ 00101b6c =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::hideWithAnimated_updateInsets_completion_
               (ID param_1,SEL param_2,bool param_3,bool param_4,ID param_5,undefined4 param_6)

{
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_0020a510;
    _swift_allocObject(&DAT_0020a510,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN;
  }
  MDTextKitUI::MDToolbarSeparatorView::_hide
            ((MDToolbarSeparatorView *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::updateScrollViewInsets @ 00101c14 =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::updateScrollViewInsets(ID param_1,SEL param_2)

{
  FUN_00102b1c(param_1);
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::updateSeparatorOnScrollerStyleChange: @ 00101d6c =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::updateSeparatorOnScrollerStyleChange_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00103198(param_1);
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::updateShadowOnBoundsChange: @ 00101fdc =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::updateShadowOnBoundsChange_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00101db8(param_3);
  return;
}

// ===== _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseUp: @ 00102e0c =====

void _TtC11MDTextKitUI22MDToolbarSeparatorView::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDToolbarSeparatorView::mouseUp((MDToolbarSeparatorView *)param_1,(NSEvent *)param_3)
  return;
}

