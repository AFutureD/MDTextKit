// ===== MDFileTextAttachment::setFilePath: @ 000061c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileTextAttachment::setFilePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined *puStack_e0;
  ID local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  code *pcStack_70;
  undefined8 local_68;
  
  lVar4 = (long)_filePath;
  if (*(ID *)(param_1 + lVar4) == 0) {
    *(ID *)(param_1 + lVar4) = param_3;
  }
  else {
    IVar1 = objc_stub::isEqualToString_(*(ID *)(param_1 + lVar4),param_3);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::percentEscapedURL_((ID)&_OBJC_CLASS___PMKAST,param_3);
      local_88 = &local_90;
      local_90 = 0;
      local_80 = 0x3032000000;
      local_78 = ___Block_byref_object_copy_;
      pcStack_70 = ___Block_byref_object_dispose_;
      local_68 = 0;
      local_b8 = &local_c0;
      local_c0 = 0;
      local_b0 = 0x3010000000;
      local_a8 = "";
      IVar2 = objc_stub::representedAttributedText(param_1);
      IVar3 = objc_stub::representedAttributedText(param_1);
      IVar3 = objc_stub::length(IVar3);
      local_f8 = PTR___NSConcreteStackBlock_0005ebe0;
      local_f0 = 0xc2000000;
      local_e8 = ___36__MDFileTextAttachment_setFilePath___block_invoke;
      puStack_e0 = &
                   ___block_descriptor_56_e8_32s40r48r_e117_v128__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72__NSRange_QQ_88__NSRange_QQ_104_B120l
      ;
      puStack_d0 = &local_90;
      local_c8 = &local_c0;
      local_d8 = param_1;
      objc_stub::enumerateLinkInRange_options_usingBlock_(IVar2,0,IVar3,0,&local_f8);
      IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
      IVar3 = objc_stub::representedAttributedText(local_88[5]);
      IVar3 = objc_stub::attributesAtIndex_effectiveRange_(IVar3,0,0);
      IVar1 = objc_stub::initWithString_attributes_(IVar2,IVar1,IVar3);
      objc_stub::setRepresentedAttributedText_(local_88[5],IVar1);
      IVar1 = objc_stub::representedAttributedText(param_1);
      IVar1 = objc_stub::mutableCopy(IVar1);
      IVar2 = objc_stub::lastPathComponent(param_3);
      IVar2 = objc_stub::safeLabelString_((ID)&_OBJC_CLASS___PMKAST,IVar2);
      objc_stub::replaceCharactersInRange_withString_(IVar1,local_b8[4],local_b8[5],IVar2);
      objc_stub::setRepresentedAttributedText_(param_1,IVar1);
      *(ID *)(param_1 + lVar4) = param_3;
      __Block_object_dispose(&local_c0,8);
      __Block_object_dispose(&local_90,8);
    }
  }
  return;
}


// ===== MDFileTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 000065c8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x70 bytes */

CGRect MDFileTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  CGRect CVar6;
  objc_super local_80;
  
  dVar5 = param_4.field1_0x10.field1_0x8;
  dVar4 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDFileTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  dVar3 = dVar2;
  objc_stub::maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  if ((extraout_d0_00 <= dVar4) &&
     (IVar1 = objc_stub::keepFormFactorDuringScaling(param_1), dVar4 = extraout_d0_00,
     (int)IVar1 != 0)) {
    objc_stub::attachmentSize(param_1);
    objc_stub::attachmentSize(param_1);
    dVar5 = (double)(float)(int)((extraout_d0_00 * dVar3) / extraout_d0_01);
  }
  CVar6.field0_0x0.field1_0x8 = dVar2;
  CVar6.field0_0x0.field0_0x0 = extraout_d0;
  CVar6.field1_0x10.field1_0x8 = dVar5;
  CVar6.field1_0x10.field0_0x0 = dVar4;
  return CVar6;
}


// ===== MDFileTextAttachment::decodeWithCoder: @ 00006710 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFileTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_maxTextContainerWidth);
  objc_stub::doubleValue(IVar1);
  objc_stub::setMaxTextContainerWidth_(param_1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_basePointSize);
  objc_stub::doubleValue(IVar1);
  objc_stub::setBasePointSize_(param_1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_keepFormFactorDuringScaling);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setKeepFormFactorDuringScaling_(param_1,IVar1);
  return;
}


// ===== MDFileTextAttachment::encodeWithCoder: @ 0000680c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFileTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  objc_stub::maxTextContainerWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_maxTextContainerWidth);
  objc_stub::basePointSize(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_basePointSize);
  IVar1 = objc_stub::keepFormFactorDuringScaling(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_keepFormFactorDuringScaling);
  return;
}


// ===== MDFileTextAttachment::copyWithZone: @ 0000692c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDFileTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDFileTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  objc_stub::maxTextContainerWidth(param_1);
  objc_stub::setMaxTextContainerWidth_(self);
  objc_stub::basePointSize(param_1);
  objc_stub::setBasePointSize_(self);
  IVar1 = objc_stub::keepFormFactorDuringScaling(param_1);
  objc_stub::setKeepFormFactorDuringScaling_(self,IVar1);
  return self;
}


// ===== MDFileTextAttachment::filePath @ 000069a8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFileTextAttachment::filePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_filePath);
}


// ===== MDFileTextAttachment::maxTextContainerWidth @ 000069b8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDFileTextAttachment::maxTextContainerWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxTextContainerWidth);
}


// ===== MDFileTextAttachment::setMaxTextContainerWidth: @ 000069c8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileTextAttachment::setMaxTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxTextContainerWidth) = param_3;
  return;
}


// ===== MDFileTextAttachment::basePointSize @ 000069d8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDFileTextAttachment::basePointSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_basePointSize);
}


// ===== MDFileTextAttachment::setBasePointSize: @ 000069e8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileTextAttachment::setBasePointSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_basePointSize) = param_3;
  return;
}


// ===== MDFileTextAttachment::keepFormFactorDuringScaling @ 000069f8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDFileTextAttachment::keepFormFactorDuringScaling(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_keepFormFactorDuringScaling) & 1;
}


// ===== MDFileTextAttachment::setKeepFormFactorDuringScaling: @ 00006a0c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDFileTextAttachment::setKeepFormFactorDuringScaling_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_keepFormFactorDuringScaling) = (char)param_3;
  return;
}


// ===== MDFileTextAttachment::.cxx_destruct @ 00006a1c =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDFileTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_filePath) = 0;
  return;
}


