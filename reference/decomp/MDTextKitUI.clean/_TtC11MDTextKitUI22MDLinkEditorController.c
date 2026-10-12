// ===== _TtC11MDTextKitUI22MDLinkEditorController::labelAndURLFor:in:pasteClipboardText:completion: @ 0007d944 =====

void _TtC11MDTextKitUI22MDLinkEditorController::labelAndURLFor_in_pasteClipboardText_completion_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  
  pvVar1 = __Block_copy((void *)param_6);
  FUN_0007eb4c(param_3.field0_0x0,param_3.field1_0x8,param_4,param_5,pvVar1);
  return;
}

// ===== _TtC11MDTextKitUI22MDLinkEditorController::init @ 0007daa4 =====

ID _TtC11MDTextKitUI22MDLinkEditorController::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDLinkEditorController::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}

