// ===== PMKListInfo::supportsSecureCoding @ 0001874c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKListInfo::supportsSecureCoding(ID param_1,SEL param_2)

{
  return 1;
}


// ===== PMKListInfo::listInfoWithListType:subType:taskType:level:itemIndex: @ 00018754 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID PMKListInfo::listInfoWithListType_subType_taskType_level_itemIndex_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,unsigned_long_long param_6,unsigned_long_long param_7)

{
  ID self;
  
  self = _objc_opt_new(&objc::class_t::PMKListInfo);
  objc_stub::setItemIndex_(self,param_7);
  objc_stub::setListLevel_(self,param_6);
  objc_stub::setListType_(self,param_3);
  objc_stub::setListSubType_(self,param_4);
  objc_stub::setTaskType_(self,param_5);
  return self;
}


// ===== PMKListInfo::isOrderedList @ 000187dc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKListInfo::isOrderedList(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::listType(param_1);
  return (bool)(IVar1 == 2);
}


// ===== PMKListInfo::isUnorderedList @ 000187f8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKListInfo::isUnorderedList(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::listType(param_1);
  return (bool)(IVar1 == 1);
}


// ===== PMKListInfo::isTaskList @ 00018814 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKListInfo::isTaskList(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::taskType(param_1);
  return (bool)(IVar1 != 0);
}


// ===== PMKListInfo::isBlockQuote @ 00018830 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKListInfo::isBlockQuote(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::listType(param_1);
  return (bool)(IVar1 == 3);
}


// ===== PMKListInfo::isCallout @ 0001884c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKListInfo::isCallout(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::listSubType(param_1);
  return (bool)(IVar1 == 6);
}


// ===== PMKListInfo::orderedListItemNumberDelimiter @ 00018868 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKListInfo::orderedListItemNumberDelimiter(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  
  IVar1 = objc_stub::listSubType(param_1);
  if (IVar1 == 4) {
    pcVar2 = &cf__;
  }
  else {
    IVar1 = objc_stub::listSubType(param_1);
    pcVar2 = &cf__;
    if (IVar1 != 5) {
      pcVar2 = (cfstringStruct *)0x0;
    }
  }
  return (ID)pcVar2;
}


// ===== PMKListInfo::initWithCoder: @ 000188b4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKListInfo::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::PMKListInfo;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_itemIndex);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setItemIndex_(self,IVar1);
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_listLevel);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setListLevel_(self,IVar1);
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_listType);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setListType_(self,IVar1);
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_listSubType);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setListSubType_(self,IVar1);
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_taskType);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setTaskType_(self,IVar1);
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_orderedListItemNumber);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setOrderedListItemNumber_(self,IVar1);
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_relativeListLevel);
    IVar1 = objc_stub::integerValue(IVar1);
    objc_stub::setRelativeListLevel_(self,IVar1);
  }
  return self;
}


// ===== PMKListInfo::encodeWithCoder: @ 00018a88 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::itemIndex(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_itemIndex);
  IVar1 = objc_stub::listLevel(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_listLevel);
  IVar1 = objc_stub::listType(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_listType);
  IVar1 = objc_stub::listSubType(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_listSubType);
  IVar1 = objc_stub::taskType(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_taskType);
  IVar1 = objc_stub::orderedListItemNumber(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_orderedListItemNumber);
  IVar1 = objc_stub::relativeListLevel(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_relativeListLevel);
  return;
}


