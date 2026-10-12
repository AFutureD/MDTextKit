// ===== MDHighlighterTextAttachment::drawAttachmentInRect: @ 000304f8 =====

void MDHighlighterTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  IVar1 = color(param_1);
  IVar2 = accentColor(param_1);
  drawHighlighterWithFrame_fillColor_accentColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,(long)param_3.field0_0x0.field0_0x0,
             (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
             (long)param_3.field1_0x10.field1_0x8,IVar1,IVar2);
  return;
}

// ===== MDHighlighterTextAttachment::decodeWithCoder: @ 00030594 =====

void MDHighlighterTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDHighlighterTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_color);
  setColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_accentColor);
  setAccentColor_(param_1,IVar1);
  return;
}

// ===== MDHighlighterTextAttachment::encodeWithCoder: @ 00030658 =====

void MDHighlighterTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDHighlighterTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = color(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_color);
  IVar1 = accentColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_accentColor);
  return;
}

// ===== MDHighlighterTextAttachment::copyWithZone: @ 0003071c =====

ID MDHighlighterTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDHighlighterTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = color(param_1);
  setColor_(self,IVar1);
  IVar1 = accentColor(param_1);
  setAccentColor_(self,IVar1);
  return self;
}

// ===== MDHighlighterTextAttachment::color @ 000307bc =====

ID MDHighlighterTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}

// ===== MDHighlighterTextAttachment::setColor: @ 000307cc =====

void MDHighlighterTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}

// ===== MDHighlighterTextAttachment::accentColor @ 000307d8 =====

ID MDHighlighterTextAttachment::accentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_accentColor);
}

// ===== MDHighlighterTextAttachment::setAccentColor: @ 000307e8 =====

void MDHighlighterTextAttachment::setAccentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_accentColor) = param_3;
  return;
}

// ===== MDHighlighterTextAttachment::.cxx_destruct @ 000307f4 =====

void MDHighlighterTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_accentColor) = 0;
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}

