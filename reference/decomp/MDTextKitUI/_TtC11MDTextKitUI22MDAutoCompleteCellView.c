// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::icon @ 000de5a4 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::icon(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = icon;
  _swift_beginAccess(param_1 + icon,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setIcon: @ 000de638 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setIcon_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::selectedIcon @ 000de6d8 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::selectedIcon(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = selectedIcon;
  _swift_beginAccess(param_1 + selectedIcon,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setSelectedIcon: @ 000de76c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setSelectedIcon_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::separatorView @ 000de80c =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::separatorView(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = separatorView;
  _swift_beginAccess(param_1 + separatorView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setSeparatorView: @ 000de8a0 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setSeparatorView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::additionalInformationTextField @ 000de940 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::additionalInformationTextField(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = additionalInformationTextField;
  _swift_beginAccess(param_1 + additionalInformationTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setAdditionalInformationTextField: @ 000de9d4 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setAdditionalInformationTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::initWithFrame: @ 000deb04 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + icon) = 0;
  *(undefined8 *)(param_1 + selectedIcon) = 0;
  *(undefined8 *)(param_1 + separatorView) = 0;
  *(undefined8 *)(param_1 + additionalInformationTextField) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDAutoCompleteCellView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::initWithCoder: @ 000dec3c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAutoCompleteCellView::_init((MDAutoCompleteCellView *)param_1,(NSCoder *)param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::.cxx_destruct @ 000dec78 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI22MDAutoCompleteCellView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


