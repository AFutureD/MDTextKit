// ===== MDLinkPreviewTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0003b0c4 =====

CGRect MDLinkPreviewTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar6;
  
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
  maxWidthAttachmentAtIndex_forTextContainer_(param_1,param_6,param_3);
  bounds(param_1);
  if (extraout_d0_00 < dVar3) {
    bounds(param_1);
    bounds(param_1);
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

ID MDLinkPreviewTextAttachment::label(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar2 = representedAttributedText(param_1);
  IVar2 = length(IVar2);
  local_80 = ___36__MDLinkPreviewTextAttachment_label__block_invoke;
  local_70 = param_1;
  enumerateAttribute_inRange_options_usingBlock_
            (IVar1,_PMKLinkLabelAttributeName,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}

// ===== MDLinkPreviewTextAttachment::url @ 0003b3d4 =====

ID MDLinkPreviewTextAttachment::url(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar2 = representedAttributedText(param_1);
  IVar2 = length(IVar2);
  local_80 = ___34__MDLinkPreviewTextAttachment_url__block_invoke;
  local_70 = param_1;
  enumerateAttribute_inRange_options_usingBlock_
            (IVar1,_PMKLinkURLAttributeName,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}

// ===== MDLinkPreviewTextAttachment::title @ 0003b58c =====

ID MDLinkPreviewTextAttachment::title(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar2 = representedAttributedText(param_1);
  IVar2 = length(IVar2);
  local_80 = ___36__MDLinkPreviewTextAttachment_title__block_invoke;
  local_70 = param_1;
  enumerateAttribute_inRange_options_usingBlock_
            (IVar1,_PMKLinkTitleAttributeName,0,IVar2,0,&local_90);
  IVar1 = local_58[5];
  __Block_object_dispose(&local_60,8);
  return IVar1;
}

// ===== MDLinkPreviewTextAttachment::decodeWithCoder: @ 0003b744 =====

void MDLinkPreviewTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_20.super_class = &objc::class_t::MDLinkPreviewTextAttachment;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"decodeWithCoder:");
  return;
}

// ===== MDLinkPreviewTextAttachment::encodeWithCoder: @ 0003b778 =====

void MDLinkPreviewTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_20.super_class = &objc::class_t::MDLinkPreviewTextAttachment;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"encodeWithCoder:");
  return;
}

// ===== MDLinkPreviewTextAttachment::copyWithZone: @ 0003b7ac =====

ID MDLinkPreviewTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_20.super_class = &objc::class_t::MDLinkPreviewTextAttachment;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"copyWithZone:");
  return IVar1;
}

