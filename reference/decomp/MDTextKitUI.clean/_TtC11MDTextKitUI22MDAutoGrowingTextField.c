// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::numberOfRows @ 0019ecd8 =====

long_long _TtC11MDTextKitUI22MDAutoGrowingTextField::numberOfRows(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + numberOfRows);
}

// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::setNumberOfRows: @ 0019ece8 =====

void _TtC11MDTextKitUI22MDAutoGrowingTextField::setNumberOfRows_
               (ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + numberOfRows) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::initWithCoder: @ 0019ecf8 =====

ID _TtC11MDTextKitUI22MDAutoGrowingTextField::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
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

void _TtC11MDTextKitUI22MDAutoGrowingTextField::textDidChange_(ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  NSNotification *pNVar2;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar3 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar3 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  pNVar2 = Foundation::Notification::_bridgeToObjectiveC((Notification)param_1);
  local_50.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"textDidChange:",pNVar2);
  invalidateIntrinsicContentSize(param_1);
  (**(code **)(lVar3 + 8))
            ((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::font @ 0019eed4 =====

ID _TtC11MDTextKitUI22MDAutoGrowingTextField::font(ID param_1,SEL param_2)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"font");
  return IVar1;
}

// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::setFont: @ 0019ef4c =====

void _TtC11MDTextKitUI22MDAutoGrowingTextField::setFont_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setFont:",param_3);
  FUN_0019f274();
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::frame @ 0019f014 =====

CGRect _TtC11MDTextKitUI22MDAutoGrowingTextField::frame(ID param_1,SEL param_2)

{
  CGRect CVar1;
  
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

void _TtC11MDTextKitUI22MDAutoGrowingTextField::setFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  local_50.super_class = (class_t *)MDTextKitUI::MDAutoGrowingTextField::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"setFrame:");
  FUN_0019f170();
  return;
}

// ===== _TtC11MDTextKitUI22MDAutoGrowingTextField::intrinsicContentSize @ 0019f45c =====

CGSize _TtC11MDTextKitUI22MDAutoGrowingTextField::intrinsicContentSize(ID param_1,SEL param_2)

{
  CGSize CVar1;
  
  MDTextKitUI::MDAutoGrowingTextField::get_intrinsicContentSize
            ((MDAutoGrowingTextField *)param_1,(MDAutoGrowingTextField *)param_1);
  CVar1.field1_0x8 = in_d1;
  CVar1.field0_0x0 = in_d0;
  return CVar1;
}

