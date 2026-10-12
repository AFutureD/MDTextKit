// ===== PMKASTOperationResult::description @ 000780a4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKASTOperationResult::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::PMKASTOperationResult;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  objc_stub::replacementRange(param_1);
  _NSStringFromRange();
  objc_stub::replacementString(param_1);
  objc_stub::proposedSelection(param_1);
  _NSStringFromRange();
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___rep__with__select__);
  return IVar1;
}


// ===== PMKASTOperationResult::replacementRange @ 000781d8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange PMKASTOperationResult::replacementRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x10,0x10,1,0);
  return local_20;
}


// ===== PMKASTOperationResult::setReplacementRange: @ 00078210 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void PMKASTOperationResult::setReplacementRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x10,&local_20,0x10,1,0);
  return;
}


// ===== PMKASTOperationResult::replacementString @ 00078244 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKASTOperationResult::replacementString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


// ===== PMKASTOperationResult::setReplacementString: @ 00078250 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKASTOperationResult::setReplacementString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


// ===== PMKASTOperationResult::proposedSelection @ 00078258 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange PMKASTOperationResult::proposedSelection(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x20,0x10,1,0);
  return local_20;
}


// ===== PMKASTOperationResult::setProposedSelection: @ 00078290 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void PMKASTOperationResult::setProposedSelection_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x20,&local_20,0x10,1,0);
  return;
}


// ===== PMKASTOperationResult::.cxx_destruct @ 000782c4 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void PMKASTOperationResult::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


