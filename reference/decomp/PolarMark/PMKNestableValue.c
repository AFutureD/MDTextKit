// ===== PMKNestableValue::nestedValueWithLevel:index: @ 000182ac =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKNestableValue::nestedValueWithLevel_index_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID self;
  
  self = _objc_opt_new(&objc::class_t::PMKNestableValue);
  objc_stub::setLevel_(self,param_3);
  objc_stub::setIndex_(self,param_4);
  return self;
}


// ===== PMKNestableValue::compare: @ 000182fc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

long_long PMKNestableValue::compare_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::level(param_1);
  IVar2 = objc_stub::level(param_3);
  if (IVar2 <= IVar1) {
    IVar1 = objc_stub::level(param_1);
    IVar2 = objc_stub::level(param_3);
    if (IVar2 < IVar1) {
      return 1;
    }
    IVar1 = objc_stub::index(param_1);
    IVar2 = objc_stub::index(param_3);
    if (IVar2 <= IVar1) {
      IVar1 = objc_stub::index(param_1);
      IVar2 = objc_stub::index(param_3);
      return (ulong)(IVar2 < IVar1);
    }
  }
  return 0xffffffffffffffff;
}


// ===== PMKNestableValue::initWithCoder: @ 000183b8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKNestableValue::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::PMKNestableValue;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_level);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setLevel_(self,IVar1);
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_index);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setIndex_(self,IVar1);
  }
  return self;
}


// ===== PMKNestableValue::encodeWithCoder: @ 00018488 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKNestableValue::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::level(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_level);
  IVar1 = objc_stub::index(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_index);
  return;
}


// ===== PMKNestableValue::isEqual: @ 00018540 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool PMKNestableValue::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  bool bVar5;
  
  if (param_3 == param_1) {
    bVar5 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar1 = _objc_opt_class(param_1);
      uVar2 = _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) != 0) {
        IVar3 = objc_stub::level(param_1);
        IVar4 = objc_stub::level(param_3);
        if (IVar3 == IVar4) {
          IVar3 = objc_stub::index(param_1);
          IVar4 = objc_stub::index(param_3);
          return (uint)(IVar3 == IVar4);
        }
      }
    }
    bVar5 = 0;
  }
  return bVar5;
}


// ===== PMKNestableValue::hash @ 000185e8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKNestableValue::hash(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  ID IVar2;
  
  uVar1 = *(unsigned_long_long *)(param_1 + 0x18);
  if (uVar1 == 0) {
    objc_stub::level(param_1);
    objc_stub::index(param_1);
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__lu__lu);
    IVar2 = objc_stub::hash(IVar2);
    *(ID *)(param_1 + 0x18) = IVar2;
    uVar1 = *(unsigned_long_long *)(param_1 + 0x18);
  }
  return uVar1;
}


// ===== PMKNestableValue::copyWithZone: @ 0001866c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKNestableValue::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  
  self = _objc_opt_new(&objc::class_t::PMKNestableValue);
  IVar1 = objc_stub::level(param_1);
  objc_stub::setLevel_(self,IVar1);
  IVar1 = objc_stub::index(param_1);
  objc_stub::setIndex_(self,IVar1);
  return self;
}


// ===== PMKNestableValue::description @ 000186c4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKNestableValue::description(ID param_1,SEL param_2)

{
  ID IVar1;
  
  objc_stub::level(param_1);
  objc_stub::index(param_1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Level__luIndex__lu);
  return IVar1;
}


// ===== PMKNestableValue::level @ 0001871c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKNestableValue::level(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}


// ===== PMKNestableValue::setLevel: @ 00018724 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKNestableValue::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  return;
}


// ===== PMKNestableValue::index @ 0001872c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

char * PMKNestableValue::index(char *param_1,int param_2)

{
  return *(char **)(param_1 + 0x10);
}


// ===== PMKNestableValue::setIndex: @ 00018734 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKNestableValue::setIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}


// ===== PMKNestableValue::computedHash @ 0001873c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKNestableValue::computedHash(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}


// ===== PMKNestableValue::setComputedHash: @ 00018744 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKNestableValue::setComputedHash_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  return;
}


