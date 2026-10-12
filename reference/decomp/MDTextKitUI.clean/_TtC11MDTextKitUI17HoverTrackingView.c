// ===== _TtC11MDTextKitUI17HoverTrackingView::hoverTrackingAreaOwner @ 0000b65c =====

ID _TtC11MDTextKitUI17HoverTrackingView::hoverTrackingAreaOwner(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + hoverTrackingAreaOwner;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI17HoverTrackingView::setHoverTrackingAreaOwner: @ 0000b67c =====

void _TtC11MDTextKitUI17HoverTrackingView::setHoverTrackingAreaOwner_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + hoverTrackingAreaOwner,param_3);
  return;
}

// ===== _TtC11MDTextKitUI17HoverTrackingView::updateTrackingAreas @ 0000b750 =====

void _TtC11MDTextKitUI17HoverTrackingView::updateTrackingAreas(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_0000bff0();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"updateTrackingAreas");
  FUN_0000b690();
  return;
}

// ===== _TtC11MDTextKitUI17HoverTrackingView::initWithFrame: @ 0000b7ac =====

ID _TtC11MDTextKitUI17HoverTrackingView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + hoverTrackingArea) = 0;
  pcVar1 = (class_t *)(param_1 + hoverTrackingAreaOwner);
  _swift_unknownObjectWeakInit
            (pcVar1,0,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  FUN_0000bff0();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI17HoverTrackingView::initWithCoder: @ 0000b838 =====

ID _TtC11MDTextKitUI17HoverTrackingView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + hoverTrackingArea) = 0;
  pcVar1 = (class_t *)(param_1 + hoverTrackingAreaOwner);
  _swift_unknownObjectWeakInit(pcVar1,0);
  FUN_0000bff0();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

// ===== _TtC11MDTextKitUI17HoverTrackingView::.cxx_destruct @ 0000b8e4 =====

void _TtC11MDTextKitUI17HoverTrackingView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + hoverTrackingAreaOwner);
  return;
}

