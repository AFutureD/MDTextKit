// ===== MDHardLineBreakTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0001f3d8 =====

void MDHardLineBreakTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___80__MDHardLineBreakTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_5;
  enumerateHardLinebreakInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDHardLineBreakTextStyler::attachmentForRange:inAttributedString: @ 0001f54c =====

ID MDHardLineBreakTextStyler::attachmentForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar3 = param_3.field0_0x0;
  IVar1 = _objc_alloc(&objc::class_t::MDHardLineBreakTextAttachment);
  IVar2 = attributedSubstringFromRange_(param_4,uVar3,param_3.field1_0x8);
  IVar1 = initWithRepresentedAttributedText_(IVar1,IVar2);
  IVar2 = fontAtIndex_(param_4,uVar3);
  pointSize(IVar2);
  pointSize(IVar2);
  dVar5 = (double)(long)extraout_d0;
  setAttachmentSize_
            (IVar1,(double)((long)(extraout_d0_00 * 0.4) + (long)extraout_d0),dVar5);
  uVar4 = 0;
  setDrawingRect_(IVar1,(double)(long)(extraout_d0_00 * 0.4) / 2.0,0,dVar5,dVar5);
  IVar2 = baseTextColor(param_1);
  setArrowColor_(IVar1,IVar2);
  attachmentSize(IVar1);
  baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_4,uVar4,uVar3);
  setAttachmentBaselineOffset_(IVar1,extraout_d0_01);
  updateAttachmentImage(IVar1);
  return IVar1;
}

