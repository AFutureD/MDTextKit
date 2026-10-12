// ===== _TtC11MDTextKitUI15MDTextFieldCell::fieldEditorForView: @ 00110b3c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15MDTextFieldCell::fieldEditorForView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00110abc();
  return param_1;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::setUpFieldEditorAttributes: @ 00110c54 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15MDTextFieldCell::setUpFieldEditorAttributes_
             (ID param_1,SEL param_2,ID param_3)

{
  NSTextView *pNVar1;
  ID IVar2;
  MDTextField *pMVar3;
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDTextFieldCell::typeMetadataAccessor();
  local_40.receiver = param_1;
  pNVar1 = (NSTextView *)_objc_msgSendSuper2(&local_40,"setUpFieldEditorAttributes:",param_3);
  _swift_dynamicCastObjCClassUnconditional(pNVar1,&_OBJC_CLASS___NSTextView,0,0,0);
  IVar2 = objc_stub::controlView(param_1);
  if (IVar2 != 0) {
    pMVar3 = MDTextKitUI::MDTextField::typeMetadataAccessor();
    _swift_dynamicCastClass(IVar2,pMVar3);
    if (IVar2 != 0) {
      MDTextKitUI::MDTextFieldCell::updateUpFieldEditorAttributes((MDTextFieldCell *)param_1,pNVar1)
      ;
    }
  }
  return (ID)pNVar1;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::drawingRectForBounds: @ 00111338 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

CGRect _TtC11MDTextKitUI15MDTextFieldCell::drawingRectForBounds_
                 (ID param_1,SEL param_2,CGRect param_3)

{
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar1;
  
  FUN_00111024(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  CVar1.field0_0x0.field1_0x8 = in_d1;
  CVar1.field0_0x0.field0_0x0 = in_d0;
  CVar1.field1_0x10.field1_0x8 = in_d3;
  CVar1.field1_0x10.field0_0x0 = in_d2;
  return CVar1;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::selectWithFrame:inView:editor:delegate:start:length: @ 001114f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x58 bytes */

void _TtC11MDTextKitUI15MDTextFieldCell::selectWithFrame_inView_editor_delegate_start_length_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5,ID param_6,
               long_long param_7,long_long param_8)

{
  double dVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar1 = param_3.field1_0x10.field0_0x0;
  if (dVar1 == 0.0) {
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_unknownObjectRetain(dVar1);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(dVar1);
  }
  MDTextKitUI::MDTextFieldCell::_select
            ((MDTextFieldCell *)param_1,(CGRect)param_3.field0_0x0.field0_0x0,
             param_3.field0_0x0.field1_0x8,(NSText *)&local_80,
             (__int64)param_3.field1_0x10.field1_0x8,param_4);
  FUN_00007078(&local_80);
  return;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::editWithFrame:inView:editor:delegate:event: @ 00111724 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x50 bytes */

void _TtC11MDTextKitUI15MDTextFieldCell::editWithFrame_inView_editor_delegate_event_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  double dVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar1 = param_3.field1_0x10.field0_0x0;
  if (dVar1 == 0.0) {
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_unknownObjectRetain(dVar1);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(dVar1);
  }
  MDTextKitUI::MDTextFieldCell::_edit
            ((MDTextFieldCell *)param_1,(CGRect)param_3.field0_0x0.field0_0x0,
             param_3.field0_0x0.field1_0x8,(NSText *)&local_80);
  FUN_00007078(&local_80);
  return;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::endEditing: @ 001118ac =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI15MDTextFieldCell::endEditing_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_40;
  
  self = param_3;
  _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSTextView);
  if ((self != 0) && (*(long *)(param_1 + previousInsertionPointColor) != 0)) {
    objc_stub::setInsertionPointColor_(self,*(long *)(param_1 + previousInsertionPointColor));
  }
  local_40.super_class = (class_t *)MDTextKitUI::MDTextFieldCell::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"endEditing:",param_3);
  return;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::drawInteriorWithFrame:inView: @ 00111b34 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC11MDTextKitUI15MDTextFieldCell::drawInteriorWithFrame_inView_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  MDTextKitUI::MDTextFieldCell::drawInterior
            ((MDTextFieldCell *)param_1,(CGRect)param_3.field0_0x0.field0_0x0,(NSView *)param_2);
  return;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::initTextCell: @ 00111e3c =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15MDTextFieldCell::initTextCell_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00111ebc();
  return param_1;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::initWithCoder: @ 00111eb0 =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15MDTextFieldCell::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00111ebc();
  return param_1;
}


// ===== _TtC11MDTextKitUI15MDTextFieldCell::.cxx_destruct @ 00111f2c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI15MDTextFieldCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


