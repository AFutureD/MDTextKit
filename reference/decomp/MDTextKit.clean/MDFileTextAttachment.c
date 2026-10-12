// ===== MDFileTextAttachment::setFilePath: @ 000061c4 =====

void MDFileTextAttachment::setFilePath_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar4 = (long)_filePath;
  if (*(ID *)(param_1 + lVar4) == 0) {
    *(ID *)(param_1 + lVar4) = param_3;
  }
  else {
    IVar1 = isEqualToString_(*(ID *)(param_1 + lVar4),param_3);
    if ((IVar1 & 1) == 0) {
      IVar1 = percentEscapedURL_(PMKAST,param_3);
      IVar2 = representedAttributedText(param_1);
      IVar3 = representedAttributedText(param_1);
      IVar3 = length(IVar3);
      local_e8 = ___36__MDFileTextAttachment_setFilePath___block_invoke;
      local_d8 = param_1;
      enumerateLinkInRange_options_usingBlock_(IVar2,0,IVar3,0,&local_f8);
      IVar2 = _objc_alloc(NSAttributedString);
      IVar3 = representedAttributedText(local_88[5]);
      IVar3 = attributesAtIndex_effectiveRange_(IVar3,0,0);
      IVar1 = initWithString_attributes_(IVar2,IVar1,IVar3);
      setRepresentedAttributedText_(local_88[5],IVar1);
      IVar1 = representedAttributedText(param_1);
      IVar1 = mutableCopy(IVar1);
      IVar2 = lastPathComponent(param_3);
      IVar2 = safeLabelString_(PMKAST,IVar2);
      replaceCharactersInRange_withString_(IVar1,local_b8[4],local_b8[5],IVar2);
      setRepresentedAttributedText_(param_1,IVar1);
      *(ID *)(param_1 + lVar4) = param_3;
      __Block_object_dispose(&local_c0,8);
      __Block_object_dispose(&local_90,8);
    }
  }
  return;
}

// ===== MDFileTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 000065c8 =====

CGRect MDFileTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar6;
  
  dVar5 = param_4.field1_0x10.field1_0x8;
  dVar4 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDFileTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  dVar3 = dVar2;
  maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  if ((extraout_d0_00 <= dVar4) &&
     (IVar1 = keepFormFactorDuringScaling(param_1), dVar4 = extraout_d0_00,
     (int)IVar1 != 0)) {
    attachmentSize(param_1);
    attachmentSize(param_1);
    dVar5 = (double)(float)(int)((extraout_d0_00 * dVar3) / extraout_d0_01);
  }
  CVar6.field0_0x0.field1_0x8 = dVar2;
  CVar6.field0_0x0.field0_0x0 = extraout_d0;
  CVar6.field1_0x10.field1_0x8 = dVar5;
  CVar6.field1_0x10.field0_0x0 = dVar4;
  return CVar6;
}

// ===== MDFileTextAttachment::decodeWithCoder: @ 00006710 =====

void MDFileTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDFileTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_maxTextContainerWidth);
  doubleValue(IVar1);
  setMaxTextContainerWidth_(param_1);
  IVar1 = decodeObjectForKey_(param_3,&cf_basePointSize);
  doubleValue(IVar1);
  setBasePointSize_(param_1);
  IVar1 = decodeObjectForKey_(param_3,&cf_keepFormFactorDuringScaling);
  IVar1 = boolValue(IVar1);
  setKeepFormFactorDuringScaling_(param_1,IVar1);
  return;
}

// ===== MDFileTextAttachment::encodeWithCoder: @ 0000680c =====

void MDFileTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDFileTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  maxTextContainerWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_maxTextContainerWidth);
  basePointSize(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_basePointSize);
  IVar1 = keepFormFactorDuringScaling(param_1);
  IVar1 = numberWithBool_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_keepFormFactorDuringScaling);
  return;
}

// ===== MDFileTextAttachment::copyWithZone: @ 0000692c =====

ID MDFileTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDFileTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  maxTextContainerWidth(param_1);
  setMaxTextContainerWidth_(self);
  basePointSize(param_1);
  setBasePointSize_(self);
  IVar1 = keepFormFactorDuringScaling(param_1);
  setKeepFormFactorDuringScaling_(self,IVar1);
  return self;
}

// ===== MDFileTextAttachment::filePath @ 000069a8 =====

ID MDFileTextAttachment::filePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_filePath);
}

// ===== MDFileTextAttachment::maxTextContainerWidth @ 000069b8 =====

double MDFileTextAttachment::maxTextContainerWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxTextContainerWidth);
}

// ===== MDFileTextAttachment::setMaxTextContainerWidth: @ 000069c8 =====

void MDFileTextAttachment::setMaxTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxTextContainerWidth) = param_3;
  return;
}

// ===== MDFileTextAttachment::basePointSize @ 000069d8 =====

double MDFileTextAttachment::basePointSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_basePointSize);
}

// ===== MDFileTextAttachment::setBasePointSize: @ 000069e8 =====

void MDFileTextAttachment::setBasePointSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_basePointSize) = param_3;
  return;
}

// ===== MDFileTextAttachment::keepFormFactorDuringScaling @ 000069f8 =====

bool MDFileTextAttachment::keepFormFactorDuringScaling(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_keepFormFactorDuringScaling) & 1;
}

// ===== MDFileTextAttachment::setKeepFormFactorDuringScaling: @ 00006a0c =====

void MDFileTextAttachment::setKeepFormFactorDuringScaling_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_keepFormFactorDuringScaling) = (char)param_3;
  return;
}

// ===== MDFileTextAttachment::.cxx_destruct @ 00006a1c =====

void MDFileTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_filePath) = 0;
  return;
}

