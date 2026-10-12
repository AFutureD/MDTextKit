// ===== _TtC11MDTextKitUI15SegmentedButton::intrinsicContentSize @ 000f9514 =====

/* Function Stack Size: 0x10 bytes */

CGSize _TtC11MDTextKitUI15SegmentedButton::intrinsicContentSize(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  double in_d0;
  double in_d1;
  CGSize CVar2;
  objc_super local_30;
  
  pcVar1 = (class_t *)param_1;
  FUN_000fee7c();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"intrinsicContentSize");
  CVar2.field0_0x0 = in_d0 + 20.0;
  CVar2.field1_0x8 = in_d1;
  return CVar2;
}


// ===== _TtC11MDTextKitUI15SegmentedButton::drawRect: @ 000f9638 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI15SegmentedButton::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_000f9558(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return;
}


// ===== _TtC11MDTextKitUI15SegmentedButton::initWithFrame: @ 000f9690 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI15SegmentedButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_50;
  
  puVar1 = (undefined8 *)(param_1 + drawing);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + drawingAlternate);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + drawingDisabled);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + isNavButton) = 0;
  pcVar2 = (class_t *)param_1;
  FUN_000fee7c(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar3;
}


// ===== _TtC11MDTextKitUI15SegmentedButton::initWithCoder: @ 000f97e0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15SegmentedButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_000f9738();
  return param_3;
}


// ===== _TtC11MDTextKitUI15SegmentedButton::.cxx_destruct @ 000f985c =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI15SegmentedButton::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00026eec(*(undefined8 *)(param_1 + drawing),((undefined8 *)(param_1 + drawing))[1]);
  FUN_00026eec(*(undefined8 *)(param_1 + drawingAlternate),
               ((undefined8 *)(param_1 + drawingAlternate))[1]);
  FUN_00026eec(*(undefined8 *)(param_1 + drawingDisabled),
               ((undefined8 *)(param_1 + drawingDisabled))[1]);
  return;
}


