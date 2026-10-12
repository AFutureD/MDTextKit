// ===== MDOrderTaskListTextOperation::resultForAttributedString:inRange:selectionRange: @ 0003a970 =====

ID MDOrderTaskListTextOperation::resultForAttributedString_inRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  
  if (param_4.field1_0x8 == 0) {
    IVar3 = length(param_3);
    IVar2 = 0;
  }
  else {
    IVar2 = extendRangeToFullyContainLists_
                      (param_3,param_4.field0_0x0,param_4.field1_0x8);
    IVar3 = extraout_x1;
  }
  local_80 = attributedSubstringFromRange_(param_3,IVar2,IVar3);
  IVar4 = attributedSubstringFromRange_(param_3,IVar2,IVar3);
  local_b0 = mutableCopy(IVar4);
  puVar1 = PTR___NSConcreteStackBlock;
  local_100 = 1;
  do {
    self = local_a0[5];
    IVar4 = length(self);
    local_158 = 
    ___81__MDOrderTaskListTextOperation_resultForAttributedString_inRange_selectionRange___block_invoke
    local_1a0 = 
    ___81__MDOrderTaskListTextOperation_resultForAttributedString_inRange_selectionRange___block_invoke_1
    enumerateUnorderedListInRange_options_listBlock_listItemBlock_
              (self,0,IVar4,0,&puStack_168,&local_1b0);
    local_f0[3] = local_f0[3] + 1;
    IVar4 = copy(local_d0[5]);
    local_a0[5] = IVar4;
    __Block_object_dispose(&local_138,8);
  } while ((long)local_f0[3] < (long)local_110[3]);
  IVar4 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
  setReplacementAttributedString_(IVar4,local_d0[5]);
  setReplacementRange_(IVar4,IVar2,IVar3);
  setProposedSelectionRange_(IVar4,param_5.field0_0x0,param_5.field1_0x8);
  __Block_object_dispose(&local_118,8);
  __Block_object_dispose(&local_f8,8);
  __Block_object_dispose(&local_d8,8);
  __Block_object_dispose(&local_a8,8);
  return IVar4;
}

