// ===== MDEmphasisTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00005b00 =====

void MDEmphasisTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_50 = 
  ___75__MDEmphasisTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_40 = param_3;
  IStack_38 = param_1;
  enumerateEmphasisInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}

// ===== MDEmphasisTextStyler::italicFontForFont: @ 00005d98 =====

ID MDEmphasisTextStyler::italicFontForFont_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = cache(param_1);
  IVar1 = objectForKey_(IVar1,param_3);
  if (IVar1 == 0) {
    pointSize(param_3);
    IVar1 = fontVariantOfSize_byAddingTraits_(param_3,1);
    self = cache(param_1);
    setObject_forKey_(self,IVar1,param_3);
  }
  return IVar1;
}

