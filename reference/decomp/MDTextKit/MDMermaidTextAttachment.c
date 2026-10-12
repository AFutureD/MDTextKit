// ===== MDMermaidTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0003b7e0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x70 bytes */

CGRect MDMermaidTextAttachment::
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
  CGRect CVar6;
  objc_super local_80;
  
  dVar5 = param_4.field1_0x10.field1_0x8;
  dVar4 = param_4.field1_0x10.field0_0x0;
  dVar2 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  dVar3 = dVar2;
  objc_stub::maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  objc_stub::attachmentSize(param_1);
  if (((dVar3 != 0.0) && (objc_stub::attachmentSize(param_1), extraout_d0_01 != 0.0)) &&
     (IVar1 = objc_stub::fullLine(param_1), dVar4 = extraout_d0_00, (IVar1 & 1) == 0)) {
    objc_stub::attachmentSize(param_1);
    dVar5 = extraout_d0_00 * dVar3;
    objc_stub::attachmentSize(param_1);
    objc_stub::attachmentSize(param_1);
    dVar5 = (double)(float)(int)(dVar5 / extraout_d0_02);
    if (dVar3 <= dVar5) {
      dVar5 = dVar3;
    }
  }
  CVar6.field0_0x0.field1_0x8 = dVar2;
  CVar6.field0_0x0.field0_0x0 = extraout_d0;
  CVar6.field1_0x10.field1_0x8 = dVar5;
  CVar6.field1_0x10.field0_0x0 = dVar4;
  return CVar6;
}


// ===== MDMermaidTextAttachment::wantAttachmentBaselineOffset @ 0003b950 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDMermaidTextAttachment::wantAttachmentBaselineOffset(ID param_1,SEL param_2)

{
  return 1;
}


// ===== MDMermaidTextAttachment::decodeWithCoder: @ 0003b958 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMermaidTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_mermaidCode);
  objc_stub::setMermaidCode_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_font);
  objc_stub::setFont_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_paragraphStyle);
  objc_stub::setParagraphStyle_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_textColor);
  objc_stub::setTextColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_backgroundColor);
  objc_stub::setBackgroundColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_fullLine);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setFullLine_(param_1,IVar1);
  return;
}


// ===== MDMermaidTextAttachment::encodeWithCoder: @ 0003bae4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMermaidTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::mermaidCode(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_mermaidCode);
  IVar1 = objc_stub::font(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_font);
  IVar1 = objc_stub::paragraphStyle(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_paragraphStyle);
  IVar1 = objc_stub::textColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_textColor);
  IVar1 = objc_stub::backgroundColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_backgroundColor);
  IVar1 = objc_stub::fullLine(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_fullLine);
  return;
}


// ===== MDMermaidTextAttachment::copyWithZone: @ 0003bc7c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDMermaidTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDMermaidTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = objc_stub::mermaidCode(param_1);
  objc_stub::setMermaidCode_(self,IVar1);
  IVar1 = objc_stub::font(param_1);
  objc_stub::setFont_(self,IVar1);
  IVar1 = objc_stub::paragraphStyle(param_1);
  objc_stub::setParagraphStyle_(self,IVar1);
  IVar1 = objc_stub::textColor(param_1);
  objc_stub::setTextColor_(self,IVar1);
  IVar1 = objc_stub::backgroundColor(param_1);
  objc_stub::setBackgroundColor_(self,IVar1);
  IVar1 = objc_stub::fullLine(param_1);
  objc_stub::setFullLine_(self,IVar1);
  return self;
}


// ===== MDMermaidTextAttachment::mermaidCode @ 0003bda8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMermaidTextAttachment::mermaidCode(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mermaidCode);
}


// ===== MDMermaidTextAttachment::setMermaidCode: @ 0003bdb8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMermaidTextAttachment::setMermaidCode_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_mermaidCode) = param_3;
  return;
}


// ===== MDMermaidTextAttachment::font @ 0003bdc4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMermaidTextAttachment::font(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_font);
}


// ===== MDMermaidTextAttachment::setFont: @ 0003bdd4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMermaidTextAttachment::setFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_font) = param_3;
  return;
}


// ===== MDMermaidTextAttachment::paragraphStyle @ 0003bde0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMermaidTextAttachment::paragraphStyle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_paragraphStyle);
}


// ===== MDMermaidTextAttachment::setParagraphStyle: @ 0003bdf0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMermaidTextAttachment::setParagraphStyle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_paragraphStyle) = param_3;
  return;
}


// ===== MDMermaidTextAttachment::textColor @ 0003bdfc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMermaidTextAttachment::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}


// ===== MDMermaidTextAttachment::setTextColor: @ 0003be0c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMermaidTextAttachment::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}


// ===== MDMermaidTextAttachment::backgroundColor @ 0003be18 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMermaidTextAttachment::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}


// ===== MDMermaidTextAttachment::setBackgroundColor: @ 0003be28 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDMermaidTextAttachment::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}


// ===== MDMermaidTextAttachment::fullLine @ 0003be34 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDMermaidTextAttachment::fullLine(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_fullLine) & 1;
}


// ===== MDMermaidTextAttachment::setFullLine: @ 0003be48 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDMermaidTextAttachment::setFullLine_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_fullLine) = (char)param_3;
  return;
}


// ===== MDMermaidTextAttachment::.cxx_destruct @ 0003be58 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDMermaidTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_paragraphStyle) = 0;
  *(undefined8 *)(param_1 + (long)_font) = 0;
  *(undefined8 *)(param_1 + (long)_mermaidCode) = 0;
  return;
}


