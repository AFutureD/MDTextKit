// ===== _TtC11MDTextKitUI20MDMathViewController::viewController @ 0005f834 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI20MDMathViewController::viewController(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  MDTextKitUI::MDMathViewController::_viewController((MDMathViewController *)param_1);
  return (ID)(MDMathViewController *)param_1;
}


// ===== _TtC11MDTextKitUI20MDMathViewController::viewDidLoad @ 0005fc24 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI20MDMathViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDMathViewController::viewDidLoad((MDMathViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI20MDMathViewController::styleObjectWithThemeManager: @ 0005fd44 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI20MDMathViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDMathViewController::_styleObject((MDMathViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI20MDMathViewController::initWithNibName:bundle: @ 0005fe20 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI20MDMathViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  ID IVar2;
  String SVar3;
  objc_super local_40;
  
  if (param_3 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class = (class_t *)MDTextKitUI::MDMathViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}


// ===== _TtC11MDTextKitUI20MDMathViewController::initWithCoder: @ 0005ff40 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI20MDMathViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDMathViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


