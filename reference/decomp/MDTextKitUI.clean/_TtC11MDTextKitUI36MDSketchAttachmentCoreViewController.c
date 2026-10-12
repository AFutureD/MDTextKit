// ===== _TtC11MDTextKitUI36MDSketchAttachmentCoreViewController::initWithNibName:bundle: @ 0003acb4 =====

ID _TtC11MDTextKitUI36MDSketchAttachmentCoreViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  String SVar3;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + regularSizeSketchWidth) = 0x4089000000000000;
    *(undefined8 *)(param_1 + sketchDefaultProportions) = 0x3fe0000000000000;
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(undefined8 *)(param_1 + regularSizeSketchWidth) = 0x4089000000000000;
    *(undefined8 *)(param_1 + sketchDefaultProportions) = 0x3fe0000000000000;
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class =
       (class_t *)MDTextKitUI::MDSketchAttachmentCoreViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}

// ===== _TtC11MDTextKitUI36MDSketchAttachmentCoreViewController::initWithCoder: @ 0003ae30 =====

ID _TtC11MDTextKitUI36MDSketchAttachmentCoreViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + regularSizeSketchWidth) = 0x4089000000000000;
  *(undefined8 *)(param_1 + sketchDefaultProportions) = 0x3fe0000000000000;
  local_40.super_class =
       (class_t *)MDTextKitUI::MDSketchAttachmentCoreViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

