// ===== swift::MutexPlatformHelper::destroy @ 00009424 =====

/* swift::MutexPlatformHelper::destroy(os_unfair_lock_s&) */

void swift::MutexPlatformHelper::destroy(os_unfair_lock_s *param_1)

{
  return;
}

// ===== swift::AsyncTask::waitFuture @ 001ae850 =====

/* swift::AsyncTask::waitFuture(swift::AsyncTask*, swift::AsyncContext*, void (
   swiftasynccall*)(swift::AsyncContext* swift_async_context), swift::AsyncContext*,
   swift::OpaqueValue*) */

ulong __thiscall
swift::AsyncTask::waitFuture
          (AsyncTask *this,AsyncTask *param_1,AsyncContext *param_2,
          _func_void_AsyncContext_ptr *param_3,AsyncContext *param_4,OpaqueValue *param_5)

{
  AsyncTask *pAVar1;
  AsyncTask *this_00;
  AsyncTask *this_01;
  
  uVar10 = 0;
  bVar5 = false;
  lVar4 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar4 = 0xd0;
  }
  pAVar1 = param_1 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8) + lVar4;
  this_00 = *(AsyncTask **)pAVar1;
  uVar9 = (ulong)this_00 & 3;
  if (uVar9 == 0) goto LAB_001ae8d0;
LAB_001ae8c0:
  this_01 = this_00;
  if (uVar9 == 3) {
    do {
      if (!bVar5) {
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(undefined8 *)(param_3 + 0x20) = in_x5;
        *(OpaqueValue **)param_3 = param_5;
        *(AsyncContext **)(param_3 + 8) = param_4;
        uVar7 = (uint)*(ulong *)(param_2 + 0x58);
        uVar9 = *(ulong *)(param_2 + 0x50);
        uVar6 = *(ulong *)(param_2 + 0x58);
        while ((uVar7 >> 9 & 1) == 0) {
          if (((uint)uVar6 >> 10 & 1) == 0) {
            uVar8 = uVar6 & 0xfffffffffffff5ff;
          }
          else {
            uVar8 = uVar6 & 0xfffffffffffff1ff;
            param_2[0x21] = SUB81(uVar6,0);
          }
          uVar2 = *(ulong *)(param_2 + 0x50);
          uVar3 = *(ulong *)(param_2 + 0x58);
          if ((uVar2 == uVar6) && (uVar3 == uVar9)) {
            *(ulong *)(param_2 + 0x50) = uVar8;
            *(ulong *)(param_2 + 0x58) = uVar9;
          }
          if (uVar2 == uVar9 && uVar3 == uVar6) goto LAB_001ae940;
          uVar9 = uVar2;
          uVar6 = uVar3;
          uVar7 = (uint)uVar3;
        }
        flagAsSuspended_slow(this_01);
LAB_001ae940:
        swift_task_exitThreadLocalContextBackdeploy56((swift *)this_01,(char *)(param_2 + 0x80));
        restoreTaskVoucher((AsyncTask *)param_2);
      }
      uVar9 = *(ulong *)(param_2 + 0x58);
      if (uVar10 < (uVar9 & 0xff)) {
        swift_task_escalateBackdeploy56();
        uVar10 = uVar9 & 0xff;
      }
      *(ulong *)(param_2 + 0x10) = (ulong)this_01 & 0xfffffffffffffffc;
      this_00 = *(AsyncTask **)pAVar1;
      if (this_00 == this_01) {
        *(AsyncContext **)pAVar1 = param_2;
        _swift_task_clearCurrent();
        return 0;
      }
      bVar5 = true;
      uVar9 = (ulong)this_00 & 3;
      if (uVar9 != 0) goto LAB_001ae8c0;
LAB_001ae8d0:
      _swift_tsan_release(param_2);
      this_01 = this_00;
    } while( true );
  }
  _swift_tsan_acquire(param_1);
  if (bVar5) {
    uVar7 = (uint)*(ulong *)(param_2 + 0x58);
    uVar10 = *(ulong *)(param_2 + 0x50);
    uVar6 = *(ulong *)(param_2 + 0x58);
    while ((uVar7 >> 9 & 1) == 0) {
      uVar8 = uVar6;
      if (((uint)uVar6 >> 10 & 1) != 0) {
        uVar8 = uVar6 & 0xfffffffffffff9ff;
        param_2[0x21] = SUB81(uVar6,0);
      }
      uVar2 = *(ulong *)(param_2 + 0x50);
      uVar3 = *(ulong *)(param_2 + 0x58);
      if ((uVar2 == uVar6) && (uVar3 == uVar10)) {
        *(ulong *)(param_2 + 0x50) = uVar8 | 0x800;
        *(ulong *)(param_2 + 0x58) = uVar10;
      }
      if (uVar2 == uVar10 && uVar3 == uVar6) goto LAB_001ae9fc;
      uVar10 = uVar2;
      uVar6 = uVar3;
      uVar7 = (uint)uVar3;
    }
    flagAsRunning_slow(this_00);
LAB_001ae9fc:
    adoptTaskVoucher((AsyncTask *)param_2);
    swift_task_enterThreadLocalContextBackdeploy56((swift *)this_00,(char *)(param_2 + 0x80));
  }
  return uVar9;
}

