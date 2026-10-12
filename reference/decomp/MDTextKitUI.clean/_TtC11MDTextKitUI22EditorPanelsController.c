// ===== _TtC11MDTextKitUI22EditorPanelsController::themeManager @ 0019f7f4 =====

ID _TtC11MDTextKitUI22EditorPanelsController::themeManager(ID param_1,SEL param_2)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22EditorPanelsController::setThemeManager: @ 0019f888 =====

void _TtC11MDTextKitUI22EditorPanelsController::setThemeManager_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI22EditorPanelsController::openLinkEditorWithLabel:urlString:titleString:preview:in:positioningView:positioningRect:onDone: @ 001a0114 =====

void _TtC11MDTextKitUI22EditorPanelsController::
     openLinkEditorWithLabel_urlString_titleString_preview_in_positioningView_positioningRect_onDone_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,ID param_7,
               ID param_8,CGRect param_9,ID param_10,undefined4 param_11)

{
  String label;
  String SVar3;
  String SVar4;
  
  pvVar1 = __Block_copy((void *)param_9.field0_0x0.field0_0x0);
  if (param_3 == 0) {
    label = (String)(ZEXT816(0) << 0x40);
  }
  else {
    label = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (param_5 == 0) {
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  puVar2 = &DAT_0020c9b0;
  _swift_allocObject(&DAT_0020c9b0,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  MDTextKitUI::EditorPanelsController::_openLinkEditor
            ((EditorPanelsController *)param_1,label,SVar3.str._0_1_,SVar3.bridgeObject,
             (NSView *)SVar4.str,(CGRect)SVar4.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRelease(label.bridgeObject);
  return;
}

// ===== _TtC11MDTextKitUI22EditorPanelsController::presentRenamePopoverFor:filename:positioningView:positioningRect:onDone:onCancel: @ 001a04fc =====

void __thiscall
_TtC11MDTextKitUI22EditorPanelsController::
presentRenamePopoverFor_filename_positioningView_positioningRect_onDone_onCancel_
          (_TtC11MDTextKitUI22EditorPanelsController *this,ID param_1,SEL param_2,ID param_3,
          ID param_4,ID param_5,CGRect param_6,ID param_7,undefined4 param_8,ID param_9,
          undefined4 param_10)

{
  String filename;
  
  pvVar1 = __Block_copy((void *)param_6.field0_0x0.field0_0x0);
  pvVar2 = __Block_copy((void *)param_6.field0_0x0.field1_0x8);
  filename = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar3 = &DAT_0020c960;
  _swift_allocObject(&DAT_0020c960,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar1;
  puVar4 = &DAT_0020c988;
  _swift_allocObject(&DAT_0020c988,0x18,7);
  *(void **)(puVar4 + 0x10) = pvVar2;
  MDTextKitUI::EditorPanelsController::presentRenamePopover
            ((EditorPanelsController *)param_1,(NSViewController *)param_3,filename,
             (NSView *)param_5,(CGRect)0x1a0bf4);
  _swift_bridgeObjectRelease(filename.bridgeObject);
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

// ===== _TtC11MDTextKitUI22EditorPanelsController::init @ 001a0688 =====

ID _TtC11MDTextKitUI22EditorPanelsController::init(ID param_1,SEL param_2)

{
  
  *(undefined8 *)(param_1 + themeManager) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::EditorPanelsController::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}

// ===== _TtC11MDTextKitUI22EditorPanelsController::.cxx_destruct @ 001a0700 =====

void _TtC11MDTextKitUI22EditorPanelsController::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

