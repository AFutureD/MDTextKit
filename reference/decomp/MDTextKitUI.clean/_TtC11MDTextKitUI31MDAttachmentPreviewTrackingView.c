// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::trackingAreaOwner @ 000feffc =====

ID _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::trackingAreaOwner(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + trackingAreaOwner;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::setTrackingAreaOwner: @ 000ff01c =====

void _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::setTrackingAreaOwner_
               (ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = trackingAreaOwner;
  _swift_unknownObjectWeakAssign(param_1 + trackingAreaOwner,param_3);
  lVar1 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_000ff0b8(0);
    return;
  }
  return;
}

// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::canBecomeKeyView @ 000ff0a8 =====

bool _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::canBecomeKeyView(ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::acceptsFirstResponder @ 000ff0b0 =====

bool _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::acceptsFirstResponder
               (ID param_1,SEL param_2)

{
  return 1;
}

// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::updateTrackingAreas @ 000ff344 =====

void _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::updateTrackingAreas(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_000ff560();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"updateTrackingAreas");
  FUN_000ff0b8();
  return;
}

// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::initWithFrame: @ 000ff3a0 =====

ID _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + fullHoverTrackingArea) = 0;
  pcVar1 = (class_t *)(param_1 + trackingAreaOwner);
  _swift_unknownObjectWeakInit
            (pcVar1,0,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  FUN_000ff560();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::initWithCoder: @ 000ff42c =====

ID _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + fullHoverTrackingArea) = 0;
  pcVar1 = (class_t *)(param_1 + trackingAreaOwner);
  _swift_unknownObjectWeakInit(pcVar1,0);
  FUN_000ff560();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::.cxx_destruct @ 000ff528 =====

void _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + trackingAreaOwner);
  return;
}

