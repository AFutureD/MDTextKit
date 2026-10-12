// ===== MDAttributedStringChangeTracker::init @ 000264e8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDAttributedStringChangeTracker;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::setChanges_(self,IVar1);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCountedSet);
    objc_stub::setAttachmentAdded_(self,uVar2);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSCountedSet);
    objc_stub::setAttachmentRemoved_(self,uVar2);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableOrderedSet);
    objc_stub::setAttachmentAddedOrder_(self,uVar2);
    uVar2 = _objc_opt_new(&_OBJC_CLASS___NSMutableOrderedSet);
    objc_stub::setAttachmentRemovedOrder_(self,uVar2);
  }
  return self;
}


// ===== MDAttributedStringChangeTracker::resetChanges @ 000265ec =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDAttributedStringChangeTracker::resetChanges(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::changes(param_1);
  objc_stub::removeAllObjects(IVar1);
  IVar1 = objc_stub::attachmentAdded(param_1);
  objc_stub::removeAllObjects(IVar1);
  IVar1 = objc_stub::attachmentRemoved(param_1);
  objc_stub::removeAllObjects(IVar1);
  IVar1 = objc_stub::attachmentAddedOrder(param_1);
  objc_stub::removeAllObjects(IVar1);
  IVar1 = objc_stub::attachmentRemovedOrder(param_1);
  objc_stub::removeAllObjects(IVar1);
  return;
}


// ===== MDAttributedStringChangeTracker::trackReplaceCharactersInRange:inAttributedString:withString: @ 000266a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDAttributedStringChangeTracker::trackReplaceCharactersInRange_inAttributedString_withString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  ulong uVar5;
  unsigned_long_long uVar6;
  
  uVar6 = param_3.field1_0x8;
  uVar5 = param_3.field0_0x0;
  IVar2 = _objc_opt_new(&objc::class_t::MDAttributedStringChange);
  IVar3 = objc_stub::stringRangeFromAttributedStringRange_(param_4,uVar5,uVar6);
  objc_stub::setOldPlainRange_(IVar2,IVar3,extraout_x1);
  objc_stub::setOldAttributedRange_(IVar2,uVar5,uVar6);
  IVar3 = objc_stub::attributedSubstringFromRange_(param_4,uVar5,uVar6);
  objc_stub::setOldAttributedString_(IVar2,IVar3);
  IVar3 = objc_stub::length(param_5);
  IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
  IVar4 = objc_stub::initWithString_(IVar4,param_5);
  objc_stub::setCurrentAttributedString_(IVar2,IVar4);
  objc_stub::setCurrentAttributedRange_(IVar2,uVar5,IVar3);
  IVar3 = objc_stub::oldPlainRange(IVar2);
  IVar4 = objc_stub::length(param_5);
  objc_stub::setCurrentPlainRange_(IVar2,IVar3,IVar4);
  IVar3 = objc_stub::changes(param_1);
  objc_stub::addObject_(IVar3,IVar2);
  puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
  if ((uVar6 != 0) && (uVar5 < uVar5 + uVar6)) {
    do {
      IVar2 = objc_stub::attributesAtIndex_effectiveRange_(param_4,uVar5,0);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,*(undefined8 *)puVar1);
      if (IVar2 != 0) {
        IVar3 = objc_stub::attachmentRemoved(param_1);
        objc_stub::addObject_(IVar3,IVar2);
        IVar3 = objc_stub::attachmentRemovedOrder(param_1);
        objc_stub::addObject_(IVar3,IVar2);
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}


// ===== MDAttributedStringChangeTracker::trackSetAttributes:inAttributedString:range: @ 000268c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDAttributedStringChangeTracker::trackSetAttributes_inAttributedString_range_
               (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 extraout_x1;
  long extraout_x1_00;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar9 = param_5.field1_0x8;
  uVar8 = param_5.field0_0x0;
  if (uVar9 < 2) {
    IVar2 = objc_stub::string(param_4);
    IVar2 = objc_stub::characterAtIndex_(IVar2,uVar8);
    puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
    if (((int)IVar2 == 0xfffc) &&
       (IVar2 = objc_stub::objectForKeyedSubscript_
                          (param_3,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30),
       IVar2 != 0)) {
      uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachment);
      uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
      if ((uVar4 & 1) != 0) {
        IVar5 = objc_stub::changes(param_1);
        IVar5 = objc_stub::lastObject(IVar5);
        IVar6 = objc_stub::currentAttributedRange(IVar5);
        auVar10 = _NSIntersectionRange(uVar8,uVar9,IVar6,extraout_x1);
        if (auVar10._0_8_ != 0x7fffffffffffffff) {
          IVar6 = objc_stub::currentAttributedRange(IVar5);
          IVar7 = objc_stub::currentAttributedString(IVar5);
          objc_stub::addAttribute_value_range_
                    (IVar7,*(undefined8 *)puVar1,IVar2,auVar10._0_8_ - IVar6,auVar10._8_8_);
          IVar6 = objc_stub::representedText(IVar2);
          IVar6 = objc_stub::length(IVar6);
          IVar7 = objc_stub::currentPlainRange(IVar5);
          objc_stub::currentPlainRange(IVar5);
          objc_stub::setCurrentPlainRange_(IVar5,IVar7,(IVar6 - auVar10._8_8_) + extraout_x1_00);
        }
        uVar4 = uVar8;
        if (uVar8 < uVar8 + uVar9) {
          do {
            IVar5 = objc_stub::attributesAtIndex_effectiveRange_(param_4,uVar4,0);
            IVar5 = objc_stub::objectForKeyedSubscript_(IVar5,*(undefined8 *)puVar1);
            if (IVar5 != 0 && IVar5 != IVar2) {
              IVar6 = objc_stub::attachmentRemoved(param_1);
              objc_stub::addObject_(IVar6,IVar5);
              IVar6 = objc_stub::attachmentRemovedOrder(param_1);
              objc_stub::addObject_(IVar6,IVar5);
            }
            uVar9 = uVar9 - 1;
            uVar4 = uVar4 + 1;
          } while (uVar9 != 0);
        }
        IVar5 = objc_stub::attribute_atIndex_effectiveRange_(param_4,*(undefined8 *)puVar1,uVar8,0);
        if (IVar2 != IVar5) {
          IVar5 = objc_stub::attachmentAdded(param_1);
          objc_stub::addObject_(IVar5,IVar2);
          IVar5 = objc_stub::attachmentAddedOrder(param_1);
          objc_stub::addObject_(IVar5,IVar2);
        }
      }
    }
  }
  return;
}


