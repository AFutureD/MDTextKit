// ===== MDWrapSelectionTextOperation::closingDelimiterForOpeningDelimiter: @ 0002cc5c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDWrapSelectionTextOperation::closingDelimiterForOpeningDelimiter_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  
  IVar1 = objc_stub::isEqualToString_(param_3,&cf__);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::isEqualToString_(param_3,&cf__);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::isEqualToString_(param_3,&cf__);
      if ((IVar1 & 1) == 0) {
        pcVar2 = &cf__;
        IVar1 = objc_stub::isEqualToString_(param_3,&cf__);
        if ((IVar1 & 1) == 0) {
          pcVar2 = &cf__;
          IVar1 = objc_stub::isEqualToString_(param_3,&cf__);
          if ((IVar1 & 1) == 0) {
            pcVar2 = &cf__;
            IVar1 = objc_stub::isEqualToString_(param_3,&cf__);
            if ((IVar1 & 1) == 0) {
              IVar1 = objc_stub::isEqualToString_(param_3,&cf_format_s_);
              if ((IVar1 & 1) == 0) {
                IVar1 = objc_stub::isEqualToString_(param_3,&cf_format_s_);
                if ((IVar1 & 1) == 0) {
                  IVar1 = objc_stub::isEqualToString_(param_3,&cf_format_s_);
                  if ((IVar1 & 1) == 0) {
                    IVar1 = objc_stub::isEqualToString_(param_3,&cf_0);
                    if ((IVar1 & 1) == 0) {
                      IVar1 = objc_stub::isEqualToString_(param_3,&cf_0);
                      if ((IVar1 & 1) == 0) {
                        IVar1 = objc_stub::isEqualToString_(param_3,&cf_0);
                        if ((IVar1 & 1) == 0) {
                          IVar1 = objc_stub::isEqualToString_(param_3,&cf_0);
                          if ((IVar1 & 1) == 0) {
                            IVar1 = objc_stub::isEqualToString_(param_3,&cf_0);
                            if ((IVar1 & 1) == 0) {
                              IVar1 = objc_stub::isEqualToString_(param_3,&cf_0);
                              if ((IVar1 & 1) == 0) {
                                IVar1 = objc_stub::isEqualToString_(param_3,&cf_0);
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

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDWrapSelectionTextOperation::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ID IVar1;
  ID IVar2;
  ID self;
  unsigned_long_long uVar3;
  unsigned_long_long uVar4;
  ID local_88;
  ID local_80;
  ID local_78;
  ID IStack_70;
  long local_68;
  
  uVar4 = param_6.field1_0x8;
  uVar3 = param_6.field0_0x0;
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = 0;
  if (uVar4 != 0) {
    IVar1 = objc_stub::length(param_4,param_3.field0_0x0,param_3.field1_0x8);
    if (IVar1 == 1) {
      IVar1 = objc_stub::closingDelimiterForOpeningDelimiter_(param_1,param_4);
      if (IVar1 == 0) {
        IVar1 = 0;
      }
      else {
        local_80 = param_4;
        IVar2 = objc_stub::attributedSubstringFromRange_(param_5,uVar3,uVar4);
        local_78 = objc_stub::string(IVar2);
        IStack_70 = IVar1;
        IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_80,3);
        IVar1 = objc_stub::componentsJoinedByString_(IVar1,&cf___);
        IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
        self = _objc_opt_new(&_OBJC_CLASS___NSAttributedString);
        IVar1 = objc_stub::initWithString_(self,IVar1);
        objc_stub::setReplacementAttributedString_(IVar2,IVar1);
        objc_stub::setReplacementRange_(IVar2,uVar3,uVar4);
        objc_stub::setProposedSelectionRange_(IVar2,uVar3 + 1,uVar4);
        local_88 = IVar2;
        IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_88,1);
      }
    }
    else {
      IVar1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}


