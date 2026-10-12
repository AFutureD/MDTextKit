// ===== MDTextOperationResult::init @ 00003640 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTextOperationResult::init(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDTextOperationResult;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::setReplacementRange_(self,0x7fffffffffffffff,0);
    objc_stub::setProposedSelectionRange_(self,0x7fffffffffffffff,0);
    objc_stub::setNeedStyling_(self,1);
  }
  return self;
}


// ===== MDTextOperationResult::description @ 000036b4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTextOperationResult::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::MDTextOperationResult;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"description");
  objc_stub::replacementRange(param_1);
  _NSStringFromRange();
  objc_stub::proposedSelectionRange(param_1);
  _NSStringFromRange();
  IVar1 = objc_stub::replacementAttributedString(param_1);
  objc_stub::string(IVar1);
  IVar1 = objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,
                     &cf___replacementrange___proposedselection___replacementstring_____);
  return IVar1;
}


// ===== MDTextOperationResult::replacementAttributedString @ 000037bc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTextOperationResult::replacementAttributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== MDTextOperationResult::setReplacementAttributedString: @ 000037c8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTextOperationResult::setReplacementAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDTextOperationResult::replacementRange @ 000037d0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDTextOperationResult::replacementRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x18,0x10,1,0);
  return local_20;
}


// ===== MDTextOperationResult::setReplacementRange: @ 00003808 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDTextOperationResult::setReplacementRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x18,&local_20,0x10,1,0);
  return;
}


// ===== MDTextOperationResult::proposedSelectionRange @ 0000383c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDTextOperationResult::proposedSelectionRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + 0x28,0x10,1,0);
  return local_20;
}


// ===== MDTextOperationResult::setProposedSelectionRange: @ 00003874 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDTextOperationResult::setProposedSelectionRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + 0x28,&local_20,0x10,1,0);
  return;
}


// ===== MDTextOperationResult::needStyling @ 000038a8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDTextOperationResult::needStyling(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


// ===== MDTextOperationResult::setNeedStyling: @ 000038b4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDTextOperationResult::setNeedStyling_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}


// ===== MDTextOperationResult::.cxx_destruct @ 000038bc =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDTextOperationResult::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


