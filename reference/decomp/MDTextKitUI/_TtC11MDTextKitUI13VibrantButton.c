// ===== _TtC11MDTextKitUI13VibrantButton::allowsVibrancy @ 0005d5f0 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI13VibrantButton::allowsVibrancy(ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI13VibrantButton::initWithFrame: @ 0005d678 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI13VibrantButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = (class_t *)MDTextKitUI::VibrantButton::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI13VibrantButton::initWithCoder: @ 0005d74c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI13VibrantButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::VibrantButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


