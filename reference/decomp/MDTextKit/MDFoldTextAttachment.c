// ===== MDFoldTextAttachment::drawAttachmentInRect: @ 00012ef4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDFoldTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID self;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = (double)(long)param_3.field0_0x0.field1_0x8;
  dVar5 = (double)(long)param_3.field1_0x10.field0_0x0;
  dVar6 = (double)(long)param_3.field1_0x10.field1_0x8;
  IVar1 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                    ((ID)&_OBJC_CLASS___NSBezierPath,(long)param_3.field0_0x0.field0_0x0,dVar4,dVar5
                     ,dVar6,dVar6 * 0.25);
  self = objc_stub::backgroundColor(param_1);
  objc_stub::setFill(self);
  objc_stub::fill(IVar1);
  dVar3 = (double)(float)(int)(dVar6 / 3.5);
  dVar2 = (double)_CGRectInset((long)param_3.field0_0x0.field0_0x0,dVar4,dVar5,dVar6,dVar6 / 3.0,0);
  dVar5 = dVar5 / 3.0;
  IVar1 = objc_stub::textColor(param_1);
  objc_stub::setFill(IVar1);
  dVar7 = (dVar5 - dVar3) * 0.5;
  dVar4 = dVar4 + (dVar6 - dVar3) * 0.5;
  IVar1 = objc_stub::bezierPathWithOvalInRect_
                    ((ID)&_OBJC_CLASS___NSBezierPath,dVar2 + dVar7,dVar4,dVar3,dVar3);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPathWithOvalInRect_
                    ((ID)&_OBJC_CLASS___NSBezierPath,dVar2 + dVar5 + dVar7,dVar4,dVar3,dVar3);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPathWithOvalInRect_
                    ((ID)&_OBJC_CLASS___NSBezierPath,dVar5 + dVar2 + dVar5 + dVar7,dVar4,dVar3,dVar3
                    );
  objc_stub::fill(IVar1);
  return;
}


// ===== MDFoldTextAttachment::collapsedText @ 000130c0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFoldTextAttachment::collapsedText(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::collapsedRange(param_1);
  IVar1 = objc_stub::stringByExpandingTextAttachmentsInRange_(IVar1,IVar2,extraout_x1);
  return IVar1;
}


// ===== MDFoldTextAttachment::collapsedAttributedText @ 0001311c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFoldTextAttachment::collapsedAttributedText(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::collapsedRange(param_1);
  IVar1 = objc_stub::attributedSubstringFromRange_(IVar1,IVar2,extraout_x1);
  return IVar1;
}


// ===== MDFoldTextAttachment::decodeWithCoder: @ 00013178 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFoldTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 extraout_x1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFoldTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_collapsedRange);
  IVar1 = objc_stub::rangeValue(IVar1);
  objc_stub::setCollapsedRange_(param_1,IVar1,extraout_x1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_textColor);
  objc_stub::setTextColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_backgroundColor);
  objc_stub::setBackgroundColor_(param_1,IVar1);
  return;
}


// ===== MDFoldTextAttachment::encodeWithCoder: @ 00013274 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFoldTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 extraout_x1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFoldTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::collapsedRange(param_1);
  IVar1 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,IVar1,extraout_x1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_collapsedRange);
  IVar1 = objc_stub::textColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_textColor);
  IVar1 = objc_stub::backgroundColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_backgroundColor);
  return;
}


// ===== MDFoldTextAttachment::copyWithZone: @ 00013380 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDFoldTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  undefined8 extraout_x1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFoldTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = objc_stub::collapsedRange(param_1);
  objc_stub::setCollapsedRange_(self,IVar1,extraout_x1);
  IVar1 = objc_stub::textColor(param_1);
  objc_stub::setTextColor_(self,IVar1);
  IVar1 = objc_stub::backgroundColor(param_1);
  objc_stub::setBackgroundColor_(self,IVar1);
  return self;
}


// ===== MDFoldTextAttachment::textColor @ 00013438 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFoldTextAttachment::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}


// ===== MDFoldTextAttachment::setTextColor: @ 00013448 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFoldTextAttachment::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}


// ===== MDFoldTextAttachment::backgroundColor @ 00013454 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFoldTextAttachment::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}


// ===== MDFoldTextAttachment::setBackgroundColor: @ 00013464 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFoldTextAttachment::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}


// ===== MDFoldTextAttachment::collapsedRange @ 00013470 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDFoldTextAttachment::collapsedRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + (long)_collapsedRange,0x10,1,0);
  return local_20;
}


// ===== MDFoldTextAttachment::setCollapsedRange: @ 000134b0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDFoldTextAttachment::setCollapsedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + (long)_collapsedRange,&local_20,0x10,1,0);
  return;
}


// ===== MDFoldTextAttachment::.cxx_destruct @ 000134ec =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDFoldTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  return;
}


