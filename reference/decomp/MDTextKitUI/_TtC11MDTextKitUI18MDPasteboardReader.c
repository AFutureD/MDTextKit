// ===== _TtC11MDTextKitUI18MDPasteboardReader::readURLsBlock @ 000e5308 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::readURLsBlock(ID param_1,SEL param_2)

{
  FUN_000e5664(param_1,param_2,&readURLsBlock,FUN_000e5340,&_block_descriptor_40,thunk_FUN_00019830)
  ;
  return param_1;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::setReadURLsBlock: @ 000e539c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::setReadURLsBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  pvVar4 = __Block_copy((void *)param_3);
  if (pvVar4 == (void *)0x0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_00209a80;
    _swift_allocObject(&DAT_00209a80,0x18,7);
    *(void **)(puVar5 + 0x10) = pvVar4;
    pcVar6 = thunk_FUN_000ea584;
  }
  puVar1 = (undefined8 *)(param_1 + readURLsBlock);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar6;
  puVar1[1] = puVar5;
  FUN_00026eec(uVar2,uVar3);
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::readFilesBlock @ 000e54f8 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::readFilesBlock(ID param_1,SEL param_2)

{
  FUN_000e5664(param_1,param_2,&readFilesBlock,FUN_000e5340,&_block_descriptor_33,thunk_FUN_00019830
              );
  return param_1;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::setReadFilesBlock: @ 000e5530 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::setReadFilesBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  pvVar4 = __Block_copy((void *)param_3);
  if (pvVar4 == (void *)0x0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_00209a30;
    _swift_allocObject(&DAT_00209a30,0x18,7);
    *(void **)(puVar5 + 0x10) = pvVar4;
    pcVar6 = FUN_000ea584;
  }
  puVar1 = (undefined8 *)(param_1 + readFilesBlock);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar6;
  puVar1[1] = puVar5;
  FUN_00026eec(uVar2,uVar3);
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::readAttributedStringBlock @ 000e5640 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::readAttributedStringBlock(ID param_1,SEL param_2)

{
  FUN_000e5664(param_1,param_2,&readAttributedStringBlock,FUN_00051678,&_block_descriptor_27,
               thunk_FUN_00019830);
  return param_1;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::setReadAttributedStringBlock: @ 000e578c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::setReadAttributedStringBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  pvVar4 = __Block_copy((void *)param_3);
  if (pvVar4 == (void *)0x0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_002099e0;
    _swift_allocObject(&DAT_002099e0,0x18,7);
    *(void **)(puVar5 + 0x10) = pvVar4;
    pcVar6 = FUN_00055660;
  }
  puVar1 = (undefined8 *)(param_1 + readAttributedStringBlock);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar6;
  puVar1[1] = puVar5;
  FUN_00026eec(uVar2,uVar3);
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::filePathPrefix @ 000e58f8 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::filePathPrefix(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  NSString *pNVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1 + filePathPrefix;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _swift_bridgeObjectRetain(uVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  return (ID)pNVar3;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::setFilePathPrefix: @ 000e59b4 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::setFilePathPrefix_(ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(param_1 + filePathPrefix);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::markdownRenderer @ 000e5ab8 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::markdownRenderer(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = markdownRenderer;
  _swift_beginAccess(param_1 + markdownRenderer,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::setMarkdownRenderer: @ 000e5b4c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::setMarkdownRenderer_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = markdownRenderer;
  _swift_beginAccess(param_1 + markdownRenderer,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::pasteDestinationInsideCode @ 000e5c44 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI18MDPasteboardReader::pasteDestinationInsideCode(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = pasteDestinationInsideCode;
  _swift_beginAccess(param_1 + pasteDestinationInsideCode,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::setPasteDestinationInsideCode: @ 000e5cc8 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::setPasteDestinationInsideCode_
               (ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = pasteDestinationInsideCode;
  _swift_beginAccess(param_1 + pasteDestinationInsideCode,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::dealloc @ 000e5ed8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::MDPasteboardReader::__deallocating_init((MDPasteboardReader *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::.cxx_destruct @ 000e5efc =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18MDPasteboardReader::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00026eec(*(undefined8 *)(param_1 + readURLsBlock),((undefined8 *)(param_1 + readURLsBlock))[1]
              );
  FUN_00026eec(*(undefined8 *)(param_1 + readFilesBlock),
               ((undefined8 *)(param_1 + readFilesBlock))[1]);
  FUN_00026eec(*(undefined8 *)(param_1 + readAttributedStringBlock),
               ((undefined8 *)(param_1 + readAttributedStringBlock))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + filePathPrefix + 8));
  return;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::readFrom:withAttachments: @ 000e6438 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool _TtC11MDTextKitUI18MDPasteboardReader::readFrom_withAttachments_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDPasteboardReader::read
                    ((MDPasteboardReader *)param_1,(NSPasteboard *)param_3,SUB41(param_4,0));
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::rtfAttributedStringFrom:withAttachments: @ 000e6bfc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::rtfAttributedStringFrom_withAttachments_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  MDTextKitUI::MDPasteboardReader::_rtfAttributedString
            ((MDPasteboardReader *)param_1,(NSPasteboard *)param_3,SUB41(param_4,0));
  return param_3;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::rtfAttributedStringFromHTMLFrom:withAttachments: @ 000e759c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::rtfAttributedStringFromHTMLFrom_withAttachments_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  MDTextKitUI::MDPasteboardReader::_rtfAttributedStringFromHTML
            ((MDPasteboardReader *)param_1,(NSPasteboard *)param_3,SUB41(param_4,0));
  return param_3;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::htmlAttributedStringFrom:withAttachments: @ 000e7ab4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::htmlAttributedStringFrom_withAttachments_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  MDTextKitUI::MDPasteboardReader::_htmlAttributedString
            ((MDPasteboardReader *)param_1,(NSPasteboard *)param_3,SUB41(param_4,0));
  return param_3;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::plainTextAttributedStringFrom: @ 000e7b7c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::plainTextAttributedStringFrom_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *self;
  
  IVar1 = objc_stub::stringForType_(param_3,*(undefined8 *)PTR__NSPasteboardTypeString_0020d8c8);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    self = &_OBJC_CLASS___NSAttributedString;
    _objc_allocWithZone();
    IVar1 = objc_stub::initWithString_((ID)self,IVar1);
  }
  return IVar1;
}


// ===== _TtC11MDTextKitUI18MDPasteboardReader::init @ 000e7cb0 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDPasteboardReader::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  ID IVar2;
  objc_super local_30;
  
  puVar1 = (undefined8 *)(param_1 + readURLsBlock);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + readFilesBlock);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + readAttributedStringBlock);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + filePathPrefix);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)(param_1 + markdownRenderer) = 0;
  *(undefined1 *)(param_1 + pasteDestinationInsideCode) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::MDPasteboardReader::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}


