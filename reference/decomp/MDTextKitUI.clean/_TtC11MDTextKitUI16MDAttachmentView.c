// ===== _TtC11MDTextKitUI16MDAttachmentView::updateTrackingAreas @ 00017a44 =====

void _TtC11MDTextKitUI16MDAttachmentView::updateTrackingAreas(ID param_1,SEL param_2)

{
  MDTextKitUI::MDAttachmentView::updateTrackingAreas((MDAttachmentView *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI16MDAttachmentView::mouseEntered: @ 00017ad0 =====

void _TtC11MDTextKitUI16MDAttachmentView::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAttachmentView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"mouseEntered:",param_3);
  lVar1 = cursor;
  _swift_beginAccess(param_1 + cursor,auStack_58,0,0);
  push(*(ID *)(param_1 + lVar1));
  return;
}

// ===== _TtC11MDTextKitUI16MDAttachmentView::mouseExited: @ 00017bcc =====

void _TtC11MDTextKitUI16MDAttachmentView::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAttachmentView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"mouseExited:",param_3);
  NSCursor::pop(NSCursor);
  return;
}

// ===== _TtC11MDTextKitUI16MDAttachmentView::acceptsFirstMouse: @ 00017c54 =====

bool _TtC11MDTextKitUI16MDAttachmentView::acceptsFirstMouse_(ID param_1,SEL param_2,ID param_3)

{
  return 1;
}

// ===== _TtC11MDTextKitUI16MDAttachmentView::initWithFrame: @ 00017cf4 =====

ID _TtC11MDTextKitUI16MDAttachmentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  *(undefined8 *)(param_1 + trackingArea) = 0;
  lVar1 = cursor;
  IVar2 = NSCursor::arrowCursor
                    (NSCursor,param_3.field0_0x0.field0_0x0,
                     param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  *(ID *)(param_1 + lVar1) = IVar2;
  local_50.super_class = (class_t *)MDTextKitUI::MDAttachmentView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI16MDAttachmentView::initWithCoder: @ 00017e2c =====

ID _TtC11MDTextKitUI16MDAttachmentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAttachmentView::_init((MDAttachmentView *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI16MDAttachmentView::.cxx_destruct @ 00017e84 =====

void _TtC11MDTextKitUI16MDAttachmentView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

