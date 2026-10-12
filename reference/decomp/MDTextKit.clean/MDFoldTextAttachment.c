// ===== MDFoldTextAttachment::drawAttachmentInRect: @ 00012ef4 =====

void MDFoldTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  dVar4 = (double)(long)param_3.field0_0x0.field1_0x8;
  dVar5 = (double)(long)param_3.field1_0x10.field0_0x0;
  dVar6 = (double)(long)param_3.field1_0x10.field1_0x8;
  IVar1 = bezierPathWithRoundedRect_cornerRadius_
                    (NSBezierPath,(long)param_3.field0_0x0.field0_0x0,dVar4,dVar5
                     ,dVar6,dVar6 * 0.25);
  self = backgroundColor(param_1);
  setFill(self);
  fill(IVar1);
  dVar3 = (double)(float)(int)(dVar6 / 3.5);
  dVar2 = (double)_CGRectInset((long)param_3.field0_0x0.field0_0x0,dVar4,dVar5,dVar6,dVar6 / 3.0,0);
  dVar5 = dVar5 / 3.0;
  IVar1 = textColor(param_1);
  setFill(IVar1);
  dVar7 = (dVar5 - dVar3) * 0.5;
  dVar4 = dVar4 + (dVar6 - dVar3) * 0.5;
  IVar1 = bezierPathWithOvalInRect_
                    (NSBezierPath,dVar2 + dVar7,dVar4,dVar3,dVar3);
  fill(IVar1);
  IVar1 = bezierPathWithOvalInRect_
                    (NSBezierPath,dVar2 + dVar5 + dVar7,dVar4,dVar3,dVar3);
  fill(IVar1);
  IVar1 = bezierPathWithOvalInRect_
                    (NSBezierPath,dVar5 + dVar2 + dVar5 + dVar7,dVar4,dVar3,dVar3
                    );
  fill(IVar1);
  return;
}

// ===== MDFoldTextAttachment::collapsedText @ 000130c0 =====

ID MDFoldTextAttachment::collapsedText(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar2 = collapsedRange(param_1);
  IVar1 = stringByExpandingTextAttachmentsInRange_(IVar1,IVar2,extraout_x1);
  return IVar1;
}

// ===== MDFoldTextAttachment::collapsedAttributedText @ 0001311c =====

ID MDFoldTextAttachment::collapsedAttributedText(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar2 = collapsedRange(param_1);
  IVar1 = attributedSubstringFromRange_(IVar1,IVar2,extraout_x1);
  return IVar1;
}

// ===== MDFoldTextAttachment::decodeWithCoder: @ 00013178 =====

void MDFoldTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDFoldTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_collapsedRange);
  IVar1 = rangeValue(IVar1);
  setCollapsedRange_(param_1,IVar1,extraout_x1);
  IVar1 = decodeObjectForKey_(param_3,&cf_textColor);
  setTextColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_backgroundColor);
  setBackgroundColor_(param_1,IVar1);
  return;
}

// ===== MDFoldTextAttachment::encodeWithCoder: @ 00013274 =====

void MDFoldTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDFoldTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = collapsedRange(param_1);
  IVar1 = valueWithRange_(NSValue,IVar1,extraout_x1);
  encodeObject_forKey_(param_3,IVar1,&cf_collapsedRange);
  IVar1 = textColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_textColor);
  IVar1 = backgroundColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_backgroundColor);
  return;
}

// ===== MDFoldTextAttachment::copyWithZone: @ 00013380 =====

ID MDFoldTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDFoldTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = collapsedRange(param_1);
  setCollapsedRange_(self,IVar1,extraout_x1);
  IVar1 = textColor(param_1);
  setTextColor_(self,IVar1);
  IVar1 = backgroundColor(param_1);
  setBackgroundColor_(self,IVar1);
  return self;
}

// ===== MDFoldTextAttachment::textColor @ 00013438 =====

ID MDFoldTextAttachment::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}

// ===== MDFoldTextAttachment::setTextColor: @ 00013448 =====

void MDFoldTextAttachment::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}

// ===== MDFoldTextAttachment::backgroundColor @ 00013454 =====

ID MDFoldTextAttachment::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}

// ===== MDFoldTextAttachment::setBackgroundColor: @ 00013464 =====

void MDFoldTextAttachment::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}

// ===== MDFoldTextAttachment::collapsedRange @ 00013470 =====

_NSRange MDFoldTextAttachment::collapsedRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + (long)_collapsedRange,0x10,1,0);
  return local_20;
}

// ===== MDFoldTextAttachment::setCollapsedRange: @ 000134b0 =====

void MDFoldTextAttachment::setCollapsedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + (long)_collapsedRange,&local_20,0x10,1,0);
  return;
}

// ===== MDFoldTextAttachment::.cxx_destruct @ 000134ec =====

void MDFoldTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  return;
}

