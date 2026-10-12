// ===== MDMarkdownHider::showHideMarkdownInTextView:oldSelectionRange:newSelectionRange: @ 000215d8 =====

void MDMarkdownHider::showHideMarkdownInTextView_oldSelectionRange_newSelectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  
  IVar1 = textStorage(param_3);
  IVar1 = rangesToCheckForMarkdownHidingForRange_inAttributedString_
                    (param_1,param_4.field0_0x0,param_4.field1_0x8,IVar1);
  IVar2 = textStorage(param_3);
  IVar2 = rangeToCheckForMarkdownShowingForRange_inAttributedString_
                    (param_1,param_5.field0_0x0,param_5.field1_0x8,IVar2);
  IVar3 = textStorage(param_3);
  beginEditing(IVar3);
  IVar3 = FAST_ENUM(IVar1);
  if (IVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    lVar7 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(IVar1);
        }
        IVar4 = rangeValue(*(ID *)(lStack_128 + IVar6 * 8));
        IVar5 = textStorage(param_3);
        IVar4 = hideMarkdownInRange_inAttributedString_
                          (param_1,IVar4,extraout_x1_00,IVar5);
        uVar8 = (uint)IVar4 | uVar8;
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  if (IVar2 != 0x7fffffffffffffff) {
    IVar1 = textStorage(param_3);
    IVar1 = showMarkdownInRange_inAttributedString_(param_1,IVar2,extraout_x1,IVar1);
    uVar8 = (uint)IVar1 | uVar8;
  }
  IVar1 = textStorage(param_3);
  endEditing(IVar1);
  if ((uVar8 & 1) != 0) {
    setNeedsDisplay(param_3);
  }
  }
  return;
}

// ===== MDMarkdownHider::hideMarkdownInRange:inAttributedString: @ 0002184c =====

bool MDMarkdownHider::hideMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar4 = param_3.field1_0x8;
  uVar3 = param_3.field0_0x0;
  local_88 = placeholderFont(param_1);
  puVar2 = PTR___NSConcreteStackBlock;
  local_e0 = ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke;
  local_d0 = param_1;
  local_c8 = param_4;
  enumerateAttributesInRange_options_usingBlock_(param_4,uVar3,uVar4,0,&local_f0);
  local_110 = ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke_4;
  local_100 = param_4;
  enumerateMathBlockInRange_options_usingBlock_(param_4,uVar3,uVar4,0,&local_120);
  local_140 = ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke_7;
  local_130 = param_4;
  enumerateFencedCodeInRange_options_usingBlock_(param_4,uVar3,uVar4,0,&local_150);
  bVar1 = *(byte *)(local_78 + 3);
  __Block_object_dispose(&local_b0,8);
  __Block_object_dispose(&local_80,8);
  return (bool)bVar1;
}

// ===== MDMarkdownHider::showMarkdownInRange:inAttributedString: @ 000225c4 =====

bool MDMarkdownHider::showMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar2 = removeTemporaryAttributesInRange_
                    (param_4,param_3.field0_0x0,param_3.field1_0x8);
  local_48 = (undefined1)IVar2;
  local_80 = ___58__MDMarkdownHider_showMarkdownInRange_inAttributedString___block_invoke;
  local_70 = param_4;
  enumerateAttribute_inRange_options_usingBlock_
            (param_4,_NSAttachmentAttributeName,param_3.field0_0x0,
             param_3.field1_0x8,0,&local_90);
  bVar1 = *(byte *)(local_58 + 3);
  __Block_object_dispose(&local_60,8);
  return (bool)bVar1;
}

// ===== MDMarkdownHider::removeHidableMarkdownInRange:inAttributedString: @ 000227b8 =====

void MDMarkdownHider::removeHidableMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  local_50 = ___67__MDMarkdownHider_removeHidableMarkdownInRange_inAttributedString___block_invoke;
  local_40 = param_1;
  local_38 = param_4;
  enumerateAttributesInRange_options_usingBlock_
            (param_4,param_3.field0_0x0,param_3.field1_0x8,0,&local_60);
  return;
}

// ===== MDMarkdownHider::rangeToCheckForMarkdownShowingForRange:inAttributedString: @ 00022c0c =====

_NSRange MDMarkdownHider::rangeToCheckForMarkdownShowingForRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = length(param_4);
  uVar2 = 0;
  IVar3 = 0x7fffffffffffffff;
  if ((IVar1 != 0) && (param_3.field0_0x0 != 0x7fffffffffffffff)) {
    IVar1 = normalizedRangeForRange_inAttributedString_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4);
    IVar3 = extendedRangeForRange_inAttributedString_(param_1,IVar1,extraout_x1,param_4);
    uVar2 = extraout_x1_00;
  }
  _Var4.field1_0x8 = uVar2;
  _Var4.field0_0x0 = IVar3;
  return _Var4;
}

