// ===== MDStringToAttributedStringIndexMap::initWithAttributedString: @ 00018f88 =====

ID MDStringToAttributedStringIndexMap::initWithAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDStringToAttributedStringIndexMap;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = array(NSMutableArray);
    setIndexes_(self,IVar1);
    setAttributedString_(self,param_3);
  }
  return self;
}

// ===== MDStringToAttributedStringIndexMap::description @ 00019028 =====

ID MDStringToAttributedStringIndexMap::description(ID param_1,SEL param_2)

{
  
  local_e8.super_class = &objc::class_t::MDStringToAttributedStringIndexMap;
  local_e8.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_e8,"description");
  IVar1 = mutableCopy(IVar1);
  self = indexes(param_1);
  IVar2 = FAST_ENUM(self);
  if (IVar2 != 0) {
    lVar3 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar3) {
          _objc_enumerationMutation(self);
        }
        rangeValue(*(ID *)(lStack_128 + IVar4 * 8));
        _NSStringFromRange();
        appendFormat_(IVar1,&cf___);
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = FAST_ENUM(self)
    } while (IVar2 != 0);
  }
    return IVar1;
  }
}

// ===== MDStringToAttributedStringIndexMap::enumerateStringAndAttributedStringRangesInAttributedString:usingBlock: @ 00019194 =====

void MDStringToAttributedStringIndexMap::
     enumerateStringAndAttributedStringRangesInAttributedString_usingBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  
  uStack_48 = 1;
  uStack_78 = 1;
  local_140 = 
  ___108__MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringRangesInAttributedString_usingBlock___block_invoke
  local_130 = param_4;
  local_f8 = local_108;
  puStack_d8 = puStack_120;
  puStack_b8 = local_128;
  local_98 = puStack_110;
  local_68 = local_118;
  enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock_
            (param_1,param_3,&local_150,(ulong)param_5);
  IVar1 = length(param_3);
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

void MDStringToAttributedStringIndexMap::
     enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  
  uVar2 = _NSAttachmentAttributeName;
  IVar1 = length(param_3,param_3,param_4,(ulong)param_5);
  local_b0 = 
  ___109__MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock___block_invoke
  local_a0 = param_3;
  local_98 = param_4;
  enumerateAttribute_inRange_options_usingBlock_(param_3,uVar2,0,IVar1,0,&local_c0);
  __Block_object_dispose(&local_80,8);
  __Block_object_dispose(&local_60,8);
  return;
}

// ===== MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange:inAttributedString: @ 000199ac =====

_NSRange MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar3 = param_3.field1_0x8;
  uVar4 = param_3.field0_0x0;
  IVar2 = length(param_4);
  if ((IVar2 == 0) && (uVar4 != 0)) {
    uVar4 = 0;
    uVar5 = 0x7fffffffffffffff;
    goto LAB_00019bc8;
  }
  IVar2 = length(param_4);
  if ((IVar2 == 0) && ((uVar4 == 0 && (uVar3 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x7fffffffffffffff;
    if (uVar4 != 0x7fffffffffffffff) {
      local_128 = 
      ___93__MDStringToAttributedStringIndexMap_attributedStringRangeForStringRange_inAttributedString___block_invoke
      local_f0 = uVar4;
      uStack_e8 = uVar3;
      local_d8 = local_108;
      local_b8 = local_f8;
      local_98 = puStack_100;
      local_78 = puStack_110;
      local_58 = local_118;
      enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock_
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
          hashTagRangeAtIndex_(param_4,lVar6 + -1);
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
      IVar2 = length(param_4);
      if (uVar4 + uVar5 < IVar2) {
        hashTagRangeAtIndex_(param_4);
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

void MDStringToAttributedStringIndexMap::buildRangeForStringRange_
               (ID param_1,SEL param_2,_NSRange param_3)

{
  
  IVar1 = indexes(param_1,param_3.field0_0x0,param_3.field1_0x8);
  IVar1 = count(IVar1);
  if (IVar1 == 0) {
    IVar1 = _objc_opt_class(param_1);
    IVar2 = attributedString(param_1);
    local_48 = ___63__MDStringToAttributedStringIndexMap_buildRangeForStringRange___block_invoke;
    local_38 = param_1;
    enumerateStringAndAttributedStringRangesInAttributedString_usingBlock_
              (IVar1,IVar2,&local_58);
  }
  return;
}

// ===== MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange: @ 00019ed4 =====

_NSRange MDStringToAttributedStringIndexMap::attributedStringRangeForStringRange_
                   (ID param_1,SEL param_2,_NSRange param_3)

{
  
  uVar7 = param_3.field1_0x8;
  uVar8 = param_3.field0_0x0;
  buildRangeForStringRange_(param_1);
  IVar5 = indexes(param_1);
  IVar5 = count(IVar5);
  if ((IVar5 == 1) && (uVar8 + uVar7 == 0)) {
    IVar5 = indexes(param_1);
    IVar5 = objectAtIndexedSubscript_(IVar5,0);
    IVar5 = rangeValue(IVar5);
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
    IVar5 = indexes(param_1);
    IVar5 = count(IVar5);
    if (uVar8 <= IVar5) {
      uVar1 = (uVar8 - 1) + uVar7;
      IVar5 = indexes(param_1);
      IVar5 = count(IVar5);
      if (uVar1 <= IVar5) {
        IVar5 = indexes(param_1);
        IVar5 = count(IVar5);
        if (uVar8 != IVar5) {
          if (uVar7 == 0) {
            IVar5 = indexes(param_1);
            IVar5 = objectAtIndexedSubscript_(IVar5,uVar8);
            IVar5 = rangeValue(IVar5);
            IVar6 = indexes(param_1);
            IVar6 = objectAtIndexedSubscript_(IVar6,uVar8 - 1);
            IVar6 = rangeValue(IVar6);
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
          IVar5 = indexes(param_1);
          IVar5 = objectAtIndexedSubscript_(IVar5,uVar8);
          IVar5 = rangeValue(IVar5);
          IVar6 = indexes(param_1);
          IVar6 = objectAtIndexedSubscript_(IVar6,uVar1);
          IVar6 = rangeValue(IVar6);
          _Var9 = (_NSRange)_NSUnionRange(IVar5,extraout_x1_03,IVar6,extraout_x1_04);
          return _Var9;
        }
        IVar5 = indexes(param_1);
        IVar5 = lastObject(IVar5);
        IVar5 = rangeValue(IVar5);
        uVar8 = IVar5 + extraout_x1_00;
        goto LAB_00019f8c;
      }
    }
    _Var2 = (_NSRange)ZEXT816(0x7fffffffffffffff);
  }
  return _Var2;
}

// ===== MDStringToAttributedStringIndexMap::indexes @ 0001a1dc =====

ID MDStringToAttributedStringIndexMap::indexes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

// ===== MDStringToAttributedStringIndexMap::setIndexes: @ 0001a1e8 =====

void MDStringToAttributedStringIndexMap::setIndexes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}

// ===== MDStringToAttributedStringIndexMap::attributedString @ 0001a1f0 =====

ID MDStringToAttributedStringIndexMap::attributedString(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== MDStringToAttributedStringIndexMap::setAttributedString: @ 0001a208 =====

void MDStringToAttributedStringIndexMap::setAttributedString_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDStringToAttributedStringIndexMap::.cxx_destruct @ 0001a214 =====

void MDStringToAttributedStringIndexMap::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

