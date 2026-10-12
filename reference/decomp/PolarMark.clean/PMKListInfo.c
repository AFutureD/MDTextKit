// ===== PMKListInfo::supportsSecureCoding @ 0001874c =====

bool PMKListInfo::supportsSecureCoding(ID param_1,SEL param_2)

{
  return 1;
}

// ===== PMKListInfo::listInfoWithListType:subType:taskType:level:itemIndex: @ 00018754 =====

ID PMKListInfo::listInfoWithListType_subType_taskType_level_itemIndex_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,unsigned_long_long param_6,unsigned_long_long param_7)

{
  
  self = _objc_opt_new(&objc::class_t::PMKListInfo);
  setItemIndex_(self,param_7);
  setListLevel_(self,param_6);
  setListType_(self,param_3);
  setListSubType_(self,param_4);
  setTaskType_(self,param_5);
  return self;
}

// ===== PMKListInfo::isOrderedList @ 000187dc =====

bool PMKListInfo::isOrderedList(ID param_1,SEL param_2)

{
  
  IVar1 = listType(param_1);
  return (bool)(IVar1 == 2);
}

// ===== PMKListInfo::isUnorderedList @ 000187f8 =====

bool PMKListInfo::isUnorderedList(ID param_1,SEL param_2)

{
  
  IVar1 = listType(param_1);
  return (bool)(IVar1 == 1);
}

// ===== PMKListInfo::isTaskList @ 00018814 =====

bool PMKListInfo::isTaskList(ID param_1,SEL param_2)

{
  
  IVar1 = taskType(param_1);
  return (bool)(IVar1 != 0);
}

// ===== PMKListInfo::isBlockQuote @ 00018830 =====

bool PMKListInfo::isBlockQuote(ID param_1,SEL param_2)

{
  
  IVar1 = listType(param_1);
  return (bool)(IVar1 == 3);
}

// ===== PMKListInfo::isCallout @ 0001884c =====

bool PMKListInfo::isCallout(ID param_1,SEL param_2)

{
  
  IVar1 = listSubType(param_1);
  return (bool)(IVar1 == 6);
}

// ===== PMKListInfo::orderedListItemNumberDelimiter @ 00018868 =====

ID PMKListInfo::orderedListItemNumberDelimiter(ID param_1,SEL param_2)

{
  
  IVar1 = listSubType(param_1);
  if (IVar1 == 4) {
    pcVar2 = &cf__;
  }
  else {
    IVar1 = listSubType(param_1);
    pcVar2 = &cf__;
    if (IVar1 != 5) {
      pcVar2 = (cfstringStruct *)0x0;
    }
  }
  return (ID)pcVar2;
}

// ===== PMKListInfo::initWithCoder: @ 000188b4 =====

ID PMKListInfo::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::PMKListInfo;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = decodeObjectForKey_(param_3,&cf_itemIndex);
    IVar1 = integerValue(IVar1);
    setItemIndex_(self,IVar1);
    IVar1 = decodeObjectForKey_(param_3,&cf_listLevel);
    IVar1 = integerValue(IVar1);
    setListLevel_(self,IVar1);
    IVar1 = decodeObjectForKey_(param_3,&cf_listType);
    IVar1 = integerValue(IVar1);
    setListType_(self,IVar1);
    IVar1 = decodeObjectForKey_(param_3,&cf_listSubType);
    IVar1 = integerValue(IVar1);
    setListSubType_(self,IVar1);
    IVar1 = decodeObjectForKey_(param_3,&cf_taskType);
    IVar1 = integerValue(IVar1);
    setTaskType_(self,IVar1);
    IVar1 = decodeObjectForKey_(param_3,&cf_orderedListItemNumber);
    IVar1 = integerValue(IVar1);
    setOrderedListItemNumber_(self,IVar1);
    IVar1 = decodeObjectForKey_(param_3,&cf_relativeListLevel);
    IVar1 = integerValue(IVar1);
    setRelativeListLevel_(self,IVar1);
  }
  return self;
}

// ===== PMKListInfo::encodeWithCoder: @ 00018a88 =====

void PMKListInfo::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = itemIndex(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_itemIndex);
  IVar1 = listLevel(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_listLevel);
  IVar1 = listType(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_listType);
  IVar1 = listSubType(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_listSubType);
  IVar1 = taskType(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_taskType);
  IVar1 = orderedListItemNumber(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_orderedListItemNumber);
  IVar1 = relativeListLevel(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_relativeListLevel);
  return;
}

// ===== PMKListInfo::isEqual: @ 00018c80 =====

