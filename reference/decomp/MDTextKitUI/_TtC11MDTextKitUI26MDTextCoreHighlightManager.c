// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::textView @ 0010ac08 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI26MDTextCoreHighlightManager::textView(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::setTextView: @ 0010ac50 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::setTextView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::init @ 0010ad94 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI26MDTextCoreHighlightManager::init(ID param_1,SEL param_2)

{
  MDTextCoreHighlightManager *pMVar1;
  
  pMVar1 = MDTextKitUI::MDTextCoreHighlightManager::init((MDTextCoreHighlightManager *)param_1);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::initWithTextView: @ 0010adb4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI26MDTextCoreHighlightManager::initWithTextView_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_0010b8b0();
  return param_3;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::setBackgroundColor:for: @ 0010adf0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::setBackgroundColor_for_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  code *pcVar1;
  long *plVar2;
  long_long local_28;
  
  if (param_4 == 0) {
    plVar2 = &primaryBackgroundColor;
  }
  else {
    if (param_4 != 1) {
      local_28 = param_4;
      Swift::__diagnoseUnexpectedEnumCaseValue
                (&__type_metadata_for_MDTextKitUI_MDTextHighlighterType,&local_28,
                 &__type_metadata_for_MDTextKitUI_MDTextHighlighterType,
                 PTR___type_metadata_for_Swift_Int_0020dfa8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae80);
      (*pcVar1)();
    }
    plVar2 = &secondaryBackgroundColor;
  }
  *(ID *)(param_1 + *plVar2) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::setForegroundColor:for: @ 0010ae80 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::setForegroundColor_for_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  code *pcVar1;
  String SVar2;
  long_long local_28;
  
  if (param_4 == 0) {
    *(ID *)(param_1 + primaryForegroundColor) = param_3;
    return;
  }
  if (param_4 == 1) {
    SVar2.bridgeObject = (void *)((long)&MACH_HEADER.magic + 2);
    SVar2.str = (char *)((long)&MACH_HEADER.cpusubtype + 3);
    Swift::_assertionFailure
              ((StaticString)0x1dadd8,SVar2,(StaticString)0xd000000000000039,0x80000000001dc810,
               0x1dc800);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10af18);
    (*pcVar1)();
  }
  local_28 = param_4;
  Swift::__diagnoseUnexpectedEnumCaseValue
            (&__type_metadata_for_MDTextKitUI_MDTextHighlighterType,&local_28,
             &__type_metadata_for_MDTextKitUI_MDTextHighlighterType,
             PTR___type_metadata_for_Swift_Int_0020dfa8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10af4c);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::highlightRange:type: @ 0010b298 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void __thiscall
_TtC11MDTextKitUI26MDTextCoreHighlightManager::highlightRange_type_
          (_TtC11MDTextKitUI26MDTextCoreHighlightManager *this,ID param_1,SEL param_2,
          _NSRange param_3,long_long param_4)

{
  long lVar1;
  ID self;
  NSMutableAttributedString *in;
  undefined1 auStack_58 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_58,0,0);
  self = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if ((self != 0) &&
     (in = (NSMutableAttributedString *)objc_stub::textStorage(self),
     in != (NSMutableAttributedString *)0x0)) {
    MDTextKitUI::MDTextCoreHighlightManager::highlightRange
              ((MDTextCoreHighlightManager *)param_1,(_NSRange)param_3,in,
               (MDTextHighlighterType)(__int8)param_4);
  }
  return;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRanges @ 0010b4b8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRanges
               (ID param_1,SEL param_2)

{
  MDTextKitUI::MDTextCoreHighlightManager::removeAllHighlightedRanges
            ((MDTextCoreHighlightManager *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRangesIn: @ 0010b4e0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void __thiscall
_TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRangesIn_
          (_TtC11MDTextKitUI26MDTextCoreHighlightManager *this,ID param_1,SEL param_2,
          _NSRange param_3)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_58,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if ((IVar2 != 0) && (IVar2 = objc_stub::textStorage(IVar2), IVar2 != 0)) {
    FUN_0010a8d0(IVar2,param_3.field0_0x0,param_3.field1_0x8);
  }
  return;
}


// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::.cxx_destruct @ 0010b6e0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + textView);
  return;
}


