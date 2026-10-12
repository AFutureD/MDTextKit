// ===== _TtC11MDTextKitUI18VibrantPopUpButton::allowsVibrancy @ 0000b948 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI18VibrantPopUpButton::allowsVibrancy(ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI18VibrantPopUpButton::initWithFrame:pullsDown: @ 0000b950 =====

/* Function Stack Size: 0x34 bytes */

ID _TtC11MDTextKitUI18VibrantPopUpButton::initWithFrame_pullsDown_
             (ID param_1,SEL param_2,CGRect param_3,bool param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  FUN_0000c030();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:pullsDown:",param_3.field0_0x0.field0_0x0);
  return IVar2;
}


// ===== _TtC11MDTextKitUI18VibrantPopUpButton::initWithFrame: @ 0000b9c4 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI18VibrantPopUpButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_0000b9d0(param_1,param_2,FUN_0000c030,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return param_1;
}


// ===== _TtC11MDTextKitUI18VibrantPopUpButton::initWithCoder: @ 0000ba3c =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI18VibrantPopUpButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0000ba48();
  return param_1;
}


