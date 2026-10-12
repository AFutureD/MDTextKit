// ===== MDPreventInlineStyleInvalidationTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c540 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDPreventInlineStyleInvalidationTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  ID local_60;
  long local_58;
  
  uVar2 = param_3.field0_0x0;
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar3 = 0;
  if ((uVar2 != 0) && (param_3.field1_0x8 == 0)) {
    IVar3 = objc_stub::length(param_5);
    if ((uVar2 < IVar3) &&
       (((IVar3 = objc_stub::isEqualToString_(param_4,&cf_space_s_), (int)IVar3 != 0 &&
         (IVar3 = objc_stub::inlineClosingMarkerRangeAtIndex_(param_5,uVar2), IVar3 == uVar2)) &&
        (IVar3 = objc_stub::isRangeInsideCode_(param_5,uVar2,0), (IVar3 & 1) == 0)))) {
      IVar3 = objc_stub::attributesAtIndex_effectiveRange_(param_5,uVar2 - 1,0);
      IVar3 = objc_stub::mutableCopy(IVar3);
      objc_stub::removeObjectForKey_(IVar3,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
      IVar1 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
      IVar3 = objc_stub::initWithString_attributes_(IVar1,param_4,IVar3);
      IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
      objc_stub::setReplacementAttributedString_(IVar1,IVar3);
      objc_stub::setReplacementRange_(IVar1,uVar2,0);
      objc_stub::setProposedSelectionRange_(IVar1,uVar2 + 1,0);
      objc_stub::setNeedStyling_(IVar1,0);
      local_60 = IVar1;
      IVar3 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_60,1);
    }
    else {
      IVar3 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_58) {
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


