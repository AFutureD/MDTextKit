// ===== _TtC11MDTextKitUI21HoverTrackingViewItem::hoverTrackingAreaOwner @ 000e3340 =====

ID _TtC11MDTextKitUI21HoverTrackingViewItem::hoverTrackingAreaOwner(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + hoverTrackingAreaOwner;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI21HoverTrackingViewItem::setHoverTrackingAreaOwner: @ 000e3360 =====

void _TtC11MDTextKitUI21HoverTrackingViewItem::setHoverTrackingAreaOwner_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + hoverTrackingAreaOwner,param_3);
  return;
}

// ===== _TtC11MDTextKitUI21HoverTrackingViewItem::updateTrackingAreas @ 000e3434 =====

void _TtC11MDTextKitUI21HoverTrackingViewItem::updateTrackingAreas(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_000e4598();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"updateTrackingAreas");
  FUN_000e3374();
  return;
}

// ===== _TtC11MDTextKitUI21HoverTrackingViewItem::initWithFrame: @ 000e3490 =====

ID _TtC11MDTextKitUI21HoverTrackingViewItem::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + hoverTrackingArea) = 0;
  pcVar1 = (class_t *)(param_1 + hoverTrackingAreaOwner);
  _swift_unknownObjectWeakInit
            (pcVar1,0,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  FUN_000e4598();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_50,"initWithFrame:");
  return IVar2;
}

// ===== _TtC11MDTextKitUI21HoverTrackingViewItem::initWithCoder: @ 000e351c =====

ID _TtC11MDTextKitUI21HoverTrackingViewItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  
  *(undefined8 *)(param_1 + hoverTrackingArea) = 0;
  pcVar1 = (class_t *)(param_1 + hoverTrackingAreaOwner);
  _swift_unknownObjectWeakInit(pcVar1,0);
  FUN_000e4598();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar2;
}

// ===== _TtC11MDTextKitUI21HoverTrackingViewItem::.cxx_destruct @ 000e35c8 =====

void _TtC11MDTextKitUI21HoverTrackingViewItem::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + hoverTrackingAreaOwner);
  return;
}

