// ===== MDAutoLinkTextStyler::init @ 0002034c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAutoLinkTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDAutoLinkTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setLinkColor_(self,IVar1);
  }
  return self;
}


// ===== MDAutoLinkTextStyler::styleTextInAttributedString:range:replacementBlock: @ 000203c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDAutoLinkTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  ID IStack_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID IStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  local_80 = PTR___NSConcreteStackBlock_0005ebe0;
  local_78 = 0xc2000000;
  local_70 = 
  ___75__MDAutoLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_68 = &
               ___block_descriptor_48_e8_32s40s_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_60 = param_3;
  IStack_58 = param_1;
  objc_stub::enumerateAutoLinkURLInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_80);
  local_b0 = puVar1;
  local_a8 = 0xc2000000;
  local_a0 = 
  ___75__MDAutoLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3;
  puStack_98 = &
               ___block_descriptor_48_e8_32s40s_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_90 = param_3;
  IStack_88 = param_1;
  objc_stub::enumerateAutoLinkEmailInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_b0);
  return;
}


// ===== MDAutoLinkTextStyler::linkColor @ 000208b0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAutoLinkTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}


// ===== MDAutoLinkTextStyler::setLinkColor: @ 000208c0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAutoLinkTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}


// ===== MDAutoLinkTextStyler::attachmentColor @ 000208cc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAutoLinkTextStyler::attachmentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentColor);
}


// ===== MDAutoLinkTextStyler::setAttachmentColor: @ 000208dc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAutoLinkTextStyler::setAttachmentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentColor) = param_3;
  return;
}


// ===== MDAutoLinkTextStyler::.cxx_destruct @ 000208e8 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDAutoLinkTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_attachmentColor) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}


