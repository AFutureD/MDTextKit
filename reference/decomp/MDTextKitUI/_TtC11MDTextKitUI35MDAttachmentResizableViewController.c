// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::resizeButton @ 000b6e3c =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI35MDAttachmentResizableViewController::resizeButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + resizeButton;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::setResizeButton: @ 000b6e5c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI35MDAttachmentResizableViewController::setResizeButton_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + resizeButton,param_3);
  return;
}


// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::viewDidLoad @ 000b6ea8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI35MDAttachmentResizableViewController::viewDidLoad(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class =
       (class_t *)MDTextKitUI::MDAttachmentResizableViewController::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLoad");
  FUN_000b625c();
  return;
}


// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::styleObjectWithThemeManager: @ 000b6f08 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI35MDAttachmentResizableViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAttachmentResizableViewController::_styleObject
            ((MDAttachmentResizableViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::handlePanGesture: @ 000b6f5c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI35MDAttachmentResizableViewController::handlePanGesture_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_000b69f0(param_3);
  return;
}


// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::initWithNibName:bundle: @ 000b7054 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI35MDAttachmentResizableViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  ID IVar2;
  String SVar3;
  objc_super local_40;
  
  if (param_3 == 0) {
    _swift_unknownObjectWeakInit(param_1 + resizeButton,0);
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _swift_unknownObjectWeakInit(param_1 + resizeButton,0);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class =
       (class_t *)MDTextKitUI::MDAttachmentResizableViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}


// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::initWithCoder: @ 000b71b0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI35MDAttachmentResizableViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  _swift_unknownObjectWeakInit(param_1 + resizeButton,0);
  local_40.super_class =
       (class_t *)MDTextKitUI::MDAttachmentResizableViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI35MDAttachmentResizableViewController::.cxx_destruct @ 000b7268 =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI35MDAttachmentResizableViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + resizeButton);
  return;
}


