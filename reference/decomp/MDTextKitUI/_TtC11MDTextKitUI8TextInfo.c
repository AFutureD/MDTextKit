// ===== _TtC11MDTextKitUI8TextInfo::type @ 000c80a0 =====

/* Function Stack Size: 0x10 bytes */

long_long _TtC11MDTextKitUI8TextInfo::type(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = type;
  _swift_beginAccess(param_1 + type,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI8TextInfo::setType: @ 000c8124 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI8TextInfo::setType_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = type;
  _swift_beginAccess(param_1 + type,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI8TextInfo::image @ 000c8200 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI8TextInfo::image(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI8TextInfo::setImage: @ 000c8294 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI8TextInfo::setImage_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI8TextInfo::descriptionValue @ 000c838c =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI8TextInfo::descriptionValue(ID param_1,SEL param_2)

{
  FUN_00061f94(param_1,param_2,&descriptionValue);
  return param_1;
}


// ===== _TtC11MDTextKitUI8TextInfo::setDescriptionValue: @ 000c83a4 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI8TextInfo::setDescriptionValue_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00062060();
  return;
}


// ===== _TtC11MDTextKitUI8TextInfo::stringValue @ 000c83fc =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI8TextInfo::stringValue(ID param_1,SEL param_2)

{
  FUN_00061f94(param_1,param_2,&stringValue);
  return param_1;
}


// ===== _TtC11MDTextKitUI8TextInfo::setStringValue: @ 000c8414 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI8TextInfo::setStringValue_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00062060();
  return;
}


// ===== _TtC11MDTextKitUI8TextInfo::largeAppearance @ 000c846c =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI8TextInfo::largeAppearance(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = largeAppearance;
  _swift_beginAccess(param_1 + largeAppearance,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI8TextInfo::setLargeAppearance: @ 000c84f0 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI8TextInfo::setLargeAppearance_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = largeAppearance;
  _swift_beginAccess(param_1 + largeAppearance,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}


// ===== _TtC11MDTextKitUI8TextInfo::initWithType:stringValue:description:image:largeAppearance: @ 000c8670 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x34 bytes */

ID _TtC11MDTextKitUI8TextInfo::initWithType_stringValue_description_image_largeAppearance_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,ID param_6,bool param_7
             )

{
  long lVar1;
  ID IVar2;
  String SVar3;
  String SVar4;
  objc_super local_78;
  undefined1 auStack_68 [24];
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  lVar1 = image;
  *(undefined8 *)(param_1 + image) = 0;
  *(long_long *)(param_1 + type) = param_3;
  *(String *)(param_1 + stringValue) = SVar3;
  *(String *)(param_1 + descriptionValue) = SVar4;
  _swift_beginAccess(param_1 + lVar1,auStack_68,1,0);
  *(ID *)(param_1 + lVar1) = param_6;
  *(char *)(param_1 + largeAppearance) = (char)param_7;
  local_78.super_class = (class_t *)MDTextKitUI::TextInfo::typeMetadataAccessor();
  local_78.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_78,"init");
  return IVar2;
}


// ===== _TtC11MDTextKitUI8TextInfo::init @ 000c8754 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI8TextInfo::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.TextInfo",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc8780);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI8TextInfo::.cxx_destruct @ 000c87b0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI8TextInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + descriptionValue + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + stringValue + 8));
  return;
}


