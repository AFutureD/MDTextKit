// ===== MDAttributedStringDiffer::diffRangebetweenAttributedString:andAttributedString:inRange:secondDiffRange: @ 00016358 =====

_NSRange MDAttributedStringDiffer::
         diffRangebetweenAttributedString_andAttributedString_inRange_secondDiffRange_
                   (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5,_NSRange *param_6)

{
  
  uVar5 = param_5.field1_0x8;
  uVar4 = param_5.field0_0x0;
  IVar1 = length(param_3);
  param_6->field0_0x0 = uVar4;
  param_6->field1_0x8 = uVar5;
  IVar2 = length(param_3);
  uVar7 = 0;
  if (IVar2 != 0) {
    do {
      IVar2 = length(param_3);
      if ((IVar2 <= uVar7) || (uVar10 = uVar4 + uVar7, uVar4 + uVar5 <= uVar10)) break;
      IVar2 = string(param_3);
      IVar2 = characterAtIndex_(IVar2,uVar7);
      IVar3 = string(param_4);
      IVar3 = characterAtIndex_(IVar3,uVar10);
      if ((int)IVar2 != (int)IVar3) break;
      IVar2 = attributesAtIndex_effectiveRange_(param_3,uVar7,0);
      IVar3 = attributesAtIndex_effectiveRange_(param_4,uVar10,0);
      IVar2 = areAttributes_equalToAttributes_(param_1,IVar2,IVar3);
      if ((int)IVar2 == 0) break;
      IVar1 = IVar1 - 1;
      uVar7 = uVar7 + 1;
      param_6->field1_0x8 = param_6->field1_0x8 - 1;
      param_6->field0_0x0 = param_6->field0_0x0 + 1;
      IVar2 = length(param_3);
    } while (uVar7 < IVar2);
  }
  if (IVar1 == 0) {
    IVar1 = length(param_4);
    if (uVar7 < IVar1) {
      IVar1 = 0;
    }
    else {
      IVar1 = 0;
      uVar7 = 0x7fffffffffffffff;
      param_6->field0_0x0 = 0x7fffffffffffffff;
    }
  }
  else {
    IVar2 = length(param_3);
    if (1 < IVar2) {
      lVar6 = 0;
      uVar8 = uVar4 + uVar5;
      uVar10 = 1;
      do {
        IVar2 = length(param_3);
        if ((IVar2 + lVar6 <= uVar7) || (uVar8 <= param_6->field0_0x0)) break;
        lVar9 = (IVar2 + lVar6) - 1;
        uVar8 = uVar8 - 1;
        IVar2 = string(param_3);
        IVar2 = characterAtIndex_(IVar2,lVar9);
        IVar3 = string(param_4);
        IVar3 = characterAtIndex_(IVar3,uVar8);
        if ((int)IVar2 != (int)IVar3) break;
        IVar2 = attributesAtIndex_effectiveRange_(param_3,lVar9,0);
        IVar3 = attributesAtIndex_effectiveRange_(param_4,uVar8,0);
        IVar2 = areAttributes_equalToAttributes_(param_1,IVar2,IVar3);
        if ((int)IVar2 == 0) break;
        IVar1 = IVar1 - 1;
        param_6->field1_0x8 = param_6->field1_0x8 - 1;
        uVar10 = uVar10 + 1;
        IVar2 = length(param_3);
        lVar6 = lVar6 + -1;
      } while (uVar10 < IVar2);
    }
  }
  _Var11.field1_0x8 = IVar1;
  _Var11.field0_0x0 = uVar7;
  return _Var11;
}

// ===== MDAttributedStringDiffer::areAttributes:equalToAttributes: @ 000166c4 =====

