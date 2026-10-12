// ===== MDImageTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000b978 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDImageTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID IStack_40;
  ID local_38;
  
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = 
  ___72__MDImageTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_50 = &
               ___block_descriptor_56_e8_32s40s48bs_e117_v128__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72__NSRange_QQ_88__NSRange_QQ_104_B120l
  ;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateImageInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


