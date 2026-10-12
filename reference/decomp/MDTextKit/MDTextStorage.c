// ===== MDTextStorage::init @ 00020928 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTextStorage::init(ID param_1,SEL param_2)

{
  ID self;
  undefined8 uVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDTextStorage;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableAttributedString);
    *(undefined8 *)(self + (long)_imp) = uVar1;
    uVar1 = _objc_opt_new(&objc::class_t::MDAttributedStringChangeTracker);
    objc_stub::setChangeTracker_(self,uVar1);
    uVar1 = _objc_opt_new(&_OBJC_CLASS___PMKAST);
    objc_stub::setAst_(self,uVar1);
    objc_stub::setCurrentReparsedRange_(self,0x7fffffffffffffff,0);
  }
  return self;
}


// ===== MDTextStorage::string @ 000209ec =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTextStorage::string(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::string(*(ID *)(param_1 + (long)_imp));
  return IVar1;
}


// ===== MDTextStorage::setAttributedString: @ 000209fc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTextStorage::setAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  objc_stub::setPreventASTChanges_(param_1,1);
  IVar1 = objc_stub::length(param_1);
  objc_stub::replaceCharactersInRange_withString_(param_1,0,IVar1,&cf___);
  objc_stub::setPreventASTChanges_(param_1,0);
  IVar1 = objc_stub::ast(param_1);
  objc_stub::reset(IVar1);
  IVar1 = objc_stub::changeTracker(param_1);
  objc_stub::resetChanges(IVar1);
  objc_stub::setCurrentReparsedRange_(param_1,0x7fffffffffffffff,0);
  local_40.super_class = &objc::class_t::MDTextStorage;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setAttributedString:",param_3);
  return;
}


// ===== MDTextStorage::attributesAtIndex:effectiveRange: @ 00020ae4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID MDTextStorage::attributesAtIndex_effectiveRange_
             (ID param_1,SEL param_2,unsigned_long_long param_3,_NSRange *param_4)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_imp;
  IVar1 = objc_stub::length(*(ID *)(param_1 + lVar3));
  if (param_3 < IVar1) {
    puVar2 = (undefined *)
             objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + lVar3),param_3,param_4);
  }
  else {
    puVar2 = PTR____NSDictionary0__struct_0005ecd0;
    if (param_4 != (_NSRange *)0x0) {
      param_4->field1_0x8 = 0;
      param_4->field0_0x0 = 0x7fffffffffffffff;
      puVar2 = PTR____NSDictionary0__struct_0005ecd0;
    }
  }
  return (ID)puVar2;
}


// ===== MDTextStorage::replaceCharactersInRange:withString: @ 00020b5c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDTextStorage::replaceCharactersInRange_withString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  unsigned_long_long uVar2;
  unsigned_long_long uVar3;
  ID self;
  long lVar4;
  
  uVar3 = param_3.field1_0x8;
  uVar2 = param_3.field0_0x0;
  IVar1 = objc_stub::changeTracker(param_1);
  lVar4 = (long)_imp;
  objc_stub::trackReplaceCharactersInRange_inAttributedString_withString_
            (IVar1,uVar2,uVar3,*(undefined8 *)(param_1 + lVar4),param_4);
  self = *(ID *)(param_1 + lVar4);
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
  IVar1 = objc_stub::initWithString_(IVar1,param_4);
  objc_stub::replaceCharactersInRange_withAttributedString_(self,uVar2,uVar3,IVar1);
  IVar1 = objc_stub::length(param_4);
  objc_stub::edited_range_changeInLength_(param_1,2,uVar2,uVar3,IVar1 - uVar3);
  return;
}


// ===== MDTextStorage::setAttributes:range: @ 00020c34 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDTextStorage::setAttributes_range_(ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID self;
  unsigned_long_long uVar1;
  unsigned_long_long uVar2;
  long lVar3;
  
  uVar2 = param_4.field1_0x8;
  uVar1 = param_4.field0_0x0;
  self = objc_stub::changeTracker(param_1);
  lVar3 = (long)_imp;
  objc_stub::trackSetAttributes_inAttributedString_range_
            (self,param_3,*(undefined8 *)(param_1 + lVar3),uVar1,uVar2);
  objc_stub::setAttributes_range_(*(ID *)(param_1 + lVar3),param_3,uVar1,uVar2);
  objc_stub::edited_range_changeInLength_(param_1,1,uVar1,uVar2,0);
  return;
}


