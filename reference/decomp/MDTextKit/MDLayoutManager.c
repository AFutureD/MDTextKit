// ===== MDLayoutManager::init @ 0001a240 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLayoutManager::init(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDLayoutManager;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::setStyledRange_(self,0x7fffffffffffffff,0);
  }
  return self;
}


// ===== MDLayoutManager::drawGlyphsForGlyphRange:atPoint: @ 0001a298 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawGlyphsForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::MDLayoutManager;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"drawGlyphsForGlyphRange:atPoint:");
  objc_stub::rearrangeAttachmentsViewsForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  return;
}


// ===== MDLayoutManager::drawBackgroundUnderSelectionForGlyphRange:atPoint: @ 0001a310 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawBackgroundUnderSelectionForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  unsigned_long_long uVar2;
  unsigned_long_long uVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = param_4.field1_0x8;
  dVar4 = param_4.field0_0x0;
  uVar3 = param_3.field1_0x8;
  uVar2 = param_3.field0_0x0;
  IVar1 = objc_stub::showBackgroundGrid(param_1);
  if ((int)IVar1 != 0) {
    objc_stub::drawBackgroundGridForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  }
  objc_stub::drawIndentedCodeBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  objc_stub::drawFencedCodeBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  objc_stub::drawHighlighterBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  objc_stub::drawInlineCodeBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  objc_stub::drawTagsBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  objc_stub::drawInlineMathBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  objc_stub::drawMathBlockBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  return;
}


// ===== MDLayoutManager::drawBackgroundOverSelectionForGlyphRange:atPoint: @ 0001a410 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawBackgroundOverSelectionForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  objc_stub::drawSearchResultBackgroundForGlyphRange_atPoint_(param_1);
  objc_stub::drawBlockQuoteBackgroundForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  return;
}


// ===== MDLayoutManager::drawBackgroundForGlyphRange:atPoint: @ 0001a464 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  objc_super local_50;
  
  objc_stub::drawBackgroundUnderSelectionForGlyphRange_atPoint_(param_1);
  local_50.super_class = &objc::class_t::MDLayoutManager;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"drawBackgroundForGlyphRange:atPoint:",param_4.field0_0x0,
                      param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  objc_stub::drawBackgroundOverSelectionForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  return;
}


// ===== MDLayoutManager::fillBackgroundRectArray:count:forCharacterRange:color: @ 0001a4f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDLayoutManager::fillBackgroundRectArray_count_forCharacterRange_color_
               (ID param_1,SEL param_2,const_CGRect__ param_3,unsigned_long_long param_4,
               _NSRange param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  unsigned_long_long uVar3;
  objc_super local_70;
  
  uVar3 = param_5.field0_0x0;
  if (param_5.field1_0x8 == 1) {
    IVar1 = objc_stub::textStorage(param_1);
    IVar1 = objc_stub::textAttachmentAtIndex_(IVar1,uVar3);
    IVar1 = objc_stub::isViewAttachment(IVar1);
    if ((IVar1 & 1) != 0) {
      return;
    }
  }
  IVar1 = objc_stub::textStorage(param_1);
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                    (IVar1,&cf_MDSearchResultBackgroundColor,uVar3,0);
  if (IVar1 == 0) {
    IVar1 = objc_stub::unemphasizedSelectedContentBackgroundColor((ID)&_OBJC_CLASS___NSColor);
    if (param_6 == IVar1) {
      objc_stub::selectionInactiveColor(param_1);
    }
    IVar2 = objc_stub::unemphasizedSelectedContentBackgroundColor((ID)&_OBJC_CLASS___NSColor);
    IVar1 = param_6;
    if (param_6 == IVar2) {
      IVar1 = objc_stub::selectionInactiveColor(param_1);
    }
    IVar1 = objc_stub::colorWithAlphaComponent_(IVar1,0x3fe0000000000000);
    objc_stub::setFill(IVar1);
    local_70.super_class = &objc::class_t::MDLayoutManager;
    local_70.receiver = param_1;
    _objc_msgSendSuper2(&local_70,"fillBackgroundRectArray:count:forCharacterRange:color:",param_3,
                        param_4,uVar3,param_5.field1_0x8,param_6);
    objc_stub::setFill(param_6);
  }
  return;
}


// ===== MDLayoutManager::rangeOfTextAttachmentNearPoint:withDelta: @ 0001a6e4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

_NSRange MDLayoutManager::rangeOfTextAttachmentNearPoint_withDelta_
                   (ID param_1,SEL param_2,CGPoint param_3,double param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  long extraout_x1_00;
  unsigned_long_long uVar3;
  unsigned_long_long uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  _NSRange _Var11;
  undefined *local_130;
  undefined8 local_128;
  code *local_120;
  undefined *puStack_118;
  ID local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  dVar6 = param_3.field1_0x8;
  dVar10 = 1.0;
  if (1.0 <= param_4) {
    dVar10 = param_4;
  }
  uVar8 = 0x3ff0000000000000;
  uVar9 = 0x3ff0000000000000;
  dVar7 = dVar6;
  uVar5 = _CGRectInset(param_3.field0_0x0,dVar6,0x3ff0000000000000,0x3ff0000000000000,-dVar10,
                       -dVar10);
  IVar1 = objc_stub::textContainers(param_1);
  IVar1 = objc_stub::firstObject(IVar1);
  IVar1 = objc_stub::glyphRangeForBoundingRect_inTextContainer_
                    (param_1,uVar5,dVar7,uVar8,uVar9,IVar1);
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_(param_1,IVar1,extraout_x1,0);
  IVar2 = objc_stub::textStorage(param_1);
  IVar2 = objc_stub::length(IVar2);
  if (IVar2 < IVar1 + extraout_x1_00) {
    uVar3 = 0;
    uVar4 = 0x7fffffffffffffff;
  }
  else {
    local_b0 = 0;
    local_a0 = 0x2020000000;
    local_98 = 0xbff0000000000000;
    local_e0 = 0;
    local_d0 = 0x3010000000;
    local_c8 = "";
    uStack_b8 = 0;
    local_c0 = 0x7fffffffffffffff;
    local_d8 = &local_e0;
    puStack_a8 = &local_b0;
    IVar2 = objc_stub::textStorage(param_1);
    local_130 = PTR___NSConcreteStackBlock_0005ebe0;
    local_128 = 0xc2000000;
    local_120 = ___60__MDLayoutManager_rangeOfTextAttachmentNearPoint_withDelta___block_invoke;
    puStack_118 = &___block_descriptor_80_e8_32s40r48r_e27_v40__0_8__NSRange_QQ_16_B32l;
    local_110 = param_1;
    puStack_108 = &local_b0;
    local_100 = &local_e0;
    local_f8 = param_3.field0_0x0;
    dStack_f0 = dVar6;
    local_e8 = dVar10;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (IVar2,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,IVar1,extraout_x1_00,0,
               &local_130);
    uVar4 = local_d8[4];
    uVar3 = local_d8[5];
    __Block_object_dispose(&local_e0,8);
    __Block_object_dispose(&local_b0,8);
  }
  _Var11.field1_0x8 = uVar3;
  _Var11.field0_0x0 = uVar4;
  return _Var11;
}


