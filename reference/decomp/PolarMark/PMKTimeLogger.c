// ===== PMKTimeLogger::init @ 00077090 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKTimeLogger::init(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::PMKTimeLogger;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    _CFAbsoluteTimeGetCurrent();
    objc_stub::setInitialTime_(self);
    objc_stub::initialTime(self);
    objc_stub::setLastChunkTime_(self);
  }
  return self;
}


// ===== PMKTimeLogger::log: @ 000770f4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTimeLogger::log_(ID param_1,SEL param_2,ID param_3)

{
  _CFAbsoluteTimeGetCurrent();
  objc_stub::lastChunkTime(param_1);
  _NSLog(&cf___in_fms);
  _CFAbsoluteTimeGetCurrent(0);
  objc_stub::setLastChunkTime_(param_1);
  return;
}


// ===== PMKTimeLogger::initialTime @ 00077170 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double PMKTimeLogger::initialTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 8);
}


// ===== PMKTimeLogger::setInitialTime: @ 00077178 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTimeLogger::setInitialTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 8) = param_3;
  return;
}


// ===== PMKTimeLogger::lastChunkTime @ 00077180 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double PMKTimeLogger::lastChunkTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x10);
}


// ===== PMKTimeLogger::setLastChunkTime: @ 00077188 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTimeLogger::setLastChunkTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x10) = param_3;
  return;
}


