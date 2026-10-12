// ===== MDCalloutTextAttachment::initWithRepresentedAttributedText:labels:showLabel: @ 00006a30 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x24 bytes */

ID MDCalloutTextAttachment::initWithRepresentedAttributedText_labels_showLabel_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  cfstringStruct *pcVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"initWithRepresentedAttributedText:",param_3);
  *(byte *)(self + (long)_hideLabel) = (byte)param_5 ^ 1;
  IVar2 = objc_stub::attribute_atIndex_effectiveRange_
                    (param_3,*(undefined8 *)PTR__PMKCalloutAttributeName_0005e890,0,0);
  IVar2 = objc_stub::intValue(IVar2);
  objc_stub::setType_(self,(long)(int)IVar2);
  IVar3 = objc_stub::calloutIcon(self);
  objc_stub::setIcon_(self,IVar3);
  IVar2 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,(long)(int)IVar2);
  pcVar4 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(param_4,IVar2);
  pcVar1 = &cf___;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar4;
  }
  IVar2 = objc_stub::attributesAtIndex_effectiveRange_(param_3,0,0);
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
  IVar5 = objc_stub::stringByAppendingString_(0x5d5f8,pcVar1);
  IVar2 = objc_stub::initWithString_attributes_(IVar3,IVar5,IVar2);
  objc_stub::setLabel_(self,IVar2);
  objc_stub::calculateSize(self);
  return self;
}


// ===== MDCalloutTextAttachment::hideLabel @ 00006c34 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDCalloutTextAttachment::hideLabel(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_hideLabel);
}


// ===== MDCalloutTextAttachment::setHideLabel: @ 00006c44 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDCalloutTextAttachment::setHideLabel_(ID param_1,SEL param_2,bool param_3)

{
  if (*(byte *)(param_1 + (long)_hideLabel) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_hideLabel) = (char)param_3;
  objc_stub::calculateSize(param_1);
  objc_stub::updateAttachmentImage(param_1);
  return;
}


// ===== MDCalloutTextAttachment::calculateSize @ 00006c84 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutTextAttachment::calculateSize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  double extraout_d0;
  double in_d2;
  undefined8 in_d3;
  
  IVar1 = objc_stub::label(param_1);
  IVar2 = objc_stub::hideLabel(param_1);
  if ((int)IVar2 != 0) {
    IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
    IVar2 = objc_stub::label(param_1);
    IVar2 = objc_stub::attributesAtIndex_effectiveRange_(IVar2,0,0);
    IVar1 = objc_stub::initWithString_attributes_(IVar1,&cf_space_s_,IVar2);
  }
  uVar3 = 0x40a7700000000000;
  objc_stub::boundingRectWithSize_options_context_(IVar1,0x40a7700000000000,0x40a7700000000000,0,0);
  IVar1 = objc_stub::icon(param_1);
  objc_stub::size(IVar1);
  objc_stub::setAttachmentSize_(param_1,in_d2 + extraout_d0,in_d3);
  objc_stub::setAttachmentBaselineOffset_(param_1,uVar3);
  return;
}


