// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::textView @ 0010ac08 =====

ID _TtC11MDTextKitUI26MDTextCoreHighlightManager::textView(ID param_1,SEL param_2)

{
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::setTextView: @ 0010ac50 =====

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::setTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::init @ 0010ad94 =====

ID _TtC11MDTextKitUI26MDTextCoreHighlightManager::init(ID param_1,SEL param_2)

{
  MDTextCoreHighlightManager *pMVar1;
  
  pMVar1 = MDTextKitUI::MDTextCoreHighlightManager::init((MDTextCoreHighlightManager *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::initWithTextView: @ 0010adb4 =====

ID _TtC11MDTextKitUI26MDTextCoreHighlightManager::initWithTextView_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_0010b8b0();
  return param_3;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::setBackgroundColor:for: @ 0010adf0 =====

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::setBackgroundColor_for_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae80);
      (*pcVar1)();
    }
    plVar2 = &secondaryBackgroundColor;
  }
  *(ID *)(param_1 + *plVar2) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::setForegroundColor:for: @ 0010ae80 =====

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::setForegroundColor_for_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10af18);
    (*pcVar1)();
  }
  local_28 = param_4;
  Swift::__diagnoseUnexpectedEnumCaseValue
            (&__type_metadata_for_MDTextKitUI_MDTextHighlighterType,&local_28,
             &__type_metadata_for_MDTextKitUI_MDTextHighlighterType,
             PTR___type_metadata_for_Swift_Int_0020dfa8);
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10af4c);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::highlightRange:type: @ 0010b298 =====

void __thiscall
_TtC11MDTextKitUI26MDTextCoreHighlightManager::highlightRange_type_
          (_TtC11MDTextKitUI26MDTextCoreHighlightManager *this,ID param_1,SEL param_2,
          _NSRange param_3,long_long param_4)

{
  NSMutableAttributedString *in;
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_58,0,0);
  self = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if ((self != 0) &&
     (in = (NSMutableAttributedString *)textStorage(self),
     in != (NSMutableAttributedString *)0x0)) {
    MDTextKitUI::MDTextCoreHighlightManager::highlightRange
              ((MDTextCoreHighlightManager *)param_1,(_NSRange)param_3,in,
               (MDTextHighlighterType)(__int8)param_4);
  }
  return;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRanges @ 0010b4b8 =====

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRanges
               (ID param_1,SEL param_2)

{
  MDTextKitUI::MDTextCoreHighlightManager::removeAllHighlightedRanges
            ((MDTextCoreHighlightManager *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRangesIn: @ 0010b4e0 =====

void __thiscall
_TtC11MDTextKitUI26MDTextCoreHighlightManager::removeAllHighlightedRangesIn_
          (_TtC11MDTextKitUI26MDTextCoreHighlightManager *this,ID param_1,SEL param_2,
          _NSRange param_3)

{
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_58,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if ((IVar2 != 0) && (IVar2 = textStorage(IVar2), IVar2 != 0)) {
    FUN_0010a8d0(IVar2,param_3.field0_0x0,param_3.field1_0x8);
  }
  return;
}

// ===== _TtC11MDTextKitUI26MDTextCoreHighlightManager::.cxx_destruct @ 0010b6e0 =====

void _TtC11MDTextKitUI26MDTextCoreHighlightManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + textView);
  return;
}

