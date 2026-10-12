// ===== _TtC11MDTextKitUI14BackgroundView::initWithFrame: @ 000d1358 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI14BackgroundView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  ID self;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  FUN_000d14a8(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  self = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  objc_stub::setWantsLayer_(self,1);
  objc_stub::setAutoresizingMask_(self,0x12);
  return self;
}


// ===== _TtC11MDTextKitUI14BackgroundView::initWithCoder: @ 000d13f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI14BackgroundView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  FUN_000d14a8();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}


// ===== _TtC11MDTextKitUI14BackgroundView::tag @ 000d1470 =====

/* Function Stack Size: 0x10 bytes */

long_long _TtC11MDTextKitUI14BackgroundView::tag(ID param_1,SEL param_2)

{
  return 999;
}


