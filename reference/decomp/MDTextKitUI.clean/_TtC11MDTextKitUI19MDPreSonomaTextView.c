// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::drawInsertionPointInRect:color:turnedOn: @ 00053364 =====

void _TtC11MDTextKitUI19MDPreSonomaTextView::drawInsertionPointInRect_color_turnedOn_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,bool param_5)

{
  FUN(param_3.field0_0x0.field0_0x0,param_2,param_3.field0_0x0.field0_0x0,
               param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
               param_3.field1_0x10.field1_0x8,param_4,param_5);
  return;
}

// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::setNeedsDisplayInRect: @ 0005344c =====

void _TtC11MDTextKitUI19MDPreSonomaTextView::setNeedsDisplayInRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
  
  local_50.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"setNeedsDisplayInRect:",in_d0 + -2.0);
  return;
}

// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame: @ 00053520 =====

ID _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  local_50.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame:textContainer: @ 00053678 =====

ID _TtC11MDTextKitUI19MDPreSonomaTextView::initWithFrame_textContainer_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  
  local_50.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:textContainer:",param_3.field0_0x0.field0_0x0
                             );
  return IVar1;
}

// ===== _TtC11MDTextKitUI19MDPreSonomaTextView::initWithCoder: @ 00053758 =====

ID _TtC11MDTextKitUI19MDPreSonomaTextView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDPreSonomaTextView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

