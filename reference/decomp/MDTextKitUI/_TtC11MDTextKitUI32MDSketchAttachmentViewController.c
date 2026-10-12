// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::viewController @ 0010bc50 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI32MDSketchAttachmentViewController::viewController(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  FUN_0010bb14();
  return param_1;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::newSketchFileFromData: @ 0010c074 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI32MDSketchAttachmentViewController::newSketchFileFromData_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  Data DVar2;
  URL UVar3;
  MDSketchAttachmentViewController *pMVar4;
  NSURL *pNVar5;
  undefined *puVar6;
  long extraout_x8;
  MDSketchAttachmentViewController *this;
  long lVar7;
  
  puVar1 = &DAT_002351a8;
  puVar6 = &DAT_001c4060;
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_002351a8,&DAT_001c4060);
  (*(code *)PTR____chkstk_darwin_0020d728)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  this = (MDSketchAttachmentViewController *)(&stack0xffffffffffffffd0 + -extraout_x8);
  DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_3);
  MDTextKitUI::MDSketchAttachmentViewController::_newSketchFileFromData(this,DVar2);
  FUN_00016a30(DVar2.unknown,puVar6);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar3.unknown + -8);
  pMVar4 = this;
  (**(code **)(lVar7 + 0x30))(this,1,UVar3.unknown);
  pNVar5 = (NSURL *)0x0;
  if ((int)pMVar4 != 1) {
    pNVar5 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
    (**(code **)(lVar7 + 8))(this,UVar3.unknown);
  }
  return (ID)pNVar5;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::previewImageView @ 0010c168 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI32MDSketchAttachmentViewController::previewImageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + previewImageView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::setPreviewImageView: @ 0010c188 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI32MDSketchAttachmentViewController::setPreviewImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + previewImageView,param_3);
  return;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::backgroundView @ 0010c19c =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI32MDSketchAttachmentViewController::backgroundView(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1 + backgroundView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::setBackgroundView: @ 0010c1bc =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI32MDSketchAttachmentViewController::setBackgroundView_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + backgroundView,param_3);
  return;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::viewDidLoad @ 0010c400 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI32MDSketchAttachmentViewController::viewDidLoad(ID param_1,SEL param_2)

{
  MDTextKitUI::MDSketchAttachmentViewController::viewDidLoad
            ((MDSketchAttachmentViewController *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::reloadTextAttachment @ 0010c598 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI32MDSketchAttachmentViewController::reloadTextAttachment
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0020ab08;
  _swift_allocObject(&DAT_0020ab08,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  _swift_retain(puVar1);
  FUN_0010ca74(thunk_FUN_0010d780,puVar1);
  _swift_release_n(puVar1,2);
  return;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::styleObjectWithThemeManager: @ 0010d384 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI32MDSketchAttachmentViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_0010d788(param_1);
  return;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::initWithNibName:bundle: @ 0010d4c8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI32MDSketchAttachmentViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDSketchAttachmentViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDSketchAttachmentViewController::_init
                     ((MDSketchAttachmentViewController *)param_1);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::initWithCoder: @ 0010d5fc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI32MDSketchAttachmentViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDSketchAttachmentViewController::_init
            ((MDSketchAttachmentViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI32MDSketchAttachmentViewController::.cxx_destruct @ 0010d6b8 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI32MDSketchAttachmentViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  
  _swift_unknownObjectWeakDestroy(param_1 + previewImageView);
  _swift_unknownObjectWeakDestroy(param_1 + backgroundView);
  puVar1 = (undefined8 *)(param_1 + canvasSaveData);
  FUN_0010d8ac(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],
               *(undefined1 *)(puVar1 + 7));
  return;
}


