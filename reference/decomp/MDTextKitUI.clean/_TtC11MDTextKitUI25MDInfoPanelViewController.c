// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::selectedItemLabel @ 00199914 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::selectedItemLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + selectedItemLabel);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setSelectedItemLabel: @ 00199924 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setSelectedItemLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + selectedItemLabel) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::tabView @ 00199958 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::tabView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + tabView);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setTabView: @ 00199968 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setTabView_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + tabView) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::segmentedControl @ 0019999c =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::segmentedControl(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + segmentedControl);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setSegmentedControl: @ 001999ac =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setSegmentedControl_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + segmentedControl) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::toolbarView @ 001999e0 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::toolbarView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + toolbarView);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setToolbarView: @ 001999f0 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setToolbarView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + toolbarView) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::closeButton @ 00199a24 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::closeButton(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + closeButton);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setCloseButton: @ 00199a34 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setCloseButton_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + closeButton) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::dropdownImageView @ 00199a68 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::dropdownImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + dropdownImageView);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setDropdownImageView: @ 00199a78 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setDropdownImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + dropdownImageView) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::optionButton @ 00199aac =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::optionButton(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + optionButton);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setOptionButton: @ 00199abc =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setOptionButton_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + optionButton) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::infoPanelViewController @ 00199af4 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::infoPanelViewController(ID param_1,SEL param_2)

{
  FUN_0019be00();
  return param_1;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::tabViewItems @ 00199b08 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::tabViewItems(ID param_1,SEL param_2)

{
  NSArray *pNVar2;
  
  lVar1 = tabViewItems;
  _swift_beginAccess(param_1 + tabViewItems,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  MDTextKitUI::MDTabViewItem::typeMetadataAccessor();
  _swift_bridgeObjectRetain(uVar3);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  return (ID)pNVar2;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setTabViewItems: @ 00199bbc =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setTabViewItems_
               (ID param_1,SEL param_2,ID param_3)

{
  
  MDTextKitUI::MDTabViewItem::typeMetadataAccessor();
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar1 = tabViewItems;
  _swift_beginAccess(param_1 + tabViewItems,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(ID *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::themeManager @ 00199cc0 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::themeManager(ID param_1,SEL param_2)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::setThemeManager: @ 00199d54 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::setThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::viewDidLoad @ 0019a458 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDInfoPanelViewController::viewDidLoad((MDInfoPanelViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::viewWillAppear @ 0019a7b8 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::viewWillAppear(ID param_1,SEL param_2)

{
  MDTextKitUI::MDInfoPanelViewController::viewWillAppear((MDInfoPanelViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::closePopover: @ 0019a7e0 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::closePopover_(ID param_1,SEL param_2,ID param_3)

{
  
  if (*(ID *)(param_1 + closeButton) != 0) {
    setHidden_(*(ID *)(param_1 + closeButton),1);
    self = presentingViewController(param_1);
    dismissViewController_(self,param_1);
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0x19a86c);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::addTabViewItems: @ 0019aa5c =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::addTabViewItems_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDTabViewItem::typeMetadataAccessor();
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  MDTextKitUI::MDInfoPanelViewController::addTabViewItems
            ((MDInfoPanelViewController *)param_1,param_3);
  _swift_bridgeObjectRelease(param_3);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::styleObjectWithThemeManager: @ 0019b06c =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDInfoPanelViewController::_styleObject((MDInfoPanelViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::segmentedControlValueChanged: @ 0019b160 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::segmentedControlValueChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  
  self = *(ID *)(param_1 + tabView);
  if (self != 0) {
    IVar2 = indexOfSelectedItem(param_3);
    selectTabViewItemAtIndex_(self,IVar2);
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0x19b1e4);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::tabView:didSelectTabViewItem: @ 0019b1ec =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::tabView_didSelectTabViewItem_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_0019bf4c(param_4);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::toggleOptionMenu: @ 0019b434 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::toggleOptionMenu_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_0019b254(param_3);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::preferredContentSizeDidChangeForViewController: @ 0019b708 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::preferredContentSizeDidChangeForViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDInfoPanelViewController::preferredContentSizeDidChange
            ((MDInfoPanelViewController *)param_1,(NSViewController *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::popoverWillShow: @ 0019b934 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::popoverWillShow_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  MDTextKitUI::MDInfoPanelViewController::popoverWillShow
            ((MDInfoPanelViewController *)param_1,
             (Notification)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::popoverWillClose: @ 0019b9dc =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::popoverWillClose_
               (ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  FUN_0019c3c4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::popoverShouldDetach: @ 0019ba60 =====

bool _TtC11MDTextKitUI25MDInfoPanelViewController::popoverShouldDetach_
               (ID param_1,SEL param_2,ID param_3)

{
  return 1;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::popoverDidDetach: @ 0019ba84 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::popoverDidDetach_
               (ID param_1,SEL param_2,ID param_3)

{
  
  if (*(ID *)(param_1 + closeButton) != 0) {
    setHidden_(*(ID *)(param_1 + closeButton),0);
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0x19baa0);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::initWithNibName:bundle: @ 0019bba4 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDInfoPanelViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDInfoPanelViewController::_init((MDInfoPanelViewController *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::initWithCoder: @ 0019bcf0 =====

ID _TtC11MDTextKitUI25MDInfoPanelViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDInfoPanelViewController::_init
            ((MDInfoPanelViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI25MDInfoPanelViewController::.cxx_destruct @ 0019bd48 =====

void _TtC11MDTextKitUI25MDInfoPanelViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + tabViewItems));
  return;
}

