// ===== MDDeleteTagSpacerTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c200 =====

ID MDDeleteTagSpacerTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  uVar2 = param_3.field0_0x0;
  if (((param_3.field1_0x8 == 1) &&
      (IVar1 = isEqualToString_(param_4,&cf___), (int)IVar1 != 0)) &&
     (IVar1 = attribute_atIndex_effectiveRange_(param_5,&cf_MDSpacer,uVar2,0), IVar1 != 0
     )) {
    uVar3 = _PMKHashtagAttributeName;
    IVar1 = attribute_atIndex_effectiveRange_(param_5,uVar3,uVar2,0);
    if (IVar1 != 0) {
      IVar1 = length(param_5);
      attribute_atIndex_longestEffectiveRange_inRange_
                (param_5,uVar3,uVar2,&local_60,0,IVar1);
      IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
      setProposedSelectionRange_(IVar1,local_60,uStack_58);
      local_50 = IVar1;
      IVar1 = arrayWithObjects_count_(NSArray,&local_50,1);
      goto LAB_0002c33c;
    }
  }
  IVar1 = 0;
LAB_0002c33c:
    return IVar1;
  }
}

