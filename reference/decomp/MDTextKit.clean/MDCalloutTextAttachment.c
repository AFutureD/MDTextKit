// ===== MDCalloutTextAttachment::initWithRepresentedAttributedText:labels:showLabel: @ 00006a30 =====

ID MDCalloutTextAttachment::initWithRepresentedAttributedText_labels_showLabel_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  
  local_50.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"initWithRepresentedAttributedText:",param_3);
  *(byte *)(self + (long)_hideLabel) = (byte)param_5 ^ 1;
  IVar2 = attribute_atIndex_effectiveRange_
                    (param_3,_PMKCalloutAttributeName,0,0);
  IVar2 = intValue(IVar2);
  setType_(self,(long)(int)IVar2);
  IVar3 = calloutIcon(self);
  setIcon_(self,IVar3);
  IVar2 = numberWithUnsignedInteger_(NSNumber,(long)(int)IVar2);
  pcVar4 = (cfstringStruct *)objectForKeyedSubscript_(param_4,IVar2);
  pcVar1 = &cf___;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar4;
  }
  IVar2 = attributesAtIndex_effectiveRange_(param_3,0,0);
  IVar3 = _objc_alloc(NSMutableAttributedString);
  IVar5 = stringByAppendingString_(0x5d5f8,pcVar1);
  IVar2 = initWithString_attributes_(IVar3,IVar5,IVar2);
  setLabel_(self,IVar2);
  calculateSize(self);
  return self;
}

// ===== MDCalloutTextAttachment::hideLabel @ 00006c34 =====

bool MDCalloutTextAttachment::hideLabel(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_hideLabel);
}

// ===== MDCalloutTextAttachment::setHideLabel: @ 00006c44 =====

void MDCalloutTextAttachment::setHideLabel_(ID param_1,SEL param_2,bool param_3)

{
  if (*(byte *)(param_1 + (long)_hideLabel) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_hideLabel) = (char)param_3;
  calculateSize(param_1);
  updateAttachmentImage(param_1);
  return;
}

// ===== MDCalloutTextAttachment::calculateSize @ 00006c84 =====

void MDCalloutTextAttachment::calculateSize(ID param_1,SEL param_2)

{
  
  IVar1 = label(param_1);
  IVar2 = hideLabel(param_1);
  if ((int)IVar2 != 0) {
    IVar1 = _objc_alloc(NSMutableAttributedString);
    IVar2 = label(param_1);
    IVar2 = attributesAtIndex_effectiveRange_(IVar2,0,0);
    IVar1 = initWithString_attributes_(IVar1,&cf_space_s_,IVar2);
  }
  uVar3 = 0x40a7700000000000;
  boundingRectWithSize_options_context_(IVar1,0x40a7700000000000,0x40a7700000000000,0,0);
  IVar1 = icon(param_1);
  size(IVar1);
  setAttachmentSize_(param_1,in_d2 + extraout_d0,in_d3);
  setAttachmentBaselineOffset_(param_1,uVar3);
  return;
}

// ===== MDCalloutTextAttachment::drawAttachmentInRect: @ 00006db4 =====

void MDCalloutTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  dVar2 = param_3.field0_0x0.field1_0x8;
  dVar5 = (double)(long)param_3.field0_0x0.field0_0x0;
  dVar4 = (double)(long)dVar2;
  dVar6 = (double)(long)param_3.field1_0x10.field1_0x8;
  attachmentBaselineOffset(param_1);
  IVar1 = icon(param_1);
  size(IVar1);
  uVar3 = 0x3fe0000000000000;
  IVar1 = icon(param_1);
  size(IVar1);
  IVar1 = icon(param_1);
  size(IVar1);
  IVar1 = icon(param_1);
  size(IVar1);
  dVar7 = dVar5 + extraout_d0_01;
  IVar1 = label(param_1);
  IVar1 = writingDirectionAtIndex_(IVar1,0);
  if (IVar1 == 1) {
    dVar5 = (double)_CGRectGetMaxX(dVar5,dVar4,(long)param_3.field1_0x10.field0_0x0,dVar6,0);
    dVar5 = dVar5 - extraout_d0_00;
    dVar7 = dVar7 - extraout_d0_00;
  }
  IVar1 = icon(param_1);
  drawInRect_
            (IVar1,dVar5,dVar4 + ((dVar6 + ABS(extraout_d0)) - dVar2) * 0.5 + dVar6 * -0.05,
             extraout_d0_00,uVar3);
  if ((*(byte *)(param_1 + (long)_hideLabel) & 1) != 0) {
    return;
  }
  IVar1 = label(param_1);
  drawAtPoint_(IVar1,dVar7,dVar4);
  return;
}