// ===== MDLayoutManager::attachmentFrameForGlyphAtIndex:atPoint: @ 0001aa88 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

CGRect MDLayoutManager::attachmentFrameForGlyphAtIndex_atPoint_
                 (ID param_1,SEL param_2,unsigned_long_long param_3,CGPoint param_4)

{
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar1;
  double dVar2;
  double dVar3;
  CGRect CVar4;
  
  dVar1 = param_4.field1_0x8;
  objc_stub::lineFragmentRectForGlyphAtIndex_effectiveRange_(param_1,param_3,0);
  dVar2 = dVar1;
  objc_stub::locationForGlyphAtIndex_(param_1,param_3);
  dVar3 = dVar2;
  objc_stub::attachmentSizeForGlyphAtIndex_(param_1,param_3);
  CVar4.field0_0x0.field0_0x0 = extraout_d0_00 + param_4.field0_0x0 + extraout_d0;
  CVar4.field0_0x0.field1_0x8 = dVar2 + param_4.field1_0x8 + (dVar1 - dVar3);
  CVar4.field1_0x10.field1_0x8 = dVar3;
  CVar4.field1_0x10.field0_0x0 = extraout_d0_01;
  return CVar4;
}


// ===== MDLayoutManager::attachmentFrameForCharacterAtIndex:atPoint: @ 0001ab14 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

CGRect MDLayoutManager::attachmentFrameForCharacterAtIndex_atPoint_
                 (ID param_1,SEL param_2,unsigned_long_long param_3,CGPoint param_4)

{
  ID IVar1;
  double extraout_d0;
  double dVar2;
  double in_d2;
  double in_d3;
  CGRect CVar3;
  
  dVar2 = param_4.field1_0x8;
  IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_(param_1,param_3,1,0);
  objc_stub::attachmentFrameForGlyphAtIndex_atPoint_(param_1,param_4.field0_0x0,IVar1);
  CVar3.field0_0x0.field1_0x8 = dVar2;
  CVar3.field0_0x0.field0_0x0 = extraout_d0;
  CVar3.field1_0x10.field1_0x8 = in_d3;
  CVar3.field1_0x10.field0_0x0 = in_d2;
  return CVar3;
}


// ===== MDLayoutManager::rearrangeAttachmentsViewsForCharacterRange:atPoint: @ 0001ab5c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::rearrangeAttachmentsViewsForCharacterRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  undefined8 extraout_x1;
  
  IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  objc_stub::rearrangeAttachmentsViewsForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,IVar1,extraout_x1);
  return;
}


// ===== MDLayoutManager::rearrangeAttachmentsViewsForGlyphRange:atPoint: @ 0001aba4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::rearrangeAttachmentsViewsForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID self;
  undefined8 extraout_x1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  double local_50;
  double dStack_48;
  
  if (((0.0 <= param_4.field0_0x0) && (0.0 <= param_4.field1_0x8)) &&
     (IVar1 = objc_stub::preventAttachmentViewFromRearranging(param_1), (IVar1 & 1) == 0)) {
    IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
    self = objc_stub::textStorage(param_1);
    local_78 = PTR___NSConcreteStackBlock_0005ebe0;
    local_70 = 0xc2000000;
    local_68 = ___66__MDLayoutManager_rearrangeAttachmentsViewsForGlyphRange_atPoint___block_invoke;
    puStack_60 = &___block_descriptor_56_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
    local_58 = param_1;
    local_50 = param_4.field0_0x0;
    dStack_48 = param_4.field1_0x8;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (self,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,IVar1,extraout_x1,
               0x100000,&local_78);
  }
  return;
}


// ===== MDLayoutManager::layoutManager:shouldSetLineFragmentRect:lineFragmentUsedRect:baselineOffset:inTextContainer:forGlyphRange: @ 0001ae4c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x48 bytes */

