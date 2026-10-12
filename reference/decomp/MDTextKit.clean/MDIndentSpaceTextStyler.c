// ===== MDIndentSpaceTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000b56c =====

void MDIndentSpaceTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_68 = 
  ___78__MDIndentSpaceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_58 = param_1;
  local_50 = param_3;
  local_48 = param_5;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,_PMKIndentSpaceAttributeName,param_4->field0_0x0,
             param_4->field1_0x8,0,&local_78);
  return;
}

// ===== MDIndentSpaceTextStyler::attachmentForRange:inAttributedString:tabSize:paragraphIndent:fontSize: @ 0000b760 =====

ID MDIndentSpaceTextStyler::attachmentForRange_inAttributedString_tabSize_paragraphIndent_fontSize_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,double param_5,double param_6,
             double param_7)

{
  
  uVar5 = param_3.field0_0x0;
  IVar1 = _objc_alloc(&objc::class_t::MDIndentSpaceTextAttachment);
  IVar2 = attributedSubstringFromRange_(param_4,uVar5,param_3.field1_0x8);
  IVar1 = initWithRepresentedAttributedText_(IVar1,IVar2);
  IVar2 = listOrBlockquoteItemInfoAtIndex_(param_4,uVar5 + param_3.field1_0x8);
  IVar3 = attribute_atIndex_effectiveRange_
                    (param_4,_PMKIndentSpaceAttributeName,uVar5,0);
  IVar3 = intValue(IVar3);
  IVar4 = isOrderedList(IVar2);
  dVar6 = 0.0;
  if ((int)IVar4 != 0) {
    IVar4 = paragraphStyleAtIndex_(param_4,uVar5);
    headIndent(IVar4);
    IVar2 = listLevel(IVar2);
    dVar6 = ((extraout_d0 - param_5) - param_6) - (double)IVar2 * param_5;
  }
  setAttachmentSize_(IVar1,dVar6 + (double)(ulong)(long)(int)IVar3 * param_5,param_7);
  updateAttachmentImage(IVar1);
  return IVar1;
}

// ===== MDIndentSpaceTextStyler::attachmentForRange:inAttributedString: @ 0000b8cc =====

ID MDIndentSpaceTextStyler::attachmentForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = _objc_opt_class(param_1);
  baseTabSize(param_1);
  defaultParagraphIndent(param_1);
  baseFontSize(param_1);
  IVar1 = attachmentForRange_inAttributedString_tabSize_paragraphIndent_fontSize_
                    (IVar1,extraout_d0,extraout_d0_00,extraout_d0_01,param_3.field0_0x0,
                     param_3.field1_0x8,param_4);
  return IVar1;
}

