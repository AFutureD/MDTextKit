// ===== SFTextAttachmentView::initWithRepresentedAttributedText: @ 00029170 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID SFTextAttachmentView::initWithRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SFTextAttachmentView;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"initWithRepresentedAttributedText:");
  if (self != 0) {
    objc_stub::setPreventAttachmentImageRendering_(self,1);
  }
  return self;
}


// ===== SFTextAttachmentView::drawAttachmentInRect: @ 000291c4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void SFTextAttachmentView::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::temporaryImage(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::temporaryImage(param_1);
    objc_stub::drawInRect_
              (IVar1,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
    return;
  }
  return;
}


// ===== SFTextAttachmentView::attachmentViewController @ 00029258 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachmentView::attachmentViewController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentViewController);
}


// ===== SFTextAttachmentView::setAttachmentViewController: @ 00029268 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachmentView::setAttachmentViewController_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentViewController) = param_3;
  return;
}


// ===== SFTextAttachmentView::temporaryImage @ 0002927c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachmentView::temporaryImage(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_temporaryImage);
}


// ===== SFTextAttachmentView::setTemporaryImage: @ 0002928c =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachmentView::setTemporaryImage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_temporaryImage) = param_3;
  return;
}


// ===== SFTextAttachmentView::.cxx_destruct @ 000292a0 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void SFTextAttachmentView::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_temporaryImage) = 0;
  *(undefined8 *)(param_1 + (long)_attachmentViewController) = 0;
  return;
}


