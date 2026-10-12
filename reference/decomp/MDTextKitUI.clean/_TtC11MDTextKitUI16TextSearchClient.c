// ===== _TtC11MDTextKitUI16TextSearchClient::shouldHighlightAndFocusSearchResultsOnTextChange @ 000eac00 =====

bool _TtC11MDTextKitUI16TextSearchClient::shouldHighlightAndFocusSearchResultsOnTextChange
               (ID param_1,SEL param_2)

{
  
  lVar1 = shouldHighlightAndFocusSearchResultsOnTextChange;
  _swift_beginAccess(param_1 + shouldHighlightAndFocusSearchResultsOnTextChange,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI16TextSearchClient::setShouldHighlightAndFocusSearchResultsOnTextChange: @ 000eac84 =====

void _TtC11MDTextKitUI16TextSearchClient::setShouldHighlightAndFocusSearchResultsOnTextChange_
               (ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = shouldHighlightAndFocusSearchResultsOnTextChange;
  _swift_beginAccess(param_1 + shouldHighlightAndFocusSearchResultsOnTextChange,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::searchController @ 000ead60 =====

ID _TtC11MDTextKitUI16TextSearchClient::searchController(ID param_1,SEL param_2)

{
  
  lVar1 = searchController;
  _swift_beginAccess(param_1 + searchController,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI16TextSearchClient::setSearchController: @ 000eadf4 =====

void _TtC11MDTextKitUI16TextSearchClient::setSearchController_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::searchViewController @ 000eae94 =====

ID _TtC11MDTextKitUI16TextSearchClient::searchViewController(ID param_1,SEL param_2)

{
  
  lVar1 = searchViewController;
  _swift_beginAccess(param_1 + searchViewController,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI16TextSearchClient::setSearchViewController: @ 000eaf28 =====

void _TtC11MDTextKitUI16TextSearchClient::setSearchViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::observeValueForKeyPath:ofObject:change:context: @ 000eb1b4 =====

void _TtC11MDTextKitUI16TextSearchClient::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    param_2 = SVar2.bridgeObject;
  }
  if (param_4 == 0) {
  }
  else {
    _swift_unknownObjectRetain(param_4,param_2);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  if (param_5 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    FUN_00006178(0);
    FUN_00005b98(&DAT_00234198,FUN_00006178,&TargetProtocolConformanceDescriptor_001c3038);
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_000f179c(SVar2.str,SVar2.bridgeObject,&local_60,DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_00007078(&local_60);
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::textViewDidScroll: @ 000eb560 =====

void _TtC11MDTextKitUI16TextSearchClient::textViewDidScroll_(ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  __MDTextKitUI_TextSearchClient__textViewDidScroll_in__EEB0701E8FF0CA0EDFBB02646F7E879E__Foundation_Notification___>___
            (param_1);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::searchFor: @ 000eb608 =====

void _TtC11MDTextKitUI16TextSearchClient::searchFor_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  if (param_3 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  MDTextKitUI::TextSearchClient::_search((TextSearchClient *)param_1,SVar1.str._0_1_);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::searchFor:focusNextMatch: @ 000eb8d4 =====

void _TtC11MDTextKitUI16TextSearchClient::searchFor_focusNextMatch_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  String SVar1;
  
  if (param_3 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  MDTextKitUI::TextSearchClient::_search((TextSearchClient *)param_1,SVar1.str._0_1_);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::adjustSearchStateAndFocusNextMatch: @ 000ebc14 =====

void _TtC11MDTextKitUI16TextSearchClient::adjustSearchStateAndFocusNextMatch_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::TextSearchClient::adjustSearchState((TextSearchClient *)param_1,SUB41(param_3,0));
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::adjustSearchHighlightingAfterScroll @ 000ef8f8 =====

void _TtC11MDTextKitUI16TextSearchClient::adjustSearchHighlightingAfterScroll
               (ID param_1,SEL param_2)

{
  
  lVar1 = searchController;
  _swift_beginAccess(param_1 + searchController,auStack_48,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    FUN_00083a08(param_1,&
                         __protocol_witness_table_for_MDTextKitUI_TextSearchClient___MDTextKitUI_TextSearchable_in_MDTextKitUI
                );
  }
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::validateCurrentSearchResultForRange: @ 000efb38 =====

void __thiscall
_TtC11MDTextKitUI16TextSearchClient::validateCurrentSearchResultForRange_
          (_TtC11MDTextKitUI16TextSearchClient *this,ID param_1,SEL param_2,_NSRange param_3)

{
  MDTextKitUI::TextSearchClient::validateCurrentSearchResult
            ((TextSearchClient *)param_1,(_NSRange)param_3);
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::assignFirstResponderToTextAttachmentBasedOnCurrentSearchResultIfNeeded @ 000efdd0 =====

void _TtC11MDTextKitUI16TextSearchClient::
     assignFirstResponderToTextAttachmentBasedOnCurrentSearchResultIfNeeded(ID param_1,SEL param_2)

{
  MDTextKitUI::TextSearchClient::
  assignFirstResponderToTextAttachmentBasedOnCurrentSearchResultIfNeeded
            ((TextSearchClient *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI16TextSearchClient::init @ 000eff9c =====

ID _TtC11MDTextKitUI16TextSearchClient::init(ID param_1,SEL param_2)

{
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.TextSearchClient",0x1c,"init()",6,0);
  pcVar1 = (code *)SoftwareBreakpoint(1,0xeffc8);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI16TextSearchClient::.cxx_destruct @ 000effd8 =====

void _TtC11MDTextKitUI16TextSearchClient::_cxx_destruct(ID param_1,SEL param_2)

{
  UUID UVar2;
  
  lVar1 = uuid;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + lVar1,UVar2.unknown);
  _swift_unknownObjectWeakDestroy(param_1 + textView);
  _swift_unknownObjectWeakDestroy(param_1 + editorController);
  FUN_00026eec(*(undefined8 *)(param_1 + isSearchFieldVisible),
               ((undefined8 *)(param_1 + isSearchFieldVisible))[1]);
  FUN_00026eec(*(undefined8 *)(param_1 + createNoteEditorSearchViewController),
               ((undefined8 *)(param_1 + createNoteEditorSearchViewController))[1]);
  return;
}

