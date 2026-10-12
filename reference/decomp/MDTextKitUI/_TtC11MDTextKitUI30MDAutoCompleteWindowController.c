// ===== _TtC11MDTextKitUI30MDAutoCompleteWindowController::autoCompleteViewController @ 000ff580 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI30MDAutoCompleteWindowController::autoCompleteViewController
             (ID param_1,SEL param_2)

{
  ID IVar1;
  MDAutoCompleteViewController *pMVar2;
  
  IVar1 = objc_stub::window(param_1);
  if ((IVar1 != 0) && (IVar1 = objc_stub::contentViewController(IVar1), IVar1 != 0)) {
    pMVar2 = MDTextKitUI::MDAutoCompleteViewController::typeMetadataAccessor();
    _swift_dynamicCastClass(IVar1,pMVar2);
    if (IVar1 != 0) {
      return IVar1;
    }
  }
  return 0;
}


// ===== _TtC11MDTextKitUI30MDAutoCompleteWindowController::windowDidLoad @ 000ff858 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI30MDAutoCompleteWindowController::windowDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDAutoCompleteWindowController::windowDidLoad
            ((MDAutoCompleteWindowController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI30MDAutoCompleteWindowController::initWithWindow: @ 000ff938 =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI30MDAutoCompleteWindowController::initWithWindow_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_30;
  
  *(undefined1 *)(param_1 + isClosing) = 0;
  local_30.super_class =
       (class_t *)MDTextKitUI::MDAutoCompleteWindowController::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"initWithWindow:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI30MDAutoCompleteWindowController::initWithCoder: @ 000ffa00 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI30MDAutoCompleteWindowController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  *(undefined1 *)(param_1 + isClosing) = 0;
  local_40.super_class =
       (class_t *)MDTextKitUI::MDAutoCompleteWindowController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


