// ===== _TtC11MDTextKitUI16CAFocusRingLayer::initWithCoder: @ 00016b8c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI16CAFocusRingLayer::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + animationBorderWidthMultiplier) = 0x4014000000000000;
  pcVar1 = (class_t *)param_1;
  FUN_000177a8();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}


// ===== _TtC11MDTextKitUI16CAFocusRingLayer::initWithLayer: @ 00016c1c =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI16CAFocusRingLayer::initWithLayer_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_50;
  undefined1 auStack_40 [24];
  Implementation local_28;
  
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  *(undefined8 *)(param_1 + animationBorderWidthMultiplier) = 0x4014000000000000;
  pcVar1 = (class_t *)auStack_40;
  ___swift_project_boxed_opaque_existential_1(pcVar1,local_28);
  Swift::__bridgeAnythingToObjectiveC();
  pcVar2 = pcVar1;
  FUN_000177a8();
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_50,"initWithLayer:",pcVar1);
  _swift_unknownObjectRelease(pcVar1);
  ___swift_destroy_boxed_opaque_existential_1(auStack_40);
  return IVar3;
}


// ===== _TtC11MDTextKitUI16CAFocusRingLayer::resizeWithOldSuperlayerSize: @ 0001764c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11MDTextKitUI16CAFocusRingLayer::resizeWithOldSuperlayerSize_
               (ID param_1,SEL param_2,CGSize param_3)

{
  class_t *pcVar1;
  ID self;
  double extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  objc_super local_60;
  
  pcVar1 = (class_t *)param_1;
  FUN_000177a8(param_1,param_2,param_3.field0_0x0,param_3.field1_0x8);
  local_60.receiver = param_1;
  local_60.super_class = pcVar1;
  _objc_msgSendSuper2(&local_60,"resizeWithOldSuperlayerSize:");
  objc_stub::borderWidth(param_1);
  self = objc_stub::superlayer(param_1);
  if (self != 0) {
    objc_stub::bounds(self);
    _CGRectInset(extraout_d0_00,in_d1,in_d2,in_d3,-(extraout_d0 + -1.0),-(extraout_d0 + -1.0),0);
  }
  objc_stub::setFrame_(param_1);
  return;
}


// ===== _TtC11MDTextKitUI16CAFocusRingLayer::init @ 0001774c =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI16CAFocusRingLayer::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.CAFocusRingLayer",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x17778);
  (*pcVar1)();
}


