// ===== MDAutoLinkTextStyler::init @ 0002034c =====

ID MDAutoLinkTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDAutoLinkTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setLinkColor_(self,IVar1);
  }
  return self;
}

// ===== MDAutoLinkTextStyler::styleTextInAttributedString:range:replacementBlock: @ 000203c0 =====

void MDAutoLinkTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  puVar1 = PTR___NSConcreteStackBlock;
  local_70 = 
  ___75__MDAutoLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_60 = param_3;
  IStack_58 = param_1;
  enumerateAutoLinkURLInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_80);
  local_a0 = 
  ___75__MDAutoLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3;
  local_90 = param_3;
  IStack_88 = param_1;
  enumerateAutoLinkEmailInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_b0);
  return;
}

// ===== MDAutoLinkTextStyler::linkColor @ 000208b0 =====

ID MDAutoLinkTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}

// ===== MDAutoLinkTextStyler::setLinkColor: @ 000208c0 =====

void MDAutoLinkTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}

// ===== MDAutoLinkTextStyler::attachmentColor @ 000208cc =====

ID MDAutoLinkTextStyler::attachmentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentColor);
}

// ===== MDAutoLinkTextStyler::setAttachmentColor: @ 000208dc =====

void MDAutoLinkTextStyler::setAttachmentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentColor) = param_3;
  return;
}

// ===== MDAutoLinkTextStyler::.cxx_destruct @ 000208e8 =====

void MDAutoLinkTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_attachmentColor) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}

