// ===== MDThematicBreakTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002aaf8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDThematicBreakTextStyler::styleTextInAttributedString_range_replacementBlock_
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
  ___80__MDThematicBreakTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
  ;
  puStack_50 = &___block_descriptor_56_e8_32s40s48bs_e24_v32__0__NSRange_QQ_8_B24l;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateThematicBreakInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


// ===== MDThematicBreakTextStyler::borderColor @ 0002add0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDThematicBreakTextStyler::borderColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_borderColor);
}


// ===== MDThematicBreakTextStyler::setBorderColor: @ 0002ade0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDThematicBreakTextStyler::setBorderColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_borderColor) = param_3;
  return;
}


// ===== MDThematicBreakTextStyler::.cxx_destruct @ 0002adec =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDThematicBreakTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_borderColor) = 0;
  return;
}


