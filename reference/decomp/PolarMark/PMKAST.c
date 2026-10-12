// ===== PMKAST::textSummary @ 00009f30 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKAST::textSummary(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined1 auStack_1a8 [8];
  undefined8 local_1a0;
  char local_189;
  undefined8 local_188;
  char local_171;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [40];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  char local_d1;
  undefined8 local_d0;
  char local_b9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [64];
  undefined1 *local_38;
  
  IVar1 = objc_stub::ast(param_1);
  __ZN3PMK11TreeSummaryC1ERN3Ice4TreeE(auStack_f0,IVar1);
  IVar1 = _objc_alloc(&objc::class_t::PMKTextSummary);
  __ZN3PMK11TreeSummaryC2ERKS0_(auStack_1a8,auStack_f0);
  IVar1 = objc_stub::initWithSummary_(IVar1,auStack_1a8);
  local_38 = auStack_130;
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_38);
  __ZNSt3__112__hash_tableINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEED2Ev
            (auStack_158);
  local_38 = auStack_170;
  __ZNSt3__16vectorINS_4pairINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEEPN3Ice4NodeEEENS5_ISB_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_38);
  if (local_171 < '\0') {
    __ZdlPv(local_188);
  }
  if (local_189 < '\0') {
    __ZdlPv(local_1a0);
  }
  local_38 = auStack_78;
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_38);
  __ZNSt3__112__hash_tableINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEED2Ev
            (auStack_a0);
  local_38 = auStack_b8;
  __ZNSt3__16vectorINS_4pairINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEEPN3Ice4NodeEEENS5_ISB_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_38);
  if (local_b9 < '\0') {
    __ZdlPv(local_d0);
  }
  if (local_d1 < '\0') {
    __ZdlPv(local_e8);
  }
  return IVar1;
}


// ===== PMKAST::rangeOfHeaderWithTitle: @ 0003a244 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

_NSRange PMKAST::rangeOfHeaderWithTitle_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  ID IVar3;
  unsigned_long_long uVar4;
  long lVar5;
  unsigned_long_long uVar6;
  _NSRange _Var7;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_b8 [2];
  char local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  IVar3 = objc_stub::ast(param_1);
  __ZN3Ice4Node5beginEv(&local_60,*(undefined8 *)(*(long *)(IVar3 + 0x130) + 0x48));
  IVar3 = objc_stub::ast(param_1);
  __ZN3Ice4Node3endEv(auStack_80,*(undefined8 *)(IVar3 + 0x130));
  lVar5 = 0;
  while( true ) {
    iVar2 = __ZN3IceneERKNS_4Node8IteratorES3_(&local_60,auStack_80);
    iVar1 = 0;
    if (lVar5 == 0) {
      iVar1 = iVar2;
    }
    if (iVar1 != 1) break;
    lVar5 = __ZN3Ice4Node8IteratorptEv(&local_60);
    if (*(short *)(lVar5 + 8) == 4) {
      uStack_98 = uStack_58;
      local_a0 = local_60;
      uStack_88 = uStack_48;
      uStack_90 = uStack_50;
      __ZN3Ice4Node8Iterator29nextInSequenceSkippingSubtreeEv(&local_a0);
      IVar3 = objc_stub::ast(param_1);
      uStack_d8 = uStack_58;
      local_e0 = local_60;
      uStack_c8 = uStack_48;
      uStack_d0 = uStack_50;
      uStack_f8 = uStack_98;
      local_100 = local_a0;
      uStack_e8 = uStack_88;
      uStack_f0 = uStack_90;
      __ZN3PMK11TreeSummary15normalizedTitleERKN3Ice4TreeENS1_4Node8IteratorES6_l
                (local_b8,IVar3,&local_e0,&local_100,0x7fffffffffffffff);
      IVar3 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_b8);
      IVar3 = objc_stub::caseInsensitiveCompare_(param_3,IVar3);
      if (IVar3 == 0) {
        lVar5 = __ZNK3Ice4Node8Iterator3getEv(&local_60);
      }
      else {
        lVar5 = 0;
      }
      if (local_a1 < '\0') {
        __ZdlPv(local_b8[0]);
      }
    }
    else {
      lVar5 = 0;
    }
    __ZN3Ice4Node8Iterator14nextInSequenceEb(&local_60,1);
  }
  if (lVar5 == 0) {
    uVar4 = 0x7fffffffffffffff;
    uVar6 = 0;
  }
  else {
    __ZN3Ice4Node11firstMarkerEv(lVar5);
    uVar4 = __ZN3Ice4Node11startOffsetEv();
    lVar5 = __ZN3Ice4Node9endOffsetEv(lVar5);
    uVar6 = lVar5 - uVar4;
  }
  _Var7.field1_0x8 = uVar6;
  _Var7.field0_0x0 = uVar4;
  return _Var7;
}


// ===== PMKAST::hasFoldableContentAtIndex: @ 0003a41c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool PMKAST::hasFoldableContentAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::ast(param_1);
  __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(IVar2,param_3,1);
  __ZN3Ice4Node11parentBlockEv();
  bVar1 = __ZN3Ice6Inline14FoldMarkerNode23isContentHeadOfFoldableEPNS_4NodeE();
  return bVar1;
}


// ===== PMKAST::setUsesSimplifiedRuleSet: @ 00047eb0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void PMKAST::setUsesSimplifiedRuleSet_(ID param_1,SEL param_2,bool param_3)

{
  __ZL7ruleSet = 1;
  if (param_3 != 0) {
    __ZL7ruleSet = 2;
  }
  return;
}


// ===== PMKAST::setUsesStandardWikiLinkAnchor: @ 00047ec8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void PMKAST::setUsesStandardWikiLinkAnchor_(ID param_1,SEL param_2,bool param_3)

{
  __ZL7ruleSet = 3;
  if (param_3 == 0) {
    __ZL7ruleSet = 1;
  }
  return;
}


// ===== PMKAST::fromMarkdown: @ 00047ee0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::fromMarkdown_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = _objc_alloc_init(param_1);
  objc_stub::replaceRange_withMarkdown_(self,0,0,param_3);
  return self;
}


// ===== PMKAST::init @ 00047f5c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKAST::init(ID param_1,SEL param_2)

{
  ID self;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_58 [2];
  char local_41;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::PMKAST;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    uVar1 = __Znwm(0x180);
    __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEC2B9nqe220106ILi0EEEPKDs
              (local_58,&DAT_000cb1b6);
    __ZN3Ice4TreeC1ENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEENS_10RuleConfig7RuleSetE
              (uVar1,local_58,__ZL7ruleSet);
    objc_stub::setAst_(self,uVar1);
    if (local_41 < '\0') {
      __ZdlPv(local_58[0]);
    }
    puVar2 = (undefined8 *)__Znwm(0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    objc_stub::setReplaceBatch_(self,puVar2);
  }
  return self;
}


// ===== PMKAST::dealloc @ 00048068 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void PMKAST::dealloc(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  objc_super local_38;
  undefined8 *local_28;
  
  puVar1 = (undefined8 *)objc_stub::ast(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    local_28 = puVar1 + 0x2a;
    __ZNSt3__16vectorIN3Ice11ReplacementENS_9allocatorIS2_EEE16__destroy_vectorclB9nqe220106Ev
              (&local_28);
    if (puVar1[0x27] != 0) {
      puVar1[0x28] = puVar1[0x27];
      __ZdlPv();
    }
    plVar2 = (long *)puVar1[0x26];
    puVar1[0x26] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    __ZN3Ice10RuleConfigD1Ev(puVar1 + 4);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
    __ZdlPv(puVar1);
  }
  puVar1 = (undefined8 *)objc_stub::replaceBatch(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    local_28 = puVar1;
    __ZNSt3__16vectorIN3Ice11ReplacementENS_9allocatorIS2_EEE16__destroy_vectorclB9nqe220106Ev
              (&local_28);
    __ZdlPv(puVar1);
  }
  local_38.super_class = &objc::class_t::PMKAST;
  local_38.receiver = param_1;
  _objc_msgSendSuper2(&local_38,"dealloc");
  return;
}


// ===== PMKAST::description @ 0004815c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKAST::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_68;
  undefined8 local_58 [2];
  char local_41;
  
  objc_stub::ast(param_1);
  __ZNK3Ice4Tree14toIndentedTreeEv(local_58);
  objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_58);
  objc_stub::markdown(param_1);
  local_68.super_class = &objc::class_t::PMKAST;
  local_68.receiver = param_1;
  _objc_msgSendSuper2(&local_68,"description");
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf________);
  if (local_41 < '\0') {
    __ZdlPv(local_58[0]);
  }
  return IVar1;
}


// ===== PMKAST::rootNode @ 00048294 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKAST::rootNode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::ast(param_1);
  IVar1 = objc_stub::nodeForASTNode_((ID)&objc::class_t::PMKASTNode,*(undefined8 *)(IVar1 + 0x130));
  return IVar1;
}


// ===== PMKAST::markdown @ 000482c0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKAST::markdown(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ID IVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_48 [2];
  char local_31;
  
  puVar1 = (undefined8 *)objc_stub::ast(param_1);
  lVar4 = (long)*(char *)((long)puVar1 + 0x17);
  puVar5 = puVar1;
  if (lVar4 < 0) {
    puVar5 = (undefined8 *)*puVar1;
    lVar4 = puVar1[1];
  }
  pvVar2 = (void *)__ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE22__init_internal_bufferB9nqe220106Em
                             (local_48,lVar4);
  _memmove(pvVar2,puVar5,lVar4 << 1);
  *(undefined2 *)((long)pvVar2 + lVar4 * 2) = 0;
  IVar3 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_48);
  if (local_31 < '\0') {
    __ZdlPv(local_48[0]);
  }
  return IVar3;
}


// ===== PMKAST::markdownForNode: @ 0004836c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::markdownForNode_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined8 local_58 [2];
  char local_41;
  
  IVar1 = objc_stub::ast(param_1);
  IVar2 = objc_stub::node(param_3);
  auVar4 = __ZNK3Ice4Tree15markdownForNodeEPNS_4NodeE(IVar1,IVar2);
  pvVar3 = (void *)__ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE22__init_internal_bufferB9nqe220106Em
                             (local_58);
  _memmove(pvVar3,auVar4._0_8_,auVar4._8_8_ << 1);
  *(undefined2 *)((long)pvVar3 + auVar4._8_8_ * 2) = 0;
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_58);
  if (local_41 < '\0') {
    __ZdlPv(local_58[0]);
  }
  return IVar1;
}


// ===== PMKAST::markdownLength @ 0004845c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKAST::markdownLength(ID param_1,SEL param_2)

{
  ID IVar1;
  unsigned_long_long uVar2;
  
  IVar1 = objc_stub::ast(param_1);
  uVar2 = (unsigned_long_long)*(char *)(IVar1 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = *(unsigned_long_long *)(IVar1 + 8);
  }
  return uVar2;
}


// ===== PMKAST::replaceAllWithMarkdown: @ 00048480 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

_NSRange PMKAST::replaceAllWithMarkdown_(ID param_1,SEL param_2,ID param_3)

{
  unsigned_long_long extraout_x1;
  long lVar1;
  _NSRange _Var2;
  
  lVar1 = (long)*(char *)(*(long *)(param_1 + 0x10) + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  _Var2.field0_0x0 = objc_stub::replaceRange_withMarkdown_(param_1,0,lVar1,param_3);
  _Var2.field1_0x8 = extraout_x1;
  return _Var2;
}


// ===== PMKAST::replaceRange:withMarkdown: @ 000484fc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

_NSRange PMKAST::replaceRange_withMarkdown_(ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ID IVar4;
  unsigned_long_long extraout_x1;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  _NSRange _Var12;
  long *local_80;
  long *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if (param_4 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_68);
  }
  IVar4 = objc_stub::ast(param_1);
  __ZN3Ice4Tree7replaceENS_5RangeERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_80,IVar4,param_3.field0_0x0,param_3.field1_0x8,&local_68);
  plVar3 = local_78;
  plVar2 = local_80;
  for (plVar7 = local_80; plVar7 != plVar3; plVar7 = plVar7 + 2) {
    IVar4 = objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_PolarMarkparsesubrange__ld__ld_);
    objc_stub::log_(0,IVar4);
    plVar2 = local_78;
  }
  lVar11 = *local_80;
  lVar6 = local_80[1] + lVar11;
  uVar8 = (long)plVar2 - (long)local_80 >> 4;
  if (1 < uVar8) {
    plVar7 = local_80 + 3;
    lVar9 = uVar8 - 1;
    lVar5 = lVar6;
    lVar10 = lVar11;
    do {
      lVar1 = plVar7[-1];
      lVar11 = lVar1;
      if (lVar10 <= lVar1) {
        lVar11 = lVar10;
      }
      lVar6 = *plVar7 + lVar1;
      if (*plVar7 + lVar1 <= lVar5) {
        lVar6 = lVar5;
      }
      plVar7 = plVar7 + 2;
      lVar9 = lVar9 + -1;
      lVar5 = lVar6;
      lVar10 = lVar11;
    } while (lVar9 != 0);
  }
  IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_PolarMarkparserange__ld__ld_)
  ;
  objc_stub::log_(0,IVar4);
  _Var12.field0_0x0 = objc_stub::extendReparsedRange_(param_1,lVar11,lVar6 - lVar11);
  if (local_80 != (long *)0x0) {
    local_78 = local_80;
    __ZdlPv();
  }
  if (local_58 < 0) {
    __ZdlPv(local_68);
  }
  _Var12.field1_0x8 = extraout_x1;
  return _Var12;
}


// ===== PMKAST::batchReplaceRange:withMarkdown: @ 0004870c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void PMKAST::batchReplaceRange_withMarkdown_(ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_4 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_48);
  }
  IVar1 = objc_stub::replaceBatch(param_1);
  if (local_38 < 0) {
    __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
              (&local_60,local_48,uStack_40);
  }
  else {
    uStack_58 = uStack_40;
    local_60 = local_48;
    local_50 = local_38;
  }
  __ZN3Ice12ReplaceBatch3addENS_5RangeENSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (IVar1,param_3.field0_0x0,param_3.field1_0x8,&local_60);
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return;
}


