// ===== MDHighlighterTextStyler::init @ 0000bd4c =====

ID MDHighlighterTextStyler::init(ID param_1,SEL param_2)

{
  
  local_d8.super_class = &objc::class_t::MDHighlighterTextStyler;
  local_d8.receiver = param_1;
  self = _objc_msgSendSuper2(&local_d8,"init");
  if (self != 0) {
    local_98 = blackColor(NSColor);
    local_90 = blackColor(NSColor);
    local_88 = blackColor(NSColor);
    local_80 = blackColor(NSColor);
    local_78 = blackColor(NSColor);
    local_70 = blackColor(NSColor);
    IVar1 = arrayWithObjects_count_(NSArray,&local_98,6);
    setTextColors_(self,IVar1);
    local_c8 = greenColor(NSColor);
    local_c0 = greenColor(NSColor);
    local_b8 = greenColor(NSColor);
    local_b0 = greenColor(NSColor);
    local_a8 = greenColor(NSColor);
    local_a0 = greenColor(NSColor);
    IVar1 = arrayWithObjects_count_(NSArray,&local_c8,6);
    setBackgroundColors_(self,IVar1);
  }
    return self;
  }
}

// ===== MDHighlighterTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000bfc8 =====

void MDHighlighterTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_70 = 
  ___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
  local_a8 = 
  ___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4
  local_98 = param_1;
  local_90 = param_3;
  local_88 = param_5;
  local_60 = param_3;
  IStack_58 = param_1;
  enumerateHighlighterInRange_options_highlighterBlock_colorBlock_markerBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&___block_literal_global,&local_80,
             &local_b8);
  return;
}

// ===== MDHighlighterTextStyler::attachmentForRange:color:inAttributedString: @ 0000c650 =====

ID MDHighlighterTextStyler::attachmentForRange_color_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5)

{
  
  uVar3 = param_3.field0_0x0;
  IVar1 = _objc_alloc(&objc::class_t::MDHighlighterTextAttachment);
  IVar2 = attributedSubstringFromRange_(param_5,uVar3,param_3.field1_0x8);
  IVar1 = initWithRepresentedAttributedText_(IVar1,IVar2);
  IVar2 = fontAtIndex_(param_5,uVar3);
  pointSize(IVar2);
  pointSize(IVar2);
  setAttachmentSize_
            (IVar1,extraout_d0 + (double)(long)(extraout_d0_00 * 0.2),extraout_d0);
  uVar4 = 0;
  setDrawingRect_
            (IVar1,(double)(long)(extraout_d0_00 * 0.2) * 0.3,0,extraout_d0,extraout_d0);
  attachmentSize(IVar1);
  baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_5,uVar4,uVar3);
  setAttachmentBaselineOffset_(IVar1,extraout_d0_01);
  IVar2 = colorWithAlphaComponent_(param_4,0x3fe3333333333333);
  setColor_(IVar1,IVar2);
  setAccentColor_(IVar1,param_4);
  updateAttachmentImage(IVar1);
  return IVar1;
}

// ===== MDHighlighterTextStyler::backgroundColors @ 0000c7dc =====

ID MDHighlighterTextStyler::backgroundColors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColors);
}

// ===== MDHighlighterTextStyler::setBackgroundColors: @ 0000c7ec =====

void MDHighlighterTextStyler::setBackgroundColors_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColors) = param_3;
  return;
}

// ===== MDHighlighterTextStyler::textColors @ 0000c7f8 =====

ID MDHighlighterTextStyler::textColors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColors);
}

// ===== MDHighlighterTextStyler::setTextColors: @ 0000c808 =====

void MDHighlighterTextStyler::setTextColors_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColors) = param_3;
  return;
}

// ===== MDHighlighterTextStyler::.cxx_destruct @ 0000c814 =====

void MDHighlighterTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textColors) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColors) = 0;
  return;
}

