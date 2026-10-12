// ===== _TtC11MDTextKitUI23WordCountViewController::countLabel @ 00009500 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23WordCountViewController::countLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + countLabel);
}


// ===== _TtC11MDTextKitUI23WordCountViewController::setCountLabel: @ 00009510 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::setCountLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + countLabel) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::moreButton @ 00009544 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23WordCountViewController::moreButton(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + moreButton);
}


// ===== _TtC11MDTextKitUI23WordCountViewController::setMoreButton: @ 00009554 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::setMoreButton_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + moreButton) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::currentCountType @ 00009588 =====

/* Function Stack Size: 0x10 bytes */

long_long _TtC11MDTextKitUI23WordCountViewController::currentCountType(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = currentCountType;
  _swift_beginAccess(param_1 + currentCountType,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI23WordCountViewController::setCurrentCountType: @ 0000960c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::setCurrentCountType_
               (ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = currentCountType;
  _swift_beginAccess(param_1 + currentCountType,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::themeManager @ 000096e8 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23WordCountViewController::themeManager(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI23WordCountViewController::setThemeManager: @ 0000977c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::setThemeManager_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  if (param_3 != 0) {
    FUN_0000bb14(param_3);
  }
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::textView @ 0000996c =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23WordCountViewController::textView(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI23WordCountViewController::setTextView: @ 00009a00 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::setTextView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  if (param_3 != 0) {
    FUN_0000b2fc(param_3);
    FUN_0000bd90();
  }
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::wordCountViewController @ 00009d8c =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23WordCountViewController::wordCountViewController(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  MDTextKitUI::WordCountViewController::_wordCountViewController((WordCountViewController *)param_1)
  ;
  return (ID)(WordCountViewController *)param_1;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::viewDidLoad @ 00009e4c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI23WordCountViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::WordCountViewController::viewDidLoad((WordCountViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::dealloc @ 00009f7c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI23WordCountViewController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::WordCountViewController::__deallocating_init((WordCountViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::.cxx_destruct @ 00009fa0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI23WordCountViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::mouseEntered: @ 0000a028 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  if (*(ID *)(param_1 + moreButton) != 0) {
    objc_stub::setHidden_(*(ID *)(param_1 + moreButton),0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa044);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI23WordCountViewController::mouseExited: @ 0000a060 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  if (*(ID *)(param_1 + moreButton) != 0) {
    objc_stub::setHidden_(*(ID *)(param_1 + moreButton),1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa07c);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI23WordCountViewController::mouseMoved: @ 0000a0b8 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::mouseMoved_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = NSCursor::arrowCursor((ID)&_OBJC_CLASS___NSCursor);
  NSCursor::set(self);
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::countPopupChangedSelection: @ 0000a134 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::countPopupChangedSelection_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  uint extraout_w1;
  uint uVar4;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  if (*(ID *)(param_1 + moreButton) != 0) {
    IVar3 = objc_stub::indexOfSelectedItem(*(ID *)(param_1 + moreButton));
    uVar4 = extraout_w1;
    FUN_0000bb04();
    lVar1 = currentCountType;
    if ((uVar4 & 0xff) != 1) {
      _swift_beginAccess(param_1 + currentCountType,auStack_68,1,0);
      *(ID *)(param_1 + lVar1) = IVar3;
      FUN_0000bd90();
    }
    ___swift_destroy_boxed_opaque_existential_1(auStack_50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xa1ec);
  (*pcVar2)();
}


// ===== _TtC11MDTextKitUI23WordCountViewController::showCount: @ 0000a23c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23WordCountViewController::showCount_
               (ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = currentCountType;
  _swift_beginAccess(param_1 + currentCountType,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  FUN_0000bd90(param_1);
  return;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::initWithNibName:bundle: @ 0000b520 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI23WordCountViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  WordCountViewController *pWVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pWVar1 = MDTextKitUI::WordCountViewController::_init((WordCountViewController *)param_1);
  return (ID)pWVar1;
}


// ===== _TtC11MDTextKitUI23WordCountViewController::initWithCoder: @ 0000b634 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI23WordCountViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::WordCountViewController::_init((WordCountViewController *)param_1,(NSCoder *)param_3)
  ;
  return param_3;
}


