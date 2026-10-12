// ===== _TtC11MDTextKitUI19MDSideActionsButton::resetCursorRects @ 0005c530 =====

void _TtC11MDTextKitUI19MDSideActionsButton::resetCursorRects(ID param_1,SEL param_2)

{
  
  local_50.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"resetCursorRects");
  bounds(param_1);
  IVar1 = NSCursor::arrowCursor(NSCursor);
  addCursorRect_cursor_(param_1,extraout_d0,in_d1,in_d2,in_d3,IVar1);
  return;
}

// ===== _TtC11MDTextKitUI19MDSideActionsButton::mouseDown: @ 0005c638 =====

void _TtC11MDTextKitUI19MDSideActionsButton::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = clickCount(param_3);
  if (IVar1 == 1) {
    local_30.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
    local_30.receiver = param_1;
    _objc_msgSendSuper2(&local_30,"mouseDown:",param_3);
    return;
  }
  return;
}

// ===== _TtC11MDTextKitUI19MDSideActionsButton::mouseUp: @ 0005c724 =====

void _TtC11MDTextKitUI19MDSideActionsButton::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = clickCount(param_3);
  if (1 < (long)IVar1) {
    performClick_(param_1,0);
  }
  local_30.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"mouseUp:",param_3);
  return;
}

// ===== _TtC11MDTextKitUI19MDSideActionsButton::initWithFrame: @ 0005c820 =====

ID _TtC11MDTextKitUI19MDSideActionsButton::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
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

ID _TtC11MDTextKitUI19MDSideActionsButton::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  puVar1 = (undefined8 *)(param_1 + range);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  local_40.super_class = (class_t *)MDTextKitUI::MDSideActionsButton::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

