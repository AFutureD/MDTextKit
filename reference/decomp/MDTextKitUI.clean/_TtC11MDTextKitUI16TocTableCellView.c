// ===== _TtC11MDTextKitUI16TocTableCellView::titleTextField @ 00007104 =====

ID _TtC11MDTextKitUI16TocTableCellView::titleTextField(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + titleTextField);
}

// ===== _TtC11MDTextKitUI16TocTableCellView::setTitleTextField: @ 00007114 =====

void _TtC11MDTextKitUI16TocTableCellView::setTitleTextField_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + titleTextField) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI16TocTableCellView::initWithFrame: @ 00007148 =====

ID _TtC11MDTextKitUI16TocTableCellView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + titleTextField) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_00007288(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI16TocTableCellView::initWithCoder: @ 000071c0 =====

ID _TtC11MDTextKitUI16TocTableCellView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + titleTextField) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_00007288();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

// ===== _TtC11MDTextKitUI16TocTableCellView::.cxx_destruct @ 00007278 =====

void _TtC11MDTextKitUI16TocTableCellView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

