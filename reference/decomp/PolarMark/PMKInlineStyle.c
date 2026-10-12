// ===== PMKInlineStyle::inlineWithOpeningRange:closingRange: @ 000a84c4 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID PMKInlineStyle::inlineWithOpeningRange_closingRange_
             (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4)

{
  ID self;
  
  self = _objc_opt_new(&objc::class_t::PMKInlineStyle);
  objc_stub::setOpeningMarkerRange_(self,param_3.field0_0x0,param_3.field1_0x8);
  objc_stub::setClosingMarkerRange_(self,param_4.field0_0x0,param_4.field1_0x8);
  return self;
}


// ===== PMKInlineStyle::textRange @ 000a852c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange PMKInlineStyle::textRange(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long extraout_x1;
  long extraout_x1_00;
  _NSRange _Var4;
  
  IVar1 = objc_stub::openingMarkerRange(param_1);
  IVar2 = objc_stub::closingMarkerRange(param_1);
  IVar3 = objc_stub::openingMarkerRange(param_1);
  _Var4.field1_0x8 = IVar2 - (extraout_x1_00 + IVar3);
  _Var4.field0_0x0 = IVar1 + extraout_x1;
  return _Var4;
}


// ===== PMKInlineStyle::compare: @ 000a857c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

long_long PMKInlineStyle::compare_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long_long lVar3;
  
  IVar1 = objc_stub::openingMarkerRange(param_1);
  IVar2 = objc_stub::openingMarkerRange(param_3);
  if (IVar1 < IVar2) {
    lVar3 = 0xffffffffffffffff;
  }
  else {
    IVar1 = objc_stub::openingMarkerRange(param_1);
    IVar2 = objc_stub::openingMarkerRange(param_3);
    lVar3 = (long_long)(IVar2 < IVar1);
  }
  return lVar3;
}


// ===== PMKInlineStyle::description @ 000a85f8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKInlineStyle::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::PMKInlineStyle;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  objc_stub::openingMarkerRange(param_1);
  _NSStringFromRange();
  objc_stub::closingMarkerRange(param_1);
  _NSStringFromRange();
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___opening___closing___);
  return IVar1;
}


// ===== PMKInlineStyle::openingMarkerRange @ 000a86c4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange PMKInlineStyle::openingMarkerRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 8,0x10,1,0);
  return local_20;
}


// ===== PMKInlineStyle::setOpeningMarkerRange: @ 000a86fc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void PMKInlineStyle::setOpeningMarkerRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 8,&local_20,0x10,1,0);
  return;
}


// ===== PMKInlineStyle::closingMarkerRange @ 000a8730 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange PMKInlineStyle::closingMarkerRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x18,0x10,1,0);
  return local_20;
}


// ===== PMKInlineStyle::setClosingMarkerRange: @ 000a8768 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void PMKInlineStyle::setClosingMarkerRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x18,&local_20,0x10,1,0);
  return;
}


