// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::viewController @ 001987b0 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI30MDFileAttachmentViewController::viewController(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  FUN_00198670();
  return param_1;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::fileMetadataViewController @ 001987d4 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI30MDFileAttachmentViewController::fileMetadataViewController
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + fileMetadataViewController);
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::setFileMetadataViewController: @ 001987e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI30MDFileAttachmentViewController::setFileMetadataViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + fileMetadataViewController) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::viewDidLoad @ 001988c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI30MDFileAttachmentViewController::viewDidLoad(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_58 [24];
  objc_super local_40;
  
  local_40.super_class =
       (class_t *)MDTextKitUI::MDFileAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"viewDidLoad");
  lVar1 = ::_TtC11MDTextKitUI30MDAttachmentCoreViewController::themeManager;
  _swift_beginAccess(param_1 + ::_TtC11MDTextKitUI30MDAttachmentCoreViewController::themeManager,
                     auStack_58,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
  MDTextKitUI::MDFileAttachmentViewController::_styleObject
            ((MDFileAttachmentViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::prepareForSegue:sender: @ 00198ba0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11MDTextKitUI30MDFileAttachmentViewController::prepareForSegue_sender_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_4);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  MDTextKitUI::MDFileAttachmentViewController::_prepare
            ((MDFileAttachmentViewController *)param_1,(NSStoryboardSegue *)param_3);
  FUN_00007078(&local_50);
  return;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::reloadTextAttachment @ 00198d64 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI30MDFileAttachmentViewController::reloadTextAttachment(ID param_1,SEL param_2)

{
  MDTextKitUI::MDFileAttachmentViewController::reloadTextAttachment
            ((MDFileAttachmentViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::contextualMenuItems @ 001992a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI30MDFileAttachmentViewController::contextualMenuItems(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  MDTextKitUI::MDFileAttachmentViewController::contextualMenuItems
            ((MDFileAttachmentViewController *)param_1);
  FUN_000aaeac(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::styleObjectWithThemeManager: @ 001995bc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI30MDFileAttachmentViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDFileAttachmentViewController::_styleObject
            ((MDFileAttachmentViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::initWithNibName:bundle: @ 001996a4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI30MDFileAttachmentViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  ID IVar2;
  String SVar3;
  objc_super local_40;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + fileMetadataViewController) = 0;
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(undefined8 *)(param_1 + fileMetadataViewController) = 0;
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class =
       (class_t *)MDTextKitUI::MDFileAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::initWithCoder: @ 001997e8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI30MDFileAttachmentViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + fileMetadataViewController) = 0;
  local_40.super_class =
       (class_t *)MDTextKitUI::MDFileAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI30MDFileAttachmentViewController::.cxx_destruct @ 001998bc =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI30MDFileAttachmentViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


