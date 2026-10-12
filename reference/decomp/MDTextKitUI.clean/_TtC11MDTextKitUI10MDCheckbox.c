// ===== _TtC11MDTextKitUI10MDCheckbox::highlightedImage @ 000d0688 =====

ID _TtC11MDTextKitUI10MDCheckbox::highlightedImage(ID param_1,SEL param_2)

{
  
  lVar1 = highlightedImage;
  _swift_beginAccess(param_1 + highlightedImage,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI10MDCheckbox::setHighlightedImage: @ 000d071c =====

void _TtC11MDTextKitUI10MDCheckbox::setHighlightedImage_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI10MDCheckbox::highlightedAlternateImage @ 000d07bc =====

ID _TtC11MDTextKitUI10MDCheckbox::highlightedAlternateImage(ID param_1,SEL param_2)

{
  
  lVar1 = highlightedAlternateImage;
  _swift_beginAccess(param_1 + highlightedAlternateImage,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI10MDCheckbox::setHighlightedAlternateImage: @ 000d0850 =====

void _TtC11MDTextKitUI10MDCheckbox::setHighlightedAlternateImage_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI10MDCheckbox::initWithFrame: @ 000d0988 =====

ID _TtC11MDTextKitUI10MDCheckbox::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  *(undefined8 *)(param_1 + highlightedImage) = 0;
  *(undefined8 *)(param_1 + highlightedAlternateImage) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDCheckbox::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI10MDCheckbox::initWithCoder: @ 000d0a8c =====

ID _TtC11MDTextKitUI10MDCheckbox::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + highlightedImage) = 0;
  *(undefined8 *)(param_1 + highlightedAlternateImage) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDCheckbox::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

// ===== _TtC11MDTextKitUI10MDCheckbox::.cxx_destruct @ 000d0b2c =====

void _TtC11MDTextKitUI10MDCheckbox::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

