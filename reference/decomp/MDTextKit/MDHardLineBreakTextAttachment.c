// ===== MDHardLineBreakTextAttachment::drawAttachmentInRect: @ 000274dc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDHardLineBreakTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::arrowColor(param_1);
  objc_stub::drawHardLineBreakWithFrame_fillColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,(long)param_3.field0_0x0.field0_0x0,
             (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
             (long)param_3.field1_0x10.field1_0x8,IVar1);
  return;
}


// ===== MDHardLineBreakTextAttachment::decodeWithCoder: @ 0002754c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHardLineBreakTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDHardLineBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_arrowColor);
  objc_stub::setArrowColor_(param_1,IVar1);
  return;
}


// ===== MDHardLineBreakTextAttachment::encodeWithCoder: @ 000275e0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHardLineBreakTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDHardLineBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::arrowColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_arrowColor);
  return;
}


// ===== MDHardLineBreakTextAttachment::copyWithZone: @ 00027674 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDHardLineBreakTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDHardLineBreakTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = objc_stub::arrowColor(param_1);
  objc_stub::setArrowColor_(self,IVar1);
  return self;
}


// ===== MDHardLineBreakTextAttachment::arrowColor @ 000276e4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHardLineBreakTextAttachment::arrowColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_arrowColor);
}


// ===== MDHardLineBreakTextAttachment::setArrowColor: @ 000276f4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHardLineBreakTextAttachment::setArrowColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_arrowColor) = param_3;
  return;
}


// ===== MDHardLineBreakTextAttachment::.cxx_destruct @ 00027700 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDHardLineBreakTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_arrowColor) = 0;
  return;
}


