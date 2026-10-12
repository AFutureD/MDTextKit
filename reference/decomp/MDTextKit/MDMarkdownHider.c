// ===== MDMarkdownHider::showHideMarkdownInTextView:oldSelectionRange:newSelectionRange: @ 000215d8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDMarkdownHider::showHideMarkdownInTextView_oldSelectionRange_newSelectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ID IVar6;
  long lVar7;
  uint uVar8;
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
  IVar1 = objc_stub::textStorage(param_3);
  IVar1 = objc_stub::rangesToCheckForMarkdownHidingForRange_inAttributedString_
                    (param_1,param_4.field0_0x0,param_4.field1_0x8,IVar1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::rangeToCheckForMarkdownShowingForRange_inAttributedString_
                    (param_1,param_5.field0_0x0,param_5.field1_0x8,IVar2);
  IVar3 = objc_stub::textStorage(param_3);
  objc_stub::beginEditing(IVar3);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    lVar7 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(IVar1);
        }
        IVar4 = objc_stub::rangeValue(*(ID *)(lStack_128 + IVar6 * 8));
        IVar5 = objc_stub::textStorage(param_3);
        IVar4 = objc_stub::hideMarkdownInRange_inAttributedString_
                          (param_1,IVar4,extraout_x1_00,IVar5);
        uVar8 = (uint)IVar4 | uVar8;
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  if (IVar2 != 0x7fffffffffffffff) {
    IVar1 = objc_stub::textStorage(param_3);
    IVar1 = objc_stub::showMarkdownInRange_inAttributedString_(param_1,IVar2,extraout_x1,IVar1);
    uVar8 = (uint)IVar1 | uVar8;
  }
  IVar1 = objc_stub::textStorage(param_3);
  objc_stub::endEditing(IVar1);
  if ((uVar8 & 1) != 0) {
    objc_stub::setNeedsDisplay(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== MDMarkdownHider::hideMarkdownInRange:inAttributedString: @ 0002184c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

bool MDMarkdownHider::hideMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  byte bVar1;
  undefined *puVar2;
  unsigned_long_long uVar3;
  unsigned_long_long uVar4;
  undefined *local_150;
  undefined8 local_148;
  code *local_140;
  undefined *puStack_138;
  ID local_130;
  undefined8 *puStack_128;
  undefined *local_120;
  undefined8 local_118;
  code *local_110;
  undefined *puStack_108;
  ID local_100;
  undefined8 *puStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  ID local_d0;
  ID local_c8;
  undefined8 *puStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  code *local_98;
  code *pcStack_90;
  ID local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar4 = param_3.field1_0x8;
  uVar3 = param_3.field0_0x0;
  local_80 = 0;
  local_70 = 0x2020000000;
  local_68 = 0;
  local_b0 = 0;
  local_a0 = 0x3032000000;
  local_98 = ___Block_byref_object_copy_;
  pcStack_90 = ___Block_byref_object_dispose_;
  puStack_a8 = &local_b0;
  local_78 = &local_80;
  local_88 = objc_stub::placeholderFont(param_1);
  puVar2 = PTR___NSConcreteStackBlock_0005ebe0;
  local_f0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_e8 = 0xc2000000;
  local_e0 = ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke;
  puStack_d8 = &
               ___block_descriptor_64_e8_32s40s48r56r_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l
  ;
  local_d0 = param_1;
  local_c8 = param_4;
  puStack_c0 = &local_b0;
  local_b8 = &local_80;
  objc_stub::enumerateAttributesInRange_options_usingBlock_(param_4,uVar3,uVar4,0,&local_f0);
  local_120 = puVar2;
  local_118 = 0xc2000000;
  local_110 = ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke_4;
  puStack_108 = &
                ___block_descriptor_48_e8_32s40r_e54_v64__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40_B56l
  ;
  local_100 = param_4;
  puStack_f8 = &local_80;
  objc_stub::enumerateMathBlockInRange_options_usingBlock_(param_4,uVar3,uVar4,0,&local_120);
  local_150 = puVar2;
  local_148 = 0xc2000000;
  local_140 = ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke_7;
  puStack_138 = &
                ___block_descriptor_48_e8_32s40r_e98_v104__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72__NSString_88_B96l
  ;
  local_130 = param_4;
  puStack_128 = &local_80;
  objc_stub::enumerateFencedCodeInRange_options_usingBlock_(param_4,uVar3,uVar4,0,&local_150);
  bVar1 = *(byte *)(local_78 + 3);
  __Block_object_dispose(&local_b0,8);
  __Block_object_dispose(&local_80,8);
  return (bool)bVar1;
}


// ===== MDMarkdownHider::showMarkdownInRange:inAttributedString: @ 000225c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

bool MDMarkdownHider::showMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  byte bVar1;
  ID IVar2;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  local_60 = 0;
  local_50 = 0x2020000000;
  local_58 = &local_60;
  IVar2 = objc_stub::removeTemporaryAttributesInRange_
                    (param_4,param_3.field0_0x0,param_3.field1_0x8);
  local_48 = (undefined1)IVar2;
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = ___58__MDMarkdownHider_showMarkdownInRange_inAttributedString___block_invoke;
  puStack_78 = &___block_descriptor_48_e8_32s40r_e45_v40__0__NSTextAttachment_8__NSRange_QQ_16_B32l;
  local_70 = param_4;
  puStack_68 = &local_60;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_4,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,param_3.field0_0x0,
             param_3.field1_0x8,0,&local_90);
  bVar1 = *(byte *)(local_58 + 3);
  __Block_object_dispose(&local_60,8);
  return (bool)bVar1;
}