// ===== MDMarkdownHider::rangesToCheckForMarkdownHidingForRange:inAttributedString: @ 00022ca4 =====

ID MDMarkdownHider::rangesToCheckForMarkdownHidingForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = length(param_4);
  puVar3 = PTR____NSArray0__struct;
  if ((IVar1 != 0) && (param_3.field0_0x0 != 0x7fffffffffffffff)) {
    IVar1 = normalizedRangeForRange_inAttributedString_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4);
    IVar1 = extendedRangeForRange_inAttributedString_(param_1,IVar1,extraout_x1,param_4);
    if (extraout_x1_00 == 0) {
      local_50 = valueWithRange_(NSValue,IVar1,0);
      puVar3 = (undefined *)
               arrayWithObjects_count_(NSArray,&local_50,1);
    }
    else {
      self = array(NSMutableArray);
      local_80 = 
      ___77__MDMarkdownHider_rangesToCheckForMarkdownHidingForRange_inAttributedString___block_invoke
      local_70 = param_1;
      local_68 = param_4;
      local_60 = self;
      enumerateAttributesInRange_options_usingBlock_
                (param_4,IVar1,extraout_x1_00,0,&local_90);
      IVar2 = count(self);
      if (IVar2 == 0) {
        local_58 = valueWithRange_(NSValue,IVar1,extraout_x1_00);
        puVar3 = (undefined *)
                 arrayWithObjects_count_(NSArray,&local_58,1);
      }
      else {
        puVar3 = (undefined *)
                 rangesRemovingRanges_fromRange_(param_1,self,IVar1,extraout_x1_00);
      }
    }
  }
  }
  return (ID)puVar3;
}

// ===== MDMarkdownHider::normalizedRangesForRanges: @ 00022fb4 =====

ID MDMarkdownHider::normalizedRangesForRanges_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar2 = array(NSMutableArray);
  IVar3 = FAST_ENUM(param_3)
  puVar1 = PTR___NSConcreteStackBlock;
  if (IVar3 != 0) {
    lVar4 = *local_130;
    do {
      IVar5 = 0;
      do {
        if (*local_130 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        self = *(ID *)(lStack_138 + IVar5 * 8);
        local_170 = rangeValue(self);
        local_148 = 1;
        local_190 = ___45__MDMarkdownHider_normalizedRangesForRanges___block_invoke;
        local_180 = IVar2;
        enumerateObjectsUsingBlock_(IVar2,&local_1a0);
        if (*(char *)(local_158 + 3) == '\x01') {
          addObject_(IVar2,self);
        }
        __Block_object_dispose(&local_160,8);
        IVar5 = IVar5 + 1;
      } while (IVar3 != IVar5);
      IVar3 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_140,auStack_100,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = sortedArrayUsingComparator_(IVar2,&___block_literal_global);
    return IVar2;
  }
}

// ===== MDMarkdownHider::rangesRemovingRanges:fromRange: @ 000232f8 =====

ID MDMarkdownHider::rangesRemovingRanges_fromRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  uVar6 = param_4.field1_0x8;
  uVar5 = param_4.field0_0x0;
  self = array(NSMutableArray);
  IVar1 = normalizedRangesForRanges_(param_1,param_3);
  IVar2 = FAST_ENUM(IVar1);
  if (IVar2 != 0) {
    lVar9 = *local_120;
    do {
      IVar8 = 0;
      uVar7 = uVar5;
      do {
        if (*local_120 != lVar9) {
          _objc_enumerationMutation(IVar1);
        }
        IVar3 = rangeValue(*(ID *)(lStack_128 + IVar8 * 8));
        if (IVar3 - uVar7 == 0) {
          uVar5 = extraout_x1 + uVar7;
          uVar6 = uVar6 - extraout_x1;
        }
        else {
          IVar4 = valueWithRange_(NSValue,uVar7,IVar3 - uVar7);
          addObject_(self,IVar4);
          uVar5 = IVar3 + extraout_x1;
          uVar6 = (uVar7 + uVar6) - uVar5;
        }
        IVar8 = IVar8 + 1;
        uVar7 = uVar5;
      } while (IVar2 != IVar8);
      IVar2 = countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  if (uVar6 != 0) {
    IVar1 = valueWithRange_(NSValue,uVar5,uVar6);
    addObject_(self,IVar1);
  }
    return self;
  }
}

// ===== MDMarkdownHider::normalizedRangeForRange:inAttributedString: @ 000234e8 =====

_NSRange MDMarkdownHider::normalizedRangeForRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar2 = param_3.field0_0x0;
  if ((param_3.field1_0x8 == 0) && (IVar1 = length(param_4), uVar2 == IVar1)) {
    _Var3.field1_0x8 = 0;
    _Var3.field0_0x0 = uVar2;
  }
  else {
    IVar1 = length(param_4);
    _Var3 = (_NSRange)_NSIntersectionRange(uVar2,param_3.field1_0x8,0,IVar1);
  }
  return _Var3;
}