// ===== MDCalloutTextAttachment::drawAttachmentInRect: @ 00006db4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDCalloutTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = param_3.field0_0x0.field1_0x8;
  dVar5 = (double)(long)param_3.field0_0x0.field0_0x0;
  dVar4 = (double)(long)dVar2;
  dVar6 = (double)(long)param_3.field1_0x10.field1_0x8;
  objc_stub::attachmentBaselineOffset(param_1);
  IVar1 = objc_stub::icon(param_1);
  objc_stub::size(IVar1);
  uVar3 = 0x3fe0000000000000;
  IVar1 = objc_stub::icon(param_1);
  objc_stub::size(IVar1);
  IVar1 = objc_stub::icon(param_1);
  objc_stub::size(IVar1);
  IVar1 = objc_stub::icon(param_1);
  objc_stub::size(IVar1);
  dVar7 = dVar5 + extraout_d0_01;
  IVar1 = objc_stub::label(param_1);
  IVar1 = objc_stub::writingDirectionAtIndex_(IVar1,0);
  if (IVar1 == 1) {
    dVar5 = (double)_CGRectGetMaxX(dVar5,dVar4,(long)param_3.field1_0x10.field0_0x0,dVar6,0);
    dVar5 = dVar5 - extraout_d0_00;
    dVar7 = dVar7 - extraout_d0_00;
  }
  IVar1 = objc_stub::icon(param_1);
  objc_stub::drawInRect_
            (IVar1,dVar5,dVar4 + ((dVar6 + ABS(extraout_d0)) - dVar2) * 0.5 + dVar6 * -0.05,
             extraout_d0_00,uVar3);
  if ((*(byte *)(param_1 + (long)_hideLabel) & 1) != 0) {
    return;
  }
  IVar1 = objc_stub::label(param_1);
  objc_stub::drawAtPoint_(IVar1,dVar7,dVar4);
  return;
}


// ===== MDCalloutTextAttachment::calloutIcon @ 00006f8c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCalloutTextAttachment::calloutIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_d0;
  
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar1 = objc_stub::fontAtIndex_(IVar1,0);
  IVar2 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::attribute_atIndex_effectiveRange_(IVar2,&cf_MDCalloutColors,0,0);
  objc_stub::pointSize(IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_icon);
  if (IVar1 == 0) {
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
  }
  IVar2 = _objc_alloc(&objc::class_t::MDCalloutIcon);
  IVar3 = objc_stub::type(param_1);
  IVar1 = objc_stub::initWithType_fontSize_color_(IVar2,extraout_d0,IVar3,IVar1);
  IVar1 = objc_stub::icon(IVar1);
  return IVar1;
}


// ===== MDCalloutTextAttachment::decodeWithCoder: @ 000070e8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_type);
  IVar1 = objc_stub::integerValue(IVar1);
  objc_stub::setType_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_label);
  objc_stub::setLabel_(param_1,IVar1);
  IVar1 = objc_stub::calloutIcon(param_1);
  objc_stub::setIcon_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_hideLabel);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setHideLabel_(param_1,IVar1);
  return;
}


// ===== MDCalloutTextAttachment::encodeWithCoder: @ 00007210 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::type(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_type);
  IVar1 = objc_stub::hideLabel(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_hideLabel);
  IVar1 = objc_stub::label(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_label);
  return;
}


// ===== MDCalloutTextAttachment::copyWithZone: @ 00007328 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDCalloutTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDCalloutTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = objc_stub::type(param_1);
  objc_stub::setType_(self,IVar1);
  IVar1 = objc_stub::label(param_1);
  objc_stub::setLabel_(self,IVar1);
  IVar1 = objc_stub::calloutIcon(self);
  objc_stub::setIcon_(self,IVar1);
  IVar1 = objc_stub::hideLabel(param_1);
  objc_stub::setHideLabel_(self,IVar1);
  return self;
}


// ===== MDCalloutTextAttachment::type @ 000073f0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long MDCalloutTextAttachment::type(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_type);
}


// ===== MDCalloutTextAttachment::setType: @ 00007400 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutTextAttachment::setType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_type) = param_3;
  return;
}


// ===== MDCalloutTextAttachment::icon @ 00007410 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCalloutTextAttachment::icon(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_icon);
}


// ===== MDCalloutTextAttachment::setIcon: @ 00007420 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutTextAttachment::setIcon_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_icon) = param_3;
  return;
}


// ===== MDCalloutTextAttachment::label @ 0000742c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCalloutTextAttachment::label(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_label);
}


// ===== MDCalloutTextAttachment::setLabel: @ 0000743c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutTextAttachment::setLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_label) = param_3;
  return;
}


// ===== MDCalloutTextAttachment::.cxx_destruct @ 00007448 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_label) = 0;
  *(undefined8 *)(param_1 + (long)_icon) = 0;
  return;
}


