// ===== MDAttributedStringChange::isDiscardable @ 00026f94 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDAttributedStringChange::isDiscardable(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::oldString(param_1);
  IVar2 = objc_stub::currentString(param_1);
  IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
  return (bool)IVar1;
}


// ===== MDAttributedStringChange::oldString @ 00027000 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChange::oldString(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::oldAttributedString(param_1);
  IVar1 = objc_stub::stringByExpandingTextAttachments(IVar1);
  return IVar1;
}


// ===== MDAttributedStringChange::currentString @ 00027044 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChange::currentString(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentAttributedString(param_1);
  IVar1 = objc_stub::stringByExpandingTextAttachments(IVar1);
  return IVar1;
}


// ===== MDAttributedStringChange::description @ 00027088 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChange::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::MDAttributedStringChange;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  objc_stub::oldPlainRange(param_1);
  _NSStringFromRange();
  objc_stub::oldString(param_1);
  objc_stub::currentPlainRange(param_1);
  _NSStringFromRange();
  objc_stub::currentString(param_1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___replaced_______with_______)
  ;
  return IVar1;
}


// ===== MDAttributedStringChange::oldPlainRange @ 00027198 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDAttributedStringChange::oldPlainRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x18,0x10,1,0);
  return local_20;
}


// ===== MDAttributedStringChange::setOldPlainRange: @ 000271d0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDAttributedStringChange::setOldPlainRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x18,&local_20,0x10,1,0);
  return;
}


// ===== MDAttributedStringChange::oldAttributedRange @ 00027204 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDAttributedStringChange::oldAttributedRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x28,0x10,1,0);
  return local_20;
}


// ===== MDAttributedStringChange::setOldAttributedRange: @ 0002723c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDAttributedStringChange::setOldAttributedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x28,&local_20,0x10,1,0);
  return;
}


// ===== MDAttributedStringChange::oldAttributedString @ 00027270 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChange::oldAttributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


// ===== MDAttributedStringChange::setOldAttributedString: @ 0002727c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringChange::setOldAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


// ===== MDAttributedStringChange::currentPlainRange @ 00027284 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDAttributedStringChange::currentPlainRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x38,0x10,1,0);
  return local_20;
}


// ===== MDAttributedStringChange::setCurrentPlainRange: @ 000272bc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDAttributedStringChange::setCurrentPlainRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x38,&local_20,0x10,1,0);
  return;
}


// ===== MDAttributedStringChange::currentAttributedRange @ 000272f0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDAttributedStringChange::currentAttributedRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x48,0x10,1,0);
  return local_20;
}


// ===== MDAttributedStringChange::setCurrentAttributedRange: @ 00027328 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDAttributedStringChange::setCurrentAttributedRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x48,&local_20,0x10,1,0);
  return;
}


// ===== MDAttributedStringChange::currentAttributedString @ 0002735c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringChange::currentAttributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== MDAttributedStringChange::setCurrentAttributedString: @ 00027368 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringChange::setCurrentAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDAttributedStringChange::.cxx_destruct @ 00027370 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDAttributedStringChange::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


