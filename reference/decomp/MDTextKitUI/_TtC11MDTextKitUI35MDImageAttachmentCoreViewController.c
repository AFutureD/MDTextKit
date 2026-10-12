// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::imageView @ 0001807c =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::imageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + imageView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setImageView: @ 0001809c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + imageView,param_3);
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::fileTypeBadge @ 000180b0 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::fileTypeBadge(ID param_1,SEL param_2)

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


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setFileTypeBadge: @ 0001813c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setFileTypeBadge_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = fileTypeBadge;
  _swift_beginAccess(param_1 + fileTypeBadge,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::isGif @ 00018358 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::isGif(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = isGif;
  _swift_beginAccess(param_1 + isGif,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setIsGif: @ 000183dc =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setIsGif_
               (ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = isGif;
  _swift_beginAccess(param_1 + isGif,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::viewDidLoad @ 00018648 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::viewDidLoad(ID param_1,SEL param_2)

{
  undefined *puVar1;
  objc_super local_40;
  
  local_40.super_class =
       (class_t *)MDTextKitUI::MDImageAttachmentCoreViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"viewDidLoad");
  FUN_000189e4();
  puVar1 = &DAT_00205498;
  _swift_allocObject(&DAT_00205498,0x18,7);
  *(ID *)(puVar1 + 0x10) = param_1;
  MDTextKitUI::MDImageAttachmentCoreViewController::_setupAttachment
            ((MDImageAttachmentCoreViewController *)param_1);
  _swift_release(puVar1);
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::dealloc @ 00018880 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::MDImageAttachmentCoreViewController::__deallocating_init
            ((MDImageAttachmentCoreViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::.cxx_destruct @ 000188a4 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + imageView);
  _swift_unknownObjectWeakDestroy(param_1 + fileTypeBadge);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + searchedString + 8));
  _swift_release(*(undefined8 *)(param_1 + textRecognitionViewDataProvider));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + textRecognitionTranscript + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + textRecognitionResults));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + textRecognitionCompletionBlocks));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + highlightedSearchResults));
  _swift_unknownObjectWeakDestroy(param_1 + currentPrimarySearchResult);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + observationTokens));
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::reloadTextAttachment @ 00018cc4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::reloadTextAttachment
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00205470;
  _swift_allocObject(&DAT_00205470,0x18,7);
  *(ID *)(puVar1 + 0x10) = param_1;
  MDTextKitUI::MDImageAttachmentCoreViewController::_setupAttachment
            ((MDImageAttachmentCoreViewController *)param_1);
  _swift_release(puVar1);
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::copyOCRTranscript @ 0001b0f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::copyOCRTranscript
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00205308;
  _swift_allocObject(&DAT_00205308,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _swift_retain(puVar1);
  FUN_0001a48c(param_1,puVar1,FUN_0001afa0,0);
  _swift_release(puVar1);
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setSelected:active: @ 0001b248 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::setSelected_active_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  MDTextKitUI::MDImageAttachmentCoreViewController::setSelected
            ((MDImageAttachmentCoreViewController *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  return;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::initWithNibName:bundle: @ 00020648 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDImageAttachmentCoreViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDImageAttachmentCoreViewController::_init
                     ((MDImageAttachmentCoreViewController *)param_1);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::initWithCoder: @ 000208a4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDImageAttachmentCoreViewController::_init
            ((MDImageAttachmentCoreViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}


