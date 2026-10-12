// ===== _TtC11MDTextKitUI19SearchTextFieldView::textField @ 00063518 =====

ID _TtC11MDTextKitUI19SearchTextFieldView::textField(ID param_1,SEL param_2)

{
  
  lVar1 = textField;
  _swift_beginAccess(param_1 + textField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::setTextField: @ 000635ac =====

void _TtC11MDTextKitUI19SearchTextFieldView::setTextField_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::clearButton @ 0006364c =====

ID _TtC11MDTextKitUI19SearchTextFieldView::clearButton(ID param_1,SEL param_2)

{
  
  lVar1 = clearButton;
  _swift_beginAccess(param_1 + clearButton,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::setClearButton: @ 000636e0 =====

void _TtC11MDTextKitUI19SearchTextFieldView::setClearButton_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::toggleMenuButton @ 00063780 =====

ID _TtC11MDTextKitUI19SearchTextFieldView::toggleMenuButton(ID param_1,SEL param_2)

{
  
  lVar1 = toggleMenuButton;
  _swift_beginAccess(param_1 + toggleMenuButton,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::setToggleMenuButton: @ 00063814 =====

void _TtC11MDTextKitUI19SearchTextFieldView::setToggleMenuButton_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::awakeFromNib @ 00063968 =====

void _TtC11MDTextKitUI19SearchTextFieldView::awakeFromNib(ID param_1,SEL param_2)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::SearchTextFieldView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"awakeFromNib");
  FUN_000639c4();
  return;
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::initWithFrame: @ 00063b60 =====

ID _TtC11MDTextKitUI19SearchTextFieldView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  *(undefined8 *)(param_1 + textField) = 0;
  *(undefined8 *)(param_1 + clearButton) = 0;
  *(undefined8 *)(param_1 + toggleMenuButton) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::SearchTextFieldView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::initWithCoder: @ 00063c7c =====

ID _TtC11MDTextKitUI19SearchTextFieldView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::SearchTextFieldView::_init((SearchTextFieldView *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI19SearchTextFieldView::.cxx_destruct @ 00063cd4 =====

void _TtC11MDTextKitUI19SearchTextFieldView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

