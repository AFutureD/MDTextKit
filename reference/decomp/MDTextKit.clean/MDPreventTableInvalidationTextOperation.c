// ===== MDPreventTableInvalidationTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c8e4 =====

ID MDPreventTableInvalidationTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  uVar7 = param_3.field1_0x8;
  uVar5 = param_3.field0_0x0;
  uVar1 = uVar5 + uVar7;
  IVar2 = length(param_5);
  if (((uVar1 < IVar2) && (IVar2 = hasTableAtIndex_(param_5,uVar1), (int)IVar2 != 0)) &&
     (IVar2 = hasSuffix_(param_4,&cf_newline_s_), (IVar2 & 1) == 0)) {
    IVar2 = isEqualToString_(param_4,&cf___);
    if ((int)IVar2 == 0) {
      IVar2 = _objc_alloc(NSAttributedString);
      IVar3 = stringByAppendingString_(param_4,&cf_newline_s_);
      IVar2 = initWithString_(IVar2,IVar3);
      IVar3 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
      setReplacementRange_(IVar3,uVar5,uVar7);
      IVar4 = length(IVar2);
      setProposedSelectionRange_(IVar3,uVar1 + IVar4 + -1,0);
      setReplacementAttributedString_(IVar3,IVar2);
      pIVar6 = &local_68;
      local_68 = IVar3;
LAB_0002cc30:
      IVar2 = arrayWithObjects_count_(NSArray,pIVar6,1);
      goto LAB_0002cab8;
    }
    if (uVar5 != 0) {
      IVar2 = string(param_5);
      IVar2 = characterAtIndex_(IVar2,uVar5 - 1);
      if ((int)IVar2 != 10) {
        IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        setProposedSelectionRange_(IVar2,uVar1 - 1,0);
        pIVar6 = &local_60;
        local_60 = IVar2;
LAB_0002ca88:
        IVar2 = arrayWithObjects_count_(NSArray,pIVar6,1);
        goto LAB_0002cab8;
      }
    }
  }
  else if (((uVar5 != 0) &&
           (IVar2 = hasTableAtIndex_(param_5,uVar5 - 1), (int)IVar2 != 0)) &&
          (IVar2 = hasPrefix_(param_4,&cf_newline_s_), (IVar2 & 1) == 0)) {
    IVar2 = isEqualToString_(param_4,&cf___);
    if (((int)IVar2 == 0) || (IVar2 = length(param_5), IVar2 <= uVar1)) {
      IVar2 = isEqualToString_(param_4,&cf___);
      if ((IVar2 & 1) == 0) {
        IVar2 = _objc_alloc(NSAttributedString);
        IVar3 = stringByAppendingString_(0x5d938,param_4);
        IVar2 = initWithString_(IVar2,IVar3);
        IVar3 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        setReplacementRange_(IVar3,uVar5,uVar7);
        IVar4 = length(IVar2);
        setProposedSelectionRange_(IVar3,IVar4 + uVar1,0);
        setReplacementAttributedString_(IVar3,IVar2);
        pIVar6 = &local_78;
        local_78 = IVar3;
        goto LAB_0002cc30;
      }
    }
    else {
      IVar2 = string(param_5);
      IVar2 = characterAtIndex_(IVar2,uVar5 + 1);
      if ((int)IVar2 != 10) {
        IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        setProposedSelectionRange_(IVar2,uVar1 - 1,0);
        pIVar6 = &local_70;
        local_70 = IVar2;
        goto LAB_0002ca88;
      }
    }
  }
  IVar2 = 0;
LAB_0002cab8:
  }
  return IVar2;
}