// ===== MDMarkdownHider::extendedRangeForRange:inAttributedString: @ 0002356c =====

_NSRange MDMarkdownHider::extendedRangeForRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar2 = attributesToSearchForHiding(param_1);
  IVar3 = FAST_ENUM(IVar2);
  if (IVar3 != 0) {
    lVar10 = *local_140;
    do {
      IVar7 = 0;
      do {
        IVar6 = param_3.field0_0x0;
        if (*local_140 != lVar10) {
          _objc_enumerationMutation(IVar2);
        }
        uVar8 = *(undefined8 *)(lStack_148 + IVar7 * 8);
        IVar4 = length(param_4);
        IVar5 = string(param_4);
        lVar9 = IVar6 - (IVar6 == IVar4);
        IVar4 = characterAtIndex_(IVar5,lVar9);
        if (((((int)IVar4 != 10) ||
             (IVar4 = isRangeInsideCode_(param_4,lVar9,1), (IVar4 & 1) != 0)) ||
            (IVar4 = isRangeInsideMath_(param_4,lVar9,1), (IVar4 & 1) != 0)) &&
           (IVar4 = longestRangeForAttribute_atIndex_(param_4,uVar8,lVar9),
           IVar4 != 0x7fffffffffffffff)) {
          param_3 = (_NSRange)_NSUnionRange(IVar6,param_3.field1_0x8,IVar4,extraout_x1);
        }
        lVar9 = param_3.field1_0x8 + param_3.field0_0x0;
        IVar6 = 0;
        if (lVar9 != 0) {
          IVar6 = lVar9 - 1;
        }
        IVar4 = length(param_4);
        IVar5 = string(param_4);
        lVar9 = IVar6 - (IVar6 == IVar4);
        IVar6 = characterAtIndex_(IVar5,lVar9);
        if (((((int)IVar6 != 10) ||
             (IVar6 = isRangeInsideCode_(param_4,lVar9,1), (IVar6 & 1) != 0)) ||
            (IVar6 = isRangeInsideMath_(param_4,lVar9,1), (IVar6 & 1) != 0)) &&
           (IVar6 = longestRangeForAttribute_atIndex_(param_4,uVar8,lVar9),
           IVar6 != 0x7fffffffffffffff)) {
          param_3 = (_NSRange)
                    _NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,IVar6,extraout_x1_00);
        }
        IVar7 = IVar7 + 1;
      } while (IVar3 != IVar7);
      IVar3 = countByEnumeratingWithState_objects_count_
                        (IVar2,&local_150,auStack_110,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = string(param_4);
  IVar2 = paragraphRangeForRange_(IVar2,param_3.field0_0x0,param_3.field1_0x8);
  puVar1 = PTR___NSConcreteStackBlock;
  local_1c8 = ___60__MDMarkdownHider_extendedRangeForRange_inAttributedString___block_invoke;
  local_1b8 = param_4;
  enumerateAttribute_inRange_options_usingBlock_
            (param_4,_PMKMathBlockAttributeName,IVar2,extraout_x1_01,0,
             &local_1d8);
  if (*(char *)(local_168 + 3) == '\x01') {
    param_3 = (_NSRange)
              _NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,local_198[4],local_198[5]);
  }
  local_250 = ___60__MDMarkdownHider_extendedRangeForRange_inAttributedString___block_invoke_20;
  local_240 = param_4;
  local_220 = local_230;
  local_1f0 = puStack_238;
  enumerateAttribute_inRange_options_usingBlock_
            (param_4,&cf_MDMermaidCodeContent,IVar2,extraout_x1_01,0,&local_260);
  if (*(char *)(local_1f0 + 3) == '\x01') {
    param_3 = (_NSRange)
              _NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,local_220[4],local_220[5]);
  }
  __Block_object_dispose(&local_228,8);
  __Block_object_dispose(&local_1f8,8);
  __Block_object_dispose(&local_1a0,8);
  __Block_object_dispose(&local_170,8);
  }
  return param_3;
}

