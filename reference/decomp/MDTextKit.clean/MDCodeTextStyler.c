// ===== MDCodeTextStyler::init @ 0001efd8 =====

ID MDCodeTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDCodeTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setTextAttributes_(self,PTR____NSDictionary0__struct);
    IVar1 = systemFontOfSize_(NSFont,0x402c000000000000);
    setCodeFont_(self,IVar1);
  }
  return self;
}

// ===== MDCodeTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0001f060 =====

void MDCodeTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___71__MDCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDCodeTextStyler::textAttributes @ 0001f340 =====

ID MDCodeTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}

// ===== MDCodeTextStyler::setTextAttributes: @ 0001f350 =====

void MDCodeTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}

// ===== MDCodeTextStyler::codeFont @ 0001f35c =====

ID MDCodeTextStyler::codeFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_codeFont);
}

// ===== MDCodeTextStyler::setCodeFont: @ 0001f36c =====

void MDCodeTextStyler::setCodeFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_codeFont) = param_3;
  return;
}

// ===== MDCodeTextStyler::fontSizeMultiplier @ 0001f378 =====

double MDCodeTextStyler::fontSizeMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_fontSizeMultiplier);
}

// ===== MDCodeTextStyler::setFontSizeMultiplier: @ 0001f388 =====

void MDCodeTextStyler::setFontSizeMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_fontSizeMultiplier) = param_3;
  return;
}

// ===== MDCodeTextStyler::.cxx_destruct @ 0001f398 =====

void MDCodeTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_codeFont) = 0;
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}

