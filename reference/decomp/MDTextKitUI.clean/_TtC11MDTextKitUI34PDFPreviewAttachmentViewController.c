// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::viewController @ 000bdddc =====

ID _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::viewController(ID param_1,SEL param_2)

{
  FUN_000bfbac();
  return param_1;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::resizeButtonTrailingConstraint @ 000bddf0 =====

ID _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::resizeButtonTrailingConstraint
             (ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + resizeButtonTrailingConstraint;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::setResizeButtonTrailingConstraint: @ 000bde10 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::setResizeButtonTrailingConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + resizeButtonTrailingConstraint,param_3);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::resizeButtonBottomConstraint @ 000bde24 =====

ID _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::resizeButtonBottomConstraint
             (ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + resizeButtonBottomConstraint;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::setResizeButtonBottomConstraint: @ 000bde44 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::setResizeButtonBottomConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + resizeButtonBottomConstraint,param_3);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::viewDidLoad @ 000bdfac =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::PDFPreviewAttachmentViewController::viewDidLoad
            ((PDFPreviewAttachmentViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::prepareForSegue:sender: @ 000be254 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::prepareForSegue_sender_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  if (param_4 == 0) {
  }
  else {
    _swift_unknownObjectRetain(param_4);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  MDTextKitUI::PDFPreviewAttachmentViewController::_prepare
            ((PDFPreviewAttachmentViewController *)param_1,(NSStoryboardSegue *)param_3);
  FUN_00007078(&local_50);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::reloadTextAttachment @ 000be76c =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::reloadTextAttachment
               (ID param_1,SEL param_2)

{
  MDTextKitUI::PDFPreviewAttachmentViewController::reloadTextAttachment
            ((PDFPreviewAttachmentViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::contextualMenuItems @ 000beb98 =====

ID _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::contextualMenuItems
             (ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  MDTextKitUI::PDFPreviewAttachmentViewController::contextualMenuItems
            ((PDFPreviewAttachmentViewController *)param_1);
  FUN_00006084(0,&DAT_002346d0,&PTR__OBJC_CLASS___NSMenuItem_002211d0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::mouseEntered: @ 000bed14 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::mouseEntered_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::PDFPreviewAttachmentViewController::mouseEntered
            ((PDFPreviewAttachmentViewController *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::mouseExited: @ 000bee74 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::mouseExited_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::PDFPreviewAttachmentViewController::mouseExited
            ((PDFPreviewAttachmentViewController *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::mouseMoved: @ 000bef10 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::mouseMoved_
               (ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class =
       (class_t *)MDTextKitUI::PDFPreviewAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"mouseMoved:",param_3);
  FUN_000bef94(param_3);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::styleObjectWithThemeManager: @ 000bf7f4 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::PDFPreviewAttachmentViewController::_styleObject
            ((PDFPreviewAttachmentViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::initWithNibName:bundle: @ 000bf91c =====

ID _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  PDFPreviewAttachmentViewController *pPVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pPVar1 = MDTextKitUI::PDFPreviewAttachmentViewController::_init
                     ((PDFPreviewAttachmentViewController *)param_1);
  return (ID)pPVar1;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::initWithCoder: @ 000bfa2c =====

ID _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::PDFPreviewAttachmentViewController::_init
            ((PDFPreviewAttachmentViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::.cxx_destruct @ 000bfad4 =====

void _TtC11MDTextKitUI34PDFPreviewAttachmentViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + resizeButtonTrailingConstraint);
  _swift_unknownObjectWeakDestroy(param_1 + resizeButtonBottomConstraint);
  return;
}

