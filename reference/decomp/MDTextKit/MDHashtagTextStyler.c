// ===== MDHashtagTextStyler::init @ 00012318 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHashtagTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDHashtagTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setHashColor_(self,IVar1);
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setTextColor_(self,IVar1);
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setBackgroundColor_(self,IVar1);
  }
  return self;
}


// ===== MDHashtagTextStyler::styleTextInAttributedString:range:replacementBlock: @ 000123e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDHashtagTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID IStack_40;
  ID local_38;
  
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = 
  ___74__MDHashtagTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_50 = &
               ___block_descriptor_56_e8_32s40s48bs_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateHashtagInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


// ===== MDHashtagTextStyler::backgroundColor @ 00012bc4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHashtagTextStyler::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}


// ===== MDHashtagTextStyler::setBackgroundColor: @ 00012bd4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHashtagTextStyler::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}


// ===== MDHashtagTextStyler::textColor @ 00012be0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHashtagTextStyler::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}


// ===== MDHashtagTextStyler::setTextColor: @ 00012bf0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHashtagTextStyler::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}


// ===== MDHashtagTextStyler::hashColor @ 00012bfc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHashtagTextStyler::hashColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_hashColor);
}


// ===== MDHashtagTextStyler::setHashColor: @ 00012c0c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHashtagTextStyler::setHashColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_hashColor) = param_3;
  return;
}


// ===== MDHashtagTextStyler::tagURLBlock @ 00012c18 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHashtagTextStyler::tagURLBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tagURLBlock);
}


// ===== MDHashtagTextStyler::setTagURLBlock: @ 00012c28 =====

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHashtagTextStyler::setTagURLBlock_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_tagURLBlock) = param_3;
  return;
}


// ===== MDHashtagTextStyler::tagIconBlock @ 00012c34 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHashtagTextStyler::tagIconBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tagIconBlock);
}


// ===== MDHashtagTextStyler::setTagIconBlock: @ 00012c44 =====

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHashtagTextStyler::setTagIconBlock_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_tagIconBlock) = param_3;
  return;
}


// ===== MDHashtagTextStyler::.cxx_destruct @ 00012c50 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDHashtagTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_tagIconBlock) = 0;
  *(undefined8 *)(param_1 + (long)_tagURLBlock) = 0;
  *(undefined8 *)(param_1 + (long)_hashColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  return;
}


