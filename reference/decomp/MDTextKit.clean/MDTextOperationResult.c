// ===== MDTextOperationResult::init @ 00003640 =====

ID MDTextOperationResult::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDTextOperationResult;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setReplacementRange_(self,0x7fffffffffffffff,0);
    setProposedSelectionRange_(self,0x7fffffffffffffff,0);
    setNeedStyling_(self,1);
  }
  return self;
}

// ===== MDTextOperationResult::description @ 000036b4 =====

ID MDTextOperationResult::description(ID param_1,SEL param_2)

{
  
  local_50.super_class = &objc::class_t::MDTextOperationResult;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  replacementRange(param_1);
  _NSStringFromRange();
  proposedSelectionRange(param_1);
  _NSStringFromRange();
  IVar1 = replacementAttributedString(param_1);
  string(IVar1);
  IVar1 = stringWithFormat_
                    (NSString,
                     &cf___replacementrange___proposedselection___replacementstring_____);
  return IVar1;
}

// ===== MDTextOperationResult::replacementAttributedString @ 000037bc =====

ID MDTextOperationResult::replacementAttributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== MDTextOperationResult::setReplacementAttributedString: @ 000037c8 =====

void MDTextOperationResult::setReplacementAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDTextOperationResult::replacementRange @ 000037d0 =====

_NSRange MDTextOperationResult::replacementRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x18,0x10,1,0);
  return local_20;
}

// ===== MDTextOperationResult::setReplacementRange: @ 00003808 =====

void MDTextOperationResult::setReplacementRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x18,&local_20,0x10,1,0);
  return;
}

// ===== MDTextOperationResult::proposedSelectionRange @ 0000383c =====

_NSRange MDTextOperationResult::proposedSelectionRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x28,0x10,1,0);
  return local_20;
}

// ===== MDTextOperationResult::setProposedSelectionRange: @ 00003874 =====

void MDTextOperationResult::setProposedSelectionRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x28,&local_20,0x10,1,0);
  return;
}

// ===== MDTextOperationResult::needStyling @ 000038a8 =====

bool MDTextOperationResult::needStyling(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

// ===== MDTextOperationResult::setNeedStyling: @ 000038b4 =====

void MDTextOperationResult::setNeedStyling_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}

// ===== MDTextOperationResult::.cxx_destruct @ 000038bc =====

void MDTextOperationResult::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

