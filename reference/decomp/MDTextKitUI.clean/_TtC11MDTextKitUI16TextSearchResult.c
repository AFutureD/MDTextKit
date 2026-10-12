// ===== _TtC11MDTextKitUI16TextSearchResult::debugDescription @ 000db814 =====

ID _TtC11MDTextKitUI16TextSearchResult::debugDescription(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  String SVar2;
  
  SVar2 = MDTextKitUI::TextSearchResult::get_debugDescription
                    ((TextSearchResult *)param_1,(TextSearchResult *)param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI16TextSearchResult::init @ 000dba54 =====

ID _TtC11MDTextKitUI16TextSearchResult::init(ID param_1,SEL param_2)

{
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.TextSearchResult",0x1c,"init()",6,0);
  pcVar1 = (code *)SoftwareBreakpoint(1,0xdba80);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI16TextSearchResult::.cxx_destruct @ 000dbab0 =====

void _TtC11MDTextKitUI16TextSearchResult::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00016808(param_1 + client);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + userInfo));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + clientRanges));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + clients));
  return;
}

