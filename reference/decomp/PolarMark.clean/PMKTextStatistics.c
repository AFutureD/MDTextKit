// ===== PMKTextStatistics::initWithString: @ 000506a0 =====

ID PMKTextStatistics::initWithString_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::PMKTextStatistics;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self == 0) {
    return 0;
  }
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_58);
    if (local_48 < 0) {
      __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                (&local_80,local_58,uStack_50);
      goto LAB;
    }
  }
  uStack_78 = uStack_50;
  local_80 = local_58;
  local_70 = local_48;
LAB:
  __ZN3PMK14TextStatisticsC1ENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_64,&local_80);
  if (local_70 < 0) {
    __ZdlPv(local_80);
  }
  setWordsCount_(self,(long)local_64);
  setParagraphCount_(self,(long)local_60);
  setReadTime_(self,(long)local_5c);
  if (local_48 < 0) {
    __ZdlPv(local_58);
  }
  return self;
}

// ===== PMKTextStatistics::wordsCount @ 000507ec =====

unsigned_long_long PMKTextStatistics::wordsCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}

// ===== PMKTextStatistics::setWordsCount: @ 000507f4 =====

void PMKTextStatistics::setWordsCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  return;
}

// ===== PMKTextStatistics::paragraphCount @ 000507fc =====

unsigned_long_long PMKTextStatistics::paragraphCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}

// ===== PMKTextStatistics::setParagraphCount: @ 00050804 =====

void PMKTextStatistics::setParagraphCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}

// ===== PMKTextStatistics::readTime @ 0005080c =====

unsigned_long_long PMKTextStatistics::readTime(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}

// ===== PMKTextStatistics::setReadTime: @ 00050814 =====

void PMKTextStatistics::setReadTime_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  return;
}

