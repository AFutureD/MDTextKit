// ===== MDExitTagTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c37c =====

ID MDExitTagTextOperation::resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  uVar3 = param_3.field0_0x0;
  if ((((param_3.field1_0x8 == 0) && (IVar1 = length(param_5), uVar3 < IVar1)) &&
      ((IVar1 = isEqualToString_(param_4,&cf_space_s_), (IVar1 & 1) != 0 ||
       (IVar1 = isEqualToString_(param_4,&cf_newline_s_), (int)IVar1 != 0)))) &&
     ((IVar1 = attribute_atIndex_effectiveRange_(param_5,&cf_MDSpacer,uVar3,0),
      IVar1 != 0 &&
      (IVar1 = attribute_atIndex_effectiveRange_
                         (param_5,_PMKHashtagMarkerAttributeName,uVar3,0
                         ), IVar1 != 0)))) {
    IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
    IVar2 = _objc_alloc(NSAttributedString);
    IVar2 = initWithString_(IVar2,param_4);
    setReplacementAttributedString_(IVar1,IVar2);
    setReplacementRange_(IVar1,uVar3 + 1,0);
    setProposedSelectionRange_(IVar1,uVar3 + 2,0);
    local_50 = IVar1;
    IVar1 = arrayWithObjects_count_(NSArray,&local_50,1);
  }
  else {
    IVar1 = 0;
  }
    return IVar1;
  }
}

