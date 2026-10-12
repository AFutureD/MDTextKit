// ===== PMKASTOperationResult::description @ 000780a4 =====

ID PMKASTOperationResult::description(ID param_1,SEL param_2)

{
  
  local_50.super_class = &objc::class_t::PMKASTOperationResult;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  replacementRange(param_1);
  _NSStringFromRange();
  replacementString(param_1);
  proposedSelection(param_1);
  _NSStringFromRange();
  IVar1 = stringWithFormat_(NSString,&cf___rep__with__select__);
  return IVar1;
}

// ===== PMKASTOperationResult::replacementRange @ 000781d8 =====

_NSRange PMKASTOperationResult::replacementRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x10,0x10,1,0);
  return local_20;
}

// ===== PMKASTOperationResult::setReplacementRange: @ 00078210 =====

void PMKASTOperationResult::setReplacementRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x10,&local_20,0x10,1,0);
  return;
}

// ===== PMKASTOperationResult::replacementString @ 00078244 =====

ID PMKASTOperationResult::replacementString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

// ===== PMKASTOperationResult::setReplacementString: @ 00078250 =====

void PMKASTOperationResult::setReplacementString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}

// ===== PMKASTOperationResult::proposedSelection @ 00078258 =====

_NSRange PMKASTOperationResult::proposedSelection(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x20,0x10,1,0);
  return local_20;
}

// ===== PMKASTOperationResult::setProposedSelection: @ 00078290 =====

void PMKASTOperationResult::setProposedSelection_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x20,&local_20,0x10,1,0);
  return;
}

// ===== PMKASTOperationResult::.cxx_destruct @ 000782c4 =====

void PMKASTOperationResult::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

