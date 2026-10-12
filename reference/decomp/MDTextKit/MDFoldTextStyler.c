// ===== MDFoldTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002b570 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDFoldTextStyler::styleTextInAttributedString_range_replacementBlock_
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
  ___71__MDFoldTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_50 = &___block_descriptor_56_e8_32s40s48bs_e39_v48__0__NSRange_QQ_8__NSRange_QQ_24_B40l;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateFoldInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


// ===== MDFoldTextStyler::backgroundColor @ 0002b85c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFoldTextStyler::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}


// ===== MDFoldTextStyler::setBackgroundColor: @ 0002b86c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFoldTextStyler::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}


// ===== MDFoldTextStyler::textColor @ 0002b878 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFoldTextStyler::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}


// ===== MDFoldTextStyler::setTextColor: @ 0002b888 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFoldTextStyler::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}


// ===== MDFoldTextStyler::.cxx_destruct @ 0002b894 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDFoldTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  return;
}