// ===== PMKAST::batchReplaceCommit @ 0004881c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange PMKAST::batchReplaceCommit(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  ID IVar2;
  ID IVar3;
  unsigned_long_long extraout_x1;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  long lVar10;
  _NSRange _Var11;
  undefined8 **local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  
  IVar2 = objc_stub::replaceBatch(param_1);
  IVar3 = objc_stub::ast(param_1);
  __ZN3Ice12ReplaceBatch5mergeERKNS_4TreeEl(&local_48,IVar2,IVar3,3000);
  if (local_48 != puStack_40) {
    puVar5 = local_48 + 2;
    do {
      plStack_68 = (long *)puVar5[-1];
      local_70 = (undefined8 **)puVar5[-2];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                  (&local_60,*puVar5,puVar5[1]);
      }
      else {
        uStack_58 = puVar5[1];
        local_60 = *puVar5;
        local_50 = puVar5[2];
      }
      IVar2 = objc_stub::ast(param_1);
      __ZN3Ice4Tree16replaceDeferSyncENS_5RangeERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEEb
                (IVar2,local_70,plStack_68,&local_60,0);
      if (local_50 < 0) {
        __ZdlPv(local_60);
      }
      puVar4 = puVar5 + 3;
      puVar5 = puVar5 + 5;
    } while (puVar4 != puStack_40);
  }
  objc_stub::replaceBatch(param_1);
  __ZN3Ice12ReplaceBatch5clearEv();
  objc_stub::ast(param_1);
  __ZN3Ice4Tree4syncEv(&local_70);
  puVar5 = *local_70;
  lVar7 = (long)local_70[1] + (long)puVar5;
  uVar9 = (long)plStack_68 - (long)local_70 >> 5;
  if (1 < uVar9) {
    ppuVar8 = local_70 + 5;
    lVar10 = uVar9 - 1;
    puVar4 = puVar5;
    lVar6 = lVar7;
    do {
      puVar1 = ppuVar8[-1];
      puVar5 = puVar1;
      if ((long)puVar4 <= (long)puVar1) {
        puVar5 = puVar4;
      }
      lVar7 = (long)*ppuVar8 + (long)puVar1;
      if ((long)*ppuVar8 + (long)puVar1 <= lVar6) {
        lVar7 = lVar6;
      }
      ppuVar8 = ppuVar8 + 4;
      lVar10 = lVar10 + -1;
      puVar4 = puVar5;
      lVar6 = lVar7;
    } while (lVar10 != 0);
  }
  _Var11.field0_0x0 = objc_stub::extendReparsedRange_(param_1,puVar5,lVar7 - (long)puVar5);
  if (local_70 != (undefined8 **)0x0) {
    plStack_68 = (long *)local_70;
    __ZdlPv();
  }
  local_70 = &local_48;
  __ZNSt3__16vectorIN3Ice11ReplacementENS_9allocatorIS2_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_70);
  _Var11.field1_0x8 = extraout_x1;
  return _Var11;
}


// ===== PMKAST::reset @ 000489dc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void PMKAST::reset(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  long local_38;
  long local_30;
  
  IVar1 = objc_stub::ast(param_1);
  __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEC2B9nqe220106ILi0EEEPKDs
            (local_50,&DAT_000cb1b6);
  __ZN3Ice4Tree10replaceAllERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_38,IVar1,local_50);
  if (local_38 != 0) {
    local_30 = local_38;
    __ZdlPv();
  }
  if (local_39 < '\0') {
    __ZdlPv(local_50[0]);
  }
  return;
}


// ===== PMKAST::annotatedString @ 00048a60 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKAST::annotatedString(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  
  IVar1 = objc_stub::ast(param_1);
  lVar2 = (long)*(char *)(IVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(IVar1 + 8);
  }
  IVar1 = objc_stub::annotatedStringForRange_(param_1,0,lVar2);
  return IVar1;
}


// ===== PMKAST::annotatedStringForStringRange: @ 00048a94 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKAST::annotatedStringForStringRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::annotatedStringForRange_(param_1);
  IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_PolarMarkannotate__ld__ld_);
  objc_stub::log_(0,IVar2);
  return IVar1;
}


