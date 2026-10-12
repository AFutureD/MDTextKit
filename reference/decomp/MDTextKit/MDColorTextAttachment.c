// ===== MDColorTextAttachment::drawAttachmentInRect: @ 00014a7c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDColorTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID IVar2;
  double extraout_d0;
  double extraout_d0_00;
  
  IVar1 = objc_stub::bezierPathWithOvalInRect_
                    ((ID)&_OBJC_CLASS___NSBezierPath,(long)param_3.field0_0x0.field0_0x0,
                     (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
                     (long)param_3.field1_0x10.field1_0x8);
  objc_stub::borderWidth(param_1);
  objc_stub::setLineWidth_(IVar1);
  IVar2 = objc_stub::color(param_1);
  objc_stub::setFill(IVar2);
  objc_stub::fill(IVar1);
  objc_stub::borderWidth(param_1);
  objc_stub::borderWidth(param_1);
  _CGRectInset((long)param_3.field0_0x0.field0_0x0,(long)param_3.field0_0x0.field1_0x8,
               (long)param_3.field1_0x10.field0_0x0,(long)param_3.field1_0x10.field1_0x8,
               extraout_d0 * 0.5,extraout_d0_00 * 0.5);
  IVar1 = objc_stub::bezierPathWithOvalInRect_((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::borderWidth(param_1);
  objc_stub::setLineWidth_(IVar1);
  IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = objc_stub::colorWithAlphaComponent_(IVar2,0x3fd3333333333333);
  objc_stub::setStroke(IVar2);
  objc_stub::stroke(IVar1);
  return;
}


// ===== MDColorTextAttachment::decodeWithCoder: @ 00014bdc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDColorTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDColorTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_borderWidth);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setBorderWidth_(param_1,(double)(IVar1 & 0xffffffff));
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_color);
  objc_stub::setColor_(param_1,IVar1);
  return;
}


// ===== MDColorTextAttachment::encodeWithCoder: @ 00014ca4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDColorTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDColorTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  objc_stub::borderWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_borderWidth);
  IVar1 = objc_stub::color(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_color);
  return;
}


// ===== MDColorTextAttachment::copyWithZone: @ 00014d78 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDColorTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDColorTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  objc_stub::borderWidth(param_1);
  objc_stub::setBorderWidth_(self);
  IVar1 = objc_stub::color(param_1);
  objc_stub::setColor_(self,IVar1);
  return self;
}


// ===== MDColorTextAttachment::color @ 00014df8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDColorTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}


// ===== MDColorTextAttachment::setColor: @ 00014e08 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDColorTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}


// ===== MDColorTextAttachment::borderWidth @ 00014e14 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDColorTextAttachment::borderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderWidth);
}


// ===== MDColorTextAttachment::setBorderWidth: @ 00014e24 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDColorTextAttachment::setBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderWidth) = param_3;
  return;
}


// ===== MDColorTextAttachment::.cxx_destruct @ 00014e34 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDColorTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}


