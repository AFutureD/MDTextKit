// ===== MDIconTextAttachment::initWithIcon:leftMargin:rightMargin:baselineOffset: @ 0001f6c0 =====

ID MDIconTextAttachment::initWithIcon_leftMargin_rightMargin_baselineOffset_
             (ID param_1,SEL param_2,ID param_3,double param_4,double param_5,double param_6)

{
  
  local_50.super_class = &objc::class_t::MDIconTextAttachment;
  dVar1 = param_5;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"initWithRepresentedAttributedText:",0);
  if (self != 0) {
    setIcon_(self,param_3);
    size(param_3);
    size(param_3);
    setAttachmentSize_(self,param_5 + param_4 + extraout_d0);
    size(param_3);
    size(param_3);
    setDrawingRect_(self,param_4,0,extraout_d0_00,dVar1);
    setAttachmentBaselineOffset_(self,param_6);
    updateAttachmentImage(self);
  }
  return self;
}

// ===== MDIconTextAttachment::drawAttachmentInRect: @ 0001f7b0 =====

void MDIconTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  self = icon(param_1);
  drawInRect_
            (self,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return;
}

// ===== MDIconTextAttachment::decodeWithCoder: @ 0001f810 =====

void MDIconTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDIconTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_icon);
  setIcon_(param_1,IVar1);
  return;
}

// ===== MDIconTextAttachment::encodeWithCoder: @ 0001f8a4 =====

void MDIconTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDIconTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = icon(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_icon);
  return;
}

// ===== MDIconTextAttachment::copyWithZone: @ 0001f938 =====

ID MDIconTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDIconTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = icon(param_1);
  setIcon_(self,IVar1);
  return self;
}

// ===== MDIconTextAttachment::icon @ 0001f9a8 =====

ID MDIconTextAttachment::icon(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_icon);
}

// ===== MDIconTextAttachment::setIcon: @ 0001f9b8 =====

void MDIconTextAttachment::setIcon_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_icon) = param_3;
  return;
}

// ===== MDIconTextAttachment::.cxx_destruct @ 0001f9c4 =====

void MDIconTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_icon) = 0;
  return;
}

