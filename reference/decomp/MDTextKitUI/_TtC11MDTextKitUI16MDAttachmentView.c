// ===== _TtC11MDTextKitUI16MDAttachmentView::updateTrackingAreas @ 00017a44 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI16MDAttachmentView::updateTrackingAreas(ID param_1,SEL param_2)

{
  MDTextKitUI::MDAttachmentView::updateTrackingAreas((MDAttachmentView *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI16MDAttachmentView::mouseEntered: @ 00017ad0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI16MDAttachmentView::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_58 [24];
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAttachmentView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"mouseEntered:",param_3);
  lVar1 = cursor;
  _swift_beginAccess(param_1 + cursor,auStack_58,0,0);
  objc_stub::push(*(ID *)(param_1 + lVar1));
  return;
}


// ===== _TtC11MDTextKitUI16MDAttachmentView::mouseExited: @ 00017bcc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI16MDAttachmentView::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDAttachmentView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"mouseExited:",param_3);
  NSCursor::pop((ID)&_OBJC_CLASS___NSCursor);
  return;
}


// ===== _TtC11MDTextKitUI16MDAttachmentView::acceptsFirstMouse: @ 00017c54 =====

/* Function Stack Size: 0x18 bytes */

bool _TtC11MDTextKitUI16MDAttachmentView::acceptsFirstMouse_(ID param_1,SEL param_2,ID param_3)

{
  return 1;
}


// ===== _TtC11MDTextKitUI16MDAttachmentView::initWithFrame: @ 00017cf4 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI16MDAttachmentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  ID IVar2;
  objc_super local_50;
  
  *(undefined8 *)(param_1 + trackingArea) = 0;
  lVar1 = cursor;
  IVar2 = NSCursor::arrowCursor
                    ((ID)&_OBJC_CLASS___NSCursor,param_3.field0_0x0.field0_0x0,
                     param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  *(ID *)(param_1 + lVar1) = IVar2;
  local_50.super_class = (class_t *)MDTextKitUI::MDAttachmentView::typeMetadataAccessor();
  local_50.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}


// ===== _TtC11MDTextKitUI16MDAttachmentView::initWithCoder: @ 00017e2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI16MDAttachmentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAttachmentView::_init((MDAttachmentView *)param_1,(NSCoder *)param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI16MDAttachmentView::.cxx_destruct @ 00017e84 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI16MDAttachmentView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


