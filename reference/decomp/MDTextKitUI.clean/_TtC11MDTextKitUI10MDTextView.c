// ===== _TtC11MDTextKitUI10MDTextView::accessibilityChildren @ 0004a42c =====

ID _TtC11MDTextKitUI10MDTextView::accessibilityChildren(ID param_1,SEL param_2)

{
  NSArray *pNVar2;
  
  IVar1 = isAccessibilityEnabled(param_1);
  if ((int)IVar1 != 0) {
    local_40.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
    local_40.receiver = param_1;
    IVar1 = _objc_msgSendSuper2(&local_40,"accessibilityChildren");
    if (IVar1 != 0) {
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(IVar1);
      return (ID)pNVar2;
    }
  }
  return 0;
}

// ===== _TtC11MDTextKitUI10MDTextView::completionColor @ 0004a4dc =====

ID _TtC11MDTextKitUI10MDTextView::completionColor(ID param_1,SEL param_2)

{
  
  lVar1 = completionColor;
  _swift_beginAccess(param_1 + completionColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI10MDTextView::setCompletionColor: @ 0004a564 =====

void _TtC11MDTextKitUI10MDTextView::setCompletionColor_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = completionColor;
  _swift_beginAccess(param_1 + completionColor,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::internalDraggingRange @ 0004a65c =====

_NSRange _TtC11MDTextKitUI10MDTextView::internalDraggingRange(ID param_1,SEL param_2)

{
  
  p_Var1 = (_NSRange *)(param_1 + internalDraggingRange);
  _swift_beginAccess(p_Var1,auStack_38,0,0);
  return *p_Var1;
}

// ===== _TtC11MDTextKitUI10MDTextView::setInternalDraggingRange: @ 0004a6e4 =====

void __thiscall
_TtC11MDTextKitUI10MDTextView::setInternalDraggingRange_
          (_TtC11MDTextKitUI10MDTextView *this,ID param_1,SEL param_2,_NSRange param_3)

{
  
  puVar1 = (unsigned_long_long *)(param_1 + internalDraggingRange);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  *puVar1 = param_3.field0_0x0;
  puVar1[1] = param_3.field1_0x8;
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::singleLineDragging @ 0004a7cc =====

bool _TtC11MDTextKitUI10MDTextView::singleLineDragging(ID param_1,SEL param_2)

{
  
  lVar1 = singleLineDragging;
  _swift_beginAccess(param_1 + singleLineDragging,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI10MDTextView::setSingleLineDragging: @ 0004a850 =====

void _TtC11MDTextKitUI10MDTextView::setSingleLineDragging_(ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = singleLineDragging;
  _swift_beginAccess(param_1 + singleLineDragging,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::overscroll @ 0004a92c =====

bool _TtC11MDTextKitUI10MDTextView::overscroll(ID param_1,SEL param_2)

{
  
  lVar1 = overscroll;
  _swift_beginAccess(param_1 + overscroll,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI10MDTextView::setOverscroll: @ 0004a9b0 =====

void _TtC11MDTextKitUI10MDTextView::setOverscroll_(ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = overscroll;
  _swift_beginAccess(param_1 + overscroll,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  (**(code **)((*(ulong *)PTR__swift_isaMask_0020e4b8 & *(ulong *)param_1) + 0x2a0))(param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::mouseMoved: @ 0004ac04 =====

void _TtC11MDTextKitUI10MDTextView::mouseMoved_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextView::mouseMoved((MDTextView *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::mouseDown: @ 0004ac94 =====

void _TtC11MDTextKitUI10MDTextView::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"mouseDown:",param_3);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::textHighlightManager @ 0004acd8 =====

ID _TtC11MDTextKitUI10MDTextView::textHighlightManager(ID param_1,SEL param_2)

{
  MDTextHighlightManager *pMVar1;
  
  pMVar1 = MDTextKitUI::MDTextView::get_textHighlightManager
                     ((MDTextView *)param_1,(MDTextView *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::setTextHighlightManager: @ 0004ada4 =====

void _TtC11MDTextKitUI10MDTextView::setTextHighlightManager_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + ___lazy_storage___textHighlightManager) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::textFocusManager @ 0004ae30 =====

ID _TtC11MDTextKitUI10MDTextView::textFocusManager(ID param_1,SEL param_2)

{
  MDTextFocusManager *pMVar1;
  
  pMVar1 = MDTextKitUI::MDTextView::get_textFocusManager
                     ((MDTextView *)param_1,(MDTextView *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::setTextFocusManager: @ 0004af38 =====

void _TtC11MDTextKitUI10MDTextView::setTextFocusManager_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + ___lazy_storage___textFocusManager) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::initWithFrame: @ 0004b288 =====

ID _TtC11MDTextKitUI10MDTextView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MDTextView *pMVar1;
  
  pMVar1 = MDTextKitUI::MDTextView::init((MDTextView *)param_1,(CGRect)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::initWithFrame:textContainer: @ 0004b2dc =====

ID _TtC11MDTextKitUI10MDTextView::initWithFrame_textContainer_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  
  dVar1 = param_3.field0_0x0.field0_0x0;
  FUN();
  return (ID)dVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::initWithCoder: @ 0004b388 =====

ID _TtC11MDTextKitUI10MDTextView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return param_3;
}

// ===== _TtC11MDTextKitUI10MDTextView::restoreStateWithCoder: @ 0004b408 =====

void _TtC11MDTextKitUI10MDTextView::restoreStateWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"restoreStateWithCoder:",param_3);
  MDTextKitUI::MDTextView::setupSpellcheckerAndSubstitution((MDTextView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::dealloc @ 0004b53c =====

void _TtC11MDTextKitUI10MDTextView::dealloc(ID param_1,SEL param_2)

{
  String SVar2;
  String SVar3;
  
  local_40 = (char *)0x2074696e696564;
  pvStack_38 = (void *)0xe700000000000000;
  description(param_1);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar3.bridgeObject = in_x3;
  SVar3.str = in_x2;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  pvVar1 = pvStack_38;
  SVar2.bridgeObject = pvStack_38;
  SVar2.str = local_40;
  Foundation::_NSLog(SVar2);
  _swift_bridgeObjectRelease(pvVar1);
  local_50.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"dealloc");
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::.cxx_destruct @ 0004b5f4 =====

void _TtC11MDTextKitUI10MDTextView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + defaultTextAttributes));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(param_1 + MDTextViewContinuousSpellCheckingEnabled + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + MDTextViewGrammarCheckingEnabled + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(param_1 + MDTextViewAutomaticSpellingCorrectionEnabled + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + MDTextViewSmartInsertDeleteEnabled + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(param_1 + MDTextViewAutomaticTextCompletionEnabled + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(param_1 + MDTextViewAutomaticTextReplacementEnabled + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(param_1 + MDTextViewAutomaticDashSubstitutionEnabled + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(param_1 + MDTextViewAutomaticQuoteSubstitutionEnabled + 8));
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::AttributedStringPboardType @ 0004b718 =====

ID _TtC11MDTextKitUI10MDTextView::AttributedStringPboardType(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::didChangeText @ 0004bab4 =====

void _TtC11MDTextKitUI10MDTextView::didChangeText(ID param_1,SEL param_2)

{
  MDTextKitUI::MDTextView::didChangeText((MDTextView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::drawRect: @ 0004bb84 =====

void _TtC11MDTextKitUI10MDTextView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  CGRect CVar2;
  
  local_60.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
  local_60.receiver = param_1;
  _objc_msgSendSuper2(&local_60,"drawRect:");
  lVar1 = singleLineDragging;
  CVar2.unknown = (undefined *)(param_1 + singleLineDragging);
  _swift_beginAccess(CVar2.unknown,auStack_78,0,0);
  if (*(char *)(param_1 + lVar1) == '\x01') {
    MDTextKitUI::MDTextView::drawLineInsertionPoint((MDTextView *)param_1,CVar2);
  }
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::viewDidEndLiveResize @ 0004bd9c =====

void _TtC11MDTextKitUI10MDTextView::viewDidEndLiveResize(ID param_1,SEL param_2)

{
  MDTextKitUI::MDTextView::viewDidEndLiveResize((MDTextView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::respondsToSelector: @ 0004be24 =====

bool _TtC11MDTextKitUI10MDTextView::respondsToSelector_(ID param_1,SEL param_2,SEL param_3)

{
  
  if ((param_3 == (SEL)0x0) ||
     (bVar1 = ObjectiveC::Selector::___infix
                        ((Selector)param_3,(Selector)"performFindPanelAction:",(Selector)param_3),
     !bVar1)) {
    local_40.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
    local_40.receiver = param_1;
    IVar2 = _objc_msgSendSuper2(&local_40,"respondsToSelector:",param_3);
    bVar3 = (bool)IVar2;
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}

// ===== _TtC11MDTextKitUI10MDTextView::hasFirstResponderTextAttachment @ 0004bf2c =====

bool _TtC11MDTextKitUI10MDTextView::hasFirstResponderTextAttachment(ID param_1,SEL param_2)

{
  
  bVar1 = MDTextKitUI::MDTextView::get_hasFirstResponderTextAttachment
                    ((MDTextView *)param_1,(MDTextView *)param_1);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::becomeFirstResponder @ 0004c898 =====

bool _TtC11MDTextKitUI10MDTextView::becomeFirstResponder(ID param_1,SEL param_2)

{
  
  bVar1 = MDTextKitUI::MDTextView::becomeFirstResponder((MDTextView *)param_1);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::resignFirstResponder @ 0004cd9c =====

bool _TtC11MDTextKitUI10MDTextView::resignFirstResponder(ID param_1,SEL param_2)

{
  
  bVar1 = MDTextKitUI::MDTextView::resignFirstResponder((MDTextView *)param_1);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::keyDown: @ 0004ceb4 =====

void _TtC11MDTextKitUI10MDTextView::keyDown_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextView::keyDown((MDTextView *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::rangeForUserTextChange @ 0004cf04 =====

_NSRange _TtC11MDTextKitUI10MDTextView::rangeForUserTextChange(ID param_1,SEL param_2)

{
  
  lVar1 = singleLineDragging;
  _swift_beginAccess(param_1 + singleLineDragging,auStack_38,0,0);
  if (*(char *)(param_1 + lVar1) == '\x01') {
    IVar2 = MDTextKitUI::MDTextView::lineInsertionIndex((MDTextView *)param_1);
    pcVar3 = (char *)0x0;
  }
  else {
    local_48.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
    pcVar3 = "rangeForUserTextChange";
    local_48.receiver = param_1;
    IVar2 = _objc_msgSendSuper2(&local_48,"rangeForUserTextChange");
  }
  _Var4.field1_0x8 = (unsigned_long_long)pcVar3;
  _Var4.field0_0x0 = IVar2;
  return _Var4;
}

// ===== _TtC11MDTextKitUI10MDTextView::setMarkedText:selectedRange:replacementRange: @ 0004d52c =====

void _TtC11MDTextKitUI10MDTextView::setMarkedText_selectedRange_replacementRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  _Var1.length = param_4.field0_0x0;
  _Var1.location = (__int64)auStack_60;
  selectedRange.length = param_5.field0_0x0;
  selectedRange.location = param_4.field1_0x8;
  MDTextKitUI::MDTextView::_setMarkedText((MDTextView *)param_1,_Var1,selectedRange);
  ___swift_destroy_boxed_opaque_existential_1(auStack_60);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::setSelectedRanges:affinity:stillSelecting: @ 0004dccc =====

void _TtC11MDTextKitUI10MDTextView::setSelectedRanges_affinity_stillSelecting_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,bool param_5)

{
  FUN_00006084(0,&DAT_002347d8,&PTR__OBJC_CLASS___NSValue_00221248);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  MDTextKitUI::MDTextView::setSelectedRanges((MDTextView *)param_1,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(param_3);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::selectAll: @ 0004e098 =====

void _TtC11MDTextKitUI10MDTextView::selectAll_(ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::insertText:replacementRange: @ 0004eca0 =====

void __thiscall
_TtC11MDTextKitUI10MDTextView::insertText_replacementRange_
          (_TtC11MDTextKitUI10MDTextView *this,ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  _Var1.length = param_4.field0_0x0;
  _Var1.location = (__int64)auStack_50;
  MDTextKitUI::MDTextView::_insertText((MDTextView *)param_1,_Var1);
  ___swift_destroy_boxed_opaque_existential_1(auStack_50);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::readSelectionFromPasteboard:type: @ 0004ee18 =====

bool _TtC11MDTextKitUI10MDTextView::readSelectionFromPasteboard_type_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  bVar1 = MDTextKitUI::MDTextView::readSelection((MDTextView *)param_1,param_3,param_4);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::writeSelectionToPasteboard:type: @ 0004ef84 =====

bool _TtC11MDTextKitUI10MDTextView::writeSelectionToPasteboard_type_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  bVar1 = MDTextKitUI::MDTextView::writeSelection((MDTextView *)param_1,param_3,param_4);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::writablePasteboardTypes @ 0004effc =====

ID _TtC11MDTextKitUI10MDTextView::writablePasteboardTypes(ID param_1,SEL param_2)

{
  FUN_0004f40c(param_1,param_2,MDTextKitUI::MDTextView::get_writablePasteboardTypes);
  return param_1;
}

// ===== _TtC11MDTextKitUI10MDTextView::readablePasteboardTypes @ 0004f400 =====

ID _TtC11MDTextKitUI10MDTextView::readablePasteboardTypes(ID param_1,SEL param_2)

{
  FUN_0004f40c(param_1,param_2,MDTextKitUI::MDTextView::get_readablePasteboardTypes);
  return param_1;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollRectToVisible:animated: @ 0004f79c =====

void _TtC11MDTextKitUI10MDTextView::scrollRectToVisible_animated_
               (ID param_1,SEL param_2,CGRect param_3,bool param_4)

{
  CGRect CVar4;
  
  dVar3 = param_3.field1_0x10.field0_0x0;
  IVar1 = enclosingScrollView
                    (param_1,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,dVar3,
                     param_3.field1_0x10.field1_0x8,(ulong)param_4);
  uVar2 = SUB84(dVar3,0);
  if (IVar1 != 0) {
    convertRect_toView_(param_1,IVar1);
    CVar4.field0_0x0.field1_0x8 = in_d1;
    CVar4.field0_0x0.field0_0x0 = extraout_d0;
    CVar4.field1_0x10.field1_0x8 = in_d3;
    CVar4.field1_0x10.field0_0x0 = in_d2;
    scrollRectToVisible_animated_completionHandler_
              (IVar1,CVar4,param_3.field0_0x0.field0_0x0._0_4_,0,uVar2);
  }
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollRectToVisible:animated:completionHandler: @ 0004f96c =====

void _TtC11MDTextKitUI10MDTextView::scrollRectToVisible_animated_completionHandler_
               (ID param_1,SEL param_2,CGRect param_3,bool param_4,ID param_5,undefined4 param_6)

{
  
  pvVar1 = __Block_copy(param_3.field0_0x0.field1_0x8);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_00206888;
    _swift_allocObject(&DAT_00206888,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN;
  }
  MDTextKitUI::MDTextView::_scrollRectToVisible
            ((MDTextView *)param_1,(CGRect)param_3.field0_0x0.field0_0x0,SUB81(pcVar3,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollRectToTop:animated:completionHandler: @ 0004fb60 =====

void _TtC11MDTextKitUI10MDTextView::scrollRectToTop_animated_completionHandler_
               (ID param_1,SEL param_2,CGRect param_3,bool param_4,ID param_5,undefined4 param_6)

{
  
  pvVar1 = __Block_copy(param_3.field0_0x0.field1_0x8);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_00206860;
    _swift_allocObject(&DAT_00206860,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN;
  }
  MDTextKitUI::MDTextView::_scrollRectToTop
            ((MDTextView *)param_1,(CGRect)param_3.field0_0x0.field0_0x0,SUB81(pcVar3,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollRangeToVisible:animated:completion: @ 0004fdfc =====

void _TtC11MDTextKitUI10MDTextView::scrollRangeToVisible_animated_completion_
               (ID param_1,SEL param_2,_NSRange param_3,bool param_4,ID param_5,undefined4 param_6)

{
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_00206838;
    _swift_allocObject(&DAT_00206838,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN;
  }
  MDTextKitUI::MDTextView::_scrollRangeToVisible
            ((MDTextView *)param_1,(_NSRange)param_3,SUB41(param_4,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollRangeToVisible:animated:additionalOffset:completion: @ 00050098 =====

void _TtC11MDTextKitUI10MDTextView::scrollRangeToVisible_animated_additionalOffset_completion_
               (ID param_1,SEL param_2,_NSRange param_3,bool param_4,double param_5,ID param_6,
               undefined4 param_7)

{
  
  pvVar1 = __Block_copy((void *)param_6);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    additionalOffset = (code *)0x0;
  }
  else {
    puVar2 = &DAT_00206810;
    _swift_allocObject(&DAT_00206810,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    additionalOffset = thunk_FUN;
  }
  MDTextKitUI::MDTextView::_scrollRangeToVisible
            ((MDTextView *)param_1,(_NSRange)param_3,SUB41(param_4,0),(CGFloat)additionalOffset);
  FUN_00026eec(additionalOffset,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollRangeToTop:animated:completion: @ 00050330 =====

void _TtC11MDTextKitUI10MDTextView::scrollRangeToTop_animated_completion_
               (ID param_1,SEL param_2,_NSRange param_3,bool param_4,ID param_5,undefined4 param_6)

{
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_002067e8;
    _swift_allocObject(&DAT_002067e8,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN;
  }
  MDTextKitUI::MDTextView::_scrollRangeToTop
            ((MDTextView *)param_1,(_NSRange)param_3,SUB41(param_4,0));
  FUN_00026eec(pcVar3,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollRangeToTop:animated:additionalOffset:completion: @ 000505cc =====

void _TtC11MDTextKitUI10MDTextView::scrollRangeToTop_animated_additionalOffset_completion_
               (ID param_1,SEL param_2,_NSRange param_3,bool param_4,double param_5,ID param_6,
               undefined4 param_7)

{
  
  pvVar1 = __Block_copy((void *)param_6);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    additionalOffset = (code *)0x0;
  }
  else {
    puVar2 = &DAT_002067c0;
    _swift_allocObject(&DAT_002067c0,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    additionalOffset = FUN;
  }
  MDTextKitUI::MDTextView::_scrollRangeToTop
            ((MDTextView *)param_1,(_NSRange)param_3,SUB41(param_4,0),(CGFloat)additionalOffset);
  FUN_00026eec(additionalOffset,puVar2);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::scrollToTopWithAnimated: @ 000506b4 =====

void _TtC11MDTextKitUI10MDTextView::scrollToTopWithAnimated_(ID param_1,SEL param_2,bool param_3)

{
  (**(code **)((*(ulong *)PTR__swift_isaMask_0020e4b8 & *(ulong *)param_1) + 0x230))
            (0,0,0x3ff0000000000000,0x3ff0000000000000,param_3);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::focus: @ 00050808 =====

void __thiscall
_TtC11MDTextKitUI10MDTextView::focus_
          (_TtC11MDTextKitUI10MDTextView *this,ID param_1,SEL param_2,_NSRange param_3)

{
  MDTextKitUI::MDTextView::focus((MDTextView *)param_1,(_NSRange)param_3);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::textContainerOrigin @ 00050924 =====

CGPoint _TtC11MDTextKitUI10MDTextView::textContainerOrigin(ID param_1,SEL param_2)

{
  CGPoint CVar1;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"textContainerOrigin");
  CVar1.field1_0x8 = in_d1 - *(double *)(param_1 + overscrollY);
  CVar1.field0_0x0 = in_d0;
  return CVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::updateOverscrolling @ 00050b74 =====

void _TtC11MDTextKitUI10MDTextView::updateOverscrolling(ID param_1,SEL param_2)

{
  MDTextKitUI::MDTextView::updateOverscrolling((MDTextView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::typewriterMode @ 00050b9c =====

bool _TtC11MDTextKitUI10MDTextView::typewriterMode(ID param_1,SEL param_2)

{
  
  lVar1 = typewriterMode;
  _swift_beginAccess(param_1 + typewriterMode,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI10MDTextView::setTypewriterMode: @ 00050c20 =====

void _TtC11MDTextKitUI10MDTextView::setTypewriterMode_(ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::MDTextView::set_typewriterMode((MDTextView *)param_1,SUB41(param_3,0));
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::disableTypewriterScrolling @ 00050f0c =====

void _TtC11MDTextKitUI10MDTextView::disableTypewriterScrolling(ID param_1,SEL param_2)

{
  DispatchPredicate DVar2;
  OS_dispatch_queue *pOVar5;
  
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_00006084(0,&DAT_002345e8,&PTR__OBJC_CLASS___OS_dispatch_queue_002211a8);
  pOVar5 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main((OS_dispatch_queue *)param_1);
  *puVar6 = pOVar5;
  (**(code **)(lVar7 + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchPredicate_onQueue_Dispatch_DispatchPredicate_Type___>____C_OS_dispatch_queue___>_Dispatch_DispatchPredicate_0020e5a0
             ,lVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar6);
  (**(code **)(lVar7 + 8))(puVar6,lVar4);
  if (!bVar3) {
    pcVar1 = (code *)SoftwareBreakpoint(1,0x51004);
    (*pcVar1)();
  }
  if (!SCARRY8(*(long *)(param_1 + disableTypewriterScrollingCount),1)) {
    *(long *)(param_1 + disableTypewriterScrollingCount) =
         *(long *)(param_1 + disableTypewriterScrollingCount) + 1;
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0x51008);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI10MDTextView::enableTypewriterScrolling @ 000510ec =====

void _TtC11MDTextKitUI10MDTextView::enableTypewriterScrolling(ID param_1,SEL param_2)

{
  MDTextKitUI::MDTextView::enableTypewriterScrolling((MDTextView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::centerSelectionWithAnimated:debounce: @ 000517a4 =====

void _TtC11MDTextKitUI10MDTextView::centerSelectionWithAnimated_debounce_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  MDTextKitUI::MDTextView::centerSelection((MDTextView *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::draggingEntered: @ 00051d34 =====

unsigned_long_long
_TtC11MDTextKitUI10MDTextView::draggingEntered_(ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return param_1;
}

// ===== _TtC11MDTextKitUI10MDTextView::draggingUpdated: @ 00051ea8 =====

unsigned_long_long
_TtC11MDTextKitUI10MDTextView::draggingUpdated_(ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return param_1;
}

// ===== _TtC11MDTextKitUI10MDTextView::draggingEnded: @ 00051fa8 =====

void _TtC11MDTextKitUI10MDTextView::draggingEnded_(ID param_1,SEL param_2,ID param_3)

{
  __int64 *p_Var1;
  __int64 _Var4;
  
  _swift_unknownObjectRetain(param_3);
  _Var4 = Foundation::get_NSNotFound();
  p_Var1 = (__int64 *)(param_1 + internalDraggingRange);
  _swift_beginAccess(p_Var1,auStack_48,1,0);
  *p_Var1 = _Var4;
  p_Var1[1] = 0;
  lVar3 = singleLineDragging;
  _swift_beginAccess(param_1 + singleLineDragging,auStack_60,1,0);
  *(undefined1 *)(param_1 + lVar3) = 0;
  puVar2 = (undefined8 *)(param_1 + lineInsertionPointRect);
  setNeedsDisplayInRect_avoidAdditionalLayout_
            (param_1,*puVar2,puVar2[1],puVar2[2],puVar2[3],1);
  _swift_unknownObjectRelease(param_3);
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::prepareForDragOperation: @ 000520e0 =====

bool _TtC11MDTextKitUI10MDTextView::prepareForDragOperation_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDTextView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _swift_unknownObjectRetain(param_3);
  IVar3 = _objc_msgSendSuper2(&local_40,"prepareForDragOperation:",param_3);
  uVar2 = (uint)IVar3;
  if (uVar2 == 0) {
    puVar1 = (undefined8 *)(param_1 + lineInsertionPointRect);
    _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],0,0,0,0);
    _swift_unknownObjectRelease(param_3);
    uVar2 = uVar2 ^ 1;
  }
  else {
    _swift_unknownObjectRelease(param_3);
    uVar2 = 1;
  }
  return uVar2;
}

// ===== _TtC11MDTextKitUI10MDTextView::performDragOperation: @ 00052278 =====

bool _TtC11MDTextKitUI10MDTextView::performDragOperation_(ID param_1,SEL param_2,ID param_3)

{
  
  _swift_unknownObjectRetain(param_3);
  bVar1 = MDTextKitUI::MDTextView::_performDragOperation((MDTextView *)param_1);
  _swift_unknownObjectRelease(param_3);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI10MDTextView::dragImageForSelectionWithEvent:origin: @ 00052454 =====

ID _TtC11MDTextKitUI10MDTextView::dragImageForSelectionWithEvent_origin_
             (ID param_1,SEL param_2,ID param_3,CGPoint *param_4)

{
  MDTextKitUI::MDTextView::_dragImageForSelection((MDTextView *)param_1,(NSEvent *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleContinuousSpellChecking: @ 00052d04 =====

void _TtC11MDTextKitUI10MDTextView::toggleContinuousSpellChecking_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleGrammarChecking: @ 00052dd8 =====

void _TtC11MDTextKitUI10MDTextView::toggleGrammarChecking_(ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleAutomaticSpellingCorrection: @ 00052eac =====

void _TtC11MDTextKitUI10MDTextView::toggleAutomaticSpellingCorrection_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleSmartInsertDelete: @ 00052f80 =====

void _TtC11MDTextKitUI10MDTextView::toggleSmartInsertDelete_(ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleAutomaticTextCompletion: @ 00053054 =====

void _TtC11MDTextKitUI10MDTextView::toggleAutomaticTextCompletion_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleAutomaticTextReplacement: @ 00053128 =====

void _TtC11MDTextKitUI10MDTextView::toggleAutomaticTextReplacement_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleAutomaticDashSubstitution: @ 000531fc =====

void _TtC11MDTextKitUI10MDTextView::toggleAutomaticDashSubstitution_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

// ===== _TtC11MDTextKitUI10MDTextView::toggleAutomaticQuoteSubstitution: @ 000532d0 =====

void _TtC11MDTextKitUI10MDTextView::toggleAutomaticQuoteSubstitution_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN();
  return;
}

