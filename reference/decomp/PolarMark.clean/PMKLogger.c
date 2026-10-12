// ===== PMKLogger::handler @ 0002cc38 =====

ID PMKLogger::handler(ID param_1,SEL param_2)

{
  
  _os_unfair_lock_lock(&__handlerLock);
  IVar1 = __handler;
  _os_unfair_lock_unlock(&__handlerLock);
  return IVar1;
}

// ===== PMKLogger::setHandler: @ 0002cc90 =====

void PMKLogger::setHandler_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  
  IVar2 = copy(param_3,param_3,(ulong)param_4);
  _os_unfair_lock_lock(&__handlerLock);
  uVar1 = __handler;
  __handler = IVar2;
  _os_unfair_lock_unlock(uVar1,&__handlerLock);
  return;
}

