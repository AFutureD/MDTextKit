// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::backgroundBox @ 000e3600 =====

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::backgroundBox(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + backgroundBox);
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::setBackgroundBox: @ 000e3610 =====

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::setBackgroundBox_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + backgroundBox) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::updateTrackingAreas @ 000e370c =====

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::updateTrackingAreas
               (ID param_1,SEL param_2)

{
  FUN_000e3644(param_1);
  return;
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseEntered: @ 000e3734 =====

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseEntered_
               (ID param_1,SEL param_2,ID param_3)

{
  
  if (*(ID *)(param_1 + backgroundBox) != 0) {
    setHidden_(*(ID *)(param_1 + backgroundBox),0);
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe3750);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseExited: @ 000e3750 =====

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseExited_
               (ID param_1,SEL param_2,ID param_3)

{
  
  if (*(ID *)(param_1 + backgroundBox) != 0) {
    setHidden_(*(ID *)(param_1 + backgroundBox),1);
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe376c);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::allowsVibrancy @ 000e376c =====

bool _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::allowsVibrancy(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithFrame:pullsDown: @ 000e3774 =====

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithFrame_pullsDown_
             (ID param_1,SEL param_2,CGRect param_3,bool param_4)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + hoverTrackingArea) = 0;
  *(undefined8 *)(param_1 + backgroundBox) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_000e45b8();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:pullsDown:",param_3.field0_0x0.field0_0x0);
  return IVar2;
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithFrame: @ 000e3800 =====

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + hoverTrackingArea) = 0;
  *(undefined8 *)(param_1 + backgroundBox) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_000e45b8(param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithCoder: @ 000e3884 =====

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + hoverTrackingArea) = 0;
  *(undefined8 *)(param_1 + backgroundBox) = 0;
  pcVar1 = (class_t *)param_1;
  FUN_000e45b8();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::.cxx_destruct @ 000e3928 =====

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

