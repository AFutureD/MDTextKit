// ===== MDAttributedStringChange::isDiscardable @ 00026f94 =====

bool MDAttributedStringChange::isDiscardable(ID param_1,SEL param_2)

{
  
  IVar1 = oldString(param_1);
  IVar2 = currentString(param_1);
  IVar1 = isEqualToString_(IVar1,IVar2);
  return (bool)IVar1;
}

// ===== MDAttributedStringChange::oldString @ 00027000 =====

ID MDAttributedStringChange::oldString(ID param_1,SEL param_2)

{
  
  IVar1 = oldAttributedString(param_1);
  IVar1 = stringByExpandingTextAttachments(IVar1);
  return IVar1;
}

// ===== MDAttributedStringChange::currentString @ 00027044 =====

ID MDAttributedStringChange::currentString(ID param_1,SEL param_2)

{
  
  IVar1 = currentAttributedString(param_1);
  IVar1 = stringByExpandingTextAttachments(IVar1);
  return IVar1;
}

// ===== MDAttributedStringChange::description @ 00027088 =====

ID MDAttributedStringChange::description(ID param_1,SEL param_2)

{
  
  local_50.super_class = &objc::class_t::MDAttributedStringChange;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  oldPlainRange(param_1);
  _NSStringFromRange();
  oldString(param_1);
  currentPlainRange(param_1);
  _NSStringFromRange();
  currentString(param_1);
  IVar1 = stringWithFormat_(NSString,&cf___replaced_______with_______)
  return IVar1;
}

// ===== MDAttributedStringChange::oldPlainRange @ 00027198 =====

_NSRange MDAttributedStringChange::oldPlainRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x18,0x10,1,0);
  return local_20;
}

// ===== MDAttributedStringChange::setOldPlainRange: @ 000271d0 =====

void MDAttributedStringChange::setOldPlainRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x18,&local_20,0x10,1,0);
  return;
}

// ===== MDAttributedStringChange::oldAttributedRange @ 00027204 =====

_NSRange MDAttributedStringChange::oldAttributedRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x28,0x10,1,0);
  return local_20;
}

// ===== MDAttributedStringChange::setOldAttributedRange: @ 0002723c =====

void MDAttributedStringChange::setOldAttributedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x28,&local_20,0x10,1,0);
  return;
}

// ===== MDAttributedStringChange::oldAttributedString @ 00027270 =====

ID MDAttributedStringChange::oldAttributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

// ===== MDAttributedStringChange::setOldAttributedString: @ 0002727c =====

void MDAttributedStringChange::setOldAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}

// ===== MDAttributedStringChange::currentPlainRange @ 00027284 =====

_NSRange MDAttributedStringChange::currentPlainRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x38,0x10,1,0);
  return local_20;
}

// ===== MDAttributedStringChange::setCurrentPlainRange: @ 000272bc =====

void MDAttributedStringChange::setCurrentPlainRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x38,&local_20,0x10,1,0);
  return;
}

// ===== MDAttributedStringChange::currentAttributedRange @ 000272f0 =====

_NSRange MDAttributedStringChange::currentAttributedRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + 0x48,0x10,1,0);
  return local_20;
}

// ===== MDAttributedStringChange::setCurrentAttributedRange: @ 00027328 =====

void MDAttributedStringChange::setCurrentAttributedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x48,&local_20,0x10,1,0);
  return;
}

// ===== MDAttributedStringChange::currentAttributedString @ 0002735c =====

ID MDAttributedStringChange::currentAttributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== MDAttributedStringChange::setCurrentAttributedString: @ 00027368 =====

void MDAttributedStringChange::setCurrentAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDAttributedStringChange::.cxx_destruct @ 00027370 =====

void MDAttributedStringChange::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

