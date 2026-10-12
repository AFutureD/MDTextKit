// ===== _TtC11MDTextKitUI29TableAttachmentViewScrollView::scrollWheel: @ 0007615c =====

void _TtC11MDTextKitUI29TableAttachmentViewScrollView::scrollWheel_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_0007601c(param_3);
  return;
}

// ===== _TtC11MDTextKitUI29TableAttachmentViewScrollView::initWithFrame: @ 000761ac =====

ID _TtC11MDTextKitUI29TableAttachmentViewScrollView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  *(undefined1 *)(param_1 + currentScrollMatches) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_000792d8(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI29TableAttachmentViewScrollView::initWithCoder: @ 00076224 =====

ID _TtC11MDTextKitUI29TableAttachmentViewScrollView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  *(undefined1 *)(param_1 + currentScrollMatches) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_000792d8();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

