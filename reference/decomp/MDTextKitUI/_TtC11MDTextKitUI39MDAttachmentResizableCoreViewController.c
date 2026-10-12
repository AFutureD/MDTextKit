// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::canBecomeFirstResponder @ 000021d0 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::canBecomeFirstResponder
               (ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::panGesture @ 000026a4 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::panGesture(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + panGesture;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::setPanGesture: @ 000026c4 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::setPanGesture_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + panGesture,param_3);
  return;
}


// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::gestureRecognizerShouldBegin: @ 0000337c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::gestureRecognizerShouldBegin_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDAttachmentResizableCoreViewController::gestureRecognizerShouldBegin
                    ((MDAttachmentResizableCoreViewController *)param_1,
                     (NSGestureRecognizer *)param_3);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::initWithNibName:bundle: @ 000036b0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDAttachmentResizableCoreViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDAttachmentResizableCoreViewController::_init
                     ((MDAttachmentResizableCoreViewController *)param_1);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::initWithCoder: @ 00003858 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAttachmentResizableCoreViewController::_init
            ((MDAttachmentResizableCoreViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::.cxx_destruct @ 000038e0 =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + snappingBreakpoints));
  _swift_unknownObjectWeakDestroy(param_1 + panGesture);
  return;
}