bool PMKListInfo::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  
  if (param_3 == param_1) {
    bVar5 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar1 = _objc_opt_class(param_1);
      uVar2 = _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) != 0) {
        IVar3 = itemIndex(param_1);
        IVar4 = itemIndex(param_3);
        if (IVar3 == IVar4) {
          IVar3 = listLevel(param_1);
          IVar4 = listLevel(param_3);
          if (IVar3 == IVar4) {
            IVar3 = listType(param_1);
            IVar4 = listType(param_3);
            if (IVar3 == IVar4) {
              IVar3 = listSubType(param_1);
              IVar4 = listSubType(param_3);
              if (IVar3 == IVar4) {
                IVar3 = taskType(param_1);
                IVar4 = taskType(param_3);
                if (IVar3 == IVar4) {
                  IVar3 = orderedListItemNumber(param_1);
                  IVar4 = orderedListItemNumber(param_3);
                  if (IVar3 == IVar4) {
                    IVar3 = relativeListLevel(param_1);
                    IVar4 = relativeListLevel(param_3);
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

unsigned_long_long PMKListInfo::hash(ID param_1,SEL param_2)

{
  
  uVar1 = *(unsigned_long_long *)(param_1 + 0x40);
  if (uVar1 == 0) {
    orderedListItemNumber(param_1);
    itemIndex(param_1);
    listLevel(param_1);
    listType(param_1);
    listSubType(param_1);
    taskType(param_1);
    relativeListLevel(param_1);
    IVar2 = stringWithFormat_
                      (NSString,&cf__lu__lu__lu__lu__lu__lu__lu);
    IVar2 = hash(IVar2);
    *(ID *)(param_1 + 0x40) = IVar2;
    uVar1 = *(unsigned_long_long *)(param_1 + 0x40);
  }
  return uVar1;
}

// ===== PMKListInfo::copyWithZone: @ 00018e90 =====

ID PMKListInfo::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  self = _objc_opt_new(&objc::class_t::PMKListInfo);
  IVar1 = itemIndex(param_1);
  setItemIndex_(self,IVar1);
  IVar1 = listLevel(param_1);
  setListLevel_(self,IVar1);
  IVar1 = listType(param_1);
  setListType_(self,IVar1);
  IVar1 = listSubType(param_1);
  setListSubType_(self,IVar1);
  IVar1 = taskType(param_1);
  setTaskType_(self,IVar1);
  IVar1 = orderedListItemNumber(param_1);
  setOrderedListItemNumber_(self,IVar1);
  IVar1 = relativeListLevel(param_1);
  setRelativeListLevel_(self,IVar1);
  return self;
}

// ===== PMKListInfo::description @ 00018f4c =====

ID PMKListInfo::description(ID param_1,SEL param_2)

{
  
  listLevel(param_1);
  itemIndex(param_1);
  IVar1 = stringWithFormat_(NSString,&cf_Listlevel__luItemindex__lu);
  return IVar1;
}

// ===== PMKListInfo::listLevel @ 00018fa4 =====

unsigned_long_long PMKListInfo::listLevel(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}

// ===== PMKListInfo::setListLevel: @ 00018fac =====

void PMKListInfo::setListLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  return;
}

// ===== PMKListInfo::itemIndex @ 00018fb4 =====

unsigned_long_long PMKListInfo::itemIndex(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}

// ===== PMKListInfo::setItemIndex: @ 00018fbc =====

void PMKListInfo::setItemIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}

// ===== PMKListInfo::listType @ 00018fc4 =====

unsigned_long_long PMKListInfo::listType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}

// ===== PMKListInfo::setListType: @ 00018fcc =====

void PMKListInfo::setListType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  return;
}

// ===== PMKListInfo::listSubType @ 00018fd4 =====

unsigned_long_long PMKListInfo::listSubType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}

// ===== PMKListInfo::setListSubType: @ 00018fdc =====

void PMKListInfo::setListSubType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x20) = param_3;
  return;
}

// ===== PMKListInfo::taskType @ 00018fe4 =====

unsigned_long_long PMKListInfo::taskType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x28);
}

// ===== PMKListInfo::setTaskType: @ 00018fec =====

void PMKListInfo::setTaskType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x28) = param_3;
  return;
}

// ===== PMKListInfo::orderedListItemNumber @ 00018ff4 =====

unsigned_long_long PMKListInfo::orderedListItemNumber(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x30);
}

// ===== PMKListInfo::setOrderedListItemNumber: @ 00018ffc =====

void PMKListInfo::setOrderedListItemNumber_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x30) = param_3;
  return;
}

// ===== PMKListInfo::relativeListLevel @ 00019004 =====

unsigned_long_long PMKListInfo::relativeListLevel(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x38);
}

// ===== PMKListInfo::setRelativeListLevel: @ 0001900c =====

void PMKListInfo::setRelativeListLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x38) = param_3;
  return;
}

// ===== PMKListInfo::computedHash @ 00019014 =====

unsigned_long_long PMKListInfo::computedHash(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x40);
}

// ===== PMKListInfo::setComputedHash: @ 0001901c =====

void PMKListInfo::setComputedHash_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x40) = param_3;
  return;
}

