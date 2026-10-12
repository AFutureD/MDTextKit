// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::drawInsertionPointInRect:color:turnedOn: @ 00053364 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x3c bytes */

void _TtC11MDTextKitUI19MDPreSonomaTextView::drawInsertionPointInRect_color_turnedOn_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,bool param_5)

{
  FUN_00054404(param_3.field0_0x0.field0_0x0,param_2,param_3.field0_0x0.field0_0x0,
               param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
               param_3.field1_0x10.field1_0x8,param_4,param_5);
  return;
}


// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::setNeedsDisplayInRect: @ 0005344c =====

/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI19MDPreSonomaTextView::setNeedsDisplayInRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
  double in_d0;
  objc_super local_50;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"setNeedsDisplayInRect:",in_d0 + -2.0);
  return;
}


// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame: @ 00053520 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame:textContainer: @ 00053678 =====

/* Function Stack Size: 0x38 bytes */

ID _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame_textContainer_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:textContainer:",param_3.field0_0x0.field0_0x0
                             );
  return IVar1;
}


// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::initWithCoder: @ 00053758 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI19MDPreSonomaTextView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


