// ===== _TtC11MDTextKitUI8MDButton::title @ 0019df6c =====

ID _TtC11MDTextKitUI8MDButton::title(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  String SVar2;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  pNVar1 = (NSString *)_objc_msgSendSuper2(&local_40,"title");
  if (pNVar1 == (NSString *)0x0) {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar2.bridgeObject);
  }
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI8MDButton::setTitle: @ 0019e07c =====

void _TtC11MDTextKitUI8MDButton::setTitle_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setTitle:",param_3);
  FUN_0019e148();
  return;
}

// ===== _TtC11MDTextKitUI8MDButton::initWithFrame: @ 0019e688 =====

ID _TtC11MDTextKitUI8MDButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  lVar1 = tintColor;
  IVar2 = NSColor::blueColor(NSColor,param_3.field0_0x0.field0_0x0,
                             param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                             param_3.field1_0x10.field1_0x8);
  *(ID *)(param_1 + lVar1) = IVar2;
  lVar1 = titleColor;
  IVar2 = NSColor::blackColor(NSColor);
  *(ID *)(param_1 + lVar1) = IVar2;
  *(undefined1 *)(param_1 + isDark) = 0;
  local_60.super_class = (class_t *)MDTextKitUI::MDButton::typeMetadataAccessor();
  local_60.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_60,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI8MDButton::initWithCoder: @ 0019e808 =====

ID _TtC11MDTextKitUI8MDButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDButton::_init((MDButton *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI8MDButton::.cxx_destruct @ 0019e860 =====

void _TtC11MDTextKitUI8MDButton::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