// ===== PMKAST::annotatedStringForRange: @ 00048b34 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKAST::annotatedStringForRange_(ID param_1,SEL param_2,Range param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ID self;
  ID IVar8;
  ID IVar9;
  long lVar10;
  long lVar11;
  ID IVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  ulong uVar15;
  cfstringStruct *pcVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_540;
  cfstringStruct *local_348;
  cfstringStruct *local_2f0;
  cfstringStruct *local_288;
  cfstringStruct *local_258;
  cfstringStruct *local_218;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  ID IStack_1e8;
  ID IStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long local_160;
  long local_158;
  long local_150 [4];
  undefined8 local_130 [2];
  char local_119;
  undefined **appuStack_118 [3];
  undefined ***pppuStack_100;
  cfstringStruct *pcStack_f8;
  cfstringStruct *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **appuStack_d8 [3];
  undefined ***pppuStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined **appuStack_98 [3];
  undefined ***pppuStack_80;
  long local_78;
  
  uVar18 = param_3.field1_0x8;
  uVar15 = param_3.field0_0x0;
  local_78 = *(long *)PTR____stack_chk_guard_000e9b00;
  puVar6 = (undefined8 *)objc_stub::ast(param_1);
  uVar19 = (ulong)*(char *)((long)puVar6 + 0x17);
  puVar20 = puVar6;
  if ((long)uVar19 < 0) {
    puVar20 = (undefined8 *)*puVar6;
    uVar19 = puVar6[1];
  }
  if (uVar19 < uVar15) {
                    /* WARNING: Subroutine does not return */
    __ZNSt3__120__throw_out_of_rangeB9nqe220106EPKc("string_view::substr");
  }
  uVar1 = uVar19 - uVar15;
  if (uVar18 <= uVar19 - uVar15) {
    uVar1 = uVar18;
  }
  pvVar7 = (void *)__ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE22__init_internal_bufferB9nqe220106Em
                             (local_130,uVar1);
  _memmove(pvVar7,(void *)((long)puVar20 + uVar15 * 2),uVar1 << 1);
  *(undefined2 *)((long)pvVar7 + uVar1 * 2) = 0;
  self = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_130);
  IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
  IVar8 = objc_stub::initWithString_(IVar8,self);
  IVar9 = objc_stub::ast(param_1);
  __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(IVar9,uVar15,0);
  __ZN3Ice4Node5beginEv(local_150);
  if (local_150[0] < (long)(uVar15 + uVar18)) {
    local_2f0 = &cf_PMKAutoLinkURL;
    local_258 = &cf_PMKReferenceMarker;
    local_288 = &cf_PMKReferenceText;
    local_348 = &cf_PMKReference;
    local_218 = &cf_PMKBlockquoteMarker;
    do {
      lVar11 = local_150[0];
      lVar10 = __ZN3Ice4Node8IteratorptEv(local_150);
      local_160 = lVar11 - uVar15;
      local_158 = *(long *)(lVar10 + 0x28);
      lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
      iVar5 = *(int *)(lVar11 + 0x78);
      if (iVar5 - 3U < 2) {
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,0);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKDirection,IVar9,local_160,local_158);
      }
      else if (iVar5 == 1) {
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKDirection,IVar9,local_160,local_158);
      }
      else if (iVar5 == 2) {
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKDirection,IVar9,local_160,local_158);
      }
      IVar9 = objc_stub::parseInlinesOnly(param_1);
      if ((((int)IVar9 != 0) &&
          ((lVar11 = __ZN3Ice4Node8IteratorptEv(local_150), *(uint *)(lVar11 + 0x18) < 4 ||
           ((lVar11 = __ZN3Ice4Node8IteratorptEv(local_150), *(long *)(lVar11 + 0x68) != 0 &&
            (lVar11 = __ZN3Ice4Node8IteratorptEv(local_150),
            *(uint *)(*(long *)(lVar11 + 0x68) + 0x18) < 4)))))) ||
         ((IVar9 = objc_stub::parseInlinesOnly(param_1), (int)IVar9 != 0 &&
          (lVar11 = __ZN3Ice4Node8IteratorptEv(local_150), *(short *)(lVar11 + 8) == 2)))) {
        __ZN3Ice4Node8IteratorppEv(local_150);
        goto LAB_0004b2cc;
      }
      auVar24 = __ZN3Ice4Node8IteratorptEv(local_150);
      uVar14 = auVar24._8_8_;
      ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9848;
      pcVar16 = local_218;
      switch(*(undefined2 *)(auVar24._0_8_ + 8)) {
      case 2:
        uVar14 = __ZNK3Ice4Node8IteratordeEv(local_150);
        IVar9 = objc_stub::substringWithRange_(self,local_160,local_158);
        if (IVar9 == 0) {
          uStack_170 = 0;
          uStack_178 = 0;
          lStack_168 = 0;
        }
        else {
          objc_stub::iceString(IVar9,&uStack_178);
        }
        __ZN3PMK9Operation6Indent18spaceAsIndentationEPN3Ice4NodeENSt3__112basic_stringIDsNS5_11char_traitsIDsEENS5_9allocatorIDsEEEE
                  (uVar14,&uStack_178);
        lVar11 = extraout_x1_03;
        if (lStack_168 < 0) {
          __ZdlPv(uStack_178);
          lVar11 = extraout_x1_04;
        }
        if (0 < extraout_x1_03) {
          uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,lVar11,extraout_x1_03);
          objc_stub::addAttribute_value_range_(IVar8,&cf_PMKIndentSpace,uVar14,local_160,local_158);
        }
        break;
      case 4:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,0);
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,auVar24._8_8_,
                                 *(undefined8 *)(auVar24._0_8_ + 0x80));
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHeading,uVar14,local_160,local_158);
        break;
      case 5:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHeadingMarker,IVar9,local_160,local_158);
        __ZNK3Ice4Node8IteratordeEv(local_150);
        __ZN3Ice4Node11parentBlockEv();
        iVar5 = __ZN3Ice6Inline14FoldMarkerNode23isContentHeadOfFoldableEPNS_4NodeE();
        if (iVar5 != 0) {
          uVar14 = func_0x000ac300(&_OBJC_CLASS___NSNumber,extraout_x1,1);
          objc_stub::addAttribute_value_range_(IVar8,&cf_PMKFoldable,uVar14,local_160,local_158);
        }
        break;
      case 8:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,1);
        lVar10 = __ZNK3Ice4Node8IteratordeEv(local_150);
        lVar13 = *(long *)(lVar10 + 0x40);
        lVar11 = 0;
        if (lVar13 == 0) {
          lVar21 = 0;
          lVar22 = 1;
        }
        else {
          lVar22 = 1;
          lVar21 = lVar13;
          do {
            if (*(short *)(lVar21 + 8) == 0x22) {
              lVar11 = lVar11 + 1;
            }
            if (*(short *)(lVar21 + 8) == 8) {
              lVar22 = lVar22 + 1;
              lVar11 = lVar11 + 1;
            }
            lVar21 = *(long *)(lVar21 + 0x40);
          } while (lVar21 != 0);
          lVar21 = 0;
          do {
            if (*(short *)(lVar13 + 8) != 8) break;
            lVar21 = lVar21 + 1;
            lVar13 = *(long *)(lVar13 + 0x40);
          } while (lVar13 != 0);
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKBlockquote,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   local_160,local_158);
        puStack_198 = &uStack_1a0;
        uStack_1a0 = 0;
        lStack_190 = 0x2020000000;
        uStack_188 = 0xffffffffffffffff;
        IVar9 = objc_stub::string(IVar8);
        IVar9 = objc_stub::paragraphRangeForRange_(IVar9,local_160,local_158);
        IVar12 = objc_stub::string(IVar8);
        puStack_208 = PTR___NSConcreteStackBlock_000e9ad0;
        uStack_200 = 0xc2000000;
        pcStack_1f8 = ___34__PMKAST_annotatedStringForRange___block_invoke;
        puStack_1f0 = &
                      ___block_descriptor_104_ea8_32s40s48r_e52_v56__0__NSString_8__NSRange_QQ_16__NSRange_QQ_32_B48l
        ;
        puStack_1d8 = &uStack_1a0;
        IStack_1e8 = IVar8;
        IStack_1e0 = param_1;
        lStack_1d0 = lVar22;
        uStack_1c8 = uVar15;
        uStack_1c0 = uVar18;
        lStack_1b8 = lVar10;
        lStack_1b0 = lVar11;
        lStack_1a8 = lVar21;
        objc_stub::enumerateSubstringsInRange_options_usingBlock_
                  (IVar12,IVar9,extraout_x1_06,0x201,&puStack_208);
        __Block_object_dispose(&uStack_1a0,8);
        break;
      case 9:
        goto code_r0x0004b2b0;
      case 10:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,0);
        func_0x000ac620(param_1,extraout_x1_01,&local_160,self);
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKFencedCode;
        goto code_r0x0004b2b0;
      case 0xb:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKFencedCodeMarker,IVar9,local_160,local_158);
        break;
      case 0xc:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        lVar11 = *(long *)(lVar11 + 0x40);
        if (*(char *)(lVar11 + 0x97) < '\0') {
          __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                    (&uStack_1a0,*(undefined8 *)(lVar11 + 0x80),*(undefined8 *)(lVar11 + 0x88));
        }
        else {
          puStack_198 = *(undefined8 **)(lVar11 + 0x88);
          uStack_1a0 = *(undefined8 *)(lVar11 + 0x80);
          lStack_190 = *(long *)(lVar11 + 0x90);
        }
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&uStack_1a0);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKFencedCodeLanguage,IVar9,local_160,local_158);
        goto code_r0x0004b3bc;
      case 0xe:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKFencedCodeMarker,IVar9,local_160,local_158);
        break;
      case 0xf:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e98a8;
        goto code_r0x0004a010;
      case 0x10:
      case 0x48:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKFootNoteMarker,IVar9,local_160,local_158);
        break;
      case 0x11:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        IVar9 = objc_stub::stringWithIceString_
                          ((ID)&_OBJC_CLASS___NSString,*(long *)(lVar11 + 0x40) + 0x80);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKFootNoteLabel,IVar9,local_160,local_158);
        break;
      case 0x12:
      case 0x13:
      case 0x4a:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKFootNoteMarker,IVar9,local_160,local_158);
        break;
      case 0x14:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKFootNoteText;
        goto code_r0x0004b2b0;
      case 0x15:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,0);
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKHTMLBlock;
        goto code_r0x0004b2b0;
      case 0x16:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,1);
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKIndentedCode;
        goto code_r0x0004b2b0;
      case 0x17:
        func_0x000ac620(param_1,uVar14,&local_160,self);
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,auVar24._8_8_,
                                 *(undefined8 *)(auVar24._0_8_ + 0x98));
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKReferenceDefinition,uVar14,local_160,local_158);
        break;
      case 0x18:
      case 0x1f:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKReferenceMarker,IVar9,local_160,local_158)
        ;
        break;
      case 0x19:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKReferenceDefinitionLabel;
        goto code_r0x0004b2b0;
      case 0x1a:
      case 0x1b:
      case 0x21:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKReferenceMarker,IVar9,local_160,local_158)
        ;
        break;
      case 0x1c:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKAutoLinkMarker,IVar9,local_160,local_158);
        break;
      case 0x1d:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKReferenceDefinitionLink;
        goto code_r0x0004b2b0;
      case 0x1e:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKAutoLinkMarker,IVar9,local_160,local_158);
        break;
      case 0x20:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKReferenceDefinitionTitle;
        goto code_r0x0004b2b0;
      case 0x22:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,1);
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKList;
        goto code_r0x0004b2b0;
      case 0x23:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,1);
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        lVar10 = *(long *)(lVar11 + 0x40);
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150);
        iVar5 = __ZN3Ice5Block8ListNode9isOrderedEv(lVar10);
        uVar17 = 0;
        uVar14 = 1;
        if (iVar5 != 0) {
          uVar14 = 2;
        }
        iVar5 = *(int *)(lVar11 + 0x80);
        if (iVar5 < 3) {
          if (iVar5 == 0) {
            uVar17 = 4;
          }
          else if (iVar5 == 1) {
            uVar17 = 5;
          }
          else if (iVar5 == 2) {
            uVar17 = 2;
          }
        }
        else if (iVar5 == 3) {
          uVar17 = 1;
        }
        else if (iVar5 == 4) {
          uVar17 = 3;
        }
        else if (iVar5 == 5) {
                    /* WARNING: Subroutine does not return */
          ___assert_rtn("-[PMKAST annotatedStringForRange:]","PMKAST.mm",0x16c,"false");
        }
        uVar2 = 2;
        if (*(int *)(lVar11 + 0x84) != 1) {
          uVar2 = 0;
        }
        if (*(int *)(lVar11 + 0x84) == 0) {
          uVar2 = 1;
        }
        lVar10 = *(long *)(lVar10 + 0x40);
        if (lVar10 == 0) {
          lVar21 = 0;
          lVar13 = 0;
        }
        else {
          lVar21 = 0;
          lVar13 = lVar10;
          do {
            if (*(short *)(lVar13 + 8) == 0x22 || *(short *)(lVar13 + 8) == 8) {
              lVar21 = lVar21 + 1;
            }
            lVar13 = *(long *)(lVar13 + 0x40);
          } while (lVar13 != 0);
          lVar13 = 0;
          do {
            if (*(short *)(lVar10 + 8) != 0x23) {
              if (*(short *)(lVar10 + 8) != 0x22) break;
              lVar13 = lVar13 + 1;
            }
            lVar10 = *(long *)(lVar10 + 0x40);
          } while (lVar10 != 0);
        }
        lVar10 = *(long *)(lVar11 + 0x90);
        IVar9 = objc_stub::listInfoWithListType_subType_taskType_level_itemIndex_
                          ((ID)&objc::class_t::PMKListInfo,uVar14,uVar17,uVar2,lVar21,
                           lVar10 - *(long *)(*(long *)(*(long *)(lVar11 + 0x40) + 0x48) + 0x90));
        objc_stub::setRelativeListLevel_(IVar9,lVar13);
        objc_stub::setOrderedListItemNumber_(IVar9,lVar10);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKListItem,IVar9,local_160,local_158);
        break;
      case 0x24:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        lVar11 = *(long *)(lVar11 + 0x68);
        iVar5 = __ZN3Ice5Block8ListNode9isOrderedEv(lVar11);
        uVar14 = 1;
        if (iVar5 != 0) {
          uVar14 = 2;
        }
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,uVar14);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKListMarker,IVar9,local_160,local_158);
        iVar5 = __ZN3Ice6Inline14FoldMarkerNode23isContentHeadOfFoldableEPNS_4NodeE
                          (*(undefined8 *)(lVar11 + 0x48));
        if (iVar5 != 0) {
          uVar14 = func_0x000ac300(&_OBJC_CLASS___NSNumber,extraout_x1_00,1);
          objc_stub::addAttribute_value_range_(IVar8,&cf_PMKFoldable,uVar14,local_160,local_158);
        }
        break;
      case 0x26:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,0);
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,auVar24._8_8_,
                                 *(undefined8 *)(auVar24._0_8_ + 0x80));
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHeading,uVar14,local_160,local_158);
        break;
      case 0x27:
        func_0x000ab520(param_1,uVar14,&local_160,self);
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHeadingMarker,IVar9,local_160,local_158);
        break;
      case 0x28:
        func_0x000ac620(param_1,uVar14,&local_160,self);
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        lVar13 = auVar24._0_8_;
        lVar11 = *(long *)(lVar13 + 0x80);
        lVar10 = *(long *)(lVar13 + 0x88);
        pcStack_f8 = &cf_RowCount;
        auVar24 = func_0x000ac340(&_OBJC_CLASS___NSNumber,auVar24._8_8_,
                                  *(long *)(lVar13 + 0x38) + -1);
        uStack_e8 = auVar24._0_8_;
        pcStack_f0 = &cf_ColumnCount;
        auVar24 = func_0x000ac3a0(&_OBJC_CLASS___NSNumber,auVar24._8_8_,lVar10 - lVar11 >> 2);
        uStack_e0 = auVar24._0_8_;
        uVar14 = func_0x000aba00(&_OBJC_CLASS___NSDictionary,auVar24._8_8_,&uStack_e8,&pcStack_f8,2)
        ;
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKTable,uVar14,local_160,local_158);
        break;
      case 0x29:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKTableMarker;
        goto code_r0x0004b2b0;
      case 0x2a:
        IVar9 = objc_stub::string(IVar8);
        objc_stub::characterAtIndex_(IVar9,local_160);
        IVar9 = objc_stub::string(IVar8);
        objc_stub::characterAtIndex_(IVar9,local_160 + local_158 + -1);
        uVar14 = func_0x000ac320(&_OBJC_CLASS___NSNumber);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKTableCellContent,uVar14,local_160,local_158);
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150);
        lVar10 = *(long *)(lVar11 + 0x58);
        if ((lVar10 != 0) && (*(short *)(lVar10 + 8) == 2)) {
          local_160 = local_160 - *(long *)(lVar10 + 0x28);
          local_158 = local_158 + *(long *)(lVar10 + 0x28);
        }
        lVar11 = *(long *)(lVar11 + 0x60);
        if ((lVar11 != 0) && (*(short *)(lVar11 + 8) == 2)) {
          local_158 = local_158 + *(long *)(lVar11 + 0x28);
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKTableCell,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   local_160,local_158);
        break;
      case 0x2e:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        uVar3 = *(uint *)(auVar24._0_8_ + 0x80);
        if (uVar3 < 4) {
          uStack_540 = *(undefined8 *)(&UNK_000b6728 + (ulong)uVar3 * 8);
        }
        uVar14 = func_0x000ac320(&_OBJC_CLASS___NSNumber,auVar24._8_8_,uStack_540);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKTableCell,uVar14,local_160,local_158);
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        lVar11 = *(long *)(auVar24._0_8_ + 0x48);
        if ((lVar11 != 0) && (*(short *)(lVar11 + 8) == 2)) {
          local_160 = local_160 + *(long *)(lVar11 + 0x28);
          local_158 = local_158 - *(long *)(lVar11 + 0x28);
        }
        lVar10 = *(long *)(auVar24._0_8_ + 0x50);
        if (((lVar10 != 0) && (lVar10 != lVar11)) && (*(short *)(lVar10 + 8) == 2)) {
          local_158 = local_158 - *(long *)(lVar10 + 0x28);
        }
        uVar14 = func_0x000ac320(&_OBJC_CLASS___NSNumber,auVar24._8_8_,uStack_540);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKTableCellContent,uVar14,local_160,local_158);
        break;
      case 0x30:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,0);
        lVar10 = __ZN3Ice4Node8IteratorptEv(local_150);
        lVar11 = *(long *)(*(long *)(lVar10 + 0x40) + 0x20);
        lVar10 = *(long *)(*(long *)(lVar10 + 0x40) + 0x28);
        lVar13 = __ZN3Ice4Node8IteratorptEv(local_150);
        lVar13 = *(long *)(lVar13 + 0x20);
        auVar24 = __ZN3Ice4Node8IteratorptEv(local_150);
        local_158 = ((lVar10 + lVar11) - (lVar13 + *(long *)(auVar24._0_8_ + 0x28))) + local_158;
        func_0x000ac620(param_1,auVar24._8_8_,&local_160,self);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKThematicBreak,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   local_160,local_158);
        break;
      case 0x31:
        func_0x000ac620(param_1,uVar14,&local_160,self);
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKYaml,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,local_160,
                   local_158);
        pcVar16 = &cf_PMKFencedCode;
        goto code_r0x0004b2b0;
      case 0x32:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKFencedCodeMarker,IVar9,local_160,local_158);
        break;
      case 0x34:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKFencedCodeMarker,IVar9,local_160,local_158);
        break;
      case 0x35:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        pcVar16 = local_2f0;
        if (*(int *)(lVar11 + 0x80) != 0) {
          if (*(int *)(lVar11 + 0x80) == 1) {
            pcVar16 = &cf_PMKAutoLinkEmail;
          }
          else {
            pcVar16 = (cfstringStruct *)0x0;
          }
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,pcVar16,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,local_160,
                   local_158);
        break;
      case 0x36:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKAutoLinkMarker,IVar9,local_160,local_158);
        break;
      case 0x38:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKAutoLinkMarker,IVar9,local_160,local_158);
        break;
      case 0x3a:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKEscape;
        goto code_r0x0004b2b0;
      case 0x3b:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKCode;
        goto code_r0x0004b2b0;
      case 0x3c:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKCodeMarker,IVar9,local_160,local_158);
        break;
      case 0x3d:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKCodeMarker,IVar9,local_160,local_158);
        break;
      case 0x3e:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKColor;
        goto code_r0x0004b2b0;
      case 0x3f:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKColorMarker;
        goto code_r0x0004b2b0;
      case 0x40:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,lVar11 + 0x80);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKAutoLinkEmail,IVar9,local_160,local_158);
        break;
      case 0x41:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKEmphasis;
        goto code_r0x0004b2b0;
      case 0x42:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKEmphasisMarker,IVar9,local_160,local_158);
        break;
      case 0x43:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKEmphasisMarker,IVar9,local_160,local_158);
        break;
      case 0x44:
        __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        __ZN3Ice6Inline10EntityNode8toStringEv(&uStack_1a0);
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&uStack_1a0);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHTMLEntity,IVar9,local_160,local_158);
code_r0x0004b3bc:
        if (lStack_190 < 0) {
          __ZdlPv(uStack_1a0);
        }
        break;
      case 0x45:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHTMLEntityMarker,IVar9,local_160,local_158);
        break;
      case 0x46:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHTMLEntityMarker,IVar9,local_160,local_158);
        break;
      case 0x47:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9878;
