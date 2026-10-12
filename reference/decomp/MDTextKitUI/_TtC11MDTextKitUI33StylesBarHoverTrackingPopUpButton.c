// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::backgroundBox @ 000e3600 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::backgroundBox(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + backgroundBox);
}


// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::setBackgroundBox: @ 000e3610 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::setBackgroundBox_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + backgroundBox) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::updateTrackingAreas @ 000e370c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::updateTrackingAreas
               (ID param_1,SEL param_2)

{
  FUN_000e3644(param_1);
  return;
}


// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseEntered: @ 000e3734 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseEntered_
               (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  if (*(ID *)(param_1 + backgroundBox) != 0) {
    objc_stub::setHidden_(*(ID *)(param_1 + backgroundBox),0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe3750);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseExited: @ 000e3750 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::mouseExited_
               (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  if (*(ID *)(param_1 + backgroundBox) != 0) {
    objc_stub::setHidden_(*(ID *)(param_1 + backgroundBox),1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe376c);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::allowsVibrancy @ 000e376c =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::allowsVibrancy(ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithFrame:pullsDown: @ 000e3774 =====

/* Function Stack Size: 0x34 bytes */

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithFrame_pullsDown_
             (ID param_1,SEL param_2,CGRect param_3,bool param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
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

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
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

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
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

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI33StylesBarHoverTrackingPopUpButton::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


