// ===== _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::respondsToSelector: @ 00111bb4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::respondsToSelector_
               (ID param_1,SEL param_2,SEL param_3)

{
  bool bVar1;
  undefined7 extraout_var;
  ID IVar2;
  objc_super local_40;
  
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

/* Function Stack Size: 0x38 bytes */

ID _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithFrame_textContainer_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  FUN_0011220c();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:textContainer:",param_3.field0_0x0.field0_0x0
                             );
  return IVar2;
}


// ===== _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithCoder: @ 00111cc4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  FUN_0011220c();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}


// ===== _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithFrame: @ 00111d44 =====

/* Function Stack Size: 0x30 bytes */

ID _TtCC11MDTextKitUI15MDTextFieldCell22FindEnabledFieldEditor::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  FUN_0011220c(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}


