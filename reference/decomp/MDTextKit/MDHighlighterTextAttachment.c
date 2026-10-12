// ===== MDHighlighterTextAttachment::drawAttachmentInRect: @ 000304f8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDHighlighterTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::color(param_1);
  IVar2 = objc_stub::accentColor(param_1);
  objc_stub::drawHighlighterWithFrame_fillColor_accentColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,(long)param_3.field0_0x0.field0_0x0,
             (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
             (long)param_3.field1_0x10.field1_0x8,IVar1,IVar2);
  return;
}


// ===== MDHighlighterTextAttachment::decodeWithCoder: @ 00030594 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHighlighterTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDHighlighterTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_color);
  objc_stub::setColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_accentColor);
  objc_stub::setAccentColor_(param_1,IVar1);
  return;
}


// ===== MDHighlighterTextAttachment::encodeWithCoder: @ 00030658 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHighlighterTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDHighlighterTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::color(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_color);
  IVar1 = objc_stub::accentColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_accentColor);
  return;
}


// ===== MDHighlighterTextAttachment::copyWithZone: @ 0003071c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDHighlighterTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDHighlighterTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = objc_stub::color(param_1);
  objc_stub::setColor_(self,IVar1);
  IVar1 = objc_stub::accentColor(param_1);
  objc_stub::setAccentColor_(self,IVar1);
  return self;
}


// ===== MDHighlighterTextAttachment::color @ 000307bc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHighlighterTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}


// ===== MDHighlighterTextAttachment::setColor: @ 000307cc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHighlighterTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}


// ===== MDHighlighterTextAttachment::accentColor @ 000307d8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHighlighterTextAttachment::accentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_accentColor);
}


// ===== MDHighlighterTextAttachment::setAccentColor: @ 000307e8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHighlighterTextAttachment::setAccentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_accentColor) = param_3;
  return;
}


// ===== MDHighlighterTextAttachment::.cxx_destruct @ 000307f4 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDHighlighterTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_accentColor) = 0;
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}


