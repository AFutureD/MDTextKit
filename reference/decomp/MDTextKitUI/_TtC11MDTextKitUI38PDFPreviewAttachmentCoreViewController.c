// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::dealloc @ 000c2c7c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::PDFPreviewAttachmentCoreViewController::__deallocating_init
            ((PDFPreviewAttachmentCoreViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::.cxx_destruct @ 000c2ca0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + fileTypeBadge);
  _swift_unknownObjectWeakDestroy(param_1 + imageView);
  FUN_0002bf54(*(undefined8 *)(param_1 + pdfData),((undefined8 *)(param_1 + pdfData))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + lastSearchString + 8));
  return;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::fileTypeBadge @ 000c2d40 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::fileTypeBadge(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = fileTypeBadge;
  _swift_beginAccess(param_1 + fileTypeBadge,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::setFileTypeBadge: @ 000c2d88 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::setFileTypeBadge_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = fileTypeBadge;
  _swift_beginAccess(param_1 + fileTypeBadge,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::imageView @ 000c2de0 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::imageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + imageView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::setImageView: @ 000c2e00 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::setImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + imageView,param_3);
  return;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::viewDidLoad @ 000c2e68 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::viewDidLoad(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class =
       (class_t *)MDTextKitUI::PDFPreviewAttachmentCoreViewController::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLoad");
  FUN_000c241c();
  (**(code **)((*(ulong *)PTR__swift_isaMask_0020e4b8 & *(ulong *)param_1) + 0x1d0))();
  return;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::reloadTextAttachment @ 000c30b8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::reloadTextAttachment
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00208e40;
  _swift_allocObject(&DAT_00208e40,0x18,7);
  *(ID *)(puVar1 + 0x10) = param_1;
  FUN_000c28e8(thunk_FUN_000bfb50,puVar1);
  _swift_release(puVar1);
  return;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::initWithNibName:bundle: @ 000c4458 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  PDFPreviewAttachmentCoreViewController *pPVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pPVar1 = MDTextKitUI::PDFPreviewAttachmentCoreViewController::_init
                     ((PDFPreviewAttachmentCoreViewController *)param_1);
  return (ID)pPVar1;
}


// ===== _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::initWithCoder: @ 000c45b4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI38PDFPreviewAttachmentCoreViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::PDFPreviewAttachmentCoreViewController::_init
            ((PDFPreviewAttachmentCoreViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}