// ===== MDTextStorage::processEditing @ 00020cdc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDTextStorage::processEditing(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  objc_stub::processChanges(param_1);
  local_30.super_class = &objc::class_t::MDTextStorage;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"processEditing");
  return;
}


// ===== MDTextStorage::processChanges @ 00020d20 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDTextStorage::processChanges(ID param_1,SEL param_2)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  undefined8 local_1e0;
  long lStack_1d8;
  long *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long lStack_198;
  long *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = objc_stub::changeTracker(param_1);
  IVar1 = objc_stub::changes(IVar1);
  objc_stub::updateASTWithChanges_(param_1,IVar1);
  IVar1 = objc_stub::delegate(param_1);
  uVar2 = _objc_opt_respondsToSelector(IVar1,"textStorage:processedChanges:");
  if ((uVar2 & 1) != 0) {
    IVar1 = objc_stub::delegate(param_1);
    IVar3 = objc_stub::changeTracker(param_1);
    objc_stub::textStorage_processedChanges_(IVar1,param_1,IVar3);
  }
  IVar1 = objc_stub::delegate(param_1);
  uVar2 = _objc_opt_respondsToSelector(IVar1,"textStorage:didAddAttachment:");
  if ((uVar2 & 1) != 0) {
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    local_190 = (long *)0x0;
    IVar1 = objc_stub::changeTracker(param_1);
    IVar1 = objc_stub::addedAttachments(IVar1);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_1a0,auStack_d8,0x10);
    if (IVar3 != 0) {
      lVar6 = *local_190;
      do {
        IVar7 = 0;
        do {
          if (*local_190 != lVar6) {
            _objc_enumerationMutation(IVar1);
          }
          uVar5 = *(undefined8 *)(lStack_198 + IVar7 * 8);
          IVar4 = objc_stub::delegate(param_1);
          objc_stub::textStorage_didAddAttachment_(IVar4,param_1,uVar5);
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_1a0,auStack_d8,0x10);
      } while (IVar3 != 0);
    }
  }
  IVar1 = objc_stub::delegate(param_1);
  uVar2 = _objc_opt_respondsToSelector(IVar1,"textStorage:didRemoveAttachment:");
  if ((uVar2 & 1) != 0) {
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = (long *)0x0;
    IVar1 = objc_stub::changeTracker(param_1);
    IVar1 = objc_stub::removedAttachments(IVar1);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_1e0,auStack_158,0x10)
    ;
    if (IVar3 != 0) {
      lVar6 = *local_1d0;
      do {
        IVar7 = 0;
        do {
          if (*local_1d0 != lVar6) {
            _objc_enumerationMutation(IVar1);
          }
          uVar5 = *(undefined8 *)(lStack_1d8 + IVar7 * 8);
          IVar4 = objc_stub::delegate(param_1);
          objc_stub::textStorage_didRemoveAttachment_(IVar4,param_1,uVar5);
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_1e0,auStack_158,0x10);
      } while (IVar3 != 0);
    }
  }
  IVar1 = objc_stub::changeTracker(param_1);
  objc_stub::resetChanges(IVar1);
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== MDTextStorage::updateASTWithChanges: @ 0002106c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTextStorage::updateASTWithChanges_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  ID IVar5;
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
  IVar1 = objc_stub::count(param_3);
  if ((IVar1 != 0) && (IVar1 = objc_stub::preventASTChanges(param_1), (IVar1 & 1) == 0)) {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
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
          IVar2 = objc_stub::currentString(IVar6);
          IVar6 = objc_stub::oldPlainRange(IVar6);
          IVar3 = objc_stub::ast(param_1);
          IVar3 = objc_stub::replaceRange_withMarkdown_(IVar3,IVar6,extraout_x1,IVar2);
          IVar2 = objc_stub::length(IVar2);
          objc_stub::validateAndSetReparsedRange_forReplacementRange_replacementLenght_
                    (param_1,IVar3,extraout_x1_00,IVar6,extraout_x1,IVar2);
          IVar5 = IVar5 + 1;
        } while (IVar1 != IVar5);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_130,auStack_f0,0x10);
      } while (IVar1 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== MDTextStorage::parseChangesUsingBlock: @ 0002121c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTextStorage::parseChangesUsingBlock_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  IVar1 = objc_stub::currentReparsedRange(param_1,param_3,(ulong)param_4);
  if ((param_3 != 0) && (IVar1 != 0x7fffffffffffffff)) {
    IVar1 = objc_stub::ast(param_1);
    IVar2 = objc_stub::currentReparsedRange(param_1);
    IVar1 = objc_stub::annotatedStringForStringRange_(IVar1,IVar2,extraout_x1);
    IVar2 = objc_stub::currentReparsedRange(param_1);
    IVar2 = objc_stub::attributedStringRangeFromStringRange_(param_1,IVar2,extraout_x1_00);
    objc_stub::setPreventASTChanges_(param_1,1);
    (**(code **)(param_3 + 0x10))(param_3,IVar1,IVar2,extraout_x1_01);
    objc_stub::setPreventASTChanges_(param_1,0);
  }
  objc_stub::setCurrentReparsedRange_(param_1,0x7fffffffffffffff,0);
  return;
}


