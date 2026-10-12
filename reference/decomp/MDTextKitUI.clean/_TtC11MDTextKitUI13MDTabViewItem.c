// ===== _TtC11MDTextKitUI13MDTabViewItem::optionMenu @ 0009ca1c =====

ID _TtC11MDTextKitUI13MDTabViewItem::optionMenu(ID param_1,SEL param_2)

{
  
  lVar1 = optionMenu;
  _swift_beginAccess(param_1 + optionMenu,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI13MDTabViewItem::setOptionMenu: @ 0009cab0 =====

void _TtC11MDTextKitUI13MDTabViewItem::setOptionMenu_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = optionMenu;
  _swift_beginAccess(param_1 + optionMenu,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI13MDTabViewItem::initWith:icon:title: @ 0009cc5c =====

ID _TtC11MDTextKitUI13MDTabViewItem::initWith_icon_title_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_0009d0e8(param_3,param_4,SVar1.str,SVar1.bridgeObject);
  return param_3;
}

// ===== _TtC11MDTextKitUI13MDTabViewItem::initWithIdentifier: @ 0009cec8 =====

ID _TtC11MDTextKitUI13MDTabViewItem::initWithIdentifier_(ID param_1,SEL param_2,ID param_3)

{
  MDTabViewItem *pMVar1;
  
  if (param_3 != 0) {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  pMVar1 = MDTextKitUI::MDTabViewItem::_init((MDTabViewItem *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI13MDTabViewItem::init @ 0009cf5c =====

ID _TtC11MDTextKitUI13MDTabViewItem::init(ID param_1,SEL param_2)

{
  
  *(undefined8 *)(param_1 + optionMenu) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::MDTabViewItem::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}

// ===== _TtC11MDTextKitUI13MDTabViewItem::initWithCoder: @ 0009d01c =====

ID _TtC11MDTextKitUI13MDTabViewItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + optionMenu) = 0;
  local_40.super_class = (class_t *)MDTextKitUI::MDTabViewItem::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

// ===== _TtC11MDTextKitUI13MDTabViewItem::.cxx_destruct @ 0009d0d8 =====

void _TtC11MDTextKitUI13MDTabViewItem::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

