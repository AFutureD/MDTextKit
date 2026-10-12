// ===== PMKHashtag::hashtagStringForTagName: @ 0006cf5c =====

ID PMKHashtag::hashtagStringForTagName_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
    IVar1 = 0;
  }
  else {
    iceString(param_3,local_50);
    __ZN3PMK9Operation7TagBase25encodedSegmentsToMarkdownERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
              (local_38,local_50);
    if (local_39 < '\0') {
      __ZdlPv(local_50[0]);
    }
    IVar1 = stringWithIceString_(NSString,local_38);
    if (local_21 < '\0') {
      __ZdlPv(local_38[0]);
    }
  }
  return IVar1;
}

// ===== PMKHashtag::hashtagStringsForTagNames: @ 0006d034 =====

ID PMKHashtag::hashtagStringsForTagNames_(ID param_1,SEL param_2,ID param_3)

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
        IVar2 = hashtagStringForTagName_(param_1,*(undefined8 *)(lStack_128 + IVar4 * 8))
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

// ===== PMKHashtag::normalizeTagName: @ 0006d1d4 =====

ID PMKHashtag::normalizeTagName_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
    IVar1 = 0;
  }
  else {
    iceString(param_3,local_50);
    __ZN3PMK9Operation7TagBase12normalizeTagERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
              (local_38,local_50);
    if (local_39 < '\0') {
      __ZdlPv(local_50[0]);
    }
    IVar1 = stringWithIceString_(NSString,local_38);
    if (local_21 < '\0') {
      __ZdlPv(local_38[0]);
    }
  }
  return IVar1;
}

// ===== PMKHashtag::sanitizeTagName: @ 0006d2ac =====

ID PMKHashtag::sanitizeTagName_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == 0) {
    IVar1 = 0;
  }
  else {
    iceString(param_3,local_50);
    __ZN3PMK9Operation7TagBase11sanitizeTagERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
              (local_38,local_50);
    if (local_39 < '\0') {
      __ZdlPv(local_50[0]);
    }
    IVar1 = stringWithIceString_(NSString,local_38);
    if (local_21 < '\0') {
      __ZdlPv(local_38[0]);
    }
  }
  return IVar1;
}

// ===== PMKHashtag::tagNameFromComponents: @ 0006d384 =====

ID PMKHashtag::tagNameFromComponents_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = FAST_ENUM(param_3);
  if (IVar1 != 0) {
    lVar2 = *local_110;
    do {
      IVar3 = 0;
      do {
        if (*local_110 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        self = *(ID *)(lStack_118 + IVar3 * 8);
        if (self == 0) {
        }
        else {
          iceString(self,&local_138);
        }
        __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE9push_backB9nqe220106EOS6_
                  (&local_e0,&local_138);
        if (local_128 < 0) {
          __ZdlPv(local_138);
        }
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_c8,0x10);
    } while (IVar1 != 0);
  }
  __ZN3Ice8Segments6encodeERKNSt3__16vectorINS1_12basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEENS6_IS8_EEEE
            (&local_138,&local_e0);
  IVar1 = stringWithIceString_(NSString,&local_138);
  if (local_128 < 0) {
    __ZdlPv(local_138);
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_138);
    return IVar1;
  }
}

// ===== PMKHashtag::componentsForForTagName: @ 0006d57c =====

ID PMKHashtag::componentsForForTagName_(ID param_1,SEL param_2,ID param_3)

{
  
  self = array(NSMutableArray);
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_80);
  }
  __ZN3Ice8Segments6decodeERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_68,&local_80);
  lVar1 = local_68;
  if (local_70 < 0) {
    __ZdlPv(local_80);
    lVar1 = local_68;
  }
  for (; lVar1 != uStack_60; lVar1 = lVar1 + 0x18) {
    self_00 = stringWithIceString_(NSString,lVar1);
    IVar2 = isEqualToString_(self_00,&cf___);
    if ((IVar2 & 1) == 0) {
      addObject_(self,self_00);
    }
  }
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_80);
  return self;
}

// ===== PMKHashtag::addTagName:toTheTopOfString: @ 0006d6ec =====

ID PMKHashtag::addTagName_toTheTopOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  local_40 = param_3;
  IVar1 = arrayWithObjects_count_(NSArray,&local_40,1);
  IVar1 = addTagsNames_toTheTopOfString_(param_1,IVar1,param_4);
    return IVar1;
  }
}

// ===== PMKHashtag::addTagsNames:toTheTopOfString: @ 0006d7f0 =====

ID PMKHashtag::addTagsNames_toTheTopOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  self = fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  IVar1 = FAST_ENUM(param_3);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = addTagToTop_selectionRange_
                          (self,*(undefined8 *)(lStack_118 + IVar4 * 8),0,0);
        applyTextOperationResults_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
    return self;
  }
}

// ===== PMKHashtag::addTagName:toTheBottomOfString: @ 0006d998 =====

ID PMKHashtag::addTagName_toTheBottomOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  local_40 = param_3;
  IVar1 = arrayWithObjects_count_(NSArray,&local_40,1);
  IVar1 = addTagsNames_toTheBottomOfString_(param_1,IVar1,param_4);
    return IVar1;
  }
}

// ===== PMKHashtag::addTagsNames:toTheBottomOfString: @ 0006da9c =====

ID PMKHashtag::addTagsNames_toTheBottomOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  self = fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  IVar1 = FAST_ENUM(param_3);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = addTagToBottom_selectionRange_
                          (self,*(undefined8 *)(lStack_118 + IVar4 * 8),0,0);
        applyTextOperationResults_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
    return self;
  }
}

// ===== PMKHashtag::removeTagName:inString: @ 0006dc44 =====

ID PMKHashtag::removeTagName_inString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  self = fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  IVar1 = removeTag_selectionRange_(self,param_3,0,0);
  applyTextOperationResults_(self,IVar1);
  return self;
}

// ===== PMKHashtag::renameTagName:newTagName:inString: @ 0006dd04 =====

ID PMKHashtag::renameTagName_newTagName_inString_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  
  self = fromMarkdown_((ID)&objc::class_t::PMKAST,param_5);
  IVar1 = renameTag_to_selectionRange_(self,param_3,param_4,0,0);
  applyTextOperationResults_(self,IVar1);
  return self;
}

// ===== PMKHashtag::escapeTagsNames:inString: @ 0006dde8 =====

ID PMKHashtag::escapeTagsNames_inString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  self = fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  IVar1 = FAST_ENUM(param_3);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = escapeTag_selectionRange_
                          (self,*(undefined8 *)(lStack_118 + IVar4 * 8),0,0);
        applyTextOperationResults_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
    return self;
  }
}

