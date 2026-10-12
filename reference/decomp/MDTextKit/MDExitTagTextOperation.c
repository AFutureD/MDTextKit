// ===== MDExitTagTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c37c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDExitTagTextOperation::resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  ID local_50;
  long local_48;
  
  uVar3 = param_3.field0_0x0;
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  if ((((param_3.field1_0x8 == 0) && (IVar1 = objc_stub::length(param_5), uVar3 < IVar1)) &&
      ((IVar1 = objc_stub::isEqualToString_(param_4,&cf_space_s_), (IVar1 & 1) != 0 ||
       (IVar1 = objc_stub::isEqualToString_(param_4,&cf_newline_s_), (int)IVar1 != 0)))) &&
     ((IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_5,&cf_MDSpacer,uVar3,0),
      IVar1 != 0 &&
      (IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                         (param_5,*(undefined8 *)PTR__PMKHashtagMarkerAttributeName_0005e950,uVar3,0
                         ), IVar1 != 0)))) {
    IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
    IVar2 = objc_stub::initWithString_(IVar2,param_4);
    objc_stub::setReplacementAttributedString_(IVar1,IVar2);
    objc_stub::setReplacementRange_(IVar1,uVar3 + 1,0);
    objc_stub::setProposedSelectionRange_(IVar1,uVar3 + 2,0);
    local_50 = IVar1;
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
  }
  else {
    IVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


