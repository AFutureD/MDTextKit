// ===== PMKLogger::handler @ 0002cc38 =====

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKLogger::handler(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _os_unfair_lock_lock(&__handlerLock);
  IVar1 = __handler;
  _os_unfair_lock_unlock(&__handlerLock);
  return IVar1;
}


// ===== PMKLogger::setHandler: @ 0002cc90 =====

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKLogger::setHandler_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  undefined8 uVar1;
  ID IVar2;
  
  IVar2 = objc_stub::copy(param_3,param_3,(ulong)param_4);
  _os_unfair_lock_lock(&__handlerLock);
  uVar1 = __handler;
  __handler = IVar2;
  _os_unfair_lock_unlock(uVar1,&__handlerLock);
  return;
}


