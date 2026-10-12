// ===== MDReferenceTextStyler::init @ 000038c8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDReferenceTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDReferenceTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setLabelColor_(self,IVar1);
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setLinkColor_(self,IVar1);
  }
  return self;
}


// ===== MDReferenceTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000396c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDReferenceTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID IStack_78;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  ID IStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = PTR___NSConcreteStackBlock_0005ebe0;
  local_68 = 0xc2000000;
  local_60 = 
  ___76__MDReferenceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_58 = &
               ___block_descriptor_48_e8_32s40s_e92_v108__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72B88Q92_B100l
  ;
  local_50 = param_3;
  IStack_48 = param_1;
  objc_stub::enumerateReferenceInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_70);
  local_a0 = puVar1;
  local_98 = 0xc2000000;
  local_90 = 
  ___76__MDReferenceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4;
  puStack_88 = &
               ___block_descriptor_48_e8_32s40s_e121_v136__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72__NSRange_QQ_88__NSRange_QQ_104Q120_B128l
  ;
  local_80 = param_3;
  IStack_78 = param_1;
  objc_stub::enumerateReferenceDefinitionInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_a0);
  return;
}


// ===== MDReferenceTextStyler::linkColor @ 000040d0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDReferenceTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}


// ===== MDReferenceTextStyler::setLinkColor: @ 000040e0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDReferenceTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}


// ===== MDReferenceTextStyler::labelColor @ 000040ec =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDReferenceTextStyler::labelColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_labelColor);
}


// ===== MDReferenceTextStyler::setLabelColor: @ 000040fc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDReferenceTextStyler::setLabelColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_labelColor) = param_3;
  return;
}


// ===== MDReferenceTextStyler::.cxx_destruct @ 00004108 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDReferenceTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_labelColor) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}


