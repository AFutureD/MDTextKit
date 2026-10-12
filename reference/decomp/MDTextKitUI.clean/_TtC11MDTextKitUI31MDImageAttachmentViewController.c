// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::viewController @ 0010509c =====

ID _TtC11MDTextKitUI31MDImageAttachmentViewController::viewController(ID param_1,SEL param_2)

{
  FUN_00107e9c();
  return param_1;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::clickGesture @ 001050b0 =====

ID _TtC11MDTextKitUI31MDImageAttachmentViewController::clickGesture(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + clickGesture;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::setClickGesture: @ 001050d0 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::setClickGesture_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + clickGesture,param_3);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::gestureRecognizerShouldBegin: @ 00105344 =====

bool _TtC11MDTextKitUI31MDImageAttachmentViewController::gestureRecognizerShouldBegin_
               (ID param_1,SEL param_2,ID param_3)

{
  
  bVar1 = MDTextKitUI::MDImageAttachmentViewController::gestureRecognizerShouldBegin
                    ((MDImageAttachmentViewController *)param_1,(NSGestureRecognizer *)param_3);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::viewDidLoad @ 00105548 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDImageAttachmentViewController::viewDidLoad
            ((MDImageAttachmentViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::viewWillAppear @ 00105584 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::viewWillAppear(ID param_1,SEL param_2)

{
  FUN_0010560c(param_1,param_2,&PTR_s_viewWillAppear_0021ca08,FUN_00019980);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::viewWillDisappear @ 001055f8 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::viewWillDisappear(ID param_1,SEL param_2)

{
  FUN_0010560c(param_1,param_2,&PTR_s_viewWillDisappear_0021ca18,FUN_00019ce4);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::dealloc @ 00105760 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::dealloc(ID param_1,SEL param_2)

{
  String SVar2;
  String SVar3;
  
  local_40 = (char *)0x2074696e696564;
  pvStack_38 = (void *)0xe700000000000000;
  func_0x001bfa84();
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar3.bridgeObject = in_x3;
  SVar3.str = in_x2;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  pvVar1 = pvStack_38;
  SVar2.bridgeObject = pvStack_38;
  SVar2.str = local_40;
  Foundation::_NSLog(SVar2);
  _swift_bridgeObjectRelease(pvVar1);
  local_50.super_class =
       (class_t *)MDTextKitUI::MDImageAttachmentViewController::typeMetadataAccessor();
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"dealloc");
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::.cxx_destruct @ 0010581c =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + clickGesture);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::contextualMenuItems @ 00105d78 =====

ID _TtC11MDTextKitUI31MDImageAttachmentViewController::contextualMenuItems(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  MDTextKitUI::MDImageAttachmentViewController::contextualMenuItems
            ((MDImageAttachmentViewController *)param_1);
  FUN_00006084(0,&DAT_002346d0,&PTR__OBJC_CLASS___NSMenuItem_002211d0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::styleObjectWithThemeManager: @ 00106144 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDImageAttachmentViewController::_styleObject
            ((MDImageAttachmentViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::copyImage: @ 00106198 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::copyImage_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_00107fdc(param_1);
  _swift_unknownObjectRelease(param_3);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::handleClickGesture: @ 001061dc =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::handleClickGesture_
               (ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::imageView;
  self = param_1 + _TtC11MDTextKitUI35MDImageAttachmentCoreViewController::imageView;
  _swift_unknownObjectWeakLoadStrong();
  if (self == 0) {
    pcVar2 = (code *)SoftwareBreakpoint(1,0x106288);
    (*pcVar2)();
  }
  IVar3 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar3 != 0) {
    IVar3 = animates(IVar3);
    setAnimates_(self,(ulong)((uint)IVar3 ^ 1));
    return;
  }
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10628c);
  (*pcVar2)();
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::mouseEntered: @ 00106630 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::mouseEntered_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDImageAttachmentViewController::mouseEntered
            ((MDImageAttachmentViewController *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::mouseExited: @ 001068e8 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::mouseExited_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDImageAttachmentViewController::mouseExited
            ((MDImageAttachmentViewController *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::mouseMoved: @ 00106984 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::mouseMoved_
               (ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class =
       (class_t *)MDTextKitUI::MDImageAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"mouseMoved:",param_3);
  FUN_000bef94(param_3);
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::setHighlighted:active: @ 00106ab4 =====

void _TtC11MDTextKitUI31MDImageAttachmentViewController::setHighlighted_active_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  MDTextKitUI::MDImageAttachmentViewController::setHighlighted
            ((MDImageAttachmentViewController *)param_1,SUB41(param_3,0),SUB41(param_4,0));
  return;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::initWithNibName:bundle: @ 00106bac =====

ID _TtC11MDTextKitUI31MDImageAttachmentViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  String SVar3;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + liveTextController) = 0;
    _swift_unknownObjectWeakInit(param_1 + clickGesture,0);
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(undefined8 *)(param_1 + liveTextController) = 0;
    _swift_unknownObjectWeakInit(param_1 + clickGesture,0);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class =
       (class_t *)MDTextKitUI::MDImageAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}

// ===== _TtC11MDTextKitUI31MDImageAttachmentViewController::initWithCoder: @ 00106d2c =====

ID _TtC11MDTextKitUI31MDImageAttachmentViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  
  *(undefined8 *)(param_1 + liveTextController) = 0;
  _swift_unknownObjectWeakInit(param_1 + clickGesture,0);
  local_40.super_class =
       (class_t *)MDTextKitUI::MDImageAttachmentViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}

