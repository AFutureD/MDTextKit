// ===== _TtC11MDTextKitUI18MDSegmentedControl::backgroundColor @ 0003daa8 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDSegmentedControl::backgroundColor(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::setBackgroundColor: @ 0003db30 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDSegmentedControl::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = backgroundColor;
  _swift_beginAccess(param_1 + backgroundColor,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::separatorColor @ 0003dc28 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDSegmentedControl::separatorColor(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = separatorColor;
  _swift_beginAccess(param_1 + separatorColor,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::setSeparatorColor: @ 0003dcb0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDSegmentedControl::setSeparatorColor_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = separatorColor;
  _swift_beginAccess(param_1 + separatorColor,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::buttonTint @ 0003dda8 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18MDSegmentedControl::buttonTint(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = buttonTint;
  _swift_beginAccess(param_1 + buttonTint,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::setButtonTint: @ 0003de30 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDSegmentedControl::setButtonTint_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = buttonTint;
  _swift_beginAccess(param_1 + buttonTint,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::isDarkTheme @ 0003df28 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI18MDSegmentedControl::isDarkTheme(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = isDarkTheme;
  _swift_beginAccess(param_1 + isDarkTheme,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::setIsDarkTheme: @ 0003dfac =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI18MDSegmentedControl::setIsDarkTheme_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = isDarkTheme;
  _swift_beginAccess(param_1 + isDarkTheme,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::mouseDown: @ 0003e334 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDSegmentedControl::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDSegmentedControl::mouseDown((MDSegmentedControl *)param_1,(NSEvent *)param_3);
  return;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::segmentCount @ 0003e384 =====

/* Function Stack Size: 0x10 bytes */

long_long _TtC11MDTextKitUI18MDSegmentedControl::segmentCount(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = (class_t *)MDTextKitUI::MDSegmentedControl::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"segmentCount");
  return IVar1;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::setSegmentCount: @ 0003e3f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI18MDSegmentedControl::setSegmentCount_
               (ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  code *pcVar2;
  long_long lVar3;
  long_long lVar4;
  objc_super local_40;
  
  local_40.super_class = (class_t *)MDTextKitUI::MDSegmentedControl::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"setSegmentCount:",param_3);
  lVar3 = segmentCount(param_1);
  if (-1 < (long)lVar3) {
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar4 + 1;
        objc_stub::widthForSegment_(param_1,lVar4);
        objc_stub::setWidth_forSegment_(param_1,lVar4);
        lVar4 = lVar1;
      } while (lVar3 != lVar1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3e498);
  (*pcVar2)();
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::initWithFrame: @ 0003e654 =====

/* Function Stack Size: 0x30 bytes */

ID _TtC11MDTextKitUI18MDSegmentedControl::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MDSegmentedControl *pMVar1;
  
  pMVar1 = MDTextKitUI::MDSegmentedControl::init((MDSegmentedControl *)param_1,(CGRect)param_1);
  return (ID)pMVar1;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::initWithCoder: @ 0003e7a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI18MDSegmentedControl::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MDTextKitUI::MDSegmentedControl::_init((MDSegmentedControl *)param_1,(NSCoder *)param_3);
  return param_3;
}


// ===== _TtC11MDTextKitUI18MDSegmentedControl::.cxx_destruct @ 0003e7d4 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18MDSegmentedControl::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