// ===== MDCalloutTextAttachment::calloutIcon @ 00006f8c =====

ID MDCalloutTextAttachment::calloutIcon(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar1 = fontAtIndex_(IVar1,0);
  IVar2 = representedAttributedText(param_1);
  IVar2 = attribute_atIndex_effectiveRange_(IVar2,&cf_MDCalloutColors,0,0);
  pointSize(IVar1);
  IVar1 = objectForKeyedSubscript_(IVar2,&cf_icon);
  if (IVar1 == 0) {
    IVar1 = blackColor(NSColor);
  }
  IVar2 = _objc_alloc(&objc::class_t::MDCalloutIcon);
  IVar3 = type(param_1);
  IVar1 = initWithType_fontSize_color_(IVar2,extraout_d0,IVar3,IVar1);
  IVar1 = icon(IVar1);
  return IVar1;
}

// ===== MDCalloutTextAttachment::decodeWithCoder: @ 000070e8 =====

void MDCalloutTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_type);
  IVar1 = integerValue(IVar1);
  setType_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_label);
  setLabel_(param_1,IVar1);
  IVar1 = calloutIcon(param_1);
  setIcon_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_hideLabel);
  IVar1 = boolValue(IVar1);
  setHideLabel_(param_1,IVar1);
  return;
}

// ===== MDCalloutTextAttachment::encodeWithCoder: @ 00007210 =====

void MDCalloutTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = type(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_type);
  IVar1 = hideLabel(param_1);
  IVar1 = numberWithBool_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_hideLabel);
  IVar1 = label(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_label);
  return;
}

// ===== MDCalloutTextAttachment::copyWithZone: @ 00007328 =====

ID MDCalloutTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = type(param_1);
  setType_(self,IVar1);
  IVar1 = label(param_1);
  setLabel_(self,IVar1);
  IVar1 = calloutIcon(self);
  setIcon_(self,IVar1);
  IVar1 = hideLabel(param_1);
  setHideLabel_(self,IVar1);
  return self;
}

// ===== MDCalloutTextAttachment::type @ 000073f0 =====

unsigned_long_long MDCalloutTextAttachment::type(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_type);
}

// ===== MDCalloutTextAttachment::setType: @ 00007400 =====

void MDCalloutTextAttachment::setType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_type) = param_3;
  return;
}

// ===== MDCalloutTextAttachment::icon @ 00007410 =====

ID MDCalloutTextAttachment::icon(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_icon);
}

// ===== MDCalloutTextAttachment::setIcon: @ 00007420 =====

void MDCalloutTextAttachment::setIcon_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_icon) = param_3;
  return;
}

// ===== MDCalloutTextAttachment::label @ 0000742c =====

ID MDCalloutTextAttachment::label(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_label);
}

// ===== MDCalloutTextAttachment::setLabel: @ 0000743c =====

void MDCalloutTextAttachment::setLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_label) = param_3;
  return;
}

// ===== MDCalloutTextAttachment::.cxx_destruct @ 00007448 =====

void MDCalloutTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_label) = 0;
  *(undefined8 *)(param_1 + (long)_icon) = 0;
  return;
}

