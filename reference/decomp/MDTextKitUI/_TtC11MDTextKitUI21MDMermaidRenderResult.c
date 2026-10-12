// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::image @ 001a3b30 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI21MDMermaidRenderResult::image(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::setImage: @ 001a3bc4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI21MDMermaidRenderResult::setImage_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::error @ 001a3cbc =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI21MDMermaidRenderResult::error(ID param_1,SEL param_2)

{
  NSError *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = error;
  _swift_beginAccess(param_1 + error,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 == 0) {
    pNVar1 = (NSError *)0x0;
  }
  else {
    _swift_errorRetain(lVar2);
    pNVar1 = Foundation::__convertErrorToNSError();
    _swift_errorRelease(lVar2);
  }
  return (ID)pNVar1;
}


// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::setError: @ 001a3d78 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI21MDMermaidRenderResult::setError_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = error;
  _swift_beginAccess(param_1 + error,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(ID *)(param_1 + lVar1) = param_3;
  _swift_errorRelease(uVar2);
  return;
}


// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::initWithImage:error: @ 001a3f1c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI21MDMermaidRenderResult::initWithImage_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  objc_super local_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = image;
  *(undefined8 *)(param_1 + image) = 0;
  lVar2 = error;
  *(undefined8 *)(param_1 + error) = 0;
  _swift_beginAccess(param_1 + lVar1,auStack_58,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_70,1,0);
  *(ID *)(param_1 + lVar2) = param_4;
  local_80.super_class = (class_t *)MDTextKitUI::MDMermaidRenderResult::typeMetadataAccessor();
  local_80.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_80,"init");
  return IVar3;
}


// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::init @ 001a3fcc =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI21MDMermaidRenderResult::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.MDMermaidRenderResult",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3ff8);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::.cxx_destruct @ 001a4004 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI21MDMermaidRenderResult::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_errorRelease(*(undefined8 *)(param_1 + error));
  return;
}


