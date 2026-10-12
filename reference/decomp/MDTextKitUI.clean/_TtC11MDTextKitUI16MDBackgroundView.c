// ===== _TtC11MDTextKitUI16MDBackgroundView::backgroundColor @ 000f263c =====

ID _TtC11MDTextKitUI16MDBackgroundView::backgroundColor(ID param_1,SEL param_2)

{
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI16MDBackgroundView::setBackgroundColor: @ 000f26d0 =====

void _TtC11MDTextKitUI16MDBackgroundView::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  bounds(param_1);
  setNeedsDisplayInRect_(param_1);
  return;
}

// ===== _TtC11MDTextKitUI16MDBackgroundView::drawRect: @ 000f2994 =====

void _TtC11MDTextKitUI16MDBackgroundView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  MDTextKitUI::MDBackgroundView::draw((MDBackgroundView *)param_1,(CGRect)param_1);
  return;
}

// ===== _TtC11MDTextKitUI16MDBackgroundView::initWithFrame: @ 000f2a58 =====

ID _TtC11MDTextKitUI16MDBackgroundView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  *(undefined8 *)(param_1 + backgroundColor) = 0;
  local_50.super_class = (class_t *)MDTextKitUI::MDBackgroundView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar1;
}

// ===== _TtC11MDTextKitUI16MDBackgroundView::initWithCoder: @ 000f2b48 =====

ID _TtC11MDTextKitUI16MDBackgroundView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + backgroundColor) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDBackgroundView::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

// ===== _TtC11MDTextKitUI16MDBackgroundView::.cxx_destruct @ 000f2c04 =====

void _TtC11MDTextKitUI16MDBackgroundView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

