// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::leadingConstraint @ 0003d490 =====

ID _TtC11MDTextKitUI29SearchTextFieldViewController::leadingConstraint(ID param_1,SEL param_2)

{
  
  lVar1 = leadingConstraint;
  _swift_beginAccess(param_1 + leadingConstraint,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}

// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::setLeadingConstraint: @ 0003d51c =====

void _TtC11MDTextKitUI29SearchTextFieldViewController::setLeadingConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = leadingConstraint;
  _swift_beginAccess(param_1 + leadingConstraint,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}

// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::viewDidLoad @ 0003d714 =====

void _TtC11MDTextKitUI29SearchTextFieldViewController::viewDidLoad(ID param_1,SEL param_2)

{
  
  local_40.super_class =
       (class_t *)MDTextKitUI::SearchTextFieldViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"viewDidLoad");
  IVar1 = view(param_1);
  setWantsLayer_(IVar1,1);
  IVar1 = view(param_1);
  IVar1 = layer(IVar1);
  if (IVar1 != 0) {
    setMasksToBounds_(IVar1,0);
  }
  return;
}

// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::initWithNibName:bundle: @ 0003d880 =====

ID _TtC11MDTextKitUI29SearchTextFieldViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  String SVar3;
  
  if (param_3 == 0) {
    _swift_unknownObjectWeakInit(param_1 + leadingConstraint,0);
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _swift_unknownObjectWeakInit(param_1 + leadingConstraint,0);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class =
       (class_t *)MDTextKitUI::SearchTextFieldViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}

// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::initWithCoder: @ 0003d9d4 =====

ID _TtC11MDTextKitUI29SearchTextFieldViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  
  _swift_unknownObjectWeakInit(param_1 + leadingConstraint,0);
  local_40.super_class =
       (class_t *)MDTextKitUI::SearchTextFieldViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::.cxx_destruct @ 0003da98 =====

void _TtC11MDTextKitUI29SearchTextFieldViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + leadingConstraint);
  return;
}

