// ===== MDFootnoteTextStyler::init @ 0002bac0 =====

ID MDFootnoteTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDFootnoteTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setLinkColor_(self,IVar1);
  }
  return self;
}

// ===== MDFootnoteTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002bb34 =====

void MDFootnoteTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_50 = 
  ___75__MDFootnoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_40 = param_3;
  IStack_38 = param_1;
  enumerateFootnotesInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}

// ===== MDFootnoteTextStyler::linkColor @ 0002bee4 =====

ID MDFootnoteTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}

// ===== MDFootnoteTextStyler::setLinkColor: @ 0002bef4 =====

void MDFootnoteTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}

// ===== MDFootnoteTextStyler::.cxx_destruct @ 0002bf00 =====

void MDFootnoteTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}

