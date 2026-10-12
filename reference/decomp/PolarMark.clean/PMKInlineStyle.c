// ===== PMKInlineStyle::inlineWithOpeningRange:closingRange: @ 000a84c4 =====

ID PMKInlineStyle::inlineWithOpeningRange_closingRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  
  self = _objc_opt_new(&objc::class_t::PMKInlineStyle);
  setOpeningMarkerRange_(self,param_3.field0_0x0,param_3.field1_0x8);
  setClosingMarkerRange_(self,param_4.field0_0x0,param_4.field1_0x8);
  return self;
}

// ===== PMKInlineStyle::textRange @ 000a852c =====

_NSRange PMKInlineStyle::textRange(ID param_1,SEL param_2)

{
  
  IVar1 = openingMarkerRange(param_1);
  IVar2 = closingMarkerRange(param_1);
  IVar3 = openingMarkerRange(param_1);
  _Var4.field1_0x8 = IVar2 - (extraout_x1_00 + IVar3);
  _Var4.field0_0x0 = IVar1 + extraout_x1;
  return _Var4;
}

// ===== PMKInlineStyle::compare: @ 000a857c =====

long_long PMKInlineStyle::compare_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar3;
  
  IVar1 = openingMarkerRange(param_1);
  IVar2 = openingMarkerRange(param_3);
  if (IVar1 < IVar2) {
    lVar3 = 0xffffffffffffffff;
  }
  else {
    IVar1 = openingMarkerRange(param_1);
    IVar2 = openingMarkerRange(param_3);
    lVar3 = (long_long)(IVar2 < IVar1);
  }
  return lVar3;
}

// ===== PMKInlineStyle::description @ 000a85f8 =====

ID PMKInlineStyle::description(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::PMKInlineStyle;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  openingMarkerRange(param_1);
  _NSStringFromRange();
  closingMarkerRange(param_1);
  _NSStringFromRange();
  IVar1 = stringWithFormat_(NSString,&cf___opening___closing___);
  return IVar1;
}

// ===== PMKInlineStyle::openingMarkerRange @ 000a86c4 =====

_NSRange PMKInlineStyle::openingMarkerRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 8,0x10,1,0);
  return local_20;
}

// ===== PMKInlineStyle::setOpeningMarkerRange: @ 000a86fc =====

void PMKInlineStyle::setOpeningMarkerRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 8,&local_20,0x10,1,0);
  return;
}

// ===== PMKInlineStyle::closingMarkerRange @ 000a8730 =====

_NSRange PMKInlineStyle::closingMarkerRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x18,0x10,1,0);
  return local_20;
}

// ===== PMKInlineStyle::setClosingMarkerRange: @ 000a8768 =====

void PMKInlineStyle::setClosingMarkerRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x18,&local_20,0x10,1,0);
  return;
}