bool MDAttributedStringDiffer::areAttributes_equalToAttributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar3 = objectForKeyedSubscript_(param_3,&cf_MDOriginalAttributes);
  if ((IVar3 != 0) ||
     (IVar3 = objectForKeyedSubscript_(param_4,&cf_MDOriginalAttributes), IVar3 != 0)) {
    param_3 = mutableCopy(param_3);
    param_4 = mutableCopy(param_4);
    IVar3 = objectForKeyedSubscript_(param_3,&cf_MDOriginalAttributes);
    puVar1 = PTR___NSConcreteStackBlock;
    local_90 = ___60__MDAttributedStringDiffer_areAttributes_equalToAttributes___block_invoke;
    local_80 = param_3;
    enumerateKeysAndObjectsUsingBlock_(IVar3,&local_a0);
    IVar3 = objectForKeyedSubscript_(param_4,&cf_MDOriginalAttributes);
    local_b8 = ___60__MDAttributedStringDiffer_areAttributes_equalToAttributes___block_invoke_1;
    local_a8 = param_4;
    enumerateKeysAndObjectsUsingBlock_(IVar3,&local_c8);
  }
  IVar3 = isEqualToDictionary_(param_3,param_4);
  if ((IVar3 & 1) == 0) {
    IVar3 = ignoreAttachments(param_1);
    puVar1 = PTR__NSAttachmentAttributeName;
    if ((int)IVar3 != 0) {
      IVar3 = objectForKeyedSubscript_
                        (param_3,_NSAttachmentAttributeName);
      IVar4 = objectForKeyedSubscript_(param_4,*(undefined8 *)puVar1);
      if (IVar3 != 0) {
        uVar5 = _objc_opt_class(&objc::class_t::SFTextAttachment);
        uVar6 = _objc_opt_isKindOfClass(IVar3,uVar5);
        if (((uVar6 & 1) != 0) && (IVar4 != 0)) {
          uVar5 = _objc_opt_class(&objc::class_t::SFTextAttachment);
          uVar6 = _objc_opt_isKindOfClass(IVar4,uVar5);
          if ((uVar6 & 1) != 0) {
            IVar7 = mutableCopy(param_3);
            self = mutableCopy(param_4);
            removeObjectForKey_(IVar7,*(undefined8 *)puVar1);
            removeObjectForKey_(self,*(undefined8 *)puVar1);
            puVar1 = PTR__NSFontAttributeName;
            removeObjectForKey_(IVar7,_NSFontAttributeName);
            removeObjectForKey_(self,*(undefined8 *)puVar1);
            IVar7 = isEqualToDictionary_(IVar7,self);
            if (((int)IVar7 != 0) &&
               (IVar3 = isAttachment_equalToAttachment_(param_1,IVar3,IVar4),
               (IVar3 & 1) != 0)) goto LAB_00016884;
          }
        }
      }
    }
    IVar3 = ignoreColorInCodeBlocks(param_1);
    puVar1 = PTR__NSAttachmentAttributeName;
    if ((int)IVar3 != 0) {
      IVar3 = objectForKeyedSubscript_
                        (param_3,_NSAttachmentAttributeName);
      if ((IVar3 == 0) &&
         (IVar3 = objectForKeyedSubscript_(param_4,*(undefined8 *)puVar1), IVar3 == 0)) {
        uVar5 = _PMKFencedCodeAttributeName;
        IVar3 = objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 == 0) || (IVar3 = objectForKeyedSubscript_(param_4,uVar5), IVar3 == 0)
           ) goto LAB_00016a40;
        uVar5 = _PMKFencedCodeMarkerAttributeName;
        IVar3 = objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 != 0) || (IVar3 = objectForKeyedSubscript_(param_4,uVar5), IVar3 != 0)
           ) goto LAB_00016a40;
        uVar5 = _PMKFencedCodeLanguageAttributeName;
        IVar3 = objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 != 0) || (IVar3 = objectForKeyedSubscript_(param_4,uVar5), IVar3 != 0)
           ) goto LAB_00016a40;
      }
      else {
LAB_00016a40:
        uVar5 = _PMKHTMLInlineAttributeName;
        IVar3 = objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 == 0) || (IVar3 = objectForKeyedSubscript_(param_4,uVar5), IVar3 == 0)
           ) {
          uVar5 = _PMKHTMLBlockAttributeName;
          IVar3 = objectForKeyedSubscript_(param_3,uVar5);
          if ((IVar3 == 0) ||
             (IVar3 = objectForKeyedSubscript_(param_4,uVar5), IVar3 == 0)) {
            uVar5 = _PMKMathSpanAttributeName;
            IVar3 = objectForKeyedSubscript_(param_3,uVar5);
            if (IVar3 == 0) {
              bVar2 = false;
            }
            else {
              IVar3 = objectForKeyedSubscript_(param_4,uVar5);
              puVar1 = PTR__NSAttachmentAttributeName;
              if (IVar3 == 0) {
                bVar2 = false;
              }
              else {
                IVar3 = objectForKeyedSubscript_
                                  (param_3,_NSAttachmentAttributeName);
                if (IVar3 == 0) {
                  bVar2 = true;
                }
                else {
                  IVar3 = objectForKeyedSubscript_(param_3,*(undefined8 *)puVar1);
                  bVar2 = IVar3 == 0;
                }
              }
            }
          }
          else {
            bVar2 = true;
          }
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_00016e6c;
      }
      puVar1 = PTR__NSFontAttributeName;
      IVar3 = objectForKeyedSubscript_
                        (param_3,_NSFontAttributeName);
      IVar4 = objectForKeyedSubscript_(param_4,*(undefined8 *)puVar1);
      IVar3 = isEqual_(IVar3,IVar4);
      if ((int)IVar3 != 0) {
        IVar3 = objectForKeyedSubscript_(param_3,&cf_MDSyntaxHighlightLanguage);
        if ((IVar3 != 0) ||
           (IVar3 = objectForKeyedSubscript_(param_4,&cf_MDSyntaxHighlightLanguage),
           IVar3 != 0)) {
          IVar3 = objectForKeyedSubscript_(param_3,&cf_MDSyntaxHighlightLanguage);
          IVar4 = objectForKeyedSubscript_(param_4,&cf_MDSyntaxHighlightLanguage);
          IVar3 = isEqual_(IVar3,IVar4);
          return (bool)IVar3;
        }
        goto LAB_00016884;
      }
    }
