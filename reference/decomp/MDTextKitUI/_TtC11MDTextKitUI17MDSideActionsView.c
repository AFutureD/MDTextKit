// ===== _TtC11MDTextKitUI17MDSideActionsView::initWithCoder: @ 00056878 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI17MDSideActionsView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDSideActionsView::_init((MDSideActionsView *)param_1,(NSCoder *)param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::dealloc @ 00056904 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::dealloc(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  local_30.super_class = (class_t *)MDTextKitUI::MDSideActionsView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::.cxx_destruct @ 00056980 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + editorController);
  FUN_00026eec(*(undefined8 *)(param_1 + foldingBlock),((undefined8 *)(param_1 + foldingBlock))[1]);
  _swift_unknownObjectWeakDestroy(param_1 + textView);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + hoverTrackingArea));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + hoverTrackingRects));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + debugViews));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + usedDisclosureButtons));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + unUsedDisclosureButtons));
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::isOpaque @ 00056a8c =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI17MDSideActionsView::isOpaque(ID param_1,SEL param_2)

{
  return 0;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::hitTest: @ 00056a94 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI17MDSideActionsView::hitTest_(ID param_1,SEL param_2,CGPoint param_3)

{
  return 0;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::textViewDidChange: @ 00057720 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::textViewDidChange_(ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  long extraout_x8;
  long lVar2;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  __MDTextKitUI_MDSideActionsView__textViewDidChange_in__8578BF63E6F1974F9466B3C11773AFE5__Foundation_Notification___>___
            (param_1);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::updateTrackingAreas @ 00057db8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::updateTrackingAreas(ID param_1,SEL param_2)

{
  MDTextKitUI::MDSideActionsView::updateTrackingAreas((MDSideActionsView *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::mouseEntered: @ 00057e28 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDSideActionsView::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"mouseEntered:",param_3);
  MDTextKitUI::MDSideActionsView::showButtons((MDSideActionsView *)param_1,true);
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::mouseExited: @ 00058020 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDSideActionsView::mouseExited((MDSideActionsView *)param_1,(NSEvent *)param_3);
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::foldButtonClicked: @ 0005869c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::foldButtonClicked_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00058aa4();
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::copyCodeButtonClicked: @ 00058a98 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI17MDSideActionsView::copyCodeButtonClicked_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00058aa4();
  return;
}


// ===== _TtC11MDTextKitUI17MDSideActionsView::initWithFrame: @ 0005c380 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI17MDSideActionsView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.MDSideActionsView",0x1d,"init(frame:)",0xc,0,
             param_3.field1_0x10.field1_0x8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5c3ac);
  (*pcVar1)();
}


