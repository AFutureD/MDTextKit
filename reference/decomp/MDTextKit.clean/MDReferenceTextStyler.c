// ===== MDReferenceTextStyler::init @ 000038c8 =====

ID MDReferenceTextStyler::init(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::MDReferenceTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setLabelColor_(self,IVar1);
    IVar1 = blackColor(NSColor);
    setLinkColor_(self,IVar1);
  }
  return self;
}

// ===== MDReferenceTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000396c =====

void MDReferenceTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  puVar1 = PTR___NSConcreteStackBlock;
  local_60 = 
  ___76__MDReferenceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_50 = param_3;
  IStack_48 = param_1;
  enumerateReferenceInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_70);
  local_90 = 
  ___76__MDReferenceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4;
  local_80 = param_3;
  IStack_78 = param_1;
  enumerateReferenceDefinitionInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_a0);
  return;
}

// ===== MDReferenceTextStyler::linkColor @ 000040d0 =====

ID MDReferenceTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}

// ===== MDReferenceTextStyler::setLinkColor: @ 000040e0 =====

void MDReferenceTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}

// ===== MDReferenceTextStyler::labelColor @ 000040ec =====

ID MDReferenceTextStyler::labelColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_labelColor);
}

// ===== MDReferenceTextStyler::setLabelColor: @ 000040fc =====

void MDReferenceTextStyler::setLabelColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_labelColor) = param_3;
  return;
}

// ===== MDReferenceTextStyler::.cxx_destruct @ 00004108 =====

void MDReferenceTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_labelColor) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}

