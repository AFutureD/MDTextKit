// ===== MDOrderedListTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002fa14 =====

void MDOrderedListTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_d8 = 
  ___78__MDOrderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_110 = 
  ___78__MDOrderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_1
  local_100 = param_1;
  local_f8 = param_3;
  local_f0 = param_5;
  local_c8 = param_3;
  puStack_a8 = local_b8;
  puStack_88 = puStack_c0;
  enumerateOrderedListInRange_options_listBlock_listItemBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,2,&local_e8,&local_120);
  __Block_object_dispose(&local_b0,8);
  __Block_object_dispose(&local_90,8);
  return;
}

// ===== MDOrderedListTextStyler::spaceSizeForMarkerRange:inAttributedString: @ 0002fdec =====

double MDOrderedListTextStyler::spaceSizeForMarkerRange_inAttributedString_
                 (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = cache(param_1);
  IVar1 = objectForKey_(IVar1,&cf_space_s_);
  floatValue(IVar1);
  if (extraout_s0 == 0.0) {
    IVar1 = attributedSubstringFromRange_
                      (param_4,param_3.field1_0x8 + param_3.field0_0x0 + -1,1);
    boundingRectWithSize_options_context_
              (IVar1,0x408f400000000000,0x408f400000000000,0,0);
    IVar1 = cache(param_1);
    IVar2 = numberWithDouble_(NSNumber,in_d2);
    setObject_forKey_(IVar1,IVar2,&cf_space_s_);
  }
  else {
    in_d2 = (double)extraout_s0;
  }
  return in_d2;
}

// ===== MDOrderedListTextStyler::numberPlusSeparatorSizeForMarkerRange:inAttributedString: @ 0002ff2c =====

double MDOrderedListTextStyler::numberPlusSeparatorSizeForMarkerRange_inAttributedString_
                 (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  lVar4 = param_3.field1_0x8 - 1;
  IVar1 = string(param_4);
  IVar1 = substringWithRange_(IVar1,param_3.field0_0x0,lVar4);
  IVar2 = cache(param_1);
  IVar2 = objectForKey_(IVar2,IVar1);
  floatValue(IVar2);
  if (extraout_s0 == 0.0) {
    IVar2 = attributedSubstringFromRange_(param_4,param_3.field0_0x0,lVar4);
    boundingRectWithSize_options_context_
              (IVar2,0x408f400000000000,0x408f400000000000,0,0);
    IVar2 = cache(param_1);
    IVar3 = numberWithDouble_(NSNumber,in_d2);
    setObject_forKey_(IVar2,IVar3,IVar1);
  }
  else {
    in_d2 = (double)extraout_s0;
  }
  return in_d2;
}

