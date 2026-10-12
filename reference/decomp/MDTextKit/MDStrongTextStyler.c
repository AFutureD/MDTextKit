// ===== MDStrongTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002b8d4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDStrongTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID IStack_38;
  
  local_60 = PTR___NSConcreteStackBlock_0005ebe0;
  local_58 = 0xc2000000;
  local_50 = 
  ___73__MDStrongTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_48 = &
               ___block_descriptor_48_e8_32s40s_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_40 = param_3;
  IStack_38 = param_1;
  objc_stub::enumerateStrongInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}


