// ===== PMKWikiLink::wikiLinkStringForTitle: @ 0009804c =====

ID PMKWikiLink::wikiLinkStringForTitle_(ID param_1,SEL param_2,ID param_3)

{
  
  encodeTitle_(param_1);
  IVar1 = stringWithFormat_(NSString,&cf_______);
  return IVar1;
}

// ===== PMKWikiLink::wikiLinkStringForTitle:alias: @ 000980c4 =====

ID PMKWikiLink::wikiLinkStringForTitle_alias_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  if (param_4 == 0) {
    encodeTitle_(param_1,param_3);
    IVar1 = stringWithFormat_(NSString,&cf_______);
  }
  else {
    encodeTitle_(param_1,param_3);
    encodeTitle_(param_1,param_4);
    IVar1 = stringWithFormat_(NSString,&cf__________);
  }
  return IVar1;
}

// ===== PMKWikiLink::wikiLinkStringForTitle:andHeader: @ 00098210 =====

ID PMKWikiLink::wikiLinkStringForTitle_andHeader_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  encodeTitle_(param_1,param_3);
  encodeTitle_(param_1,param_4);
  IVar1 = stringWithFormat_(NSString,&cf__________);
  return IVar1;
}

// ===== PMKWikiLink::componentsForWikiLink: @ 000982f4 =====

ID PMKWikiLink::componentsForWikiLink_(ID param_1,SEL param_2,ID param_3)

{
  
  self = array(NSMutableArray);
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_90);
  }
  __ZN3Ice8Segments6decodeERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_78,&local_90);
  if (local_80 < 0) {
    __ZdlPv(local_90);
  }
  if (local_78 != lStack_70) {
    IVar2 = 0;
    self_00 = 0;
    lVar3 = local_78;
    do {
      IVar1 = stringWithIceString_(NSString,lVar3);
      if (IVar2 == 0) {
        addObject_(self,IVar1);
        IVar2 = IVar1;
        IVar1 = self_00;
      }
      else if (self_00 != 0) {
        IVar1 = stringByAppendingFormat_(self_00,&cf____);
      }
      lVar3 = lVar3 + 0x18;
      self_00 = IVar1;
    } while (lVar3 != lStack_70);
    if (IVar1 != 0) {
      addObject_(self,IVar1);
    }
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_90);
  return self;
}

// ===== PMKWikiLink::updateWikiLinkWithTitle:to:skipInTitle:inString: @ 0009850c =====

ID PMKWikiLink::updateWikiLinkWithTitle_to_skipInTitle_inString_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6)

{
  
  self = fromMarkdown_((ID)&objc::class_t::PMKAST,param_6);
  IVar1 = encodeSegment_(param_1,param_3);
  IVar2 = encodeSegment_(param_1,param_4);
  IVar1 = updateWikiLinks_to_skipInTitle_selectionRange_
                    (self,IVar1,IVar2,(ulong)param_5,0,0);
  applyTextOperationResults_(self,IVar1);
  return self;
}

// ===== PMKWikiLink::decodeTitleForWikiLink: @ 0009865c =====

ID PMKWikiLink::decodeTitleForWikiLink_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_50);
  }
  __ZN3Ice8Segments6decodeERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_38,&local_50);
  if (local_40 < 0) {
    __ZdlPv(local_50);
  }
  if (lStack_30 == local_38) {
    IVar1 = 0;
  }
  else {
    IVar1 = stringWithIceString_(NSString);
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_50);
  return IVar1;
}

// ===== PMKWikiLink::decodeTitlesForWikiLinks: @ 0009874c =====

ID PMKWikiLink::decodeTitlesForWikiLinks_(ID param_1,SEL param_2,ID param_3)

{
  
  self = array(NSMutableArray);
  IVar1 = FAST_ENUM(param_3);
  if (IVar1 != 0) {
    lVar3 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = decodeTitleForWikiLink_(param_1,*(undefined8 *)(lStack_128 + IVar4 * 8));
        addObject_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_e8,0x10);
    } while (IVar1 != 0);
  }
    return self;
  }
}

// ===== PMKWikiLink::decodeWikiLink: @ 000988ec =====

ID PMKWikiLink::decodeWikiLink_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_50);
  }
  __ZN3PMK9Operation15UpdateWikiLinks27decodedSegmentsFromMarkdownENSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (local_38,&local_50);
  if (local_40 < 0) {
    __ZdlPv(local_50);
  }
  IVar1 = stringWithIceString_(NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}

// ===== PMKWikiLink::encodeSegment: @ 000989c8 =====

ID PMKWikiLink::encodeSegment_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_50);
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE9push_backB9nqe220106EOS6_
            (&local_38,&local_50);
  if (local_40 < 0) {
    __ZdlPv(local_50);
  }
  __ZN3Ice8Segments6encodeERKNSt3__16vectorINS1_12basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEENS6_IS8_EEEE
            (&local_50,&local_38);
  IVar1 = stringWithIceString_(NSString,&local_50);
  if (local_40 < 0) {
    __ZdlPv(local_50);
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_50);
  return IVar1;
}

