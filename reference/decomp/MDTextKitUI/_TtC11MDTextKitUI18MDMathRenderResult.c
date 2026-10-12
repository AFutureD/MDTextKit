// ===== _TtC11MDTextKitUI18MDMathRenderResult::image @ 0006263c =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDMathRenderResult::image(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::setImage: @ 000626d0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDMathRenderResult::setImage_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = image;
  _swift_beginAccess(param_1 + image,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::baseline @ 000627c8 =====

/* Function Stack Size: 0x10 bytes */

double _TtC11MDTextKitUI18MDMathRenderResult::baseline(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = baseline;
  _swift_beginAccess(param_1 + baseline,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::setBaseline: @ 0006284c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDMathRenderResult::setBaseline_(ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = baseline;
  _swift_beginAccess(param_1 + baseline,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::error @ 00062928 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDMathRenderResult::error(ID param_1,SEL param_2)

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


// ===== _TtC11MDTextKitUI18MDMathRenderResult::setError: @ 000629e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDMathRenderResult::setError_(ID param_1,SEL param_2,ID param_3)

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


// ===== _TtC11MDTextKitUI18MDMathRenderResult::pdfData @ 00062af0 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDMathRenderResult::pdfData(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  NSData *pNVar2;
  ulong uVar3;
  Data DVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + pdfData);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pNVar2 = (NSData *)0x0;
  uVar3 = puVar1[1];
  if (uVar3 >> 0x3c < 0xf) {
    DVar4.unknown = (undefined *)*puVar1;
    FUN_00063480(DVar4.unknown,uVar3);
    pNVar2 = Foundation::Data::_bridgeToObjectiveC(DVar4);
    FUN_0002bf54(DVar4.unknown,uVar3);
  }
  return (ID)pNVar2;
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::setPdfData: @ 00062bd4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDMathRenderResult::setPdfData_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Data DVar4;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_2 = (SEL)0xf000000000000000;
    DVar4.unknown = (undefined *)0x0;
  }
  else {
    DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_3);
  }
  puVar1 = (undefined8 *)(param_1 + pdfData);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = DVar4.unknown;
  puVar1[1] = param_2;
  FUN_0002bf54(uVar2,uVar3);
  return;
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::initWithImage:baseline:error: @ 00062de8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC11MDTextKitUI18MDMathRenderResult::initWithImage_baseline_error_
             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5)

{
  MDMathRenderResult *pMVar1;
  
  pMVar1 = MDTextKitUI::MDMathRenderResult::_init((MDMathRenderResult *)param_1,(CGFloat)param_3);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::init @ 00062e44 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDMathRenderResult::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("MDTextKitUI.MDMathRenderResult",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x62e70);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI18MDMathRenderResult::.cxx_destruct @ 00062e7c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18MDMathRenderResult::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_errorRelease(*(undefined8 *)(param_1 + error));
  FUN_0002bf54(*(undefined8 *)(param_1 + pdfData),((undefined8 *)(param_1 + pdfData))[1]);
  return;
}


