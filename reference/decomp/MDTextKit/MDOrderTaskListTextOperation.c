// ===== MDOrderTaskListTextOperation::resultForAttributedString:inRange:selectionRange: @ 0003a970 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDOrderTaskListTextOperation::resultForAttributedString_inRange_selectionRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID extraout_x1;
  ID self;
  undefined *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined *puStack_198;
  undefined8 *local_190;
  undefined8 *puStack_188;
  undefined8 *local_180;
  undefined8 *puStack_178;
  undefined8 *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  code *local_158;
  undefined *puStack_150;
  undefined8 *local_148;
  undefined8 *puStack_140;
  undefined8 local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  code *local_c0;
  code *pcStack_b8;
  ID local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  code *local_90;
  code *pcStack_88;
  ID local_80;
  
  if (param_4.field1_0x8 == 0) {
    IVar3 = objc_stub::length(param_3);
    IVar2 = 0;
  }
  else {
    IVar2 = objc_stub::extendRangeToFullyContainLists_
                      (param_3,param_4.field0_0x0,param_4.field1_0x8);
    IVar3 = extraout_x1;
  }
  local_a0 = &local_a8;
  local_a8 = 0;
  local_98 = 0x3032000000;
  local_90 = ___Block_byref_object_copy_;
  pcStack_88 = ___Block_byref_object_dispose_;
  local_80 = objc_stub::attributedSubstringFromRange_(param_3,IVar2,IVar3);
  local_d0 = &local_d8;
  local_d8 = 0;
  local_c8 = 0x3032000000;
  local_c0 = ___Block_byref_object_copy_;
  pcStack_b8 = ___Block_byref_object_dispose_;
  IVar4 = objc_stub::attributedSubstringFromRange_(param_3,IVar2,IVar3);
  local_b0 = objc_stub::mutableCopy(IVar4);
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  local_f8 = 0;
  local_e8 = 0x2020000000;
  local_e0 = 0xffffffffffffffff;
  local_110 = &local_118;
  local_118 = 0;
  local_108 = 0x2020000000;
  local_100 = 1;
  local_f0 = &local_f8;
  do {
    local_138 = 0;
    local_128 = 0x2020000000;
    local_120 = 0;
    self = local_a0[5];
    puStack_130 = &local_138;
    IVar4 = objc_stub::length(self);
    puStack_168 = puVar1;
    local_160 = 0xc2000000;
    local_158 = 
    ___81__MDOrderTaskListTextOperation_resultForAttributedString_inRange_selectionRange___block_invoke
    ;
    puStack_150 = &___block_descriptor_48_e8_32r40r_e30_v48__0__NSRange_QQ_8q24Q32_B40l;
    local_1b0 = puVar1;
    local_1a8 = 0xc2000000;
    local_1a0 = 
    ___81__MDOrderTaskListTextOperation_resultForAttributedString_inRange_selectionRange___block_invoke_1
    ;
    puStack_198 = &
                  ___block_descriptor_72_e8_32r40r48r56r64r_e55_v56__0__NSRange_QQ_8__NSRange_QQ_24__PMKListInfo_40_B48l
    ;
    puStack_188 = &local_118;
    local_190 = &local_f8;
    local_180 = &local_138;
    puStack_178 = &local_a8;
    local_170 = &local_d8;
    local_148 = &local_f8;
    puStack_140 = &local_138;
    objc_stub::enumerateUnorderedListInRange_options_listBlock_listItemBlock_
              (self,0,IVar4,0,&puStack_168,&local_1b0);
    local_f0[3] = local_f0[3] + 1;
    IVar4 = objc_stub::copy(local_d0[5]);
    local_a0[5] = IVar4;
    __Block_object_dispose(&local_138,8);
  } while ((long)local_f0[3] < (long)local_110[3]);
  IVar4 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
  objc_stub::setReplacementAttributedString_(IVar4,local_d0[5]);
  objc_stub::setReplacementRange_(IVar4,IVar2,IVar3);
  objc_stub::setProposedSelectionRange_(IVar4,param_5.field0_0x0,param_5.field1_0x8);
  __Block_object_dispose(&local_118,8);
  __Block_object_dispose(&local_f8,8);
  __Block_object_dispose(&local_d8,8);
  __Block_object_dispose(&local_a8,8);
  return IVar4;
}


