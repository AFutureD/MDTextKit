// ===== _TtC11MDTextKitUI18LiveTextController::dealloc @ 00107000 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18LiveTextController::dealloc(ID param_1,SEL param_2)

{
  FUN_00106ea8(param_1);
  return;
}


// ===== _TtC11MDTextKitUI18LiveTextController::.cxx_destruct @ 00107024 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18LiveTextController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + imageAttachmentViewController);
  _swift_unknownObjectWeakDestroy(param_1 + imageView);
  return;
}


// ===== _TtC11MDTextKitUI18LiveTextController::observeValueForKeyPath:ofObject:change:context: @ 00107bb8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI18LiveTextController::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    param_2 = SVar2.bridgeObject;
  }
  if (param_4 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_4,param_2);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  if (param_5 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    FUN_00006178(0);
    FUN_00108d6c(&DAT_00234198,0xff,FUN_00006178,&TargetProtocolConformanceDescriptor_001c3038);
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_00108348(SVar2.str,SVar2.bridgeObject,&local_60);
  _swift_bridgeObjectRelease(DVar1.unknown);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_00027650(&local_60,&DAT_002341f0,&DAT_001c3340);
  return;
}


// ===== _TtC11MDTextKitUI18LiveTextController::init @ 00107d00 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18LiveTextController::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.LiveTextController",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107d2c);
  (*pcVar1)();
}


