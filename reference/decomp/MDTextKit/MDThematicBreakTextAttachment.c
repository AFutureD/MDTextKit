// ===== MDThematicBreakTextAttachment::drawAttachmentInRect: @ 000387a4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDThematicBreakTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  double extraout_d0;
  double dVar2;
  
  dVar2 = param_3.field1_0x10.field0_0x0;
  objc_stub::lineWidth(param_1);
  IVar1 = objc_stub::lineColor(param_1);
  objc_stub::setFill(IVar1);
  IVar1 = objc_stub::bezierPathWithRect_
                    ((ID)&_OBJC_CLASS___NSBezierPath,
                     (long)(param_3.field0_0x0.field0_0x0 + (dVar2 - dVar2) * 0.5),
                     (long)(param_3.field0_0x0.field1_0x8 +
                           (param_3.field1_0x10.field1_0x8 - extraout_d0) * 0.5),dVar2,extraout_d0);
  objc_stub::fill(IVar1);
  return;
}


// ===== MDThematicBreakTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 00038864 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x70 bytes */

CGRect MDThematicBreakTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  double extraout_d0;
  double extraout_d0_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  CGRect CVar5;
  objc_super local_80;
  
  dVar4 = param_4.field1_0x10.field1_0x8;
  dVar2 = param_4.field1_0x10.field0_0x0;
  dVar1 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDThematicBreakTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  objc_stub::maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
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

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDThematicBreakTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDThematicBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_lineWidth);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setLineWidth_(param_1,(double)(IVar1 & 0xffffffff));
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_lineColor);
  objc_stub::setLineColor_(param_1,IVar1);
  return;
}


// ===== MDThematicBreakTextAttachment::encodeWithCoder: @ 00038a38 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDThematicBreakTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDThematicBreakTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  objc_stub::lineWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_lineWidth);
  IVar1 = objc_stub::lineColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_lineColor);
  return;
}


// ===== MDThematicBreakTextAttachment::copyWithZone: @ 00038b0c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDThematicBreakTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDThematicBreakTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  objc_stub::lineWidth(param_1);
  objc_stub::setLineWidth_(self);
  IVar1 = objc_stub::lineColor(param_1);
  objc_stub::setLineColor_(self,IVar1);
  return self;
}


// ===== MDThematicBreakTextAttachment::lineWidth @ 00038b8c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDThematicBreakTextAttachment::lineWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lineWidth);
}


// ===== MDThematicBreakTextAttachment::setLineWidth: @ 00038b9c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDThematicBreakTextAttachment::setLineWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lineWidth) = param_3;
  return;
}


// ===== MDThematicBreakTextAttachment::lineColor @ 00038bac =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDThematicBreakTextAttachment::lineColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_lineColor);
}


// ===== MDThematicBreakTextAttachment::setLineColor: @ 00038bbc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDThematicBreakTextAttachment::setLineColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_lineColor) = param_3;
  return;
}


// ===== MDThematicBreakTextAttachment::.cxx_destruct @ 00038bc8 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDThematicBreakTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_lineColor) = 0;
  return;
}


