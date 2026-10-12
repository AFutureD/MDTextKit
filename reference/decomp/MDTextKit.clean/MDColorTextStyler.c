// ===== MDColorTextStyler::init @ 0003a404 =====

ID MDColorTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDColorTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = systemFontOfSize_(NSFont,0x402c000000000000);
    setCodeFont_(self,IVar1);
    setFontSizeMultiplier_(self,0x3ff0000000000000);
  }
  return self;
}

// ===== MDColorTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0003a488 =====

void MDColorTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___72__MDColorTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateColorInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDColorTextStyler::attachmentForColorRange:inAttributedString:color:fontSize:borderWidth: @ 0003a7d8 =====

ID MDColorTextStyler::attachmentForColorRange_inAttributedString_color_fontSize_borderWidth_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,double param_6,
             double param_7)

{
  
  IVar1 = _objc_alloc(&objc::class_t::MDColorTextAttachment,param_2,param_3.field0_0x0,
                      param_3.field1_0x8);
  IVar2 = _objc_alloc(NSAttributedString);
  IVar2 = initWithString_(IVar2,&cf___);
  IVar1 = initWithRepresentedAttributedText_(IVar1,IVar2);
  dVar4 = param_6 * 1.1;
  setAttachmentSize_(IVar1,dVar4 + dVar4 * 0.2,dVar4);
  uVar3 = 0;
  setDrawingRect_(IVar1,dVar4 * 0.2 * 0.5,0,dVar4,dVar4);
  setBorderWidth_(IVar1,param_7);
  setColor_(IVar1,param_5);
  attachmentSize(IVar1);
  baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_4,uVar3,param_3.field0_0x0);
  setAttachmentBaselineOffset_(IVar1,extraout_d0);
  updateAttachmentImage(IVar1);
  return IVar1;
}

// ===== MDColorTextStyler::codeFont @ 0003a920 =====

ID MDColorTextStyler::codeFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_codeFont);
}

// ===== MDColorTextStyler::setCodeFont: @ 0003a930 =====

void MDColorTextStyler::setCodeFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_codeFont) = param_3;
  return;
}

// ===== MDColorTextStyler::fontSizeMultiplier @ 0003a93c =====

double MDColorTextStyler::fontSizeMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_fontSizeMultiplier);
}

// ===== MDColorTextStyler::setFontSizeMultiplier: @ 0003a94c =====

void MDColorTextStyler::setFontSizeMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_fontSizeMultiplier) = param_3;
  return;
}

// ===== MDColorTextStyler::.cxx_destruct @ 0003a95c =====

void MDColorTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_codeFont) = 0;
  return;
}

