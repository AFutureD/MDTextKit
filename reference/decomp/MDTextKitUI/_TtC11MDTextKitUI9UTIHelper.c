// ===== _TtC11MDTextKitUI9UTIHelper::identifiers @ 000d7488 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI9UTIHelper::identifiers(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = identifiers;
  _swift_beginAccess(param_1 + identifiers,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI9UTIHelper::setIdentifiers: @ 000d7510 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI9UTIHelper::setIdentifiers_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = identifiers;
  _swift_beginAccess(param_1 + identifiers,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI9UTIHelper::filename:isValidForType: @ 000d760c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC11MDTextKitUI9UTIHelper::filename_isValidForType_
               (ID param_1,SEL param_2,ID param_3,const___CFString__ param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_000d80d8(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}


// ===== _TtC11MDTextKitUI9UTIHelper::filenameExtension:isValidForType: @ 000d7690 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC11MDTextKitUI9UTIHelper::filenameExtension_isValidForType_
               (ID param_1,SEL param_2,ID param_3,const___CFString__ param_4)

{
  char *pcVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_000d8200(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}


// ===== _TtC11MDTextKitUI9UTIHelper::typeForFilenameExtension: @ 000d7724 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI9UTIHelper::typeForFilenameExtension_(ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  void *pvVar2;
  String SVar3;
  
  if (param_3 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pvVar2 = SVar3.bridgeObject;
  FUN_000d82a0(SVar3.str);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  if (pvVar2 == (void *)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pvVar2);
  }
  return (ID)pNVar1;
}


// ===== _TtC11MDTextKitUI9UTIHelper::init @ 000d7810 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI9UTIHelper::init(ID param_1,SEL param_2)

{
  long lVar1;
  UTTypeIdentifiers *self;
  ID IVar2;
  objc_super local_30;
  
  lVar1 = identifiers;
  self = MDTextKitUI::UTTypeIdentifiers::typeMetadataAccessor();
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(param_1 + lVar1) = IVar2;
  local_30.super_class = (class_t *)MDTextKitUI::UTIHelper::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}


// ===== _TtC11MDTextKitUI9UTIHelper::.cxx_destruct @ 000d7870 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI9UTIHelper::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


