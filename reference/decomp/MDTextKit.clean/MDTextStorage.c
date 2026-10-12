// ===== MDTextStorage::init @ 00020928 =====

ID MDTextStorage::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDTextStorage;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(NSMutableAttributedString);
    *(undefined8 *)(self + (long)_imp) = uVar1;
    uVar1 = _objc_opt_new(&objc::class_t::MDAttributedStringChangeTracker);
    setChangeTracker_(self,uVar1);
    uVar1 = _objc_opt_new(PMKAST);
    setAst_(self,uVar1);
    setCurrentReparsedRange_(self,0x7fffffffffffffff,0);
  }
  return self;
}

// ===== MDTextStorage::string @ 000209ec =====

ID MDTextStorage::string(ID param_1,SEL param_2)

{
  
  IVar1 = string(*(ID *)(param_1 + (long)_imp));
  return IVar1;
}

// ===== MDTextStorage::setAttributedString: @ 000209fc =====

void MDTextStorage::setAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  
  setPreventASTChanges_(param_1,1);
  IVar1 = length(param_1);
  replaceCharactersInRange_withString_(param_1,0,IVar1,&cf___);
  setPreventASTChanges_(param_1,0);
  IVar1 = ast(param_1);
  reset(IVar1);
  IVar1 = changeTracker(param_1);
  resetChanges(IVar1);
  setCurrentReparsedRange_(param_1,0x7fffffffffffffff,0);
  local_40.super_class = &objc::class_t::MDTextStorage;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setAttributedString:",param_3);
  return;
}

// ===== MDTextStorage::attributesAtIndex:effectiveRange: @ 00020ae4 =====

ID MDTextStorage::attributesAtIndex_effectiveRange_
             (ID param_1,SEL param_2,unsigned_long_long param_3,_NSRange *param_4)

{
  
  lVar3 = (long)_imp;
  IVar1 = length(*(ID *)(param_1 + lVar3));
  if (param_3 < IVar1) {
    puVar2 = (undefined *)
             attributesAtIndex_effectiveRange_(*(ID *)(param_1 + lVar3),param_3,param_4);
  }
  else {
    puVar2 = PTR____NSDictionary0__struct;
    if (param_4 != (_NSRange *)0x0) {
      param_4->field1_0x8 = 0;
      param_4->field0_0x0 = 0x7fffffffffffffff;
      puVar2 = PTR____NSDictionary0__struct;
    }
  }
  return (ID)puVar2;
}

// ===== MDTextStorage::replaceCharactersInRange:withString: @ 00020b5c =====

void MDTextStorage::replaceCharactersInRange_withString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar3 = param_3.field1_0x8;
  uVar2 = param_3.field0_0x0;
  IVar1 = changeTracker(param_1);
  lVar4 = (long)_imp;
  trackReplaceCharactersInRange_inAttributedString_withString_
            (IVar1,uVar2,uVar3,*(undefined8 *)(param_1 + lVar4),param_4);
  self = *(ID *)(param_1 + lVar4);
  IVar1 = _objc_alloc(NSAttributedString);
  IVar1 = initWithString_(IVar1,param_4);
  replaceCharactersInRange_withAttributedString_(self,uVar2,uVar3,IVar1);
  IVar1 = length(param_4);
  edited_range_changeInLength_(param_1,2,uVar2,uVar3,IVar1 - uVar3);
  return;
}

// ===== MDTextStorage::setAttributes:range: @ 00020c34 =====

void MDTextStorage::setAttributes_range_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  uVar2 = param_4.field1_0x8;
  uVar1 = param_4.field0_0x0;
  self = changeTracker(param_1);
  lVar3 = (long)_imp;
  trackSetAttributes_inAttributedString_range_
            (self,param_3,*(undefined8 *)(param_1 + lVar3),uVar1,uVar2);
  setAttributes_range_(*(ID *)(param_1 + lVar3),param_3,uVar1,uVar2);
  edited_range_changeInLength_(param_1,1,uVar1,uVar2,0);
  return;
}

// ===== MDTextStorage::processEditing @ 00020cdc =====

void MDTextStorage::processEditing(ID param_1,SEL param_2)

