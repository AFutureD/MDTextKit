// ===== _TtC11MDTextKitUI11MDTextField::styleObjectForPanelWith: @ 000317a8 =====

void _TtC11MDTextKitUI11MDTextField::styleObjectForPanelWith_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextField::styleObjectForPanel((MDTextField *)param_1,(SFThemeManager *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::styleObjectForMainAppWith: @ 00031b30 =====

void _TtC11MDTextKitUI11MDTextField::styleObjectForMainAppWith_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextField::styleObjectForMainApp((MDTextField *)param_1,(SFThemeManager *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::styleObjectForMainAppToolbarWith: @ 00031f34 =====

void _TtC11MDTextKitUI11MDTextField::styleObjectForMainAppToolbarWith_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextField::styleObjectForMainAppToolbar
            ((MDTextField *)param_1,(SFThemeManager *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::animationsEnabled @ 0010ea20 =====

bool _TtC11MDTextKitUI11MDTextField::animationsEnabled(ID param_1,SEL param_2)

{
  
  lVar1 = animationsEnabled;
  _swift_beginAccess(param_1 + animationsEnabled,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI11MDTextField::setAnimationsEnabled: @ 0010eaa4 =====

void _TtC11MDTextKitUI11MDTextField::setAnimationsEnabled_(ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = animationsEnabled;
  _swift_beginAccess(param_1 + animationsEnabled,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::cornerRadius @ 0010eb80 =====

double _TtC11MDTextKitUI11MDTextField::cornerRadius(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + cornerRadius);
}

// ===== _TtC11MDTextKitUI11MDTextField::setCornerRadius: @ 0010eb90 =====

void _TtC11MDTextKitUI11MDTextField::setCornerRadius_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + cornerRadius) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::borderWidth @ 0010eba0 =====

double _TtC11MDTextKitUI11MDTextField::borderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + borderWidth);
}

// ===== _TtC11MDTextKitUI11MDTextField::setBorderWidth: @ 0010ebb0 =====

void _TtC11MDTextKitUI11MDTextField::setBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + borderWidth) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::borderColor @ 0010ebc0 =====

ID _TtC11MDTextKitUI11MDTextField::borderColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + borderColor);
}

// ===== _TtC11MDTextKitUI11MDTextField::setBorderColor: @ 0010ebd0 =====

void _TtC11MDTextKitUI11MDTextField::setBorderColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + borderColor) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::selectedTextBackgroundColor @ 0010ec04 =====

ID _TtC11MDTextKitUI11MDTextField::selectedTextBackgroundColor(ID param_1,SEL param_2)

{
  
  lVar1 = selectedTextBackgroundColor;
  _swift_beginAccess(param_1 + selectedTextBackgroundColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI11MDTextField::setSelectedTextBackgroundColor: @ 0010ec98 =====

void _TtC11MDTextKitUI11MDTextField::setSelectedTextBackgroundColor_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextField::_set_selectedTextBackgroundColor((MDTextField *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::selectedTextColor @ 0010ed48 =====

ID _TtC11MDTextKitUI11MDTextField::selectedTextColor(ID param_1,SEL param_2)

{
  
  lVar1 = selectedTextColor;
  _swift_beginAccess(param_1 + selectedTextColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI11MDTextField::setSelectedTextColor: @ 0010eddc =====

void _TtC11MDTextKitUI11MDTextField::setSelectedTextColor_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextField::_set_selectedTextColor((MDTextField *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::insertionPointColor @ 0010f01c =====

ID _TtC11MDTextKitUI11MDTextField::insertionPointColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + insertionPointColor);
}

// ===== _TtC11MDTextKitUI11MDTextField::setInsertionPointColor: @ 0010f02c =====

void _TtC11MDTextKitUI11MDTextField::setInsertionPointColor_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0010f06c(param_3);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::wantFocusRing @ 0010f138 =====

bool _TtC11MDTextKitUI11MDTextField::wantFocusRing(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + wantFocusRing);
}

// ===== _TtC11MDTextKitUI11MDTextField::setWantFocusRing: @ 0010f148 =====

void _TtC11MDTextKitUI11MDTextField::setWantFocusRing_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + wantFocusRing) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::focusRingColor @ 0010f158 =====

ID _TtC11MDTextKitUI11MDTextField::focusRingColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + focusRingColor);
}

// ===== _TtC11MDTextKitUI11MDTextField::setFocusRingColor: @ 0010f168 =====

void _TtC11MDTextKitUI11MDTextField::setFocusRingColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + focusRingColor) = param_3;
  FUN_0010f1d4(0);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::placeholderTextColor @ 0010f2f0 =====

ID _TtC11MDTextKitUI11MDTextField::placeholderTextColor(ID param_1,SEL param_2)

{
  
  lVar1 = placeholderTextColor;
  _swift_beginAccess(param_1 + placeholderTextColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI11MDTextField::setPlaceholderTextColor: @ 0010f384 =====

void _TtC11MDTextKitUI11MDTextField::setPlaceholderTextColor_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = placeholderTextColor;
  _swift_beginAccess(param_1 + placeholderTextColor,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  FUN_0010f480(0);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::initWithCoder: @ 0010faec =====

ID _TtC11MDTextKitUI11MDTextField::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0010f998();
  return param_3;
}

// ===== _TtC11MDTextKitUI11MDTextField::becomeFirstResponder @ 0010fc88 =====

bool _TtC11MDTextKitUI11MDTextField::becomeFirstResponder(ID param_1,SEL param_2)

{
  
  bVar1 = MDTextKitUI::MDTextField::becomeFirstResponder((MDTextField *)param_1);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI11MDTextField::observeValueForKeyPath:ofObject:change:context: @ 0010fcc0 =====

void _TtC11MDTextKitUI11MDTextField::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    param_2 = SVar2.bridgeObject;
  }
  if (param_4 == 0) {
  }
  else {
    _swift_unknownObjectRetain(param_4,param_2);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  if (param_5 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    FUN_00006178(0);
    FUN_00005b98(&DAT_00234198,FUN_00006178,&TargetProtocolConformanceDescriptor_001c3038);
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_00111f64(SVar2.str,SVar2.bridgeObject,&local_60);
  _swift_bridgeObjectRelease(DVar1.unknown);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_00007078(&local_60);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::mouseDown: @ 0010fe34 =====

void _TtC11MDTextKitUI11MDTextField::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDTextField::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"mouseDown:",param_3);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::textDidEndEditing: @ 0011019c =====

void _TtC11MDTextKitUI11MDTextField::textDidEndEditing_(ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  MDTextKitUI::MDTextField::textDidEndEditing
            ((MDTextField *)param_1,
             (Notification)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::intrinsicContentSize @ 00110240 =====

CGSize _TtC11MDTextKitUI11MDTextField::intrinsicContentSize(ID param_1,SEL param_2)

{
  CGSize CVar2;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDTextField::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"intrinsicContentSize");
  self = font(param_1);
  if (self == 0) {
    dVar1 = 0.0;
  }
  else {
    pointSize(self);
    dVar1 = extraout_d0;
  }
  CVar2.field1_0x8 = in_d1 + (double)(long)(dVar1 / 1.4);
  CVar2.field0_0x0 = in_d0;
  return CVar2;
}

// ===== _TtC11MDTextKitUI11MDTextField::drawFocusRingMask @ 0011054c =====

void _TtC11MDTextKitUI11MDTextField::drawFocusRingMask(ID param_1,SEL param_2)

{
  MDTextKitUI::MDTextField::drawFocusRingMask((MDTextField *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::attributedStringValue @ 001106d0 =====

ID _TtC11MDTextKitUI11MDTextField::attributedStringValue(ID param_1,SEL param_2)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDTextField::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"attributedStringValue");
  return IVar1;
}

// ===== _TtC11MDTextKitUI11MDTextField::setAttributedStringValue: @ 00110748 =====

void _TtC11MDTextKitUI11MDTextField::setAttributedStringValue_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTextField::set_attributedStringValue
            ((MDTextField *)param_1,(NSAttributedString *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI11MDTextField::initWithFrame: @ 001109fc =====

ID _TtC11MDTextKitUI11MDTextField::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.MDTextField",0x17,"init(frame:)",0xc,0,param_3.field1_0x10.field1_0x8);
  pcVar1 = (code *)SoftwareBreakpoint(1,0x110a28);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI11MDTextField::.cxx_destruct @ 00110a34 =====

void _TtC11MDTextKitUI11MDTextField::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

