// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::icon @ 000de5a4 =====

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::icon(ID param_1,SEL param_2)

{
  
  lVar1 = icon;
  _swift_beginAccess(param_1 + icon,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setIcon: @ 000de638 =====

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setIcon_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::selectedIcon @ 000de6d8 =====

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::selectedIcon(ID param_1,SEL param_2)

{
  
  lVar1 = selectedIcon;
  _swift_beginAccess(param_1 + selectedIcon,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setSelectedIcon: @ 000de76c =====

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setSelectedIcon_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::separatorView @ 000de80c =====

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::separatorView(ID param_1,SEL param_2)

{
  
  lVar1 = separatorView;
  _swift_beginAccess(param_1 + separatorView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setSeparatorView: @ 000de8a0 =====

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setSeparatorView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::additionalInformationTextField @ 000de940 =====

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::additionalInformationTextField(ID param_1,SEL param_2)

{
  
  lVar1 = additionalInformationTextField;
  _swift_beginAccess(param_1 + additionalInformationTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::setAdditionalInformationTextField: @ 000de9d4 =====

void _TtC11MDTextKitUI22MDAutoCompleteCellView::setAdditionalInformationTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::initWithFrame: @ 000deb04 =====

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
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

ID _TtC11MDTextKitUI22MDAutoCompleteCellView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAutoCompleteCellView::_init((MDAutoCompleteCellView *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI22MDAutoCompleteCellView::.cxx_destruct @ 000dec78 =====

void _TtC11MDTextKitUI22MDAutoCompleteCellView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