{
  
  processChanges(param_1);
  local_30.super_class = &objc::class_t::MDTextStorage;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"processEditing");
  return;
}

// ===== MDTextStorage::processChanges @ 00020d20 =====

void MDTextStorage::processChanges(ID param_1,SEL param_2)

{
  
  IVar1 = changeTracker(param_1);
  IVar1 = changes(IVar1);
  updateASTWithChanges_(param_1,IVar1);
  IVar1 = delegate(param_1);
  uVar2 = _objc_opt_respondsToSelector(IVar1,"textStorage:processedChanges:");
  if ((uVar2 & 1) != 0) {
    IVar1 = delegate(param_1);
    IVar3 = changeTracker(param_1);
    textStorage_processedChanges_(IVar1,param_1,IVar3);
  }
  IVar1 = delegate(param_1);
  uVar2 = _objc_opt_respondsToSelector(IVar1,"textStorage:didAddAttachment:");
  if ((uVar2 & 1) != 0) {
    IVar1 = changeTracker(param_1);
    IVar1 = addedAttachments(IVar1);
    IVar3 = FAST_ENUM(IVar1);
    if (IVar3 != 0) {
      lVar6 = *local_190;
      do {
        IVar7 = 0;
        do {
          if (*local_190 != lVar6) {
            _objc_enumerationMutation(IVar1);
          }
          uVar5 = *(undefined8 *)(lStack_198 + IVar7 * 8);
          IVar4 = delegate(param_1);
          textStorage_didAddAttachment_(IVar4,param_1,uVar5);
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = countByEnumeratingWithState_objects_count_
                          (IVar1,&local_1a0,auStack_d8,0x10);
      } while (IVar3 != 0);
    }
  }
  IVar1 = delegate(param_1);
  uVar2 = _objc_opt_respondsToSelector(IVar1,"textStorage:didRemoveAttachment:");
  if ((uVar2 & 1) != 0) {
    IVar1 = changeTracker(param_1);
    IVar1 = removedAttachments(IVar1);
    IVar3 = FAST_ENUM(IVar1)
    if (IVar3 != 0) {
      lVar6 = *local_1d0;
      do {
        IVar7 = 0;
        do {
          if (*local_1d0 != lVar6) {
            _objc_enumerationMutation(IVar1);
          }
          uVar5 = *(undefined8 *)(lStack_1d8 + IVar7 * 8);
          IVar4 = delegate(param_1);
          textStorage_didRemoveAttachment_(IVar4,param_1,uVar5);
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = countByEnumeratingWithState_objects_count_
                          (IVar1,&local_1e0,auStack_158,0x10);
      } while (IVar3 != 0);
    }
  }
  IVar1 = changeTracker(param_1);
  resetChanges(IVar1);
  }
  return;
}

// ===== MDTextStorage::updateASTWithChanges: @ 0002106c =====

void MDTextStorage::updateASTWithChanges_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = count(param_3);
  if ((IVar1 != 0) && (IVar1 = preventASTChanges(param_1), (IVar1 & 1) == 0)) {
    IVar1 = countByEnumeratingWithState_objects_count_
                      (param_3,&local_130,auStack_f0,0x10);
    if (IVar1 != 0) {
      lVar4 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          IVar6 = *(ID *)(lStack_128 + IVar5 * 8);
          IVar2 = currentString(IVar6);
          IVar6 = oldPlainRange(IVar6);
          IVar3 = ast(param_1);
          IVar3 = replaceRange_withMarkdown_(IVar3,IVar6,extraout_x1,IVar2);
          IVar2 = length(IVar2);
          validateAndSetReparsedRange_forReplacementRange_replacementLenght_
                    (param_1,IVar3,extraout_x1_00,IVar6,extraout_x1,IVar2);
          IVar5 = IVar5 + 1;
        } while (IVar1 != IVar5);
        IVar1 = countByEnumeratingWithState_objects_count_
                          (param_3,&local_130,auStack_f0,0x10);
      } while (IVar1 != 0);
    }
  }
  }
  return;
}

// ===== MDTextStorage::parseChangesUsingBlock: @ 0002121c =====

