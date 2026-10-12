// ===== MDStringToAttributedStringIndexMap::initWithAttributedString: @ 00018f88 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDStringToAttributedStringIndexMap::initWithAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDStringToAttributedStringIndexMap;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::setIndexes_(self,IVar1);
    objc_stub::setAttributedString_(self,param_3);
  }
  return self;
}


// ===== MDStringToAttributedStringIndexMap::description @ 00019028 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDStringToAttributedStringIndexMap::description(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  objc_super local_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_e8.super_class = &objc::class_t::MDStringToAttributedStringIndexMap;
  local_e8.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_e8,"description");
  IVar1 = objc_stub::mutableCopy(IVar1);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::indexes(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_d8,0x10);
  if (IVar2 != 0) {
    lVar3 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar3) {
          _objc_enumerationMutation(self);
        }
        objc_stub::rangeValue(*(ID *)(lStack_128 + IVar4 * 8));
        _NSStringFromRange();
        objc_stub::appendFormat_(IVar1,&cf___);
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_d8,0x10)
      ;
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDStringToAttributedStringIndexMap::enumerateStringAndAttributedStringRangesInAttributedString:usingBlock: @ 00019194 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDStringToAttributedStringIndexMap::
     enumerateStringAndAttributedStringRangesInAttributedString_usingBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ulong uVar2;
  undefined *local_150;
  undefined8 local_148;
  code *local_140;
  undefined *puStack_138;
  ID local_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_118 = &local_70;
  local_70 = 0;
  local_60 = 0x3010000000;
  local_58 = "";
  uStack_48 = 1;
  local_50 = 0;
  puStack_110 = &local_a0;
  local_a0 = 0;
  local_90 = 0x3010000000;
  local_88 = "";
  uStack_78 = 1;
  local_80 = 0;
  local_128 = &local_c0;
  local_c0 = 0;
  local_b0 = 0x2020000000;
  local_a8 = 0;
  puStack_120 = &local_e0;
  local_e0 = 0;
  local_d0 = 0x2020000000;
  local_c8 = 0;
  local_108 = &local_100;
  local_100 = 0;
  local_f0 = 0x2020000000;
  local_e8 = 0;
  local_150 = PTR___NSConcreteStackBlock_0005ebe0;
  local_148 = 0xc2000000;
  local_140 = 
  ___108__MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringRangesInAttributedString_usingBlock___block_invoke
  ;
  puStack_138 = &___block_descriptor_80_e8_32bs40r48r56r64r72r_e15_v32__0q8q16_B24l;
  local_130 = param_4;
  local_f8 = local_108;
  puStack_d8 = puStack_120;
  puStack_b8 = local_128;
  local_98 = puStack_110;
  local_68 = local_118;
  objc_stub::enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock_
            (param_1,param_3,&local_150,(ulong)param_5);
  IVar1 = objc_stub::length(param_3);
  if (((IVar1 != 0) && ((*(byte *)(local_f8 + 3) & 1) == 0)) && (local_68[5] != 0)) {
    uVar2 = 0;
    do {
      (**(code **)(param_4 + 0x10))(param_4,uVar2 + local_68[4],1,local_98[4],local_98[5],0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)local_68[5]);
  }
  __Block_object_dispose(&local_100,8);
  __Block_object_dispose(&local_e0,8);
  __Block_object_dispose(&local_c0,8);
  __Block_object_dispose(&local_a0,8);
  __Block_object_dispose(&local_70,8);
  return;
}


// ===== MDStringToAttributedStringIndexMap::enumerateStringAndAttributedStringIndexesInAttributedString:usingBlock: @ 000195dc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDStringToAttributedStringIndexMap::
     enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  ID local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_60 = 0;
  local_50 = 0x2020000000;
  local_48 = 0xffffffffffffffff;
  local_80 = 0;
  local_70 = 0x2020000000;
  local_68 = 0xffffffffffffffff;
  uVar2 = *(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30;
  puStack_78 = &local_80;
  puStack_58 = &local_60;
  IVar1 = objc_stub::length(param_3,param_3,param_4,(ulong)param_5);
  local_c0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_b8 = 0xc2000000;
  local_b0 = 
  ___109__MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock___block_invoke
  ;
  puStack_a8 = &___block_descriptor_64_e8_32s40bs48r56r_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_a0 = param_3;
  local_98 = param_4;
  local_90 = &local_80;
  local_88 = &local_60;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_(param_3,uVar2,0,IVar1,0,&local_c0);
  __Block_object_dispose(&local_80,8);
  __Block_object_dispose(&local_60,8);
  return;
}


// ===== MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange:inAttributedString: @ 000199ac =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