bool MDLayoutManager::
     layoutManager_shouldSetLineFragmentRect_lineFragmentUsedRect_baselineOffset_inTextContainer_forGlyphRange_
               (ID param_1,SEL param_2,ID param_3,INOUT_CGRect__ param_4,INOUT_CGRect__ param_5,
               INOUT_double__ param_6,ID param_7,_NSRange param_8)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x1;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ID IVar10;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double dVar11;
  double extraout_d0_05;
  double dVar12;
  undefined8 in_stack_00000008;
  uint local_78;
  uint local_74;
  
  objc_stub::fixedBaselineForBaselineOffset_lineFragment_forGlyphRange_
            (param_1,*param_6,(param_4->field0_0x0).field0_0x0,(param_4->field0_0x0).field1_0x8,
             (param_4->field1_0x10).field0_0x0,(param_4->field1_0x10).field1_0x8,param_8.field1_0x8,
             in_stack_00000008);
  uVar7 = (uint)((double)(long)*param_6 != (double)(long)extraout_d0);
  if ((double)(long)*param_6 != (double)(long)extraout_d0) {
    *param_6 = extraout_d0;
  }
  IVar2 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_3,param_8.field1_0x8,in_stack_00000008,0);
  IVar3 = objc_stub::textContainers(param_1);
  IVar3 = objc_stub::count(IVar3);
  local_78 = (uint)(1 < IVar3);
  IVar3 = 0;
  uVar8 = 0;
  if (IVar2 < IVar2 + extraout_x1) {
    local_74 = 1;
    lVar9 = extraout_x1;
    IVar10 = IVar2;
    do {
      IVar4 = objc_stub::textStorage(param_3);
      IVar4 = objc_stub::string(IVar4);
      IVar4 = objc_stub::characterAtIndex_(IVar4,IVar10);
      if ((int)IVar4 == 0xfffc) {
        if ((IVar3 & 1) == 0) {
LAB_0001b004:
          IVar3 = objc_stub::textStorage(param_3);
          IVar3 = objc_stub::string(IVar3);
          IVar3 = objc_stub::characterAtIndex_(IVar3,IVar10);
          if ((int)IVar3 == 0xfffc) {
            IVar3 = objc_stub::textStorage(param_3);
            IVar3 = objc_stub::textAttachmentAtIndex_(IVar3,IVar10);
            uVar5 = _objc_opt_class(&objc::class_t::SFTextAttachment);
            uVar6 = _objc_opt_isKindOfClass(IVar3,uVar5);
            if ((uVar6 & 1) != 0) {
              IVar4 = objc_stub::wantAttachmentBaselineOffset(IVar3);
              local_78 = (uint)IVar4 ^ 1 | local_78;
            }
            IVar3 = objc_stub::isViewAttachment(IVar3);
          }
          else {
            IVar3 = 0;
          }
        }
        else {
          IVar3 = 1;
        }
      }
      else {
        IVar4 = objc_stub::textStorage(param_3);
        IVar4 = objc_stub::string(IVar4);
        IVar4 = objc_stub::characterAtIndex_(IVar4,IVar10);
        bVar1 = (int)IVar4 == 10;
        if (bVar1 && (IVar3 & 1) == 0) goto LAB_0001b004;
        uVar8 = (uint)bVar1;
        IVar3 = (ID)(uVar8 | (uint)IVar3);
        local_74 = uVar8 & local_74;
      }
      uVar8 = (uint)IVar3;
      IVar10 = IVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    local_74 = 1;
  }
  if (((local_78 & 1) == 0) && (local_74 != 0 || (uVar8 & 1) != 0)) {
    IVar3 = objc_stub::textStorage(param_3);
    IVar2 = objc_stub::attributesAtIndex_effectiveRange_(IVar3,IVar2,0);
    IVar3 = objc_stub::objectForKeyedSubscript_
                      (IVar2,*(undefined8 *)PTR__NSFontAttributeName_0005ec48);
    IVar2 = objc_stub::objectForKeyedSubscript_
                      (IVar2,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98);
    objc_stub::minimumLineHeight(IVar2);
    objc_stub::lineSpacing(IVar2);
    if ((local_74 != 0) &&
       ((double)(long)(extraout_d0_00 + extraout_d0_01) <
        (double)(long)(param_5->field1_0x10).field1_0x8)) {
      objc_stub::descender(IVar3);
      (param_4->field1_0x10).field1_0x8 =
           (param_4->field1_0x10).field1_0x8 + (double)(long)ABS(extraout_d0_02);
      objc_stub::descender(IVar3);
      (param_5->field1_0x10).field1_0x8 =
           (param_5->field1_0x10).field1_0x8 + (double)(long)ABS(extraout_d0_03);
    }
    if ((uVar8 & 1) != 0) {
      objc_stub::descender(IVar3);
      dVar11 = extraout_d0_01 + (double)(long)ABS(extraout_d0_04);
      (param_4->field1_0x10).field1_0x8 = (param_4->field1_0x10).field1_0x8 + dVar11;
      (param_5->field1_0x10).field1_0x8 = (param_5->field1_0x10).field1_0x8 + dVar11;
      dVar12 = *param_6;
      *param_6 = dVar11 + dVar12;
      if (local_74 != 0) {
        objc_stub::descender(IVar3);
        *param_6 = dVar11 + dVar12 + ABS(extraout_d0_05);
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


// ===== MDLayoutManager::fixedBaselineForBaselineOffset:lineFragment:forGlyphRange: @ 0001b28c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x48 bytes */

double MDLayoutManager::fixedBaselineForBaselineOffset_lineFragment_forGlyphRange_
                 (ID param_1,SEL param_2,double param_3,CGRect param_4,_NSRange param_5)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long extraout_x1;
  long lVar6;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double dVar7;
  
  IVar2 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3,param_4.field0_0x0.field0_0x0,param_4.field0_0x0.field1_0x8,
                     param_4.field1_0x10.field0_0x0,param_5.field0_0x0,param_5.field1_0x8,0);
  lVar6 = IVar2 + extraout_x1 + -1;
  IVar3 = objc_stub::textStorage(param_1);
  IVar3 = objc_stub::string(IVar3);
  IVar3 = objc_stub::characterAtIndex_(IVar3,lVar6);
  IVar4 = objc_stub::textStorage(param_1);
  IVar4 = objc_stub::isRangeInsideBlockCode_(IVar4,IVar2,1);
  if ((IVar4 & 1) == 0) {
    IVar4 = objc_stub::textStorage(param_1);
    IVar4 = objc_stub::paragraphStyleAtIndex_(IVar4,IVar2);
    IVar5 = objc_stub::defaultFont(param_1);
    lVar1 = IVar2 + extraout_x1 + -2;
    if (lVar6 == 0 || (int)IVar3 != 10) {
      lVar1 = lVar6;
    }
    IVar2 = objc_stub::textStorage(param_1);
    IVar2 = objc_stub::longestRangeForAttribute_atIndex_
                      (IVar2,*(undefined8 *)PTR__PMKHeadingAttributeName_0005e960,lVar1);
    if (IVar2 != 0x7fffffffffffffff) {
      IVar5 = objc_stub::textStorage(param_1);
      IVar5 = objc_stub::nonHiddenFontAtIndex_(IVar5,IVar2);
    }
    objc_stub::ascender(IVar5);
    objc_stub::descender(IVar5);
    objc_stub::ascender(IVar5);
    objc_stub::minimumLineHeight(IVar4);
    objc_stub::lineSpacing(IVar4);
    dVar7 = (double)(long)(extraout_d0_02 + extraout_d0_03);
    if ((int)IVar3 == 10) {
      objc_stub::paragraphSpacing(IVar4);
      dVar7 = dVar7 + extraout_d0_04;
    }
    dVar7 = (double)(long)extraout_d0_01 + (param_4.field1_0x10.field1_0x8 - dVar7);
    param_3 = (double)(long)(extraout_d0_02 -
                            ((double)(long)extraout_d0 + (double)(long)-extraout_d0_00)) + dVar7;
    if (extraout_d0_02 <= (double)(long)extraout_d0 + (double)(long)-extraout_d0_00) {
      param_3 = dVar7;
    }
  }
  return param_3;
}


// ===== MDLayoutManager::showBackgroundGrid @ 0001b4c0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDLayoutManager::showBackgroundGrid(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_showBackgroundGrid) & 1;
}


// ===== MDLayoutManager::setShowBackgroundGrid: @ 0001b4d4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDLayoutManager::setShowBackgroundGrid_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_showBackgroundGrid) = (char)param_3;
  return;
}


