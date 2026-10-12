// ===== MDOrderedListTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002fa14 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDOrderedListTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_120;
  undefined8 local_118;
  code *local_110;
  undefined *puStack_108;
  ID local_100;
  ID local_f8;
  ID local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  ID local_c8;
  undefined8 *puStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  puStack_c0 = &local_90;
  local_90 = 0;
  local_80 = 0x2020000000;
  local_78 = 0;
  local_b8 = &local_b0;
  local_b0 = 0;
  local_a0 = 0x2020000000;
  local_98 = 0;
  local_e8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_e0 = 0xc2000000;
  local_d8 = 
  ___78__MDOrderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_d0 = &___block_descriptor_56_e8_32s40r48r_e30_v48__0__NSRange_QQ_8q24Q32_B40l;
  local_120 = PTR___NSConcreteStackBlock_0005ebe0;
  local_118 = 0xc2000000;
  local_110 = 
  ___78__MDOrderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_1
  ;
  puStack_108 = &
                ___block_descriptor_56_e8_32s40s48bs_e55_v56__0__NSRange_QQ_8__NSRange_QQ_24__PMKListInfo_40_B48l
  ;
  local_100 = param_1;
  local_f8 = param_3;
  local_f0 = param_5;
  local_c8 = param_3;
  puStack_a8 = local_b8;
  puStack_88 = puStack_c0;
  objc_stub::enumerateOrderedListInRange_options_listBlock_listItemBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,2,&local_e8,&local_120);
  __Block_object_dispose(&local_b0,8);
  __Block_object_dispose(&local_90,8);
  return;
}


// ===== MDOrderedListTextStyler::spaceSizeForMarkerRange:inAttributedString: @ 0002fdec =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

double MDOrderedListTextStyler::spaceSizeForMarkerRange_inAttributedString_
                 (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  float extraout_s0;
  double in_d2;
  
  IVar1 = objc_stub::cache(param_1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_space_s_);
  objc_stub::floatValue(IVar1);
  if (extraout_s0 == 0.0) {
    IVar1 = objc_stub::attributedSubstringFromRange_
                      (param_4,param_3.field1_0x8 + param_3.field0_0x0 + -1,1);
    objc_stub::boundingRectWithSize_options_context_
              (IVar1,0x408f400000000000,0x408f400000000000,0,0);
    IVar1 = objc_stub::cache(param_1);
    IVar2 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,in_d2);
    objc_stub::setObject_forKey_(IVar1,IVar2,&cf_space_s_);
  }
  else {
    in_d2 = (double)extraout_s0;
  }
  return in_d2;
}


// ===== MDOrderedListTextStyler::numberPlusSeparatorSizeForMarkerRange:inAttributedString: @ 0002ff2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

double MDOrderedListTextStyler::numberPlusSeparatorSizeForMarkerRange_inAttributedString_
                 (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  float extraout_s0;
  double in_d2;
  
  lVar4 = param_3.field1_0x8 - 1;
  IVar1 = objc_stub::string(param_4);
  IVar1 = objc_stub::substringWithRange_(IVar1,param_3.field0_0x0,lVar4);
  IVar2 = objc_stub::cache(param_1);
  IVar2 = objc_stub::objectForKey_(IVar2,IVar1);
  objc_stub::floatValue(IVar2);
  if (extraout_s0 == 0.0) {
    IVar2 = objc_stub::attributedSubstringFromRange_(param_4,param_3.field0_0x0,lVar4);
    objc_stub::boundingRectWithSize_options_context_
              (IVar2,0x408f400000000000,0x408f400000000000,0,0);
    IVar2 = objc_stub::cache(param_1);
    IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,in_d2);
    objc_stub::setObject_forKey_(IVar2,IVar3,IVar1);
  }
  else {
    in_d2 = (double)extraout_s0;
  }
  return in_d2;
}