code_r0x0004a010:
        pcVar16 = &cf_PMKFootNote;
        goto code_r0x0004b2b0;
      case 0x49:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        IVar9 = objc_stub::stringWithIceString_
                          ((ID)&_OBJC_CLASS___NSString,*(long *)(lVar11 + 0x40) + 0x80);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKFootNoteLabel,IVar9,local_160,local_158);
        break;
      case 0x4c:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKHardLinebreak;
        goto code_r0x0004b2b0;
      case 0x4d:
        __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        __ZN3Ice6Inline11HashtagNode15encodedSegmentsEv(&uStack_1a0);
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&uStack_1a0);
        if (lStack_190 < 0) {
          __ZdlPv(uStack_1a0);
        }
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHashtag,IVar9,local_160,local_158);
        break;
      case 0x4e:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHashtagMarker,IVar9,local_160,local_158);
        break;
      case 0x4f:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKHashtagSegment;
        goto code_r0x0004b2b0;
      case 0x50:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKHashtagSeparator;
        goto code_r0x0004b2b0;
      case 0x51:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKHashtagMarker,IVar9,local_160,local_158);
        break;
      case 0x52:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        uVar3 = *(int *)(lVar11 + 0x80) - 1;
        if (uVar3 < 5) {
          ppuVar23 = (undefined **)(&PTR_PTR_000e5228)[uVar3];
        }
        else {
          ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9860;
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHighlighter,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   local_160,local_158);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHighlighterColor,ppuVar23,local_160,local_158);
        break;
      case 0x53:
        uVar14 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHighlighterMarker,IVar9,local_160,local_158);
        auVar24 = __ZN3Ice4Node9treeLevelEv(uVar14);
        uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,auVar24._8_8_,auVar24._0_8_);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHighlighterMarkerNesting,uVar14,local_160,local_158);
        break;
      case 0x54:
        uVar14 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHighlighterMarker,IVar9,local_160,local_158);
        auVar24 = __ZN3Ice4Node9treeLevelEv(uVar14);
        uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,auVar24._8_8_,auVar24._0_8_);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHighlighterMarkerNesting,uVar14,local_160,local_158);
        break;
      case 0x55:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        appuStack_b8[0] =
             &
             PTR___ZNSt3__110__function6__funcIZ34__PMKAST_annotatedStringForRange__E3__1FbPN3Ice4NodeEEED1Ev_000e4f38
        ;
        pppuStack_a0 = appuStack_b8;
        iVar5 = __ZN3Ice4Node16hasAncestorWhereENSt3__18functionIFbPS0_EEE(lVar11,appuStack_b8);
        if (pppuStack_a0 == appuStack_b8) {
          lVar10 = 0x20;
code_r0x0004b450:
          (**(code **)((long)*pppuStack_a0 + lVar10))();
          uVar14 = extraout_x1_05;
        }
        else {
          uVar14 = extraout_x1_02;
          if (pppuStack_a0 != (undefined ***)0x0) {
            lVar10 = 0x28;
            goto code_r0x0004b450;
          }
        }
        if (iVar5 == 0) {
          if (*(char *)(lVar11 + 0xd1) == '\x01') {
            appuStack_d8[0] =
                 &
                 PTR___ZNSt3__110__function6__funcIZ34__PMKAST_annotatedStringForRange__E3__2FbPN3Ice4NodeEEED1Ev_000e4fb8
            ;
            pppuStack_c0 = appuStack_d8;
            auVar24 = __ZN3Ice4Node16hasAncestorWhereENSt3__18functionIFbPS0_EEE
                                (lVar11,appuStack_d8);
            uVar14 = auVar24._8_8_;
            if (pppuStack_c0 == appuStack_d8) {
              lVar10 = 0x20;
code_r0x0004b804:
              (**(code **)((long)*pppuStack_c0 + lVar10))();
              uVar14 = extraout_x1_09;
              if ((auVar24._0_8_ & 1) == 0) goto code_r0x0004b91c;
            }
            else {
              if (pppuStack_c0 != (undefined ***)0x0) {
                lVar10 = 0x28;
                goto code_r0x0004b804;
              }
              if (auVar24._0_4_ == 0) goto code_r0x0004b91c;
            }
            lVar11 = __ZN3Ice4Node17lastNodeOfSubtreeEv(lVar11);
            while (lVar10 = __ZNK3Ice4Node8IteratordeEv(local_150), lVar10 != lVar11) {
              __ZN3Ice4Node8IteratorppEv(local_150);
            }
          }
          else {
code_r0x0004b91c:
            pcVar16 = local_348;
            if (*(char *)(lVar11 + 0xd1) == '\0') {
              pcVar16 = &cf_PMKImage;
            }
            if (*(char *)(lVar11 + 0xd1) == '\x01') {
              uVar17 = *(undefined8 *)(lVar11 + 0x98);
            }
            else {
              uVar17 = 1;
            }
            uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,uVar14,uVar17);
            objc_stub::addAttribute_value_range_(IVar8,pcVar16,uVar14,local_160,local_158);
          }
        }
        else {
          lVar11 = __ZN3Ice4Node17lastNodeOfSubtreeEv(lVar11);
          while (lVar10 = __ZNK3Ice4Node8IteratordeEv(local_150), lVar10 != lVar11) {
            __ZN3Ice4Node8IteratorppEv(local_150);
          }
        }
        break;
      case 0x56:
      case 0x59:
      case 0x5c:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_258;
        if (*(char *)(*(long *)(lVar11 + 0x40) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKImageMarker;
        }
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,pcVar16,IVar9,local_160,local_158);
        break;
      case 0x57:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_288;
        if (*(char *)(*(long *)(lVar11 + 0x68) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKImageLabel;
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,pcVar16,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,local_160,
                   local_158);
        break;
      case 0x58:
      case 0x5b:
      case 99:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_258;
        if (*(char *)(*(long *)(lVar11 + 0x40) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKImageMarker;
        }
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,pcVar16,IVar9,local_160,local_158);
        break;
      case 0x5a:
      case 0x69:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKReferenceLabel;
        goto code_r0x0004b2b0;
      case 0x5e:
        IVar9 = objc_stub::characterAtIndex_(self,local_160 + -1);
        if ((int)IVar9 == 0x3c) {
          local_160 = local_160 + -1;
          local_158 = local_158 + 2;
        }
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        __ZN3Ice6Inline12LinkBaseNode11destinationEv(&uStack_1a0,*(undefined8 *)(lVar11 + 0x40));
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&uStack_1a0);
        if (lStack_190 < 0) {
          __ZdlPv(uStack_1a0);
        }
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKImageURL,IVar9,local_160,local_158);
        break;
      case 0x61:
        local_160 = local_160 + -1;
        local_158 = local_158 + 2;
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_288;
        if (*(char *)(*(long *)(lVar11 + 0x40) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKImageTitle;
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,pcVar16,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,local_160,
                   local_158);
        break;
      case 100:
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        uVar14 = auVar24._8_8_;
        lVar11 = auVar24._0_8_;
        if (*(char *)(lVar11 + 0xd1) == '\x01') {
          appuStack_98[0] =
               &
               PTR___ZNSt3__110__function6__funcIZ34__PMKAST_annotatedStringForRange__E3__0FbPN3Ice4NodeEEED1Ev_000e4eb8
          ;
          pppuStack_80 = appuStack_98;
          auVar24 = __ZN3Ice4Node16hasAncestorWhereENSt3__18functionIFbPS0_EEE(lVar11,appuStack_98);
          uVar14 = auVar24._8_8_;
          if (pppuStack_80 == appuStack_98) {
            lVar10 = 0x20;
code_r0x0004b734:
            (**(code **)((long)*pppuStack_80 + lVar10))();
            uVar14 = extraout_x1_08;
            if ((auVar24._0_8_ & 1) == 0) goto code_r0x0004b788;
          }
          else {
            if (pppuStack_80 != (undefined ***)0x0) {
              lVar10 = 0x28;
              goto code_r0x0004b734;
            }
            if (auVar24._0_4_ == 0) goto code_r0x0004b788;
          }
          lVar11 = __ZN3Ice4Node17lastNodeOfSubtreeEv(lVar11);
          while (lVar10 = __ZNK3Ice4Node8IteratordeEv(local_150), lVar10 != lVar11) {
            __ZN3Ice4Node8IteratorppEv(local_150);
          }
        }
        else {
code_r0x0004b788:
          pcVar16 = local_348;
          if (*(char *)(lVar11 + 0xd1) == '\0') {
            pcVar16 = &cf_PMKLink;
          }
          if (*(char *)(lVar11 + 0xd1) == '\x01') {
            uVar17 = *(undefined8 *)(lVar11 + 0x98);
          }
          else {
            uVar17 = 1;
          }
          uVar14 = func_0x000ac340(&_OBJC_CLASS___NSNumber,uVar14,uVar17);
          objc_stub::addAttribute_value_range_(IVar8,pcVar16,uVar14,local_160,local_158);
        }
        break;
      case 0x65:
      case 0x68:
      case 0x6b:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_258;
        if (*(char *)(*(long *)(lVar11 + 0x40) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKLinkMarker;
        }
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,pcVar16,IVar9,local_160,local_158);
        break;
      case 0x66:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_288;
        if (*(char *)(*(long *)(lVar11 + 0x68) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKLinkLabel;
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,pcVar16,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,local_160,
                   local_158);
        break;
      case 0x67:
      case 0x6a:
      case 0x72:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_258;
        if (*(char *)(*(long *)(lVar11 + 0x40) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKLinkMarker;
        }
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,pcVar16,IVar9,local_160,local_158);
        break;
      case 0x6d:
        IVar9 = objc_stub::characterAtIndex_(self,local_160 + -1);
        if ((int)IVar9 == 0x3c) {
          local_160 = local_160 + -1;
          local_158 = local_158 + 2;
        }
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        __ZN3Ice6Inline12LinkBaseNode11destinationEv(&uStack_1a0,*(undefined8 *)(lVar11 + 0x40));
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&uStack_1a0);
        if (lStack_190 < 0) {
          __ZdlPv(uStack_1a0);
        }
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKLinkURL,IVar9,local_160,local_158);
        break;
      case 0x70:
        local_160 = local_160 + -1;
        local_158 = local_158 + 2;
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        pcVar16 = local_288;
        if (*(char *)(*(long *)(lVar11 + 0x40) + 0xd1) == '\0') {
          pcVar16 = &cf_PMKLinkTitle;
        }
        objc_stub::addAttribute_value_range_
                  (IVar8,pcVar16,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,local_160,
                   local_158);
        break;
      case 0x73:
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKHTMLInline,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   local_160,local_158);
        IVar9 = objc_stub::substringWithRange_(self,local_160,local_158);
        IVar12 = objc_stub::hasPrefix_(IVar9,&cf_<___);
        if (((int)IVar12 != 0) && (IVar12 = objc_stub::length(IVar9), 7 < IVar12)) {
          IVar12 = objc_stub::length(IVar9);
          IVar9 = objc_stub::substringWithRange_(IVar9,4,IVar12 - 7);
          IVar9 = objc_stub::dataUsingEncoding_(IVar9,10);
          IVar9 = objc_stub::JSONObjectWithData_options_error_
                            ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar9,0,0);
          if (IVar9 != 0) {
            uVar14 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);
            uVar19 = _objc_opt_isKindOfClass(IVar9,uVar14);
            if ((uVar19 & 1) != 0) {
              objc_stub::addAttribute_value_range_(IVar8,&cf_PMKMetadata,IVar9,local_160,local_158);
            }
          }
        }
        break;
      case 0x74:
        if (local_160 == 0) {
          lVar11 = 1;
        }
        else {
          IVar9 = objc_stub::attribute_atIndex_effectiveRange_(IVar8,&cf_PMKArrow,local_160 + -1,0);
          IVar9 = objc_stub::intValue(IVar9);
          lVar11 = (long)((int)IVar9 + 1);
        }
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,lVar11);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKArrow,IVar9,local_160,local_158);
        break;
      case 0x75:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKStrikethrough;
        goto code_r0x0004b2b0;
      case 0x76:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKStrikethroughMarker,IVar9,local_160,local_158);
        break;
      case 0x77:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKStrikethroughMarker,IVar9,local_160,local_158);
        break;
      case 0x78:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKStrong;
        goto code_r0x0004b2b0;
      case 0x79:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKStrongMarker,IVar9,local_160,local_158);
        break;
      case 0x7a:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKStrongMarker,IVar9,local_160,local_158);
        break;
      case 0x7b:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKUnderline;
        goto code_r0x0004b2b0;
      case 0x7c:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKUnderlineMarker,IVar9,local_160,local_158)
        ;
        break;
      case 0x7d:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKUnderlineMarker,IVar9,local_160,local_158)
        ;
        break;
      case 0x7e:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,lVar11 + 0x80);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKAutoLinkURL,IVar9,local_160,local_158);
        break;
      case 0x7f:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        if (*(int *)(lVar11 + 0x80) == 0) {
          __ZN3Ice6Inline12WikilinkNode15encodedSegmentsEv(&uStack_1a0);
          pcVar16 = (cfstringStruct *)
                    objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&uStack_1a0);
          if (lStack_190 < 0) {
            __ZdlPv(uStack_1a0);
          }
        }
        else if (*(int *)(lVar11 + 0x80) == 1) {
          pcVar16 = (cfstringStruct *)
                    objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,lVar11 + 0xa0);
        }
        else {
          pcVar16 = &cf___;
        }
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKWikiLink,pcVar16,local_160,local_158);
        break;
      case 0x80:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKWikiLinkMarker,IVar9,local_160,local_158);
        break;
      case 0x82:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKWikiLinkMarker,IVar9,local_160,local_158);
        break;
      case 0x83:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        lVar10 = __ZN3Ice4Node8IteratorptEv(local_150);
        iVar5 = *(int *)(*(long *)(lVar10 + 0x68) + 0x80);
        if (iVar5 == 0) {
          objc_stub::addAttribute_value_range_
                    (IVar8,&cf_PMKWikiLinkSegment,
                     &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,local_160,local_158);
        }
        else if ((iVar5 == 1) && (*(long *)(lVar11 + 0x58) != 0)) {
          IVar9 = objc_stub::stringWithIceString_
                            ((ID)&_OBJC_CLASS___NSString,*(long *)(lVar10 + 0x68) + 0xb8);
          objc_stub::addAttribute_value_range_
                    (IVar8,&cf_PMKWikiLinkAnchor,IVar9,local_160,local_158);
        }
        break;
      case 0x84:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKWikiLinkSeparator;
        goto code_r0x0004b2b0;
      case 0x85:
        lVar11 = __ZN3Ice4Node8IteratorptEv(local_150);
        IVar9 = objc_stub::stringWithIceString_
                          ((ID)&_OBJC_CLASS___NSString,*(long *)(lVar11 + 0x68) + 0xd0);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKWikiLinkAlias,IVar9,local_160,local_158);
        break;
      case 0x86:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKWikiLinkAliasSeparator;
        goto code_r0x0004b2b0;
      case 0x87:
        lVar11 = __ZNK3Ice4Node8Iterator3getEv(local_150);
        __ZN3Ice6Inline14FoldMarkerNode27foldableTailFromContentHeadEPNS_4NodeE
                  (*(undefined8 *)(lVar11 + 0x40));
        lVar11 = __ZN3Ice4Node17lastNodeOfSubtreeEv();
        if (*(short *)(lVar11 + 8) == 3) {
          do {
            bVar4 = lVar11 == *(long *)(*(long *)(lVar11 + 0x40) + 0x48);
            lVar11 = *(long *)(lVar11 + 0x40);
          } while (bVar4);
          lVar11 = __ZN3Ice4Node18previousInSequenceEv();
        }
        lVar10 = __ZN3Ice4Node11startOffsetEv(lVar11);
        uVar14 = *(undefined8 *)(lVar11 + 0x28);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKFoldMarker,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   local_160,local_158);
        auVar24 = _NSUnionRange(local_160,local_158,lVar10 - uVar15,uVar14);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKFold,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   auVar24._0_8_,auVar24._8_8_);
        break;
      case 0x88:
        lVar13 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        __ZN3Ice4Node11parentBlockEv();
        auVar24 = __ZN3Ice4Node11firstMarkerEv();
        lVar10 = local_158;
        lVar11 = local_160;
        lVar21 = *(long *)(auVar24._0_8_ + 0x20);
        lVar22 = *(long *)(lVar13 + 0x20);
        uVar14 = func_0x000ac360(&_OBJC_CLASS___NSNumber,auVar24._8_8_,
                                 *(undefined4 *)(lVar13 + 0x80));
        lVar21 = lVar21 - lVar22;
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKCallout,uVar14,lVar11 + lVar21,lVar10 - lVar21);
        auVar24 = __ZN3Ice5Block15CalloutHeadNode10titleRangeEv(lVar13);
        if (0 < auVar24._8_8_) {
          objc_stub::addAttribute_value_range_
                    (IVar8,&cf_PMKCalloutTitle,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                     auVar24._0_8_ - uVar15,auVar24._8_8_);
        }
        break;
      case 0x89:
        ppuVar23 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830;
        pcVar16 = &cf_PMKCalloutMarker;
