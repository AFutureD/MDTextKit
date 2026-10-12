// ===== _TtC11MDTextKitUI20MDMathViewController::viewController @ 0005f834 =====

ID _TtC11MDTextKitUI20MDMathViewController::viewController(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  MDTextKitUI::MDMathViewController::_viewController((MDMathViewController *)param_1);
  return (ID)(MDMathViewController *)param_1;
}

// ===== _TtC11MDTextKitUI20MDMathViewController::viewDidLoad @ 0005fc24 =====

void _TtC11MDTextKitUI20MDMathViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDMathViewController::viewDidLoad((MDMathViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI20MDMathViewController::styleObjectWithThemeManager: @ 0005fd44 =====

void _TtC11MDTextKitUI20MDMathViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDMathViewController::_styleObject((MDMathViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI20MDMathViewController::initWithNibName:bundle: @ 0005fe20 =====

ID _TtC11MDTextKitUI20MDMathViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  String SVar3;
  
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

ID _TtC11MDTextKitUI20MDMathViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDMathViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

