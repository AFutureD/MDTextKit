// ===== PMKTimeLogger::init @ 00077090 =====

ID PMKTimeLogger::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::PMKTimeLogger;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    _CFAbsoluteTimeGetCurrent();
    setInitialTime_(self);
    initialTime(self);
    setLastChunkTime_(self);
  }
  return self;
}

// ===== PMKTimeLogger::log: @ 000770f4 =====

void PMKTimeLogger::log_(ID param_1,SEL param_2,ID param_3)

{
  _CFAbsoluteTimeGetCurrent();
  lastChunkTime(param_1);
  _NSLog(&cf___in_fms);
  _CFAbsoluteTimeGetCurrent(0);
  setLastChunkTime_(param_1);
  return;
}

// ===== PMKTimeLogger::initialTime @ 00077170 =====

double PMKTimeLogger::initialTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 8);
}

// ===== PMKTimeLogger::setInitialTime: @ 00077178 =====

void PMKTimeLogger::setInitialTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 8) = param_3;
  return;
}

// ===== PMKTimeLogger::lastChunkTime @ 00077180 =====

double PMKTimeLogger::lastChunkTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x10);
}

// ===== PMKTimeLogger::setLastChunkTime: @ 00077188 =====

void PMKTimeLogger::setLastChunkTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x10) = param_3;
  return;
}

