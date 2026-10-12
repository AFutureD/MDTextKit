// ===== MDHTMLTextStyler::init @ 0000cc54 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHTMLTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDHTMLTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x402c000000000000);
    objc_stub::setCodeFont_(self,IVar1);
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setEntityColor_(self,IVar1);
  }
  return self;
}


// ===== MDHTMLTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000ccf8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDHTMLTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *puStack_c8;
  ID local_c0;
  ID IStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  ID IStack_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID IStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  local_80 = PTR___NSConcreteStackBlock_0005ebe0;
  local_78 = 0xc2000000;
  local_70 = 
  ___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_68 = &___block_descriptor_48_e8_32s40s_e24_v32__0__NSRange_QQ_8_B24l;
  local_60 = param_3;
  IStack_58 = param_1;
  objc_stub::enumerateHTMLInlineInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_80);
  local_b0 = puVar1;
  local_a8 = 0xc2000000;
  local_a0 = 
  ___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
  puStack_98 = &___block_descriptor_48_e8_32s40s_e24_v32__0__NSRange_QQ_8_B24l;
  local_90 = param_3;
  IStack_88 = param_1;
  objc_stub::enumerateHTMLBlockInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_b0);
  local_e0 = puVar1;
  local_d8 = 0xc2000000;
  local_d0 = 
  ___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
  puStack_c8 = &
               ___block_descriptor_48_e8_32s40s_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_c0 = param_3;
  IStack_b8 = param_1;
  objc_stub::enumerateHTMLEntitiesInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_e0);
  return;
}


// ===== MDHTMLTextStyler::codeFont @ 0000d0b0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHTMLTextStyler::codeFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_codeFont);
}


// ===== MDHTMLTextStyler::setCodeFont: @ 0000d0c0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHTMLTextStyler::setCodeFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_codeFont) = param_3;
  return;
}


// ===== MDHTMLTextStyler::fontSizeMultiplier @ 0000d0cc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDHTMLTextStyler::fontSizeMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_fontSizeMultiplier);
}


// ===== MDHTMLTextStyler::setFontSizeMultiplier: @ 0000d0dc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHTMLTextStyler::setFontSizeMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_fontSizeMultiplier) = param_3;
  return;
}


// ===== MDHTMLTextStyler::entityColor @ 0000d0ec =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHTMLTextStyler::entityColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_entityColor);
}


// ===== MDHTMLTextStyler::setEntityColor: @ 0000d0fc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHTMLTextStyler::setEntityColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_entityColor) = param_3;
  return;
}


// ===== MDHTMLTextStyler::.cxx_destruct @ 0000d108 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDHTMLTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_entityColor) = 0;
  *(undefined8 *)(param_1 + (long)_codeFont) = 0;
  return;
}


