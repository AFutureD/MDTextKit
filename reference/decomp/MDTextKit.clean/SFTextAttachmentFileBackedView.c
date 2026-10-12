// ===== SFTextAttachmentFileBackedView::setFilePath: @ 0000c854 =====

void SFTextAttachmentFileBackedView::setFilePath_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar4 = (long)_filePath;
  if (*(ID *)(param_1 + lVar4) == 0) {
    *(ID *)(param_1 + lVar4) = param_3;
  }
  else {
    IVar1 = isEqualToString_(*(ID *)(param_1 + lVar4),param_3);
    if ((IVar1 & 1) == 0) {
      IVar1 = percentEscapedURL_
                        (PMKAST,*(undefined8 *)(param_1 + lVar4));
      IVar2 = percentEscapedURL_(PMKAST,param_3);
      IVar3 = representedAttributedText(param_1);
      IVar3 = string(IVar3);
      IVar1 = rangeOfString_(IVar3,IVar1);
      IVar3 = representedAttributedText(param_1);
      IVar3 = mutableCopy(IVar3);
      replaceCharactersInRange_withString_(IVar3,IVar1,extraout_x1,IVar2);
      setRepresentedAttributedText_(param_1,IVar3);
      *(ID *)(param_1 + lVar4) = param_3;
    }
  }
  return;
}

// ===== SFTextAttachmentFileBackedView::decodeWithCoder: @ 0000c9b4 =====

void SFTextAttachmentFileBackedView::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_filePath);
  setFilePath_(param_1,IVar1);
  return;
}

// ===== SFTextAttachmentFileBackedView::encodeWithCoder: @ 0000ca48 =====

void SFTextAttachmentFileBackedView::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = filePath(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_filePath);
  return;
}

// ===== SFTextAttachmentFileBackedView::description @ 0000cadc =====

ID SFTextAttachmentFileBackedView::description(ID param_1,SEL param_2)

{
  
  local_50.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  filePath(param_1);
  IVar1 = attachmentViewController(param_1);
  view(IVar1);
  IVar1 = stringWithFormat_(NSString,&cf___filepath___view___);
  return IVar1;
}

// ===== SFTextAttachmentFileBackedView::copyWithZone: @ 0000cbc0 =====

ID SFTextAttachmentFileBackedView::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = filePath(param_1);
  setFilePath_(self,IVar1);
  return self;
}

// ===== SFTextAttachmentFileBackedView::filePath @ 0000cc30 =====

ID SFTextAttachmentFileBackedView::filePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_filePath);
}

// ===== SFTextAttachmentFileBackedView::.cxx_destruct @ 0000cc40 =====

void SFTextAttachmentFileBackedView::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_filePath) = 0;
  return;
}