// ===== MDMarkdownHider::removeHidableMarkdownInRange:inAttributedString: @ 000227b8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDMarkdownHider::removeHidableMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID local_38;
  
  local_60 = PTR___NSConcreteStackBlock_0005ebe0;
  local_58 = 0xc2000000;
  local_50 = ___67__MDMarkdownHider_removeHidableMarkdownInRange_inAttributedString___block_invoke;
  puStack_48 = &___block_descriptor_48_e8_32s40s_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l;
  local_40 = param_1;
  local_38 = param_4;
  objc_stub::enumerateAttributesInRange_options_usingBlock_
            (param_4,param_3.field0_0x0,param_3.field1_0x8,0,&local_60);
  return;
}


// ===== MDMarkdownHider::rangeToCheckForMarkdownShowingForRange:inAttributedString: @ 00022c0c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

_NSRange MDMarkdownHider::rangeToCheckForMarkdownShowingForRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  undefined8 extraout_x1;
  unsigned_long_long extraout_x1_00;
  unsigned_long_long uVar2;
  ID IVar3;
  _NSRange _Var4;
  
  IVar1 = objc_stub::length(param_4);
  uVar2 = 0;
  IVar3 = 0x7fffffffffffffff;
  if ((IVar1 != 0) && (param_3.field0_0x0 != 0x7fffffffffffffff)) {
    IVar1 = objc_stub::normalizedRangeForRange_inAttributedString_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4);
    IVar3 = objc_stub::extendedRangeForRange_inAttributedString_(param_1,IVar1,extraout_x1,param_4);
    uVar2 = extraout_x1_00;
  }
  _Var4.field1_0x8 = uVar2;
  _Var4.field0_0x0 = IVar3;
  return _Var4;
}


// ===== MDMarkdownHider::rangesToCheckForMarkdownHidingForRange:inAttributedString: @ 00022ca4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDMarkdownHider::rangesToCheckForMarkdownHidingForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID self;
  ID IVar2;
  undefined *puVar3;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = objc_stub::length(param_4);
  puVar3 = PTR____NSArray0__struct_0005ecc8;
  if ((IVar1 != 0) && (param_3.field0_0x0 != 0x7fffffffffffffff)) {
    IVar1 = objc_stub::normalizedRangeForRange_inAttributedString_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4);
    IVar1 = objc_stub::extendedRangeForRange_inAttributedString_(param_1,IVar1,extraout_x1,param_4);
    if (extraout_x1_00 == 0) {
      local_50 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,IVar1,0);
      puVar3 = (undefined *)
               objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
    }
    else {
      self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
      local_90 = PTR___NSConcreteStackBlock_0005ebe0;
      local_88 = 0xc2000000;
      local_80 = 
      ___77__MDMarkdownHider_rangesToCheckForMarkdownHidingForRange_inAttributedString___block_invoke
      ;
      puStack_78 = &
                   ___block_descriptor_56_e8_32s40s48s_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l
      ;
      local_70 = param_1;
      local_68 = param_4;
      local_60 = self;
      objc_stub::enumerateAttributesInRange_options_usingBlock_
                (param_4,IVar1,extraout_x1_00,0,&local_90);
      IVar2 = objc_stub::count(self);
      if (IVar2 == 0) {
        local_58 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,IVar1,extraout_x1_00);
        puVar3 = (undefined *)
                 objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_58,1);
      }
      else {
        puVar3 = (undefined *)
                 objc_stub::rangesRemovingRanges_fromRange_(param_1,self,IVar1,extraout_x1_00);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return (ID)puVar3;
}


