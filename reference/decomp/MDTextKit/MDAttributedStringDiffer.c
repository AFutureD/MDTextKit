// ===== MDAttributedStringDiffer::diffRangebetweenAttributedString:andAttributedString:inRange:secondDiffRange: @ 00016358 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

_NSRange MDAttributedStringDiffer::
         diffRangebetweenAttributedString_andAttributedString_inRange_secondDiffRange_
                   (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5,_NSRange *param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  unsigned_long_long uVar4;
  unsigned_long_long uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  _NSRange _Var11;
  
  uVar5 = param_5.field1_0x8;
  uVar4 = param_5.field0_0x0;
  IVar1 = objc_stub::length(param_3);
  param_6->field0_0x0 = uVar4;
  param_6->field1_0x8 = uVar5;
  IVar2 = objc_stub::length(param_3);
  uVar7 = 0;
  if (IVar2 != 0) {
    do {
      IVar2 = objc_stub::length(param_3);
      if ((IVar2 <= uVar7) || (uVar10 = uVar4 + uVar7, uVar4 + uVar5 <= uVar10)) break;
      IVar2 = objc_stub::string(param_3);
      IVar2 = objc_stub::characterAtIndex_(IVar2,uVar7);
      IVar3 = objc_stub::string(param_4);
      IVar3 = objc_stub::characterAtIndex_(IVar3,uVar10);
      if ((int)IVar2 != (int)IVar3) break;
      IVar2 = objc_stub::attributesAtIndex_effectiveRange_(param_3,uVar7,0);
      IVar3 = objc_stub::attributesAtIndex_effectiveRange_(param_4,uVar10,0);
      IVar2 = objc_stub::areAttributes_equalToAttributes_(param_1,IVar2,IVar3);
      if ((int)IVar2 == 0) break;
      IVar1 = IVar1 - 1;
      uVar7 = uVar7 + 1;
      param_6->field1_0x8 = param_6->field1_0x8 - 1;
      param_6->field0_0x0 = param_6->field0_0x0 + 1;
      IVar2 = objc_stub::length(param_3);
    } while (uVar7 < IVar2);
  }
  if (IVar1 == 0) {
    IVar1 = objc_stub::length(param_4);
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
    IVar2 = objc_stub::length(param_3);
    if (1 < IVar2) {
      lVar6 = 0;
      uVar8 = uVar4 + uVar5;
      uVar10 = 1;
      do {
        IVar2 = objc_stub::length(param_3);
        if ((IVar2 + lVar6 <= uVar7) || (uVar8 <= param_6->field0_0x0)) break;
        lVar9 = (IVar2 + lVar6) - 1;
        uVar8 = uVar8 - 1;
        IVar2 = objc_stub::string(param_3);
        IVar2 = objc_stub::characterAtIndex_(IVar2,lVar9);
        IVar3 = objc_stub::string(param_4);
        IVar3 = objc_stub::characterAtIndex_(IVar3,uVar8);
        if ((int)IVar2 != (int)IVar3) break;
        IVar2 = objc_stub::attributesAtIndex_effectiveRange_(param_3,lVar9,0);
        IVar3 = objc_stub::attributesAtIndex_effectiveRange_(param_4,uVar8,0);
        IVar2 = objc_stub::areAttributes_equalToAttributes_(param_1,IVar2,IVar3);
        if ((int)IVar2 == 0) break;
        IVar1 = IVar1 - 1;
        param_6->field1_0x8 = param_6->field1_0x8 - 1;
        uVar10 = uVar10 + 1;
        IVar2 = objc_stub::length(param_3);
        lVar6 = lVar6 + -1;
      } while (uVar10 < IVar2);
    }
  }
  _Var11.field1_0x8 = IVar1;
  _Var11.field0_0x0 = uVar7;
  return _Var11;
}


// ===== MDAttributedStringDiffer::areAttributes:equalToAttributes: @ 000166c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