// ===== MDLayoutManager::preventAttachmentViewFromRearranging @ 0001b4e4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDLayoutManager::preventAttachmentViewFromRearranging(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_preventAttachmentViewFromRearranging) & 1;
}


// ===== MDLayoutManager::setPreventAttachmentViewFromRearranging: @ 0001b4f8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDLayoutManager::setPreventAttachmentViewFromRearranging_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_preventAttachmentViewFromRearranging) = (char)param_3;
  return;
}


// ===== MDLayoutManager::styledRange @ 0001b508 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

_NSRange MDLayoutManager::styledRange(ID param_1,SEL param_2)

{
  _NSRange local_20;
  
  _objc_copyStruct(&local_20,param_1 + (long)_styledRange,0x10,1,0);
  return local_20;
}


// ===== MDLayoutManager::setStyledRange: @ 0001b548 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDLayoutManager::setStyledRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  unsigned_long_long local_20;
  unsigned_long_long uStack_18;
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + (long)_styledRange,&local_20,0x10,1,0);
  return;
}


// ===== MDLayoutManager::defaultLineSpacing @ 0001b584 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDLayoutManager::defaultLineSpacing(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_defaultLineSpacing);
}


// ===== MDLayoutManager::setDefaultLineSpacing: @ 0001b594 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setDefaultLineSpacing_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_defaultLineSpacing) = param_3;
  return;
}


// ===== MDLayoutManager::defaultParagraphIndent @ 0001b5a4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDLayoutManager::defaultParagraphIndent(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_defaultParagraphIndent);
}


// ===== MDLayoutManager::setDefaultParagraphIndent: @ 0001b5b4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setDefaultParagraphIndent_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_defaultParagraphIndent) = param_3;
  return;
}


// ===== MDLayoutManager::baseTabSize @ 0001b5c4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDLayoutManager::baseTabSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_baseTabSize);
}


// ===== MDLayoutManager::setBaseTabSize: @ 0001b5d4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setBaseTabSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_baseTabSize) = param_3;
  return;
}


// ===== MDLayoutManager::basePointSize @ 0001b5e4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDLayoutManager::basePointSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_basePointSize);
}


// ===== MDLayoutManager::setBasePointSize: @ 0001b5f4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setBasePointSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_basePointSize) = param_3;
  return;
}


// ===== MDLayoutManager::columnSize @ 0001b604 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDLayoutManager::columnSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_columnSize);
}


// ===== MDLayoutManager::setColumnSize: @ 0001b614 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setColumnSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_columnSize) = param_3;
  return;
}


// ===== MDLayoutManager::gutterSize @ 0001b624 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDLayoutManager::gutterSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_gutterSize);
}


// ===== MDLayoutManager::setGutterSize: @ 0001b634 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setGutterSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_gutterSize) = param_3;
  return;
}


// ===== MDLayoutManager::defaultFont @ 0001b644 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLayoutManager::defaultFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_defaultFont);
}


// ===== MDLayoutManager::setDefaultFont: @ 0001b654 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setDefaultFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_defaultFont) = param_3;
  return;
}


// ===== MDLayoutManager::selectionInactiveColor @ 0001b660 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDLayoutManager::selectionInactiveColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_selectionInactiveColor);
}


// ===== MDLayoutManager::setSelectionInactiveColor: @ 0001b670 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDLayoutManager::setSelectionInactiveColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_selectionInactiveColor) = param_3;
  return;
}


// ===== MDLayoutManager::.cxx_destruct @ 0001b67c =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDLayoutManager::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_selectionInactiveColor) = 0;
  *(undefined8 *)(param_1 + (long)_defaultFont) = 0;
  return;
}


