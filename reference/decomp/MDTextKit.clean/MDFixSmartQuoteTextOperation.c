// ===== MDFixSmartQuoteTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002c718 =====

ID MDFixSmartQuoteTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  uVar3 = param_3.field0_0x0;
  if (((uVar3 != 0) && (IVar1 = length(param_5), uVar3 + param_3.field1_0x8 < IVar1)) &&
     (IVar1 = isEqualToString_(param_4,&cf_format_s_), (int)IVar1 != 0)) {
    IVar1 = string(param_5);
    IVar1 = characterAtIndex_(IVar1,uVar3);
    if ((int)IVar1 == 0x22) {
      IVar1 = hasOpeningMarkerAtIndex_(param_5,uVar3 - 1);
      if (((IVar1 & 1) != 0) ||
         (IVar1 = textAttachmentAtIndex_(param_5,uVar3 - 1), IVar1 != 0)) {
        IVar1 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        IVar2 = _objc_alloc(NSAttributedString);
        IVar2 = initWithString_attributes_(IVar2,&cf_format_s_,0);
        setReplacementAttributedString_(IVar1,IVar2);
        setReplacementRange_(IVar1,uVar3,param_3.field1_0x8);
        setProposedSelectionRange_(IVar1,param_6.field0_0x0,param_6.field1_0x8);
        local_60 = IVar1;
        IVar1 = arrayWithObjects_count_(NSArray,&local_60,1);
        goto LAB_0002c898;
      }
    }
  }
  IVar1 = 0;
LAB_0002c898:
    return IVar1;
  }
}

