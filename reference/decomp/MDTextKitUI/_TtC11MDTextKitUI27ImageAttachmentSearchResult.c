// ===== _TtC11MDTextKitUI27ImageAttachmentSearchResult::description @ 00063fac =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI27ImageAttachmentSearchResult::description(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  NSString *pNVar2;
  char *in_x2;
  void *in_x3;
  String SVar3;
  String SVar4;
  String SVar5;
  
  uVar1 = (undefined1)param_1;
  _swift_getObjectType();
  SVar3 = Swift::__typeName((bool)uVar1);
  SVar4.bridgeObject = in_x3;
  SVar4.str = in_x2;
  Swift::String::append(SVar3,SVar4);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)((long)&segment_command_00000020.vmaddr + 6);
  SVar5.bridgeObject = in_x3;
  SVar5.str = in_x2;
  Swift::String::append(SVar3,SVar5);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xe100000000000000);
  return (ID)pNVar2;
}


// ===== _TtC11MDTextKitUI27ImageAttachmentSearchResult::.cxx_destruct @ 0006408c =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI27ImageAttachmentSearchResult::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + textRecognitionResults));
  return;
}


