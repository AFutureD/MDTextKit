// ===== _TtC11MDTextKitUI4Node::stringValue @ 0006642c =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI4Node::stringValue(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  NSString *pNVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1 + stringValue;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _swift_bridgeObjectRetain(uVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  return (ID)pNVar3;
}


// ===== _TtC11MDTextKitUI4Node::setStringValue: @ 000664a0 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI4Node::setStringValue_(ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(param_1 + stringValue);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}


// ===== _TtC11MDTextKitUI4Node::hash @ 00066b18 =====

/* Function Stack Size: 0x10 bytes */

long_long _TtC11MDTextKitUI4Node::hash(ID param_1,SEL param_2)

{
  long_long lVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + uniqueIdentifier,auStack_38,0,0);
  FUN_000083c0();
  lVar1 = (extension_Foundation)::Swift::StringProtocol::get_hash();
  return lVar1;
}


// ===== _TtC11MDTextKitUI4Node::isEqual: @ 00066da0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC11MDTextKitUI4Node::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    local_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
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

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

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

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI4Node::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.Node",0x10,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x67054);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI4Node::.cxx_destruct @ 00067060 =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI4Node::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + trackingIdentifier + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + uniqueIdentifier + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + stringValue + 8));
  _swift_unknownObjectWeakDestroy(param_1 + parent);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + children));
  return;
}


