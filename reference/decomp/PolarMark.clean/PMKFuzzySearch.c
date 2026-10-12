// ===== PMKFuzzySearch::fuzzySearch:inString:indexes: @ 000a9ad0 =====

AnonymousStructure9
PMKFuzzySearch::fuzzySearch_inString_indexes_
          (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  AnonymousStructure9 AVar3;
  
  if (param_3 == 0) {
  }
  else {
    iceString(param_3,&local_58);
  }
  if (param_4 == 0) {
  }
  else {
    iceString(param_4,&local_70);
  }
  __ZN3PMK11fuzzySearchERKNSt3__112basic_stringIDsNS0_11char_traitsIDsEENS0_9allocatorIDsEEEES8_
            (auStack_a0,&local_58,&local_70);
  if (param_5 != (ID *)0x0) {
    self = indexSet(NSMutableIndexSet);
    puVar1 = local_80;
    for (puVar2 = local_88; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      addIndex_(self,*puVar2);
    }
    _objc_retainAutorelease(self);
    *param_5 = self;
  }
  if (local_88 != (undefined8 *)0x0) {
    local_80 = local_88;
    __ZdlPv();
  }
  if (local_60 < 0) {
    __ZdlPv(local_70);
  }
  if (local_48 < 0) {
    __ZdlPv(local_58);
  }
  AVar3.field1_0x8 = local_90;
  AVar3.field0_0x0 = (long)local_98;
  return AVar3;
}

