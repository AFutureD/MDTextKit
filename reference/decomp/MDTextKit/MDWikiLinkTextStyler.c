// ===== MDWikiLinkTextStyler::init @ 00038bdc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDWikiLinkTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDWikiLinkTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setLinkColor_(self,IVar1);
  }
  return self;
}


// ===== MDWikiLinkTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00038c50 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDWikiLinkTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID IStack_38;
  
  local_60 = PTR___NSConcreteStackBlock_0005ebe0;
  local_58 = 0xc2000000;
  local_50 = 
  ___75__MDWikiLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_48 = &
               ___block_descriptor_48_e8_32s40s_e146_v152__0__NSString_8__NSRange_QQ_16__NSRange_QQ_32__NSRange_QQ_48__NSRange_QQ_64__NSRange_QQ_80__NSRange_QQ_96__NSRange_QQ_112__NSRange_QQ_128_B144l
  ;
  local_40 = param_3;
  IStack_38 = param_1;
  objc_stub::enumerateWikiLinkInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}


// ===== MDWikiLinkTextStyler::linkColor @ 00039020 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDWikiLinkTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}


// ===== MDWikiLinkTextStyler::setLinkColor: @ 00039030 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDWikiLinkTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}


// ===== MDWikiLinkTextStyler::wikiLinkURLBlock @ 0003903c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDWikiLinkTextStyler::wikiLinkURLBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_wikiLinkURLBlock);
}


// ===== MDWikiLinkTextStyler::setWikiLinkURLBlock: @ 0003904c =====

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDWikiLinkTextStyler::setWikiLinkURLBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_wikiLinkURLBlock) = param_3;
  return;
}


// ===== MDWikiLinkTextStyler::.cxx_destruct @ 00039058 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDWikiLinkTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_wikiLinkURLBlock) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}


