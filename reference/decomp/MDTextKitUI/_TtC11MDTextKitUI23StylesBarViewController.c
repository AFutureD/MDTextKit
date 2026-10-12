// ===== _TtC11MDTextKitUI23StylesBarViewController::themeManager @ 000e002c =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23StylesBarViewController::themeManager(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::setThemeManager: @ 000e00c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::setThemeManager_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = themeManager;
  _swift_beginAccess(param_1 + themeManager,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::collectionView @ 000e01b8 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23StylesBarViewController::collectionView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + collectionView);
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::setCollectionView: @ 000e01c8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::setCollectionView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + collectionView) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::moreButton @ 000e01fc =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23StylesBarViewController::moreButton(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + moreButton);
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::setMoreButton: @ 000e020c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::setMoreButton_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + moreButton) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::stylesBarViewController @ 000e0394 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI23StylesBarViewController::stylesBarViewController(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  MDTextKitUI::StylesBarViewController::_stylesBarViewController((StylesBarViewController *)param_1)
  ;
  return (ID)(StylesBarViewController *)param_1;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::viewDidLoad @ 000e043c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::StylesBarViewController::viewDidLoad((StylesBarViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::dealloc @ 000e056c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::StylesBarViewController::__deallocating_init((StylesBarViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::.cxx_destruct @ 000e0590 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + styleBarItems));
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::styleObjectWithThemeManager: @ 000e0d2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_000e3e48(param_1);
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::collectionView:numberOfItemsInSection: @ 000e0f04 =====

/* Function Stack Size: 0x20 bytes */

long_long _TtC11MDTextKitUI23StylesBarViewController::collectionView_numberOfItemsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  return *(long_long *)(*(long *)(param_1 + styleBarItems) + 0x10);
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::collectionView:itemForRepresentedObjectAtIndexPath: @ 000e145c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI23StylesBarViewController::collectionView_itemForRepresentedObjectAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  IndexPath IVar1;
  NSCollectionViewItem *pNVar2;
  long extraout_x8;
  long lVar3;
  
  IVar1 = Foundation::IndexPath::typeMetadataAccessor();
  lVar3 = *(long *)(IVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar3 + 0x40));
  Foundation::IndexPath::__unconditionallyBridgeFromObjectiveC((IndexPath)param_4);
  pNVar2 = MDTextKitUI::StylesBarViewController::collectionView
                     ((StylesBarViewController *)param_1,(NSCollectionView *)param_3,
                      (IndexPath)
                      (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar1.unknown);
  return (ID)pNVar2;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::collectionView:layout:sizeForItemAtIndexPath: @ 000e152c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

CGSize _TtC11MDTextKitUI23StylesBarViewController::collectionView_layout_sizeForItemAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  IndexPath IVar1;
  long extraout_x8;
  long lVar2;
  double in_d0;
  double in_d1;
  CGSize CVar3;
  
  IVar1 = Foundation::IndexPath::typeMetadataAccessor();
  lVar2 = *(long *)(IVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::IndexPath::__unconditionallyBridgeFromObjectiveC((IndexPath)param_5);
  FUN_000e3fc0(param_3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar1.unknown);
  CVar3.field1_0x8 = in_d1;
  CVar3.field0_0x0 = in_d0;
  return CVar3;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::menuNeedsUpdate: @ 000e30f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI23StylesBarViewController::menuNeedsUpdate_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::StylesBarViewController::menuNeedsUpdate
            ((StylesBarViewController *)param_1,(NSMenu *)param_3);
  return;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::initWithNibName:bundle: @ 000e323c =====

/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI23StylesBarViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_000e3bb0();
  return param_1;
}


// ===== _TtC11MDTextKitUI23StylesBarViewController::initWithCoder: @ 000e3318 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI23StylesBarViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::StylesBarViewController::_init((StylesBarViewController *)param_1,(NSCoder *)param_3)
  ;
  return param_3;
}


