// ===== MDBaseTextOperation::resultForAttributedString:inRange:selectionRange: @ 0003a18c =====

ID MDBaseTextOperation::resultForAttributedString_inRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  return 0;
}

// ===== MDBaseTextOperation::resultsForAttributedString:inRange:selectionRange: @ 0003a194 =====

ID MDBaseTextOperation::resultsForAttributedString_inRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  
  local_30 = resultForAttributedString_inRange_selectionRange_
                       (param_1,param_3,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
                        param_5.field1_0x8);
  IVar1 = arrayWithObjects_count_(NSArray,&local_30,1);
    return IVar1;
  }
}

