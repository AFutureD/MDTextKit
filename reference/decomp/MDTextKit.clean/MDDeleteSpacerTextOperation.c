// ===== MDDeleteSpacerTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c074 =====

ID MDDeleteSpacerTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  IVar2 = param_3.field0_0x0;
  if ((((param_3.field1_0x8 == 1) &&
       (IVar1 = isEqualToString_(param_4,&cf___), (int)IVar1 != 0)) &&
      (IVar1 = attribute_atIndex_effectiveRange_(param_5,&cf_MDSpacer,IVar2,0),
      IVar1 != 0)) &&
     (IVar1 = rangeByExtendingRange_toIncludeAttribute_(param_5,IVar2,1,&cf_MDSpacer),
     IVar1 != IVar2 || extraout_x1 != 1)) {
    IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
    IVar3 = _objc_alloc(NSAttributedString);
    IVar3 = initWithString_(IVar3,&cf___);
    setReplacementAttributedString_(IVar2,IVar3);
    setReplacementRange_(IVar2,IVar1,extraout_x1);
    setProposedSelectionRange_(IVar2,IVar1,0);
    local_50 = IVar2;
    IVar2 = arrayWithObjects_count_(NSArray,&local_50,1);
  }
  else {
    IVar2 = 0;
  }
    return IVar2;
  }
}