// ===== MDLayoutManager::drawIndentedCodeBackgroundForGlyphRange:atPoint: @ 000344e0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawIndentedCodeBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined8 extraout_x1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  double local_60;
  double dStack_58;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = objc_stub::textStorage(param_1);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___76__MDLayoutManager_Drawing__drawIndentedCodeBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_78 = &___block_descriptor_64_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,*(undefined8 *)PTR__PMKIndentedCodeAttributeName_0005e9a8,IVar1,extraout_x1,0,
             &local_90);
  return;
}


// ===== MDLayoutManager::drawFencedCodeBackgroundForGlyphRange:atPoint: @ 00034764 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawFencedCodeBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID self;
  undefined8 extraout_x1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  double local_50;
  double dStack_48;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  self = objc_stub::textStorage(param_1);
  local_78 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = 0xc2000000;
  local_68 = 
  ___74__MDLayoutManager_Drawing__drawFencedCodeBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_60 = &___block_descriptor_56_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_58 = param_1;
  local_50 = param_4.field0_0x0;
  dStack_48 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,*(undefined8 *)PTR__PMKFencedCodeAttributeName_0005e8e8,IVar1,extraout_x1,0,
             &local_78);
  return;
}


// ===== MDLayoutManager::drawInlineCodeBackgroundForGlyphRange:atPoint: @ 000349b4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawInlineCodeBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined8 extraout_x1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  double local_60;
  double dStack_58;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = objc_stub::textStorage(param_1);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___74__MDLayoutManager_Drawing__drawInlineCodeBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_78 = &___block_descriptor_64_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,*(undefined8 *)PTR__PMKCodeAttributeName_0005e8a0,IVar1,extraout_x1,0,&local_90);
  return;
}


// ===== MDLayoutManager::drawMathBlockBackgroundForGlyphRange:atPoint: @ 00034ccc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawMathBlockBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID self;
  undefined8 extraout_x1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  double local_50;
  double dStack_48;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  self = objc_stub::textStorage(param_1);
  local_78 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = 0xc2000000;
  local_68 = 
  ___73__MDLayoutManager_Drawing__drawMathBlockBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_60 = &___block_descriptor_56_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_58 = param_1;
  local_50 = param_4.field0_0x0;
  dStack_48 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,*(undefined8 *)PTR__PMKMathBlockAttributeName_0005e9e8,IVar1,extraout_x1,0,
             &local_78);
  return;
}


// ===== MDLayoutManager::drawInlineMathBackgroundForGlyphRange:atPoint: @ 00034f1c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawInlineMathBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined8 extraout_x1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  double local_60;
  double dStack_58;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = objc_stub::textStorage(param_1);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___74__MDLayoutManager_Drawing__drawInlineMathBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_78 = &___block_descriptor_64_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,*(undefined8 *)PTR__PMKMathSpanAttributeName_0005ea00,IVar1,extraout_x1,0,
             &local_90);
  return;
}


// ===== MDLayoutManager::drawTagsBackgroundForGlyphRange:atPoint: @ 0003538c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawTagsBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined8 extraout_x1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  double local_60;
  double dStack_58;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = objc_stub::textStorage(param_1);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = ___68__MDLayoutManager_Drawing__drawTagsBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_78 = &___block_descriptor_64_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,&cf_MDTagBackgroundColor,IVar1,extraout_x1,0,&local_90);
  return;
}


// ===== MDLayoutManager::drawHighlighterBackgroundForGlyphRange:atPoint: @ 00035684 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawHighlighterBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined8 extraout_x1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  double local_60;
  double dStack_58;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = objc_stub::textStorage(param_1);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___75__MDLayoutManager_Drawing__drawHighlighterBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_78 = &___block_descriptor_64_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,&cf_MDHighlighterBackgroundColor,IVar1,extraout_x1,0,&local_90);
  return;
}


// ===== MDLayoutManager::drawSearchResultBackgroundForGlyphRange:atPoint: @ 00035974 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawSearchResultBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined8 extraout_x1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  double local_60;
  double dStack_58;
  
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = objc_stub::textStorage(param_1);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___76__MDLayoutManager_Drawing__drawSearchResultBackgroundForGlyphRange_atPoint___block_invoke;
  puStack_78 = &___block_descriptor_64_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,&cf_MDSearchResultBackgroundColor,IVar1,extraout_x1,0,&local_90);
  return;
}


// ===== MDLayoutManager::drawBlockQuoteBackgroundForGlyphRange:atPoint: @ 00035c60 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawBlockQuoteBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  double extraout_d0;
  double extraout_d0_00;
  undefined *local_108;
  undefined8 local_100;
  code *local_f8;
  undefined *puStack_f0;
  ID local_e8;
  ID local_e0;
  undefined8 *local_d8;
  undefined1 auStack_d0 [8];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  code *local_90;
  code *pcStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  
  if (param_3.field1_0x8 != 0) {
    _objc_initWeak(auStack_78,param_1);
    IVar1 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
    IVar2 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
    IVar3 = objc_stub::textStorage(param_1);
    IVar2 = objc_stub::extendRangeToFullyContainBlockquote_(IVar3,IVar2,extraout_x1);
    objc_stub::columnSize(param_1);
    objc_stub::columnSize(param_1);
    local_a8 = 0;
    local_98 = 0x3032000000;
    local_90 = ___Block_byref_object_copy_;
    pcStack_88 = ___Block_byref_object_dispose_;
    local_80 = 0;
    puStack_a0 = &local_a8;
    IVar3 = objc_stub::textStorage(param_1);
    local_108 = PTR___NSConcreteStackBlock_0005ebe0;
    local_100 = 0xc2000000;
    local_f8 = 
    ___74__MDLayoutManager_Drawing__drawBlockQuoteBackgroundForGlyphRange_atPoint___block_invoke;
    puStack_f0 = &___block_descriptor_96_e8_32s40s48r56w_e30_v48__0__NSRange_QQ_8q24Q32_B40l;
    local_e8 = param_1;
    local_e0 = IVar1;
    _objc_copyWeak(auStack_d0,auStack_78);
    local_d8 = &local_a8;
    local_c8 = param_4.field0_0x0;
    dStack_c0 = param_4.field1_0x8;
    local_b8 = extraout_d0 * 0.5;
    dStack_b0 = extraout_d0_00 * 0.18;
    objc_stub::enumerateBlockquoteInRange_options_listBlock_listItemBlock_
              (IVar3,IVar2,extraout_x1_00,0,&local_108,0);
    _objc_destroyWeak(auStack_d0);
    __Block_object_dispose(&local_a8,8);
    _objc_destroyWeak(auStack_78);
  }
  return;
}


