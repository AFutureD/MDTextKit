// ===== MDLinkTextAttachment::drawAttachmentInRect: @ 00030e10 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLinkTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::color(param_1);
  objc_stub::drawLinkIconWithFrame_fillColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,(long)param_3.field0_0x0.field0_0x0,
             (long)param_3.field0_0x0.field1_0x8,(long)param_3.field1_0x10.field0_0x0,
             (long)param_3.field1_0x10.field1_0x8,IVar1);
  return;
}


// ===== MDLinkTextAttachment::url @ 00030e7c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkTextAttachment::url(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code *local_48;
  code *pcStack_40;
  undefined8 local_38;
  
  local_58 = &local_60;
  local_60 = 0;
  local_50 = 0x3032000000;
  local_48 = ___Block_byref_object_copy_;
  pcStack_40 = ___Block_byref_object_dispose_;
  local_38 = 0;
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::length(IVar2);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = ___27__MDLinkTextAttachment_url__block_invoke;
  puStack_78 = &___block_descriptor_48_e8_32s40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  puStack_68 = &local_60;
  local_70 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (IVar1,*(undefined8 *)PTR__PMKLinkURLAttributeName_0005e9d0,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}


// ===== MDLinkTextAttachment::title @ 0003104c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkTextAttachment::title(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code *local_48;
  code *pcStack_40;
  undefined8 local_38;
  
  local_58 = &local_60;
  local_60 = 0;
  local_50 = 0x3032000000;
  local_48 = ___Block_byref_object_copy_;
  pcStack_40 = ___Block_byref_object_dispose_;
  local_38 = 0;
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::length(IVar2);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = ___29__MDLinkTextAttachment_title__block_invoke;
  puStack_78 = &___block_descriptor_48_e8_32s40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  puStack_68 = &local_60;
  local_70 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (IVar1,*(undefined8 *)PTR__PMKLinkTitleAttributeName_0005e9c8,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}


// ===== MDLinkTextAttachment::decodeWithCoder: @ 00031204 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLinkTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDLinkTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_color);
  objc_stub::setColor_(param_1,IVar1);
  return;
}


// ===== MDLinkTextAttachment::encodeWithCoder: @ 00031298 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLinkTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDLinkTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::color(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_color);
  return;
}


// ===== MDLinkTextAttachment::copyWithZone: @ 0003132c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDLinkTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDLinkTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = objc_stub::color(param_1);
  objc_stub::setColor_(self,IVar1);
  return self;
}


// ===== MDLinkTextAttachment::color @ 0003139c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}


// ===== MDLinkTextAttachment::setColor: @ 000313ac =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLinkTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}


// ===== MDLinkTextAttachment::.cxx_destruct @ 000313b8 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDLinkTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}


