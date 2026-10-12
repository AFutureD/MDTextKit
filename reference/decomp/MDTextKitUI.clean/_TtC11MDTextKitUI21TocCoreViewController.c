// ===== _TtC11MDTextKitUI21TocCoreViewController::textView @ 000671bc =====

ID _TtC11MDTextKitUI21TocCoreViewController::textView(ID param_1,SEL param_2)

{
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI21TocCoreViewController::setTextView: @ 00067250 =====

void _TtC11MDTextKitUI21TocCoreViewController::setTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21TocCoreViewController::initWithNibName:bundle: @ 000687f4 =====

ID _TtC11MDTextKitUI21TocCoreViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  String SVar3;
  
  if (param_3 == 0) {
    *(undefined **)(param_1 + nodes) = PTR___swiftEmptyArrayStorage_0020e328;
    *(undefined8 *)(param_1 + textView) = 0;
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(undefined **)(param_1 + nodes) = PTR___swiftEmptyArrayStorage_0020e328;
    *(undefined8 *)(param_1 + textView) = 0;
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class = (class_t *)MDTextKitUI::TocCoreViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}

// ===== _TtC11MDTextKitUI21TocCoreViewController::initWithCoder: @ 0006896c =====

ID _TtC11MDTextKitUI21TocCoreViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined **)(param_1 + nodes) = PTR___swiftEmptyArrayStorage_0020e328;
  *(undefined8 *)(param_1 + textView) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::TocCoreViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

// ===== _TtC11MDTextKitUI21TocCoreViewController::.cxx_destruct @ 00068a18 =====

void _TtC11MDTextKitUI21TocCoreViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + nodes));
  return;
}

