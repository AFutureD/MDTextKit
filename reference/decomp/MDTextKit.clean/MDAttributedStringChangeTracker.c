// ===== MDAttributedStringChangeTracker::init @ 000264e8 =====

ID MDAttributedStringChangeTracker::init(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::MDAttributedStringChangeTracker;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = array(NSMutableArray);
    setChanges_(self,IVar1);
    uVar2 = _objc_opt_new(NSCountedSet);
    setAttachmentAdded_(self,uVar2);
    uVar2 = _objc_opt_new(NSCountedSet);
    setAttachmentRemoved_(self,uVar2);
    uVar2 = _objc_opt_new(NSMutableOrderedSet);
    setAttachmentAddedOrder_(self,uVar2);
    uVar2 = _objc_opt_new(NSMutableOrderedSet);
    setAttachmentRemovedOrder_(self,uVar2);
  }
  return self;
}

// ===== MDAttributedStringChangeTracker::resetChanges @ 000265ec =====

void MDAttributedStringChangeTracker::resetChanges(ID param_1,SEL param_2)

{
  
  IVar1 = changes(param_1);
  removeAllObjects(IVar1);
  IVar1 = attachmentAdded(param_1);
  removeAllObjects(IVar1);
  IVar1 = attachmentRemoved(param_1);
  removeAllObjects(IVar1);
  IVar1 = attachmentAddedOrder(param_1);
  removeAllObjects(IVar1);
  IVar1 = attachmentRemovedOrder(param_1);
  removeAllObjects(IVar1);
  return;
}

// ===== MDAttributedStringChangeTracker::trackReplaceCharactersInRange:inAttributedString:withString: @ 000266a0 =====

void MDAttributedStringChangeTracker::trackReplaceCharactersInRange_inAttributedString_withString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5)

