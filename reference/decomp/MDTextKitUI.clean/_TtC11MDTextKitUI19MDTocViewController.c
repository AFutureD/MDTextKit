// ===== _TtC11MDTextKitUI19MDTocViewController::tocViewController @ 00113054 =====

ID _TtC11MDTextKitUI19MDTocViewController::tocViewController(ID param_1,SEL param_2)

{
  FUN_0011612c();
  return param_1;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::useSystemColorsAndFonts @ 00113068 =====

bool _TtC11MDTextKitUI19MDTocViewController::useSystemColorsAndFonts(ID param_1,SEL param_2)

{
  
  lVar1 = useSystemColorsAndFonts;
  _swift_beginAccess(param_1 + useSystemColorsAndFonts,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDTocViewController::setUseSystemColorsAndFonts: @ 001130ec =====

void _TtC11MDTextKitUI19MDTocViewController::setUseSystemColorsAndFonts_
               (ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = useSystemColorsAndFonts;
  _swift_beginAccess(param_1 + useSystemColorsAndFonts,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::themeManager @ 001131c8 =====

ID _TtC11MDTextKitUI19MDTocViewController::themeManager(ID param_1,SEL param_2)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDTocViewController::setThemeManager: @ 0011325c =====

void _TtC11MDTextKitUI19MDTocViewController::setThemeManager_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::minHeight @ 001132fc =====

double _TtC11MDTextKitUI19MDTocViewController::minHeight(ID param_1,SEL param_2)

{
  
  lVar1 = minHeight;
  _swift_beginAccess(param_1 + minHeight,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDTocViewController::setMinHeight: @ 00113380 =====

void _TtC11MDTextKitUI19MDTocViewController::setMinHeight_(ID param_1,SEL param_2,double param_3)

{
  
  lVar1 = minHeight;
  _swift_beginAccess(param_1 + minHeight,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::placeholderImage @ 0011345c =====

ID _TtC11MDTextKitUI19MDTocViewController::placeholderImage(ID param_1,SEL param_2)

{
  
  lVar1 = placeholderImage;
  _swift_beginAccess(param_1 + placeholderImage,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDTocViewController::setPlaceholderImage: @ 001134f0 =====

void _TtC11MDTextKitUI19MDTocViewController::setPlaceholderImage_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::placeholderLabel @ 00113590 =====

ID _TtC11MDTextKitUI19MDTocViewController::placeholderLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + placeholderLabel);
}

// ===== _TtC11MDTextKitUI19MDTocViewController::setPlaceholderLabel: @ 001135a0 =====

void _TtC11MDTextKitUI19MDTocViewController::setPlaceholderLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + placeholderLabel) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::placeholderImageView @ 001135d4 =====

ID _TtC11MDTextKitUI19MDTocViewController::placeholderImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + placeholderImageView);
}

// ===== _TtC11MDTextKitUI19MDTocViewController::setPlaceholderImageView: @ 001135e4 =====

void _TtC11MDTextKitUI19MDTocViewController::setPlaceholderImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + placeholderImageView) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineView @ 00113618 =====

ID _TtC11MDTextKitUI19MDTocViewController::outlineView(ID param_1,SEL param_2)

{
  
  lVar1 = outlineView;
  _swift_beginAccess(param_1 + outlineView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDTocViewController::setOutlineView: @ 001136ac =====

void _TtC11MDTextKitUI19MDTocViewController::setOutlineView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::viewDidLoad @ 00113860 =====

void _TtC11MDTextKitUI19MDTocViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDTocViewController::viewDidLoad((MDTocViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::viewDidAppear @ 001138bc =====

void _TtC11MDTextKitUI19MDTocViewController::viewDidAppear(ID param_1,SEL param_2)

{
  
  local_30.super_class = (class_t *)MDTextKitUI::MDTocViewController::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidAppear");
  FUN_00113918();
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineView:viewForTableColumn:item: @ 00114698 =====

ID _TtC11MDTextKitUI19MDTocViewController::outlineView_viewForTableColumn_item_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  
  _swift_unknownObjectRetain(param_5);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_5);
  FUN_00116620(param_3,auStack_60);
  ___swift_destroy_boxed_opaque_existential_1(auStack_60);
  return param_3;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineView:numberOfChildrenOfItem: @ 00114750 =====

long_long _TtC11MDTextKitUI19MDTocViewController::outlineView_numberOfChildrenOfItem_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  puVar1 = &local_50;
  if (param_4 == 0) {
  }
  else {
    _swift_unknownObjectRetain(param_4);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  FUN_00116b18();
  FUN_00007078(&local_50);
  return (long_long)(undefined1 *)puVar1;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineView:isItemExpandable: @ 001147fc =====

bool _TtC11MDTextKitUI19MDTocViewController::outlineView_isItemExpandable_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  uVar1 = 0;
  _swift_unknownObjectRetain(param_4);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_4);
  FUN_00116c40();
  ___swift_destroy_boxed_opaque_existential_1(auStack_50);
  return uVar1 & 1;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineView:child:ofItem: @ 00114a24 =====

ID _TtC11MDTextKitUI19MDTocViewController::outlineView_child_ofItem_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  
  if (param_5 == 0) {
    param_5 = param_1;
  }
  else {
    _swift_unknownObjectRetain(param_5);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease();
  }
  MDTextKitUI::MDTocViewController::_outlineView
            ((MDTocViewController *)param_1,(NSOutlineView *)param_5,param_4);
  FUN_00007078(&local_70);
  puVar1 = auStack_50;
  ___swift_project_boxed_opaque_existential_1(puVar1,local_38);
  Swift::__bridgeAnythingToObjectiveC();
  ___swift_destroy_boxed_opaque_existential_1(auStack_50);
  return (ID)puVar1;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineView:rowViewForItem: @ 00114d50 =====

ID _TtC11MDTextKitUI19MDTocViewController::outlineView_rowViewForItem_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  _swift_unknownObjectRetain(param_4);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_4);
  MDTextKitUI::MDTocViewController::_outlineView
            ((MDTocViewController *)param_1,(NSOutlineView *)param_3);
  ___swift_destroy_boxed_opaque_existential_1(auStack_50);
  return param_3;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineView:shouldSelectItem: @ 00114ddc =====

bool _TtC11MDTextKitUI19MDTocViewController::outlineView_shouldSelectItem_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  _swift_unknownObjectRetain(param_4);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_4);
  ___swift_destroy_boxed_opaque_existential_1(auStack_50);
  return 1;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::outlineViewSelectionDidChange: @ 00115138 =====

void _TtC11MDTextKitUI19MDTocViewController::outlineViewSelectionDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  MDTextKitUI::MDTocViewController::outlineViewSelectionDidChange
            ((MDTocViewController *)param_1,(Notification)param_1);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::styleObjectWithThemeManager: @ 001151dc =====

void _TtC11MDTextKitUI19MDTocViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00116274(param_1);
  return;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::initWithNibName:bundle: @ 00115300 =====

ID _TtC11MDTextKitUI19MDTocViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDTocViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDTocViewController::_init((MDTocViewController *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::initWithCoder: @ 00115420 =====

ID _TtC11MDTextKitUI19MDTocViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTocViewController::_init((MDTocViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI19MDTocViewController::.cxx_destruct @ 001154d4 =====

void _TtC11MDTextKitUI19MDTocViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

