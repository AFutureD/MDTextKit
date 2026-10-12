// ===== _TtC11MDTextKitUI12HTMLDocument::dealloc @ 000327dc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI12HTMLDocument::dealloc(ID param_1,SEL param_2)

{
  xmlDocPtr cur;
  objc_super local_30;
  
  cur = *(xmlDocPtr *)(param_1 + cDocument);
  _xmlFreeDoc(cur);
  FUN_00032b94();
  local_30.receiver = param_1;
  local_30.super_class = (class_t *)cur;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}


// ===== _TtC11MDTextKitUI12HTMLDocument::.cxx_destruct @ 00032830 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI12HTMLDocument::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


// ===== _TtC11MDTextKitUI12HTMLDocument::init @ 00032b68 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI12HTMLDocument::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.HTMLDocument",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x32b94);
  (*pcVar1)();
}


