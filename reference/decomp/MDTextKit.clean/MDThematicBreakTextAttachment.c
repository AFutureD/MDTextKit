// ===== MDThematicBreakTextAttachment::drawAttachmentInRect: @ 000387a4 =====

void MDThematicBreakTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  dVar2 = param_3.field1_0x10.field0_0x0;
  lineWidth(param_1);
  IVar1 = lineColor(param_1);
  setFill(IVar1);
  IVar1 = bezierPathWithRect_
                    (NSBezierPath,
                     (long)(param_3.field0_0x0.field0_0x0 + (dVar2 - dVar2) * 0.5),
                     (long)(param_3.field0_0x0.field1_0x8 +
                           (param_3.field1_0x10.field1_0x8 - extraout_d0) * 0.5),dVar2,extraout_d0);
  fill(IVar1);
  return;
}

// ===== MDThematicBreakTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 00038864 =====

CGRect MDThematicBreakTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar5;
  
  dVar4 = param_4.field1_0x10.field1_0x8;
  dVar2 = param_4.field1_0x10.field0_0x0;
  dVar1 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDThematicBreakTextAttachment;
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

// ===== MDThematicBreakTextAttachment::decodeWithCoder: @ 00038970 =====

void MDThematicBreakTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDThematicBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_lineWidth);
  IVar1 = boolValue(IVar1);
  setLineWidth_(param_1,(double)(IVar1 & 0xffffffff));
  IVar1 = decodeObjectForKey_(param_3,&cf_lineColor);
  setLineColor_(param_1,IVar1);
  return;
}

// ===== MDThematicBreakTextAttachment::encodeWithCoder: @ 00038a38 =====

void MDThematicBreakTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDThematicBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  lineWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_lineWidth);
  IVar1 = lineColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_lineColor);
  return;
}

// ===== MDThematicBreakTextAttachment::copyWithZone: @ 00038b0c =====

ID MDThematicBreakTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDThematicBreakTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  lineWidth(param_1);
  setLineWidth_(self);
  IVar1 = lineColor(param_1);
  setLineColor_(self,IVar1);
  return self;
}

// ===== MDThematicBreakTextAttachment::lineWidth @ 00038b8c =====

double MDThematicBreakTextAttachment::lineWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lineWidth);
}

// ===== MDThematicBreakTextAttachment::setLineWidth: @ 00038b9c =====

void MDThematicBreakTextAttachment::setLineWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lineWidth) = param_3;
  return;
}

// ===== MDThematicBreakTextAttachment::lineColor @ 00038bac =====

ID MDThematicBreakTextAttachment::lineColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_lineColor);
}

// ===== MDThematicBreakTextAttachment::setLineColor: @ 00038bbc =====

void MDThematicBreakTextAttachment::setLineColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_lineColor) = param_3;
  return;
}

// ===== MDThematicBreakTextAttachment::.cxx_destruct @ 00038bc8 =====

void MDThematicBreakTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_lineColor) = 0;
  return;
}

