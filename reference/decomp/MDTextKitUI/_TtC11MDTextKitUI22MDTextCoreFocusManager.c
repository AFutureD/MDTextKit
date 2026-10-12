// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::textView @ 0007961c =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDTextCoreFocusManager::textView(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::setTextView: @ 000796a8 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDTextCoreFocusManager::setTextView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::addHorizontalPadding @ 000797e0 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI22MDTextCoreFocusManager::addHorizontalPadding(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = addHorizontalPadding;
  _swift_beginAccess(param_1 + addHorizontalPadding,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::setAddHorizontalPadding: @ 00079864 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI22MDTextCoreFocusManager::setAddHorizontalPadding_
               (ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = addHorizontalPadding;
  _swift_beginAccess(param_1 + addHorizontalPadding,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::initWithTextView: @ 00079940 =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI22MDTextCoreFocusManager::initWithTextView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  objc_super local_58;
  undefined1 auStack_48 [24];
  
  lVar1 = textView;
  _swift_unknownObjectWeakInit(param_1 + textView,0);
  *(undefined1 *)(param_1 + addHorizontalPadding) = 0;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  local_58.super_class = (class_t *)MDTextKitUI::MDTextCoreFocusManager::typeMetadataAccessor();
  local_58.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_58,"init");
  return IVar2;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::isAnimating @ 000799c8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI22MDTextCoreFocusManager::isAnimating(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDTextCoreFocusManager::get_isAnimating
                    ((MDTextCoreFocusManager *)param_1,(MDTextCoreFocusManager *)param_1);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::performAddingHorizontalPadding: @ 00079c54 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDTextCoreFocusManager::performAddingHorizontalPadding_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar2 = addHorizontalPadding;
  _swift_beginAccess(param_1 + addHorizontalPadding,auStack_58,1,0);
  uVar1 = *(undefined1 *)(param_1 + lVar2);
  *(undefined1 *)(param_1 + lVar2) = 1;
  (**(code **)(param_3 + 0x10))(param_3);
  *(undefined1 *)(param_1 + lVar2) = uVar1;
  return;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::focusRange: @ 00079db8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void __thiscall
_TtC11MDTextKitUI22MDTextCoreFocusManager::focusRange_
          (_TtC11MDTextKitUI22MDTextCoreFocusManager *this,ID param_1,SEL param_2,_NSRange param_3)

{
  MDTextKitUI::MDTextCoreFocusManager::focusRange
            ((MDTextCoreFocusManager *)param_1,(_NSRange)param_3);
  return;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::focusRange:completion: @ 00079eec =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC11MDTextKitUI22MDTextCoreFocusManager::focusRange_completion_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,undefined4 param_5)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_4);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_002078a8;
    _swift_allocObject(&DAT_002078a8,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_0002dfa0;
  }
  MDTextKitUI::MDTextCoreFocusManager::_focusRange
            ((MDTextCoreFocusManager *)param_1,(_NSRange)param_3);
  FUN_00026eec(pcVar3,puVar2);
  return;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::focusLayerFor:color: @ 0007a210 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID __thiscall
_TtC11MDTextKitUI22MDTextCoreFocusManager::focusLayerFor_color_
          (_TtC11MDTextKitUI22MDTextCoreFocusManager *this,ID param_1,SEL param_2,_NSRange param_3,
          ID param_4)

{
  ID IVar1;
  
  IVar1 = param_3.field0_0x0;
  MDTextKitUI::MDTextCoreFocusManager::_focusLayer
            ((MDTextCoreFocusManager *)param_1,(_NSRange)param_3,(NSColor *)param_4);
  return IVar1;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::focusLayerFor:range:color: @ 0007a7a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x48 bytes */

ID _TtC11MDTextKitUI22MDTextCoreFocusManager::focusLayerFor_range_color_
             (ID param_1,SEL param_2,CGRect param_3,_NSRange param_4,ID param_5)

{
  double dVar1;
  
  dVar1 = param_3.field0_0x0.field0_0x0;
  FUN_0007ad38(dVar1,param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
               param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
               param_3.field1_0x10.field1_0x8,param_4.field0_0x0,param_4.field1_0x8);
  return (ID)dVar1;
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::init @ 0007acbc =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDTextCoreFocusManager::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.MDTextCoreFocusManager",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7ace8);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI22MDTextCoreFocusManager::.cxx_destruct @ 0007ad28 =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI22MDTextCoreFocusManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + textView);
  return;
}


