// ===== _TtC11MDTextKitUI16MDTocOutlineView::expandItem:expandChildren: @ 000c5b48 =====

/* Function Stack Size: 0x1c bytes */

void _TtC11MDTextKitUI16MDTocOutlineView::expandItem_expandChildren_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_000c6034();
  return;
}


// ===== _TtC11MDTextKitUI16MDTocOutlineView::collapseItem:collapseChildren: @ 000c6028 =====

/* Function Stack Size: 0x1c bytes */

void _TtC11MDTextKitUI16MDTocOutlineView::collapseItem_collapseChildren_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_000c6034();
  return;
}


// ===== _TtC11MDTextKitUI16MDTocOutlineView::makeViewWithIdentifier:owner: @ 000c65ec =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI16MDTocOutlineView::makeViewWithIdentifier_owner_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
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

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI16MDTocOutlineView::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_30;
  
  local_30.super_class = (class_t *)MDTextKitUI::MDTocOutlineView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"mouseDown:",param_3);
  return;
}


// ===== _TtC11MDTextKitUI16MDTocOutlineView::initWithFrame: @ 000c67a4 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI16MDTocOutlineView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + disclosureImage) = 0;
  *(undefined8 *)(param_1 + disclosureImageSelected) = 0;
  *(undefined **)(param_1 + collapsedItems) = PTR___swiftEmptyArrayStorage_0020e328;
  local_50.super_class = (class_t *)MDTextKitUI::MDTocOutlineView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI16MDTocOutlineView::initWithCoder: @ 000c68d4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI16MDTocOutlineView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + disclosureImage) = 0;
  *(undefined8 *)(param_1 + disclosureImageSelected) = 0;
  *(undefined **)(param_1 + collapsedItems) = PTR___swiftEmptyArrayStorage_0020e328;
  local_40.super_class = (class_t *)MDTextKitUI::MDTocOutlineView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI16MDTocOutlineView::.cxx_destruct @ 000c69b0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI16MDTocOutlineView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + collapsedItems));
  return;
}


