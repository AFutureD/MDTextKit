// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::canBecomeFirstResponder @ 000021d0 =====

bool _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::canBecomeFirstResponder
               (ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::panGesture @ 000026a4 =====

ID _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::panGesture(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + panGesture;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::setPanGesture: @ 000026c4 =====

void _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::setPanGesture_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + panGesture,param_3);
  return;
}

// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::gestureRecognizerShouldBegin: @ 0000337c =====

bool _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::gestureRecognizerShouldBegin_
               (ID param_1,SEL param_2,ID param_3)

{
  
  bVar1 = MDTextKitUI::MDAttachmentResizableCoreViewController::gestureRecognizerShouldBegin
                    ((MDAttachmentResizableCoreViewController *)param_1,
                     (NSGestureRecognizer *)param_3);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::initWithNibName:bundle: @ 000036b0 =====

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

ID _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAttachmentResizableCoreViewController::_init
            ((MDAttachmentResizableCoreViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::.cxx_destruct @ 000038e0 =====

void _TtC11MDTextKitUI39MDAttachmentResizableCoreViewController::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + snappingBreakpoints));
  _swift_unknownObjectWeakDestroy(param_1 + panGesture);
  return;
}

