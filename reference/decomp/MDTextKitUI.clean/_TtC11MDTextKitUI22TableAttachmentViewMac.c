// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::moreButton @ 00074cf0 =====

ID _TtC11MDTextKitUI22TableAttachmentViewMac::moreButton(ID param_1,SEL param_2)

{
  
  lVar1 = moreButton;
  _swift_beginAccess(param_1 + moreButton,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::setMoreButton: @ 00074d84 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::setMoreButton_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00063820();
  return;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::showTableMenu: @ 00074e7c =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::showTableMenu_(ID param_1,SEL param_2,ID param_3)

{
  FUN_0003c1d0();
  return;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::menuDidClose: @ 00074f10 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::menuDidClose_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar2 = param_1 + delegate;
  _swift_beginAccess(lVar2,auStack_68,0,0);
  lVar1 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    _swift_getObjectType();
    (**(code **)(lVar2 + 0x18))(param_1,param_3,lVar1,lVar2);
  }
  return;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::mouseDown: @ 00075190 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::TableAttachmentViewMac::mouseDown
            ((TableAttachmentViewMac *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::isFlipped @ 0007564c =====

bool _TtC11MDTextKitUI22TableAttachmentViewMac::isFlipped(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::acceptsFirstResponder @ 00075654 =====

bool _TtC11MDTextKitUI22TableAttachmentViewMac::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::canBecomeKeyView @ 0007565c =====

bool _TtC11MDTextKitUI22TableAttachmentViewMac::canBecomeKeyView(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::updateTrackingAreas @ 00075980 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::updateTrackingAreas(ID param_1,SEL param_2)

{
  MDTextKitUI::TableAttachmentViewMac::updateTrackingAreas((TableAttachmentViewMac *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::mouseMoved: @ 00075bb4 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::mouseMoved_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::TableAttachmentViewMac::mouseMoved
            ((TableAttachmentViewMac *)param_1,(NSEvent *)param_3);
  return;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::mouseEntered: @ 00075c80 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::mouseEntered_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = moreButton;
  _swift_beginAccess(param_1 + moreButton,auStack_48,0,0);
  if (*(ID *)(param_1 + lVar1) != 0) {
    setHidden_(*(ID *)(param_1 + lVar1),0);
    local_58.super_class = (class_t *)MDTextKitUI::TableAttachmentViewMac::typeMetadataAccessor();
    local_58.receiver = param_1;
    _objc_msgSendSuper2(&local_58,"mouseEntered:",param_3);
    return;
  }
  pcVar2 = (code *)SoftwareBreakpoint(1,0x75d2c);
  (*pcVar2)();
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::mouseExited: @ 00075da8 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = moreButton;
  _swift_beginAccess(param_1 + moreButton,auStack_48,0,0);
  if (*(ID *)(param_1 + lVar1) != 0) {
    setHidden_(*(ID *)(param_1 + lVar1),1);
    local_58.super_class = (class_t *)MDTextKitUI::TableAttachmentViewMac::typeMetadataAccessor();
    local_58.receiver = param_1;
    _objc_msgSendSuper2(&local_58,"mouseExited:",param_3);
    return;
  }
  pcVar2 = (code *)SoftwareBreakpoint(1,0x75e54);
  (*pcVar2)();
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::initWithCoder: @ 00075f20 =====

ID _TtC11MDTextKitUI22TableAttachmentViewMac::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::TableAttachmentViewMac::_init((TableAttachmentViewMac *)param_1,(NSCoder *)param_3);
  return param_3;
}

// ===== _TtC11MDTextKitUI22TableAttachmentViewMac::.cxx_destruct @ 00075fb4 =====

void _TtC11MDTextKitUI22TableAttachmentViewMac::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00016808(param_1 + delegate);
  FUN_00027650(param_1 + moreButtonIndexPath,&DAT_002352f0,&DAT_001c4120);
  return;
}