{
  
  uVar6 = param_3.field1_0x8;
  uVar5 = param_3.field0_0x0;
  IVar2 = _objc_opt_new(&objc::class_t::MDAttributedStringChange);
  IVar3 = stringRangeFromAttributedStringRange_(param_4,uVar5,uVar6);
  setOldPlainRange_(IVar2,IVar3,extraout_x1);
  setOldAttributedRange_(IVar2,uVar5,uVar6);
  IVar3 = attributedSubstringFromRange_(param_4,uVar5,uVar6);
  setOldAttributedString_(IVar2,IVar3);
  IVar3 = length(param_5);
  IVar4 = _objc_alloc(NSMutableAttributedString);
  IVar4 = initWithString_(IVar4,param_5);
  setCurrentAttributedString_(IVar2,IVar4);
  setCurrentAttributedRange_(IVar2,uVar5,IVar3);
  IVar3 = oldPlainRange(IVar2);
  IVar4 = length(param_5);
  setCurrentPlainRange_(IVar2,IVar3,IVar4);
  IVar3 = changes(param_1);
  addObject_(IVar3,IVar2);
  puVar1 = PTR__NSAttachmentAttributeName;
  if ((uVar6 != 0) && (uVar5 < uVar5 + uVar6)) {
    do {
      IVar2 = attributesAtIndex_effectiveRange_(param_4,uVar5,0);
      IVar2 = objectForKeyedSubscript_(IVar2,*(undefined8 *)puVar1);
      if (IVar2 != 0) {
        IVar3 = attachmentRemoved(param_1);
        addObject_(IVar3,IVar2);
        IVar3 = attachmentRemovedOrder(param_1);
        addObject_(IVar3,IVar2);
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// ===== MDAttributedStringChangeTracker::trackSetAttributes:inAttributedString:range: @ 000268c4 =====

void MDAttributedStringChangeTracker::trackSetAttributes_inAttributedString_range_
               (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5)

{
  
  uVar9 = param_5.field1_0x8;
  uVar8 = param_5.field0_0x0;
  if (uVar9 < 2) {
    IVar2 = string(param_4);
    IVar2 = characterAtIndex_(IVar2,uVar8);
    puVar1 = PTR__NSAttachmentAttributeName;
    if (((int)IVar2 == 0xfffc) &&
       (IVar2 = objectForKeyedSubscript_
                          (param_3,_NSAttachmentAttributeName),
       IVar2 != 0)) {
      uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachment);
      uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
      if ((uVar4 & 1) != 0) {
        IVar5 = changes(param_1);
        IVar5 = lastObject(IVar5);
        IVar6 = currentAttributedRange(IVar5);
        auVar10 = _NSIntersectionRange(uVar8,uVar9,IVar6,extraout_x1);
        if (auVar10._0_8_ != 0x7fffffffffffffff) {
          IVar6 = currentAttributedRange(IVar5);
          IVar7 = currentAttributedString(IVar5);
          addAttribute_value_range_
                    (IVar7,*(undefined8 *)puVar1,IVar2,auVar10._0_8_ - IVar6,auVar10._8_8_);
          IVar6 = representedText(IVar2);
          IVar6 = length(IVar6);
          IVar7 = currentPlainRange(IVar5);
          currentPlainRange(IVar5);
          setCurrentPlainRange_(IVar5,IVar7,(IVar6 - auVar10._8_8_) + extraout_x1_00);
        }
        uVar4 = uVar8;
        if (uVar8 < uVar8 + uVar9) {
          do {
            IVar5 = attributesAtIndex_effectiveRange_(param_4,uVar4,0);
            IVar5 = objectForKeyedSubscript_(IVar5,*(undefined8 *)puVar1);
            if (IVar5 != 0 && IVar5 != IVar2) {
              IVar6 = attachmentRemoved(param_1);
              addObject_(IVar6,IVar5);
              IVar6 = attachmentRemovedOrder(param_1);
              addObject_(IVar6,IVar5);
            }
            uVar9 = uVar9 - 1;
            uVar4 = uVar4 + 1;
          } while (uVar9 != 0);
        }
        IVar5 = attribute_atIndex_effectiveRange_(param_4,*(undefined8 *)puVar1,uVar8,0);
        if (IVar2 != IVar5) {
          IVar5 = attachmentAdded(param_1);
          addObject_(IVar5,IVar2);
          IVar5 = attachmentAddedOrder(param_1);
          addObject_(IVar5,IVar2);
        }
      }
    }
  }
  return;
}

// ===== MDAttributedStringChangeTracker::addedAttachments @ 00026bd8 =====

ID MDAttributedStringChangeTracker::addedAttachments(ID param_1,SEL param_2)

{
  
  self = array(NSMutableArray);
  self_00 = attachmentAddedOrder(param_1);
  IVar1 = FAST_ENUM(self_00);
  if (IVar1 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(self_00);
        }
        uVar4 = *(undefined8 *)(lStack_128 + IVar6 * 8);
        IVar2 = attachmentAdded(param_1);
        IVar2 = countForObject_(IVar2,uVar4);
        IVar3 = attachmentRemoved(param_1);
        IVar3 = countForObject_(IVar3,uVar4);
        if (0 < (long)(IVar2 - IVar3)) {
          addObject_(self,uVar4);
        }
        IVar6 = IVar6 + 1;
      } while (IVar1 != IVar6);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (self_00,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
    return self;
  }
}

// ===== MDAttributedStringChangeTracker::removedAttachments @ 00026d5c =====

ID MDAttributedStringChangeTracker::removedAttachments(ID param_1,SEL param_2)

{
  
  self = array(NSMutableArray);
  self_00 = attachmentRemovedOrder(param_1);
  IVar1 = FAST_ENUM(self_00);
  if (IVar1 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(self_00);
        }
        uVar4 = *(undefined8 *)(lStack_128 + IVar6 * 8);
        IVar2 = attachmentAdded(param_1);
        IVar2 = countForObject_(IVar2,uVar4);
        IVar3 = attachmentRemoved(param_1);
        IVar3 = countForObject_(IVar3,uVar4);
        if ((long)(IVar2 - IVar3) < 0) {
          addObject_(self,uVar4);
        }
        IVar6 = IVar6 + 1;
      } while (IVar1 != IVar6);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (self_00,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
    return self;
  }
}

// ===== MDAttributedStringChangeTracker::changes @ 00026edc =====

ID MDAttributedStringChangeTracker::changes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

// ===== MDAttributedStringChangeTracker::setChanges: @ 00026ee8 =====

void MDAttributedStringChangeTracker::setChanges_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}

// ===== MDAttributedStringChangeTracker::attachmentRemoved @ 00026ef0 =====

ID MDAttributedStringChangeTracker::attachmentRemoved(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== MDAttributedStringChangeTracker::setAttachmentRemoved: @ 00026efc =====

void MDAttributedStringChangeTracker::setAttachmentRemoved_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDAttributedStringChangeTracker::attachmentAdded @ 00026f04 =====

ID MDAttributedStringChangeTracker::attachmentAdded(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}

// ===== MDAttributedStringChangeTracker::setAttachmentAdded: @ 00026f10 =====

void MDAttributedStringChangeTracker::setAttachmentAdded_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}

// ===== MDAttributedStringChangeTracker::attachmentRemovedOrder @ 00026f18 =====

ID MDAttributedStringChangeTracker::attachmentRemovedOrder(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}

// ===== MDAttributedStringChangeTracker::setAttachmentRemovedOrder: @ 00026f24 =====

void MDAttributedStringChangeTracker::setAttachmentRemovedOrder_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}

// ===== MDAttributedStringChangeTracker::attachmentAddedOrder @ 00026f2c =====

ID MDAttributedStringChangeTracker::attachmentAddedOrder(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}

// ===== MDAttributedStringChangeTracker::setAttachmentAddedOrder: @ 00026f38 =====

void MDAttributedStringChangeTracker::setAttachmentAddedOrder_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}

// ===== MDAttributedStringChangeTracker::.cxx_destruct @ 00026f40 =====

void MDAttributedStringChangeTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

