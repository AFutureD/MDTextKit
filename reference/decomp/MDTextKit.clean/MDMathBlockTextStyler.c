// ===== MDMathBlockTextStyler::init @ 000251ac =====

ID MDMathBlockTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDMathBlockTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setTextAttributes_(self,PTR____NSDictionary0__struct);
  }
  return self;
}

// ===== MDMathBlockTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00025204 =====

void MDMathBlockTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___76__MDMathBlockTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateMathBlockInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDMathBlockTextStyler::textAttributes @ 00025c28 =====

ID MDMathBlockTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}

// ===== MDMathBlockTextStyler::setTextAttributes: @ 00025c38 =====

void MDMathBlockTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}

// ===== MDMathBlockTextStyler::.cxx_destruct @ 00025c44 =====

void MDMathBlockTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}

