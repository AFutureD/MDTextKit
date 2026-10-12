// ===== MDEmphasisTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00005b00 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEmphasisTextStyler::styleTextInAttributedString_range_replacementBlock_
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
  ___75__MDEmphasisTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_48 = &
               ___block_descriptor_48_e8_32s40s_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_40 = param_3;
  IStack_38 = param_1;
  objc_stub::enumerateEmphasisInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}


// ===== MDEmphasisTextStyler::italicFontForFont: @ 00005d98 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDEmphasisTextStyler::italicFontForFont_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::cache(param_1);
  IVar1 = objc_stub::objectForKey_(IVar1,param_3);
  if (IVar1 == 0) {
    objc_stub::pointSize(param_3);
    IVar1 = objc_stub::fontVariantOfSize_byAddingTraits_(param_3,1);
    self = objc_stub::cache(param_1);
    objc_stub::setObject_forKey_(self,IVar1,param_3);
  }
  return IVar1;
}


