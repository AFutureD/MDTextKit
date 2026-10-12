// ===== MDFixSmartQuoteTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c718 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDFixSmartQuoteTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ID IVar1;
  ID IVar2;
  unsigned_long_long uVar3;
  ID local_60;
  long local_58;
  
  uVar3 = param_3.field0_0x0;
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  if (((uVar3 != 0) && (IVar1 = objc_stub::length(param_5), uVar3 + param_3.field1_0x8 < IVar1)) &&
     (IVar1 = objc_stub::isEqualToString_(param_4,&cf_format_s_), (int)IVar1 != 0)) {
    IVar1 = objc_stub::string(param_5);
    IVar1 = objc_stub::characterAtIndex_(IVar1,uVar3);
    if ((int)IVar1 == 0x22) {
      IVar1 = objc_stub::hasOpeningMarkerAtIndex_(param_5,uVar3 - 1);
      if (((IVar1 & 1) != 0) ||
         (IVar1 = objc_stub::textAttachmentAtIndex_(param_5,uVar3 - 1), IVar1 != 0)) {
        IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
        IVar2 = objc_stub::initWithString_attributes_(IVar2,&cf_format_s_,0);
        objc_stub::setReplacementAttributedString_(IVar1,IVar2);
        objc_stub::setReplacementRange_(IVar1,uVar3,param_3.field1_0x8);
        objc_stub::setProposedSelectionRange_(IVar1,param_6.field0_0x0,param_6.field1_0x8);
        local_60 = IVar1;
        IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_60,1);
        goto LAB_0002c898;
      }
    }
  }
  IVar1 = 0;
LAB_0002c898:
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


