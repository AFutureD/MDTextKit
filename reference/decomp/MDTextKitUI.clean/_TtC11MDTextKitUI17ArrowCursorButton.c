// ===== _TtC11MDTextKitUI17ArrowCursorButton::resetCursorRects @ 000f9430 =====

void _TtC11MDTextKitUI17ArrowCursorButton::resetCursorRects(ID param_1,SEL param_2)

{
  
  bounds(param_1);
  IVar1 = NSCursor::arrowCursor(NSCursor);
  addCursorRect_cursor_(param_1,extraout_d0,in_d1,in_d2,in_d3,IVar1);
  return;
}

// ===== _TtC11MDTextKitUI17ArrowCursorButton::initWithFrame: @ 000f94e4 =====

ID _TtC11MDTextKitUI17ArrowCursorButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_0000b9d0(param_1,param_2,MDTextKitUI::ArrowCursorButton::typeMetadataAccessor,
               param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
               param_3.field1_0x10.field1_0x8);
  return param_1;
}

// ===== _TtC11MDTextKitUI17ArrowCursorButton::initWithCoder: @ 000f94fc =====

ID _TtC11MDTextKitUI17ArrowCursorButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0000ba48();
  return param_1;
}

