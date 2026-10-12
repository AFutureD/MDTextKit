// ===== MDLinkTextStyler::init @ 00014e48 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDLinkTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setLinkColor_(self,IVar1);
  }
  return self;
}


// ===== MDLinkTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00014ebc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDLinkTextStyler::styleTextInAttributedString_range_replacementBlock_
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
  ___71__MDLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_50 = &
               ___block_descriptor_56_e8_32s40s48bs_e117_v128__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72__NSRange_QQ_88__NSRange_QQ_104_B120l
  ;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateLinkInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,2,&local_68);
  return;
}


// ===== MDLinkTextStyler::linkColor @ 0001574c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}


// ===== MDLinkTextStyler::setLinkColor: @ 0001575c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLinkTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}


// ===== MDLinkTextStyler::attachmentColor @ 00015768 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkTextStyler::attachmentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentColor);
}


// ===== MDLinkTextStyler::setAttachmentColor: @ 00015778 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLinkTextStyler::setAttachmentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentColor) = param_3;
  return;
}


// ===== MDLinkTextStyler::disablePreview @ 00015784 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDLinkTextStyler::disablePreview(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_disablePreview) & 1;
}


// ===== MDLinkTextStyler::setDisablePreview: @ 00015798 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDLinkTextStyler::setDisablePreview_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_disablePreview) = (char)param_3;
  return;
}


// ===== MDLinkTextStyler::.cxx_destruct @ 000157a8 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDLinkTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_attachmentColor) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}


