// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::themeManager @ 000b9694 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI26MDAutoCompleteUIController::themeManager(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::setThemeManager: @ 000b9728 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI26MDAutoCompleteUIController::setThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::hostingView @ 000b999c =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI26MDAutoCompleteUIController::hostingView(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = hostingView;
  _swift_beginAccess(param_1 + hostingView,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::setHostingView: @ 000b9a28 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI26MDAutoCompleteUIController::setHostingView_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = hostingView;
  _swift_beginAccess(param_1 + hostingView,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::init @ 000b9f04 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI26MDAutoCompleteUIController::init(ID param_1,SEL param_2)

{
  MDAutoCompleteUIController *pMVar1;
  
  pMVar1 = MDTextKitUI::MDAutoCompleteUIController::init((MDAutoCompleteUIController *)param_1);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::dealloc @ 000b9fc4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI26MDAutoCompleteUIController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::MDAutoCompleteUIController::__deallocating_init
            ((MDAutoCompleteUIController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::.cxx_destruct @ 000b9fe8 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI26MDAutoCompleteUIController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + currentLanguage + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + componentCharacter + 8));
  _swift_unknownObjectWeakDestroy(param_1 + hostingView);
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___autocompleteController));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + observers));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + languageObserver));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___keycodeToSkip));
  return;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::textView:shouldHandleKeydown: @ 000ba548 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC11MDTextKitUI26MDAutoCompleteUIController::textView_shouldHandleKeydown_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDAutoCompleteUIController::textView
                    ((MDAutoCompleteUIController *)param_1,(NSTextView *)param_3,(NSEvent *)param_4)
  ;
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::handleWithKeydown:in: @ 000baa2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC11MDTextKitUI26MDAutoCompleteUIController::handleWithKeydown_in_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDAutoCompleteUIController::handle
                    ((MDAutoCompleteUIController *)param_1,(NSEvent *)param_3,(NSTextView *)param_4)
  ;
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::hasAvailableCompletions @ 000babd0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI26MDAutoCompleteUIController::hasAvailableCompletions(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDAutoCompleteUIController::hasAvailableCompletions
                    ((MDAutoCompleteUIController *)param_1);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::hasAvailableComponentCompletions @ 000bacf8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI26MDAutoCompleteUIController::hasAvailableComponentCompletions
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDAutoCompleteUIController::hasAvailableComponentCompletions
                    ((MDAutoCompleteUIController *)param_1);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::hasAvailableAlternateCompletions @ 000bae20 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI26MDAutoCompleteUIController::hasAvailableAlternateCompletions
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDAutoCompleteUIController::hasAvailableAlternateCompletions
                    ((MDAutoCompleteUIController *)param_1);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::isAutoCompleteOpen @ 000baeb8 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI26MDAutoCompleteUIController::isAutoCompleteOpen(ID param_1,SEL param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11MDTextKitUI30MDAutoCompleteWindowController::isClosing;
  lVar3 = *(long *)(param_1 + windowController);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_beginAccess(lVar3 + _TtC11MDTextKitUI30MDAutoCompleteWindowController::isClosing,
                       auStack_38,0,0);
    uVar2 = *(byte *)(lVar3 + lVar1) ^ 1;
  }
  return uVar2 & 1;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::showAutoCompleteFor:at: @ 000baf20 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC11MDTextKitUI26MDAutoCompleteUIController::showAutoCompleteFor_at_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  FUN_000bcabc(param_3,param_2,param_3,param_4.field0_0x0,param_4.field1_0x8);
  return;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::updateAutoCompleteWindowFrameFor:at: @ 000bb4c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void __thiscall
_TtC11MDTextKitUI26MDAutoCompleteUIController::updateAutoCompleteWindowFrameFor_at_
          (_TtC11MDTextKitUI26MDAutoCompleteUIController *this,ID param_1,SEL param_2,ID param_3,
          _NSRange param_4)

{
  MDTextKitUI::MDAutoCompleteUIController::updateAutoCompleteWindowFrame
            ((MDAutoCompleteUIController *)param_1,(NSTextView *)param_3,(_NSRange)param_4);
  return;
}


// ===== _TtC11MDTextKitUI26MDAutoCompleteUIController::hideAutoCompleteWithAnimated: @ 000bb944 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI26MDAutoCompleteUIController::hideAutoCompleteWithAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::MDAutoCompleteUIController::hideAutoComplete
            ((MDAutoCompleteUIController *)param_1,SUB41(param_3,0));
  return;
}