// ===== MDMarkdownHider::normalizedRangesForRanges: @ 00022fb4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDMarkdownHider::normalizedRangesForRanges_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  long lVar4;
  ID IVar5;
  undefined *local_1a0;
  undefined8 local_198;
  code *local_190;
  undefined *puStack_188;
  ID local_180;
  undefined8 *puStack_178;
  ID local_170;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_140,auStack_100,0x10)
  ;
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  if (IVar3 != 0) {
    lVar4 = *local_130;
    do {
      IVar5 = 0;
      do {
        if (*local_130 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        self = *(ID *)(lStack_138 + IVar5 * 8);
        local_170 = objc_stub::rangeValue(self);
        local_160 = 0;
        local_150 = 0x2020000000;
        local_148 = 1;
        local_1a0 = puVar1;
        local_198 = 0xc2000000;
        local_190 = ___45__MDMarkdownHider_normalizedRangesForRanges___block_invoke;
        puStack_188 = &___block_descriptor_64_e8_32s40r_e24_v32__0__NSValue_8Q16_B24l;
        local_180 = IVar2;
        puStack_178 = &local_160;
        local_158 = &local_160;
        objc_stub::enumerateObjectsUsingBlock_(IVar2,&local_1a0);
        if (*(char *)(local_158 + 3) == '\x01') {
          objc_stub::addObject_(IVar2,self);
        }
        __Block_object_dispose(&local_160,8);
        IVar5 = IVar5 + 1;
      } while (IVar3 != IVar5);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_140,auStack_100,0x10);
    } while (IVar3 != 0);
  }
  IVar2 = objc_stub::sortedArrayUsingComparator_(IVar2,&___block_literal_global);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_80) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDMarkdownHider::rangesRemovingRanges:fromRange: @ 000232f8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDMarkdownHider::rangesRemovingRanges_fromRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long extraout_x1;
  unsigned_long_long uVar5;
  unsigned_long_long uVar6;
  unsigned_long_long uVar7;
  ID IVar8;
  long lVar9;
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
  
  uVar6 = param_4.field1_0x8;
  uVar5 = param_4.field0_0x0;
  local_70 = *(long *)PTR____stack_chk_guard_0005ec00;
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar1 = objc_stub::normalizedRangesForRanges_(param_1,param_3);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar9 = *local_120;
    do {
      IVar8 = 0;
      uVar7 = uVar5;
      do {
        if (*local_120 != lVar9) {
          _objc_enumerationMutation(IVar1);
        }
        IVar3 = objc_stub::rangeValue(*(ID *)(lStack_128 + IVar8 * 8));
        if (IVar3 - uVar7 == 0) {
          uVar5 = extraout_x1 + uVar7;
          uVar6 = uVar6 - extraout_x1;
        }
        else {
          IVar4 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,uVar7,IVar3 - uVar7);
          objc_stub::addObject_(self,IVar4);
          uVar5 = IVar3 + extraout_x1;
          uVar6 = (uVar7 + uVar6) - uVar5;
        }
        IVar8 = IVar8 + 1;
        uVar7 = uVar5;
      } while (IVar2 != IVar8);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  if (uVar6 != 0) {
    IVar1 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,uVar5,uVar6);
    objc_stub::addObject_(self,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDMarkdownHider::normalizedRangeForRange:inAttributedString: @ 000234e8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

_NSRange MDMarkdownHider::normalizedRangeForRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  _NSRange _Var3;
  
  uVar2 = param_3.field0_0x0;
  if ((param_3.field1_0x8 == 0) && (IVar1 = objc_stub::length(param_4), uVar2 == IVar1)) {
    _Var3.field1_0x8 = 0;
    _Var3.field0_0x0 = uVar2;
  }
  else {
    IVar1 = objc_stub::length(param_4);
    _Var3 = (_NSRange)_NSIntersectionRange(uVar2,param_3.field1_0x8,0,IVar1);
  }
  return _Var3;
}


