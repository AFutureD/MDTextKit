// ===== _TtC11MDTextKitUI21EditorMenusController::init @ 00103770 =====

ID _TtC11MDTextKitUI21EditorMenusController::init(ID param_1,SEL param_2)

{
  EditorMenusController *pEVar1;
  
  pEVar1 = MDTextKitUI::EditorMenusController::init((EditorMenusController *)param_1);
  return (ID)pEVar1;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::headersMenu @ 00103790 =====

ID _TtC11MDTextKitUI21EditorMenusController::headersMenu(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + headersMenu);
}

// ===== _TtC11MDTextKitUI21EditorMenusController::setHeadersMenu: @ 001037a0 =====

void _TtC11MDTextKitUI21EditorMenusController::setHeadersMenu_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + headersMenu) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::listsMenu @ 001037d4 =====

ID _TtC11MDTextKitUI21EditorMenusController::listsMenu(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + listsMenu);
}

// ===== _TtC11MDTextKitUI21EditorMenusController::setListsMenu: @ 001037e4 =====

void _TtC11MDTextKitUI21EditorMenusController::setListsMenu_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + listsMenu) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::tableMenu @ 00103818 =====

ID _TtC11MDTextKitUI21EditorMenusController::tableMenu(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + tableMenu);
}

// ===== _TtC11MDTextKitUI21EditorMenusController::setTableMenu: @ 00103828 =====

void _TtC11MDTextKitUI21EditorMenusController::setTableMenu_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + tableMenu) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::highlighterMenu @ 0010385c =====

ID _TtC11MDTextKitUI21EditorMenusController::highlighterMenu(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + highlighterMenu);
}

// ===== _TtC11MDTextKitUI21EditorMenusController::setHighlighterMenu: @ 0010386c =====

void _TtC11MDTextKitUI21EditorMenusController::setHighlighterMenu_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + highlighterMenu) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::calloutMenu @ 001038a0 =====

ID _TtC11MDTextKitUI21EditorMenusController::calloutMenu(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + calloutMenu);
}

// ===== _TtC11MDTextKitUI21EditorMenusController::setCalloutMenu: @ 001038b0 =====

void _TtC11MDTextKitUI21EditorMenusController::setCalloutMenu_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + calloutMenu) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::copyAsMenu @ 001038e4 =====

ID _TtC11MDTextKitUI21EditorMenusController::copyAsMenu(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + copyAsMenu);
}

// ===== _TtC11MDTextKitUI21EditorMenusController::setCopyAsMenu: @ 001038f4 =====

void _TtC11MDTextKitUI21EditorMenusController::setCopyAsMenu_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + copyAsMenu) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::pasteFromMenu @ 00103928 =====

ID _TtC11MDTextKitUI21EditorMenusController::pasteFromMenu(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + pasteFromMenu);
}

// ===== _TtC11MDTextKitUI21EditorMenusController::setPasteFromMenu: @ 00103938 =====

void _TtC11MDTextKitUI21EditorMenusController::setPasteFromMenu_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + pasteFromMenu) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::copyAsMenuItem @ 00103978 =====

ID _TtC11MDTextKitUI21EditorMenusController::copyAsMenuItem(ID param_1,SEL param_2)

{
  MDTextKitUI::EditorMenusController::_copyAsMenuItem((EditorMenusController *)param_1);
  return param_1;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::pasteFromMenuItem @ 00103b08 =====

ID _TtC11MDTextKitUI21EditorMenusController::pasteFromMenuItem(ID param_1,SEL param_2)

{
  MDTextKitUI::EditorMenusController::_pasteFromMenuItem((EditorMenusController *)param_1);
  return param_1;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::highlighterMenuCopy @ 00103b48 =====

ID _TtC11MDTextKitUI21EditorMenusController::highlighterMenuCopy(ID param_1,SEL param_2)

{
  MDTextKitUI::EditorMenusController::_highlighterMenuCopy((EditorMenusController *)param_1);
  return param_1;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::calloutMenuCopy @ 00103c10 =====

ID _TtC11MDTextKitUI21EditorMenusController::calloutMenuCopy(ID param_1,SEL param_2)

{
  MDTextKitUI::EditorMenusController::_calloutMenuCopy((EditorMenusController *)param_1);
  return param_1;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::headersMenuCopy @ 00103c50 =====

ID _TtC11MDTextKitUI21EditorMenusController::headersMenuCopy(ID param_1,SEL param_2)

{
  MDTextKitUI::EditorMenusController::_headersMenuCopy((EditorMenusController *)param_1);
  return param_1;
}

// ===== _TtC11MDTextKitUI21EditorMenusController::.cxx_destruct @ 00104644 =====

void _TtC11MDTextKitUI21EditorMenusController::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

