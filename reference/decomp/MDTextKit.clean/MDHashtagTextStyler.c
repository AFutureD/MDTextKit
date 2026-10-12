// ===== MDHashtagTextStyler::init @ 00012318 =====

ID MDHashtagTextStyler::init(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::MDHashtagTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setHashColor_(self,IVar1);
    IVar1 = blackColor(NSColor);
    setTextColor_(self,IVar1);
    IVar1 = blackColor(NSColor);
    setBackgroundColor_(self,IVar1);
  }
  return self;
}

// ===== MDHashtagTextStyler::styleTextInAttributedString:range:replacementBlock: @ 000123e4 =====

void MDHashtagTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___74__MDHashtagTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateHashtagInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDHashtagTextStyler::backgroundColor @ 00012bc4 =====

ID MDHashtagTextStyler::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}

// ===== MDHashtagTextStyler::setBackgroundColor: @ 00012bd4 =====

void MDHashtagTextStyler::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}

// ===== MDHashtagTextStyler::textColor @ 00012be0 =====

ID MDHashtagTextStyler::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}

// ===== MDHashtagTextStyler::setTextColor: @ 00012bf0 =====

void MDHashtagTextStyler::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}

// ===== MDHashtagTextStyler::hashColor @ 00012bfc =====

ID MDHashtagTextStyler::hashColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_hashColor);
}

// ===== MDHashtagTextStyler::setHashColor: @ 00012c0c =====

void MDHashtagTextStyler::setHashColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_hashColor) = param_3;
  return;
}

// ===== MDHashtagTextStyler::tagURLBlock @ 00012c18 =====

ID MDHashtagTextStyler::tagURLBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tagURLBlock);
}

// ===== MDHashtagTextStyler::setTagURLBlock: @ 00012c28 =====

void MDHashtagTextStyler::setTagURLBlock_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_tagURLBlock) = param_3;
  return;
}

// ===== MDHashtagTextStyler::tagIconBlock @ 00012c34 =====

ID MDHashtagTextStyler::tagIconBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tagIconBlock);
}

// ===== MDHashtagTextStyler::setTagIconBlock: @ 00012c44 =====

void MDHashtagTextStyler::setTagIconBlock_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_tagIconBlock) = param_3;
  return;
}

// ===== MDHashtagTextStyler::.cxx_destruct @ 00012c50 =====

void MDHashtagTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_tagIconBlock) = 0;
  *(undefined8 *)(param_1 + (long)_tagURLBlock) = 0;
  *(undefined8 *)(param_1 + (long)_hashColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  return;
}

