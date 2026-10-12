// ===== _TtC11MDTextKitUI15TocTableRowView::initWithFrame: @ 00006bd0 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI15TocTableRowView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + separatorColor) = 0;
  *(undefined8 *)(param_1 + selectionColor) = 0;
  *(undefined8 *)(param_1 + selectionCornerRadius) = 0x4020000000000000;
  local_50.super_class = (class_t *)MDTextKitUI::TocTableRowView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI15TocTableRowView::initWithCoder: @ 00006c64 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI15TocTableRowView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + separatorColor) = 0;
  *(undefined8 *)(param_1 + selectionColor) = 0;
  *(undefined8 *)(param_1 + selectionCornerRadius) = 0x4020000000000000;
  local_40.super_class = (class_t *)MDTextKitUI::TocTableRowView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI15TocTableRowView::drawSelectionInRect: @ 00006dc0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI15TocTableRowView::drawSelectionInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  objc_super local_68;
  undefined1 auStack_58 [24];
  
  lVar1 = selectionColor;
  _swift_beginAccess(param_1 + selectionColor,auStack_58,0,0,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    local_68.super_class = (class_t *)MDTextKitUI::TocTableRowView::typeMetadataAccessor();
    local_68.receiver = param_1;
    _objc_msgSendSuper2(&local_68,"drawSelectionInRect:");
  }
  else {
    objc_stub::bounds(param_1);
    objc_stub::drawSquircleSelectionIn_color_(param_1,lVar1);
  }
  return;
}


// ===== _TtC11MDTextKitUI15TocTableRowView::drawSeparatorInRect: @ 00006fb8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI15TocTableRowView::drawSeparatorInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  MDTextKitUI::TocTableRowView::drawSeparator((TocTableRowView *)param_1,(CGRect)param_1);
  return;
}


// ===== _TtC11MDTextKitUI15TocTableRowView::.cxx_destruct @ 00007040 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI15TocTableRowView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


