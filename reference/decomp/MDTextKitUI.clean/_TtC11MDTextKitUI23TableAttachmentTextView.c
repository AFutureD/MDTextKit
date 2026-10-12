// ===== _TtC11MDTextKitUI23TableAttachmentTextView::updateOverscrolling @ 000764ac =====

void _TtC11MDTextKitUI23TableAttachmentTextView::updateOverscrolling(ID param_1,SEL param_2)

{
  return;
}

// ===== _TtC11MDTextKitUI23TableAttachmentTextView::readablePasteboardTypes @ 000764b0 =====

ID _TtC11MDTextKitUI23TableAttachmentTextView::readablePasteboardTypes(ID param_1,SEL param_2)

{
  NSArray *pNVar2;
  
  puVar1 = &DAT_002347c8;
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_002347c8,&DAT_001c3510);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = _NSPasteboardTypeString_0020d8c8;
  FUN_00005adc(0);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  return (ID)pNVar2;
}

// ===== _TtC11MDTextKitUI23TableAttachmentTextView::mouseDown: @ 0007667c =====

void _TtC11MDTextKitUI23TableAttachmentTextView::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::TableAttachmentTextView::mouseDown
            ((TableAttachmentTextView *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI23TableAttachmentTextView::initWithFrame: @ 00076770 =====

ID _TtC11MDTextKitUI23TableAttachmentTextView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  IndexPath IVar2;
  
  lVar1 = indexPath;
  IVar2 = Foundation::IndexPath::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar2.unknown + -8) + 0x38))(param_1 + lVar1,1,1,IVar2.unknown);
  *(undefined8 *)(param_1 + originalAttrString) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::TableAttachmentTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar3;
}

// ===== _TtC11MDTextKitUI23TableAttachmentTextView::initWithFrame:textContainer: @ 000768dc =====

ID _TtC11MDTextKitUI23TableAttachmentTextView::initWithFrame_textContainer_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  IndexPath IVar2;
  
  lVar1 = indexPath;
  IVar2 = Foundation::IndexPath::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar2.unknown + -8) + 0x38))(param_1 + lVar1,1,1,IVar2.unknown);
  *(undefined8 *)(param_1 + originalAttrString) = 0;
  local_60.super_class = (class_t *)MDTextKitUI::TableAttachmentTextView::typeMetadataAccessor();
  local_60.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_60,"initWithFrame:textContainer:",param_3.field0_0x0.field0_0x0
                             );
  return IVar3;
}

// ===== _TtC11MDTextKitUI23TableAttachmentTextView::initWithCoder: @ 00076a3c =====

ID _TtC11MDTextKitUI23TableAttachmentTextView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  IndexPath IVar2;
  
  lVar1 = indexPath;
  IVar2 = Foundation::IndexPath::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar2.unknown + -8) + 0x38))(param_1 + lVar1,1,1,IVar2.unknown);
  *(undefined8 *)(param_1 + originalAttrString) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::TableAttachmentTextView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar3;
}

// ===== _TtC11MDTextKitUI23TableAttachmentTextView::.cxx_destruct @ 00076b44 =====

void _TtC11MDTextKitUI23TableAttachmentTextView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00027650(param_1 + indexPath,&DAT_002352f0,&DAT_001c4120);
  return;
}

