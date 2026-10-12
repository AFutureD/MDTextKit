// ===== MDWrapSelectionTextOperation::closingDelimiterForOpeningDelimiter: @ 0002cc5c =====

ID MDWrapSelectionTextOperation::closingDelimiterForOpeningDelimiter_
             (ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = isEqualToString_(param_3,&cf__);
  if ((IVar1 & 1) == 0) {
    IVar1 = isEqualToString_(param_3,&cf__);
    if ((IVar1 & 1) == 0) {
      IVar1 = isEqualToString_(param_3,&cf__);
      if ((IVar1 & 1) == 0) {
        pcVar2 = &cf__;
        IVar1 = isEqualToString_(param_3,&cf__);
        if ((IVar1 & 1) == 0) {
          pcVar2 = &cf__;
          IVar1 = isEqualToString_(param_3,&cf__);
          if ((IVar1 & 1) == 0) {
            pcVar2 = &cf__;
            IVar1 = isEqualToString_(param_3,&cf__);
            if ((IVar1 & 1) == 0) {
              IVar1 = isEqualToString_(param_3,&cf_format_s_);
              if ((IVar1 & 1) == 0) {
                IVar1 = isEqualToString_(param_3,&cf_format_s_);
                if ((IVar1 & 1) == 0) {
                  IVar1 = isEqualToString_(param_3,&cf_format_s_);
                  if ((IVar1 & 1) == 0) {
                    IVar1 = isEqualToString_(param_3,&cf_0);
                    if ((IVar1 & 1) == 0) {
                      IVar1 = isEqualToString_(param_3,&cf_0);
                      if ((IVar1 & 1) == 0) {
                        IVar1 = isEqualToString_(param_3,&cf_0);
                        if ((IVar1 & 1) == 0) {
                          IVar1 = isEqualToString_(param_3,&cf_0);
                          if ((IVar1 & 1) == 0) {
                            IVar1 = isEqualToString_(param_3,&cf_0);
                            if ((IVar1 & 1) == 0) {
                              IVar1 = isEqualToString_(param_3,&cf_0);
                              if ((IVar1 & 1) == 0) {
                                IVar1 = isEqualToString_(param_3,&cf_0);
                                pcVar2 = &cf_0;
                                if ((int)IVar1 == 0) {
                                  pcVar2 = (cfstringStruct *)0x0;
                                }
                              }
                              else {
                                pcVar2 = &cf_0;
                              }
                            }
                            else {
                              pcVar2 = &cf_0;
                            }
                          }
                          else {
                            pcVar2 = &cf_0;
                          }
                        }
                        else {
                          pcVar2 = &cf_0;
                        }
                      }
                      else {
                        pcVar2 = &cf_0;
                      }
                    }
                    else {
                      pcVar2 = &cf_0;
                    }
                  }
                  else {
                    pcVar2 = &cf_format_s_;
                  }
                }
                else {
                  pcVar2 = &cf_format_s_;
                }
              }
              else {
                pcVar2 = &cf_format_s_;
              }
            }
          }
        }
      }
      else {
        pcVar2 = &cf__;
      }
    }
    else {
      pcVar2 = &cf__;
    }
  }
  else {
    pcVar2 = &cf__;
  }
  return (ID)pcVar2;
}

// ===== MDWrapSelectionTextOperation::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 0002ce70 =====

ID MDWrapSelectionTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  uVar4 = param_6.field1_0x8;
  uVar3 = param_6.field0_0x0;
  IVar1 = 0;
  if (uVar4 != 0) {
    IVar1 = length(param_4,param_3.field0_0x0,param_3.field1_0x8);
    if (IVar1 == 1) {
      IVar1 = closingDelimiterForOpeningDelimiter_(param_1,param_4);
      if (IVar1 == 0) {
        IVar1 = 0;
      }
      else {
        local_80 = param_4;
        IVar2 = attributedSubstringFromRange_(param_5,uVar3,uVar4);
        local_78 = string(IVar2);
        IStack_70 = IVar1;
        IVar1 = arrayWithObjects_count_(NSArray,&local_80,3);
        IVar1 = componentsJoinedByString_(IVar1,&cf___);
        IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        self = _objc_opt_new(NSAttributedString);
        IVar1 = initWithString_(self,IVar1);
        setReplacementAttributedString_(IVar2,IVar1);
        setReplacementRange_(IVar2,uVar3,uVar4);
        setProposedSelectionRange_(IVar2,uVar3 + 1,uVar4);
        local_88 = IVar2;
        IVar1 = arrayWithObjects_count_(NSArray,&local_88,1);
      }
    }
    else {
      IVar1 = 0;
    }
  }
  }
  return IVar1;
}

