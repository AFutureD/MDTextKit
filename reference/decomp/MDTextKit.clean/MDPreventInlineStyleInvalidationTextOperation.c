// ===== MDPreventInlineStyleInvalidationTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c540 =====

ID MDPreventInlineStyleInvalidationTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  uVar2 = param_3.field0_0x0;
  IVar3 = 0;
  if ((uVar2 != 0) && (param_3.field1_0x8 == 0)) {
    IVar3 = length(param_5);
    if ((uVar2 < IVar3) &&
       (((IVar3 = isEqualToString_(param_4,&cf_space_s_), (int)IVar3 != 0 &&
         (IVar3 = inlineClosingMarkerRangeAtIndex_(param_5,uVar2), IVar3 == uVar2)) &&
        (IVar3 = isRangeInsideCode_(param_5,uVar2,0), (IVar3 & 1) == 0)))) {
      IVar3 = attributesAtIndex_effectiveRange_(param_5,uVar2 - 1,0);
      IVar3 = mutableCopy(IVar3);
      removeObjectForKey_(IVar3,_NSAttachmentAttributeName);
      IVar1 = _objc_alloc(NSAttributedString);
      IVar3 = initWithString_attributes_(IVar1,param_4,IVar3);
      IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
      setReplacementAttributedString_(IVar1,IVar3);
      setReplacementRange_(IVar1,uVar2,0);
      setProposedSelectionRange_(IVar1,uVar2 + 1,0);
      setNeedStyling_(IVar1,0);
      local_60 = IVar1;
      IVar3 = arrayWithObjects_count_(NSArray,&local_60,1);
    }
    else {
      IVar3 = 0;
    }
  }
    return IVar3;
  }
}

