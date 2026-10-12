// ===== MDEditorBehaviourController::init @ 0001352c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorBehaviourController::init(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDEditorBehaviourController;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::setupEditOperations(self);
  }
  return self;
}


// ===== MDEditorBehaviourController::setProcessInlinesOnly: @ 0001357c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDEditorBehaviourController::setProcessInlinesOnly_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  objc_stub::setupEditOperations(param_1);
  return;
}


// ===== MDEditorBehaviourController::setupEditOperations @ 00013584 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDEditorBehaviourController::setupEditOperations(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_98 = _objc_opt_new(&objc::class_t::MDDeleteSpacerTextOperation);
  local_90 = _objc_opt_new(&objc::class_t::MDDeleteTagSpacerTextOperation);
  local_88 = _objc_opt_new(&objc::class_t::MDExitTagTextOperation);
  local_80 = _objc_opt_new(&objc::class_t::MDPreventInlineStyleInvalidationTextOperation);
  local_78 = _objc_opt_new(&objc::class_t::MDWrapSelectionTextOperation);
  local_70 = _objc_opt_new(&objc::class_t::MDFixSmartQuoteTextOperation);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_98,6);
  objc_stub::setEditOperations_(param_1,IVar1);
  IVar1 = objc_stub::processInlinesOnly(param_1);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::editOperations(param_1);
    local_a0 = _objc_opt_new(&objc::class_t::MDPreventTableInvalidationTextOperation);
    IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_a0,1);
    IVar1 = objc_stub::arrayByAddingObjectsFromArray_(IVar1,IVar2);
    objc_stub::setEditOperations_(param_1,IVar1);
    IVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar1);
}


// ===== MDEditorBehaviourController::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 00013764 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDEditorBehaviourController::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_0005ec00;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self = objc_stub::editOperations(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_120;
    do {
      IVar3 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        IVar2 = objc_stub::resultsForEditInRange_replacementString_attributedString_selectionRange_
                          (*(ID *)(lStack_128 + IVar3 * 8),param_3.field0_0x0,param_3.field1_0x8,
                           param_4,param_5,param_6.field0_0x0,param_6.field1_0x8);
        if (IVar2 != 0) goto LAB_00013884;
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar1 != 0);
  }
  IVar2 = 0;
LAB_00013884:
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}


// ===== MDEditorBehaviourController::processInlinesOnly @ 000138dc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDEditorBehaviourController::processInlinesOnly(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}


// ===== MDEditorBehaviourController::editOperations @ 000138e4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorBehaviourController::editOperations(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== MDEditorBehaviourController::setEditOperations: @ 000138f0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorBehaviourController::setEditOperations_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDEditorBehaviourController::.cxx_destruct @ 000138f8 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDEditorBehaviourController::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


