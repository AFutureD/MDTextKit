// ===== MDImageTextAttachment::initWithRepresentedAttributedText: @ 0001bd4c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDImageTextAttachment::initWithRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDImageTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"initWithRepresentedAttributedText:");
  if (self != 0) {
    objc_stub::setAlwaysUseFullWidth_(self,0);
  }
  return self;
}


// ===== MDImageTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0001bda0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x70 bytes */

CGRect MDImageTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  CGRect CVar7;
  objc_super local_80;
  
  dVar5 = param_4.field1_0x10.field1_0x8;
  dVar4 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDImageTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  dVar3 = dVar2;
  objc_stub::maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  if ((extraout_d0_00 <= dVar4) || (IVar1 = objc_stub::alwaysUseFullWidth(param_1), (int)IVar1 != 0)
     ) {
    objc_stub::attachmentSize(param_1);
    dVar4 = extraout_d0_00 * dVar3;
    objc_stub::attachmentSize(param_1);
    dVar5 = (double)(float)(int)(dVar4 / extraout_d0_01);
    dVar4 = extraout_d0_00;
  }
  objc_stub::size(param_3);
  if (dVar3 <= param_7.field1_0x10.field1_0x8) {
    param_7.field1_0x10.field1_0x8 = dVar3;
  }
  dVar6 = (double)NEON_ucvtf((long)param_7.field1_0x10.field1_0x8);
  if (dVar6 < dVar5) {
    objc_stub::attachmentSize(param_1);
    objc_stub::attachmentSize(param_1);
    dVar4 = (double)(float)(int)((extraout_d0_02 * dVar6) / dVar3);
    dVar5 = dVar6;
  }
  CVar7.field0_0x0.field1_0x8 = dVar2;
  CVar7.field0_0x0.field0_0x0 = extraout_d0;
  CVar7.field1_0x10.field1_0x8 = dVar5;
  CVar7.field1_0x10.field0_0x0 = dVar4;
  return CVar7;
}


// ===== MDImageTextAttachment::decodeWithCoder: @ 0001bf2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDImageTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDImageTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  self = objc_stub::decodeObjectForKey_(param_3,&cf_maxTextContainerWidth);
  objc_stub::doubleValue(self);
  objc_stub::setMaxTextContainerWidth_(param_1);
  return;
}


// ===== MDImageTextAttachment::encodeWithCoder: @ 0001bfc4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDImageTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDImageTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  objc_stub::maxTextContainerWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_maxTextContainerWidth);
  return;
}


// ===== MDImageTextAttachment::copyWithZone: @ 0001c068 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDImageTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDImageTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  objc_stub::maxTextContainerWidth(param_1);
  objc_stub::setMaxTextContainerWidth_(self);
  return self;
}


// ===== MDImageTextAttachment::maxTextContainerWidth @ 0001c0c0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDImageTextAttachment::maxTextContainerWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxTextContainerWidth);
}


// ===== MDImageTextAttachment::setMaxTextContainerWidth: @ 0001c0d0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDImageTextAttachment::setMaxTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxTextContainerWidth) = param_3;
  return;
}


// ===== MDImageTextAttachment::alwaysUseFullWidth @ 0001c0e0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDImageTextAttachment::alwaysUseFullWidth(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_alwaysUseFullWidth) & 1;
}


// ===== MDImageTextAttachment::setAlwaysUseFullWidth: @ 0001c0f4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDImageTextAttachment::setAlwaysUseFullWidth_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_alwaysUseFullWidth) = (char)param_3;
  return;
}


