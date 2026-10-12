// ===== MDMathTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 00039254 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x70 bytes */

CGRect MDMathTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double dVar2;
  double dVar3;
  double dVar4;
  CGRect CVar5;
  objc_super local_80;
  
  dVar4 = param_4.field1_0x10.field1_0x8;
  dVar3 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDMathTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  objc_stub::maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  if ((extraout_d0_00 < dVar3) || (IVar1 = objc_stub::fullLine(param_1), (int)IVar1 != 0)) {
    dVar3 = extraout_d0_00;
  }
  CVar5.field0_0x0.field1_0x8 = dVar2;
  CVar5.field0_0x0.field0_0x0 = extraout_d0;
  CVar5.field1_0x10.field1_0x8 = dVar4;
  CVar5.field1_0x10.field0_0x0 = dVar3;
  return CVar5;
}


// ===== MDMathTextAttachment::decodeWithCoder: @ 00039378 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDMathTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_mathString);
  objc_stub::setMathString_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_font);
  objc_stub::setFont_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_paragraphStyle);
  objc_stub::setParagraphStyle_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_fullLine);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setFullLine_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_textColor);
  objc_stub::setTextColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_backgroundColor);
  objc_stub::setBackgroundColor_(param_1,IVar1);
  return;
}


// ===== MDMathTextAttachment::encodeWithCoder: @ 00039500 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDMathTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::mathString(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_mathString);
  IVar1 = objc_stub::font(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_font);
  IVar1 = objc_stub::paragraphStyle(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_paragraphStyle);
  IVar1 = objc_stub::fullLine(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_fullLine);
  IVar1 = objc_stub::textColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_textColor);
  IVar1 = objc_stub::backgroundColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_backgroundColor);
  return;
}


// ===== MDMathTextAttachment::copyWithZone: @ 00039698 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDMathTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDMathTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = objc_stub::mathString(param_1);
  objc_stub::setMathString_(self,IVar1);
  IVar1 = objc_stub::font(param_1);
  objc_stub::setFont_(self,IVar1);
  IVar1 = objc_stub::paragraphStyle(param_1);
  objc_stub::setParagraphStyle_(self,IVar1);
  IVar1 = objc_stub::fullLine(param_1);
  objc_stub::setFullLine_(self,IVar1);
  IVar1 = objc_stub::textColor(param_1);
  objc_stub::setTextColor_(self,IVar1);
  IVar1 = objc_stub::backgroundColor(param_1);
  objc_stub::setBackgroundColor_(self,IVar1);
  return self;
}


// ===== MDMathTextAttachment::mathString @ 000397c4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMathTextAttachment::mathString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mathString);
}


// ===== MDMathTextAttachment::setMathString: @ 000397d4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::setMathString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_mathString) = param_3;
  return;
}


// ===== MDMathTextAttachment::font @ 000397e0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMathTextAttachment::font(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_font);
}


// ===== MDMathTextAttachment::setFont: @ 000397f0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::setFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_font) = param_3;
  return;
}


// ===== MDMathTextAttachment::paragraphStyle @ 000397fc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMathTextAttachment::paragraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_paragraphStyle);
}


// ===== MDMathTextAttachment::setParagraphStyle: @ 0003980c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::setParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_paragraphStyle) = param_3;
  return;
}


// ===== MDMathTextAttachment::textColor @ 00039818 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMathTextAttachment::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}


// ===== MDMathTextAttachment::setTextColor: @ 00039828 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}


// ===== MDMathTextAttachment::backgroundColor @ 00039834 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMathTextAttachment::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}


// ===== MDMathTextAttachment::setBackgroundColor: @ 00039844 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}


// ===== MDMathTextAttachment::fullLine @ 00039850 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDMathTextAttachment::fullLine(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_fullLine) & 1;
}


// ===== MDMathTextAttachment::setFullLine: @ 00039864 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDMathTextAttachment::setFullLine_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_fullLine) = (char)param_3;
  return;
}


// ===== MDMathTextAttachment::pdfData @ 00039874 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMathTextAttachment::pdfData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_pdfData);
}


// ===== MDMathTextAttachment::setPdfData: @ 00039884 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMathTextAttachment::setPdfData_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_pdfData) = param_3;
  return;
}


// ===== MDMathTextAttachment::.cxx_destruct @ 00039890 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDMathTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_pdfData) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_paragraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_font) = 0;
  *(undefined8 *)(param_1 + (long)_mathString) = 0;
  return;
}