code_r0x0004b2b0:
        objc_stub::addAttribute_value_range_(IVar8,pcVar16,ppuVar23,local_160,local_158);
        break;
      case 0x8a:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,lVar11 + 0x80);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKMathSpan,IVar9,local_160,local_158);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKMathSpanFormula,&PTR__OBJC_CLASS___NSConstantIntegerNumber_000e9830,
                   local_160 + 1,local_158 + -2);
        break;
      case 0x8b:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKMathSpanMarker,IVar9,local_160,local_158);
        break;
      case 0x8c:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKMathSpanMarker,IVar9,local_160,local_158);
        break;
      case 0x8d:
        lVar11 = __ZNK3Ice4Node8IteratordeEv(local_150,uVar14,&cf_PMKBlockquoteMarker);
        auVar24 = __ZNK3Ice4Node8IteratordeEv(local_150);
        func_0x000ac640(param_1,auVar24._8_8_,&local_160,auVar24._0_8_,0);
        uVar14 = __ZN3Ice4Node8IteratorptEv(local_150);
        appuStack_118[0] =
             &
             PTR___ZNSt3__110__function6__funcIZ34__PMKAST_annotatedStringForRange__E3__3FbPN3Ice4NodeEEED1Ev_000e5038
        ;
        pppuStack_100 = appuStack_118;
        auVar24 = __ZN3Ice4Node10childWhereENSt3__18functionIFbPS0_EEE(uVar14,appuStack_118);
        uVar14 = auVar24._8_8_;
        if (pppuStack_100 == appuStack_118) {
          lVar10 = 0x20;
code_r0x0004b5fc:
          (**(code **)((long)*pppuStack_100 + lVar10))();
          uVar14 = extraout_x1_07;
        }
        else if (pppuStack_100 != (undefined ***)0x0) {
          lVar10 = 0x28;
          goto code_r0x0004b5fc;
        }
        if (auVar24._0_8_ != 0) {
          func_0x000ac620(param_1,uVar14,&local_160,self);
        }
        IVar9 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,lVar11 + 0x80);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKMathBlock,IVar9,local_160,local_158);
        break;
      case 0x8e:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,1);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKMathBlockMarker,IVar9,local_160,local_158)
        ;
        break;
      case 0x8f:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_
                  (IVar8,&cf_PMKMathBlockFormula,IVar9,local_160,local_158);
        break;
      case 0x90:
        IVar9 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,2);
        objc_stub::addAttribute_value_range_(IVar8,&cf_PMKMathBlockMarker,IVar9,local_160,local_158)
        ;
      }
      __ZN3Ice4Node8IteratorppEv(local_150);
LAB_0004b2cc:
    } while (local_150[0] < (long)(uVar15 + uVar18));
  }
  uVar14 = 0;
  if (local_119 < '\0') {
    uVar14 = __ZdlPv(local_130[0]);
  }
  if (*(long *)PTR____stack_chk_guard_000e9b00 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar14);
  }
  return IVar8;
}


// ===== PMKAST::setParseInlinesOnly: @ 0004c66c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void PMKAST::setParseInlinesOnly_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  if (param_3 != 0) {
    objc_stub::disableMath(param_1);
    return;
  }
  return;
}


// ===== PMKAST::disableMath @ 0004c67c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void PMKAST::disableMath(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 local_38 [2];
  char local_21;
  
  IVar1 = objc_stub::ast(param_1);
  pcVar2 = (char *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE22__init_internal_bufferB9nqe220106Em
                             (local_38,9);
  builtin_strncpy(pcVar2,"MathBlock",10);
  __ZN3Ice4Tree16removeRuleByNameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
            (IVar1,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  IVar1 = objc_stub::ast(param_1);
  puVar3 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE22__init_internal_bufferB9nqe220106Em
                     (local_38,8);
  *puVar3 = 0x6e6170536874614d;
  *(undefined1 *)(puVar3 + 1) = 0;
  __ZN3Ice4Tree16removeRuleByNameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
            (IVar1,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return;
}


// ===== PMKAST::disableRule: @ 0004c798 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKAST::disableRule_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  char *pcVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 local_58 [2];
  char local_41;
  
  IVar1 = objc_stub::ast(param_1);
  self = _objc_retainAutorelease(param_3);
  pcVar2 = (char *)objc_stub::UTF8String(self);
  sVar3 = _strlen(pcVar2);
  pvVar4 = (void *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE22__init_internal_bufferB9nqe220106Em
                             (local_58,sVar3);
  _memmove(pvVar4,pcVar2,sVar3);
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __ZN3Ice4Tree16removeRuleByNameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
            (IVar1,local_58);
  if (local_41 < '\0') {
    __ZdlPv(local_58[0]);
  }
  return;
}


// ===== PMKAST::extendReparsedRange: @ 0004c870 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

_NSRange PMKAST::extendReparsedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  _NSRange _Var3;
  _NSRange _Var4;
  _NSRange _Var5;
  ID IVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ID *pIVar10;
  unsigned_long_long uVar11;
  ulong uVar12;
  unsigned_long_long uVar13;
  long lVar14;
  _NSRange _Var15;
  undefined **local_88 [3];
  undefined ***local_70;
  undefined **local_68 [3];
  undefined ***local_50;
  long local_48;
  
  uVar11 = param_3.field0_0x0;
  local_48 = *(long *)PTR____stack_chk_guard_000e9b00;
  if (uVar11 == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3.field1_0x8;
    _Var15 = (_NSRange)(auVar2 << 0x40);
  }
  else {
    IVar6 = objc_stub::ast(param_1);
    lVar14 = uVar11 - 1;
    lVar7 = __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(IVar6,lVar14,0);
    lVar8 = *(long *)(lVar7 + 0x40);
    _Var15 = param_3;
    if (((lVar8 != 0) && (*(short *)(lVar8 + 8) == 4)) && ((*(byte *)(lVar8 + 0x7c) & 1) == 0)) {
      uVar9 = __ZN3Ice4Node11startOffsetEv();
      _Var15 = (_NSRange)
               _NSUnionRange(uVar9,*(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x28),uVar11,
                             param_3.field1_0x8);
      if (_Var15.field0_0x0 == 0) goto LAB_0004c948;
      lVar14 = _Var15.field0_0x0 - 1;
    }
    IVar6 = objc_stub::ast(param_1);
    lVar7 = __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(IVar6,lVar14,0);
    lVar8 = *(long *)(lVar7 + 0x40);
    if (((lVar8 != 0) && (*(short *)(lVar8 + 8) == 0x8d)) && ((*(byte *)(lVar8 + 0x7c) & 1) == 0)) {
      uVar9 = __ZN3Ice4Node11startOffsetEv();
      _Var15 = (_NSRange)
               _NSUnionRange(uVar9,*(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x28),_Var15.field0_0x0
                             ,_Var15.field1_0x8);
    }
  }
LAB_0004c948:
  uVar11 = _Var15.field1_0x8;
  uVar13 = _Var15.field0_0x0;
  IVar6 = objc_stub::ast(param_1);
  uVar12 = (ulong)*(char *)(IVar6 + 0x17);
  if ((long)uVar12 < 0) {
    uVar12 = *(ulong *)(IVar6 + 8);
  }
  uVar1 = uVar11 + uVar13;
  if (uVar1 < uVar12) {
    pIVar10 = (ID *)objc_stub::ast(param_1);
    if (*(char *)((long)pIVar10 + 0x17) < '\0') {
      pIVar10 = (ID *)*pIVar10;
    }
    if (*(short *)((long)pIVar10 + uVar1 * 2) == 10) {
      uVar11 = uVar11 + 1;
    }
    else {
      IVar6 = objc_stub::ast(param_1);
      lVar7 = __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(IVar6,uVar1 - 1,1);
      if (((lVar7 != 0) && (lVar8 = __ZN3Ice4Node14nextInSequenceEv(), lVar8 != 0)) &&
         (lVar8 = __ZN3Ice4Node14nextInSequenceEv(lVar7), *(short *)(lVar8 + 8) == 7)) {
        lVar7 = __ZN3Ice4Node14nextInSequenceEv(lVar7);
        uVar11 = *(long *)(lVar7 + 0x28) + uVar11;
      }
    }
  }
  _Var5.field1_0x8 = uVar11;
  _Var5.field0_0x0 = uVar13;
  _Var4.field1_0x8 = uVar11;
  _Var4.field0_0x0 = uVar13;
  _Var3.field1_0x8 = uVar11;
  _Var3.field0_0x0 = uVar13;
  _Var15.field1_0x8 = uVar11;
  _Var15.field0_0x0 = uVar13;
  if ((param_3 == _Var5) || (param_3 = _Var4, uVar11 + uVar13 == 0)) goto LAB_0004cb2c;
  IVar6 = objc_stub::ast(param_1);
  uVar9 = __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(IVar6,uVar11 + uVar13 + -1,0);
  local_68[0] = &
                PTR___ZNSt3__110__function6__funcIZ30__PMKAST_extendReparsedRange__E3__4FbPN3Ice4NodeEEED1Ev_000e50b8
  ;
  local_50 = local_68;
  lVar7 = __ZN3Ice4Node13ancestorWhereENSt3__18functionIFbPS0_EEENS_12LevelSettingE
                    (uVar9,local_68,2);
  if (local_50 == local_68) {
    lVar8 = 0x20;
LAB_0004ca44:
    (**(code **)((long)*local_50 + lVar8))();
  }
  else if (local_50 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_0004ca44;
  }
  param_3 = _Var15;
  if ((lVar7 != 0) &&
     (IVar6 = objc_stub::ast(param_1), param_3 = _Var3, lVar7 != *(long *)(IVar6 + 0x130))) {
    uVar9 = __ZN3Ice4Node11startOffsetEv(lVar7);
    param_3 = (_NSRange)_NSUnionRange(uVar9,*(undefined8 *)(lVar7 + 0x28),uVar13,uVar11);
  }
  IVar6 = objc_stub::ast(param_1);
  uVar9 = __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(IVar6,param_3.field0_0x0,0);
  local_88[0] = &
                PTR___ZNSt3__110__function6__funcIZ30__PMKAST_extendReparsedRange__E3__5FbPN3Ice4NodeEEED1Ev_000e5138
  ;
  local_70 = local_88;
  lVar7 = __ZN3Ice4Node13ancestorWhereENSt3__18functionIFbPS0_EEENS_12LevelSettingE
                    (uVar9,local_88,2);
  if (local_70 == local_88) {
    lVar8 = 0x20;
LAB_0004cadc:
    (**(code **)((long)*local_70 + lVar8))();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_0004cadc;
  }
  if ((lVar7 != 0) && (IVar6 = objc_stub::ast(param_1), lVar7 != *(long *)(IVar6 + 0x130))) {
    uVar9 = __ZN3Ice4Node11startOffsetEv(lVar7);
    param_3 = (_NSRange)
              _NSUnionRange(uVar9,*(undefined8 *)(lVar7 + 0x28),param_3.field0_0x0,
                            param_3.field1_0x8);
  }
LAB_0004cb2c:
  if (*(long *)PTR____stack_chk_guard_000e9b00 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_3;
}


// ===== PMKAST::removeMarkersAndSpaceFromStartOfRange:node:keepLastSpace: @ 0004cbdc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x24 bytes */

void PMKAST::removeMarkersAndSpaceFromStartOfRange_node_keepLastSpace_
               (ID param_1,SEL param_2,_NSRange *param_3,Node *param_4,bool param_5)

{
  SEL extraout_x1;
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_80;
  undefined **local_78;
  undefined1 *puStack_70;
  undefined ***local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e9b00;
  local_80 = *(long *)((long)&param_4->field10_0x46 + 2);
  if (local_80 != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(local_80 + 0x18) == 7) {
LAB_0004cc8c:
        lVar2 = *(long *)(local_80 + 0x28);
        param_3->field0_0x0 = param_3->field0_0x0 + lVar2;
        param_3->field1_0x8 = param_3->field1_0x8 - lVar2;
        lVar2 = local_80;
      }
      else {
        if (*(int *)(local_80 + 0x18) == 6) {
          local_78 = &
                     PTR___ZNSt3__110__function6__funcIZ67__PMKAST_removeMarkersAndSpaceFromStartOfRange_node_keepLastSpace__E3__6FbPN3Ice4NodeEEED1Ev_000e51b8
          ;
          puStack_70 = (undefined1 *)&local_80;
          local_60 = &local_78;
          auVar3 = __ZN3Ice4Node16hasAncestorWhereENSt3__18functionIFbPS0_EEE(param_4,&local_78);
          param_2 = auVar3._8_8_;
          if (local_60 == &local_78) {
            lVar1 = 0x20;
          }
          else {
            if (local_60 == (undefined ***)0x0) {
              if (auVar3._0_4_ != 0) goto LAB_0004cc8c;
              goto LAB_0004ccb0;
            }
            lVar1 = 0x28;
          }
          (**(code **)((long)*local_60 + lVar1))();
          param_2 = extraout_x1;
          if ((auVar3._0_8_ & 1) != 0) goto LAB_0004cc8c;
        }
LAB_0004ccb0:
        if (3 < *(uint *)(local_80 + 0x18)) break;
      }
      auVar3 = __ZN3Ice4Node14nextInSequenceEv(local_80,param_2);
      param_2 = auVar3._8_8_;
      local_80 = auVar3._0_8_;
    } while (local_80 != 0);
    if (((param_5 != 0) && (lVar2 != 0)) && (*(int *)(lVar2 + 0x18) == 7)) {
      lVar2 = *(long *)(lVar2 + 0x28);
      param_3->field0_0x0 = param_3->field0_0x0 - lVar2;
      param_3->field1_0x8 = param_3->field1_0x8 + lVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== PMKAST::addLineBreakToEndOfRange:markdown: @ 0004cd6c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void PMKAST::addLineBreakToEndOfRange_markdown_(ID param_1,SEL param_2,_NSRange *param_3,ID param_4)

{
  unsigned_long_long uVar1;
  unsigned_long_long uVar2;
  ID IVar3;
  ulong uVar4;
  
  uVar1 = param_3->field0_0x0;
  uVar2 = param_3->field1_0x8;
  IVar3 = objc_stub::length(param_4);
  uVar4 = uVar2 + uVar1;
  if ((uVar4 < IVar3) && (IVar3 = objc_stub::characterAtIndex_(param_4,uVar4), (int)IVar3 == 0xd)) {
    uVar4 = uVar4 + 1;
    param_3->field1_0x8 = param_3->field1_0x8 + 1;
  }
  IVar3 = objc_stub::length(param_4);
  if ((uVar4 < IVar3) && (IVar3 = objc_stub::characterAtIndex_(param_4,uVar4), (int)IVar3 == 10)) {
    param_3->field1_0x8 = param_3->field1_0x8 + 1;
  }
  return;
}


// ===== PMKAST::removeLineBreakFromEndOfRange:markdown: @ 0004ce1c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void PMKAST::removeLineBreakFromEndOfRange_markdown_
               (ID param_1,SEL param_2,_NSRange *param_3,ID param_4)

{
  long lVar1;
  unsigned_long_long uVar2;
  unsigned_long_long uVar3;
  ID IVar4;
  ulong uVar5;
  
  uVar2 = param_3->field0_0x0;
  uVar3 = param_3->field1_0x8;
  IVar4 = objc_stub::length(param_4);
  lVar1 = uVar3 + uVar2;
  uVar5 = lVar1 - 1;
  if ((uVar5 < IVar4) && (IVar4 = objc_stub::characterAtIndex_(param_4,uVar5), (int)IVar4 == 10)) {
    uVar5 = lVar1 - 2;
    param_3->field1_0x8 = param_3->field1_0x8 - 1;
  }
  IVar4 = objc_stub::length(param_4);
  if ((uVar5 < IVar4) && (IVar4 = objc_stub::characterAtIndex_(param_4,uVar5), (int)IVar4 == 0xd)) {
    param_3->field1_0x8 = param_3->field1_0x8 - 1;
  }
  return;
}


// ===== PMKAST::parseInlinesOnly @ 0004ced0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKAST::parseInlinesOnly(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}


// ===== PMKAST::ast @ 0004ced8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void * PMKAST::ast(ID param_1,SEL param_2)

{
  return *(void **)(param_1 + 0x10);
}


// ===== PMKAST::setAst: @ 0004cee0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKAST::setAst_(ID param_1,SEL param_2,void *param_3)

{
  *(void **)(param_1 + 0x10) = param_3;
  return;
}


// ===== PMKAST::replaceBatch @ 0004cee8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void * PMKAST::replaceBatch(ID param_1,SEL param_2)

{
  return *(void **)(param_1 + 0x18);
}


// ===== PMKAST::setReplaceBatch: @ 0004cef0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKAST::setReplaceBatch_(ID param_1,SEL param_2,void *param_3)

{
  *(void **)(param_1 + 0x18) = param_3;
  return;
}


// ===== PMKAST::footnoteDefinitionRangeForLabel: @ 0004dc0c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

_NSRange PMKAST::footnoteDefinitionRangeForLabel_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  unsigned_long_long *puVar3;
  unsigned_long_long uVar4;
  unsigned_long_long uVar5;
  _NSRange _Var6;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48 [2];
  char local_31;
  
  IVar1 = objc_stub::ast(param_1);
  __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEC2B9nqe220106ILi0EEEPKDs
            (local_48,L"footnotes");
  uVar2 = __ZNK3Ice4Tree21getLabeledConnectionsENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
                    (IVar1,local_48);
  if (local_31 < '\0') {
    __ZdlPv(local_48[0]);
  }
  if (param_3 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_60);
  }
  puVar3 = (unsigned_long_long *)
           __ZN3Ice18LabeledConnections21lookupFirstDefinitionENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
                     (uVar2,&local_60);
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  if (puVar3 == (unsigned_long_long *)0x0) {
    uVar5 = 0x7fffffffffffffff;
    uVar4 = 0;
  }
  else {
    uVar5 = *puVar3;
    uVar4 = *(unsigned_long_long *)(puVar3[1] + 0x28);
  }
  _Var6.field1_0x8 = uVar4;
  _Var6.field0_0x0 = uVar5;
  return _Var6;
}


// ===== PMKAST::footnoteReferenceRangeForLabel: @ 0004dd2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

_NSRange PMKAST::footnoteReferenceRangeForLabel_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  unsigned_long_long *puVar3;
  unsigned_long_long uVar4;
  unsigned_long_long uVar5;
  _NSRange _Var6;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48 [2];
  char local_31;
  
  IVar1 = objc_stub::ast(param_1);
  __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEC2B9nqe220106ILi0EEEPKDs
            (local_48,L"footnotes");
  uVar2 = __ZNK3Ice4Tree21getLabeledConnectionsENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
                    (IVar1,local_48);
  if (local_31 < '\0') {
    __ZdlPv(local_48[0]);
  }
  if (param_3 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_60);
  }
  puVar3 = (unsigned_long_long *)
           __ZN3Ice18LabeledConnections20lookupFirstReferenceENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
                     (uVar2,&local_60);
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  if (puVar3 == (unsigned_long_long *)0x0) {
    uVar5 = 0x7fffffffffffffff;
    uVar4 = 0;
  }
  else {
    uVar5 = *puVar3;
    uVar4 = *(unsigned_long_long *)(puVar3[1] + 0x28);
  }
  _Var6.field1_0x8 = uVar4;
  _Var6.field0_0x0 = uVar5;
  return _Var6;
}


