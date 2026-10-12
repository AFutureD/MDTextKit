// ===== PMKTextStatistics::initWithString: @ 000506a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID PMKTextStatistics::initWithString_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::PMKTextStatistics;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self == 0) {
    return 0;
  }
  if (param_3 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
  }
  else {
    objc_stub::iceString(param_3,&local_58);
    if (local_48 < 0) {
      __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
                (&local_80,local_58,uStack_50);
      goto LAB_00050728;
    }
  }
  uStack_78 = uStack_50;
  local_80 = local_58;
  local_70 = local_48;
LAB_00050728:
  __ZN3PMK14TextStatisticsC1ENSt3__112basic_stringIDsNS1_11char_traitsIDsEENS1_9allocatorIDsEEEE
            (&local_64,&local_80);
  if (local_70 < 0) {
    __ZdlPv(local_80);
  }
  objc_stub::setWordsCount_(self,(long)local_64);
  objc_stub::setParagraphCount_(self,(long)local_60);
  objc_stub::setReadTime_(self,(long)local_5c);
  if (local_48 < 0) {
    __ZdlPv(local_58);
  }
  return self;
}


// ===== PMKTextStatistics::wordsCount @ 000507ec =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKTextStatistics::wordsCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}


// ===== PMKTextStatistics::setWordsCount: @ 000507f4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTextStatistics::setWordsCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  return;
}


// ===== PMKTextStatistics::paragraphCount @ 000507fc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKTextStatistics::paragraphCount(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}


// ===== PMKTextStatistics::setParagraphCount: @ 00050804 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTextStatistics::setParagraphCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}


// ===== PMKTextStatistics::readTime @ 0005080c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKTextStatistics::readTime(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x18);
}


// ===== PMKTextStatistics::setReadTime: @ 00050814 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTextStatistics::setReadTime_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  return;
}


