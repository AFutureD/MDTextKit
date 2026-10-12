// ===== MDLinkTextAttachment::drawAttachmentInRect: @ 00030e10 =====

void MDLinkTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  IVar1 = color(param_1);
  drawLinkIconWithFrame_fillColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,(long)param_3.field0_0x0.field0_0x0,
             (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
             (long)param_3.field1_0x10.field1_0x8,IVar1);
  return;
}

// ===== MDLinkTextAttachment::url @ 00030e7c =====

ID MDLinkTextAttachment::url(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar2 = representedAttributedText(param_1);
  IVar2 = length(IVar2);
  local_80 = ___27__MDLinkTextAttachment_url__block_invoke;
  local_70 = param_1;
  enumerateAttribute_inRange_options_usingBlock_
            (IVar1,_PMKLinkURLAttributeName,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}

// ===== MDLinkTextAttachment::title @ 0003104c =====

ID MDLinkTextAttachment::title(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar2 = representedAttributedText(param_1);
  IVar2 = length(IVar2);
  local_80 = ___29__MDLinkTextAttachment_title__block_invoke;
  local_70 = param_1;
  enumerateAttribute_inRange_options_usingBlock_
            (IVar1,_PMKLinkTitleAttributeName,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}

// ===== MDLinkTextAttachment::decodeWithCoder: @ 00031204 =====

void MDLinkTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDLinkTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_color);
  setColor_(param_1,IVar1);
  return;
}

// ===== MDLinkTextAttachment::encodeWithCoder: @ 00031298 =====

void MDLinkTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDLinkTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = color(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_color);
  return;
}

// ===== MDLinkTextAttachment::copyWithZone: @ 0003132c =====

ID MDLinkTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDLinkTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = color(param_1);
  setColor_(self,IVar1);
  return self;
}

// ===== MDLinkTextAttachment::color @ 0003139c =====

ID MDLinkTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}

// ===== MDLinkTextAttachment::setColor: @ 000313ac =====

void MDLinkTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}

// ===== MDLinkTextAttachment::.cxx_destruct @ 000313b8 =====

void MDLinkTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}

