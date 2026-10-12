// ===== _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::previewItemURL @ 00034468 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::previewItemURL(ID param_1,SEL param_2)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  NSURL *pNVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar1 = &DAT_002351a8;
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_002351a8,&DAT_001c4060);
  (*(code *)PTR____chkstk_darwin_0020d728)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = previewItemURL;
  puVar5 = auStack_50 + -extraout_x8;
  _swift_beginAccess(param_1 + previewItemURL,auStack_48,0,0);
  FUN_00034db8(param_1 + lVar6,puVar5);
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


// ===== _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::setPreviewItemURL: @ 0003459c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::setPreviewItemURL_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  URL UVar3;
  long extraout_x8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar2 = &DAT_002351a8;
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_002351a8,&DAT_001c4060);
  (*(code *)PTR____chkstk_darwin_0020d728)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    UVar3 = Foundation::URL::typeMetadataAccessor();
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_3);
    UVar3 = Foundation::URL::typeMetadataAccessor();
  }
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x38))(auStack_50 + -extraout_x8,param_3 == 0,1);
  lVar1 = previewItemURL;
  _swift_beginAccess(param_1 + previewItemURL,auStack_48,0x21,0);
  FUN_00034d68(auStack_50 + -extraout_x8,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  return;
}


// ===== _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::init @ 00034a10 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MDTextKitUI.MDTextAttachmentPreviewItem",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x34a3c);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::.cxx_destruct @ 00034a7c =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI27MDTextAttachmentPreviewItem::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00034a98(param_1,param_2,&previewItemURL,FUN_00034ed8,&attachment);
  return;
}


