// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::searchTextView @ 000a3790 =====

ID _TtC11MDTextKitUI28TextSearchCoreViewController::searchTextView(ID param_1,SEL param_2)

{
  FUN_00014db0(param_1,param_2,&searchTextView);
  return param_1;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::setSearchTextView: @ 000a37a8 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::setSearchTextView_
               (ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = searchTextView;
  _swift_beginAccess(param_1 + searchTextView,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  lVar1 = ((undefined8 *)(param_1 + initialString))[1];
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + initialString);
    _swift_bridgeObjectRetain(lVar1);
    FUN_000a61c8(uVar2,lVar1,0,0,1);
    _swift_bridgeObjectRelease(lVar1);
  }
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::replaceTextView @ 000a3a44 =====

ID _TtC11MDTextKitUI28TextSearchCoreViewController::replaceTextView(ID param_1,SEL param_2)

{
  FUN_00014db0(param_1,param_2,&replaceTextView);
  return param_1;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::setReplaceTextView: @ 000a3a5c =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::setReplaceTextView_
               (ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = replaceTextView;
  _swift_beginAccess(param_1 + replaceTextView,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::initialString @ 000a3b94 =====

ID _TtC11MDTextKitUI28TextSearchCoreViewController::initialString(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  lVar2 = *(long *)(param_1 + initialString + 8);
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

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::setInitialString: @ 000a3bf0 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::setInitialString_
               (ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pSVar1 = (String *)(param_1 + initialString);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::onDismiss @ 000a3c3c =====

ID _TtC11MDTextKitUI28TextSearchCoreViewController::onDismiss(ID param_1,SEL param_2)

{
  
  plVar1 = (long *)(param_1 + onDismiss);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    lVar5 = plVar1[1];
    local_68 = FUN;
    puStack_60 = &_block_descriptor_10;
    local_58 = lVar4;
    local_50 = lVar5;
    pvVar3 = __Block_copy(&local_78);
    lVar2 = local_50;
    FUN_00019830(lVar4,lVar5);
    _swift_release(lVar2);
  }
  return (ID)pvVar3;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::setOnDismiss: @ 000a3d48 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::setOnDismiss_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  
  pvVar4 = __Block_copy((void *)param_3);
  if (pvVar4 == (void *)0x0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_002087e8;
    _swift_allocObject(&DAT_002087e8,0x18,7);
    *(void **)(puVar5 + 0x10) = pvVar4;
    pcVar6 = FUN;
  }
  puVar1 = (undefined8 *)(param_1 + onDismiss);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar6;
  puVar1[1] = puVar5;
  FUN_00026eec(uVar2,uVar3);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::searchString @ 000a3ea0 =====

ID _TtC11MDTextKitUI28TextSearchCoreViewController::searchString(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  String SVar2;
  
  SVar2 = MDTextKitUI::TextSearchCoreViewController::get_searchString
                    ((TextSearchCoreViewController *)param_1,(TextSearchCoreViewController *)param_1
                    );
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::dealloc @ 000a40a4 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::dealloc(ID param_1,SEL param_2)

{
  
  FUN_000a429c();
  FUN_000a45a4();
  local_30.super_class =
       (class_t *)MDTextKitUI::TextSearchCoreViewController::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::.cxx_destruct @ 000a40ec =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + textSearchController);
  _swift_unknownObjectWeakDestroy(param_1 + parentTextView);
  _swift_unknownObjectWeakDestroy(param_1 + searchTextView);
  _swift_unknownObjectWeakDestroy(param_1 + replaceTextView);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + initialString + 8));
  FUN_00026eec(*(undefined8 *)(param_1 + onDismiss),((undefined8 *)(param_1 + onDismiss))[1]);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::observeValueForKeyPath:ofObject:change:context: @ 000a4180 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::
     observeValueForKeyPath_ofObject_change_context_
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
    FUN_000a6ac0();
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_000a67b8(SVar2.str,SVar2.bridgeObject,&local_60);
  _swift_bridgeObjectRelease(DVar1.unknown);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_00007078(&local_60);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::mdTextFieldDidBecomeFirstResponder: @ 000a4b58 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::mdTextFieldDidBecomeFirstResponder_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  FUN_000a4798(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::mdTextFieldDidResignFirstResponder: @ 000a4bfc =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::mdTextFieldDidResignFirstResponder_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::hasFirstResponderTextView @ 000a4c78 =====

bool _TtC11MDTextKitUI28TextSearchCoreViewController::hasFirstResponderTextView
               (ID param_1,SEL param_2)

{
  
  puVar1 = PTR__swift_isaMask_0020e4b8;
  IVar2 = param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_0020e4b8 & *(ulong *)param_1) + 0x198))();
  uVar3 = (uint)IVar2;
  if ((IVar2 & 1) == 0) {
    (**(code **)((*(ulong *)puVar1 & *(ulong *)param_1) + 0x1a0))();
  }
  else {
    uVar3 = 1;
  }
  return uVar3 & 1;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::isSearchTextViewFirstResponder @ 000a4d44 =====

bool _TtC11MDTextKitUI28TextSearchCoreViewController::isSearchTextViewFirstResponder
               (ID param_1,SEL param_2)

{
  return 0;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::isReplaceTextViewFirstResponder @ 000a4d4c =====

bool _TtC11MDTextKitUI28TextSearchCoreViewController::isReplaceTextViewFirstResponder
               (ID param_1,SEL param_2)

{
  return 0;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::isParentTextViewOrDescendantFirstResponder @ 000a4d54 =====

bool _TtC11MDTextKitUI28TextSearchCoreViewController::isParentTextViewOrDescendantFirstResponder
               (ID param_1,SEL param_2)

{
  
  bVar1 = MDTextKitUI::TextSearchCoreViewController::get_isParentTextViewOrDescendantFirstResponder
                    ((TextSearchCoreViewController *)param_1,(TextSearchCoreViewController *)param_1
                    );
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::moveToNextResult @ 000a587c =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::moveToNextResult(ID param_1,SEL param_2)

{
  TextSearchController *this;
  
  lVar1 = textSearchController;
  _swift_beginAccess(param_1 + textSearchController,auStack_38,0,0);
  this = (TextSearchController *)(param_1 + lVar1);
  _swift_unknownObjectWeakLoadStrong();
  if (this != (TextSearchController *)0x0) {
    MDTextKitUI::TextSearchController::focusNextMatch(this);
  }
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::moveToPreviousResult @ 000a5a1c =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::moveToPreviousResult(ID param_1,SEL param_2)

{
  MDTextKitUI::TextSearchCoreViewController::moveToPreviousResult
            ((TextSearchCoreViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::replaceCurrentResultWith: @ 000a5a50 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::replaceCurrentResultWith_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_000a5b1c();
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::replaceAllResultsWith: @ 000a5b10 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::replaceAllResultsWith_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_000a5b1c();
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::close @ 000a5cfc =====

int _TtC11MDTextKitUI28TextSearchCoreViewController::close(int param_1)

{
  MDTextKitUI::TextSearchCoreViewController::close
            ((TextSearchCoreViewController *)(ulong)(uint)param_1);
  return 0;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::toggleReplace @ 000a6018 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::toggleReplace(ID param_1,SEL param_2)

{
  
  uVar3 = isViewLoaded(param_1);
  puVar2 = PTR__swift_isaMask_0020e4b8;
  if ((int)uVar3 != 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_0020e4b8 & *(ulong *)param_1) + 0x238))();
    lVar1 = 0x248;
    if ((uVar3 & 1) == 0) {
      lVar1 = 0x240;
    }
    (**(code **)((*(ulong *)puVar2 & *(ulong *)param_1) + lVar1))();
  }
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::isShowingReplace @ 000a6084 =====

bool _TtC11MDTextKitUI28TextSearchCoreViewController::isShowingReplace(ID param_1,SEL param_2)

{
  return 0;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::showReplace @ 000a608c =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::showReplace(ID param_1,SEL param_2)

{
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::hideReplace @ 000a6090 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::hideReplace(ID param_1,SEL param_2)

{
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::focusSearchTextView @ 000a60a0 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::focusSearchTextView(ID param_1,SEL param_2)

{
  FUN_000a6134(param_1,param_2,&searchTextView);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::focusReplaceTextView @ 000a6128 =====

void _TtC11MDTextKitUI28TextSearchCoreViewController::focusReplaceTextView(ID param_1,SEL param_2)

{
  FUN_000a6134(param_1,param_2,&replaceTextView);
  return;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::initWithNibName:bundle: @ 000a661c =====

ID _TtC11MDTextKitUI28TextSearchCoreViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  TextSearchCoreViewController *pTVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pTVar1 = MDTextKitUI::TextSearchCoreViewController::_init((TextSearchCoreViewController *)param_1)
  return (ID)pTVar1;
}

// ===== _TtC11MDTextKitUI28TextSearchCoreViewController::initWithCoder: @ 000a6770 =====

ID _TtC11MDTextKitUI28TextSearchCoreViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::TextSearchCoreViewController::_init
            ((TextSearchCoreViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