// ===== PMKAST::percentEscapedURL: @ 000782d0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::percentEscapedURL_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (param_3 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_38);
  }
  __ZN3PMK13StringBuilder13safeURLStringERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (local_50,&local_38);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_50);
  if (local_39 < '\0') {
    __ZdlPv(local_50[0]);
  }
  if (local_28 < 0) {
    __ZdlPv(local_38);
  }
  return IVar1;
}


// ===== PMKAST::markdownImageWithLabel:url:title: @ 000783b0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000784ac) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::markdownImageWithLabel_url_title_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined8 local_90 [2];
  char local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  if (param_4 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_60);
  }
  if (param_5 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    objc_stub::iceString(param_5,&local_78);
  }
  __ZN3PMK13StringBuilder13markdownImageERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEES9_S9_
            (local_90,&local_48,&local_60,&local_78);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_90);
  if (local_79 < '\0') {
    __ZdlPv(local_90[0]);
  }
  if (local_68 < 0) {
    __ZdlPv(local_78);
  }
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  return IVar1;
}


// ===== PMKAST::markdownFileWithLabel:url:preview: @ 00078568 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x24 bytes */

ID PMKAST::markdownFileWithLabel_url_preview_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  undefined8 local_78 [2];
  char local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  if (param_4 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_60);
  }
  __ZN3PMK13StringBuilder12markdownFileERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEES9_b
            (local_78,&local_48,&local_60,param_5);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_78);
  if (local_61 < '\0') {
    __ZdlPv(local_78[0]);
  }
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::safeLabelString: @ 000786c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::safeLabelString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (param_3 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_38);
  }
  __ZN3PMK13StringBuilder15safeLabelStringERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (local_50,&local_38);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_50);
  if (local_39 < '\0') {
    __ZdlPv(local_50[0]);
  }
  if (local_28 < 0) {
    __ZdlPv(local_38);
  }
  return IVar1;
}


// ===== PMKAST::markdownLinkWithLabel:url:title:preview: @ 000787a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000788f4) */
/* WARNING: Removing unreachable block (ram,0x00078904) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x2c bytes */

ID PMKAST::markdownLinkWithLabel_url_title_preview_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  ID IVar1;
  undefined8 *local_c0 [2];
  char local_a9;
  undefined8 local_a8;
  char local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  if (param_4 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_60);
  }
  if (param_5 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    objc_stub::iceString(param_5,&local_78);
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (param_6 != 0) {
    __ZNSt3__14pairINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEES6_EC2B9nqe220106IRA8_KDsRA5_S9_Li0EEEOT_OT0_
              (local_c0,L"preview",L"true");
    __ZNSt3__16vectorINS_4pairINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEES7_EENS5_IS8_EEE9push_backB9nqe220106EOS8_
              (&local_90,local_c0);
    if (local_91 < '\0') {
      __ZdlPv(local_a8);
    }
    if (local_a9 < '\0') {
      __ZdlPv(local_c0[0]);
    }
  }
  __ZN3PMK13StringBuilder12markdownLinkERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEES9_S9_RKNS1_6vectorINS1_4pairIS7_S7_EENS5_ISC_EEEE
            (local_c0,&local_48,&local_60,&local_78,&local_90);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_c0);
  if (local_a9 < '\0') {
    __ZdlPv(local_c0[0]);
  }
  local_c0[0] = &local_90;
  __ZNSt3__16vectorINS_4pairINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEES7_EENS5_IS8_EEE16__destroy_vectorclB9nqe220106Ev
            (local_c0);
  if (local_68 < 0) {
    __ZdlPv(local_78);
  }
  return IVar1;
}


// ===== PMKAST::footnoteReferenceWithLabel: @ 000789e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::footnoteReferenceWithLabel_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (param_3 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_38);
  }
  __ZN3PMK13StringBuilder17footnoteReferenceERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (local_50,&local_38);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_50);
  if (local_39 < '\0') {
    __ZdlPv(local_50[0]);
  }
  if (local_28 < 0) {
    __ZdlPv(local_38);
  }
  return IVar1;
}


// ===== PMKAST::referenceDefinitionWithLabel:text: @ 00078ac4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKAST::referenceDefinitionWithLabel_text_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 local_78 [2];
  char local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  if (param_4 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_60);
  }
  __ZN3PMK13StringBuilder19referenceDefinitionERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEES9_
            (local_78,&local_48,&local_60);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_78);
  if (local_61 < '\0') {
    __ZdlPv(local_78[0]);
  }
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::codeBlockWithString: @ 00078c14 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::codeBlockWithString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (param_3 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_38);
  }
  __ZN3PMK13StringBuilder9codeBlockERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (local_50,&local_38);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_50);
  if (local_39 < '\0') {
    __ZdlPv(local_50[0]);
  }
  if (local_28 < 0) {
    __ZdlPv(local_38);
  }
  return IVar1;
}


// ===== PMKAST::tableStringWithRows:columns: @ 00078cf4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKAST::tableStringWithRows_columns_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID IVar1;
  undefined8 local_38 [2];
  char local_21;
  
  __ZN3PMK13StringBuilder5tableEmm(local_38,param_3,param_4);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}


// ===== PMKAST::taskWithText:completed: @ 00078d70 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x1c bytes */

ID PMKAST::taskWithText_completed_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *self;
  ID IVar2;
  
  self = &cf___x_;
  if (param_4 == 0) {
    self = &cf____;
  }
  pcVar1 = &cf___;
  if (param_3 != 0) {
    pcVar1 = (cfstringStruct *)param_3;
  }
  IVar2 = objc_stub::stringByAppendingString_((ID)self,pcVar1);
  return IVar2;
}


// ===== PMKAST::percentDecodedURL: @ 00078df0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::percentDecodedURL_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (param_3 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_38);
  }
  __ZN3PMK13FilenameMatch13percentDecodeERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (local_50,&local_38);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_50);
  if (local_39 < '\0') {
    __ZdlPv(local_50[0]);
  }
  if (local_28 < 0) {
    __ZdlPv(local_38);
  }
  return IVar1;
}


// ===== PMKAST::filenameVariantsForURL: @ 00078ed0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::filenameVariantsForURL_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  long local_78;
  long lStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long *local_48;
  
  if (param_3 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_60);
  }
  __ZN3PMK13FilenameMatch16filenameVariantsERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_78,&local_60);
  self = objc_stub::arrayWithCapacity_
                   ((ID)&_OBJC_CLASS___NSMutableArray,
                    (lStack_70 - local_78 >> 3) * -0x5555555555555555);
  for (; local_78 != lStack_70; local_78 = local_78 + 0x18) {
    IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_78);
    objc_stub::addObject_(self,IVar1);
  }
  local_48 = &local_78;
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_48);
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  return self;
}


// ===== PMKAST::toPMKASTOperationResultArray: @ 0007903c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKAST::toPMKASTOperationResultArray_(ID param_1,SEL param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ID self;
  ID IVar3;
  ID self_00;
  
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  puVar2 = *(undefined8 **)((long)param_3 + 8);
  for (puVar1 = *(undefined8 **)param_3; puVar1 != puVar2; puVar1 = puVar1 + 7) {
    IVar3 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,puVar1 + 2);
    self_00 = _objc_opt_new(&objc::class_t::PMKASTOperationResult);
    objc_stub::setReplacementString_(self_00,IVar3);
    objc_stub::setReplacementRange_(self_00,*puVar1,puVar1[1]);
    objc_stub::setProposedSelection_(self_00,puVar1[5],puVar1[6]);
    objc_stub::addObject_(self,self_00);
  }
  return self;
}


// ===== PMKAST::resultForTextOperation:inRange:selectionRange: @ 0007914c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::resultForTextOperation_inRange_selectionRange_
             (ID param_1,SEL param_2,Operation *param_3,_NSRange param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_70 [24];
  undefined1 *local_58;
  
  IVar1 = objc_stub::ast(param_1);
  (*(code *)*param_3->field0_0x0)
            (auStack_70,param_3,IVar1,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
             param_5.field1_0x8);
  IVar1 = _objc_opt_class(param_1);
  IVar1 = objc_stub::toPMKASTOperationResultArray_(IVar1,auStack_70);
  local_58 = auStack_70;
  __ZNSt3__16vectorIN3PMK9Operation6ResultENS_9allocatorIS3_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_58);
  return IVar1;
}