// ===== swift::swift56override_swift_task_future_wait @ 001aea3c =====

/* swift::swift56override_swift_task_future_wait(swift::OpaqueValue*, swift::AsyncContext*,
   swift::AsyncTask*, void ( swiftasynccall*)(swift::AsyncContext* swift_async_context),
   swift::AsyncContext*, void ( swiftasynccall*)(swift::OpaqueValue*, swift::AsyncContext*
   swift_async_context, swift::AsyncTask*, void (swift::AsyncContext* swift_async_context),
   swift::AsyncContext*)) */

void __thiscall
swift::swift56override_swift_task_future_wait
          (swift *this,OpaqueValue *param_1,AsyncContext *param_2,AsyncTask *param_3,
          _func_void_AsyncContext_ptr *param_4,AsyncContext *param_5,
          _func_void_OpaqueValue_ptr_AsyncContext_ptr_AsyncTask_ptr__func_void_AsyncContext_ptr_ptr_AsyncContext_ptr
          *param_6)

{
  AsyncContext *pAVar2;
  OpaqueValue *this_00;
  OpaqueValue *unaff_x22;
  
  this_00 = param_1;
  swift_task_getCurrent((swift *)param_1);
  *(code **)(param_1 + 0x38) = task_future_wait_resume_adapter;
  *(_func_void_AsyncContext_ptr **)(param_1 + 0x40) = param_4;
  pAVar2 = param_2;
  AsyncTask::waitFuture
            ((AsyncTask *)this_00,(AsyncTask *)param_2,(AsyncContext *)param_1,param_4,
             (AsyncContext *)param_3,unaff_x22);
  if (pAVar2 == (AsyncContext *)((long)&MACH_HEADER.magic + 1)) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + lVar1;
    uVar3 = (ulong)*(byte *)(*(long *)(*(long *)(param_2 + lVar1 + 8) + -8) + 0x50);
    (**(code **)(*(long *)(*(long *)(param_2 + lVar1 + 8) + -8) + 0x10))
              (this_00,(ulong)(param_2 + uVar3 + lVar1 + 0x18) & (uVar3 ^ 0xffffffffffffffff));
    (*(code *)param_3)();
    return;
  }
  if (pAVar2 != (AsyncContext *)((long)&MACH_HEADER.magic + 2)) {
    return;
  }
  swift_Concurrency_fatalError((swift *)this_00,0,"future reported an error, but wait cannot throw")
  (**(code **)(unaff_x22 + 8))();
  return;
}

// ===== swift::swift56override_swift_task_future_wait_throwing @ 001aeb2c =====

/* swift::swift56override_swift_task_future_wait_throwing(swift::OpaqueValue*, swift::AsyncContext*,
   swift::AsyncTask*, void ( swiftasynccall*)(swift::AsyncContext* swift_async_context, void*
   swift_context), swift::AsyncContext*, void ( swiftasynccall*)(swift::OpaqueValue*,
   swift::AsyncContext* swift_async_context, swift::AsyncTask*, void* swift_context,
   swift::AsyncContext*)) */

void __thiscall
swift::swift56override_swift_task_future_wait_throwing
          (swift *this,OpaqueValue *param_1,AsyncContext *param_2,AsyncTask *param_3,
          _func_void_AsyncContext_ptr_void_ptr *param_4,AsyncContext *param_5,
          _func_void_OpaqueValue_ptr_AsyncContext_ptr_AsyncTask_ptr_void_ptr_AsyncContext_ptr
          *param_6)

