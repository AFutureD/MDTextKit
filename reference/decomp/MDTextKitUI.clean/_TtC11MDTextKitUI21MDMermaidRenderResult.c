// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::image @ 001a3b30 =====

ID _TtC11MDTextKitUI21MDMermaidRenderResult::image(ID param_1,SEL param_2)

{
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::setImage: @ 001a3bc4 =====

void _TtC11MDTextKitUI21MDMermaidRenderResult::setImage_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::error @ 001a3cbc =====

ID _TtC11MDTextKitUI21MDMermaidRenderResult::error(ID param_1,SEL param_2)

{
  NSError *pNVar1;
  
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

void _TtC11MDTextKitUI21MDMermaidRenderResult::setError_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = error;
  _swift_beginAccess(param_1 + error,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(ID *)(param_1 + lVar1) = param_3;
  _swift_errorRelease(uVar2);
  return;
}

// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::initWithImage:error: @ 001a3f1c =====

ID _TtC11MDTextKitUI21MDMermaidRenderResult::initWithImage_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
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

ID _TtC11MDTextKitUI21MDMermaidRenderResult::init(ID param_1,SEL param_2)

{
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.MDMermaidRenderResult",0x21,"init()",6,0);
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3ff8);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI21MDMermaidRenderResult::.cxx_destruct @ 001a4004 =====

void _TtC11MDTextKitUI21MDMermaidRenderResult::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_errorRelease(*(undefined8 *)(param_1 + error));
  return;
}