void MDTextStorage::parseChangesUsingBlock_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  
  IVar1 = currentReparsedRange(param_1,param_3,(ulong)param_4);
  if ((param_3 != 0) && (IVar1 != 0x7fffffffffffffff)) {
    IVar1 = ast(param_1);
    IVar2 = currentReparsedRange(param_1);
    IVar1 = annotatedStringForStringRange_(IVar1,IVar2,extraout_x1);
    IVar2 = currentReparsedRange(param_1);
    IVar2 = attributedStringRangeFromStringRange_(param_1,IVar2,extraout_x1_00);
    setPreventASTChanges_(param_1,1);
    (**(code **)(param_3 + 0x10))(param_3,IVar1,IVar2,extraout_x1_01);
    setPreventASTChanges_(param_1,0);
  }
  setCurrentReparsedRange_(param_1,0x7fffffffffffffff,0);
  return;
}

// ===== MDTextStorage::recordNewReplacementChangeForStringRange:replacementString: @ 00021318 =====

void MDTextStorage::recordNewReplacementChangeForStringRange_replacementString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = ast(param_1);
  replaceRange_withMarkdown_(IVar1,param_3.field0_0x0,param_3.field1_0x8,param_4);
  IVar1 = currentReparsedRange(param_1);
  if (IVar1 != 0x7fffffffffffffff) {
    IVar1 = currentReparsedRange(param_1);
    IVar2 = length(param_4);
    IVar1 = offsetSelectionRange_forReplacementRange_replacementLenght_
                      (NSAttributedString,IVar1,extraout_x1,param_3.field0_0x0,
                       param_3.field1_0x8,IVar2);
    setCurrentReparsedRange_(param_1,IVar1,extraout_x1_00);
  }
  return;
}

// ===== MDTextStorage::validateAndSetReparsedRange:forReplacementRange:replacementLenght: @ 000213f0 =====

void MDTextStorage::validateAndSetReparsedRange_forReplacementRange_replacementLenght_
               (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4,unsigned_long_long param_5)

{
  
  IVar1 = currentReparsedRange(param_1);
  if (IVar1 != 0x7fffffffffffffff) {
    IVar1 = currentReparsedRange(param_1);
    IVar1 = offsetSelectionRange_forReplacementRange_replacementLenght_
                      (NSAttributedString,IVar1,extraout_x1,param_4.field0_0x0,
                       param_4.field1_0x8,param_5);
    setCurrentReparsedRange_(param_1,IVar1,extraout_x1_00);
    currentReparsedRange(param_1);
    param_3 = (_NSRange)_NSUnionRange();
  }
  setCurrentReparsedRange_(param_1,param_3.field0_0x0,param_3.field1_0x8);
  return;
}

// ===== MDTextStorage::ast @ 000214ac =====

ID MDTextStorage::ast(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_ast);
}

// ===== MDTextStorage::setAst: @ 000214bc =====

void MDTextStorage::setAst_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_ast) = param_3;
  return;
}

// ===== MDTextStorage::currentReparsedRange @ 000214c8 =====

_NSRange MDTextStorage::currentReparsedRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + (long)_currentReparsedRange,0x10,1,0);
  return local_20;
}

// ===== MDTextStorage::setCurrentReparsedRange: @ 00021508 =====

void MDTextStorage::setCurrentReparsedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + (long)_currentReparsedRange,&local_20,0x10,1,0);
  return;
}

// ===== MDTextStorage::changeTracker @ 00021544 =====

ID MDTextStorage::changeTracker(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_changeTracker);
}

// ===== MDTextStorage::setChangeTracker: @ 00021554 =====

void MDTextStorage::setChangeTracker_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_changeTracker) = param_3;
  return;
}

// ===== MDTextStorage::preventASTChanges @ 00021560 =====

bool MDTextStorage::preventASTChanges(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_preventASTChanges) & 1;
}

// ===== MDTextStorage::setPreventASTChanges: @ 00021574 =====

void MDTextStorage::setPreventASTChanges_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_preventASTChanges) = (char)param_3;
  return;
}

// ===== MDTextStorage::.cxx_destruct @ 00021584 =====

void MDTextStorage::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_changeTracker) = 0;
  *(undefined8 *)(param_1 + (long)_ast) = 0;
  *(undefined8 *)(param_1 + (long)_imp) = 0;
  return;
}

