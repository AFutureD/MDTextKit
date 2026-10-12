// ===== _TtC11MDTextKitUI19MDSideActionsButton::resetCursorRects @ 0005c530 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI19MDSideActionsButton::resetCursorRects(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  objc_super local_50;
  
  local_50.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"resetCursorRects");
  objc_stub::bounds(param_1);
  IVar1 = NSCursor::arrowCursor((ID)&_OBJC_CLASS___NSCursor);
  objc_stub::addCursorRect_cursor_(param_1,extraout_d0,in_d1,in_d2,in_d3,IVar1);
  return;
}


// ===== _TtC11MDTextKitUI19MDSideActionsButton::mouseDown: @ 0005c638 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI19MDSideActionsButton::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_30;
  
  IVar1 = objc_stub::clickCount(param_3);
  if (IVar1 == 1) {
    local_30.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
    local_30.receiver = param_1;
    _objc_msgSendSuper2(&local_30,"mouseDown:",param_3);
    return;
  }
  return;
}


// ===== _TtC11MDTextKitUI19MDSideActionsButton::mouseUp: @ 0005c724 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI19MDSideActionsButton::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_30;
  
  IVar1 = objc_stub::clickCount(param_3);
  if (1 < (long)IVar1) {
    objc_stub::performClick_(param_1,0);
  }
  local_30.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"mouseUp:",param_3);
  return;
}


// ===== _TtC11MDTextKitUI19MDSideActionsButton::initWithFrame: @ 0005c820 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI19MDSideActionsButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  ID IVar2;
  objc_super local_50;
  
  puVar1 = (undefined8 *)(param_1 + range);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  local_50.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}


// ===== _TtC11MDTextKitUI19MDSideActionsButton::initWithCoder: @ 0005c928 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI19MDSideActionsButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  ID IVar2;
  objc_super local_40;
  
  puVar1 = (undefined8 *)(param_1 + range);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  local_40.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}


