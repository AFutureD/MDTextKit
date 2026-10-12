// ===== _TtC11MDTextKitUI26MDAttachmentViewController::contextualMenuItems @ 0000e24c =====

ID _TtC11MDTextKitUI26MDAttachmentViewController::contextualMenuItems(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_00006084(0,&DAT_002346d0,&PTR__OBJC_CLASS___NSMenuItem_002211d0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI26MDAttachmentViewController::setSelected:active: @ 0000e554 =====

void _TtC11MDTextKitUI26MDAttachmentViewController::setSelected_active_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  MDTextKitUI::MDAttachmentViewController::setSelected
            ((MDAttachmentViewController *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  return;
}

// ===== _TtC11MDTextKitUI26MDAttachmentViewController::renameAttachmentFile @ 0000e6a0 =====

void _TtC11MDTextKitUI26MDAttachmentViewController::renameAttachmentFile(ID param_1,SEL param_2)

{
  MDTextKitUI::MDAttachmentViewController::renameAttachmentFile
            ((MDAttachmentViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI26MDAttachmentViewController::initWithNibName:bundle: @ 0000e750 =====

ID _TtC11MDTextKitUI26MDAttachmentViewController::initWithNibName_bundle_
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
  local_40.super_class = (class_t *)MDTextKitUI::MDAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}

// ===== _TtC11MDTextKitUI26MDAttachmentViewController::initWithCoder: @ 0000e870 =====

ID _TtC11MDTextKitUI26MDAttachmentViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

