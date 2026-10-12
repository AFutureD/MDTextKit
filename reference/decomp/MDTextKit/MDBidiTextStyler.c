// ===== MDBidiTextStyler::init @ 0002433c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBidiTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_d0.super_class = &objc::class_t::MDBidiTextStyler;
  local_d0.receiver = param_1;
  self = _objc_msgSendSuper2(&local_d0,"init");
  if (self != 0) {
    IVar1 = objc_stub::defaultParagraphStyle((ID)&_OBJC_CLASS___NSParagraphStyle);
    objc_stub::setLtrParagraphStyle_(self,IVar1);
    IVar1 = objc_stub::defaultParagraphStyle((ID)&_OBJC_CLASS___NSParagraphStyle);
    objc_stub::setRtlParagraphStyle_(self,IVar1);
    IVar1 = objc_stub::defaultParagraphStyle((ID)&_OBJC_CLASS___NSParagraphStyle);
    objc_stub::setPreferredParagraphStyle_(self,IVar1);
    local_b0 = *(undefined8 *)PTR__PMKCodeAttributeName_0005e8a0;
    uStack_a8 = *(undefined8 *)PTR__PMKEmphasisAttributeName_0005e8d0;
    local_a0 = *(undefined8 *)PTR__PMKHashtagAttributeName_0005e948;
    uStack_98 = *(undefined8 *)PTR__PMKHighlighterAttributeName_0005e970;
    local_90 = *(undefined8 *)PTR__PMKImageAttributeName_0005e980;
    uStack_88 = *(undefined8 *)PTR__PMKLinkAttributeName_0005e9b0;
    local_80 = *(undefined8 *)PTR__PMKStrikethroughAttributeName_0005ea50;
    uStack_78 = *(undefined8 *)PTR__PMKStrongAttributeName_0005ea60;
    local_70 = *(undefined8 *)PTR__PMKUnderlineAttributeName_0005ea80;
    uStack_68 = *(undefined8 *)PTR__PMKHTMLBlockAttributeName_0005e928;
    local_60 = *(undefined8 *)PTR__PMKHTMLInlineAttributeName_0005e938;
    uStack_58 = *(undefined8 *)PTR__PMKReferenceAttributeName_0005ea28;
    local_50 = *(undefined8 *)PTR__PMKReferenceDefinitionAttributeName_0005ea30;
    uStack_48 = *(undefined8 *)PTR__PMKFootNoteAttributeName_0005e910;
    local_40 = *(undefined8 *)PTR__PMKWikiLinkAttributeName_0005eaa0;
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_b0,0xf);
    objc_stub::setInlineAttributes_(self,IVar1);
    local_c0 = *(undefined8 *)PTR__PMKColorAttributeName_0005e8b0;
    uStack_b8 = *(undefined8 *)PTR__PMKHTMLEntityAttributeName_0005e930;
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_c0,2);
    objc_stub::setForcedLTRAttributes_(self,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_38) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDBidiTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00024588 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDBidiTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  double extraout_d0;
  undefined *local_3c8;
  undefined8 local_3c0;
  code *local_3b8;
  undefined *puStack_3b0;
  ID local_3a8;
  ID IStack_3a0;
  undefined *local_398;
  undefined8 local_390;
  code *local_388;
  undefined *puStack_380;
  ID local_378;
  undefined8 local_370;
  long lStack_368;
  long *local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined *local_330;
  undefined8 local_328;
  code *local_320;
  undefined *puStack_318;
  ID local_310;
  ID local_308;
  undefined8 local_300;
  long lStack_2f8;
  long *local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  code *local_2b0;
  undefined *puStack_2a8;
  ID local_2a0;
  ID local_298;
  undefined8 local_290;
  long lStack_288;
  long *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *local_248;
  undefined8 local_240;
  code *local_238;
  undefined *puStack_230;
  ID local_228;
  ID IStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_248 = PTR___NSConcreteStackBlock_0005ebe0;
  local_240 = 0xc2000000;
  local_238 = 
  ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_230 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_228 = param_3;
  IStack_220 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,*(undefined8 *)PTR__PMKDirectionAttributeName_0005e8b8,param_4->field0_0x0,
             param_4->field1_0x8,0,&local_248);
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  local_280 = (long *)0x0;
  IVar1 = objc_stub::inlineAttributes(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_290,auStack_108,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_280;
    do {
      IVar3 = 0;
      do {
        if (*local_280 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        local_2c0 = PTR___NSConcreteStackBlock_0005ebe0;
        local_2b8 = 0xc2000000;
        local_2b0 = 
        ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
        puStack_2a8 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
        local_2a0 = param_1;
        local_298 = param_3;
        objc_stub::enumerateAttribute_inRange_options_usingBlock_
                  (param_3,*(undefined8 *)(lStack_288 + IVar3 * 8),param_4->field0_0x0,
                   param_4->field1_0x8,0,&local_2c0);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_290,auStack_108,0x10);
    } while (IVar2 != 0);
  }
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = (long *)0x0;
  IVar1 = objc_stub::forcedLTRAttributes(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_300,auStack_188,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_2f0;
    do {
      IVar3 = 0;
      do {
        if (*local_2f0 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        local_330 = PTR___NSConcreteStackBlock_0005ebe0;
        local_328 = 0xc2000000;
        local_320 = 
        ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
        puStack_318 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
        local_310 = param_1;
        local_308 = param_3;
        objc_stub::enumerateAttribute_inRange_options_usingBlock_
                  (param_3,*(undefined8 *)(lStack_2f8 + IVar3 * 8),param_4->field0_0x0,
                   param_4->field1_0x8,0,&local_330);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_300,auStack_188,0x10);
    } while (IVar2 != 0);
  }
  uStack_338 = 0;
  local_340 = 0;
  uStack_358 = 0;
  local_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_368 = 0;
  local_370 = 0;
  local_218 = *(undefined8 *)PTR__PMKListAttributeName_0005e9d8;
  uStack_210 = *(undefined8 *)PTR__PMKBlockquoteAttributeName_0005e880;
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_218,2);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_370,auStack_208,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_360;
    do {
      IVar3 = 0;
      do {
        if (*local_360 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        local_398 = PTR___NSConcreteStackBlock_0005ebe0;
        local_390 = 0xc2000000;
        local_388 = 
        ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3;
        puStack_380 = &___block_descriptor_40_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
        local_378 = param_3;
        objc_stub::enumerateAttribute_inRange_options_usingBlock_
                  (param_3,*(undefined8 *)(lStack_368 + IVar3 * 8),param_4->field0_0x0,
                   param_4->field1_0x8,0,&local_398);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_370,auStack_208,0x10);
    } while (IVar2 != 0);
  }
  objc_stub::paragraphIndent(param_1);
  if (extraout_d0 != 0.0) {
    IVar1 = objc_stub::string(param_3);
    local_3c8 = PTR___NSConcreteStackBlock_0005ebe0;
    local_3c0 = 0xc2000000;
    local_3b8 = 
    ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4;
    puStack_3b0 = &
                  ___block_descriptor_48_e8_32s40s_e52_v56__0__NSString_8__NSRange_QQ_16__NSRange_QQ_32_B48l
    ;
    local_3a8 = param_3;
    IStack_3a0 = param_1;
    objc_stub::enumerateSubstringsInRange_options_usingBlock_
              (IVar1,param_4->field0_0x0,param_4->field1_0x8,0x201,&local_3c8);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDBidiTextStyler::ltrParagraphStyle @ 00024ef8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBidiTextStyler::ltrParagraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_ltrParagraphStyle);
}


