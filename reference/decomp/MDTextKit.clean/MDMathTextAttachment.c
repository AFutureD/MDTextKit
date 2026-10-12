// ===== MDMathTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 00039254 =====

CGRect MDMathTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar5;
  
  dVar4 = param_4.field1_0x10.field1_0x8;
  dVar3 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDMathTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  if ((extraout_d0_00 < dVar3) || (IVar1 = fullLine(param_1), (int)IVar1 != 0)) {
    dVar3 = extraout_d0_00;
  }
  CVar5.field0_0x0.field1_0x8 = dVar2;
  CVar5.field0_0x0.field0_0x0 = extraout_d0;
  CVar5.field1_0x10.field1_0x8 = dVar4;
  CVar5.field1_0x10.field0_0x0 = dVar3;
  return CVar5;
}

// ===== MDMathTextAttachment::decodeWithCoder: @ 00039378 =====

void MDMathTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDMathTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_mathString);
  setMathString_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_font);
  setFont_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_paragraphStyle);
  setParagraphStyle_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_fullLine);
  IVar1 = boolValue(IVar1);
  setFullLine_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_textColor);
  setTextColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_backgroundColor);
  setBackgroundColor_(param_1,IVar1);
  return;
}

// ===== MDMathTextAttachment::encodeWithCoder: @ 00039500 =====

void MDMathTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDMathTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = mathString(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_mathString);
  IVar1 = font(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_font);
  IVar1 = paragraphStyle(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_paragraphStyle);
  IVar1 = fullLine(param_1);
  IVar1 = numberWithBool_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_fullLine);
  IVar1 = textColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_textColor);
  IVar1 = backgroundColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_backgroundColor);
  return;
}

// ===== MDMathTextAttachment::copyWithZone: @ 00039698 =====

ID MDMathTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDMathTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = mathString(param_1);
  setMathString_(self,IVar1);
  IVar1 = font(param_1);
  setFont_(self,IVar1);
  IVar1 = paragraphStyle(param_1);
  setParagraphStyle_(self,IVar1);
  IVar1 = fullLine(param_1);
  setFullLine_(self,IVar1);
  IVar1 = textColor(param_1);
  setTextColor_(self,IVar1);
  IVar1 = backgroundColor(param_1);
  setBackgroundColor_(self,IVar1);
  return self;
}

// ===== MDMathTextAttachment::mathString @ 000397c4 =====

ID MDMathTextAttachment::mathString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mathString);
}

// ===== MDMathTextAttachment::setMathString: @ 000397d4 =====

void MDMathTextAttachment::setMathString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_mathString) = param_3;
  return;
}

// ===== MDMathTextAttachment::font @ 000397e0 =====

ID MDMathTextAttachment::font(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_font);
}

// ===== MDMathTextAttachment::setFont: @ 000397f0 =====

void MDMathTextAttachment::setFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_font) = param_3;
  return;
}

// ===== MDMathTextAttachment::paragraphStyle @ 000397fc =====

ID MDMathTextAttachment::paragraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_paragraphStyle);
}

// ===== MDMathTextAttachment::setParagraphStyle: @ 0003980c =====

void MDMathTextAttachment::setParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_paragraphStyle) = param_3;
  return;
}

// ===== MDMathTextAttachment::textColor @ 00039818 =====

ID MDMathTextAttachment::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}

// ===== MDMathTextAttachment::setTextColor: @ 00039828 =====

void MDMathTextAttachment::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}

// ===== MDMathTextAttachment::backgroundColor @ 00039834 =====

ID MDMathTextAttachment::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}

// ===== MDMathTextAttachment::setBackgroundColor: @ 00039844 =====

void MDMathTextAttachment::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}

// ===== MDMathTextAttachment::fullLine @ 00039850 =====

bool MDMathTextAttachment::fullLine(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_fullLine) & 1;
}

// ===== MDMathTextAttachment::setFullLine: @ 00039864 =====

void MDMathTextAttachment::setFullLine_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_fullLine) = (char)param_3;
  return;
}

// ===== MDMathTextAttachment::pdfData @ 00039874 =====

ID MDMathTextAttachment::pdfData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_pdfData);
}

// ===== MDMathTextAttachment::setPdfData: @ 00039884 =====

void MDMathTextAttachment::setPdfData_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_pdfData) = param_3;
  return;
}

// ===== MDMathTextAttachment::.cxx_destruct @ 00039890 =====

void MDMathTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_pdfData) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_paragraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_font) = 0;
  *(undefined8 *)(param_1 + (long)_mathString) = 0;
  return;
}

