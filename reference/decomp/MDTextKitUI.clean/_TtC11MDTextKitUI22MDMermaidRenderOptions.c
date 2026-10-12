// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::fontSize @ 001a329c =====

double _TtC11MDTextKitUI22MDMermaidRenderOptions::fontSize(ID param_1,SEL param_2)

{
  
  lVar1 = fontSize;
  _swift_beginAccess(param_1 + fontSize,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::setFontSize: @ 001a3320 =====

void _TtC11MDTextKitUI22MDMermaidRenderOptions::setFontSize_(ID param_1,SEL param_2,double param_3)

{
  
  lVar1 = fontSize;
  _swift_beginAccess(param_1 + fontSize,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::themeVariables @ 001a33fc =====

ID _TtC11MDTextKitUI22MDMermaidRenderOptions::themeVariables(ID param_1,SEL param_2)

{
  NSDictionary *pNVar2;
  
  lVar1 = themeVariables;
  _swift_beginAccess(param_1 + themeVariables,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar3);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  return (ID)pNVar2;
}

// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::setThemeVariables: @ 001a34bc =====

void _TtC11MDTextKitUI22MDMermaidRenderOptions::setThemeVariables_
               (ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar2;
  
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  lVar1 = themeVariables;
  _swift_beginAccess(param_1 + themeVariables,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = DVar2.unknown;
  _swift_bridgeObjectRelease(uVar3);
  return;
}

// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::themeKey @ 001a35d0 =====

ID _TtC11MDTextKitUI22MDMermaidRenderOptions::themeKey(ID param_1,SEL param_2)

{
  NSString *pNVar3;
  
  lVar1 = param_1 + themeKey;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _swift_bridgeObjectRetain(uVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  return (ID)pNVar3;
}

// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::setThemeKey: @ 001a368c =====

void _TtC11MDTextKitUI22MDMermaidRenderOptions::setThemeKey_(ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(param_1 + themeKey);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}

// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::init @ 001a3a70 =====

ID _TtC11MDTextKitUI22MDMermaidRenderOptions::init(ID param_1,SEL param_2)

{
  
  *(undefined8 *)(param_1 + fontSize) = 0x402e000000000000;
  lVar2 = themeVariables;
  puVar3 = PTR___swiftEmptyArrayStorage_0020e328;
  FUN_00024fd4();
  *(undefined **)(param_1 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(param_1 + themeKey);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  local_30.super_class = (class_t *)MDTextKitUI::MDMermaidRenderOptions::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar4 = _objc_msgSendSuper2(&local_30,"init");
  return IVar4;
}

// ===== _TtC11MDTextKitUI22MDMermaidRenderOptions::.cxx_destruct @ 001a3af4 =====

void _TtC11MDTextKitUI22MDMermaidRenderOptions::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + themeVariables));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + themeKey + 8));
  return;
}

