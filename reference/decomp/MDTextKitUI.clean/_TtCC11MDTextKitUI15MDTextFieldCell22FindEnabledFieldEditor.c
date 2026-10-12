// ===== _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::respondsToSelector: @ 00111bb4 =====

bool _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::respondsToSelector_
               (ID param_1,SEL param_2,SEL param_3)

{
  
  local_40.super_class = (class_t *)param_1;
  if (param_3 != (SEL)0x0) {
    bVar1 = ObjectiveC::Selector::___infix
                      ((Selector)param_3,(Selector)"performFindPanelAction:",(Selector)param_3);
    local_40.super_class = (class_t *)CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return 0;
    }
  }
  FUN_0011220c();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"respondsToSelector:",param_3);
  return (bool)IVar2;
}

// ===== _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithFrame:textContainer: @ 00111c50 =====

ID _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithFrame_textContainer_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_0011220c();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:textContainer:",param_3.field0_0x0.field0_0x0
                             );
  return IVar2;
}

// ===== _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithCoder: @ 00111cc4 =====

ID _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_0011220c();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

// ===== _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithFrame: @ 00111d44 =====

ID _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_0011220c(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

