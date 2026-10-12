// ===== MDBodyTextStyler::init @ 00012ccc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBodyTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_68;
  undefined8 local_58;
  undefined8 local_50;
  ID local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_68.super_class = &objc::class_t::MDBodyTextStyler;
  local_68.receiver = param_1;
  self = _objc_msgSendSuper2(&local_68,"init");
  if (self != 0) {
    local_58 = *(undefined8 *)PTR__NSFontAttributeName_0005ec48;
    local_48 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x402c000000000000);
    local_50 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98;
    local_40 = objc_stub::defaultParagraphStyle((ID)&_OBJC_CLASS___NSParagraphStyle);
    IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_48,&local_58,2);
    objc_stub::setBodyTextAttributes_(self,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_38) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDBodyTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00012dec =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDBodyTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::bodyTextAttributes(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::bodyTextAttributes(param_1);
    objc_stub::addAttributes_range_(param_3,IVar1,param_4->field0_0x0,param_4->field1_0x8);
  }
  return;
}


// ===== MDBodyTextStyler::setBodyTextAttributes: @ 00012e6c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBodyTextStyler::setBodyTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSDictionary);
  *(ID *)(param_1 + (long)_bodyTextAttributes) = IVar1;
  return;
}


// ===== MDBodyTextStyler::bodyTextAttributes @ 00012eb0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBodyTextStyler::bodyTextAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bodyTextAttributes);
}


// ===== MDBodyTextStyler::.cxx_destruct @ 00012ec0 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDBodyTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_bodyTextAttributes) = 0;
  return;
}


