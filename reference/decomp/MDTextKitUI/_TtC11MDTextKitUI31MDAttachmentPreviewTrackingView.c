// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::trackingAreaOwner @ 000feffc =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::trackingAreaOwner(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + trackingAreaOwner;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::setTrackingAreaOwner: @ 000ff01c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::setTrackingAreaOwner_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  
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

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::canBecomeKeyView(ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::acceptsFirstResponder @ 000ff0b0 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::acceptsFirstResponder
               (ID param_1,SEL param_2)

{
  return 1;
}


// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::updateTrackingAreas @ 000ff344 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::updateTrackingAreas(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  objc_super local_30;
  
  pcVar1 = (class_t *)param_1;
  FUN_000ff560();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"updateTrackingAreas");
  FUN_000ff0b8();
  return;
}


// ===== _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::initWithFrame: @ 000ff3a0 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
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

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
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

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI31MDAttachmentPreviewTrackingView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + trackingAreaOwner);
  return;
}


