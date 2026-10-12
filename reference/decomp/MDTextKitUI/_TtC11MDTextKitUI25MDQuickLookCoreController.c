// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::delegate @ 00033c00 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI25MDQuickLookCoreController::delegate(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = delegate;
  _swift_beginAccess(param_1 + delegate,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::setDelegate: @ 00033c48 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI25MDQuickLookCoreController::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = delegate;
  _swift_beginAccess(param_1 + delegate,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::initWith: @ 00033d48 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI25MDQuickLookCoreController::initWith_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_58 [24];
  objc_super local_40;
  
  _swift_unknownObjectWeakInit(param_1 + delegate,0);
  _swift_unknownObjectWeakInit(param_1 + textView,0);
  local_40.super_class = (class_t *)MDTextKitUI::MDQuickLookCoreController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"init");
  lVar1 = textView;
  _swift_beginAccess(IVar2 + textView,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(IVar2 + lVar1,param_3);
  return IVar2;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::indexFor: @ 00033f3c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long _TtC11MDTextKitUI25MDQuickLookCoreController::indexFor_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
  lVar1 = MDTextKitUI::MDQuickLookCoreController::index
                    ((MDQuickLookCoreController *)param_1,(SFTextAttachment *)param_3);
  return lVar1;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::fileAttachmentAt: @ 00034044 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI25MDQuickLookCoreController::fileAttachmentAt_
             (ID param_1,SEL param_2,long_long param_3)

{
  MDTextKitUI::MDQuickLookCoreController::_fileAttachment
            ((MDQuickLookCoreController *)param_1,param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::numberOfFileAttachments @ 000340cc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

long_long _TtC11MDTextKitUI25MDQuickLookCoreController::numberOfFileAttachments
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  
  lVar1 = MDTextKitUI::MDQuickLookCoreController::numberOfFileAttachments
                    ((MDQuickLookCoreController *)param_1);
  return lVar1;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::fileURLFor: @ 00034100 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI25MDQuickLookCoreController::fileURLFor_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  NSURL *pNVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  puVar1 = &DAT_002351a8;
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_002351a8,&DAT_001c4060);
  (*(code *)PTR____chkstk_darwin_0020d728)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  MDTextKitUI::MDQuickLookCoreController::_fileURL
            ((MDQuickLookCoreController *)param_1,(SFTextAttachment *)param_3);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  puVar3 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,UVar2.unknown);
  pNVar4 = (NSURL *)0x0;
  if ((int)puVar3 != 1) {
    pNVar4 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
    (**(code **)(lVar6 + 8))(puVar5,UVar2.unknown);
  }
  return (ID)pNVar4;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::previewItemAt: @ 0003436c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI25MDQuickLookCoreController::previewItemAt_
             (ID param_1,SEL param_2,long_long param_3)

{
  MDTextKitUI::MDQuickLookCoreController::_previewItem((MDQuickLookCoreController *)param_1,param_3)
  ;
  return param_3;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::transitionViewForItemAt: @ 000343a8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI25MDQuickLookCoreController::transitionViewForItemAt_
             (ID param_1,SEL param_2,long_long param_3)

{
  MDTextKitUI::MDQuickLookCoreController::_transitionView
            ((MDQuickLookCoreController *)param_1,param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::init @ 000343e4 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI25MDQuickLookCoreController::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.MDQuickLookCoreController",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x34410);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI25MDQuickLookCoreController::.cxx_destruct @ 0003441c =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI25MDQuickLookCoreController::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00034a98(param_1,param_2,&delegate,FUN_00016808,&textView);
  return;
}