_NSRange MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  ulong extraout_x1;
  ulong extraout_x1_00;
  unsigned_long_long uVar3;
  unsigned_long_long uVar4;
  unsigned_long_long uVar5;
  long lVar6;
  _NSRange _Var7;
  undefined *local_138;
  undefined8 local_130;
  code *local_128;
  undefined *puStack_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  undefined8 *local_108;
  undefined8 *puStack_100;
  undefined8 *local_f8;
  unsigned_long_long local_f0;
  unsigned_long_long uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar3 = param_3.field1_0x8;
  uVar4 = param_3.field0_0x0;
  IVar2 = objc_stub::length(param_4);
  if ((IVar2 == 0) && (uVar4 != 0)) {
    uVar4 = 0;
    uVar5 = 0x7fffffffffffffff;
    goto LAB_00019bc8;
  }
  IVar2 = objc_stub::length(param_4);
  if ((IVar2 == 0) && ((uVar4 == 0 && (uVar3 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x7fffffffffffffff;
    if (uVar4 != 0x7fffffffffffffff) {
      local_118 = &local_60;
      local_60 = 0;
      local_50 = 0x2020000000;
      local_48 = 0x7fffffffffffffff;
      puStack_110 = &local_80;
      local_80 = 0;
      local_70 = 0x2020000000;
      local_68 = 0;
      puStack_100 = &local_a0;
      local_a0 = 0;
      local_90 = 0x2020000000;
      local_88 = 0xffffffffffffffff;
      local_f8 = &local_c0;
      local_c0 = 0;
      local_b0 = 0x2020000000;
      local_a8 = 0xffffffffffffffff;
      local_108 = &local_e0;
      local_e0 = 0;
      local_d0 = 0x2020000000;
      local_c8 = 0;
      local_138 = PTR___NSConcreteStackBlock_0005ebe0;
      local_130 = 0xc2000000;
      local_128 = 
      ___93__MDStringToAttributedStringIndexMap_attributedStringRangeForStringRange_inAttributedString___block_invoke
      ;
      puStack_120 = &___block_descriptor_88_e8_32r40r48r56r64r_e15_v32__0q8q16_B24l;
      local_f0 = uVar4;
      uStack_e8 = uVar3;
      local_d8 = local_108;
      local_b8 = local_f8;
      local_98 = puStack_100;
      local_78 = puStack_110;
      local_58 = local_118;
      objc_stub::enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock_
                (param_1,param_4,&local_138);
      lVar6 = local_58[3];
      if ((lVar6 == 0x7fffffffffffffff) && (uVar3 == 0)) {
        if (local_b8[3] == uVar4 - 1) {
          lVar6 = local_98[3] + 1;
          local_58[3] = lVar6;
        }
        else {
          lVar6 = 0x7fffffffffffffff;
        }
        uVar4 = local_78[3] - lVar6;
LAB_00019b34:
        if (*(char *)(local_d8 + 3) == '\0') {
          uVar4 = 0;
        }
        uVar5 = 0;
        if (lVar6 != 0) {
LAB_00019b48:
          objc_stub::hashTagRangeAtIndex_(param_4,lVar6 + -1);
          uVar1 = extraout_x1;
          if (2 < extraout_x1) {
            uVar1 = 0;
          }
          uVar5 = lVar6 - uVar1;
          uVar4 = uVar1 + uVar4;
        }
      }
      else {
        uVar4 = local_78[3] - lVar6;
        if (uVar3 == 0) goto LAB_00019b34;
        if (lVar6 != 0) goto LAB_00019b48;
        uVar5 = 0;
      }
      IVar2 = objc_stub::length(param_4);
      if (uVar4 + uVar5 < IVar2) {
        objc_stub::hashTagRangeAtIndex_(param_4);
        uVar1 = extraout_x1_00;
        if (2 < extraout_x1_00) {
          uVar1 = 0;
        }
        uVar4 = uVar1 + uVar4;
      }
      __Block_object_dispose(&local_e0,8);
      __Block_object_dispose(&local_c0,8);
      __Block_object_dispose(&local_a0,8);
      __Block_object_dispose(&local_80,8);
      __Block_object_dispose(&local_60,8);
      goto LAB_00019bc8;
    }
  }
  uVar4 = 0;
LAB_00019bc8:
  _Var7.field1_0x8 = uVar4;
  _Var7.field0_0x0 = uVar5;
  return _Var7;
}


// ===== MDStringToAttributedStringIndexMap::buildRangeForStringRange: @ 00019da8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDStringToAttributedStringIndexMap::buildRangeForStringRange_
               (ID param_1,SEL param_2,_NSRange param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = objc_stub::indexes(param_1,param_3.field0_0x0,param_3.field1_0x8);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 == 0) {
    IVar1 = _objc_opt_class(param_1);
    IVar2 = objc_stub::attributedString(param_1);
    local_58 = PTR___NSConcreteStackBlock_0005ebe0;
    local_50 = 0xc2000000;
    local_48 = ___63__MDStringToAttributedStringIndexMap_buildRangeForStringRange___block_invoke;
    puStack_40 = &___block_descriptor_40_e8_32s_e39_v48__0__NSRange_QQ_8__NSRange_QQ_24_B40l;
    local_38 = param_1;
    objc_stub::enumerateStringAndAttributedStringRangesInAttributedString_usingBlock_
              (IVar1,IVar2,&local_58);
  }
  return;
}


// ===== MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange: @ 00019ed4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

_NSRange MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange_
                   (ID param_1,SEL param_2,_NSRange param_3)

{
  ulong uVar1;
  _NSRange _Var2;
  _NSRange _Var3;
  _NSRange _Var4;
  ID IVar5;
  ID IVar6;
  unsigned_long_long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  unsigned_long_long uVar7;
  ulong uVar8;
  _NSRange _Var9;
  
  uVar7 = param_3.field1_0x8;
  uVar8 = param_3.field0_0x0;
  objc_stub::buildRangeForStringRange_(param_1);
  IVar5 = objc_stub::indexes(param_1);
  IVar5 = objc_stub::count(IVar5);
  if ((IVar5 == 1) && (uVar8 + uVar7 == 0)) {
    IVar5 = objc_stub::indexes(param_1);
    IVar5 = objc_stub::objectAtIndexedSubscript_(IVar5,0);
    IVar5 = objc_stub::rangeValue(IVar5);
    _Var9.field1_0x8 = extraout_x1;
    _Var9.field0_0x0 = IVar5;
    return _Var9;
  }
  if (uVar8 == 0 && uVar7 == 0) {
    uVar8 = 0;
LAB_00019f8c:
    _Var2.field1_0x8 = 0;
    _Var2.field0_0x0 = uVar8;
  }
  else {
    IVar5 = objc_stub::indexes(param_1);
    IVar5 = objc_stub::count(IVar5);
    if (uVar8 <= IVar5) {
      uVar1 = (uVar8 - 1) + uVar7;
      IVar5 = objc_stub::indexes(param_1);
      IVar5 = objc_stub::count(IVar5);
      if (uVar1 <= IVar5) {
        IVar5 = objc_stub::indexes(param_1);
        IVar5 = objc_stub::count(IVar5);
        if (uVar8 != IVar5) {
          if (uVar7 == 0) {
            IVar5 = objc_stub::indexes(param_1);
            IVar5 = objc_stub::objectAtIndexedSubscript_(IVar5,uVar8);
            IVar5 = objc_stub::rangeValue(IVar5);
            IVar6 = objc_stub::indexes(param_1);
            IVar6 = objc_stub::objectAtIndexedSubscript_(IVar6,uVar8 - 1);
            IVar6 = objc_stub::rangeValue(IVar6);
            _Var4.field1_0x8 = 0;
            _Var4.field0_0x0 = IVar5;
            _Var3.field1_0x8 = 0;
            _Var3.field0_0x0 = IVar5;
            if (IVar5 != IVar6) {
              return _Var3;
            }
            if (extraout_x1_01 != extraout_x1_02) {
              return _Var4;
            }
          }
          IVar5 = objc_stub::indexes(param_1);
          IVar5 = objc_stub::objectAtIndexedSubscript_(IVar5,uVar8);
          IVar5 = objc_stub::rangeValue(IVar5);
          IVar6 = objc_stub::indexes(param_1);
          IVar6 = objc_stub::objectAtIndexedSubscript_(IVar6,uVar1);
          IVar6 = objc_stub::rangeValue(IVar6);
          _Var9 = (_NSRange)_NSUnionRange(IVar5,extraout_x1_03,IVar6,extraout_x1_04);
          return _Var9;
        }
        IVar5 = objc_stub::indexes(param_1);
        IVar5 = objc_stub::lastObject(IVar5);
        IVar5 = objc_stub::rangeValue(IVar5);
        uVar8 = IVar5 + extraout_x1_00;
        goto LAB_00019f8c;
      }
    }
    _Var2 = (_NSRange)ZEXT816(0x7fffffffffffffff);
  }
  return _Var2;
}


// ===== MDStringToAttributedStringIndexMap::indexes @ 0001a1dc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDStringToAttributedStringIndexMap::indexes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


// ===== MDStringToAttributedStringIndexMap::setIndexes: @ 0001a1e8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDStringToAttributedStringIndexMap::setIndexes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


// ===== MDStringToAttributedStringIndexMap::attributedString @ 0001a1f0 =====

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDStringToAttributedStringIndexMap::attributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== MDStringToAttributedStringIndexMap::setAttributedString: @ 0001a208 =====

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDStringToAttributedStringIndexMap::setAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDStringToAttributedStringIndexMap::.cxx_destruct @ 0001a214 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDStringToAttributedStringIndexMap::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


