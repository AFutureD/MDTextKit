// ===== _TtC11MDTextKitUI13VibrantButton::allowsVibrancy @ 0005d5f0 =====

bool _TtC11MDTextKitUI13VibrantButton::allowsVibrancy(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI13VibrantButton::initWithFrame: @ 0005d678 =====

ID _TtC11MDTextKitUI13VibrantButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  local_50.super_class = (class_t *)MDTextKitUI::VibrantButton::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI13VibrantButton::initWithCoder: @ 0005d74c =====

ID _TtC11MDTextKitUI13VibrantButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::VibrantButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

