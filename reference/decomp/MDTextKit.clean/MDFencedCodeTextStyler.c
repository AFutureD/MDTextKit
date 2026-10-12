// ===== MDFencedCodeTextStyler::init @ 00027714 =====

ID MDFencedCodeTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDFencedCodeTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setTextAttributes_(self,PTR____NSDictionary0__struct);
    IVar1 = blackColor(NSColor);
    setLanguageColor_(self,IVar1);
  }
  return self;
}

// ===== MDFencedCodeTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00027798 =====

void MDFencedCodeTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_50 = 
  ___77__MDFencedCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_40 = param_3;
  IStack_38 = param_1;
  enumerateFencedCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}

// ===== MDFencedCodeTextStyler::textAttributes @ 00028038 =====

ID MDFencedCodeTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}

// ===== MDFencedCodeTextStyler::setTextAttributes: @ 00028048 =====

void MDFencedCodeTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}

// ===== MDFencedCodeTextStyler::languageColor @ 00028054 =====

ID MDFencedCodeTextStyler::languageColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_languageColor);
}

// ===== MDFencedCodeTextStyler::setLanguageColor: @ 00028064 =====

void MDFencedCodeTextStyler::setLanguageColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_languageColor) = param_3;
  return;
}

// ===== MDFencedCodeTextStyler::.cxx_destruct @ 00028070 =====

void MDFencedCodeTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_languageColor) = 0;
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}

