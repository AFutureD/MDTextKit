// ===== _TtC11MDTextKitUI32MDAttachmentHorizontalScrollView::scrollWheel: @ 000122f8 =====

void _TtC11MDTextKitUI32MDAttachmentHorizontalScrollView::scrollWheel_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_000121b8(param_3);
  return;
}

// ===== _TtC11MDTextKitUI32MDAttachmentHorizontalScrollView::initWithFrame: @ 00012348 =====

ID _TtC11MDTextKitUI32MDAttachmentHorizontalScrollView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  *(undefined1 *)(param_1 + currentScrollMatches) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_0001247c(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI32MDAttachmentHorizontalScrollView::initWithCoder: @ 000123c0 =====

ID _TtC11MDTextKitUI32MDAttachmentHorizontalScrollView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  *(undefined1 *)(param_1 + currentScrollMatches) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_0001247c();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

