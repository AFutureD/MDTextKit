// ===== MDTableTextAttachment::decodeWithCoder: @ 0001f9d8 =====

void MDTableTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDTableTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  self = decodeObjectForKey_(param_3,&cf_maxTextContainerWidth);
  doubleValue(self);
  setMaxTextContainerWidth_(param_1);
  return;
}

// ===== MDTableTextAttachment::encodeWithCoder: @ 0001fa70 =====

void MDTableTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDTableTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  maxTextContainerWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_maxTextContainerWidth);
  return;
}

// ===== MDTableTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0001fb14 =====

CGRect MDTableTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar5;
  
  dVar4 = param_4.field1_0x10.field1_0x8;
  dVar2 = param_4.field1_0x10.field0_0x0;
  dVar1 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDTableTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  dVar3 = extraout_d0_00;
  if (dVar2 <= extraout_d0_00) {
    dVar3 = dVar2;
  }
  CVar5.field0_0x0.field1_0x8 = dVar1;
  CVar5.field0_0x0.field0_0x0 = extraout_d0;
  CVar5.field1_0x10.field1_0x8 = dVar4;
  CVar5.field1_0x10.field0_0x0 = dVar3;
  return CVar5;
}

// ===== MDTableTextAttachment::copyWithZone: @ 0001fc20 =====

ID MDTableTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDTableTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  maxTextContainerWidth(param_1);
  setMaxTextContainerWidth_(self);
  return self;
}

// ===== MDTableTextAttachment::maxTextContainerWidth @ 0001fc78 =====

double MDTableTextAttachment::maxTextContainerWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxTextContainerWidth);
}

// ===== MDTableTextAttachment::setMaxTextContainerWidth: @ 0001fc88 =====

void MDTableTextAttachment::setMaxTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxTextContainerWidth) = param_3;
  return;
}