// ===== MDMarkdownHider::attributesToHide @ 00023bc0 =====

ID MDMarkdownHider::attributesToHide(ID param_1,SEL param_2)

{
  
  if (_attributesToHide_attributesToHide == 0) {
    local_d8 = _PMKStrongMarkerAttributeName;
    uStack_d0 = _PMKEmphasisMarkerAttributeName;
    local_c8 = _PMKCodeMarkerAttributeName;
    uStack_c0 = _PMKMathSpanFormulaAttributeName;
    local_b8 = _PMKMathSpanMarkerAttributeName;
    uStack_b0 = _PMKMathBlockFormulaAttributeName;
    local_a8 = _PMKMathBlockMarkerAttributeName;
    uStack_a0 = _PMKFencedCodeLanguageAttributeName;
    local_98 = _PMKHighlighterMarkerAttributeName;
    uStack_90 = _PMKLinkMarkerAttributeName;
    local_88 = _PMKAutoLinkMarkerAttributeName;
    uStack_80 = _PMKStrikethroughMarkerAttributeName;
    local_78 = _PMKUnderlineMarkerAttributeName;
    uStack_70 = _PMKFencedCodeMarkerAttributeName;
    local_68 = _PMKFootNoteMarkerAttributeName;
    uStack_60 = _PMKEscapeAttributeName;
    local_58 = _PMKReferenceMarkerAttributeName;
    uStack_50 = _PMKReferenceLabelAttributeName;
    local_48 = _PMKWikiLinkMarkerAttributeName;
    uStack_40 = _PMKWikiLinkAliasSeparatorAttributeName;
    local_38 = _PMKHashtagMarkerAttributeName;
    pcStack_30 = &cf_MDMermaidCodeContent;
    _attributesToHide_attributesToHide =
         arrayWithObjects_count_(NSArray,&local_d8,0x16);
  }
    return _attributesToHide_attributesToHide;
  }
}

// ===== MDMarkdownHider::attributesToSearchForHiding @ 00023d7c =====

ID MDMarkdownHider::attributesToSearchForHiding(ID param_1,SEL param_2)

{
  
  if (_attributesToSearchForHiding_attributesToSearchForHiding == 0) {
    local_c8 = _PMKStrongAttributeName;
    uStack_c0 = _PMKEmphasisAttributeName;
    local_b8 = _PMKCodeAttributeName;
    uStack_b0 = _PMKMathSpanAttributeName;
    local_a8 = _PMKMathBlockAttributeName;
    uStack_a0 = _PMKHighlighterAttributeName;
    local_98 = _PMKLinkAttributeName;
    uStack_90 = _PMKAutoLinkURLAttributeName;
    local_88 = _PMKAutoLinkEmailAttributeName;
    uStack_80 = _PMKStrikethroughAttributeName;
    local_78 = _PMKUnderlineAttributeName;
    uStack_70 = _PMKFencedCodeAttributeName;
    local_68 = _PMKFootNoteAttributeName;
    uStack_60 = _PMKReferenceAttributeName;
    local_58 = _PMKReferenceDefinitionAttributeName;
    uStack_50 = _PMKWikiLinkAttributeName;
    local_48 = _PMKHeadingAttributeName;
    uStack_40 = _PMKEscapeAttributeName;
    local_38 = _PMKHardLinebreakAttributeName;
    uStack_30 = _PMKHashtagAttributeName;
    _attributesToSearchForHiding_attributesToSearchForHiding =
         arrayWithObjects_count_(NSArray,&local_c8,0x14);
  }
    return _attributesToSearchForHiding_attributesToSearchForHiding;
  }
}

// ===== MDMarkdownHider::attributesPreventingHiding @ 00023f1c =====

ID MDMarkdownHider::attributesPreventingHiding(ID param_1,SEL param_2)

{
  
  if (_attributesPreventingHiding_attributesPreventingHiding == 0) {
    local_38 = &cf_MDPreventMarkdownHiding;
    pcStack_30 = &cf_MDSearchResultBackgroundColor;
    _attributesPreventingHiding_attributesPreventingHiding =
         arrayWithObjects_count_(NSArray,&local_38,2);
  }
    return _attributesPreventingHiding_attributesPreventingHiding;
  }
}

// ===== MDMarkdownHider::placeholderFont @ 00023fc0 =====

ID MDMarkdownHider::placeholderFont(ID param_1,SEL param_2)

{
  if (_placeholderFont_placeholderFont == 0) {
    _placeholderFont_placeholderFont =
         systemFontOfSize_(NSFont,0x3f847ae147ae147b);
  }
  return _placeholderFont_placeholderFont;
}