{
  OpaqueValue *pOVar2;
  AsyncTask *pAVar4;
  OpaqueValue *unaff_x22;
  
  pOVar2 = param_1;
  swift_task_getCurrent((swift *)param_2);
  *(code **)(pOVar2 + 0x38) = task_wait_throwing_resume_adapter;
  *(_func_void_AsyncContext_ptr_void_ptr **)(pOVar2 + 0x40) = param_4;
  pAVar4 = (AsyncTask *)param_2;
  AsyncTask::waitFuture
            ((AsyncTask *)param_2,(AsyncTask *)param_2,(AsyncContext *)pOVar2,
             (_func_void_AsyncContext_ptr *)param_4,(AsyncContext *)param_3,unaff_x22);
  if (param_2 == (AsyncContext *)((long)&MACH_HEADER.magic + 2)) {
    lVar1 = 0xc0;
    if ((*(uint *)(pAVar4 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (pAVar4 + ((ulong)(*(uint *)(pAVar4 + 0x20) >> 0x17) & 8) + lVar1 + 0x10));
  }
  else {
    if (param_2 != (AsyncContext *)((long)&MACH_HEADER.magic + 1)) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(pAVar4 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = ((ulong)(*(uint *)(pAVar4 + 0x20) >> 0x17) & 8) + lVar1;
    uVar3 = (ulong)*(byte *)(*(long *)(*(long *)(pAVar4 + lVar1 + 8) + -8) + 0x50);
    (**(code **)(*(long *)(*(long *)(pAVar4 + lVar1 + 8) + -8) + 0x10))
              (param_1,(ulong)(pAVar4 + uVar3 + lVar1 + 0x18) & (uVar3 ^ 0xffffffffffffffff));
  }
  (*(code *)param_3)();
  return;
}

// ===== swift::swift56override_swift_task_create_common @ 001aec4c =====

/* swift::swift56override_swift_task_create_common(unsigned long, swift::TaskOptionRecord*,
   swift::TargetMetadata<swift::InProcess> const*, void ( swiftasynccall*)(swift::AsyncContext*
   swift_async_context), void*, unsigned long, swift::AsyncTaskAndContext ( swiftcall*)(unsigned
   long, swift::TaskOptionRecord*, swift::TargetMetadata<swift::InProcess> const*, void
   (swift::AsyncContext* swift_async_context), void ( swiftasynccall)(swift::AsyncContext*
   swift_async_context), unsigned long)) */

void __thiscall
swift::swift56override_swift_task_create_common
          (swift *this,ulong param_1,TaskOptionRecord *param_2,TargetMetadata *param_3,
          _func_void_AsyncContext_ptr *param_4,void *param_5,ulong param_6,
          _func_AsyncTaskAndContext_ulong_TaskOptionRecord_ptr_TargetMetadata_ptr__func_void_AsyncContext_ptr_ptr__func_void_AsyncContext_ptr_ptr_ulong
          *param_7)

{
  if (param_6 < 0x21) {
    param_6 = 0x20;
  }
  (*param_7)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// ===== swift::AsyncTask::flagAsRunning_slow @ 001aec5c =====

/* swift::AsyncTask::flagAsRunning_slow() */

void __thiscall swift::AsyncTask::flagAsRunning_slow(AsyncTask *this)

{
  AsyncTask *in_x0;
  
  plVar4 = (long *)0x0;
  uVar1 = *(ulong *)(in_x0 + 0x50);
  uVar2 = *(ulong *)(in_x0 + 0x58);
  uVar5 = (uint)uVar2;
  while( true ) {
    while (local_60 = uVar1, local_58 = uVar2, (uVar5 >> 9 & 1) != 0) {
      waitForStatusRecordUnlock(in_x0,(ActiveTaskStatus *)&local_60);
      uVar1 = local_60;
      uVar2 = local_58;
      uVar5 = (uint)local_58;
    }
    if (plVar4 == (long *)0x0) {
      plVar4 = operator_new(0x20);
      *plVar4 = 1;
      MutexPlatformHelper::init((os_unfair_lock_s *)(plVar4 + 1),false);
      plVar4[2] = 0xc0;
      plVar4[3] = uVar1;
      MutexPlatformHelper::lock((os_unfair_lock_s *)(plVar4 + 1));
    }
    else {
      plVar4[3] = uVar1;
    }
    uVar3 = uVar2 | 0x200;
    uVar1 = *(ulong *)(in_x0 + 0x50);
    uVar2 = *(ulong *)(in_x0 + 0x58);
    if ((uVar1 == local_58) && (uVar2 == local_60)) {
      *(ulong *)(in_x0 + 0x50) = uVar3;
      *(long **)(in_x0 + 0x58) = plVar4 + 2;
    }
    if (uVar1 == local_60 && uVar2 == local_58) break;
    uVar5 = (uint)uVar2;
  }
  uVar1 = local_58;
  if (((uint)local_58 >> 10 & 1) != 0) {
    uVar1 = local_58 & 0xfffffffffffffbff;
    in_x0[0x21] = SUB81(local_58,0);
  }
  local_58 = uVar1 | 0x800;
  *(ulong *)(in_x0 + 0x50) = local_60;
  *(ulong *)(in_x0 + 0x58) = local_58;
  MutexPlatformHelper::lock((os_unfair_lock_s *)&StatusRecordLockLock);
  MutexPlatformHelper::unlock((os_unfair_lock_s *)(plVar4 + 1));
  if (*plVar4 + -1 == 0) {
    MutexPlatformHelper::destroy((os_unfair_lock_s *)(plVar4 + 1));
    operator_delete(plVar4);
  }
  else {
    *plVar4 = *plVar4 + -1;
  }
  MutexPlatformHelper::unlock((os_unfair_lock_s *)&StatusRecordLockLock);
  return;
}

// ===== swift::AsyncTask::flagAsSuspended_slow @ 001aed8c =====

/* swift::AsyncTask::flagAsSuspended_slow() */

void __thiscall swift::AsyncTask::flagAsSuspended_slow(AsyncTask *this)

{
  AsyncTask *in_x0;
  
  plVar4 = (long *)0x0;
  uVar3 = *(ulong *)(in_x0 + 0x50);
  uVar1 = *(ulong *)(in_x0 + 0x58);
  uVar5 = (uint)uVar1;
  while( true ) {
    while (local_60 = uVar3, local_58 = uVar1, (uVar5 >> 9 & 1) != 0) {
      waitForStatusRecordUnlock(in_x0,(ActiveTaskStatus *)&local_60);
      uVar3 = local_60;
      uVar1 = local_58;
      uVar5 = (uint)local_58;
    }
    if (plVar4 == (long *)0x0) {
      plVar4 = operator_new(0x20);
      *plVar4 = 1;
      MutexPlatformHelper::init((os_unfair_lock_s *)(plVar4 + 1),false);
      plVar4[2] = 0xc0;
      plVar4[3] = uVar3;
      MutexPlatformHelper::lock((os_unfair_lock_s *)(plVar4 + 1));
    }
    else {
      plVar4[3] = uVar3;
    }
    uVar2 = uVar1 | 0x200;
    uVar3 = *(ulong *)(in_x0 + 0x50);
    uVar1 = *(ulong *)(in_x0 + 0x58);
    if ((uVar3 == local_58) && (uVar1 == local_60)) {
      *(ulong *)(in_x0 + 0x50) = uVar2;
      *(long **)(in_x0 + 0x58) = plVar4 + 2;
    }
    if (uVar3 == local_60 && uVar1 == local_58) break;
    uVar5 = (uint)uVar1;
  }
  uVar3 = local_58 & 0xfffffffffffff7ff;
  if (((uint)local_58 >> 10 & 1) != 0) {
    uVar3 = local_58 & 0xfffffffffffff3ff;
    in_x0[0x21] = SUB81(local_58,0);
  }
  *(ulong *)(in_x0 + 0x50) = local_60;
  *(ulong *)(in_x0 + 0x58) = uVar3;
  local_58 = uVar3;
  MutexPlatformHelper::lock((os_unfair_lock_s *)&StatusRecordLockLock);
  MutexPlatformHelper::unlock((os_unfair_lock_s *)(plVar4 + 1));
  if (*plVar4 + -1 == 0) {
    MutexPlatformHelper::destroy((os_unfair_lock_s *)(plVar4 + 1));
    operator_delete(plVar4);
  }
  else {
    *plVar4 = *plVar4 + -1;
  }
  MutexPlatformHelper::unlock((os_unfair_lock_s *)&StatusRecordLockLock);
  return;
}

// ===== swift::swift_task_escalateBackdeploy56 @ 001aeebc =====

/* swift::swift_task_escalateBackdeploy56(swift::AsyncTask*, swift::JobPriority) */

void __thiscall
swift::swift_task_escalateBackdeploy56(undefined8 param_1_00,swift *param_1,undefined8 param_3)

{
  if (DAT_0023efb8 != -1) {
    swift_task_escalateBackdeploy56(param_1);
  }
  if (swift_task_escalateBackdeploy56(swift::AsyncTask*,swift::JobPriority)::$_0::operator()()::
      TheLazy != (code *)0x0) {
    (*swift_task_escalateBackdeploy56(swift::AsyncTask*,swift::JobPriority)::$_0::operator()()::
      TheLazy)(param_1,param_3);
    return;
  }
  _abort();
}

// ===== swift::waitForStatusRecordUnlock @ 001aef3c =====

/* swift::waitForStatusRecordUnlock(swift::AsyncTask*, swift::ActiveTaskStatus&) */

void swift::waitForStatusRecordUnlock(AsyncTask *param_1,ActiveTaskStatus *param_2)

{
  
  do {
    MutexPlatformHelper::lock((os_unfair_lock_s *)&StatusRecordLockLock);
    lVar1 = *(long *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    DataMemoryBarrier(2,1);
    *(long *)param_2 = lVar1;
    *(undefined8 *)(param_2 + 8) = uVar2;
    if ((((uint)uVar2 >> 9 & 1) == 0) || (lVar1 == 0)) {
      MutexPlatformHelper::unlock((os_unfair_lock_s *)&StatusRecordLockLock);
      return;
    }
    plVar3 = (long *)(lVar1 + -0x10);
    *plVar3 = *plVar3 + 1;
    MutexPlatformHelper::unlock((os_unfair_lock_s *)&StatusRecordLockLock);
    MutexPlatformHelper::lock((os_unfair_lock_s *)(lVar1 + -8));
    MutexPlatformHelper::unlock((os_unfair_lock_s *)(lVar1 + -8));
    MutexPlatformHelper::lock((os_unfair_lock_s *)&StatusRecordLockLock);
    if (*plVar3 + -1 == 0) {
      MutexPlatformHelper::destroy((os_unfair_lock_s *)(lVar1 + -8));
      operator_delete(plVar3);
    }
    else {
      *plVar3 = *plVar3 + -1;
    }
    MutexPlatformHelper::unlock((os_unfair_lock_s *)&StatusRecordLockLock);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    DataMemoryBarrier(2,1);
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_2 + 8) = uVar2;
  } while (((uint)uVar2 >> 9 & 1) != 0);
  return;
}

// ===== swift::swift_task_escalateBackdeploy56 @ 001af00c =====

/* swift::swift_task_escalateBackdeploy56(swift::AsyncTask*, swift::JobPriority) [clone .cold.1] */

void __thiscall swift::swift_task_escalateBackdeploy56(void)

{
  _dispatch_once_f(&DAT_0023efb8,
                   &swift_task_escalateBackdeploy56(swift::AsyncTask*,swift::JobPriority)::$_0::
                    operator()()::TheLazy,const::{lambda(void*)#1}::__invoke);
  return;
}

// ===== swift::swift_task_getCurrent @ 001af024 =====

/* swift::swift_task_getCurrent() */

void __thiscall swift::swift_task_getCurrent(swift *this)

{
  _pthread_getspecific(0x67);
  return;
}

// ===== swift::_swift_task_clearCurrent @ 001af02c =====

/* swift::_swift_task_clearCurrent() */

void * swift::_swift_task_clearCurrent(void)

{
  
  pvVar1 = _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,(void *)0x0);
  return pvVar1;
}

// ===== swift::adoptTaskVoucher @ 001af060 =====

/* swift::adoptTaskVoucher(swift::AsyncTask*) */

void swift::adoptTaskVoucher(AsyncTask *param_1)

{
  VoucherManager *unaff_x20;
  
  pvVar1 = _pthread_getspecific(0x68);
  VoucherManager::swapToJob(unaff_x20,(Job *)((long)pvVar1 + 0x18));
  return;
}

// ===== swift::restoreTaskVoucher @ 001af08c =====

/* swift::restoreTaskVoucher(swift::AsyncTask*) */

void swift::restoreTaskVoucher(AsyncTask *param_1)

{
  Job *pJVar3;
  
  pvVar2 = _pthread_getspecific(0x68);
  _swift_once(&voucherDisableCheckOnce,_initializeVouchersDisabled,0);
  if ((vouchersDisabled & 1) == 0) {
    pJVar3 = *(Job **)((long)pvVar2 + 0x18);
    if (DAT_0023efe0 != -1) {
      VoucherManager::swapToJob(pJVar3);
    }
    iVar1 = (int)pJVar3;
    if ((swift_voucher_needs_adopt(voucher_s*)::{lambda()#1}::operator()()::TheLazy == (code *)0x0)
       || ((*swift_voucher_needs_adopt(voucher_s*)::{lambda()#1}::operator()()::TheLazy)(),
          iVar1 != 0)) {
      uVar4 = *(undefined8 *)((long)pvVar2 + 0x18);
      _voucher_adopt();
    }
    else {
      uVar4 = *(undefined8 *)((long)pvVar2 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    if (*(char *)((long)pvVar2 + 0x20) == '\x01') {
      *(undefined1 *)((long)pvVar2 + 0x20) = 0;
    }
  }
  return;
}

// ===== swift::VoucherManager::swapToJob @ 001af174 =====

/* swift::VoucherManager::swapToJob(swift::Job*) */

void __thiscall swift::VoucherManager::swapToJob(VoucherManager *this,Job *param_1)

{
  Job *pJVar2;
  
  _swift_once(&voucherDisableCheckOnce,_initializeVouchersDisabled,0);
  if ((vouchersDisabled & 1) == 0) {
    pJVar2 = *(Job **)(in_x1 + 0x28);
    if (DAT_0023efe0 != -1) {
      swapToJob(pJVar2);
    }
    iVar1 = (int)pJVar2;
    if ((swift_voucher_needs_adopt(voucher_s*)::{lambda()#1}::operator()()::TheLazy == (code *)0x0)
       || ((*swift_voucher_needs_adopt(voucher_s*)::{lambda()#1}::operator()()::TheLazy)(),
          iVar1 != 0)) {
      lVar3 = *(long *)(in_x1 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(in_x1 + 0x28);
    }
    *(undefined8 *)(in_x1 + 0x28) = 0xffffffffffffffff;
    if (((byte)param_1[8] & 1) == 0) {
      *(long *)param_1 = lVar3;
      param_1[8] = (Job)0x1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}

// ===== swift::VoucherManager::swapToJob @ 001af280 =====

/* swift::VoucherManager::swapToJob(swift::Job*) [clone .cold.1] */

void swift::VoucherManager::swapToJob(Job *param_1)

{
  _dispatch_once_f(&DAT_0023efe0,
                   &swift_voucher_needs_adopt(voucher_s*)::{lambda()#1}::operator()()::TheLazy,
                   const::{lambda(void*)#1}::__invoke);
  return;
}

// ===== swift::_swift_tsan_acquire @ 001af284 =====

/* swift::_swift_tsan_acquire(void*) */

void swift::_swift_tsan_acquire(void *param_1)

{
  if (DAT_0023eff0 != -1) {
    _swift_tsan_acquire(param_1);
  }
  if (_swift_tsan_acquire(void*)::$_0::operator()()::TheLazy != (code *)0x0) {
    (*_swift_tsan_acquire(void*)::$_0::operator()()::TheLazy)(param_1);
    return;
  }
  return;
}

// ===== swift::_swift_tsan_release @ 001af2cc =====

/* swift::_swift_tsan_release(void*) */

void swift::_swift_tsan_release(void *param_1)

{
  if (DAT_0023f000 != -1) {
    _swift_tsan_release(param_1);
  }
  if (_swift_tsan_release(void*)::$_0::operator()()::TheLazy != (code *)0x0) {
    (*_swift_tsan_release(void*)::$_0::operator()()::TheLazy)(param_1);
    return;
  }
  return;
}

// ===== swift::_swift_tsan_acquire @ 001af374 =====

/* swift::_swift_tsan_acquire(void*) [clone .cold.1] */

void swift::_swift_tsan_acquire(void *param_1)

{
  _dispatch_once_f(&DAT_0023eff0,&_swift_tsan_acquire(void*)::$_0::operator()()::TheLazy,
                   const::{lambda(void*)#1}::__invoke);
  return;
}

// ===== swift::_swift_tsan_release @ 001af38c =====

/* swift::_swift_tsan_release(void*) [clone .cold.1] */

void swift::_swift_tsan_release(void *param_1)

{
  _dispatch_once_f(&DAT_0023f000,&_swift_tsan_release(void*)::$_0::operator()()::TheLazy,
                   const::{lambda(void*)#1}::__invoke);
  return;
}

// ===== swift::MutexPlatformHelper::init @ 001af3a4 =====

/* swift::MutexPlatformHelper::init(os_unfair_lock_s&, bool) */

void swift::MutexPlatformHelper::init(os_unfair_lock_s *param_1,bool param_2)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ===== swift::MutexPlatformHelper::lock @ 001af3ac =====

/* swift::MutexPlatformHelper::lock(os_unfair_lock_s&) */

void swift::MutexPlatformHelper::lock(os_unfair_lock_s *param_1)

{
  _os_unfair_lock_lock();
  return;
}

// ===== swift::MutexPlatformHelper::unlock @ 001af3c0 =====

/* swift::MutexPlatformHelper::unlock(os_unfair_lock_s&) */

void swift::MutexPlatformHelper::unlock(os_unfair_lock_s *param_1)

{
  _os_unfair_lock_unlock();
  return;
}

// ===== swift::swift_task_enterThreadLocalContextBackdeploy56 @ 001af3d4 =====

/* swift::swift_task_enterThreadLocalContextBackdeploy56(char*) */

void __thiscall swift::swift_task_enterThreadLocalContextBackdeploy56(swift *this,char *param_1)

{
  if (DAT_0023f010 != -1) {
    swift_task_enterThreadLocalContextBackdeploy56(this,param_1);
  }
  if (swift_task_enterThreadLocalContextBackdeploy56(char*)::$_0::operator()()::TheLazy !=
      (code *)0x0) {
    (*swift_task_enterThreadLocalContextBackdeploy56(char*)::$_0::operator()()::TheLazy)(param_1);
    return;
  }
  return;
}

// ===== swift::swift_task_exitThreadLocalContextBackdeploy56 @ 001af41c =====

/* swift::swift_task_exitThreadLocalContextBackdeploy56(char*) */

void __thiscall swift::swift_task_exitThreadLocalContextBackdeploy56(swift *this,char *param_1)

{
  if (DAT_0023f020 != -1) {
    swift_task_exitThreadLocalContextBackdeploy56(this,param_1);
  }
  if (swift_task_exitThreadLocalContextBackdeploy56(char*)::$_0::operator()()::TheLazy !=
      (code *)0x0) {
    (*swift_task_exitThreadLocalContextBackdeploy56(char*)::$_0::operator()()::TheLazy)(param_1);
    return;
  }
  return;
}

// ===== swift::swift_task_enterThreadLocalContextBackdeploy56 @ 001af4c4 =====

/* swift::swift_task_enterThreadLocalContextBackdeploy56(char*) [clone .cold.1] */

void __thiscall swift::swift_task_enterThreadLocalContextBackdeploy56(swift *this,char *param_1)

{
  _dispatch_once_f(&DAT_0023f010,
                   &swift_task_enterThreadLocalContextBackdeploy56(char*)::$_0::operator()()::
                    TheLazy,const::{lambda(void*)#1}::__invoke);
  return;
}

// ===== swift::swift_task_exitThreadLocalContextBackdeploy56 @ 001af4dc =====

/* swift::swift_task_exitThreadLocalContextBackdeploy56(char*) [clone .cold.1] */

void __thiscall swift::swift_task_exitThreadLocalContextBackdeploy56(swift *this,char *param_1)

{
  _dispatch_once_f(&DAT_0023f020,
                   &swift_task_exitThreadLocalContextBackdeploy56(char*)::$_0::operator()()::TheLazy
                   ,const::{lambda(void*)#1}::__invoke);
  return;
}

// ===== swift::swift_Concurrency_fatalError @ 001af788 =====

/* swift::swift_Concurrency_fatalError(unsigned int, char const*, ...) */

void __thiscall swift::swift_Concurrency_fatalError(swift *this,uint param_1,char *param_2,...)

{
  _abort();
}