// ===== PMKListInfo::isEqual: @ 00018c80 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool PMKListInfo::isEqual_(ID param_1,SEL param_2,ID param_3)

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
        IVar3 = objc_stub::itemIndex(param_1);
        IVar4 = objc_stub::itemIndex(param_3);
        if (IVar3 == IVar4) {
          IVar3 = objc_stub::listLevel(param_1);
          IVar4 = objc_stub::listLevel(param_3);
          if (IVar3 == IVar4) {
            IVar3 = objc_stub::listType(param_1);
            IVar4 = objc_stub::listType(param_3);
            if (IVar3 == IVar4) {
              IVar3 = objc_stub::listSubType(param_1);
              IVar4 = objc_stub::listSubType(param_3);
              if (IVar3 == IVar4) {
                IVar3 = objc_stub::taskType(param_1);
                IVar4 = objc_stub::taskType(param_3);
                if (IVar3 == IVar4) {
                  IVar3 = objc_stub::orderedListItemNumber(param_1);
                  IVar4 = objc_stub::orderedListItemNumber(param_3);
                  if (IVar3 == IVar4) {
                    IVar3 = objc_stub::relativeListLevel(param_1);
                    IVar4 = objc_stub::relativeListLevel(param_3);
                    return (uint)(IVar3 == IVar4);
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar5 = 0;
  }
  return bVar5;
}


// ===== PMKListInfo::hash @ 00018db4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::hash(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  ID IVar2;
  
  uVar1 = *(unsigned_long_long *)(param_1 + 0x40);
  if (uVar1 == 0) {
    objc_stub::orderedListItemNumber(param_1);
    objc_stub::itemIndex(param_1);
    objc_stub::listLevel(param_1);
    objc_stub::listType(param_1);
    objc_stub::listSubType(param_1);
    objc_stub::taskType(param_1);
    objc_stub::relativeListLevel(param_1);
    IVar2 = objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf__lu__lu__lu__lu__lu__lu__lu);
    IVar2 = objc_stub::hash(IVar2);
    *(ID *)(param_1 + 0x40) = IVar2;
    uVar1 = *(unsigned_long_long *)(param_1 + 0x40);
  }
  return uVar1;
}


// ===== PMKListInfo::copyWithZone: @ 00018e90 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKListInfo::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  
  self = _objc_opt_new(&objc::class_t::PMKListInfo);
  IVar1 = objc_stub::itemIndex(param_1);
  objc_stub::setItemIndex_(self,IVar1);
  IVar1 = objc_stub::listLevel(param_1);
  objc_stub::setListLevel_(self,IVar1);
  IVar1 = objc_stub::listType(param_1);
  objc_stub::setListType_(self,IVar1);
  IVar1 = objc_stub::listSubType(param_1);
  objc_stub::setListSubType_(self,IVar1);
  IVar1 = objc_stub::taskType(param_1);
  objc_stub::setTaskType_(self,IVar1);
  IVar1 = objc_stub::orderedListItemNumber(param_1);
  objc_stub::setOrderedListItemNumber_(self,IVar1);
  IVar1 = objc_stub::relativeListLevel(param_1);
  objc_stub::setRelativeListLevel_(self,IVar1);
  return self;
}


// ===== PMKListInfo::description @ 00018f4c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKListInfo::description(ID param_1,SEL param_2)

{
  ID IVar1;
  
  objc_stub::listLevel(param_1);
  objc_stub::itemIndex(param_1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Listlevel__luItemindex__lu);
  return IVar1;
}


// ===== PMKListInfo::listLevel @ 00018fa4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::listLevel(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}


// ===== PMKListInfo::setListLevel: @ 00018fac =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setListLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  return;
}


// ===== PMKListInfo::itemIndex @ 00018fb4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::itemIndex(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}


// ===== PMKListInfo::setItemIndex: @ 00018fbc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setItemIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}


// ===== PMKListInfo::listType @ 00018fc4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::listType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}


// ===== PMKListInfo::setListType: @ 00018fcc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setListType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  return;
}


// ===== PMKListInfo::listSubType @ 00018fd4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::listSubType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}


// ===== PMKListInfo::setListSubType: @ 00018fdc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setListSubType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x20) = param_3;
  return;
}


// ===== PMKListInfo::taskType @ 00018fe4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::taskType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x28);
}


// ===== PMKListInfo::setTaskType: @ 00018fec =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setTaskType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x28) = param_3;
  return;
}


// ===== PMKListInfo::orderedListItemNumber @ 00018ff4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::orderedListItemNumber(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x30);
}


// ===== PMKListInfo::setOrderedListItemNumber: @ 00018ffc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setOrderedListItemNumber_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x30) = param_3;
  return;
}


// ===== PMKListInfo::relativeListLevel @ 00019004 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::relativeListLevel(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x38);
}


// ===== PMKListInfo::setRelativeListLevel: @ 0001900c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setRelativeListLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x38) = param_3;
  return;
}


// ===== PMKListInfo::computedHash @ 00019014 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKListInfo::computedHash(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x40);
}


// ===== PMKListInfo::setComputedHash: @ 0001901c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKListInfo::setComputedHash_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x40) = param_3;
  return;
}


