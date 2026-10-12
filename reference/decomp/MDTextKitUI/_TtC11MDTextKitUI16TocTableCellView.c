// ===== _TtC11MDTextKitUI16TocTableCellView::titleTextField @ 00007104 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI16TocTableCellView::titleTextField(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + titleTextField);
}


// ===== _TtC11MDTextKitUI16TocTableCellView::setTitleTextField: @ 00007114 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI16TocTableCellView::setTitleTextField_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + titleTextField) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI16TocTableCellView::initWithFrame: @ 00007148 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI16TocTableCellView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + titleTextField) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_00007288(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}


// ===== _TtC11MDTextKitUI16TocTableCellView::initWithCoder: @ 000071c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI16TocTableCellView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + titleTextField) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_00007288();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}


// ===== _TtC11MDTextKitUI16TocTableCellView::.cxx_destruct @ 00007278 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI16TocTableCellView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


