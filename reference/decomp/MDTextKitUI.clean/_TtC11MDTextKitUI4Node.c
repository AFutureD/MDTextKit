// ===== _TtC11MDTextKitUI4Node::stringValue @ 0006642c =====

ID _TtC11MDTextKitUI4Node::stringValue(ID param_1,SEL param_2)

{
  NSString *pNVar3;
  
  lVar1 = param_1 + stringValue;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _swift_bridgeObjectRetain(uVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  return (ID)pNVar3;
}

// ===== _TtC11MDTextKitUI4Node::setStringValue: @ 000664a0 =====

void _TtC11MDTextKitUI4Node::setStringValue_(ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(param_1 + stringValue);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}

// ===== _TtC11MDTextKitUI4Node::hash @ 00066b18 =====

long_long _TtC11MDTextKitUI4Node::hash(ID param_1,SEL param_2)

{
  long_long lVar1;
  
  _swift_beginAccess(param_1 + uniqueIdentifier,auStack_38,0,0);
  FUN_000083c0();
  lVar1 = (extension_Foundation)::Swift::StringProtocol::get_hash();
  return lVar1;
}

// ===== _TtC11MDTextKitUI4Node::isEqual: @ 00066da0 =====

bool _TtC11MDTextKitUI4Node::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  bVar1 = MDTextKitUI::Node::_isEqual((Node *)param_1);
  FUN_00007078(&local_40);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI4Node::debugDescription @ 00066e20 =====

ID _TtC11MDTextKitUI4Node::debugDescription(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  String SVar2;
  
  SVar2 = MDTextKitUI::Node::get_debugDescription((Node *)param_1,(Node *)param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI4Node::init @ 00067028 =====

ID _TtC11MDTextKitUI4Node::init(ID param_1,SEL param_2)

{
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.Node",0x10,"init()",6,0);
  pcVar1 = (code *)SoftwareBreakpoint(1,0x67054);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI4Node::.cxx_destruct @ 00067060 =====

void _TtC11MDTextKitUI4Node::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + trackingIdentifier + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + uniqueIdentifier + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + stringValue + 8));
  _swift_unknownObjectWeakDestroy(param_1 + parent);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + children));
  return;
}