// ===== PMKWikiLink::encodeTitle: @ 00098acc =====

ID PMKWikiLink::encodeTitle_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_50);
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE9push_backB9nqe220106EOS6_
            (&local_38,&local_50);
  if (local_40 < 0) {
    __ZdlPv(local_50);
  }
  __ZN3Ice8Segments6encodeERKNSt3__16vectorINS1_12basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEENS6_IS8_EEEE
            (&local_50,&local_38);
  if (local_40 < 0) {
    __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
              (&local_80,local_50,uStack_48);
  }
  else {
    uStack_78 = uStack_48;
    local_80 = local_50;
    local_70 = local_40;
  }
  __ZN3PMK9Operation15UpdateWikiLinks25encodedSegmentsToMarkdownENSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
            (&local_68,&local_80);
  if (local_40 < 0) {
    __ZdlPv(local_50);
  }
  local_50 = (undefined8 *)CONCAT62(uStack_66,local_68);
  uStack_48 = uStack_60;
  local_40._7_1_ = cStack_51;
  cStack_51 = 0;
  if (local_70 < 0) {
    __ZdlPv(local_80);
  }
  IVar1 = stringWithIceString_(NSString,&local_50);
  if (local_40._7_1_ < '\0') {
    __ZdlPv(local_50);
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_50);
  return IVar1;
}

// ===== PMKWikiLink::validateImplictBacklinkForRange:inString: @ 00098c58 =====

bool PMKWikiLink::validateImplictBacklinkForRange_inString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar6 = param_3.field0_0x0;
  if (param_4 == 0) {
  }
  else {
    iceString(param_4,&local_88);
  }
  if (uVar6 != 0) {
    uStack_98 = uStack_80;
    local_a0 = local_88;
    local_90 = local_78;
    uVar3 = __ZN3PMK14TextStatistics15isWordSeparatorENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEEl
                      (&local_a0,uVar6);
    if ((uVar3 & 1) != 0) goto LAB_00098d68;
    uStack_b8 = uStack_80;
    local_c0 = local_88;
    local_b0 = local_78;
    uVar3 = __ZN3PMK14TextStatistics15isWordSeparatorENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEEl
                      (&local_c0,uVar6 - 1);
    if ((uVar3 & 1) != 0) goto LAB_00098d68;
LAB_00098f2c:
    uVar2 = 0;
    goto LAB_00098f30;
  }
LAB_00098d68:
  uVar3 = uVar6 + param_3.field1_0x8;
  if ((long)local_78._7_1_ < 0) {
    if (uVar3 < uStack_80) {
      __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                (&local_e0,local_88);
      goto LAB_00098da8;
    }
  }
  else if (uVar3 < (ulong)(long)local_78._7_1_) {
    uStack_d8 = uStack_80;
    local_e0 = local_88;
    local_d0 = local_78;
LAB_00098da8:
    uVar4 = __ZN3PMK14TextStatistics15isWordSeparatorENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEEl
                      (&local_e0,uVar3 - 1);
    if ((uVar4 & 1) == 0) {
      uStack_f8 = uStack_80;
      local_100 = local_88;
      local_f0 = local_78;
      uVar3 = __ZN3PMK14TextStatistics15isWordSeparatorENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEEl
                        (&local_100,uVar3);
      if ((uVar3 & 1) == 0) goto LAB_00098f2c;
    }
  }
  uStack_298 = uStack_80;
  local_2a0 = local_88;
  local_290 = local_78;
  __ZN3Ice4TreeC1ENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEENS_10RuleConfig7RuleSetE
            (local_280,&local_2a0,1);
  if (local_290 < 0) {
    __ZdlPv(local_2a0);
  }
  uVar5 = __ZNK3Ice4Tree12nodeAtOffsetElNS_12LevelSettingE(local_280,uVar6,1);
  local_68[0] = &
                PTR___ZNSt3__110__function6__funcIZ56__PMKWikiLink_validateImplictBacklinkForRange_inString__E3__0FbPN3Ice4NodeEEED1Ev_000e7958
  local_50 = local_68;
  uVar2 = __ZN3Ice4Node16hasAncestorWhereENSt3__18functionIFbPS0_EEE(uVar5,local_68);
  if (local_50 == local_68) {
    lVar7 = 0x20;
LAB_00098eb4:
    (**(code **)((long)*local_50 + lVar7))();
  }
  else if (local_50 != (undefined ***)0x0) {
    lVar7 = 0x28;
    goto LAB_00098eb4;
  }
  local_70 = auStack_130;
  __ZNSt3__16vectorIN3Ice11ReplacementENS_9allocatorIS2_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_70);
  if (local_148 != 0) {
    local_140 = local_148;
    __ZdlPv();
  }
  plVar1 = local_150;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar2 = uVar2 ^ 1;
  __ZN3Ice10RuleConfigD1Ev(auStack_260);
  if (local_269 < '\0') {
    __ZdlPv(local_280[0]);
  }
LAB_00098f30:
    return uVar2;
  }
}

