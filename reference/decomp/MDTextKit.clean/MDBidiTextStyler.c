// ===== MDBidiTextStyler::init @ 0002433c =====

ID MDBidiTextStyler::init(ID param_1,SEL param_2)

{
  
  local_d0.super_class = &objc::class_t::MDBidiTextStyler;
  local_d0.receiver = param_1;
  self = _objc_msgSendSuper2(&local_d0,"init");
  if (self != 0) {
    IVar1 = defaultParagraphStyle(NSParagraphStyle);
    setLtrParagraphStyle_(self,IVar1);
    IVar1 = defaultParagraphStyle(NSParagraphStyle);
    setRtlParagraphStyle_(self,IVar1);
    IVar1 = defaultParagraphStyle(NSParagraphStyle);
    setPreferredParagraphStyle_(self,IVar1);
    local_b0 = _PMKCodeAttributeName;
    uStack_a8 = _PMKEmphasisAttributeName;
    local_a0 = _PMKHashtagAttributeName;
    uStack_98 = _PMKHighlighterAttributeName;
    local_90 = _PMKImageAttributeName;
    uStack_88 = _PMKLinkAttributeName;
    local_80 = _PMKStrikethroughAttributeName;
    uStack_78 = _PMKStrongAttributeName;
    local_70 = _PMKUnderlineAttributeName;
    uStack_68 = _PMKHTMLBlockAttributeName;
    local_60 = _PMKHTMLInlineAttributeName;
    uStack_58 = _PMKReferenceAttributeName;
    local_50 = _PMKReferenceDefinitionAttributeName;
    uStack_48 = _PMKFootNoteAttributeName;
    local_40 = _PMKWikiLinkAttributeName;
    IVar1 = arrayWithObjects_count_(NSArray,&local_b0,0xf);
    setInlineAttributes_(self,IVar1);
    local_c0 = _PMKColorAttributeName;
    uStack_b8 = _PMKHTMLEntityAttributeName;
    IVar1 = arrayWithObjects_count_(NSArray,&local_c0,2);
    setForcedLTRAttributes_(self,IVar1);
  }
    return self;
  }
}

// ===== MDBidiTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00024588 =====

void MDBidiTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_238 = 
  ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_228 = param_3;
  IStack_220 = param_1;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,_PMKDirectionAttributeName,param_4->field0_0x0,
             param_4->field1_0x8,0,&local_248);
  IVar1 = inlineAttributes(param_1);
  IVar2 = FAST_ENUM(IVar1);
  if (IVar2 != 0) {
    lVar4 = *local_280;
    do {
      IVar3 = 0;
      do {
        if (*local_280 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        local_2b0 = 
        ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
        local_2a0 = param_1;
        local_298 = param_3;
        enumerateAttribute_inRange_options_usingBlock_
                  (param_3,*(undefined8 *)(lStack_288 + IVar3 * 8),param_4->field0_0x0,
                   param_4->field1_0x8,0,&local_2c0);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = countByEnumeratingWithState_objects_count_
                        (IVar1,&local_290,auStack_108,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = forcedLTRAttributes(param_1);
  IVar2 = FAST_ENUM(IVar1);
  if (IVar2 != 0) {
    lVar4 = *local_2f0;
    do {
      IVar3 = 0;
      do {
        if (*local_2f0 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        local_320 = 
        ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
        local_310 = param_1;
        local_308 = param_3;
        enumerateAttribute_inRange_options_usingBlock_
                  (param_3,*(undefined8 *)(lStack_2f8 + IVar3 * 8),param_4->field0_0x0,
                   param_4->field1_0x8,0,&local_330);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = countByEnumeratingWithState_objects_count_
                        (IVar1,&local_300,auStack_188,0x10);
    } while (IVar2 != 0);
  }
  local_218 = _PMKListAttributeName;
  uStack_210 = _PMKBlockquoteAttributeName;
  IVar1 = arrayWithObjects_count_(NSArray,&local_218,2);
  IVar2 = FAST_ENUM(IVar1);
  if (IVar2 != 0) {
    lVar4 = *local_360;
    do {
      IVar3 = 0;
      do {
        if (*local_360 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        local_388 = 
        ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3;
        local_378 = param_3;
        enumerateAttribute_inRange_options_usingBlock_
                  (param_3,*(undefined8 *)(lStack_368 + IVar3 * 8),param_4->field0_0x0,
                   param_4->field1_0x8,0,&local_398);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = countByEnumeratingWithState_objects_count_
                        (IVar1,&local_370,auStack_208,0x10);
    } while (IVar2 != 0);
  }
  paragraphIndent(param_1);
  if (extraout_d0 != 0.0) {
    IVar1 = string(param_3);
    local_3b8 = 
    ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4;
    local_3a8 = param_3;
    IStack_3a0 = param_1;
    enumerateSubstringsInRange_options_usingBlock_
              (IVar1,param_4->field0_0x0,param_4->field1_0x8,0x201,&local_3c8);
  }
    return;
  }
}

// ===== MDBidiTextStyler::ltrParagraphStyle @ 00024ef8 =====

ID MDBidiTextStyler::ltrParagraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_ltrParagraphStyle);
}

// ===== MDBidiTextStyler::setLtrParagraphStyle: @ 00024f08 =====

void MDBidiTextStyler::setLtrParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_ltrParagraphStyle) = param_3;
  return;
}

// ===== MDBidiTextStyler::rtlParagraphStyle @ 00024f14 =====

ID MDBidiTextStyler::rtlParagraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_rtlParagraphStyle);
}

// ===== MDBidiTextStyler::setRtlParagraphStyle: @ 00024f24 =====

void MDBidiTextStyler::setRtlParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_rtlParagraphStyle) = param_3;
  return;
}

// ===== MDBidiTextStyler::preferredParagraphStyle @ 00024f30 =====

ID MDBidiTextStyler::preferredParagraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_preferredParagraphStyle);
}

// ===== MDBidiTextStyler::setPreferredParagraphStyle: @ 00024f40 =====

void MDBidiTextStyler::setPreferredParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_preferredParagraphStyle) = param_3;
  return;
}

// ===== MDBidiTextStyler::paragraphIndent @ 00024f4c =====

double MDBidiTextStyler::paragraphIndent(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_paragraphIndent);
}

// ===== MDBidiTextStyler::setParagraphIndent: @ 00024f5c =====

void MDBidiTextStyler::setParagraphIndent_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_paragraphIndent) = param_3;
  return;
}

// ===== MDBidiTextStyler::inlineAttributes @ 00024f6c =====

ID MDBidiTextStyler::inlineAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_inlineAttributes);
}

// ===== MDBidiTextStyler::setInlineAttributes: @ 00024f7c =====

void MDBidiTextStyler::setInlineAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_inlineAttributes) = param_3;
  return;
}

// ===== MDBidiTextStyler::forcedLTRAttributes @ 00024f88 =====

ID MDBidiTextStyler::forcedLTRAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_forcedLTRAttributes);
}

// ===== MDBidiTextStyler::setForcedLTRAttributes: @ 00024f98 =====

void MDBidiTextStyler::setForcedLTRAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_forcedLTRAttributes) = param_3;
  return;
}

// ===== MDBidiTextStyler::.cxx_destruct @ 00024fa4 =====

void MDBidiTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_forcedLTRAttributes) = 0;
  *(undefined8 *)(param_1 + (long)_inlineAttributes) = 0;
  *(undefined8 *)(param_1 + (long)_preferredParagraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_rtlParagraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_ltrParagraphStyle) = 0;
  return;
}