// ===== MDMarkdownHider::extendedRangeForRange:inAttributedString: @ 0002356c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

_NSRange MDMarkdownHider::extendedRangeForRange_inAttributedString_
                   (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ID IVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *local_260;
  undefined8 local_258;
  code *local_250;
  undefined *puStack_248;
  ID local_240;
  undefined8 *puStack_238;
  undefined8 *local_230;
  undefined8 local_228;
  undefined8 *local_220;
  undefined8 local_218;
  char *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined *puStack_1c0;
  ID local_1b8;
  undefined8 *local_1b0;
  undefined8 *puStack_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_0005ec00;
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  IVar2 = objc_stub::attributesToSearchForHiding(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_150,auStack_110,0x10);
  if (IVar3 != 0) {
    lVar10 = *local_140;
    do {
      IVar7 = 0;
      do {
        IVar6 = param_3.field0_0x0;
        if (*local_140 != lVar10) {
          _objc_enumerationMutation(IVar2);
        }
        uVar8 = *(undefined8 *)(lStack_148 + IVar7 * 8);
        IVar4 = objc_stub::length(param_4);
        IVar5 = objc_stub::string(param_4);
        lVar9 = IVar6 - (IVar6 == IVar4);
        IVar4 = objc_stub::characterAtIndex_(IVar5,lVar9);
        if (((((int)IVar4 != 10) ||
             (IVar4 = objc_stub::isRangeInsideCode_(param_4,lVar9,1), (IVar4 & 1) != 0)) ||
            (IVar4 = objc_stub::isRangeInsideMath_(param_4,lVar9,1), (IVar4 & 1) != 0)) &&
           (IVar4 = objc_stub::longestRangeForAttribute_atIndex_(param_4,uVar8,lVar9),
           IVar4 != 0x7fffffffffffffff)) {
          param_3 = (_NSRange)_NSUnionRange(IVar6,param_3.field1_0x8,IVar4,extraout_x1);
        }
        lVar9 = param_3.field1_0x8 + param_3.field0_0x0;
        IVar6 = 0;
        if (lVar9 != 0) {
          IVar6 = lVar9 - 1;
        }
        IVar4 = objc_stub::length(param_4);
        IVar5 = objc_stub::string(param_4);
        lVar9 = IVar6 - (IVar6 == IVar4);
        IVar6 = objc_stub::characterAtIndex_(IVar5,lVar9);
        if (((((int)IVar6 != 10) ||
             (IVar6 = objc_stub::isRangeInsideCode_(param_4,lVar9,1), (IVar6 & 1) != 0)) ||
            (IVar6 = objc_stub::isRangeInsideMath_(param_4,lVar9,1), (IVar6 & 1) != 0)) &&
           (IVar6 = objc_stub::longestRangeForAttribute_atIndex_(param_4,uVar8,lVar9),
           IVar6 != 0x7fffffffffffffff)) {
          param_3 = (_NSRange)
                    _NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,IVar6,extraout_x1_00);
        }
        IVar7 = IVar7 + 1;
      } while (IVar3 != IVar7);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_150,auStack_110,0x10);
    } while (IVar3 != 0);
  }
  local_168 = &local_170;
  local_170 = 0;
  local_160 = 0x2020000000;
  local_158 = 0;
  local_198 = &local_1a0;
  local_1a0 = 0;
  local_190 = 0x3010000000;
  local_188 = "";
  uStack_178 = 0;
  local_180 = 0x7fffffffffffffff;
  IVar2 = objc_stub::string(param_4);
  IVar2 = objc_stub::paragraphRangeForRange_(IVar2,param_3.field0_0x0,param_3.field1_0x8);
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  local_1d8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_1d0 = 0xc2000000;
  local_1c8 = ___60__MDMarkdownHider_extendedRangeForRange_inAttributedString___block_invoke;
  puStack_1c0 = &___block_descriptor_56_e8_32s40r48r_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_1b0 = &local_170;
  puStack_1a8 = &local_1a0;
  local_1b8 = param_4;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_4,*(undefined8 *)PTR__PMKMathBlockAttributeName_0005e9e8,IVar2,extraout_x1_01,0,
             &local_1d8);
  if (*(char *)(local_168 + 3) == '\x01') {
    param_3 = (_NSRange)
              _NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,local_198[4],local_198[5]);
  }
  puStack_238 = &local_1f8;
  local_1f8 = 0;
  local_1e8 = 0x2020000000;
  local_1e0 = 0;
  local_230 = &local_228;
  local_228 = 0;
  local_218 = 0x3010000000;
  local_210 = "";
  uStack_200 = 0;
  local_208 = 0x7fffffffffffffff;
  local_260 = puVar1;
  local_258 = 0xc2000000;
  local_250 = ___60__MDMarkdownHider_extendedRangeForRange_inAttributedString___block_invoke_20;
  puStack_248 = &___block_descriptor_56_e8_32s40r48r_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_240 = param_4;
  local_220 = local_230;
  local_1f0 = puStack_238;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_4,&cf_MDMermaidCodeContent,IVar2,extraout_x1_01,0,&local_260);
  if (*(char *)(local_1f0 + 3) == '\x01') {
    param_3 = (_NSRange)
              _NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,local_220[4],local_220[5]);
  }
  __Block_object_dispose(&local_228,8);
  __Block_object_dispose(&local_1f8,8);
  __Block_object_dispose(&local_1a0,8);
  __Block_object_dispose(&local_170,8);
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return param_3;
}


