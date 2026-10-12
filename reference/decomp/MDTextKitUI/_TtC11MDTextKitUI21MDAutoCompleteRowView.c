// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::selectionColor @ 000decd0 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI21MDAutoCompleteRowView::selectionColor(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = selectionColor;
  _swift_beginAccess(param_1 + selectionColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelectionColor: @ 000ded64 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelectionColor_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::isSelected @ 000dee04 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI21MDAutoCompleteRowView::isSelected(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"isSelected");
  return (bool)IVar1;
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelected: @ 000dee70 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI21MDAutoCompleteRowView::setSelected_(ID param_1,SEL param_2,bool param_3)

{
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setSelected:",(ulong)param_3);
  MDTextKitUI::MDAutoCompleteRowView::updateCellViewIcon((MDAutoCompleteRowView *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::addSubview: @ 000def60 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI21MDAutoCompleteRowView::addSubview_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"addSubview:",param_3);
  MDTextKitUI::MDAutoCompleteRowView::updateCellViewIcon((MDAutoCompleteRowView *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::drawSelectionInRect: @ 000df1dc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI21MDAutoCompleteRowView::drawSelectionInRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  objc_super local_68;
  undefined1 auStack_58 [24];
  
  lVar1 = selectionColor;
  _swift_beginAccess(param_1 + selectionColor,auStack_58,0,0,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    local_68.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
    local_68.receiver = param_1;
    _objc_msgSendSuper2(&local_68,"drawSelectionInRect:");
  }
  else {
    objc_stub::bounds(param_1);
    objc_stub::drawSquircleSelectionIn_color_(param_1,lVar1);
  }
  return;
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithFrame: @ 000df318 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + selectionColor) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithCoder: @ 000df408 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI21MDAutoCompleteRowView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + selectionColor) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoCompleteRowView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI21MDAutoCompleteRowView::.cxx_destruct @ 000df4e0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI21MDAutoCompleteRowView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


