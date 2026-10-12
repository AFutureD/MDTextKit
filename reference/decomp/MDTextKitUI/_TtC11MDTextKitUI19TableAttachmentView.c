// ===== _TtC11MDTextKitUI19TableAttachmentView::imageView @ 000d5e64 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI19TableAttachmentView::imageView(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = imageView;
  _swift_beginAccess(param_1 + imageView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI19TableAttachmentView::setImageView: @ 000d5eac =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI19TableAttachmentView::setImageView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = imageView;
  _swift_beginAccess(param_1 + imageView,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI19TableAttachmentView::initWithCoder: @ 000d5f40 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI19TableAttachmentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_000d6d9c();
  return param_3;
}


// ===== _TtC11MDTextKitUI19TableAttachmentView::viewDidMoveToWindow @ 000d6374 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI19TableAttachmentView::viewDidMoveToWindow(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class = (class_t *)MDTextKitUI::TableAttachmentView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidMoveToWindow");
  __MDTextKitUI_TableAttachmentView__updateVisibilityObservers_in__00A6BBACE429F5889CEADDB608C79DAD_____>___
            ();
  MDTextKitUI::TableAttachmentView::renderIfNeeded((TableAttachmentView *)param_1,false);
  return;
}


// ===== _TtC11MDTextKitUI19TableAttachmentView::visibleAreaDidChange: @ 000d63d8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI19TableAttachmentView::visibleAreaDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  long extraout_x8;
  long lVar2;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  __MDTextKitUI_TableAttachmentView__visibleAreaDidChange_in__00A6BBACE429F5889CEADDB608C79DAD__Foundation_Notification___>___
            (param_1);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}


// ===== _TtC11MDTextKitUI19TableAttachmentView::dealloc @ 000d64dc =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI19TableAttachmentView::dealloc(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  local_30.super_class = (class_t *)MDTextKitUI::TableAttachmentView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}


// ===== _TtC11MDTextKitUI19TableAttachmentView::.cxx_destruct @ 000d6558 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI19TableAttachmentView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + tableData));
  FUN_00016808(param_1 + displayDelegate);
  _swift_release(*(undefined8 *)(param_1 + layout));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cellRectsCache));
  return;
}


// ===== _TtC11MDTextKitUI19TableAttachmentView::initWithFrame: @ 000d6c70 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI19TableAttachmentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.TableAttachmentView",0x1f,"init(frame:)",0xc,0,
             param_3.field1_0x10.field1_0x8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd6c9c);
  (*pcVar1)();
}


