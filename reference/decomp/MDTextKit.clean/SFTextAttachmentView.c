// ===== SFTextAttachmentView::initWithRepresentedAttributedText: @ 00029170 =====

ID SFTextAttachmentView::initWithRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  
  local_30.super_class = &objc::class_t::SFTextAttachmentView;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"initWithRepresentedAttributedText:");
  if (self != 0) {
    setPreventAttachmentImageRendering_(self,1);
  }
  return self;
}

// ===== SFTextAttachmentView::drawAttachmentInRect: @ 000291c4 =====

void SFTextAttachmentView::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  IVar1 = temporaryImage(param_1);
  if (IVar1 != 0) {
    IVar1 = temporaryImage(param_1);
    drawInRect_
              (IVar1,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
    return;
  }
  return;
}

// ===== SFTextAttachmentView::attachmentViewController @ 00029258 =====

ID SFTextAttachmentView::attachmentViewController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentViewController);
}

// ===== SFTextAttachmentView::setAttachmentViewController: @ 00029268 =====

void SFTextAttachmentView::setAttachmentViewController_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentViewController) = param_3;
  return;
}

// ===== SFTextAttachmentView::temporaryImage @ 0002927c =====

ID SFTextAttachmentView::temporaryImage(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_temporaryImage);
}

// ===== SFTextAttachmentView::setTemporaryImage: @ 0002928c =====

void SFTextAttachmentView::setTemporaryImage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_temporaryImage) = param_3;
  return;
}

// ===== SFTextAttachmentView::.cxx_destruct @ 000292a0 =====

void SFTextAttachmentView::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_temporaryImage) = 0;
  *(undefined8 *)(param_1 + (long)_attachmentViewController) = 0;
  return;
}

