// ===== PMKHashtag::hashtagStringForTagName: @ 0006cf5c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKHashtag::hashtagStringForTagName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38 [2];
  char local_21;
  
  if (param_3 == 0) {
    IVar1 = 0;
  }
  else {
    objc_stub::iceString(param_3,local_50);
    __ZN3PMK9Operation7TagBase25encodedSegmentsToMarkdownERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
              (local_38,local_50);
    if (local_39 < '\0') {
      __ZdlPv(local_50[0]);
    }
    IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_38);
    if (local_21 < '\0') {
      __ZdlPv(local_38[0]);
    }
  }
  return IVar1;
}


// ===== PMKHashtag::hashtagStringsForTagNames: @ 0006d034 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKHashtag::hashtagStringsForTagNames_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
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
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_e8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = objc_stub::hashtagStringForTagName_(param_1,*(undefined8 *)(lStack_128 + IVar4 * 8))
        ;
        objc_stub::addObject_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_e8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_68) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== PMKHashtag::normalizeTagName: @ 0006d1d4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKHashtag::normalizeTagName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38 [2];
  char local_21;
  
  if (param_3 == 0) {
    IVar1 = 0;
  }
  else {
    objc_stub::iceString(param_3,local_50);
    __ZN3PMK9Operation7TagBase12normalizeTagERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
              (local_38,local_50);
    if (local_39 < '\0') {
      __ZdlPv(local_50[0]);
    }
    IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_38);
    if (local_21 < '\0') {
      __ZdlPv(local_38[0]);
    }
  }
  return IVar1;
}


// ===== PMKHashtag::sanitizeTagName: @ 0006d2ac =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKHashtag::sanitizeTagName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_50 [2];
  char local_39;
  undefined8 local_38 [2];
  char local_21;
  
  if (param_3 == 0) {
    IVar1 = 0;
  }
  else {
    objc_stub::iceString(param_3,local_50);
    __ZN3PMK9Operation7TagBase11sanitizeTagERKNSt3__112basic_stringIDsNS2_11char_traitsIDsEENS2_9allocatorIDsEEEE
              (local_38,local_50);
    if (local_39 < '\0') {
      __ZdlPv(local_50[0]);
    }
    IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_38);
    if (local_21 < '\0') {
      __ZdlPv(local_38[0]);
    }
  }
  return IVar1;
}


// ===== PMKHashtag::tagNameFromComponents: @ 0006d384 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKHashtag::tagNameFromComponents_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  long lVar2;
  ID IVar3;
  undefined8 *local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e9b00;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_120,auStack_c8,0x10);
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
          local_138 = (undefined8 *)0x0;
          uStack_130 = 0;
          local_128 = 0;
        }
        else {
          objc_stub::iceString(self,&local_138);
        }
        __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE9push_backB9nqe220106EOS6_
                  (&local_e0,&local_138);
        if (local_128 < 0) {
          __ZdlPv(local_138);
        }
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_c8,0x10);
    } while (IVar1 != 0);
  }
  __ZN3Ice8Segments6encodeERKNSt3__16vectorINS1_12basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEENS6_IS8_EEEE
            (&local_138,&local_e0);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&local_138);
  if (local_128 < 0) {
    __ZdlPv(local_138);
  }
  local_138 = &local_e0;
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_138);
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== PMKHashtag::componentsForForTagName: @ 0006d57c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKHashtag::componentsForForTagName_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID self;
  ID self_00;
  ID IVar2;
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  undefined8 uStack_60;
  
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  if (param_3 == 0) {
    local_80 = (long *)0x0;
    uStack_78 = 0;
    local_70 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_80);
  }
  __ZN3Ice8Segments6decodeERKNSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_68,&local_80);
  lVar1 = local_68;
  if (local_70 < 0) {
    __ZdlPv(local_80);
    lVar1 = local_68;
  }
  for (; lVar1 != uStack_60; lVar1 = lVar1 + 0x18) {
    self_00 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,lVar1);
    IVar2 = objc_stub::isEqualToString_(self_00,&cf___);
    if ((IVar2 & 1) == 0) {
      objc_stub::addObject_(self,self_00);
    }
  }
  local_80 = &local_68;
  __ZNSt3__16vectorINS_12basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEENS4_IS6_EEE16__destroy_vectorclB9nqe220106Ev
            (&local_80);
  return self;
}


// ===== PMKHashtag::addTagName:toTheTopOfString: @ 0006d6ec =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKHashtag::addTagName_toTheTopOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e9b00;
  local_40 = param_3;
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_40,1);
  IVar1 = objc_stub::addTagsNames_toTheTopOfString_(param_1,IVar1,param_4);
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== PMKHashtag::addTagsNames:toTheTopOfString: @ 0006d7f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKHashtag::addTagsNames_toTheTopOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e9b00;
  self = objc_stub::fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = objc_stub::addTagToTop_selectionRange_
                          (self,*(undefined8 *)(lStack_118 + IVar4 * 8),0,0);
        objc_stub::applyTextOperationResults_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_58) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== PMKHashtag::addTagName:toTheBottomOfString: @ 0006d998 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKHashtag::addTagName_toTheBottomOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e9b00;
  local_40 = param_3;
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_40,1);
  IVar1 = objc_stub::addTagsNames_toTheBottomOfString_(param_1,IVar1,param_4);
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== PMKHashtag::addTagsNames:toTheBottomOfString: @ 0006da9c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKHashtag::addTagsNames_toTheBottomOfString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e9b00;
  self = objc_stub::fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = objc_stub::addTagToBottom_selectionRange_
                          (self,*(undefined8 *)(lStack_118 + IVar4 * 8),0,0);
        objc_stub::applyTextOperationResults_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_58) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== PMKHashtag::removeTagName:inString: @ 0006dc44 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKHashtag::removeTagName_inString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  IVar1 = objc_stub::removeTag_selectionRange_(self,param_3,0,0);
  objc_stub::applyTextOperationResults_(self,IVar1);
  return self;
}


// ===== PMKHashtag::renameTagName:newTagName:inString: @ 0006dd04 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID PMKHashtag::renameTagName_newTagName_inString_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::fromMarkdown_((ID)&objc::class_t::PMKAST,param_5);
  IVar1 = objc_stub::renameTag_to_selectionRange_(self,param_3,param_4,0,0);
  objc_stub::applyTextOperationResults_(self,IVar1);
  return self;
}


// ===== PMKHashtag::escapeTagsNames:inString: @ 0006dde8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKHashtag::escapeTagsNames_inString_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e9b00;
  self = objc_stub::fromMarkdown_((ID)&objc::class_t::PMKAST,param_4);
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        IVar2 = objc_stub::escapeTag_selectionRange_
                          (self,*(undefined8 *)(lStack_118 + IVar4 * 8),0,0);
        objc_stub::applyTextOperationResults_(self,IVar2);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_120,auStack_d8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e9b00 == local_58) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


