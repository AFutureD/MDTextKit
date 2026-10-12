// ===== MDImageTextAttachment::initWithRepresentedAttributedText: @ 0001bd4c =====

ID MDImageTextAttachment::initWithRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  
  local_30.super_class = &objc::class_t::MDImageTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"initWithRepresentedAttributedText:");
  if (self != 0) {
    setAlwaysUseFullWidth_(self,0);
  }
  return self;
}

// ===== MDImageTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0001bda0 =====

CGRect MDImageTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar7;
  
  dVar5 = param_4.field1_0x10.field1_0x8;
  dVar4 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDImageTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  dVar3 = dVar2;
  maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  if ((extraout_d0_00 <= dVar4) || (IVar1 = alwaysUseFullWidth(param_1), (int)IVar1 != 0)
     ) {
    attachmentSize(param_1);
    dVar4 = extraout_d0_00 * dVar3;
    attachmentSize(param_1);
    dVar5 = (double)(float)(int)(dVar4 / extraout_d0_01);
    dVar4 = extraout_d0_00;
  }
  size(param_3);
  if (dVar3 <= param_7.field1_0x10.field1_0x8) {
    param_7.field1_0x10.field1_0x8 = dVar3;
  }
  dVar6 = (double)NEON_ucvtf((long)param_7.field1_0x10.field1_0x8);
  if (dVar6 < dVar5) {
    attachmentSize(param_1);
    attachmentSize(param_1);
    dVar4 = (double)(float)(int)((extraout_d0_02 * dVar6) / dVar3);
    dVar5 = dVar6;
  }
  CVar7.field0_0x0.field1_0x8 = dVar2;
  CVar7.field0_0x0.field0_0x0 = extraout_d0;
  CVar7.field1_0x10.field1_0x8 = dVar5;
  CVar7.field1_0x10.field0_0x0 = dVar4;
  return CVar7;
}

// ===== MDImageTextAttachment::decodeWithCoder: @ 0001bf2c =====

void MDImageTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDImageTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  self = decodeObjectForKey_(param_3,&cf_maxTextContainerWidth);
  doubleValue(self);
  setMaxTextContainerWidth_(param_1);
  return;
}

// ===== MDImageTextAttachment::encodeWithCoder: @ 0001bfc4 =====

void MDImageTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDImageTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  maxTextContainerWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_maxTextContainerWidth);
  return;
}

// ===== MDImageTextAttachment::copyWithZone: @ 0001c068 =====

ID MDImageTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDImageTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  maxTextContainerWidth(param_1);
  setMaxTextContainerWidth_(self);
  return self;
}

// ===== MDImageTextAttachment::maxTextContainerWidth @ 0001c0c0 =====

double MDImageTextAttachment::maxTextContainerWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxTextContainerWidth);
}

// ===== MDImageTextAttachment::setMaxTextContainerWidth: @ 0001c0d0 =====

void MDImageTextAttachment::setMaxTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxTextContainerWidth) = param_3;
  return;
}

// ===== MDImageTextAttachment::alwaysUseFullWidth @ 0001c0e0 =====

bool MDImageTextAttachment::alwaysUseFullWidth(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_alwaysUseFullWidth) & 1;
}

// ===== MDImageTextAttachment::setAlwaysUseFullWidth: @ 0001c0f4 =====

void MDImageTextAttachment::setAlwaysUseFullWidth_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_alwaysUseFullWidth) = (char)param_3;
  return;
}

