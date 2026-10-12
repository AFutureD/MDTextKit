// ===== _TtC11MDTextKitUI21MDQuickLookController::initialPreviewIndex @ 000301e0 =====

long_long _TtC11MDTextKitUI21MDQuickLookController::initialPreviewIndex(ID param_1,SEL param_2)

{
  
  lVar1 = initialPreviewIndex;
  _swift_beginAccess(param_1 + initialPreviewIndex,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI21MDQuickLookController::setInitialPreviewIndex: @ 00030264 =====

void _TtC11MDTextKitUI21MDQuickLookController::setInitialPreviewIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  
  lVar1 = initialPreviewIndex;
  _swift_beginAccess(param_1 + initialPreviewIndex,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21MDQuickLookController::showQuickLookPreviewFor: @ 000303c0 =====

void _TtC11MDTextKitUI21MDQuickLookController::showQuickLookPreviewFor_
               (ID param_1,SEL param_2,ID param_3)

{
  __int64 _Var2;
  
  _Var2 = MDTextKitUI::MDQuickLookCoreController::index
                    ((MDQuickLookCoreController *)param_1,(SFTextAttachment *)param_3);
  lVar1 = initialPreviewIndex;
  _swift_beginAccess(param_1 + initialPreviewIndex,auStack_48,1,0);
  *(__int64 *)(param_1 + lVar1) = _Var2;
  self = QLPreviewPanel::sharedPreviewPanel(QLPreviewPanel);
  if (self != 0) {
    QLPreviewPanel::makeKeyAndOrderFront_(self,0);
  }
  return;
}

// ===== _TtC11MDTextKitUI21MDQuickLookController::numberOfPreviewItemsInPreviewPanel: @ 00030474 =====

long_long _TtC11MDTextKitUI21MDQuickLookController::numberOfPreviewItemsInPreviewPanel_
                    (ID param_1,SEL param_2,ID param_3)

{
  FUN_00030854();
  return param_1;
}

// ===== _TtC11MDTextKitUI21MDQuickLookController::previewPanel:previewItemAtIndex: @ 000304d4 =====

ID _TtC11MDTextKitUI21MDQuickLookController::previewPanel_previewItemAtIndex_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  MDTextKitUI::MDQuickLookCoreController::_previewItem((MDQuickLookCoreController *)param_1,param_4)
  return param_4;
}

// ===== _TtC11MDTextKitUI21MDQuickLookController::previewPanel:handleEvent: @ 00030534 =====

bool _TtC11MDTextKitUI21MDQuickLookController::previewPanel_handleEvent_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return 0;
}

// ===== _TtC11MDTextKitUI21MDQuickLookController::previewPanel:sourceFrameOnScreenForPreviewItem: @ 00030544 =====

CGRect _TtC11MDTextKitUI21MDQuickLookController::previewPanel_sourceFrameOnScreenForPreviewItem_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  CGRect CVar1;
  
  _swift_unknownObjectRetain(param_4);
  FUN_00030a14(param_4);
  _swift_unknownObjectRelease(param_4);
  CVar1.field0_0x0.field1_0x8 = in_d1;
  CVar1.field0_0x0.field0_0x0 = in_d0;
  CVar1.field1_0x10.field1_0x8 = in_d3;
  CVar1.field1_0x10.field0_0x0 = in_d2;
  return CVar1;
}

// ===== _TtC11MDTextKitUI21MDQuickLookController::initWith: @ 00030758 =====

ID _TtC11MDTextKitUI21MDQuickLookController::initWith_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + initialPreviewIndex) = 0;
  _swift_unknownObjectWeakInit(param_1 + _TtC11MDTextKitUI25MDQuickLookCoreController::delegate,0);
  _swift_unknownObjectWeakInit(param_1 + _TtC11MDTextKitUI25MDQuickLookCoreController::textView,0);
  local_40.super_class = (class_t *)MDTextKitUI::MDQuickLookCoreController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"init");
  lVar1 = _TtC11MDTextKitUI25MDQuickLookCoreController::textView;
  _swift_beginAccess(IVar2 + _TtC11MDTextKitUI25MDQuickLookCoreController::textView,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(IVar2 + lVar1,param_3);
  return IVar2;
}

