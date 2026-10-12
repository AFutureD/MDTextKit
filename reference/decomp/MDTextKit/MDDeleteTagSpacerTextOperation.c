// ===== MDDeleteTagSpacerTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c200 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDDeleteTagSpacerTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ID IVar1;
  unsigned_long_long uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  ID local_50;
  long local_48;
  
  uVar2 = param_3.field0_0x0;
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  if (((param_3.field1_0x8 == 1) &&
      (IVar1 = objc_stub::isEqualToString_(param_4,&cf___), (int)IVar1 != 0)) &&
     (IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_5,&cf_MDSpacer,uVar2,0), IVar1 != 0
     )) {
    uVar3 = *(undefined8 *)PTR__PMKHashtagAttributeName_0005e948;
    IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_5,uVar3,uVar2,0);
    if (IVar1 != 0) {
      IVar1 = objc_stub::length(param_5);
      objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                (param_5,uVar3,uVar2,&local_60,0,IVar1);
      IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
      objc_stub::setProposedSelectionRange_(IVar1,local_60,uStack_58);
      local_50 = IVar1;
      IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
      goto LAB_0002c33c;
    }
  }
  IVar1 = 0;
LAB_0002c33c:
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


