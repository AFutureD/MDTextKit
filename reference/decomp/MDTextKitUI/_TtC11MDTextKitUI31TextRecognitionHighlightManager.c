// ===== _TtC11MDTextKitUI31TextRecognitionHighlightManager::view @ 0007b4e0 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI31TextRecognitionHighlightManager::view(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = view;
  _swift_beginAccess(param_1 + view,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI31TextRecognitionHighlightManager::setView: @ 0007b56c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI31TextRecognitionHighlightManager::setView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = view;
  _swift_beginAccess(param_1 + view,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI31TextRecognitionHighlightManager::init @ 0007b8e8 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI31TextRecognitionHighlightManager::init(ID param_1,SEL param_2)

{
  TextRecognitionHighlightManager *pTVar1;
  
  pTVar1 = MDTextKitUI::TextRecognitionHighlightManager::init
                     ((TextRecognitionHighlightManager *)param_1);
  return (ID)pTVar1;
}


// ===== _TtC11MDTextKitUI31TextRecognitionHighlightManager::initWithView: @ 0007b908 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI31TextRecognitionHighlightManager::initWithView_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_0007cd28();
  return param_3;
}


// ===== _TtC11MDTextKitUI31TextRecognitionHighlightManager::removeHighlight: @ 0007c2e8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC11MDTextKitUI31TextRecognitionHighlightManager::removeHighlight_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::TextRecognitionHighlightManager::removeHighlight
                    ((TextRecognitionHighlightManager *)param_1,
                     (TextRecognitionHighlightView *)param_3);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI31TextRecognitionHighlightManager::clearHighlights @ 0007c548 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI31TextRecognitionHighlightManager::clearHighlights(ID param_1,SEL param_2)

{
  MDTextKitUI::TextRecognitionHighlightManager::clearHighlights
            ((TextRecognitionHighlightManager *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI31TextRecognitionHighlightManager::.cxx_destruct @ 0007c5a0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI31TextRecognitionHighlightManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + view);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + highlightsDictionary));
  return;
}


