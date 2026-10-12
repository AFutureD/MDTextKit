// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::titleTextField @ 00064350 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::titleTextField(ID param_1,SEL param_2)

{
  
  lVar1 = titleTextField;
  _swift_beginAccess(param_1 + titleTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::setTitleTextField: @ 000643e4 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::setTitleTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::labelTextField @ 00064484 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::labelTextField(ID param_1,SEL param_2)

{
  
  lVar1 = labelTextField;
  _swift_beginAccess(param_1 + labelTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::setLabelTextField: @ 00064518 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::setLabelTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::urlTextField @ 000645b8 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::urlTextField(ID param_1,SEL param_2)

{
  
  lVar1 = urlTextField;
  _swift_beginAccess(param_1 + urlTextField,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::setUrlTextField: @ 0006464c =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::setUrlTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::previewCheckbox @ 000646ec =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::previewCheckbox(ID param_1,SEL param_2)

{
  
  lVar1 = previewCheckbox;
  _swift_beginAccess(param_1 + previewCheckbox,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::setPreviewCheckbox: @ 00064780 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::setPreviewCheckbox_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::doneButton @ 00064820 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::doneButton(ID param_1,SEL param_2)

{
  
  lVar1 = doneButton;
  _swift_beginAccess(param_1 + doneButton,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::setDoneButton: @ 000648b4 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::setDoneButton_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::cancelButton @ 00064954 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::cancelButton(ID param_1,SEL param_2)

{
  
  lVar1 = cancelButton;
  _swift_beginAccess(param_1 + cancelButton,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::setCancelButton: @ 000649e8 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::setCancelButton_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::themeManager @ 00064a88 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::themeManager(ID param_1,SEL param_2)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::setThemeManager: @ 00064b1c =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::setThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::linkEditorViewController @ 00064bc0 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::linkEditorViewController(ID param_1,SEL param_2)

{
  FUN_00065d4c();
  return param_1;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::dealloc @ 00064c8c =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::dealloc(ID param_1,SEL param_2)

{
  String SVar2;
  String SVar3;
  
  local_40 = (char *)0x20636f6c616564;
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
  local_50.super_class = (class_t *)MDTextKitUI::MDLinkPanelViewController::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"dealloc");
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::.cxx_destruct @ 00064d44 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + linkTitle + 8));
  FUN_00026eec(*(undefined8 *)(param_1 + onDone),((undefined8 *)(param_1 + onDone))[1]);
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::viewDidLoad @ 00064e70 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::viewDidLoad(ID param_1,SEL param_2)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDLinkPanelViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"viewDidLoad");
  _swift_beginAccess(param_1 + themeManager,auStack_58,0,0);
  MDTextKitUI::MDLinkPanelViewController::_styleObject((MDLinkPanelViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::styleObjectWithThemeManager: @ 0006552c =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDLinkPanelViewController::_styleObject((MDLinkPanelViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::commitLinkEdit: @ 00065818 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::commitLinkEdit_
               (ID param_1,SEL param_2,ID param_3)

{
  
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  FUN_00065580();
  ___swift_destroy_boxed_opaque_existential_1(auStack_40);
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::popoverWillShow: @ 000659a0 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::popoverWillShow_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  MDTextKitUI::MDLinkPanelViewController::popoverWillShow
            ((MDLinkPanelViewController *)param_1,
             (Notification)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::popoverDidShow: @ 00065a48 =====

void _TtC11MDTextKitUI25MDLinkPanelViewController::popoverDidShow_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  FUN_00065f30(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::initWithNibName:bundle: @ 00065bd4 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDLinkPanelViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDLinkPanelViewController::_init((MDLinkPanelViewController *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI25MDLinkPanelViewController::initWithCoder: @ 00065d24 =====

ID _TtC11MDTextKitUI25MDLinkPanelViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDLinkPanelViewController::_init
            ((MDLinkPanelViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