// ===== PMKAST::applyTextOperationResults: @ 00079214 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKAST::applyTextOperationResults_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e9b00;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_e8,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        IVar3 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar2 = objc_stub::replacementRange(IVar3);
        IVar3 = objc_stub::replacementString(IVar3);
        objc_stub::batchReplaceRange_withMarkdown_(param_1,IVar2,extraout_x1,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar1 != IVar5);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_e8,0x10);
    } while (IVar1 != 0);
  }
  IVar1 = objc_stub::count(param_3);
  if (IVar1 != 0) {
    objc_stub::batchReplaceCommit(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== PMKAST::indent:selectionRange: @ 000793b4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::indent_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation6IndentC1ENS0_12IndentActionENS0_11IndentStyleE(auStack_50,0,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::outdent:selectionRange: @ 0007942c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::outdent_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation6IndentC1ENS0_12IndentActionENS0_11IndentStyleE(auStack_50,1,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::toggleInlineStyle:selectionRange:style: @ 000794a4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::toggleInlineStyle_selectionRange_style_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4,unsigned_long_long param_5)

{
  ID IVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [16];
  
  if (param_5 - 1 < 0xb) {
    uVar2 = *(undefined4 *)(&DAT_000bb0a8 + (param_5 - 1) * 4);
  }
  else {
    uVar2 = 0;
  }
  __ZN3PMK9Operation17ToggleInlineStyleC1ENS0_13InlineTogglesE(auStack_50,uVar2);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::toggleBlockStyle:selectionRange:style: @ 00079534 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::toggleBlockStyle_selectionRange_style_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4,unsigned_long_long param_5)

{
  int iVar1;
  ID IVar2;
  undefined1 auStack_50 [16];
  
  iVar1 = 0;
  if (param_5 - 1 < 0x11) {
    iVar1 = (int)(param_5 - 1) + 1;
  }
  __ZN3PMK9Operation16ToggleBlockStyleC1ENS0_12BlockTogglesE(auStack_50,iVar1);
  IVar2 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar2;
}


// ===== PMKAST::toggleTask:selectionRange:style: @ 000795b0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::toggleTask_selectionRange_style_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4,unsigned_long_long param_5)

{
  undefined1 uVar1;
  ID IVar2;
  undefined1 auStack_50 [16];
  
  uVar1 = 2;
  if (param_5 != 1) {
    uVar1 = param_5 == 2;
  }
  __ZN3PMK9Operation10ToggleTaskC1ENS0_14ToggleTaskTypeE(auStack_50,uVar1);
  IVar2 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar2;
}


// ===== PMKAST::insertNewlineInRange:selectionRange: @ 00079634 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::insertNewlineInRange_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID self;
  ID IVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation11ExitInlinesC1Ev(auStack_48);
  self = objc_stub::resultForTextOperation_inRange_selectionRange_
                   (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                    param_4.field1_0x8);
  IVar1 = objc_stub::count(self);
  if (IVar1 == 0) {
    __ZN3PMK9Operation13InsertNewlineC1ENS0_27InsertNewlineListItemOptionENS0_11IndentStyleE
              (auStack_58,0,0);
    self = objc_stub::resultForTextOperation_inRange_selectionRange_
                     (param_1,auStack_58,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                      param_4.field1_0x8);
  }
  return self;
}


// ===== PMKAST::normalizeIndentationInRange:selectionRange: @ 0007971c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::normalizeIndentationInRange_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation20NormalizeIndentationC1ENS0_11IndentStyleE(auStack_50,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::normalizeCalloutInRange:selectionRange: @ 00079790 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::normalizeCalloutInRange_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation17NormalizeCalloutsC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::renumberOrderedListInRange:selectionRange: @ 00079800 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::renumberOrderedListInRange_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation19RenumberOrderedListC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::removeStrayMetaCommentInRange:selectionRange: @ 00079870 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::removeStrayMetaCommentInRange_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation23RemoveStrayMetaCommentsC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::addTagToTop:selectionRange: @ 000798e0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::addTagToTop_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_68;
  undefined8 local_60;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation11AddTagAtTopC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_68,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_68 = &PTR___ZN3PMK9Operation11AddTagAtTop3runERKN3Ice4TreeEllll_000e3168;
  if (local_49 < '\0') {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::addTagToBottom:selectionRange: @ 00079a00 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::addTagToBottom_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_68;
  undefined8 local_60;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation6AddTagC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_68,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_68 = &PTR___ZN3PMK9Operation6AddTag3runERKN3Ice4TreeEllll_000e3140;
  if (local_49 < '\0') {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::removeTag:selectionRange: @ 00079b20 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::removeTag_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_68;
  undefined8 local_60;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation9RemoveTagC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_68,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_68 = &PTR___ZN3PMK9Operation9RemoveTag3runERKN3Ice4TreeEllll_000e3190;
  if (local_49 < '\0') {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::renameTag:to:selectionRange: @ 00079c40 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00079d38) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::renameTag_to_selectionRange_
             (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined **local_a8;
  undefined8 local_a0;
  char local_89;
  undefined8 local_88;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (param_3 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_58);
  }
  if (param_4 == 0) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_70);
  }
  __ZN3PMK9Operation9RenameTagC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEESA_
            (&local_a8,&local_58,&local_70);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_a8,0,0,param_5.field0_0x0,param_5.field1_0x8);
  local_a8 = &PTR___ZN3PMK9Operation9RenameTag3runERKN3Ice4TreeEllll_000e31b8;
  if (local_71 < '\0') {
    __ZdlPv(local_88);
  }
  if (local_89 < '\0') {
    __ZdlPv(local_a0);
  }
  if (local_60 < 0) {
    __ZdlPv(local_70);
  }
  return IVar1;
}


// ===== PMKAST::escapeTag:selectionRange: @ 00079dc8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::escapeTag_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_68;
  undefined8 local_60;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation9EscapeTagC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_68,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_68 = &PTR___ZN3PMK9Operation9EscapeTag3runERKN3Ice4TreeEllll_000e31e0;
  if (local_49 < '\0') {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::appendText:selectionRange: @ 00079ee8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::appendText_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_70;
  undefined8 local_68;
  char local_51;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation10AppendTextC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEEb
            (&local_70,&local_48,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_70,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_70 = &PTR___ZN3PMK9Operation10AppendText3runERKN3Ice4TreeEllll_000e7078;
  if (local_51 < '\0') {
    __ZdlPv(local_68);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::appendTextExact:selectionRange: @ 0007a00c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::appendTextExact_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_70;
  undefined8 local_68;
  char local_51;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation10AppendTextC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEEb
            (&local_70,&local_48,1);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_70,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_70 = &PTR___ZN3PMK9Operation10AppendText3runERKN3Ice4TreeEllll_000e7078;
  if (local_51 < '\0') {
    __ZdlPv(local_68);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::prependText:selectionRange: @ 0007a130 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::prependText_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_68;
  undefined8 local_60;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation11PrependTextC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_68,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_68 = &PTR___ZN3PMK9Operation11PrependText3runERKN3Ice4TreeEllll_000e12d8;
  if (local_49 < '\0') {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::replaceTitle:selectionRange: @ 0007a250 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::replaceTitle_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_68;
  undefined8 local_60;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation12ReplaceTitleC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_68,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_68 = &PTR___ZN3PMK9Operation12ReplaceTitle3runERKN3Ice4TreeEllll_000e70b8;
  if (local_49 < '\0') {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::titleLineRange @ 0007a370 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange PMKAST::titleLineRange(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  _NSRange _Var2;
  unsigned_long_long local_60 [8];
  long local_20;
  char local_18;
  
  objc_stub::ast(param_1);
  __ZN3PMK9Operation9titleLineERKN3Ice4TreeE(local_60);
  if (local_18 == '\x01') {
    uVar1 = local_20 - local_60[0];
  }
  else {
    uVar1 = 0;
    local_60[0] = 0x7fffffffffffffff;
  }
  _Var2.field1_0x8 = uVar1;
  _Var2.field0_0x0 = local_60[0];
  return _Var2;
}


// ===== PMKAST::updateWikiLinks:to:skipInTitle:selectionRange: @ 0007a3b8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0007a518) */
/* WARNING: Removing unreachable block (ram,0x0007a450) */
/* WARNING: Removing unreachable block (ram,0x0007a478) */
/* WARNING: Removing unreachable block (ram,0x0007a528) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x34 bytes */

ID PMKAST::updateWikiLinks_to_skipInTitle_selectionRange_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,_NSRange param_6)

{
  ID IVar1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined **local_b0 [2];
  undefined8 local_a0;
  char local_89;
  undefined8 local_88;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if (param_3 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_58);
  }
  if (param_4 == 0) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_70);
  }
  uStack_c8 = uStack_50;
  local_d0 = local_58;
  local_c0 = local_48;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  local_e0 = local_60;
  __ZN3PMK9Operation15UpdateWikiLinksC1ENSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEES8_b
            (local_b0,&local_d0,&local_f0,param_5);
  if (local_e0 < 0) {
    __ZdlPv(local_f0);
  }
  if (local_c0 < 0) {
    __ZdlPv(local_d0);
  }
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,local_b0,0,0,param_6.field0_0x0,param_6.field1_0x8);
  local_b0[0] = &PTR___ZN3PMK9Operation15UpdateWikiLinks3runERKN3Ice4TreeEllll_000e7d58;
  if (local_71 < '\0') {
    __ZdlPv(local_88);
  }
  if (local_89 < '\0') {
    __ZdlPv(local_a0);
  }
  return IVar1;
}


// ===== PMKAST::updateLinksURL:toURL:selectionRange: @ 0007a638 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0007a730) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::updateLinksURL_toURL_selectionRange_
             (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined **local_a8;
  undefined8 local_a0;
  char local_89;
  undefined8 local_88;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (param_3 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_58);
  }
  if (param_4 == 0) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_70);
  }
  __ZN3PMK9Operation11UpdateLinksC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEESA_
            (&local_a8,&local_58,&local_70);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_a8,0,0,param_5.field0_0x0,param_5.field1_0x8);
  local_a8 = &PTR___ZN3PMK9Operation11UpdateLinks3runERKN3Ice4TreeEllll_000e0a28;
  if (local_71 < '\0') {
    __ZdlPv(local_88);
  }
  if (local_89 < '\0') {
    __ZdlPv(local_a0);
  }
  if (local_60 < 0) {
    __ZdlPv(local_70);
  }
  return IVar1;
}


// ===== PMKAST::removeLinkWithURL:selectionRange: @ 0007a7c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKAST::removeLinkWithURL_selectionRange_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  undefined **local_68;
  undefined8 local_60;
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (param_3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_48);
  }
  __ZN3PMK9Operation10RemoveLinkC1ERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_68,0,0,param_4.field0_0x0,param_4.field1_0x8);
  local_68 = &PTR___ZN3PMK9Operation10RemoveLink3runERKN3Ice4TreeEllll_000e0a68;
  if (local_49 < '\0') {
    __ZdlPv(local_60);
  }
  if (local_38 < 0) {
    __ZdlPv(local_48);
  }
  return IVar1;
}


// ===== PMKAST::insertThematicBreak:selectionRange: @ 0007a8e0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::insertThematicBreak_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation11InsertBlockC1ENS0_15InsertBlockTypeE(auStack_50,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::insertTable:selectionRange: @ 0007a954 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::insertTable_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation11InsertBlockC1ENS0_15InsertBlockTypeE(auStack_50,1);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::sortTableRowsAscendingIn:selectionRange: @ 0007a9c8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::sortTableRowsAscendingIn_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  long lVar2;
  undefined **local_98 [3];
  undefined ***local_80;
  undefined **local_78 [2];
  long alStack_68 [3];
  long *local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e9b00;
  local_98[0] = &
                PTR___ZNSt3__110__function6__funcIZL23localizedCellComparatorvE3__0FiRKNS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEESA_EED1Ev_000e7458
  ;
  local_80 = local_98;
  __ZN3PMK9Operation11MutateTableC1ENS0_17MutateTableActionENSt3__18functionIFiRKNS3_12basic_stringIDsNS3_11char_traitsIDsEENS3_9allocatorIDsEEEESC_EEE
            (local_78,0xe,local_98);
  if (local_80 == local_98) {
    lVar2 = 0x20;
LAB_0007aa44:
    (**(code **)((long)*local_80 + lVar2))();
  }
  else if (local_80 != (undefined ***)0x0) {
    lVar2 = 0x28;
    goto LAB_0007aa44;
  }
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,local_78,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  local_78[0] = &PTR___ZN3PMK9Operation11MutateTable3runERKN3Ice4TreeEllll_000e4820;
  if (local_50 == alStack_68) {
    lVar2 = 0x20;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0007aab8;
    lVar2 = 0x28;
  }
  (**(code **)(*local_50 + lVar2))();
LAB_0007aab8:
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== PMKAST::sortTableRowsDescendingIn:selectionRange: @ 0007ab48 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::sortTableRowsDescendingIn_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  long lVar2;
  undefined **local_98 [3];
  undefined ***local_80;
  undefined **local_78 [2];
  long alStack_68 [3];
  long *local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e9b00;
  local_98[0] = &
                PTR___ZNSt3__110__function6__funcIZL23localizedCellComparatorvE3__0FiRKNS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEESA_EED1Ev_000e7458
  ;
  local_80 = local_98;
  __ZN3PMK9Operation11MutateTableC1ENS0_17MutateTableActionENSt3__18functionIFiRKNS3_12basic_stringIDsNS3_11char_traitsIDsEENS3_9allocatorIDsEEEESC_EEE
            (local_78,0xf,local_98);
  if (local_80 == local_98) {
    lVar2 = 0x20;
LAB_0007abc4:
    (**(code **)((long)*local_80 + lVar2))();
  }
  else if (local_80 != (undefined ***)0x0) {
    lVar2 = 0x28;
    goto LAB_0007abc4;
  }
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,local_78,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  local_78[0] = &PTR___ZN3PMK9Operation11MutateTable3runERKN3Ice4TreeEllll_000e4820;
  if (local_50 == alStack_68) {
    lVar2 = 0x20;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0007ac38;
    lVar2 = 0x28;
  }
  (**(code **)(*local_50 + lVar2))();
