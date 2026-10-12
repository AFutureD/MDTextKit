// ===== MDUnderlineTextStyler::init @ 0002d070 =====

ID MDUnderlineTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDUnderlineTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setUnderlineColor_(self,IVar1);
  }
  return self;
}

// ===== MDUnderlineTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002d0e4 =====

void MDUnderlineTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_50 = 
  ___76__MDUnderlineTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_40 = param_3;
  IStack_38 = param_1;
  enumerateUnderlineInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}

// ===== MDUnderlineTextStyler::underlineColor @ 0002d2b0 =====

ID MDUnderlineTextStyler::underlineColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_underlineColor);
}

// ===== MDUnderlineTextStyler::setUnderlineColor: @ 0002d2c0 =====

void MDUnderlineTextStyler::setUnderlineColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_underlineColor) = param_3;
  return;
}

// ===== MDUnderlineTextStyler::.cxx_destruct @ 0002d2cc =====

void MDUnderlineTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_underlineColor) = 0;
  return;
}

