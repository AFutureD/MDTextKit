// ===== _TtC11MDTextKitUI18StyleBarScrollView::hasVerticalScroller @ 000e3d38 =====

bool _TtC11MDTextKitUI18StyleBarScrollView::hasVerticalScroller(ID param_1,SEL param_2)

{
  return 0;
}

// ===== _TtC11MDTextKitUI18StyleBarScrollView::setHasVerticalScroller: @ 000e3d40 =====

void _TtC11MDTextKitUI18StyleBarScrollView::setHasVerticalScroller_
               (ID param_1,SEL param_2,bool param_3)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_000e45d8(param_1,param_2,param_3);
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"setHasVerticalScroller:",0);
  return;
}

// ===== _TtC11MDTextKitUI18StyleBarScrollView::scrollWheel: @ 000e3d80 =====

void _TtC11MDTextKitUI18StyleBarScrollView::scrollWheel_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = nextResponder(param_1);
  scrollWheel_(IVar1,param_3);
  return;
}

// ===== _TtC11MDTextKitUI18StyleBarScrollView::allowsVibrancy @ 000e3de8 =====

bool _TtC11MDTextKitUI18StyleBarScrollView::allowsVibrancy(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI18StyleBarScrollView::initWithFrame: @ 000e3df0 =====

ID _TtC11MDTextKitUI18StyleBarScrollView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_0000b9d0(param_1,param_2,FUN_000e45d8,param_3.field0_0x0.field1_0x8,
               param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return param_1;
}

// ===== _TtC11MDTextKitUI18StyleBarScrollView::initWithCoder: @ 000e3dfc =====

ID _TtC11MDTextKitUI18StyleBarScrollView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0000ba48();
  return param_1;
}

