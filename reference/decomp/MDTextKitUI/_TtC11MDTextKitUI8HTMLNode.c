// ===== _TtC11MDTextKitUI8HTMLNode::init @ 00032440 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI8HTMLNode::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.HTMLNode",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3246c);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI8HTMLNode::.cxx_destruct @ 0003249c =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI8HTMLNode::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___name + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___string + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___htmlString + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___attributes));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___children));
  return;
}


