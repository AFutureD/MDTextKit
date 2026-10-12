// ===== _TtC11MDTextKitUI16MDTocOutlineView::expandItem:expandChildren: @ 000c5b48 =====

void _TtC11MDTextKitUI16MDTocOutlineView::expandItem_expandChildren_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_000c6034();
  return;
}

// ===== _TtC11MDTextKitUI16MDTocOutlineView::collapseItem:collapseChildren: @ 000c6028 =====

void _TtC11MDTextKitUI16MDTocOutlineView::collapseItem_collapseChildren_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_000c6034();
  return;
}

// ===== _TtC11MDTextKitUI16MDTocOutlineView::makeViewWithIdentifier:owner: @ 000c65ec =====

ID _TtC11MDTextKitUI16MDTocOutlineView::makeViewWithIdentifier_owner_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  if (param_4 == 0) {
  }
  else {
    _swift_unknownObjectRetain(param_4);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  MDTextKitUI::MDTocOutlineView::_makeView((MDTocOutlineView *)param_1,param_3,&local_50);
  FUN_00007078(&local_50);
  return param_3;
}

// ===== _TtC11MDTextKitUI16MDTocOutlineView::mouseDown: @ 000c66d4 =====

void _TtC11MDTextKitUI16MDTocOutlineView::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDTocOutlineView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"mouseDown:",param_3);
  return;
}

// ===== _TtC11MDTextKitUI16MDTocOutlineView::initWithFrame: @ 000c67a4 =====

ID _TtC11MDTextKitUI16MDTocOutlineView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  *(undefined8 *)(param_1 + disclosureImage) = 0;
  *(undefined8 *)(param_1 + disclosureImageSelected) = 0;
  *(undefined **)(param_1 + collapsedItems) = PTR___swiftEmptyArrayStorage_0020e328;
  local_50.super_class = (class_t *)MDTextKitUI::MDTocOutlineView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI16MDTocOutlineView::initWithCoder: @ 000c68d4 =====

ID _TtC11MDTextKitUI16MDTocOutlineView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + disclosureImage) = 0;
  *(undefined8 *)(param_1 + disclosureImageSelected) = 0;
  *(undefined **)(param_1 + collapsedItems) = PTR___swiftEmptyArrayStorage_0020e328;
  local_40.super_class = (class_t *)MDTextKitUI::MDTocOutlineView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

// ===== _TtC11MDTextKitUI16MDTocOutlineView::.cxx_destruct @ 000c69b0 =====

void _TtC11MDTextKitUI16MDTocOutlineView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + collapsedItems));
  return;
}

