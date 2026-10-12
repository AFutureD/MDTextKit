// ===== _TtC11MDTextKitUI22TableCleanerTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00099e60 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC11MDTextKitUI22TableCleanerTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_00207f00;
    _swift_allocObject(&DAT_00207f00,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_0009bd8c;
  }
  FUN_0009bc08(param_3,param_4);
  FUN_00026eec(pcVar3,puVar2);
  return;
}


// ===== _TtC11MDTextKitUI22TableCleanerTextStyler::init @ 00099f0c =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22TableCleanerTextStyler::init(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_30;
  
  pcVar1 = (class_t *)param_1;
  FUN_0009bbe8();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}