// ===== MDTextStorage::recordNewReplacementChangeForStringRange:replacementString: @ 00021318 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDTextStorage::recordNewReplacementChangeForStringRange_replacementString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::ast(param_1);
  objc_stub::replaceRange_withMarkdown_(IVar1,param_3.field0_0x0,param_3.field1_0x8,param_4);
  IVar1 = objc_stub::currentReparsedRange(param_1);
  if (IVar1 != 0x7fffffffffffffff) {
    IVar1 = objc_stub::currentReparsedRange(param_1);
    IVar2 = objc_stub::length(param_4);
    IVar1 = objc_stub::offsetSelectionRange_forReplacementRange_replacementLenght_
                      ((ID)&_OBJC_CLASS___NSAttributedString,IVar1,extraout_x1,param_3.field0_0x0,
                       param_3.field1_0x8,IVar2);
    objc_stub::setCurrentReparsedRange_(param_1,IVar1,extraout_x1_00);
  }
  return;
}


// ===== MDTextStorage::validateAndSetReparsedRange:forReplacementRange:replacementLenght: @ 000213f0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDTextStorage::validateAndSetReparsedRange_forReplacementRange_replacementLenght_
               (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4,unsigned_long_long param_5)

{
  ID IVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::currentReparsedRange(param_1);
  if (IVar1 != 0x7fffffffffffffff) {
    IVar1 = objc_stub::currentReparsedRange(param_1);
    IVar1 = objc_stub::offsetSelectionRange_forReplacementRange_replacementLenght_
                      ((ID)&_OBJC_CLASS___NSAttributedString,IVar1,extraout_x1,param_4.field0_0x0,
                       param_4.field1_0x8,param_5);
    objc_stub::setCurrentReparsedRange_(param_1,IVar1,extraout_x1_00);
    objc_stub::currentReparsedRange(param_1);
    param_3 = (_NSRange)_NSUnionRange();
  }
  objc_stub::setCurrentReparsedRange_(param_1,param_3.field0_0x0,param_3.field1_0x8);
  return;
}


// ===== MDTextStorage::ast @ 000214ac =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTextStorage::ast(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_ast);
}


// ===== MDTextStorage::setAst: @ 000214bc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTextStorage::setAst_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_ast) = param_3;
  return;
}


// ===== MDTextStorage::currentReparsedRange @ 000214c8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDTextStorage::currentReparsedRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + (long)_currentReparsedRange,0x10,1,0);
  return local_20;
}


// ===== MDTextStorage::setCurrentReparsedRange: @ 00021508 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDTextStorage::setCurrentReparsedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + (long)_currentReparsedRange,&local_20,0x10,1,0);
  return;
}


// ===== MDTextStorage::changeTracker @ 00021544 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTextStorage::changeTracker(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_changeTracker);
}


// ===== MDTextStorage::setChangeTracker: @ 00021554 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTextStorage::setChangeTracker_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_changeTracker) = param_3;
  return;
}


// ===== MDTextStorage::preventASTChanges @ 00021560 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDTextStorage::preventASTChanges(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_preventASTChanges) & 1;
}


// ===== MDTextStorage::setPreventASTChanges: @ 00021574 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDTextStorage::setPreventASTChanges_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_preventASTChanges) = (char)param_3;
  return;
}


// ===== MDTextStorage::.cxx_destruct @ 00021584 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDTextStorage::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_changeTracker) = 0;
  *(undefined8 *)(param_1 + (long)_ast) = 0;
  *(undefined8 *)(param_1 + (long)_imp) = 0;
  return;
}