LAB_00016e6c:
    bVar8 = 0;
  }
  else {
LAB_00016884:
    bVar8 = 1;
  }
  return bVar8;
}

// ===== MDAttributedStringDiffer::isAttachment:equalToAttachment: @ 00016fd4 =====

bool MDAttributedStringDiffer::isAttachment_equalToAttachment_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar1 = isMath(param_3);
  if ((((int)IVar1 == 0) || (IVar1 = isMath(param_4), (int)IVar1 == 0)) &&
     ((IVar1 = isMermaid(param_3), (int)IVar1 == 0 ||
      (IVar1 = isMermaid(param_4), (int)IVar1 == 0)))) {
    IVar1 = isViewAttachment(param_3);
    if (((int)IVar1 != 0) && (IVar1 = isViewAttachment(param_4), (int)IVar1 != 0)) {
      IVar1 = representedText(param_3);
      IVar2 = representedText(param_4);
      IVar1 = isEqualToString_(IVar1,IVar2);
      return (bool)IVar1;
    }
    IVar1 = representedText(param_3);
    IVar2 = representedText(param_4);
    IVar1 = isEqualToString_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      attachmentBaselineOffset(param_3);
      attachmentBaselineOffset(param_4);
      return (uint)(extraout_d0 == extraout_d0_00);
    }
  }
  else {
    IVar1 = font(param_3);
    IVar2 = font(param_4);
    if (IVar1 == IVar2) {
      IVar1 = textColor(param_3);
      IVar2 = textColor(param_4);
      if (IVar1 != IVar2) {
        return 0;
      }
      IVar1 = backgroundColor(param_3);
      IVar2 = backgroundColor(param_4);
      return (uint)(IVar1 == IVar2);
    }
  }
  return 0;
}

