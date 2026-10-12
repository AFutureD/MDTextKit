// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::button @ 000e3960 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI27StylesBarCollectionViewItem::button(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + button);
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::setButton: @ 000e3970 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI27StylesBarCollectionViewItem::setButton_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + button) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::pullDownButton @ 000e39a4 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI27StylesBarCollectionViewItem::pullDownButton(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + pullDownButton);
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::setPullDownButton: @ 000e39b4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI27StylesBarCollectionViewItem::setPullDownButton_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + pullDownButton) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::backgroundBox @ 000e39e8 =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI27StylesBarCollectionViewItem::backgroundBox(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + backgroundBox);
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::setBackgroundBox: @ 000e39f8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI27StylesBarCollectionViewItem::setBackgroundBox_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + backgroundBox) = param_3;
  return;
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::mouseEntered: @ 000e3a2c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI27StylesBarCollectionViewItem::mouseEntered_
               (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  if (*(ID *)(param_1 + backgroundBox) != 0) {
    objc_stub::setHidden_(*(ID *)(param_1 + backgroundBox),(ulong)*(byte *)(param_1 + spacer));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe3a54);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::mouseExited: @ 000e3a54 =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI27StylesBarCollectionViewItem::mouseExited_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  if (*(ID *)(param_1 + backgroundBox) != 0) {
    objc_stub::setHidden_(*(ID *)(param_1 + backgroundBox),1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe3a70);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::initWithNibName:bundle: @ 000e3ba4 =====

/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI27StylesBarCollectionViewItem::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_000e3bb0();
  return param_1;
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::initWithCoder: @ 000e3cbc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI27StylesBarCollectionViewItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_000e3c20();
  return param_3;
}


// ===== _TtC11MDTextKitUI27StylesBarCollectionViewItem::.cxx_destruct @ 000e3cf0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI27StylesBarCollectionViewItem::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


