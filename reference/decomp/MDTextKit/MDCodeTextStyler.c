// ===== MDCodeTextStyler::init @ 0001efd8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCodeTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDCodeTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::setTextAttributes_(self,PTR____NSDictionary0__struct_0005ecd0);
    IVar1 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x402c000000000000);
    objc_stub::setCodeFont_(self,IVar1);
  }
  return self;
}


// ===== MDCodeTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0001f060 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDCodeTextStyler::styleTextInAttributedString_range_replacementBlock_
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
  ___71__MDCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_50 = &
               ___block_descriptor_56_e8_32s40s48bs_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


// ===== MDCodeTextStyler::textAttributes @ 0001f340 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCodeTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}


// ===== MDCodeTextStyler::setTextAttributes: @ 0001f350 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCodeTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}


// ===== MDCodeTextStyler::codeFont @ 0001f35c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCodeTextStyler::codeFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_codeFont);
}


// ===== MDCodeTextStyler::setCodeFont: @ 0001f36c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCodeTextStyler::setCodeFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_codeFont) = param_3;
  return;
}


// ===== MDCodeTextStyler::fontSizeMultiplier @ 0001f378 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDCodeTextStyler::fontSizeMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_fontSizeMultiplier);
}


// ===== MDCodeTextStyler::setFontSizeMultiplier: @ 0001f388 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCodeTextStyler::setFontSizeMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_fontSizeMultiplier) = param_3;
  return;
}


// ===== MDCodeTextStyler::.cxx_destruct @ 0001f398 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCodeTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_codeFont) = 0;
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}