LAB_0007ac38:
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== PMKAST::deletePrevious:selectionRange: @ 0007acc8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::deletePrevious_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation14DeletePreviousC1ENS0_11IndentStyleE(auStack_50,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::deleteNext:selectionRange: @ 0007ad3c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::deleteNext_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation10DeleteNextC1ENS0_11IndentStyleE(auStack_50,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::toggleFoldInRange:selectionRange: @ 0007adb0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::toggleFoldInRange_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation10ToggleFoldC1ENS0_14ToggleFoldTypeE(auStack_50,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::foldAllHeadingSelectionRange: @ 0007ae24 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKAST::foldAllHeadingSelectionRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  ID IVar1;
  undefined1 auStack_40 [16];
  
  __ZN3PMK9Operation10ToggleFoldC1ENS0_14ToggleFoldTypeE(auStack_40,1);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_40,0,0,param_3.field0_0x0,param_3.field1_0x8);
  return IVar1;
}


// ===== PMKAST::unfoldAtRangeEdges:selectionRange: @ 0007ae88 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::unfoldAtRangeEdges_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation25OperationUnfoldRangeEdgesC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::unfoldAllHeadingSelectionRange: @ 0007aef8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKAST::unfoldAllHeadingSelectionRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  ID IVar1;
  undefined1 auStack_40 [16];
  
  __ZN3PMK9Operation10ToggleFoldC1ENS0_14ToggleFoldTypeE(auStack_40,2);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_40,0,0,param_3.field0_0x0,param_3.field1_0x8);
  return IVar1;
}


// ===== PMKAST::escapePipesInRange:selectionRange: @ 0007af5c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::escapePipesInRange_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation11EscapePipesC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::insertFootnoteWithDefinitionText:atRange:selectionRange: @ 0007afcc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::insertFootnoteWithDefinitionText_atRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  ID IVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  char local_41;
  
  if (param_3 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_78);
  }
  __ZN3PMK9Operation14InsertFootnoteC1ENSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_60,&local_78);
  if (local_68 < 0) {
    __ZdlPv(local_78);
  }
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_60,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
                     param_5.field1_0x8);
  local_60 = &PTR___ZN3PMK9Operation14InsertFootnote3runERKN3Ice4TreeEllll_000e4c00;
  if (local_41 < '\0') {
    __ZdlPv(local_58);
  }
  return IVar1;
}


// ===== PMKAST::insertFootnoteDefinitionWithText:forReferenceAtRange:selectionRange: @ 0007b0f8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::insertFootnoteDefinitionWithText_forReferenceAtRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  ID IVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  char local_41;
  
  if (param_3 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_78);
  }
  __ZN3PMK9Operation24InsertFootnoteDefinitionC1ENSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_60,&local_78);
  if (local_68 < 0) {
    __ZdlPv(local_78);
  }
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,&local_60,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
                     param_5.field1_0x8);
  local_60 = &PTR___ZN3PMK9Operation24InsertFootnoteDefinition3runERKN3Ice4TreeEllll_000e4c28;
  if (local_41 < '\0') {
    __ZdlPv(local_58);
  }
  return IVar1;
}


// ===== PMKAST::renameUnusedFootnoteDefinitionsIn:selectionRange: @ 0007b224 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::renameUnusedFootnoteDefinitionsIn_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation31RenameUnusedFootnoteDefinitionsC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::renumberFootnotesIn:selectionRange: @ 0007b294 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::renumberFootnotesIn_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation17RenumberFootnotesC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::reorderFootnoteDefinitionsIn:selectionRange: @ 0007b304 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::reorderFootnoteDefinitionsIn_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation26ReorderFootnoteDefinitionsC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::moveLinesUpIn:selectionRange: @ 0007b374 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::moveLinesUpIn_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation9MoveLinesC1ENS0_18MoveLinesDirectionE(auStack_50,0);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::moveLinesDownIn:selectionRange: @ 0007b3e8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::moveLinesDownIn_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK9Operation9MoveLinesC1ENS0_18MoveLinesDirectionE(auStack_50,1);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::selectAllTextIn:selectionRange: @ 0007b45c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKAST::selectAllTextIn_selectionRange_(ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK9Operation13SelectAllTextC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextOperation_inRange_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  return IVar1;
}


// ===== PMKAST::resultForTextCorrection:inRange:replacementString:selectionRange: @ 0007b4cc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID PMKAST::resultForTextCorrection_inRange_replacementString_selectionRange_
             (ID param_1,SEL param_2,Correction *param_3,_NSRange param_4,ID param_5,
             _NSRange param_6)

{
  ID IVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_70 [24];
  undefined1 *local_58;
  
  IVar1 = objc_stub::ast(param_1);
  if (param_5 == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  else {
    objc_stub::iceString(param_5,&local_88);
  }
  (*(code *)*param_3->field0_0x0)
            (auStack_70,param_3,IVar1,param_4.field0_0x0,param_4.field1_0x8,&local_88,
             param_6.field0_0x0,param_6.field1_0x8);
  if (local_78 < 0) {
    __ZdlPv(local_88);
  }
  IVar1 = _objc_opt_class(param_1);
  IVar1 = objc_stub::toPMKASTOperationResultArray_(IVar1,auStack_70);
  local_58 = auStack_70;
  __ZNSt3__16vectorIN3PMK9Operation6ResultENS_9allocatorIS3_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_58);
  return IVar1;
}


// ===== PMKAST::fencedCodeCorrectionIn:replacementString:selectionRange: @ 0007b608 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::fencedCodeCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK10Correction20FencedCodeCorrectionC1ENS_9Operation11IndentStyleE(auStack_50,0);
  IVar1 = objc_stub::resultForTextCorrection_inRange_replacementString_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4,
                     param_5.field0_0x0,param_5.field1_0x8);
  return IVar1;
}


// ===== PMKAST::listItemSpaceCorrectionIn:replacementString:selectionRange: @ 0007b6b0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::listItemSpaceCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK10Correction23ListItemSpaceCorrectionC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextCorrection_inRange_replacementString_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4,
                     param_5.field0_0x0,param_5.field1_0x8);
  return IVar1;
}


// ===== PMKAST::calloutCorrectionIn:replacementString:selectionRange: @ 0007b754 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::calloutCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK10Correction17CalloutCorrectionC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextCorrection_inRange_replacementString_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4,
                     param_5.field0_0x0,param_5.field1_0x8);
  return IVar1;
}


// ===== PMKAST::mathBlockCorrectionIn:replacementString:selectionRange: @ 0007b7f8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::mathBlockCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_50 [16];
  
  __ZN3PMK10Correction19MathBlockCorrectionC1ENS_9Operation11IndentStyleE(auStack_50,0);
  IVar1 = objc_stub::resultForTextCorrection_inRange_replacementString_selectionRange_
                    (param_1,auStack_50,param_3.field0_0x0,param_3.field1_0x8,param_4,
                     param_5.field0_0x0,param_5.field1_0x8);
  return IVar1;
}


// ===== PMKAST::selectionCorrectionIn:replacementString:selectionRange: @ 0007b8a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::selectionCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK10Correction19SelectionCorrectionC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextCorrection_inRange_replacementString_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4,
                     param_5.field0_0x0,param_5.field1_0x8);
  return IVar1;
}


// ===== PMKAST::invalidCharacterCorrectionIn:replacementString:selectionRange: @ 0007b944 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::invalidCharacterCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK10Correction26InvalidCharacterCorrectionC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextCorrection_inRange_replacementString_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4,
                     param_5.field0_0x0,param_5.field1_0x8);
  return IVar1;
}


// ===== PMKAST::deleteWhitespaceCorrectionIn:replacementString:selectionRange: @ 0007b9e8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::deleteWhitespaceCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  undefined1 auStack_48 [8];
  
  __ZN3PMK10Correction26DeleteWhitespaceCorrectionC1Ev(auStack_48);
  IVar1 = objc_stub::resultForTextCorrection_inRange_replacementString_selectionRange_
                    (param_1,auStack_48,param_3.field0_0x0,param_3.field1_0x8,param_4,
                     param_5.field0_0x0,param_5.field1_0x8);
  return IVar1;
}


// ===== PMKAST::pasteCorrectionIn:replacementString:selectionRange: @ 0007ba8c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0007bba0) */
/* WARNING: Removing unreachable block (ram,0x0007bc90) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKAST::pasteCorrectionIn_replacementString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,_NSRange param_5)

{
  ID IVar1;
  unsigned_long_long uVar2;
  unsigned_long_long uVar3;
  unsigned_long_long uVar4;
  unsigned_long_long uVar5;
  unsigned_long_long uVar6;
  unsigned_long_long uVar7;
  unsigned_long_long uVar8;
  unsigned_long_long uVar9;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long *local_d8;
  long lStack_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 **local_70 [2];
  
  uVar6 = param_5.field1_0x8;
  uVar4 = param_5.field0_0x0;
  uVar3 = param_3.field1_0x8;
  uVar2 = param_3.field0_0x0;
  __ZN3PMK10Correction25PasteWhitespaceCorrectionC1Ev(auStack_78);
  __ZN3PMK10Correction31PasteDeduplicateBlockCorrectionC1Ev(auStack_80);
  __ZN3PMK10Correction25PasteLineEndingCorrectionC1ENS_9Operation11IndentStyleE(auStack_90,0);
  IVar1 = objc_stub::ast(param_1);
  if (param_4 == 0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
  }
  else {
    objc_stub::iceString(param_4,&local_c0);
  }
  __ZN3PMK10Correction25PasteWhitespaceCorrection3runERKN3Ice4TreeEllNSt3__112basic_stringIDsNS6_11char_traitsIDsEENS6_9allocatorIDsEEEEll
            (&local_a8,auStack_78,IVar1,uVar2,uVar3,&local_c0,uVar4,uVar6);
  if (local_b0 < 0) {
    __ZdlPv(local_c0);
  }
  IVar1 = objc_stub::ast(param_1);
  if (lStack_a0 == local_a8) {
    uVar8 = uVar3;
    uVar9 = uVar2;
    if (param_4 == 0) {
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
    }
    else {
      objc_stub::iceString(param_4,&local_f0);
    }
  }
  else {
    uStack_e8 = *(undefined8 *)(lStack_a0 + -0x20);
    local_f0 = *(undefined8 *)(lStack_a0 + -0x28);
    local_e0 = *(long *)(lStack_a0 + -0x18);
    uVar8 = *(unsigned_long_long *)(lStack_a0 + -0x30);
    uVar9 = *(unsigned_long_long *)(lStack_a0 + -0x38);
  }
  uVar5 = uVar4;
  uVar7 = uVar6;
  if (lStack_a0 != local_a8) {
    uVar5 = *(unsigned_long_long *)(lStack_a0 + -0x10);
    uVar7 = *(unsigned_long_long *)(lStack_a0 + -8);
  }
  __ZN3PMK10Correction31PasteDeduplicateBlockCorrection3runERKN3Ice4TreeEllNSt3__112basic_stringIDsNS6_11char_traitsIDsEENS6_9allocatorIDsEEEEll
            (&local_d8,auStack_80,IVar1,uVar9,uVar8,&local_f0,uVar5,uVar7);
  if (local_e0 < 0) {
    __ZdlPv(local_f0);
  }
  if (lStack_d0 - (long)local_d8 != 0) {
    __ZNSt3__16vectorIN3PMK9Operation6ResultENS_9allocatorIS3_EEE18__assign_with_sizeB9nqe220106INS_17_ClassicAlgPolicyEPS3_S9_EEvT0_T1_l
              (&local_a8,local_d8,lStack_d0,(lStack_d0 - (long)local_d8 >> 3) * 0x6db6db6db6db6db7);
  }
  local_70[0] = &local_d8;
  __ZNSt3__16vectorIN3PMK9Operation6ResultENS_9allocatorIS3_EEE16__destroy_vectorclB9nqe220106Ev
            (local_70);
  IVar1 = objc_stub::ast(param_1);
  if (lStack_a0 == local_a8) {
    if (param_4 == 0) {
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
    }
    else {
      objc_stub::iceString(param_4,&local_110);
    }
  }
  else {
    uVar2 = *(unsigned_long_long *)(lStack_a0 + -0x38);
    uVar3 = *(unsigned_long_long *)(lStack_a0 + -0x30);
    uStack_108 = *(undefined8 *)(lStack_a0 + -0x20);
    local_110 = *(undefined8 *)(lStack_a0 + -0x28);
    local_100 = *(long *)(lStack_a0 + -0x18);
  }
  if (lStack_a0 != local_a8) {
    uVar4 = *(unsigned_long_long *)(lStack_a0 + -0x10);
    uVar6 = *(unsigned_long_long *)(lStack_a0 + -8);
  }
  __ZN3PMK10Correction25PasteLineEndingCorrection3runERKN3Ice4TreeEllNSt3__112basic_stringIDsNS6_11char_traitsIDsEENS6_9allocatorIDsEEEEll
            (&local_d8,auStack_90,IVar1,uVar2,uVar3,&local_110,uVar4,uVar6);
  if (local_100 < 0) {
    __ZdlPv(local_110);
  }
  if (lStack_d0 - (long)local_d8 != 0) {
    __ZNSt3__16vectorIN3PMK9Operation6ResultENS_9allocatorIS3_EEE18__assign_with_sizeB9nqe220106INS_17_ClassicAlgPolicyEPS3_S9_EEvT0_T1_l
              (&local_a8,local_d8,lStack_d0,(lStack_d0 - (long)local_d8 >> 3) * 0x6db6db6db6db6db7);
  }
  local_70[0] = &local_d8;
  __ZNSt3__16vectorIN3PMK9Operation6ResultENS_9allocatorIS3_EEE16__destroy_vectorclB9nqe220106Ev
            (local_70);
  IVar1 = _objc_opt_class(param_1);
  IVar1 = objc_stub::toPMKASTOperationResultArray_(IVar1,&local_a8);
  local_d8 = &local_a8;
  __ZNSt3__16vectorIN3PMK9Operation6ResultENS_9allocatorIS3_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_d8);
  return IVar1;
}


