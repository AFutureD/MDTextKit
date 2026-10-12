// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::button @ 000f626c =====

ID _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::button(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + button);
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setButton: @ 000f627c =====

void _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setButton_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + button) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::valueLabel @ 000f62b0 =====

ID _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::valueLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + valueLabel);
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setValueLabel: @ 000f62c0 =====

void _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setValueLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + valueLabel) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::descriptionLabel @ 000f62f4 =====

ID _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::descriptionLabel
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + descriptionLabel);
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setDescriptionLabel: @ 000f6304 =====

void _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setDescriptionLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + descriptionLabel) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::iconImageView @ 000f6338 =====

ID _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::iconImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + iconImageView);
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setIconImageView: @ 000f6348 =====

void _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::setIconImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + iconImageView) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::prepareForReuse @ 000f637c =====

void _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::prepareForReuse
               (ID param_1,SEL param_2)

{
  class_t *pcVar1;
  
  pcVar1 = (class_t *)param_1;
  FUN_000f6654();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"prepareForReuse");
  self = view(param_1);
  setLayer_(self,0);
  return;
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::initWithNibName:bundle: @ 000f64a8 =====

ID _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::initWithNibName_bundle_
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
  FUN_000f63f4(pcVar1,SVar2.bridgeObject,param_4);
  return (ID)pcVar1;
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::initWithCoder: @ 000f65a4 =====

ID _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_000f6508();
  return param_3;
}

// ===== _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::.cxx_destruct @ 000f65fc =====

void _TtC11MDTextKitUI37TextStatisticsLargeCollectionViewItem::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

