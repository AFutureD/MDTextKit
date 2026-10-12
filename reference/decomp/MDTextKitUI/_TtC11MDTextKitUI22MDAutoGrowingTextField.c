// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::numberOfRows @ 0019ecd8 =====

/* Function Stack Size: 0x10 bytes */

long_long _TtC11MDTextKitUI22MDAutoGrowingTextField::numberOfRows(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + numberOfRows);
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::setNumberOfRows: @ 0019ece8 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDAutoGrowingTextField::setNumberOfRows_
               (ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + numberOfRows) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::initWithCoder: @ 0019ecf8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI22MDAutoGrowingTextField::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_30;
  
  *(undefined8 *)(param_1 + numberOfRows) = 3;
  *(undefined8 *)(param_1 + lineHeight) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"initWithCoder:",param_3);
  if (IVar1 != 0) {
    FUN_0019f274();
  }
  return IVar1;
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::textDidChange: @ 0019edfc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDAutoGrowingTextField::textDidChange_(ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  NSNotification *pNVar2;
  long extraout_x8;
  long lVar3;
  objc_super local_50;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar3 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar3 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  pNVar2 = Foundation::Notification::_bridgeToObjectiveC((Notification)param_1);
  local_50.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"textDidChange:",pNVar2);
  objc_stub::invalidateIntrinsicContentSize(param_1);
  (**(code **)(lVar3 + 8))
            ((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::font @ 0019eed4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI22MDAutoGrowingTextField::font(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"font");
  return IVar1;
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::setFont: @ 0019ef4c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI22MDAutoGrowingTextField::setFont_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setFont:",param_3);
  FUN_0019f274();
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::frame @ 0019f014 =====

/* Function Stack Size: 0x10 bytes */

CGRect _TtC11MDTextKitUI22MDAutoGrowingTextField::frame(ID param_1,SEL param_2)

{
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar1;
  objc_super local_30;
  
  local_30.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"frame");
  CVar1.field0_0x0.field1_0x8 = in_d1;
  CVar1.field0_0x0.field0_0x0 = in_d0;
  CVar1.field1_0x10.field1_0x8 = in_d3;
  CVar1.field1_0x10.field0_0x0 = in_d2;
  return CVar1;
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::setFrame: @ 0019f080 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC11MDTextKitUI22MDAutoGrowingTextField::setFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  objc_super local_50;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"setFrame:");
  FUN_0019f170();
  return;
}


// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::intrinsicContentSize @ 0019f45c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGSize _TtC11MDTextKitUI22MDAutoGrowingTextField::intrinsicContentSize(ID param_1,SEL param_2)

{
  double in_d0;
  double in_d1;
  CGSize CVar1;
  
  MDTextKitUI::MDAutoGrowingTextField::get_intrinsicContentSize
            ((MDAutoGrowingTextField *)param_1,(MDAutoGrowingTextField *)param_1);
  CVar1.field1_0x8 = in_d1;
  CVar1.field0_0x0 = in_d0;
  return CVar1;
}


