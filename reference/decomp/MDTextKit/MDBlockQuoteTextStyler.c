// ===== MDBlockQuoteTextStyler::init @ 00029e00 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBlockQuoteTextStyler::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDBlockQuoteTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar2 = objc_stub::redColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setMarkerColor_(self,IVar2);
    puVar1 = PTR____NSDictionary0__struct_0005ecd0;
    objc_stub::setTextAttributes_(self,PTR____NSDictionary0__struct_0005ecd0);
    objc_stub::setCalloutColors_(self,puVar1);
  }
  return self;
}


// ===== MDBlockQuoteTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00029e94 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDBlockQuoteTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID IStack_58;
  
  local_80 = PTR___NSConcreteStackBlock_0005ebe0;
  local_78 = 0xc2000000;
  local_70 = 
  ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_68 = &___block_descriptor_48_e8_32s40s_e30_v48__0__NSRange_QQ_8q24Q32_B40l;
  local_b8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_b0 = 0xc2000000;
  local_a8 = 
  ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_5;
  puStack_a0 = &
               ___block_descriptor_56_e8_32s40s48bs_e55_v56__0__NSRange_QQ_8__NSRange_QQ_24__PMKListInfo_40_B48l
  ;
  local_98 = param_1;
  local_90 = param_3;
  local_88 = param_5;
  local_60 = param_3;
  IStack_58 = param_1;
  objc_stub::enumerateBlockquoteInRange_options_listBlock_listItemBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_80,&local_b8);
  return;
}


// ===== MDBlockQuoteTextStyler::textAttributes @ 0002aa50 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBlockQuoteTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}


// ===== MDBlockQuoteTextStyler::setTextAttributes: @ 0002aa60 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBlockQuoteTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}


// ===== MDBlockQuoteTextStyler::calloutColors @ 0002aa6c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBlockQuoteTextStyler::calloutColors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_calloutColors);
}


// ===== MDBlockQuoteTextStyler::setCalloutColors: @ 0002aa7c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBlockQuoteTextStyler::setCalloutColors_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_calloutColors) = param_3;
  return;
}


// ===== MDBlockQuoteTextStyler::calloutLabels @ 0002aa88 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBlockQuoteTextStyler::calloutLabels(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_calloutLabels);
}


// ===== MDBlockQuoteTextStyler::setCalloutLabels: @ 0002aa98 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBlockQuoteTextStyler::setCalloutLabels_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_calloutLabels) = param_3;
  return;
}


// ===== MDBlockQuoteTextStyler::.cxx_destruct @ 0002aaa4 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDBlockQuoteTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_calloutLabels) = 0;
  *(undefined8 *)(param_1 + (long)_calloutColors) = 0;
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}


