// ===== MDDeleteSpacerTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c074 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDDeleteSpacerTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long extraout_x1;
  ID local_50;
  long local_48;
  
  IVar2 = param_3.field0_0x0;
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  if ((((param_3.field1_0x8 == 1) &&
       (IVar1 = objc_stub::isEqualToString_(param_4,&cf___), (int)IVar1 != 0)) &&
      (IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_5,&cf_MDSpacer,IVar2,0),
      IVar1 != 0)) &&
     (IVar1 = objc_stub::rangeByExtendingRange_toIncludeAttribute_(param_5,IVar2,1,&cf_MDSpacer),
     IVar1 != IVar2 || extraout_x1 != 1)) {
    IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
    IVar3 = objc_stub::initWithString_(IVar3,&cf___);
    objc_stub::setReplacementAttributedString_(IVar2,IVar3);
    objc_stub::setReplacementRange_(IVar2,IVar1,extraout_x1);
    objc_stub::setProposedSelectionRange_(IVar2,IVar1,0);
    local_50 = IVar2;
    IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
  }
  else {
    IVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_48) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