// ===== MDLayoutManager::drawBackgroundGridForGlyphRange:atPoint: @ 000366cc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDLayoutManager::drawBackgroundGridForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  uint uVar1;
  ID IVar2;
  ID self;
  long lVar3;
  long lVar4;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double in_d2;
  double in_d3;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 local_a8;
  
  dVar9 = param_4.field1_0x8;
  IVar2 = objc_stub::textContainerForGlyphAtIndex_effectiveRange_
                    (param_1,param_4.field0_0x0,param_3.field0_0x0,0);
  objc_stub::usedRectForTextContainer_(param_1,IVar2);
  objc_stub::lineFragmentPadding(IVar2);
  objc_stub::lineFragmentPadding(IVar2);
  objc_stub::baseTabSize(param_1);
  lVar3 = (long)((in_d2 + extraout_d0_01 * -2.0) / extraout_d0_02);
  if (-1 < lVar3) {
    dVar9 = (double)(float)(int)(param_4.field1_0x8 + dVar9);
    dVar10 = (double)(float)(int)in_d3;
    lVar4 = -1;
    local_a8 = 0x3fedc28f5c28f5c3;
    do {
      uVar1 = (int)lVar4 + 1;
      objc_stub::columnSize(param_1);
      objc_stub::gutterSize(param_1);
      objc_stub::columnSize(param_1);
      dVar11 = (double)(float)(int)(extraout_d0_00 + extraout_d0 +
                                   (extraout_d0_03 + extraout_d0_04) * (double)uVar1);
      IVar2 = objc_stub::bezierPathWithRect_
                        ((ID)&_OBJC_CLASS___NSBezierPath,dVar11,dVar9,extraout_d0_05,dVar10);
      uVar5 = 0x3feeb851eb851eb8;
      uVar6 = 0x3feeb851eb851eb8;
      if ((uVar1 & 1) == 0) {
        uVar5 = local_a8;
        uVar6 = 0x3ff0000000000000;
      }
      self = objc_stub::colorWithRed_green_blue_alpha_
                       ((ID)&_OBJC_CLASS___NSColor,uVar5,0x3feeb851eb851eb8,uVar6,0x3ff0000000000000
                       );
      objc_stub::setFill(self);
      objc_stub::fill(IVar2);
      dVar7 = dVar9;
      uVar5 = extraout_d0_05;
      dVar8 = dVar10;
      uVar6 = _CGRectInset(dVar11,dVar9,extraout_d0_05,dVar10,0x3fe0000000000000,0x3fe0000000000000)
      ;
      IVar2 = objc_stub::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___NSColor,0x3feccccccccccccd,0x3fe999999999999a,
                         0x3ff0000000000000,0x3ff0000000000000);
      objc_stub::setStroke(IVar2);
      IVar2 = objc_stub::bezierPathWithRect_
                        ((ID)&_OBJC_CLASS___NSBezierPath,uVar6,dVar7,uVar5,dVar8);
      objc_stub::stroke(IVar2);
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar3);
  }
  return;
}


// ===== MDLayoutManager::drawBlockBackgroundForCharRange:atPoint:color: @ 0003693c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDLayoutManager::drawBlockBackgroundForCharRange_atPoint_color_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4,ID param_5)

