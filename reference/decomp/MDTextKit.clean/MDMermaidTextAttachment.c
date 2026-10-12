// ===== MDMermaidTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0003b7e0 =====

CGRect MDMermaidTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar6;
  
  dVar5 = param_4.field1_0x10.field1_0x8;
  dVar4 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  dVar3 = dVar2;
  maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  attachmentSize(param_1);
  if (((dVar3 != 0.0) && (attachmentSize(param_1), extraout_d0_01 != 0.0)) &&
     (IVar1 = fullLine(param_1), dVar4 = extraout_d0_00, (IVar1 & 1) == 0)) {
    attachmentSize(param_1);
    dVar5 = extraout_d0_00 * dVar3;
    attachmentSize(param_1);
    attachmentSize(param_1);
    dVar5 = (double)(float)(int)(dVar5 / extraout_d0_02);
    if (dVar3 <= dVar5) {
      dVar5 = dVar3;
    }
  }
  CVar6.field0_0x0.field1_0x8 = dVar2;
  CVar6.field0_0x0.field0_0x0 = extraout_d0;
  CVar6.field1_0x10.field1_0x8 = dVar5;
  CVar6.field1_0x10.field0_0x0 = dVar4;
  return CVar6;
}

// ===== MDMermaidTextAttachment::wantAttachmentBaselineOffset @ 0003b950 =====

bool MDMermaidTextAttachment::wantAttachmentBaselineOffset(ID param_1,SEL param_2)

{
  return 1;
}

// ===== MDMermaidTextAttachment::decodeWithCoder: @ 0003b958 =====

void MDMermaidTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_mermaidCode);
  setMermaidCode_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_font);
  setFont_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_paragraphStyle);
  setParagraphStyle_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_textColor);
  setTextColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_backgroundColor);
  setBackgroundColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_fullLine);
  IVar1 = boolValue(IVar1);
  setFullLine_(param_1,IVar1);
  return;
}

// ===== MDMermaidTextAttachment::encodeWithCoder: @ 0003bae4 =====

void MDMermaidTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = mermaidCode(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_mermaidCode);
  IVar1 = font(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_font);
  IVar1 = paragraphStyle(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_paragraphStyle);
  IVar1 = textColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_textColor);
  IVar1 = backgroundColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_backgroundColor);
  IVar1 = fullLine(param_1);
  IVar1 = numberWithBool_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_fullLine);
  return;
}

// ===== MDMermaidTextAttachment::copyWithZone: @ 0003bc7c =====

ID MDMermaidTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = mermaidCode(param_1);
  setMermaidCode_(self,IVar1);
  IVar1 = font(param_1);
  setFont_(self,IVar1);
  IVar1 = paragraphStyle(param_1);
  setParagraphStyle_(self,IVar1);
  IVar1 = textColor(param_1);
  setTextColor_(self,IVar1);
  IVar1 = backgroundColor(param_1);
  setBackgroundColor_(self,IVar1);
  IVar1 = fullLine(param_1);
  setFullLine_(self,IVar1);
  return self;
}

// ===== MDMermaidTextAttachment::mermaidCode @ 0003bda8 =====

ID MDMermaidTextAttachment::mermaidCode(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mermaidCode);
}

// ===== MDMermaidTextAttachment::setMermaidCode: @ 0003bdb8 =====

void MDMermaidTextAttachment::setMermaidCode_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_mermaidCode) = param_3;
  return;
}

// ===== MDMermaidTextAttachment::font @ 0003bdc4 =====

ID MDMermaidTextAttachment::font(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_font);
}

// ===== MDMermaidTextAttachment::setFont: @ 0003bdd4 =====

void MDMermaidTextAttachment::setFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_font) = param_3;
  return;
}

// ===== MDMermaidTextAttachment::paragraphStyle @ 0003bde0 =====

ID MDMermaidTextAttachment::paragraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_paragraphStyle);
}

// ===== MDMermaidTextAttachment::setParagraphStyle: @ 0003bdf0 =====

void MDMermaidTextAttachment::setParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_paragraphStyle) = param_3;
  return;
}

// ===== MDMermaidTextAttachment::textColor @ 0003bdfc =====

ID MDMermaidTextAttachment::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}

// ===== MDMermaidTextAttachment::setTextColor: @ 0003be0c =====

void MDMermaidTextAttachment::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}

// ===== MDMermaidTextAttachment::backgroundColor @ 0003be18 =====

ID MDMermaidTextAttachment::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}

// ===== MDMermaidTextAttachment::setBackgroundColor: @ 0003be28 =====

void MDMermaidTextAttachment::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}

// ===== MDMermaidTextAttachment::fullLine @ 0003be34 =====

bool MDMermaidTextAttachment::fullLine(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_fullLine) & 1;
}

// ===== MDMermaidTextAttachment::setFullLine: @ 0003be48 =====

void MDMermaidTextAttachment::setFullLine_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_fullLine) = (char)param_3;
  return;
}

// ===== MDMermaidTextAttachment::.cxx_destruct @ 0003be58 =====

void MDMermaidTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_paragraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_font) = 0;
  *(undefined8 *)(param_1 + (long)_mermaidCode) = 0;
  return;
}

