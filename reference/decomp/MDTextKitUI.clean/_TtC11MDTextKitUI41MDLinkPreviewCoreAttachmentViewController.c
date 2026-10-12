// ===== _TtC11MDTextKitUI41MDLinkPreviewCoreAttachmentViewController::initWithNibName:bundle: @ 000f6ac4 =====

ID _TtC11MDTextKitUI41MDLinkPreviewCoreAttachmentViewController::initWithNibName_bundle_
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
  local_40.super_class =
       (class_t *)MDTextKitUI::MDLinkPreviewCoreAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}

// ===== _TtC11MDTextKitUI41MDLinkPreviewCoreAttachmentViewController::initWithCoder: @ 000f6be4 =====

ID _TtC11MDTextKitUI41MDLinkPreviewCoreAttachmentViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class =
       (class_t *)MDTextKitUI::MDLinkPreviewCoreAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

