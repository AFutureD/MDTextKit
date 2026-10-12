// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::button @ 000f2234 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::button(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + button);
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setButton: @ 000f2244 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setButton_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + button) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::valueLabel @ 000f2278 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::valueLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + valueLabel);
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setValueLabel: @ 000f2288 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setValueLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + valueLabel) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::descriptionLabel @ 000f22bc =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::descriptionLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + descriptionLabel);
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setDescriptionLabel: @ 000f22cc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setDescriptionLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + descriptionLabel) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::iconImageView @ 000f2300 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::iconImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + iconImageView);
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setIconImageView: @ 000f2310 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::setIconImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + iconImageView) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::prepareForReuse @ 000f2344 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::prepareForReuse(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID self;
  objc_super local_30;
  
  pcVar1 = (class_t *)param_1;
  FUN_000f261c();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"prepareForReuse");
  self = objc_stub::view(param_1);
  objc_stub::setLayer_(self,0);
  return;
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::initWithNibName:bundle: @ 000f2470 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
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

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_000f24d0();
  return param_3;
}


// ===== _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::.cxx_destruct @ 000f25c4 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI32TextStatisticsCollectionViewItem::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


