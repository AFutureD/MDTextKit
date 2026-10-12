// ===== PMKAttributes::markerAttributes @ 0001815c =====

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKAttributes::markerAttributes(ID param_1,SEL param_2)

{
  if (_markerAttributes_onceToken != -1) {
    __PMKAttributes_markerAttributes__cold_1();
  }
  return _markerAttributes_markerAttributes;
}


