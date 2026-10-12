// ===== _TtC11MDTextKitUI14MDFocusManager::setColor: @ 0002d6f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI14MDFocusManager::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + backgroundColor) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI14MDFocusManager::isAnimating @ 0002d724 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI14MDFocusManager::isAnimating(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = MDTextKitUI::MDFocusManager::get_isAnimating
                    ((MDFocusManager *)param_1,(MDFocusManager *)param_1);
  return (bool)bVar1;
}


// ===== _TtC11MDTextKitUI14MDFocusManager::animate:in: @ 0002d950 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11MDTextKitUI14MDFocusManager::animate_in_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MDTextKitUI::MDFocusManager::_animate
            ((MDFocusManager *)param_1,(CALayer *)param_3,(CALayer *)param_4);
  return;
}


// ===== _TtC11MDTextKitUI14MDFocusManager::animate:in:completion: @ 0002dbf4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC11MDTextKitUI14MDFocusManager::animate_in_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_5);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_00205b98;
    _swift_allocObject(&DAT_00205b98,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_0002dfa0;
  }
  MDTextKitUI::MDFocusManager::_animate
            ((MDFocusManager *)param_1,(CALayer *)param_3,(CALayer *)param_4);
  FUN_00026eec(pcVar3,puVar2);
  return;
}


// ===== _TtC11MDTextKitUI14MDFocusManager::clearCurrentFocus @ 0002dd48 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI14MDFocusManager::clearCurrentFocus(ID param_1,SEL param_2)

{
  MDTextKitUI::MDFocusManager::clearCurrentFocus((MDFocusManager *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI14MDFocusManager::init @ 0002ddf8 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI14MDFocusManager::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  objc_super local_30;
  
  *(undefined8 *)(param_1 + bumpPixels) = 0x4024000000000000;
  *(undefined8 *)(param_1 + currentFocusLayer) = 0;
  puVar1 = (undefined8 *)(param_1 + currentCompletion);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = backgroundColor;
  IVar3 = NSColor::systemYellowColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(param_1 + lVar2) = IVar3;
  local_30.super_class = (class_t *)MDTextKitUI::MDFocusManager::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_30,"init");
  return IVar3;
}


// ===== _TtC11MDTextKitUI14MDFocusManager::.cxx_destruct @ 0002deb4 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI14MDFocusManager::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00026eec(*(undefined8 *)(param_1 + currentCompletion),
               ((undefined8 *)(param_1 + currentCompletion))[1]);
  return;
}


