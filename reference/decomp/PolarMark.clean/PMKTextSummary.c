// ===== PMKTextSummary::initWithSummary: @ 0000a2b4 =====

ID PMKTextSummary::initWithSummary_(ID param_1,SEL param_2,TreeSummary *param_3)

{
  WikiLink *pWVar1;
  WikiLink *pWVar2;
  
  local_70.super_class = &objc::class_t::PMKTextSummary;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,"init");
  if (self != 0) {
    IVar4 = stringWithIceString_(NSString,&param_3->field1_0x8);
    setTitle_(self,IVar4);
    IVar4 = stringWithIceString_(NSString,&param_3->field2_0x20);
    setSubtitle_(self,IVar4);
    setCodeBlockCount_(self,*(undefined8 *)((long)&param_3->field6_0x8c + 4));
    setTodoCount_(self,*(undefined8 *)((long)&param_3->field7_0x94 + 4));
    setDoneCount_(self,*(undefined8 *)((long)&param_3->field8_0x9c + 4));
    setSpaceIndentedLineCount_(self,*(undefined8 *)((long)&param_3->field9_0xa4 + 4));
    setTabIndentedLineCount_(self,*(undefined8 *)((long)&param_3->field10_0xac + 4));
    IVar4 = set(NSMutableSet);
    for (plVar6 = (param_3->field4_0x50).field0_0x0.field1_0x10.field0_0x0.field0_0x0;
        plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (*(char *)((long)plVar6 + 0x27) < '\0') {
        __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                  (&local_90,plVar6[2],plVar6[3]);
      }
      else {
        uStack_88 = plVar6[3];
        local_90 = plVar6[2];
        local_80 = plVar6[4];
      }
      IVar5 = stringWithIceString_(NSString,&local_90);
      addObject_(IVar4,IVar5);
      if (local_80 < 0) {
        __ZdlPv(local_90);
      }
    }
    setTags_(self,IVar4);
    IVar4 = array(NSMutableArray);
    pWVar2 = (param_3->field3_0x38).field1_0x8;
    for (pWVar1 = (param_3->field3_0x38).field0_0x0; pWVar1 != pWVar2; pWVar1 = pWVar1 + 0x20) {
      if ((char)pWVar1[0x17] < '\0') {
        __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                  (&local_90,*(undefined8 *)pWVar1,*(undefined8 *)(pWVar1 + 8));
      }
      else {
        uStack_88 = *(undefined8 *)(pWVar1 + 8);
        local_90 = *(undefined8 *)pWVar1;
        local_80 = *(long *)(pWVar1 + 0x10);
      }
      local_78 = *(undefined8 *)(pWVar1 + 0x18);
      IVar5 = stringWithIceString_(NSString,&local_90);
      IVar5 = wikiLinkWithTitle_offset_
                        ((ID)&objc::class_t::PMKTextSummaryWikiLink,IVar5,local_78);
      addObject_(IVar4,IVar5);
      if (local_80 < 0) {
        __ZdlPv(local_90);
      }
    }
    setWikiLinks_(self,IVar4);
    IVar4 = array(NSMutableArray);
    puVar3 = *(undefined8 **)((long)&(param_3->field5_0x74).field1_0x8 + 4);
    for (puVar7 = *(undefined8 **)((long)&(param_3->field5_0x74).field0_0x0 + 4); puVar7 != puVar3;
        puVar7 = puVar7 + 3) {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                  (&local_90,*puVar7,puVar7[1]);
      }
      else {
        uStack_88 = puVar7[1];
        local_90 = *puVar7;
        local_80 = puVar7[2];
      }
      IVar5 = stringWithIceString_(NSString,&local_90);
      addObject_(IVar4,IVar5);
      if (local_80 < 0) {
        __ZdlPv(local_90);
      }
    }
    setLinks_(self,IVar4);
  }
  return self;
}

// ===== PMKTextSummary::description @ 0000a6ec =====

ID PMKTextSummary::description(ID param_1,SEL param_2)

{
  
  local_70.super_class = &objc::class_t::PMKTextSummary;
  local_70.receiver = param_1;
  _objc_msgSendSuper2(&local_70,"description");
  title(param_1);
  subtitle(param_1);
  tags(param_1);
  links(param_1);
  wikiLinks(param_1);
  codeBlockCount(param_1);
  todoCount(param_1);
  doneCount(param_1);
  spaceIndentedLineCount(param_1);
  tabIndentedLineCount(param_1);
  IVar1 = stringWithFormat_
                    (NSString,
                     &
                     cf___title___subtitle___tags___links___wikilinks___Codeblockcount__lutodocount__ludonecount__luspaceindentedlinecount__lutabindentedlinecount__lu
                    );
  return IVar1;
}

// ===== PMKTextSummary::title @ 0000a8cc =====

ID PMKTextSummary::title(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

// ===== PMKTextSummary::setTitle: @ 0000a8d8 =====

void PMKTextSummary::setTitle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}

// ===== PMKTextSummary::subtitle @ 0000a8e0 =====

ID PMKTextSummary::subtitle(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== PMKTextSummary::setSubtitle: @ 0000a8ec =====

void PMKTextSummary::setSubtitle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== PMKTextSummary::wikiLinks @ 0000a8f4 =====

ID PMKTextSummary::wikiLinks(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}

// ===== PMKTextSummary::setWikiLinks: @ 0000a900 =====

void PMKTextSummary::setWikiLinks_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}

// ===== PMKTextSummary::tags @ 0000a908 =====

ID PMKTextSummary::tags(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}

// ===== PMKTextSummary::setTags: @ 0000a914 =====

void PMKTextSummary::setTags_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}

// ===== PMKTextSummary::links @ 0000a91c =====

ID PMKTextSummary::links(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}

// ===== PMKTextSummary::setLinks: @ 0000a928 =====

void PMKTextSummary::setLinks_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}

// ===== PMKTextSummary::codeBlockCount @ 0000a930 =====

unsigned_long_long PMKTextSummary::codeBlockCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x30);
}

// ===== PMKTextSummary::setCodeBlockCount: @ 0000a938 =====

void PMKTextSummary::setCodeBlockCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x30) = param_3;
  return;
}

// ===== PMKTextSummary::todoCount @ 0000a940 =====

unsigned_long_long PMKTextSummary::todoCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x38);
}

// ===== PMKTextSummary::setTodoCount: @ 0000a948 =====

void PMKTextSummary::setTodoCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x38) = param_3;
  return;
}

// ===== PMKTextSummary::doneCount @ 0000a950 =====

unsigned_long_long PMKTextSummary::doneCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x40);
}

// ===== PMKTextSummary::setDoneCount: @ 0000a958 =====

void PMKTextSummary::setDoneCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x40) = param_3;
  return;
}

// ===== PMKTextSummary::spaceIndentedLineCount @ 0000a960 =====

unsigned_long_long PMKTextSummary::spaceIndentedLineCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x48);
}

// ===== PMKTextSummary::setSpaceIndentedLineCount: @ 0000a968 =====

void PMKTextSummary::setSpaceIndentedLineCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x48) = param_3;
  return;
}

// ===== PMKTextSummary::tabIndentedLineCount @ 0000a970 =====

unsigned_long_long PMKTextSummary::tabIndentedLineCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x50);
}

// ===== PMKTextSummary::setTabIndentedLineCount: @ 0000a978 =====

void PMKTextSummary::setTabIndentedLineCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x50) = param_3;
  return;
}

// ===== PMKTextSummary::.cxx_destruct @ 0000a980 =====

void PMKTextSummary::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

