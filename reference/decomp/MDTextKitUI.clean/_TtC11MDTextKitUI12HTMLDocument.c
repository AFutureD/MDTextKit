// ===== _TtC11MDTextKitUI12HTMLDocument::dealloc @ 000327dc =====

void _TtC11MDTextKitUI12HTMLDocument::dealloc(ID param_1,SEL param_2)

{
  xmlDocPtr cur;
  
  cur = *(xmlDocPtr *)(param_1 + cDocument);
  _xmlFreeDoc(cur);
  FUN_00032b94();
  local_30.receiver = param_1;
  local_30.super_class = (class_t *)cur;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

// ===== _TtC11MDTextKitUI12HTMLDocument::.cxx_destruct @ 00032830 =====

void _TtC11MDTextKitUI12HTMLDocument::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

// ===== _TtC11MDTextKitUI12HTMLDocument::init @ 00032b68 =====

ID _TtC11MDTextKitUI12HTMLDocument::init(ID param_1,SEL param_2)

{
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.HTMLDocument",0x18,"init()",6,0);
  pcVar1 = (code *)SoftwareBreakpoint(1,0x32b94);
  (*pcVar1)();
}

