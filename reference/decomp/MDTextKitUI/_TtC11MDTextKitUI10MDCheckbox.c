// ===== _TtC11MDTextKitUI10MDCheckbox::highlightedImage @ 000d0688 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI10MDCheckbox::highlightedImage(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = highlightedImage;
  _swift_beginAccess(param_1 + highlightedImage,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI10MDCheckbox::setHighlightedImage: @ 000d071c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI10MDCheckbox::setHighlightedImage_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}


// ===== _TtC11MDTextKitUI10MDCheckbox::highlightedAlternateImage @ 000d07bc =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI10MDCheckbox::highlightedAlternateImage(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = highlightedAlternateImage;
  _swift_beginAccess(param_1 + highlightedAlternateImage,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI10MDCheckbox::setHighlightedAlternateImage: @ 000d0850 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI10MDCheckbox::setHighlightedAlternateImage_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}


// ===== _TtC11MDTextKitUI10MDCheckbox::initWithFrame: @ 000d0988 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI10MDCheckbox::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + highlightedImage) = 0;
  *(undefined8 *)(param_1 + highlightedAlternateImage) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDCheckbox::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}


// ===== _TtC11MDTextKitUI10MDCheckbox::initWithCoder: @ 000d0a8c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI10MDCheckbox::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  *(undefined8 *)(param_1 + highlightedImage) = 0;
  *(undefined8 *)(param_1 + highlightedAlternateImage) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDCheckbox::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI10MDCheckbox::.cxx_destruct @ 000d0b2c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI10MDCheckbox::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


