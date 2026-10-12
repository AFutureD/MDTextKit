// ===== _TtC11MDTextKitUI8MDButton::title @ 0019df6c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI8MDButton::title(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  String SVar2;
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  pNVar1 = (NSString *)_objc_msgSendSuper2(&local_40,"title");
  if (pNVar1 == (NSString *)0x0) {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar2.bridgeObject);
  }
  return (ID)pNVar1;
}


// ===== _TtC11MDTextKitUI8MDButton::setTitle: @ 0019e07c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI8MDButton::setTitle_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setTitle:",param_3);
  FUN_0019e148();
  return;
}


// ===== _TtC11MDTextKitUI8MDButton::initWithFrame: @ 0019e688 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI8MDButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  ID IVar2;
  objc_super local_60;
  
  lVar1 = tintColor;
  IVar2 = NSColor::blueColor((ID)&_OBJC_CLASS___NSColor,param_3.field0_0x0.field0_0x0,
                             param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                             param_3.field1_0x10.field1_0x8);
  *(ID *)(param_1 + lVar1) = IVar2;
  lVar1 = titleColor;
  IVar2 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(param_1 + lVar1) = IVar2;
  *(undefined1 *)(param_1 + isDark) = 0;
  local_60.super_class = (class_t *)MDTextKitUI::MDButton::typeMetadataAccessor();
  local_60.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_60,"initWithFrame:");
  return IVar2;
}


// ===== _TtC11MDTextKitUI8MDButton::initWithCoder: @ 0019e808 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI8MDButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDButton::_init((MDButton *)param_1,(NSCoder *)param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI8MDButton::.cxx_destruct @ 0019e860 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI8MDButton::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