{
  undefined8 *puVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  undefined8 extraout_x1;
  unsigned_long_long uVar4;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double dVar5;
  double extraout_d0_05;
  double in_d2;
  double dVar6;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar4 = param_3.field0_0x0;
  IVar2 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                    (param_1,uVar4,param_3.field1_0x8,0);
  self = objc_stub::textContainerForGlyphAtIndex_effectiveRange_(param_1,IVar2,0);
  local_c0 = 0;
  local_b0 = 0x4010000000;
  local_a8 = "";
  uStack_98 = *(undefined8 *)(PTR__CGRectZero_0005ed60 + 8);
  local_a0 = *(undefined8 *)PTR__CGRectZero_0005ed60;
  uStack_88 = *(undefined8 *)(PTR__CGRectZero_0005ed60 + 0x18);
  local_90 = *(undefined8 *)(PTR__CGRectZero_0005ed60 + 0x10);
  local_b8 = &local_c0;
  IVar2 = objc_stub::rectArrayForGlyphRange_inTextContainer_atPoint_
                    (param_1,param_4.field0_0x0,param_4.field1_0x8,IVar2,extraout_x1,self);
  local_e8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_e0 = 0xc2000000;
  local_d8 = 
  ___74__MDLayoutManager_Drawing__drawBlockBackgroundForCharRange_atPoint_color___block_invoke;
  puStack_d0 = &___block_descriptor_40_e8_32r_e24_v32__0__NSValue_8Q16_B24l;
  local_c8 = &local_c0;
  objc_stub::enumerateObjectsUsingBlock_(IVar2,&local_e8);
  objc_stub::lineFragmentPadding(self);
  objc_stub::defaultParagraphIndent(param_1);
  IVar2 = objc_stub::textStorage(param_1);
  IVar2 = objc_stub::string(IVar2);
  IVar2 = objc_stub::paragraphRangeForRange_(IVar2,uVar4,param_3.field1_0x8);
  IVar3 = objc_stub::textStorage(param_1);
  IVar2 = objc_stub::textAttachmentAtIndex_(IVar3,IVar2);
  if ((IVar2 == 0) && (uVar4 != 0)) {
    IVar2 = objc_stub::textStorage(param_1);
    IVar2 = objc_stub::textAttachmentAtIndex_(IVar2,uVar4 - 1);
  }
  dVar6 = extraout_d0 + extraout_d0_00;
  if (IVar2 == 0) {
    dVar5 = 0.0;
    if (uVar4 != 0) {
      IVar2 = objc_stub::textStorage(param_1);
      IVar2 = objc_stub::hasListMarkerAtIndex_(IVar2,uVar4 - 1);
      dVar5 = 0.0;
      if ((int)IVar2 != 0) {
        objc_stub::boundingRectForGlyphRange_inTextContainer_(param_1,uVar4 - 1,1,self);
        dVar5 = (double)_CGRectGetMaxX();
        IVar2 = objc_stub::textStorage(param_1);
        IVar2 = objc_stub::nonHiddenFontAtIndex_(IVar2,uVar4);
        objc_stub::pointSize(IVar2);
        dVar5 = (dVar5 - dVar6) + extraout_d0_05 * -0.5;
      }
    }
  }
  else {
    IVar3 = objc_stub::textStorage(param_1);
    IVar3 = objc_stub::nonHiddenFontAtIndex_(IVar3,uVar4);
    objc_stub::pointSize(IVar3);
    objc_stub::bounds(IVar2);
    dVar5 = in_d2 + 0.0 + extraout_d0_01 * -0.5;
  }
  local_b8[4] = param_4.field0_0x0 + dVar6 + dVar5;
  objc_stub::size(self);
  local_b8[6] = extraout_d0_02 - (dVar5 + dVar6 * 2.0);
  objc_stub::nestedBackgroundOffsetAtIndex_(param_1,uVar4);
  puVar1 = local_b8;
  local_b8[6] = (double)local_b8[6] - extraout_d0_03;
  objc_stub::basePointSize(param_1);
  IVar2 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                    ((ID)&_OBJC_CLASS___NSBezierPath,puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                     extraout_d0_04 * 3.0);
  objc_stub::setFill(param_5);
  objc_stub::fill(IVar2);
  __Block_object_dispose(&local_c0,8);
  return;
}


// ===== MDLayoutManager::rectArrayForInlineDrawingAtGlyphRange:inTextContainer:atPoint: @ 00036dac =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDLayoutManager::rectArrayForInlineDrawingAtGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  ID IVar1;
  ID IVar2;
  double extraout_d0;
  undefined8 extraout_d0_00;
  double dVar3;
  undefined8 in_d2;
  double in_d3;
  ID local_70;
  long local_68;
  
  dVar3 = param_5.field1_0x8;
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = objc_stub::nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint_
                    (param_1,param_5.field0_0x0,dVar3,param_3.field0_0x0,param_3.field1_0x8);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 == 1) {
    IVar2 = objc_stub::characterIndexForGlyphAtIndex_(param_1,param_3.field0_0x0);
    objc_stub::expectedLineHeightAtIndex_(param_1,IVar2);
    IVar2 = objc_stub::firstObject(IVar1);
    objc_stub::CGRectValue(IVar2);
    IVar2 = 0;
    if (extraout_d0 < in_d3) {
      IVar1 = objc_stub::firstObject(IVar1);
      objc_stub::CGRectValue(IVar1);
      local_70 = objc_stub::valueWithCGRect_
                           ((ID)&_OBJC_CLASS___NSValue,extraout_d0_00,dVar3 + (in_d3 - extraout_d0),
                            in_d2,extraout_d0);
      IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_70,1);
      IVar2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_68) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar2);
}


// ===== MDLayoutManager::bezierPathsForRectArray:borderWidth:cornerRadius:roundMiddlePaths:rtl: @ 00036f1c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDLayoutManager::bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl_
             (ID param_1,SEL param_2,ID param_3,CGSize param_4,double param_5,bool param_6,
             bool param_7)

{
  ID IVar1;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  ID local_b0;
  undefined8 *puStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *pcStack_60;
  ID local_58;
  
  local_80 = 0;
  local_70 = 0x3032000000;
  local_68 = ___Block_byref_object_copy_;
  pcStack_60 = ___Block_byref_object_dispose_;
  local_78 = &local_80;
  local_58 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_d0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_c8 = 0xc2000000;
  local_c0 = 
  ___98__MDLayoutManager_Drawing__bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl___block_invoke
  ;
  puStack_b8 = &___block_descriptor_74_e8_32s40r_e24_v32__0__NSValue_8Q16_B24l;
  local_88 = (undefined1)param_6;
  local_87 = (undefined1)param_7;
  local_b0 = param_3;
  puStack_a8 = &local_80;
  local_a0 = param_4.field0_0x0;
  dStack_98 = param_4.field1_0x8;
  local_90 = param_5;
  objc_stub::enumerateObjectsUsingBlock_(param_3,&local_d0);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}


// ===== MDLayoutManager::rectArrayForGlyphRange:inTextContainer:atPoint: @ 000374a4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDLayoutManager::rectArrayForGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  ID IVar1;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  undefined8 *local_98;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *pcStack_60;
  ID local_58;
  
  local_80 = 0;
  local_70 = 0x3032000000;
  local_68 = ___Block_byref_object_copy_;
  pcStack_60 = ___Block_byref_object_dispose_;
  local_78 = &local_80;
  local_58 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_b8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_b0 = 0xc2000000;
  local_a8 = 
  ___75__MDLayoutManager_Drawing__rectArrayForGlyphRange_inTextContainer_atPoint___block_invoke;
  puStack_a0 = &___block_descriptor_56_e8_32r_e43_v48__0_CGRect__CGPoint_dd__CGSize_dd__8_B40l;
  local_98 = &local_80;
  local_90 = param_5.field0_0x0;
  dStack_88 = param_5.field1_0x8;
  objc_stub::
  enumerateEnclosingRectsForGlyphRange_withinSelectedGlyphRange_inTextContainer_usingBlock_
            (param_1,param_3.field0_0x0,param_3.field1_0x8,param_3.field0_0x0,param_3.field1_0x8,
             param_4,&local_b8);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}


