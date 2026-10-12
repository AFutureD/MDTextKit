// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::selectionColor @ 000decd0 =====

ID _TtC11MDTextKitUI21MDAutoCompleteRowView::selectionColor(ID param_1,SEL param_2)

{
  
  lVar1 = selectionColor;
  _swift_beginAccess(param_1 + selectionColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelectionColor: @ 000ded64 =====

void _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelectionColor_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::isSelected @ 000dee04 =====

bool _TtC11MDTextKitUI21MDAutoCompleteRowView::isSelected(ID param_1,SEL param_2)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"isSelected");
  return (bool)IVar1;
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelected: @ 000dee70 =====

void _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelected_(ID param_1,SEL param_2,bool param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setSelected:",(ulong)param_3);
  MDTextKitUI::MDAutoCompleteRowView::updateCellViewIcon((MDAutoCompleteRowView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::addSubview: @ 000def60 =====

void _TtC11MDTextKitUI21MDAutoCompleteRowView::addSubview_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"addSubview:",param_3);
  MDTextKitUI::MDAutoCompleteRowView::updateCellViewIcon((MDAutoCompleteRowView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::drawSelectionInRect: @ 000df1dc =====

void _TtC11MDTextKitUI21MDAutoCompleteRowView::drawSelectionInRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
  
  lVar1 = selectionColor;
  _swift_beginAccess(param_1 + selectionColor,auStack_58,0,0,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    local_68.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
    local_68.receiver = param_1;
    _objc_msgSendSuper2(&local_68,"drawSelectionInRect:");
  }
  else {
    bounds(param_1);
    drawSquircleSelectionIn_color_(param_1,lVar1);
  }
  return;
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithFrame: @ 000df318 =====

ID _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  *(undefined8 *)(param_1 + selectionColor) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithCoder: @ 000df408 =====

ID _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + selectionColor) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::.cxx_destruct @ 000df4e0 =====

void _TtC11MDTextKitUI21MDAutoCompleteRowView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