// ===== MDAttributedStringChangeTracker::addedAttachments @ 00026bd8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::addedAttachments(ID param_1,SEL param_2)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_0005ec00;
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self_00 = objc_stub::attachmentAddedOrder(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self_00,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(self_00);
        }
        uVar4 = *(undefined8 *)(lStack_128 + IVar6 * 8);
        IVar2 = objc_stub::attachmentAdded(param_1);
        IVar2 = objc_stub::countForObject_(IVar2,uVar4);
        IVar3 = objc_stub::attachmentRemoved(param_1);
        IVar3 = objc_stub::countForObject_(IVar3,uVar4);
        if (0 < (long)(IVar2 - IVar3)) {
          objc_stub::addObject_(self,uVar4);
        }
        IVar6 = IVar6 + 1;
      } while (IVar1 != IVar6);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDAttributedStringChangeTracker::removedAttachments @ 00026d5c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::removedAttachments(ID param_1,SEL param_2)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_0005ec00;
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self_00 = objc_stub::attachmentRemovedOrder(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self_00,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(self_00);
        }
        uVar4 = *(undefined8 *)(lStack_128 + IVar6 * 8);
        IVar2 = objc_stub::attachmentAdded(param_1);
        IVar2 = objc_stub::countForObject_(IVar2,uVar4);
        IVar3 = objc_stub::attachmentRemoved(param_1);
        IVar3 = objc_stub::countForObject_(IVar3,uVar4);
        if ((long)(IVar2 - IVar3) < 0) {
          objc_stub::addObject_(self,uVar4);
        }
        IVar6 = IVar6 + 1;
      } while (IVar1 != IVar6);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDAttributedStringChangeTracker::changes @ 00026edc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::changes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


// ===== MDAttributedStringChangeTracker::setChanges: @ 00026ee8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringChangeTracker::setChanges_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


// ===== MDAttributedStringChangeTracker::attachmentRemoved @ 00026ef0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::attachmentRemoved(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== MDAttributedStringChangeTracker::setAttachmentRemoved: @ 00026efc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringChangeTracker::setAttachmentRemoved_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDAttributedStringChangeTracker::attachmentAdded @ 00026f04 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::attachmentAdded(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


// ===== MDAttributedStringChangeTracker::setAttachmentAdded: @ 00026f10 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringChangeTracker::setAttachmentAdded_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


// ===== MDAttributedStringChangeTracker::attachmentRemovedOrder @ 00026f18 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::attachmentRemovedOrder(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}


// ===== MDAttributedStringChangeTracker::setAttachmentRemovedOrder: @ 00026f24 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringChangeTracker::setAttachmentRemovedOrder_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}


// ===== MDAttributedStringChangeTracker::attachmentAddedOrder @ 00026f2c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChangeTracker::attachmentAddedOrder(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}


// ===== MDAttributedStringChangeTracker::setAttachmentAddedOrder: @ 00026f38 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringChangeTracker::setAttachmentAddedOrder_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}


// ===== MDAttributedStringChangeTracker::.cxx_destruct @ 00026f40 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDAttributedStringChangeTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


