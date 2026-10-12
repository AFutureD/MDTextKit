// ===== MDIndentedCodeTextStyler::init @ 0002b3fc =====

ID MDIndentedCodeTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDIndentedCodeTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setTextAttributes_(self,PTR____NSDictionary0__struct);
  }
  return self;
}

// ===== MDIndentedCodeTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002b454 =====

void MDIndentedCodeTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_50 = 
  ___79__MDIndentedCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_40 = param_3;
  IStack_38 = param_1;
  enumerateIndentedCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}

// ===== MDIndentedCodeTextStyler::textAttributes @ 0002b540 =====

ID MDIndentedCodeTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}

// ===== MDIndentedCodeTextStyler::setTextAttributes: @ 0002b550 =====

void MDIndentedCodeTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}

// ===== MDIndentedCodeTextStyler::.cxx_destruct @ 0002b55c =====

void MDIndentedCodeTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}

