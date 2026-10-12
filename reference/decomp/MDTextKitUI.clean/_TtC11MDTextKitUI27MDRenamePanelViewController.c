// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::renamePanelViewController @ 000ce980 =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::renamePanelViewController(ID param_1,SEL param_2)

{
  FUN_000d04ac();
  return param_1;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::titleTextField @ 000ce994 =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::titleTextField(ID param_1,SEL param_2)

{
  
  lVar1 = titleTextField;
  _swift_beginAccess(param_1 + titleTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::setTitleTextField: @ 000cea28 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::setTitleTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::renameTextField @ 000ceac8 =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::renameTextField(ID param_1,SEL param_2)

{
  
  lVar1 = renameTextField;
  _swift_beginAccess(param_1 + renameTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::setRenameTextField: @ 000ceb5c =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::setRenameTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::errorTextField @ 000cebfc =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::errorTextField(ID param_1,SEL param_2)

{
  
  lVar1 = errorTextField;
  _swift_beginAccess(param_1 + errorTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::setErrorTextField: @ 000cec90 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::setErrorTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::doneButton @ 000ced30 =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::doneButton(ID param_1,SEL param_2)

{
  
  lVar1 = doneButton;
  _swift_beginAccess(param_1 + doneButton,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::setDoneButton: @ 000cedc4 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::setDoneButton_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::cancelButton @ 000cee64 =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::cancelButton(ID param_1,SEL param_2)

{
  
  lVar1 = cancelButton;
  _swift_beginAccess(param_1 + cancelButton,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::setCancelButton: @ 000ceef8 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::setCancelButton_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::themeManager @ 000cef98 =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::themeManager(ID param_1,SEL param_2)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::setThemeManager: @ 000cf02c =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::setThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::viewDidLoad @ 000cf1f8 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDRenamePanelViewController::viewDidLoad((MDRenamePanelViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::controlTextDidChange: @ 000cf458 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::controlTextDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar3;
  
  NVar3 = Foundation::Notification::typeMetadataAccessor();
  lVar4 = *(long *)(NVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar4 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  lVar1 = errorTextField;
  _swift_beginAccess(param_1 + errorTextField,auStack_58,0,0);
  if (*(ID *)(param_1 + lVar1) != 0) {
    setHidden_(*(ID *)(param_1 + lVar1),1);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar3.unknown);
    return;
  }
  pcVar2 = (code *)SoftwareBreakpoint(1,0xcf514);
  (*pcVar2)();
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::styleObjectWithThemeManager: @ 000cf9a0 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDRenamePanelViewController::_styleObject((MDRenamePanelViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::cancelButtonPressed: @ 000cf9f4 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::cancelButtonPressed_
               (ID param_1,SEL param_2,ID param_3)

{
  
  puVar1 = auStack_50;
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  pcVar3 = *(code **)(param_1 + onCancel);
  if (pcVar3 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + onCancel))[1];
    FUN_00019830(pcVar3,uVar2);
    (*pcVar3)();
    FUN_00026eec(pcVar3,uVar2);
  }
  ___swift_project_boxed_opaque_existential_1(auStack_50,local_38);
  Swift::__bridgeAnythingToObjectiveC();
  dismissController_(param_1,puVar1);
  _swift_unknownObjectRelease(puVar1);
  ___swift_destroy_boxed_opaque_existential_1(auStack_50);
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::commitLinkEdit: @ 000cfe84 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::commitLinkEdit_
               (ID param_1,SEL param_2,ID param_3)

{
  
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  FUN_000cfac0(auStack_40);
  ___swift_destroy_boxed_opaque_existential_1(auStack_40);
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::popoverWillShow: @ 000d0000 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::popoverWillShow_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  MDTextKitUI::MDRenamePanelViewController::popoverWillShow
            ((MDRenamePanelViewController *)param_1,
             (Notification)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::popoverDidShow: @ 000d00a8 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::popoverDidShow_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  FUN_000d0604(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::initWithNibName:bundle: @ 000d0238 =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDRenamePanelViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDRenamePanelViewController::_init((MDRenamePanelViewController *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::initWithCoder: @ 000d038c =====

ID _TtC11MDTextKitUI27MDRenamePanelViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDRenamePanelViewController::_init
            ((MDRenamePanelViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI27MDRenamePanelViewController::.cxx_destruct @ 000d03e4 =====

void _TtC11MDTextKitUI27MDRenamePanelViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + initialFilenameString + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + pathExtension + 8));
  FUN_00026eec(*(undefined8 *)(param_1 + onDone),((undefined8 *)(param_1 + onDone))[1]);
  FUN_00026eec(*(undefined8 *)(param_1 + onCancel),((undefined8 *)(param_1 + onCancel))[1]);
  return;
}

