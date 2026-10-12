// ===== _TtC11MDTextKitUI15MDSegmentedCell::drawSegment:inFrame:withView: @ 0003eb70 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x40 bytes */

void _TtC11MDTextKitUI15MDSegmentedCell::drawSegment_inFrame_withView_
               (ID param_1,SEL param_2,long_long param_3,CGRect param_4,ID param_5)

{
  FUN_0003e81c(param_3,param_4.field0_0x0.field0_0x0,param_3,param_4.field0_0x0.field0_0x0,
               param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
               param_4.field1_0x10.field1_0x8);
  return;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::widthForSegment: @ 0003ebf8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

double _TtC11MDTextKitUI15MDSegmentedCell::widthForSegment_
                 (ID param_1,SEL param_2,long_long param_3)

{
  double in_d0;
  
  FUN_0003ec40(param_3);
  _CGRectGetWidth();
  return in_d0;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::continueTracking:at:inView: @ 0003edfc =====

/* Function Stack Size: 0x38 bytes */

bool _TtC11MDTextKitUI15MDSegmentedCell::continueTracking_at_inView_
               (ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4,ID param_5)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + clickedSegment) = 0xffffffffffffffff;
  pcVar1 = (class_t *)param_1;
  FUN_0003eddc();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"continueTracking:at:inView:",param_3.field0_0x0);
  return (bool)IVar2;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::drawWithFrame:inView: @ 0003ee80 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC11MDTextKitUI15MDSegmentedCell::drawWithFrame_inView_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  FUN_0003efac(param_3.field0_0x0.field0_0x0,param_2,param_3.field0_0x0.field0_0x0,
               param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
               param_3.field1_0x10.field1_0x8);
  return;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::drawInteriorWithFrame:inView: @ 0003eed0 =====

/* Function Stack Size: 0x38 bytes */

void _TtC11MDTextKitUI15MDSegmentedCell::drawInteriorWithFrame_inView_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  return;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::init @ 0003eed4 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI15MDSegmentedCell::init(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_30;
  
  *(undefined8 *)(param_1 + clickedSegment) = 0xffffffffffffffff;
  pcVar1 = (class_t *)param_1;
  FUN_0003eddc();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::initTextCell: @ 0003ef20 =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15MDSegmentedCell::initTextCell_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0003ef44();
  return param_1;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::initImageCell: @ 0003ef2c =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15MDSegmentedCell::initImageCell_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0003ef44();
  return param_1;
}


// ===== _TtC11MDTextKitUI15MDSegmentedCell::initWithCoder: @ 0003ef38 =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15MDSegmentedCell::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0003ef44();
  return param_1;
}


