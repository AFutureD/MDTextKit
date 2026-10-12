// ===== _TtC11MDTextKitUI17FileTypeBadgeView::initWithFrame: @ 00069aac =====

ID _TtC11MDTextKitUI17FileTypeBadgeView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_0006994c(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return param_1;
}

// ===== _TtC11MDTextKitUI17FileTypeBadgeView::initWithCoder: @ 00069acc =====

ID _TtC11MDTextKitUI17FileTypeBadgeView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0006a5e0();
  return param_3;
}

// ===== _TtC11MDTextKitUI17FileTypeBadgeView::frame @ 00069b08 =====

CGRect _TtC11MDTextKitUI17FileTypeBadgeView::frame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  
  local_30.super_class = (class_t *)MDTextKitUI::FileTypeBadgeView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"frame");
  CVar1.field0_0x0.field1_0x8 = in_d1;
  CVar1.field0_0x0.field0_0x0 = in_d0;
  CVar1.field1_0x10.field1_0x8 = in_d3;
  CVar1.field1_0x10.field0_0x0 = in_d2;
  return CVar1;
}

// ===== _TtC11MDTextKitUI17FileTypeBadgeView::setFrame: @ 00069b74 =====

void _TtC11MDTextKitUI17FileTypeBadgeView::setFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  FUN_00069c64(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.super_class = (class_t *)MDTextKitUI::FileTypeBadgeView::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"setFrame:");
  return;
}

// ===== _TtC11MDTextKitUI17FileTypeBadgeView::.cxx_destruct @ 0006a458 =====

void _TtC11MDTextKitUI17FileTypeBadgeView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + fileExtensionString + 8));
  return;
}

