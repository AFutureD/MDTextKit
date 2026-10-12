// ===== MDHTMLTextStyler::init @ 0000cc54 =====

ID MDHTMLTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDHTMLTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = systemFontOfSize_(NSFont,0x402c000000000000);
    setCodeFont_(self,IVar1);
    IVar1 = blackColor(NSColor);
    setEntityColor_(self,IVar1);
  }
  return self;
}

// ===== MDHTMLTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000ccf8 =====

void MDHTMLTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  puVar1 = PTR___NSConcreteStackBlock;
  local_70 = 
  ___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_60 = param_3;
  IStack_58 = param_1;
  enumerateHTMLInlineInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_80);
  local_a0 = 
  ___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
  local_90 = param_3;
  IStack_88 = param_1;
  enumerateHTMLBlockInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_b0);
  local_d0 = 
  ___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
  local_c0 = param_3;
  IStack_b8 = param_1;
  enumerateHTMLEntitiesInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_e0);
  return;
}

// ===== MDHTMLTextStyler::codeFont @ 0000d0b0 =====

ID MDHTMLTextStyler::codeFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_codeFont);
}

// ===== MDHTMLTextStyler::setCodeFont: @ 0000d0c0 =====

void MDHTMLTextStyler::setCodeFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_codeFont) = param_3;
  return;
}

// ===== MDHTMLTextStyler::fontSizeMultiplier @ 0000d0cc =====

double MDHTMLTextStyler::fontSizeMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_fontSizeMultiplier);
}

// ===== MDHTMLTextStyler::setFontSizeMultiplier: @ 0000d0dc =====

void MDHTMLTextStyler::setFontSizeMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_fontSizeMultiplier) = param_3;
  return;
}

// ===== MDHTMLTextStyler::entityColor @ 0000d0ec =====

ID MDHTMLTextStyler::entityColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_entityColor);
}

// ===== MDHTMLTextStyler::setEntityColor: @ 0000d0fc =====

void MDHTMLTextStyler::setEntityColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_entityColor) = param_3;
  return;
}

// ===== MDHTMLTextStyler::.cxx_destruct @ 0000d108 =====

void MDHTMLTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_entityColor) = 0;
  *(undefined8 *)(param_1 + (long)_codeFont) = 0;
  return;
}

