// ===== _TtC11MDTextKitUI23KeyboardInputController::keyboardLayoutDidChangeBlock @ 00054d34 =====

ID _TtC11MDTextKitUI23KeyboardInputController::keyboardLayoutDidChangeBlock(ID param_1,SEL param_2)

{
  
  plVar1 = (long *)(param_1 + keyboardLayoutDidChangeBlock);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    lVar5 = plVar1[1];
    local_68 = FUN;
    puStack_60 = &::_block_descriptor;
    local_58 = lVar4;
    local_50 = lVar5;
    pvVar3 = __Block_copy(&local_78);
    lVar2 = local_50;
    FUN_00019830(lVar4,lVar5);
    _swift_release(lVar2);
  }
  return (ID)pvVar3;
}

// ===== _TtC11MDTextKitUI23KeyboardInputController::setKeyboardLayoutDidChangeBlock: @ 00054e40 =====

void _TtC11MDTextKitUI23KeyboardInputController::setKeyboardLayoutDidChangeBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  
  pvVar4 = __Block_copy((void *)param_3);
  if (pvVar4 == (void *)0x0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_00206900;
    _swift_allocObject(&DAT_00206900,0x18,7);
    *(void **)(puVar5 + 0x10) = pvVar4;
    pcVar6 = FUN;
  }
  puVar1 = (undefined8 *)(param_1 + keyboardLayoutDidChangeBlock);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar6;
  puVar1[1] = puVar5;
  FUN_00019830(pcVar6,puVar5);
  FUN_00026eec(uVar2,uVar3);
  FUN();
  FUN_00026eec(pcVar6,puVar5);
  return;
}

// ===== _TtC11MDTextKitUI23KeyboardInputController::dealloc @ 00055354 =====

void _TtC11MDTextKitUI23KeyboardInputController::dealloc(ID param_1,SEL param_2)

{
  MDTextKitUI::KeyboardInputController::__deallocating_init((KeyboardInputController *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI23KeyboardInputController::.cxx_destruct @ 00055378 =====

void _TtC11MDTextKitUI23KeyboardInputController::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00026eec(*(undefined8 *)(param_1 + keyboardLayoutDidChangeBlock),
               ((undefined8 *)(param_1 + keyboardLayoutDidChangeBlock))[1]);
  return;
}

// ===== _TtC11MDTextKitUI23KeyboardInputController::keyboardSelectionDidChange: @ 0005538c =====

void _TtC11MDTextKitUI23KeyboardInputController::keyboardSelectionDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  
  puVar1 = (undefined8 *)(param_1 + keyboardLayoutDidChangeBlock);
  _swift_beginAccess(puVar1,auStack_58,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    FUN_00019830(pcVar2,uVar3);
    (*pcVar2)(param_1);
    FUN_00026eec(pcVar2,uVar3);
  }
  return;
}

// ===== _TtC11MDTextKitUI23KeyboardInputController::init @ 0005548c =====

ID _TtC11MDTextKitUI23KeyboardInputController::init(ID param_1,SEL param_2)

{
  
  puVar1 = (undefined8 *)(param_1 + keyboardLayoutDidChangeBlock);
  local_30.super_class = (class_t *)MDTextKitUI::KeyboardInputController::typeMetadataAccessor();
  *puVar1 = 0;
  puVar1[1] = 0;
  local_30.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}

