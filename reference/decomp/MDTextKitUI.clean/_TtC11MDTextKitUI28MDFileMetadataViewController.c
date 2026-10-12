// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::backgroundView @ 0019c458 =====

ID _TtC11MDTextKitUI28MDFileMetadataViewController::backgroundView(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + backgroundView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::setBackgroundView: @ 0019c478 =====

void _TtC11MDTextKitUI28MDFileMetadataViewController::setBackgroundView_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + backgroundView,param_3);
  return;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::filenameTextField @ 0019c48c =====

ID _TtC11MDTextKitUI28MDFileMetadataViewController::filenameTextField(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + filenameTextField;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::setFilenameTextField: @ 0019c4ac =====

void _TtC11MDTextKitUI28MDFileMetadataViewController::setFilenameTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + filenameTextField,param_3);
  return;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::fileInfoTextField @ 0019c4c0 =====

ID _TtC11MDTextKitUI28MDFileMetadataViewController::fileInfoTextField(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + fileInfoTextField;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::setFileInfoTextField: @ 0019c4e0 =====

void _TtC11MDTextKitUI28MDFileMetadataViewController::setFileInfoTextField_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + fileInfoTextField,param_3);
  return;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::fileTypeBadgeView @ 0019c4f4 =====

ID _TtC11MDTextKitUI28MDFileMetadataViewController::fileTypeBadgeView(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + fileTypeBadgeView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::setFileTypeBadgeView: @ 0019c514 =====

void _TtC11MDTextKitUI28MDFileMetadataViewController::setFileTypeBadgeView_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + fileTypeBadgeView,param_3);
  return;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::viewDidLoad @ 0019c528 =====

void _TtC11MDTextKitUI28MDFileMetadataViewController::viewDidLoad(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_0019db04();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"viewDidLoad");
  _swift_unknownObjectWeakLoadStrong(param_1 + fileWrapper);
  FUN_0019d020();
  _swift_unknownObjectWeakLoadStrong(param_1 + themeManager);
  FUN_0019c79c();
  return;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::styleObjectWithThemeManager: @ 0019cfcc =====

void _TtC11MDTextKitUI28MDFileMetadataViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_0019c79c(param_3);
  return;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::initWithNibName:bundle: @ 0019d8a0 =====

ID _TtC11MDTextKitUI28MDFileMetadataViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_0019d764(pcVar1,SVar2.bridgeObject,param_4);
  return (ID)pcVar1;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::initWithCoder: @ 0019da10 =====

ID _TtC11MDTextKitUI28MDFileMetadataViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_0019d900();
  return param_3;
}

// ===== _TtC11MDTextKitUI28MDFileMetadataViewController::.cxx_destruct @ 0019da68 =====

void _TtC11MDTextKitUI28MDFileMetadataViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + backgroundView);
  _swift_unknownObjectWeakDestroy(param_1 + filenameTextField);
  _swift_unknownObjectWeakDestroy(param_1 + fileInfoTextField);
  _swift_unknownObjectWeakDestroy(param_1 + fileTypeBadgeView);
  _swift_unknownObjectWeakDestroy(param_1 + themeManager);
  _swift_unknownObjectWeakDestroy(param_1 + fileWrapper);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + filename + 8));
  return;
}

