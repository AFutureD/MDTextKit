// ===== MDHardLineBreakTextAttachment::drawAttachmentInRect: @ 000274dc =====

void MDHardLineBreakTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  IVar1 = arrowColor(param_1);
  drawHardLineBreakWithFrame_fillColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,(long)param_3.field0_0x0.field0_0x0,
             (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
             (long)param_3.field1_0x10.field1_0x8,IVar1);
  return;
}

// ===== MDHardLineBreakTextAttachment::decodeWithCoder: @ 0002754c =====

void MDHardLineBreakTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDHardLineBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_arrowColor);
  setArrowColor_(param_1,IVar1);
  return;
}

// ===== MDHardLineBreakTextAttachment::encodeWithCoder: @ 000275e0 =====

void MDHardLineBreakTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDHardLineBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = arrowColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_arrowColor);
  return;
}

// ===== MDHardLineBreakTextAttachment::copyWithZone: @ 00027674 =====

ID MDHardLineBreakTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDHardLineBreakTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = arrowColor(param_1);
  setArrowColor_(self,IVar1);
  return self;
}

// ===== MDHardLineBreakTextAttachment::arrowColor @ 000276e4 =====

ID MDHardLineBreakTextAttachment::arrowColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_arrowColor);
}

// ===== MDHardLineBreakTextAttachment::setArrowColor: @ 000276f4 =====

void MDHardLineBreakTextAttachment::setArrowColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_arrowColor) = param_3;
  return;
}

// ===== MDHardLineBreakTextAttachment::.cxx_destruct @ 00027700 =====

void MDHardLineBreakTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_arrowColor) = 0;
  return;
}