// ===== MDAttributedStringDiffer::setAttributesPreservingViewAttachments:range:inAttributedString: @ 000171e0 =====

void MDAttributedStringDiffer::setAttributesPreservingViewAttachments_range_inAttributedString_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  
  puVar1 = PTR__NSAttachmentAttributeName;
  uVar7 = param_4.field1_0x8;
  uVar6 = param_4.field0_0x0;
  IVar2 = objectForKeyedSubscript_
                    (param_3,_NSAttachmentAttributeName);
  self = attribute_atIndex_effectiveRange_(param_5,*(undefined8 *)puVar1,uVar6,0);
  if (IVar2 != 0) {
    uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachmentView);
    uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
    if (((uVar4 & 1) != 0) && (self != 0)) {
      uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachmentView);
      uVar4 = _objc_opt_isKindOfClass(self,uVar3);
      if (((uVar4 & 1) != 0) &&
         (IVar5 = isAttachment_equalToAttachment_(param_1,IVar2,self), (int)IVar5 != 0))
      {
        IVar5 = mutableCopy(param_3);
        setObject_forKeyedSubscript_(IVar5,self,*(undefined8 *)puVar1);
        setAttributes_range_(param_5,IVar5,uVar6,uVar7);
        IVar5 = isMath(IVar2);
        if (((int)IVar5 != 0) && (IVar5 = isMath(self), (int)IVar5 != 0)) {
          IVar5 = mathString(IVar2);
          setMathString_(self,IVar5);
        }
        IVar5 = isMermaid(IVar2);
        if ((int)IVar5 == 0) {
          return;
        }
        IVar5 = isMermaid(self);
        if ((int)IVar5 == 0) {
          return;
        }
        IVar2 = mermaidCode(IVar2);
        setMermaidCode_(self,IVar2);
        return;
      }
    }
  }
  IVar2 = objectForKeyedSubscript_(param_3,&cf_MDAsyncStylingIdentifier);
  if (IVar2 == 0) {
    setAttributes_range_(param_5,param_3,uVar6,uVar7);
  }
  else {
    IVar2 = dictionary(NSMutableDictionary);
    puVar1 = PTR___NSConcreteStackBlock;
    local_88 = 
    ___92__MDAttributedStringDiffer_setAttributesPreservingViewAttachments_range_inAttributedString___block_invoke
    local_78 = IVar2;
    enumerateAttribute_inRange_options_usingBlock_
              (param_5,_NSForegroundColorAttributeName,uVar6,uVar7,0,
               &local_98);
    setAttributes_range_(param_5,param_3,uVar6,uVar7);
    local_b0 = 
    ___92__MDAttributedStringDiffer_setAttributesPreservingViewAttachments_range_inAttributedString___block_invoke_6
    local_a0 = param_5;
    enumerateKeysAndObjectsUsingBlock_(IVar2,&local_c0);
  }
  return;
}

// ===== MDAttributedStringDiffer::ignoreAttachments @ 000175b0 =====

bool MDAttributedStringDiffer::ignoreAttachments(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

// ===== MDAttributedStringDiffer::setIgnoreAttachments: @ 000175bc =====

void MDAttributedStringDiffer::setIgnoreAttachments_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}

// ===== MDAttributedStringDiffer::ignoreColorInCodeBlocks @ 000175c4 =====

bool MDAttributedStringDiffer::ignoreColorInCodeBlocks(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

// ===== MDAttributedStringDiffer::setIgnoreColorInCodeBlocks: @ 000175d0 =====

void MDAttributedStringDiffer::setIgnoreColorInCodeBlocks_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}

