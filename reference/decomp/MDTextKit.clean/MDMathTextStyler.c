// ===== MDMathTextStyler::init @ 0000d148 =====

ID MDMathTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDMathTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setTextAttributes_(self,PTR____NSDictionary0__struct);
    IVar1 = systemFontOfSize_(NSFont,0x402c000000000000);
    setCodeFont_(self,IVar1);
  }
  return self;
}

// ===== MDMathTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000d1d0 =====

void MDMathTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___71__MDMathTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateInlineMathInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDMathTextStyler::textAttributes @ 0000d76c =====

ID MDMathTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}

// ===== MDMathTextStyler::setTextAttributes: @ 0000d77c =====

void MDMathTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}

// ===== MDMathTextStyler::codeFont @ 0000d788 =====

ID MDMathTextStyler::codeFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_codeFont);
}

// ===== MDMathTextStyler::setCodeFont: @ 0000d798 =====

void MDMathTextStyler::setCodeFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_codeFont) = param_3;
  return;
}

// ===== MDMathTextStyler::fontSizeMultiplier @ 0000d7a4 =====

double MDMathTextStyler::fontSizeMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_fontSizeMultiplier);
}

// ===== MDMathTextStyler::setFontSizeMultiplier: @ 0000d7b4 =====

void MDMathTextStyler::setFontSizeMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_fontSizeMultiplier) = param_3;
  return;
}

// ===== MDMathTextStyler::.cxx_destruct @ 0000d7c4 =====

void MDMathTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_codeFont) = 0;
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}

