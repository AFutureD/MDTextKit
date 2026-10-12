// ===== _TtC11MDTextKitUI33TableAttachmentTextViewScrollView::scrollWheel: @ 00076b8c =====

void _TtC11MDTextKitUI33TableAttachmentTextViewScrollView::scrollWheel_
               (ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = nextResponder(param_1);
  scrollWheel_(IVar1,param_3);
  return;
}

// ===== _TtC11MDTextKitUI33TableAttachmentTextViewScrollView::initWithFrame: @ 00076bf4 =====

ID _TtC11MDTextKitUI33TableAttachmentTextViewScrollView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_00078334(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI33TableAttachmentTextViewScrollView::initWithCoder: @ 00076c60 =====

ID _TtC11MDTextKitUI33TableAttachmentTextViewScrollView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_00078334();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

