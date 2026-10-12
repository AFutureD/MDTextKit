// ===== _TtC11MDTextKitUI17ArrowCursorButton::resetCursorRects @ 000f9430 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI17ArrowCursorButton::resetCursorRects(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  objc_stub::bounds(param_1);
  IVar1 = NSCursor::arrowCursor((ID)&_OBJC_CLASS___NSCursor);
  objc_stub::addCursorRect_cursor_(param_1,extraout_d0,in_d1,in_d2,in_d3,IVar1);
  return;
}


// ===== _TtC11MDTextKitUI17ArrowCursorButton::initWithFrame: @ 000f94e4 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI17ArrowCursorButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_0000b9d0(param_1,param_2,MDTextKitUI::ArrowCursorButton::typeMetadataAccessor,
               param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
               param_3.field1_0x10.field1_0x8);
  return param_1;
}


// ===== _TtC11MDTextKitUI17ArrowCursorButton::initWithCoder: @ 000f94fc =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI17ArrowCursorButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0000ba48();
  return param_1;
}


