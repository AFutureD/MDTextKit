// ===== MDPreventTableInvalidationTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c8e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDPreventTableInvalidationTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  unsigned_long_long uVar5;
  ID *pIVar6;
  unsigned_long_long uVar7;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  long local_58;
  
  uVar7 = param_3.field1_0x8;
  uVar5 = param_3.field0_0x0;
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  uVar1 = uVar5 + uVar7;
  IVar2 = objc_stub::length(param_5);
  if (((uVar1 < IVar2) && (IVar2 = objc_stub::hasTableAtIndex_(param_5,uVar1), (int)IVar2 != 0)) &&
     (IVar2 = objc_stub::hasSuffix_(param_4,&cf_newline_s_), (IVar2 & 1) == 0)) {
    IVar2 = objc_stub::isEqualToString_(param_4,&cf___);
    if ((int)IVar2 == 0) {
      IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
      IVar3 = objc_stub::stringByAppendingString_(param_4,&cf_newline_s_);
      IVar2 = objc_stub::initWithString_(IVar2,IVar3);
      IVar3 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
      objc_stub::setReplacementRange_(IVar3,uVar5,uVar7);
      IVar4 = objc_stub::length(IVar2);
      objc_stub::setProposedSelectionRange_(IVar3,uVar1 + IVar4 + -1,0);
      objc_stub::setReplacementAttributedString_(IVar3,IVar2);
      pIVar6 = &local_68;
      local_68 = IVar3;
LAB_0002cc30:
      IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,pIVar6,1);
      goto LAB_0002cab8;
    }
    if (uVar5 != 0) {
      IVar2 = objc_stub::string(param_5);
      IVar2 = objc_stub::characterAtIndex_(IVar2,uVar5 - 1);
      if ((int)IVar2 != 10) {
        IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        objc_stub::setProposedSelectionRange_(IVar2,uVar1 - 1,0);
        pIVar6 = &local_60;
        local_60 = IVar2;
LAB_0002ca88:
        IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,pIVar6,1);
        goto LAB_0002cab8;
      }
    }
  }
  else if (((uVar5 != 0) &&
           (IVar2 = objc_stub::hasTableAtIndex_(param_5,uVar5 - 1), (int)IVar2 != 0)) &&
          (IVar2 = objc_stub::hasPrefix_(param_4,&cf_newline_s_), (IVar2 & 1) == 0)) {
    IVar2 = objc_stub::isEqualToString_(param_4,&cf___);
    if (((int)IVar2 == 0) || (IVar2 = objc_stub::length(param_5), IVar2 <= uVar1)) {
      IVar2 = objc_stub::isEqualToString_(param_4,&cf___);
      if ((IVar2 & 1) == 0) {
        IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
        IVar3 = objc_stub::stringByAppendingString_(0x5d938,param_4);
        IVar2 = objc_stub::initWithString_(IVar2,IVar3);
        IVar3 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        objc_stub::setReplacementRange_(IVar3,uVar5,uVar7);
        IVar4 = objc_stub::length(IVar2);
        objc_stub::setProposedSelectionRange_(IVar3,IVar4 + uVar1,0);
        objc_stub::setReplacementAttributedString_(IVar3,IVar2);
        pIVar6 = &local_78;
        local_78 = IVar3;
        goto LAB_0002cc30;
      }
    }
    else {
      IVar2 = objc_stub::string(param_5);
      IVar2 = objc_stub::characterAtIndex_(IVar2,uVar5 + 1);
      if ((int)IVar2 != 10) {
        IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        objc_stub::setProposedSelectionRange_(IVar2,uVar1 - 1,0);
        pIVar6 = &local_70;
        local_70 = IVar2;
        goto LAB_0002ca88;
      }
    }
  }
  IVar2 = 0;
LAB_0002cab8:
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}


