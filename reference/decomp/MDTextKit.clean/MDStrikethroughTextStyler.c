// ===== MDStrikethroughTextStyler::init @ 000033d0 =====

ID MDStrikethroughTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDStrikethroughTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setTextColor_(self,IVar1);
  }
  return self;
}

// ===== MDStrikethroughTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00003444 =====

void MDStrikethroughTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_50 = 
  ___80__MDStrikethroughTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
  local_40 = param_3;
  IStack_38 = param_1;
  enumerateStrikethroughInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}

// ===== MDStrikethroughTextStyler::textColor @ 00003610 =====

ID MDStrikethroughTextStyler::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}

// ===== MDStrikethroughTextStyler::setTextColor: @ 00003620 =====

void MDStrikethroughTextStyler::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}

// ===== MDStrikethroughTextStyler::.cxx_destruct @ 0000362c =====

void MDStrikethroughTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  return;
}

