// ===== MDLinkPreviewTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0003b0c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x70 bytes */

CGRect MDLinkPreviewTextAttachment::
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
  double dVar5;
  CGRect CVar6;
  objc_super local_80;
  
  dVar5 = param_4.field1_0x10.field1_0x8;
  dVar2 = param_4.field1_0x10.field0_0x0;
  dVar1 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::MDLinkPreviewTextAttachment;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  dVar3 = dVar2;
  dVar4 = dVar5;
  objc_stub::maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  objc_stub::bounds(param_1);
  if (extraout_d0_00 < dVar3) {
    objc_stub::bounds(param_1);
    objc_stub::bounds(param_1);
    dVar5 = (double)(float)(int)((extraout_d0_00 * dVar4) / dVar3);
    dVar2 = extraout_d0_00;
  }
  CVar6.field0_0x0.field1_0x8 = dVar1;
  CVar6.field0_0x0.field0_0x0 = extraout_d0;
  CVar6.field1_0x10.field1_0x8 = dVar5;
  CVar6.field1_0x10.field0_0x0 = dVar2;
  return CVar6;
}


// ===== MDLinkPreviewTextAttachment::label @ 0003b204 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkPreviewTextAttachment::label(ID param_1,SEL param_2)

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
  local_80 = ___36__MDLinkPreviewTextAttachment_label__block_invoke;
  puStack_78 = &___block_descriptor_48_e8_32s40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  puStack_68 = &local_60;
  local_70 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (IVar1,*(undefined8 *)PTR__PMKLinkLabelAttributeName_0005e9b8,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}


// ===== MDLinkPreviewTextAttachment::url @ 0003b3d4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkPreviewTextAttachment::url(ID param_1,SEL param_2)

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
  local_80 = ___34__MDLinkPreviewTextAttachment_url__block_invoke;
  puStack_78 = &___block_descriptor_48_e8_32s40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  puStack_68 = &local_60;
  local_70 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (IVar1,*(undefined8 *)PTR__PMKLinkURLAttributeName_0005e9d0,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}


// ===== MDLinkPreviewTextAttachment::title @ 0003b58c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLinkPreviewTextAttachment::title(ID param_1,SEL param_2)

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
  local_80 = ___36__MDLinkPreviewTextAttachment_title__block_invoke;
  puStack_78 = &___block_descriptor_48_e8_32s40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  puStack_68 = &local_60;
  local_70 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (IVar1,*(undefined8 *)PTR__PMKLinkTitleAttributeName_0005e9c8,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}


// ===== MDLinkPreviewTextAttachment::decodeWithCoder: @ 0003b744 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLinkPreviewTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::MDLinkPreviewTextAttachment;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"decodeWithCoder:");
  return;
}


// ===== MDLinkPreviewTextAttachment::encodeWithCoder: @ 0003b778 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLinkPreviewTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::MDLinkPreviewTextAttachment;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"encodeWithCoder:");
  return;
}


// ===== MDLinkPreviewTextAttachment::copyWithZone: @ 0003b7ac =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDLinkPreviewTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::MDLinkPreviewTextAttachment;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"copyWithZone:");
  return IVar1;
}