// ===== MDBidiTextStyler::setLtrParagraphStyle: @ 00024f08 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBidiTextStyler::setLtrParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_ltrParagraphStyle) = param_3;
  return;
}


// ===== MDBidiTextStyler::rtlParagraphStyle @ 00024f14 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBidiTextStyler::rtlParagraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_rtlParagraphStyle);
}


// ===== MDBidiTextStyler::setRtlParagraphStyle: @ 00024f24 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBidiTextStyler::setRtlParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_rtlParagraphStyle) = param_3;
  return;
}


// ===== MDBidiTextStyler::preferredParagraphStyle @ 00024f30 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBidiTextStyler::preferredParagraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_preferredParagraphStyle);
}


// ===== MDBidiTextStyler::setPreferredParagraphStyle: @ 00024f40 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBidiTextStyler::setPreferredParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_preferredParagraphStyle) = param_3;
  return;
}


// ===== MDBidiTextStyler::paragraphIndent @ 00024f4c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBidiTextStyler::paragraphIndent(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_paragraphIndent);
}


// ===== MDBidiTextStyler::setParagraphIndent: @ 00024f5c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBidiTextStyler::setParagraphIndent_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_paragraphIndent) = param_3;
  return;
}


// ===== MDBidiTextStyler::inlineAttributes @ 00024f6c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBidiTextStyler::inlineAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_inlineAttributes);
}


// ===== MDBidiTextStyler::setInlineAttributes: @ 00024f7c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBidiTextStyler::setInlineAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_inlineAttributes) = param_3;
  return;
}


// ===== MDBidiTextStyler::forcedLTRAttributes @ 00024f88 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBidiTextStyler::forcedLTRAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_forcedLTRAttributes);
}


// ===== MDBidiTextStyler::setForcedLTRAttributes: @ 00024f98 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBidiTextStyler::setForcedLTRAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_forcedLTRAttributes) = param_3;
  return;
}


// ===== MDBidiTextStyler::.cxx_destruct @ 00024fa4 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDBidiTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_forcedLTRAttributes) = 0;
  *(undefined8 *)(param_1 + (long)_inlineAttributes) = 0;
  *(undefined8 *)(param_1 + (long)_preferredParagraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_rtlParagraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_ltrParagraphStyle) = 0;
  return;
}


