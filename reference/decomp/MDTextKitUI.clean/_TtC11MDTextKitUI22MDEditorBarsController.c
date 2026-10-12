// ===== _TtC11MDTextKitUI22MDEditorBarsController::hostingView @ 000f2c14 =====

ID _TtC11MDTextKitUI22MDEditorBarsController::hostingView(ID param_1,SEL param_2)

{
  
  lVar1 = hostingView;
  _swift_beginAccess(param_1 + hostingView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::setHostingView: @ 000f2ca8 =====

void _TtC11MDTextKitUI22MDEditorBarsController::setHostingView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::textView @ 000f2d48 =====

ID _TtC11MDTextKitUI22MDEditorBarsController::textView(ID param_1,SEL param_2)

{
  
  lVar1 = textView;
  _swift_beginAccess(param_1 + textView,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::setTextView: @ 000f2ddc =====

void _TtC11MDTextKitUI22MDEditorBarsController::setTextView_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::themeManager @ 000f2e7c =====

ID _TtC11MDTextKitUI22MDEditorBarsController::themeManager(ID param_1,SEL param_2)

{
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::setThemeManager: @ 000f2f10 =====

void _TtC11MDTextKitUI22MDEditorBarsController::setThemeManager_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::wordCountViewController @ 000f2fb0 =====

ID _TtC11MDTextKitUI22MDEditorBarsController::wordCountViewController(ID param_1,SEL param_2)

{
  
  lVar1 = wordCountViewController;
  _swift_beginAccess(param_1 + wordCountViewController,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::setWordCountViewController: @ 000f3044 =====

void _TtC11MDTextKitUI22MDEditorBarsController::setWordCountViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::styleBarViewController @ 000f30e4 =====

ID _TtC11MDTextKitUI22MDEditorBarsController::styleBarViewController(ID param_1,SEL param_2)

{
  
  lVar1 = styleBarViewController;
  _swift_beginAccess(param_1 + styleBarViewController,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::setStyleBarViewController: @ 000f3178 =====

void _TtC11MDTextKitUI22MDEditorBarsController::setStyleBarViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::isStatsBarVisible @ 000f3430 =====

bool _TtC11MDTextKitUI22MDEditorBarsController::isStatsBarVisible(ID param_1,SEL param_2)

{
  
  lVar1 = wordCountViewController;
  _swift_beginAccess(param_1 + wordCountViewController,auStack_38,0,0);
  return (bool)(*(long *)(param_1 + lVar1) != 0);
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::toggleStatsBarWithAnimated: @ 000f3504 =====

void _TtC11MDTextKitUI22MDEditorBarsController::toggleStatsBarWithAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::MDEditorBarsController::toggleStatsBar
            ((MDEditorBarsController *)param_1,SUB41(param_3,0));
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::showStatsBarWithAnimated: @ 000f3740 =====

void _TtC11MDTextKitUI22MDEditorBarsController::showStatsBarWithAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::MDEditorBarsController::showStatsBar
            ((MDEditorBarsController *)param_1,SUB41(param_3,0));
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::hideStatsBarWithAnimated: @ 000f37f0 =====

void _TtC11MDTextKitUI22MDEditorBarsController::hideStatsBarWithAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = wordCountViewController;
  _swift_beginAccess(param_1 + wordCountViewController,auStack_58,1,0);
  IVar3 = *(ID *)(param_1 + lVar1);
  if (IVar3 != 0) {
    IVar3 = view(IVar3);
    FUN_000f4190(IVar3,param_3);
    *(undefined8 *)(param_1 + lVar1) = 0;
    return;
  }
  pcVar2 = (code *)SoftwareBreakpoint(1,0xf389c);
  (*pcVar2)();
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::isStyleBarVisible @ 000f38e4 =====

bool _TtC11MDTextKitUI22MDEditorBarsController::isStyleBarVisible(ID param_1,SEL param_2)

{
  
  lVar1 = styleBarViewController;
  _swift_beginAccess(param_1 + styleBarViewController,auStack_38,0,0);
  return (bool)(*(long *)(param_1 + lVar1) != 0);
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::toggleStyleBarWithAnimated: @ 000f3a18 =====

void _TtC11MDTextKitUI22MDEditorBarsController::toggleStyleBarWithAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::MDEditorBarsController::toggleStyleBar
            ((MDEditorBarsController *)param_1,SUB41(param_3,0));
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::showStyleBarWithAnimated: @ 000f3c4c =====

void _TtC11MDTextKitUI22MDEditorBarsController::showStyleBarWithAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::MDEditorBarsController::showStyleBar
            ((MDEditorBarsController *)param_1,SUB41(param_3,0));
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::hideStyleBarWithAnimated: @ 000f3d58 =====

void _TtC11MDTextKitUI22MDEditorBarsController::hideStyleBarWithAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  MDTextKitUI::MDEditorBarsController::hideStyleBar
            ((MDEditorBarsController *)param_1,SUB41(param_3,0));
  return;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::init @ 000f4e98 =====

ID _TtC11MDTextKitUI22MDEditorBarsController::init(ID param_1,SEL param_2)

{
  MDEditorBarsController *pMVar1;
  
  pMVar1 = MDTextKitUI::MDEditorBarsController::init((MDEditorBarsController *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI22MDEditorBarsController::.cxx_destruct @ 000f4ee8 =====

void _TtC11MDTextKitUI22MDEditorBarsController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + bottomConstraintIdentifier + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + StyleBarVisibleKey + 8));
  return;
}