// ===== MDLayoutManager::nonCollapsedRectArrayForGlyphRange:inTextContainer:atPoint: @ 00037638 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDLayoutManager::nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  ID IVar1;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  ID local_b8;
  ID local_b0;
  undefined8 *puStack_a8;
  unsigned_long_long local_a0;
  unsigned_long_long uStack_98;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *pcStack_60;
  ID local_58;
  
  local_80 = 0;
  local_70 = 0x3032000000;
  local_68 = ___Block_byref_object_copy_;
  pcStack_60 = ___Block_byref_object_dispose_;
  local_78 = &local_80;
  local_58 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_d8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_d0 = 0xc2000000;
  local_c8 = 
  ___87__MDLayoutManager_Drawing__nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint___block_invoke
  ;
  puStack_c0 = &
               ___block_descriptor_88_e8_32s40s48r_e113_v104__0_CGRect__CGPoint_dd__CGSize_dd__8_CGRect__CGPoint_dd__CGSize_dd__40__NSTextContainer_72__NSRange_QQ_80_B96l
  ;
  local_b8 = param_1;
  local_b0 = param_4;
  puStack_a8 = &local_80;
  local_a0 = param_3.field0_0x0;
  uStack_98 = param_3.field1_0x8;
  local_90 = param_5.field0_0x0;
  dStack_88 = param_5.field1_0x8;
  objc_stub::enumerateLineFragmentsForGlyphRange_usingBlock_
            (param_1,param_3.field0_0x0,param_3.field1_0x8,&local_d8);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}


// ===== MDLayoutManager::rectCollectionForGlyphRange:inTextContainer:atPoint: @ 000378f4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

ID MDLayoutManager::rectCollectionForGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  ID IVar1;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  undefined8 *local_98;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *pcStack_60;
  undefined8 local_58;
  
  local_80 = 0;
  local_70 = 0x3032000000;
  local_68 = ___Block_byref_object_copy_;
  pcStack_60 = ___Block_byref_object_dispose_;
  local_78 = &local_80;
  local_58 = _objc_opt_new(&objc::class_t::SFRectCollection);
  local_b8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_b0 = 0xc2000000;
  local_a8 = 
  ___80__MDLayoutManager_Drawing__rectCollectionForGlyphRange_inTextContainer_atPoint___block_invoke
  ;
  puStack_a0 = &___block_descriptor_56_e8_32r_e43_v48__0_CGRect__CGPoint_dd__CGSize_dd__8_B40l;
  local_98 = &local_80;
  local_90 = param_5.field0_0x0;
  dStack_88 = param_5.field1_0x8;
  objc_stub::
  enumerateEnclosingRectsForGlyphRange_withinSelectedGlyphRange_inTextContainer_usingBlock_
            (param_1,param_3.field0_0x0,param_3.field1_0x8,param_3.field0_0x0,param_3.field1_0x8,
             param_4,&local_b8);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}


// ===== MDLayoutManager::isRangeAtTheStartOfTheTextColumn: @ 00037a58 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

bool MDLayoutManager::isRangeAtTheStartOfTheTextColumn_(ID param_1,SEL param_2,_NSRange param_3)

{
  ID IVar1;
  unsigned_long_long uVar2;
  bool bVar3;
  long lVar4;
  
  uVar2 = param_3.field0_0x0;
  if (uVar2 == 0) {
    bVar3 = 1;
  }
  else {
    IVar1 = objc_stub::textStorage(param_1,uVar2,param_3.field1_0x8);
    IVar1 = objc_stub::string(IVar1);
    lVar4 = uVar2 - 1;
    IVar1 = objc_stub::characterAtIndex_(IVar1,lVar4);
    if ((int)IVar1 == 10) {
      bVar3 = 1;
    }
    else {
      IVar1 = objc_stub::textStorage(param_1);
      IVar1 = objc_stub::hasListMarkerAtIndex_(IVar1,lVar4);
      if ((IVar1 & 1) == 0) {
        IVar1 = objc_stub::textStorage(param_1);
        IVar1 = objc_stub::hasBlockquoteMarkerAtIndex_(IVar1,lVar4);
        bVar3 = (bool)IVar1;
      }
      else {
        bVar3 = 1;
      }
    }
  }
  return bVar3;
}


// ===== MDLayoutManager::isRTLAtIndex: @ 00037b3c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDLayoutManager::isRTLAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::textStorage(param_1);
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                    (IVar1,*(undefined8 *)PTR__PMKDirectionAttributeName_0005e8b8,param_3,0);
  IVar1 = objc_stub::intValue(IVar1);
  return (bool)(*(long *)PTR__PMKDirectionRtlValue_0005e8c8 == (long)(int)IVar1);
}


// ===== MDLayoutManager::expectedLineHeightAtIndex: @ 00037bbc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

double MDLayoutManager::expectedLineHeightAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  
  IVar1 = objc_stub::textStorage(param_1);
  IVar1 = objc_stub::paragraphStyleAtIndex_(IVar1,param_3);
  objc_stub::minimumLineHeight(IVar1);
  objc_stub::lineSpacing(IVar1);
  return (double)(long)(extraout_d0 + extraout_d0_00);
}


// ===== MDLayoutManager::nestedBackgroundOffsetAtIndex: @ 00037c34 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

double MDLayoutManager::nestedBackgroundOffsetAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  double extraout_d0;
  
  objc_stub::baseTabSize(param_1);
  IVar1 = objc_stub::textStorage(param_1);
  IVar1 = objc_stub::calloutNestLevelAtIndex_(IVar1,param_3);
  return extraout_d0 * (double)(long)IVar1;
}


