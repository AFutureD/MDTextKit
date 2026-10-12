// ===== MDArrowTextStyler::init @ 000313cc =====

ID MDArrowTextStyler::init(ID param_1,SEL param_2)

{
  
  local_20.super_class = &objc::class_t::MDArrowTextStyler;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  return IVar1;
}

// ===== MDArrowTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00031400 =====

void MDArrowTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___72__MDArrowTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_5;
  enumerateArrowInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDArrowTextStyler::attachmentForArrowRange:inAttributedString: @ 00031574 =====

ID MDArrowTextStyler::attachmentForArrowRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar3 = param_3.field0_0x0;
  IVar1 = _objc_alloc(&objc::class_t::MDArrowTextAttachment);
  IVar2 = attributedSubstringFromRange_(param_4,uVar3,param_3.field1_0x8);
  IVar1 = initWithRepresentedAttributedText_(IVar1,IVar2);
  IVar2 = fontAtIndex_(param_4,uVar3);
  pointSize(IVar2);
  dVar5 = extraout_d0 * 0.8;
  setAttachmentSize_(IVar1,dVar5 + 0.0,dVar5);
  uVar4 = 0;
  setDrawingRect_(IVar1,0,0,dVar5,dVar5);
  basePointSize(IVar2);
  setLineThickness_(IVar1,extraout_d0_00 + extraout_d0_00);
  IVar2 = baseTextColor(param_1);
  setBaseTextColor_(IVar1,IVar2);
  attachmentSize(IVar1);
  baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_4,uVar4,uVar3);
  setAttachmentBaselineOffset_(IVar1,extraout_d0_01);
  updateAttachmentImage(IVar1);
  return IVar1;
}

