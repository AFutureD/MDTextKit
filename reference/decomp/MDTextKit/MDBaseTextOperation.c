// ===== MDBaseTextOperation::resultForAttributedString:inRange:selectionRange: @ 0003a18c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDBaseTextOperation::resultForAttributedString_inRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  return 0;
}


// ===== MDBaseTextOperation::resultsForAttributedString:inRange:selectionRange: @ 0003a194 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDBaseTextOperation::resultsForAttributedString_inRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  ID IVar1;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_30 = objc_stub::resultForAttributedString_inRange_selectionRange_
                       (param_1,param_3,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
                        param_5.field1_0x8);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_30,1);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_28) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


