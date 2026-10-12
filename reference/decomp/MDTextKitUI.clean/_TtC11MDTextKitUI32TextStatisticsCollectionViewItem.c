// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::button @ 000f2234 =====

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::button(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + button);
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setButton: @ 000f2244 =====

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setButton_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + button) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::valueLabel @ 000f2278 =====

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::valueLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + valueLabel);
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setValueLabel: @ 000f2288 =====

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setValueLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + valueLabel) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::descriptionLabel @ 000f22bc =====

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::descriptionLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + descriptionLabel);
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setDescriptionLabel: @ 000f22cc =====

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setDescriptionLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + descriptionLabel) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::iconImageView @ 000f2300 =====

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::iconImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + iconImageView);
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setIconImageView: @ 000f2310 =====

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setIconImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + iconImageView) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::prepareForReuse @ 000f2344 =====

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::prepareForReuse(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_000f261c();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"prepareForReuse");
  self = view(param_1);
  setLayer_(self,0);
  return;
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::initWithNibName:bundle: @ 000f2470 =====

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_000f23bc(pcVar1,SVar2.bridgeObject,param_4);
  return (ID)pcVar1;
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::initWithCoder: @ 000f256c =====

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_000f24d0();
  return param_3;
}

// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::.cxx_destruct @ 000f25c4 =====

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

