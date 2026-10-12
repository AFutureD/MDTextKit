// ===== SFTextAttachmentFileBackedView::setFilePath: @ 0000c854 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachmentFileBackedView::setFilePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long lVar4;
  
  lVar4 = (long)_filePath;
  if (*(ID *)(param_1 + lVar4) == 0) {
    *(ID *)(param_1 + lVar4) = param_3;
  }
  else {
    IVar1 = objc_stub::isEqualToString_(*(ID *)(param_1 + lVar4),param_3);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::percentEscapedURL_
                        ((ID)&_OBJC_CLASS___PMKAST,*(undefined8 *)(param_1 + lVar4));
      IVar2 = objc_stub::percentEscapedURL_((ID)&_OBJC_CLASS___PMKAST,param_3);
      IVar3 = objc_stub::representedAttributedText(param_1);
      IVar3 = objc_stub::string(IVar3);
      IVar1 = objc_stub::rangeOfString_(IVar3,IVar1);
      IVar3 = objc_stub::representedAttributedText(param_1);
      IVar3 = objc_stub::mutableCopy(IVar3);
      objc_stub::replaceCharactersInRange_withString_(IVar3,IVar1,extraout_x1,IVar2);
      objc_stub::setRepresentedAttributedText_(param_1,IVar3);
      *(ID *)(param_1 + lVar4) = param_3;
    }
  }
  return;
}


// ===== SFTextAttachmentFileBackedView::decodeWithCoder: @ 0000c9b4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachmentFileBackedView::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_filePath);
  objc_stub::setFilePath_(param_1,IVar1);
  return;
}


// ===== SFTextAttachmentFileBackedView::encodeWithCoder: @ 0000ca48 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachmentFileBackedView::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::filePath(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_filePath);
  return;
}


// ===== SFTextAttachmentFileBackedView::description @ 0000cadc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachmentFileBackedView::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  objc_stub::filePath(param_1);
  IVar1 = objc_stub::attachmentViewController(param_1);
  objc_stub::view(IVar1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___filepath___view___);
  return IVar1;
}


// ===== SFTextAttachmentFileBackedView::copyWithZone: @ 0000cbc0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID SFTextAttachmentFileBackedView::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SFTextAttachmentFileBackedView;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = objc_stub::filePath(param_1);
  objc_stub::setFilePath_(self,IVar1);
  return self;
}


// ===== SFTextAttachmentFileBackedView::filePath @ 0000cc30 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachmentFileBackedView::filePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_filePath);
}


// ===== SFTextAttachmentFileBackedView::.cxx_destruct @ 0000cc40 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void SFTextAttachmentFileBackedView::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_filePath) = 0;
  return;
}


