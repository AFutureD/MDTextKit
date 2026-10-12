// ===== PMKNestableValue::nestedValueWithLevel:index: @ 000182ac =====

ID PMKNestableValue::nestedValueWithLevel_index_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  
  self = _objc_opt_new(&objc::class_t::PMKNestableValue);
  setLevel_(self,param_3);
  setIndex_(self,param_4);
  return self;
}

// ===== PMKNestableValue::compare: @ 000182fc =====

long_long PMKNestableValue::compare_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = level(param_1);
  IVar2 = level(param_3);
  if (IVar2 <= IVar1) {
    IVar1 = level(param_1);
    IVar2 = level(param_3);
    if (IVar2 < IVar1) {
      return 1;
    }
    IVar1 = index(param_1);
    IVar2 = index(param_3);
    if (IVar2 <= IVar1) {
      IVar1 = index(param_1);
      IVar2 = index(param_3);
      return (ulong)(IVar2 < IVar1);
    }
  }
  return 0xffffffffffffffff;
}

// ===== PMKNestableValue::initWithCoder: @ 000183b8 =====

ID PMKNestableValue::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::PMKNestableValue;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = decodeObjectForKey_(param_3,&cf_level);
    IVar1 = integerValue(IVar1);
    setLevel_(self,IVar1);
    IVar1 = decodeObjectForKey_(param_3,&cf_index);
    IVar1 = integerValue(IVar1);
    setIndex_(self,IVar1);
  }
  return self;
}

// ===== PMKNestableValue::encodeWithCoder: @ 00018488 =====

void PMKNestableValue::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = level(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_level);
  IVar1 = index(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_index);
  return;
}

// ===== PMKNestableValue::isEqual: @ 00018540 =====

bool PMKNestableValue::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == param_1) {
    bVar5 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar1 = _objc_opt_class(param_1);
      uVar2 = _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) != 0) {
        IVar3 = level(param_1);
        IVar4 = level(param_3);
        if (IVar3 == IVar4) {
          IVar3 = index(param_1);
          IVar4 = index(param_3);
          return (uint)(IVar3 == IVar4);
        }
      }
    }
    bVar5 = 0;
  }
  return bVar5;
}

// ===== PMKNestableValue::hash @ 000185e8 =====

unsigned_long_long PMKNestableValue::hash(ID param_1,SEL param_2)

{
  
  uVar1 = *(unsigned_long_long *)(param_1 + 0x18);
  if (uVar1 == 0) {
    level(param_1);
    index(param_1);
    IVar2 = stringWithFormat_(NSString,&cf__lu__lu);
    IVar2 = hash(IVar2);
    *(ID *)(param_1 + 0x18) = IVar2;
    uVar1 = *(unsigned_long_long *)(param_1 + 0x18);
  }
  return uVar1;
}

// ===== PMKNestableValue::copyWithZone: @ 0001866c =====

ID PMKNestableValue::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  self = _objc_opt_new(&objc::class_t::PMKNestableValue);
  IVar1 = level(param_1);
  setLevel_(self,IVar1);
  IVar1 = index(param_1);
  setIndex_(self,IVar1);
  return self;
}

// ===== PMKNestableValue::description @ 000186c4 =====

ID PMKNestableValue::description(ID param_1,SEL param_2)

{
  
  level(param_1);
  index(param_1);
  IVar1 = stringWithFormat_(NSString,&cf_Level__luIndex__lu);
  return IVar1;
}

// ===== PMKNestableValue::level @ 0001871c =====

unsigned_long_long PMKNestableValue::level(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}

// ===== PMKNestableValue::setLevel: @ 00018724 =====

void PMKNestableValue::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  return;
}

// ===== PMKNestableValue::index @ 0001872c =====

char * PMKNestableValue::index(char *param_1,int param_2)

{
  return *(char **)(param_1 + 0x10);
}

// ===== PMKNestableValue::setIndex: @ 00018734 =====

void PMKNestableValue::setIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}

// ===== PMKNestableValue::computedHash @ 0001873c =====

unsigned_long_long PMKNestableValue::computedHash(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}

// ===== PMKNestableValue::setComputedHash: @ 00018744 =====

void PMKNestableValue::setComputedHash_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  return;
}

