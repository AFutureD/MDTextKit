// ===== _TtC11MDTextKitUI24MDMathCoreViewController::imageView @ 0009e7ec =====

ID _TtC11MDTextKitUI24MDMathCoreViewController::imageView(ID param_1,SEL param_2)

{
  
  IVar1 = param_1 + imageView;
  _swift_unknownObjectWeakLoadStrong();
  return IVar1;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::setImageView: @ 0009e80c =====

void _TtC11MDTextKitUI24MDMathCoreViewController::setImageView_(ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectWeakAssign(param_1 + imageView,param_3);
  return;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::renderAsPDF @ 0009e848 =====

bool _TtC11MDTextKitUI24MDMathCoreViewController::renderAsPDF(ID param_1,SEL param_2)

{
  
  lVar1 = renderAsPDF;
  _swift_beginAccess(param_1 + renderAsPDF,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::setRenderAsPDF: @ 0009e88c =====

void _TtC11MDTextKitUI24MDMathCoreViewController::setRenderAsPDF_
               (ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = renderAsPDF;
  _swift_beginAccess(param_1 + renderAsPDF,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::dealloc @ 0009ea90 =====

void _TtC11MDTextKitUI24MDMathCoreViewController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::MDMathCoreViewController::__deallocating_init((MDMathCoreViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::.cxx_destruct @ 0009eab4 =====

void _TtC11MDTextKitUI24MDMathCoreViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + imageView);
  return;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::viewDidLoad @ 0009eb8c =====

void _TtC11MDTextKitUI24MDMathCoreViewController::viewDidLoad(ID param_1,SEL param_2)

{
  
  local_40.super_class = (class_t *)MDTextKitUI::MDMathCoreViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"viewDidLoad");
  lVar1 = ::_TtC11MDTextKitUI30MDAttachmentCoreViewController::themeManager;
  _swift_beginAccess(param_1 + ::_TtC11MDTextKitUI30MDAttachmentCoreViewController::themeManager,
                     auStack_58,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
  (**(code **)((*(ulong *)PTR__swift_isaMask_0020e4b8 & *(ulong *)param_1) + 0x1c0))();
  FUN_0009def0(0);
  return;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::observeValueForKeyPath:ofObject:change:context: @ 0009ecbc =====

void _TtC11MDTextKitUI24MDMathCoreViewController::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  Dictionary<undefined,undefined> DVar2;
  SEL pcVar4;
  String SVar5;
  
  if (param_3 == 0) {
    pcVar4 = (SEL)0x0;
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar4 = SVar5.bridgeObject;
    param_2 = pcVar4;
  }
  if (param_4 == 0) {
  }
  else {
    _swift_unknownObjectRetain(param_4,param_2);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  if (param_5 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    FUN_00006178(0);
    FUN_00005b98(&DAT_00234198,FUN_00006178,&TargetProtocolConformanceDescriptor_001c3038);
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  lVar3 = ::_TtC11MDTextKitUI30MDAttachmentCoreViewController::themeManager;
  _swift_beginAccess(param_1 + ::_TtC11MDTextKitUI30MDAttachmentCoreViewController::themeManager,
                     auStack_68,0,0);
  lVar3 = param_1 + lVar3;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_0020e4b8 & *(ulong *)param_1) + 0x1c0))();
    _swift_bridgeObjectRelease(pcVar4);
    _swift_bridgeObjectRelease(DVar2.unknown);
    FUN_00007078(&local_50);
    return;
  }
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9ee28);
  (*pcVar1)();
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::styleObjectWithThemeManager: @ 0009efc4 =====

void _TtC11MDTextKitUI24MDMathCoreViewController::styleObjectWithThemeManager_
               (ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDMathCoreViewController::_styleObject((MDMathCoreViewController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::viewSnapshotWithSelected:selectionActive:highlighted:highlightActive: @ 0009f018 =====

ID _TtC11MDTextKitUI24MDMathCoreViewController::
   viewSnapshotWithSelected_selectionActive_highlighted_highlightActive_
             (ID param_1,SEL param_2,bool param_3,bool param_4,bool param_5,bool param_6)

{
  
  IVar1 = (ID)param_3;
  MDTextKitUI::MDMathCoreViewController::_viewSnapshot
            ((MDMathCoreViewController *)param_1,SUB41(param_3,0),SUB41(param_4,0),SUB41(param_5,0),
             SUB41(param_6,0));
  return IVar1;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::initWithNibName:bundle: @ 0009f14c =====

ID _TtC11MDTextKitUI24MDMathCoreViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDMathCoreViewController *pMVar1;
  
  if (param_3 != 0) {
    (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pMVar1 = MDTextKitUI::MDMathCoreViewController::_init((MDMathCoreViewController *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI24MDMathCoreViewController::initWithCoder: @ 0009f254 =====

ID _TtC11MDTextKitUI24MDMathCoreViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDMathCoreViewController::_init
            ((MDMathCoreViewController *)param_1,(NSCoder *)param_3);
  return param_3;
}

