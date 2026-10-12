// ===== _TtC11MDTextKitUI14BackgroundView::initWithFrame: @ 000d1358 =====

ID _TtC11MDTextKitUI14BackgroundView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_000d14a8(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  self = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  setWantsLayer_(self,1);
  setAutoresizingMask_(self,0x12);
  return self;
}

// ===== _TtC11MDTextKitUI14BackgroundView::initWithCoder: @ 000d13f0 =====

ID _TtC11MDTextKitUI14BackgroundView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_000d14a8();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

// ===== _TtC11MDTextKitUI14BackgroundView::tag @ 000d1470 =====

long_long _TtC11MDTextKitUI14BackgroundView::tag(ID param_1,SEL param_2)

{
  return 999;
}

