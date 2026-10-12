// ===== _TtC11MDTextKitUI20TextSearchController::searchResults @ 0007f3a4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI20TextSearchController::searchResults(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  MDTextKitUI::TextSearchController::get_searchResults
            ((TextSearchController *)param_1,(TextSearchController *)param_1);
  MDTextKitUI::TextSearchResult::typeMetadataAccessor();
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}


// ===== _TtC11MDTextKitUI20TextSearchController::isAsyncLoadingResults @ 0007f8ac =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI20TextSearchController::isAsyncLoadingResults(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::TextSearchController::get_isAsyncLoadingResults
                    ((TextSearchController *)param_1,(TextSearchController *)param_1);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI20TextSearchController::currentSearchResult @ 0007fb14 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI20TextSearchController::currentSearchResult(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = currentSearchResult;
  _swift_beginAccess(param_1 + currentSearchResult,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI20TextSearchController::setCurrentSearchResult: @ 0007fba0 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI20TextSearchController::setCurrentSearchResult_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = currentSearchResult;
  _swift_beginAccess(param_1 + currentSearchResult,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI20TextSearchController::currentSearchString @ 0007fc54 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI20TextSearchController::currentSearchString(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = param_1 + currentSearchString;
  _swift_beginAccess(lVar2,auStack_38,0,0);
  lVar2 = *(long *)(lVar2 + 8);
  if (lVar2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}


// ===== _TtC11MDTextKitUI20TextSearchController::setCurrentSearchString: @ 0007fd20 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI20TextSearchController::setCurrentSearchString_
               (ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pSVar1 = (String *)(param_1 + currentSearchString);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}


// ===== _TtC11MDTextKitUI20TextSearchController::focusNextMatchAnimated: @ 000809f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI20TextSearchController::focusNextMatchAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::TextSearchController::focusNextMatch
            ((TextSearchController *)param_1,SUB41(param_3,0));
  return;
}


// ===== _TtC11MDTextKitUI20TextSearchController::focusNextMatch @ 00080bb4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI20TextSearchController::focusNextMatch(ID param_1,SEL param_2)

{
  MDTextKitUI::TextSearchController::focusNextMatch((TextSearchController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI20TextSearchController::focusCurrentMatch @ 00080ccc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI20TextSearchController::focusCurrentMatch(ID param_1,SEL param_2)

{
  MDTextKitUI::TextSearchController::focusCurrentMatch((TextSearchController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI20TextSearchController::clearAllFocuses @ 000839c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI20TextSearchController::clearAllFocuses(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + allSearchResults);
  _swift_bridgeObjectRetain(uVar1);
  FUN_00084a8c();
  _swift_bridgeObjectRelease(uVar1);
  return;
}


// ===== _TtC11MDTextKitUI20TextSearchController::init @ 0008412c =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI20TextSearchController::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.TextSearchController",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84158);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI20TextSearchController::.cxx_destruct @ 00084188 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI20TextSearchController::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00016808(param_1 + rootClient);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + allSearchResults));
  _swift_unknownObjectWeakDestroy(param_1 + currentSearchResult);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + currentSearchString + 8));
  return;
}