// ===== MDMarkdownHider::attributesToHide @ 00023bc0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMarkdownHider::attributesToHide(ID param_1,SEL param_2)

{
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  cfstringStruct *pcStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_0005ec00;
  if (_attributesToHide_attributesToHide == 0) {
    local_d8 = *(undefined8 *)PTR__PMKStrongMarkerAttributeName_0005ea68;
    uStack_d0 = *(undefined8 *)PTR__PMKEmphasisMarkerAttributeName_0005e8d8;
    local_c8 = *(undefined8 *)PTR__PMKCodeMarkerAttributeName_0005e8a8;
    uStack_c0 = *(undefined8 *)PTR__PMKMathSpanFormulaAttributeName_0005ea08;
    local_b8 = *(undefined8 *)PTR__PMKMathSpanMarkerAttributeName_0005ea10;
    uStack_b0 = *(undefined8 *)PTR__PMKMathBlockFormulaAttributeName_0005e9f0;
    local_a8 = *(undefined8 *)PTR__PMKMathBlockMarkerAttributeName_0005e9f8;
    uStack_a0 = *(undefined8 *)PTR__PMKFencedCodeLanguageAttributeName_0005e8f0;
    local_98 = *(undefined8 *)PTR__PMKHighlighterMarkerAttributeName_0005e978;
    uStack_90 = *(undefined8 *)PTR__PMKLinkMarkerAttributeName_0005e9c0;
    local_88 = *(undefined8 *)PTR__PMKAutoLinkMarkerAttributeName_0005e870;
    uStack_80 = *(undefined8 *)PTR__PMKStrikethroughMarkerAttributeName_0005ea58;
    local_78 = *(undefined8 *)PTR__PMKUnderlineMarkerAttributeName_0005ea88;
    uStack_70 = *(undefined8 *)PTR__PMKFencedCodeMarkerAttributeName_0005e8f8;
    local_68 = *(undefined8 *)PTR__PMKFootNoteMarkerAttributeName_0005e920;
    uStack_60 = *(undefined8 *)PTR__PMKEscapeAttributeName_0005e8e0;
    local_58 = *(undefined8 *)PTR__PMKReferenceMarkerAttributeName_0005ea40;
    uStack_50 = *(undefined8 *)PTR__PMKReferenceLabelAttributeName_0005ea38;
    local_48 = *(undefined8 *)PTR__PMKWikiLinkMarkerAttributeName_0005eaa8;
    uStack_40 = *(undefined8 *)PTR__PMKWikiLinkAliasSeparatorAttributeName_0005ea90;
    local_38 = *(undefined8 *)PTR__PMKHashtagMarkerAttributeName_0005e950;
    pcStack_30 = &cf_MDMermaidCodeContent;
    _attributesToHide_attributesToHide =
         objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_d8,0x16);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_28) {
    return _attributesToHide_attributesToHide;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== MDMarkdownHider::attributesToSearchForHiding @ 00023d7c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMarkdownHider::attributesToSearchForHiding(ID param_1,SEL param_2)

{
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_0005ec00;
  if (_attributesToSearchForHiding_attributesToSearchForHiding == 0) {
    local_c8 = *(undefined8 *)PTR__PMKStrongAttributeName_0005ea60;
    uStack_c0 = *(undefined8 *)PTR__PMKEmphasisAttributeName_0005e8d0;
    local_b8 = *(undefined8 *)PTR__PMKCodeAttributeName_0005e8a0;
    uStack_b0 = *(undefined8 *)PTR__PMKMathSpanAttributeName_0005ea00;
    local_a8 = *(undefined8 *)PTR__PMKMathBlockAttributeName_0005e9e8;
    uStack_a0 = *(undefined8 *)PTR__PMKHighlighterAttributeName_0005e970;
    local_98 = *(undefined8 *)PTR__PMKLinkAttributeName_0005e9b0;
    uStack_90 = *(undefined8 *)PTR__PMKAutoLinkURLAttributeName_0005e878;
    local_88 = *(undefined8 *)PTR__PMKAutoLinkEmailAttributeName_0005e868;
    uStack_80 = *(undefined8 *)PTR__PMKStrikethroughAttributeName_0005ea50;
    local_78 = *(undefined8 *)PTR__PMKUnderlineAttributeName_0005ea80;
    uStack_70 = *(undefined8 *)PTR__PMKFencedCodeAttributeName_0005e8e8;
    local_68 = *(undefined8 *)PTR__PMKFootNoteAttributeName_0005e910;
    uStack_60 = *(undefined8 *)PTR__PMKReferenceAttributeName_0005ea28;
    local_58 = *(undefined8 *)PTR__PMKReferenceDefinitionAttributeName_0005ea30;
    uStack_50 = *(undefined8 *)PTR__PMKWikiLinkAttributeName_0005eaa0;
    local_48 = *(undefined8 *)PTR__PMKHeadingAttributeName_0005e960;
    uStack_40 = *(undefined8 *)PTR__PMKEscapeAttributeName_0005e8e0;
    local_38 = *(undefined8 *)PTR__PMKHardLinebreakAttributeName_0005e940;
    uStack_30 = *(undefined8 *)PTR__PMKHashtagAttributeName_0005e948;
    _attributesToSearchForHiding_attributesToSearchForHiding =
         objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_c8,0x14);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_28) {
    return _attributesToSearchForHiding_attributesToSearchForHiding;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== MDMarkdownHider::attributesPreventingHiding @ 00023f1c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMarkdownHider::attributesPreventingHiding(ID param_1,SEL param_2)

{
  cfstringStruct *local_38;
  cfstringStruct *pcStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_0005ec00;
  if (_attributesPreventingHiding_attributesPreventingHiding == 0) {
    local_38 = &cf_MDPreventMarkdownHiding;
    pcStack_30 = &cf_MDSearchResultBackgroundColor;
    _attributesPreventingHiding_attributesPreventingHiding =
         objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_38,2);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_28) {
    return _attributesPreventingHiding_attributesPreventingHiding;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== MDMarkdownHider::placeholderFont @ 00023fc0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDMarkdownHider::placeholderFont(ID param_1,SEL param_2)

{
  if (_placeholderFont_placeholderFont == 0) {
    _placeholderFont_placeholderFont =
         objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x3f847ae147ae147b);
  }
  return _placeholderFont_placeholderFont;
}


