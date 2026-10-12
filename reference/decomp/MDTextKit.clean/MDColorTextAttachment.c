// ===== MDColorTextAttachment::drawAttachmentInRect: @ 00014a7c =====

void MDColorTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  IVar1 = bezierPathWithOvalInRect_
                    (NSBezierPath,(long)param_3.field0_0x0.field0_0x0,
                     (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
                     (long)param_3.field1_0x10.field1_0x8);
  borderWidth(param_1);
  setLineWidth_(IVar1);
  IVar2 = color(param_1);
  setFill(IVar2);
  fill(IVar1);
  borderWidth(param_1);
  borderWidth(param_1);
  _CGRectInset((long)param_3.field0_0x0.field0_0x0,(long)param_3.field0_0x0.field1_0x8,
               (long)param_3.field1_0x10.field0_0x0,(long)param_3.field1_0x10.field1_0x8,
               extraout_d0 * 0.5,extraout_d0_00 * 0.5);
  IVar1 = bezierPathWithOvalInRect_(NSBezierPath);
  borderWidth(param_1);
  setLineWidth_(IVar1);
  IVar2 = blackColor(NSColor);
  IVar2 = colorWithAlphaComponent_(IVar2,0x3fd3333333333333);
  setStroke(IVar2);
  stroke(IVar1);
  return;
}

// ===== MDColorTextAttachment::decodeWithCoder: @ 00014bdc =====

void MDColorTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDColorTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_borderWidth);
  IVar1 = boolValue(IVar1);
  setBorderWidth_(param_1,(double)(IVar1 & 0xffffffff));
  IVar1 = decodeObjectForKey_(param_3,&cf_color);
  setColor_(param_1,IVar1);
  return;
}

// ===== MDColorTextAttachment::encodeWithCoder: @ 00014ca4 =====

void MDColorTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDColorTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  borderWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_borderWidth);
  IVar1 = color(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_color);
  return;
}

// ===== MDColorTextAttachment::copyWithZone: @ 00014d78 =====

ID MDColorTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDColorTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  borderWidth(param_1);
  setBorderWidth_(self);
  IVar1 = color(param_1);
  setColor_(self,IVar1);
  return self;
}

// ===== MDColorTextAttachment::color @ 00014df8 =====

ID MDColorTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}

// ===== MDColorTextAttachment::setColor: @ 00014e08 =====

void MDColorTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}

// ===== MDColorTextAttachment::borderWidth @ 00014e14 =====

double MDColorTextAttachment::borderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderWidth);
}

// ===== MDColorTextAttachment::setBorderWidth: @ 00014e24 =====

void MDColorTextAttachment::setBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderWidth) = param_3;
  return;
}

// ===== MDColorTextAttachment::.cxx_destruct @ 00014e34 =====

void MDColorTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}

