// ===== MDEditorBehaviourController::init @ 0001352c =====

ID MDEditorBehaviourController::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDEditorBehaviourController;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setupEditOperations(self);
  }
  return self;
}

// ===== MDEditorBehaviourController::setProcessInlinesOnly: @ 0001357c =====

void MDEditorBehaviourController::setProcessInlinesOnly_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  setupEditOperations(param_1);
  return;
}

// ===== MDEditorBehaviourController::setupEditOperations @ 00013584 =====

void MDEditorBehaviourController::setupEditOperations(ID param_1,SEL param_2)

{
  
  local_98 = _objc_opt_new(&objc::class_t::MDDeleteSpacerTextOperation);
  local_90 = _objc_opt_new(&objc::class_t::MDDeleteTagSpacerTextOperation);
  local_88 = _objc_opt_new(&objc::class_t::MDExitTagTextOperation);
  local_80 = _objc_opt_new(&objc::class_t::MDPreventInlineStyleInvalidationTextOperation);
  local_78 = _objc_opt_new(&objc::class_t::MDWrapSelectionTextOperation);
  local_70 = _objc_opt_new(&objc::class_t::MDFixSmartQuoteTextOperation);
  IVar1 = arrayWithObjects_count_(NSArray,&local_98,6);
  setEditOperations_(param_1,IVar1);
  IVar1 = processInlinesOnly(param_1);
  if ((IVar1 & 1) == 0) {
    IVar1 = editOperations(param_1);
    local_a0 = _objc_opt_new(&objc::class_t::MDPreventTableInvalidationTextOperation);
    IVar2 = arrayWithObjects_count_(NSArray,&local_a0,1);
    IVar1 = arrayByAddingObjectsFromArray_(IVar1,IVar2);
    setEditOperations_(param_1,IVar1);
    IVar1 = 0;
  }
    return;
  }
}

// ===== MDEditorBehaviourController::resultsForEditInRange:replacementString:attributedString:selectionRange: @ 00013764 =====

ID MDEditorBehaviourController::
   resultsForEditInRange_replacementString_attributedString_selectionRange_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,_NSRange param_6)

{
  
  self = editOperations(param_1);
  IVar1 = FAST_ENUM(self);
  if (IVar1 != 0) {
    lVar4 = *local_120;
    do {
      IVar3 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        IVar2 = resultsForEditInRange_replacementString_attributedString_selectionRange_
                          (*(ID *)(lStack_128 + IVar3 * 8),param_3.field0_0x0,param_3.field1_0x8,
                           param_4,param_5,param_6.field0_0x0,param_6.field1_0x8);
        if (IVar2 != 0) goto LAB_00013884;
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = FAST_ENUM(self)
    } while (IVar1 != 0);
  }
  IVar2 = 0;
LAB_00013884:
  }
  return IVar2;
}

// ===== MDEditorBehaviourController::processInlinesOnly @ 000138dc =====

bool MDEditorBehaviourController::processInlinesOnly(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}

// ===== MDEditorBehaviourController::editOperations @ 000138e4 =====

ID MDEditorBehaviourController::editOperations(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== MDEditorBehaviourController::setEditOperations: @ 000138f0 =====

void MDEditorBehaviourController::setEditOperations_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDEditorBehaviourController::.cxx_destruct @ 000138f8 =====

void MDEditorBehaviourController::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