bool MDAttributedStringDiffer::areAttributes_equalToAttributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ulong uVar6;
  ID IVar7;
  ID self;
  bool bVar8;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_MDOriginalAttributes);
  if ((IVar3 != 0) ||
     (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,&cf_MDOriginalAttributes), IVar3 != 0)) {
    param_3 = objc_stub::mutableCopy(param_3);
    param_4 = objc_stub::mutableCopy(param_4);
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_MDOriginalAttributes);
    puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
    local_a0 = PTR___NSConcreteStackBlock_0005ebe0;
    local_98 = 0xc2000000;
    local_90 = ___60__MDAttributedStringDiffer_areAttributes_equalToAttributes___block_invoke;
    puStack_88 = &___block_descriptor_40_e8_32s_e15_v32__0_8_16_B24l;
    local_80 = param_3;
    objc_stub::enumerateKeysAndObjectsUsingBlock_(IVar3,&local_a0);
    IVar3 = objc_stub::objectForKeyedSubscript_(param_4,&cf_MDOriginalAttributes);
    local_c8 = puVar1;
    local_c0 = 0xc2000000;
    local_b8 = ___60__MDAttributedStringDiffer_areAttributes_equalToAttributes___block_invoke_1;
    puStack_b0 = &___block_descriptor_40_e8_32s_e15_v32__0_8_16_B24l;
    local_a8 = param_4;
    objc_stub::enumerateKeysAndObjectsUsingBlock_(IVar3,&local_c8);
  }
  IVar3 = objc_stub::isEqualToDictionary_(param_3,param_4);
  if ((IVar3 & 1) == 0) {
    IVar3 = objc_stub::ignoreAttachments(param_1);
    puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::objectForKeyedSubscript_
                        (param_3,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
      IVar4 = objc_stub::objectForKeyedSubscript_(param_4,*(undefined8 *)puVar1);
      if (IVar3 != 0) {
        uVar5 = _objc_opt_class(&objc::class_t::SFTextAttachment);
        uVar6 = _objc_opt_isKindOfClass(IVar3,uVar5);
        if (((uVar6 & 1) != 0) && (IVar4 != 0)) {
          uVar5 = _objc_opt_class(&objc::class_t::SFTextAttachment);
          uVar6 = _objc_opt_isKindOfClass(IVar4,uVar5);
          if ((uVar6 & 1) != 0) {
            IVar7 = objc_stub::mutableCopy(param_3);
            self = objc_stub::mutableCopy(param_4);
            objc_stub::removeObjectForKey_(IVar7,*(undefined8 *)puVar1);
            objc_stub::removeObjectForKey_(self,*(undefined8 *)puVar1);
            puVar1 = PTR__NSFontAttributeName_0005ec48;
            objc_stub::removeObjectForKey_(IVar7,*(undefined8 *)PTR__NSFontAttributeName_0005ec48);
            objc_stub::removeObjectForKey_(self,*(undefined8 *)puVar1);
            IVar7 = objc_stub::isEqualToDictionary_(IVar7,self);
            if (((int)IVar7 != 0) &&
               (IVar3 = objc_stub::isAttachment_equalToAttachment_(param_1,IVar3,IVar4),
               (IVar3 & 1) != 0)) goto LAB_00016884;
          }
        }
      }
    }
    IVar3 = objc_stub::ignoreColorInCodeBlocks(param_1);
    puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::objectForKeyedSubscript_
                        (param_3,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
      if ((IVar3 == 0) &&
         (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,*(undefined8 *)puVar1), IVar3 == 0)) {
        uVar5 = *(undefined8 *)PTR__PMKFencedCodeAttributeName_0005e8e8;
        IVar3 = objc_stub::objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 == 0) || (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,uVar5), IVar3 == 0)
           ) goto LAB_00016a40;
        uVar5 = *(undefined8 *)PTR__PMKFencedCodeMarkerAttributeName_0005e8f8;
        IVar3 = objc_stub::objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 != 0) || (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,uVar5), IVar3 != 0)
           ) goto LAB_00016a40;
        uVar5 = *(undefined8 *)PTR__PMKFencedCodeLanguageAttributeName_0005e8f0;
        IVar3 = objc_stub::objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 != 0) || (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,uVar5), IVar3 != 0)
           ) goto LAB_00016a40;
      }
      else {
LAB_00016a40:
        uVar5 = *(undefined8 *)PTR__PMKHTMLInlineAttributeName_0005e938;
        IVar3 = objc_stub::objectForKeyedSubscript_(param_3,uVar5);
        if ((IVar3 == 0) || (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,uVar5), IVar3 == 0)
           ) {
          uVar5 = *(undefined8 *)PTR__PMKHTMLBlockAttributeName_0005e928;
          IVar3 = objc_stub::objectForKeyedSubscript_(param_3,uVar5);
          if ((IVar3 == 0) ||
             (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,uVar5), IVar3 == 0)) {
            uVar5 = *(undefined8 *)PTR__PMKMathSpanAttributeName_0005ea00;
            IVar3 = objc_stub::objectForKeyedSubscript_(param_3,uVar5);
            if (IVar3 == 0) {
              bVar2 = false;
            }
            else {
              IVar3 = objc_stub::objectForKeyedSubscript_(param_4,uVar5);
              puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
              if (IVar3 == 0) {
                bVar2 = false;
              }
              else {
                IVar3 = objc_stub::objectForKeyedSubscript_
                                  (param_3,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
                if (IVar3 == 0) {
                  bVar2 = true;
                }
                else {
                  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,*(undefined8 *)puVar1);
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
      puVar1 = PTR__NSFontAttributeName_0005ec48;
      IVar3 = objc_stub::objectForKeyedSubscript_
                        (param_3,*(undefined8 *)PTR__NSFontAttributeName_0005ec48);
      IVar4 = objc_stub::objectForKeyedSubscript_(param_4,*(undefined8 *)puVar1);
      IVar3 = objc_stub::isEqual_(IVar3,IVar4);
      if ((int)IVar3 != 0) {
        IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_MDSyntaxHighlightLanguage);
        if ((IVar3 != 0) ||
           (IVar3 = objc_stub::objectForKeyedSubscript_(param_4,&cf_MDSyntaxHighlightLanguage),
           IVar3 != 0)) {
          IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_MDSyntaxHighlightLanguage);
          IVar4 = objc_stub::objectForKeyedSubscript_(param_4,&cf_MDSyntaxHighlightLanguage);
          IVar3 = objc_stub::isEqual_(IVar3,IVar4);
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

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

bool MDAttributedStringDiffer::isAttachment_equalToAttachment_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  double extraout_d0;
  double extraout_d0_00;
  
  IVar1 = objc_stub::isMath(param_3);
  if ((((int)IVar1 == 0) || (IVar1 = objc_stub::isMath(param_4), (int)IVar1 == 0)) &&
     ((IVar1 = objc_stub::isMermaid(param_3), (int)IVar1 == 0 ||
      (IVar1 = objc_stub::isMermaid(param_4), (int)IVar1 == 0)))) {
    IVar1 = objc_stub::isViewAttachment(param_3);
    if (((int)IVar1 != 0) && (IVar1 = objc_stub::isViewAttachment(param_4), (int)IVar1 != 0)) {
      IVar1 = objc_stub::representedText(param_3);
      IVar2 = objc_stub::representedText(param_4);
      IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
      return (bool)IVar1;
    }
    IVar1 = objc_stub::representedText(param_3);
    IVar2 = objc_stub::representedText(param_4);
    IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
    if ((int)IVar1 != 0) {
      objc_stub::attachmentBaselineOffset(param_3);
      objc_stub::attachmentBaselineOffset(param_4);
      return (uint)(extraout_d0 == extraout_d0_00);
    }
  }
  else {
    IVar1 = objc_stub::font(param_3);
    IVar2 = objc_stub::font(param_4);
    if (IVar1 == IVar2) {
      IVar1 = objc_stub::textColor(param_3);
      IVar2 = objc_stub::textColor(param_4);
      if (IVar1 != IVar2) {
        return 0;
      }
      IVar1 = objc_stub::backgroundColor(param_3);
      IVar2 = objc_stub::backgroundColor(param_4);
      return (uint)(IVar1 == IVar2);
    }
  }
  return 0;
}


// ===== MDAttributedStringDiffer::setAttributesPreservingViewAttachments:range:inAttributedString: @ 000171e0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDAttributedStringDiffer::setAttributesPreservingViewAttachments_range_inAttributedString_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID self;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  unsigned_long_long uVar6;
  unsigned_long_long uVar7;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  
  puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
  uVar7 = param_4.field1_0x8;
  uVar6 = param_4.field0_0x0;
  IVar2 = objc_stub::objectForKeyedSubscript_
                    (param_3,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
  self = objc_stub::attribute_atIndex_effectiveRange_(param_5,*(undefined8 *)puVar1,uVar6,0);
  if (IVar2 != 0) {
    uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachmentView);
    uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
    if (((uVar4 & 1) != 0) && (self != 0)) {
      uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachmentView);
      uVar4 = _objc_opt_isKindOfClass(self,uVar3);
      if (((uVar4 & 1) != 0) &&
         (IVar5 = objc_stub::isAttachment_equalToAttachment_(param_1,IVar2,self), (int)IVar5 != 0))
      {
        IVar5 = objc_stub::mutableCopy(param_3);
        objc_stub::setObject_forKeyedSubscript_(IVar5,self,*(undefined8 *)puVar1);
        objc_stub::setAttributes_range_(param_5,IVar5,uVar6,uVar7);
        IVar5 = objc_stub::isMath(IVar2);
        if (((int)IVar5 != 0) && (IVar5 = objc_stub::isMath(self), (int)IVar5 != 0)) {
          IVar5 = objc_stub::mathString(IVar2);
          objc_stub::setMathString_(self,IVar5);
        }
        IVar5 = objc_stub::isMermaid(IVar2);
        if ((int)IVar5 == 0) {
          return;
        }
        IVar5 = objc_stub::isMermaid(self);
        if ((int)IVar5 == 0) {
          return;
        }
        IVar2 = objc_stub::mermaidCode(IVar2);
        objc_stub::setMermaidCode_(self,IVar2);
        return;
      }
    }
  }
  IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_MDAsyncStylingIdentifier);
  if (IVar2 == 0) {
    objc_stub::setAttributes_range_(param_5,param_3,uVar6,uVar7);
  }
  else {
    IVar2 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
    local_98 = PTR___NSConcreteStackBlock_0005ebe0;
    local_90 = 0xc2000000;
    local_88 = 
    ___92__MDAttributedStringDiffer_setAttributesPreservingViewAttachments_range_inAttributedString___block_invoke
    ;
    puStack_80 = &___block_descriptor_40_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
    local_78 = IVar2;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (param_5,*(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80,uVar6,uVar7,0,
               &local_98);
    objc_stub::setAttributes_range_(param_5,param_3,uVar6,uVar7);
    local_c0 = puVar1;
    local_b8 = 0xc2000000;
    local_b0 = 
    ___92__MDAttributedStringDiffer_setAttributesPreservingViewAttachments_range_inAttributedString___block_invoke_6
    ;
    puStack_a8 = &___block_descriptor_40_e8_32s_e33_v32__0__NSValue_8__NSColor_16_B24l;
    local_a0 = param_5;
    objc_stub::enumerateKeysAndObjectsUsingBlock_(IVar2,&local_c0);
  }
  return;
}


// ===== MDAttributedStringDiffer::ignoreAttachments @ 000175b0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDAttributedStringDiffer::ignoreAttachments(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


// ===== MDAttributedStringDiffer::setIgnoreAttachments: @ 000175bc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDAttributedStringDiffer::setIgnoreAttachments_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}


// ===== MDAttributedStringDiffer::ignoreColorInCodeBlocks @ 000175c4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDAttributedStringDiffer::ignoreColorInCodeBlocks(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}


// ===== MDAttributedStringDiffer::setIgnoreColorInCodeBlocks: @ 000175d0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDAttributedStringDiffer::setIgnoreColorInCodeBlocks_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}


