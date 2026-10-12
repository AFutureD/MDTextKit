// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView @ 000dc97c =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + tableView);
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::setTableView: @ 000dc98c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI28MDAutoCompleteViewController::setTableView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + tableView) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::dealloc @ 000dcd18 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI28MDAutoCompleteViewController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::MDAutoCompleteViewController::__deallocating_init
            ((MDAutoCompleteViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::.cxx_destruct @ 000dcd3c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI28MDAutoCompleteViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00027650(param_1 + delegate,&DAT_002383b0,&DAT_001c4dd0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + autoCompleteItems));
  return;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::viewDidLoad @ 000dd038 =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI28MDAutoCompleteViewController::viewDidLoad(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class =
       (class_t *)MDTextKitUI::MDAutoCompleteViewController::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLoad");
  return;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::tableViewDidDoubleClickRow: @ 000dd704 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI28MDAutoCompleteViewController::tableViewDidDoubleClickRow_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 auStack_40 [32];
  
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  MDTextKitUI::MDAutoCompleteViewController::_tableViewDidDoubleClickRow
            ((MDAutoCompleteViewController *)param_1);
  ___swift_destroy_boxed_opaque_existential_1(auStack_40);
  return;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::styleObjectWithThemeManager: @ 000ddb5c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI28MDAutoCompleteViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAutoCompleteViewController::_styleObject((MDAutoCompleteViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::numberOfRowsInTableView: @ 000de010 =====

/* Function Stack Size: 0x18 bytes */

long_long _TtC11MDTextKitUI28MDAutoCompleteViewController::numberOfRowsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  long_long lVar3;
  undefined *puVar4;
  undefined1 auStack_38 [24];
  
  lVar2 = autoCompleteItems;
  _swift_beginAccess(param_1 + autoCompleteItems,auStack_38,0,0);
  puVar4 = *(undefined **)(param_1 + lVar2);
  if ((ulong)puVar4 >> 0x3e == 0) {
    lVar3 = *(long_long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  return lVar3;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView:rowViewForRow: @ 000de07c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView_rowViewForRow_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  FUN_000df994();
  return param_3;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView:viewForTableColumn:row: @ 000de0e0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView_viewForTableColumn_row_
             (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  FUN_000dfaa4(param_3,param_5);
  return param_3;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView:shouldSelectRow: @ 000de230 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC11MDTextKitUI28MDAutoCompleteViewController::tableView_shouldSelectRow_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = autoCompleteItems;
  _swift_beginAccess(param_1 + autoCompleteItems,auStack_48,0,0);
  uVar4 = *(ulong *)(param_1 + lVar2);
  if ((uVar4 & 0xc000000000000001) == 0) {
    if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xde328);
      (*pcVar3)();
    }
    if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xde32c);
      (*pcVar3)();
    }
    param_4 = *(long_long *)(uVar4 + param_4 * 8 + 0x20);
    _swift_retain(param_4);
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    FUN_0000f9c4(param_4,uVar4);
    _swift_bridgeObjectRelease(uVar4);
  }
  _swift_beginAccess(param_4 + 0xe1,auStack_60,0,0);
  bVar1 = *(byte *)(param_4 + 0xe1);
  _swift_release(param_4);
  return (bVar1 ^ 0xffffffff) & 1;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::initWithNibName:bundle: @ 000de434 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI28MDAutoCompleteViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDAutoCompleteViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDAutoCompleteViewController::_init((MDAutoCompleteViewController *)param_1)
  ;
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI28MDAutoCompleteViewController::initWithCoder: @ 000de57c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI28MDAutoCompleteViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDAutoCompleteViewController::_init
            ((MDAutoCompleteViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}


