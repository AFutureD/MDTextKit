// ===== MDLinkTextStyler::init @ 00014e48 =====

ID MDLinkTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDLinkTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setLinkColor_(self,IVar1);
  }
  return self;
}

// ===== MDLinkTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00014ebc =====

void MDLinkTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___71__MDLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateLinkInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,2,&local_68);
  return;
}

// ===== MDLinkTextStyler::linkColor @ 0001574c =====

ID MDLinkTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}

// ===== MDLinkTextStyler::setLinkColor: @ 0001575c =====

void MDLinkTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}

// ===== MDLinkTextStyler::attachmentColor @ 00015768 =====

ID MDLinkTextStyler::attachmentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentColor);
}

// ===== MDLinkTextStyler::setAttachmentColor: @ 00015778 =====

void MDLinkTextStyler::setAttachmentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentColor) = param_3;
  return;
}

// ===== MDLinkTextStyler::disablePreview @ 00015784 =====

bool MDLinkTextStyler::disablePreview(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_disablePreview) & 1;
}

// ===== MDLinkTextStyler::setDisablePreview: @ 00015798 =====

void MDLinkTextStyler::setDisablePreview_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_disablePreview) = (char)param_3;
  return;
}

// ===== MDLinkTextStyler::.cxx_destruct @ 000157a8 =====

void MDLinkTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_attachmentColor) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}

