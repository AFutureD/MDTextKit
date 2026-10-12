// ===== MDLayoutManager::init @ 0001a240 =====

ID MDLayoutManager::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDLayoutManager;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    setStyledRange_(self,0x7fffffffffffffff,0);
  }
  return self;
}

// ===== MDLayoutManager::drawGlyphsForGlyphRange:atPoint: @ 0001a298 =====

void MDLayoutManager::drawGlyphsForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  local_50.super_class = &objc::class_t::MDLayoutManager;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"drawGlyphsForGlyphRange:atPoint:");
  rearrangeAttachmentsViewsForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  return;
}

// ===== MDLayoutManager::drawBackgroundUnderSelectionForGlyphRange:atPoint: @ 0001a310 =====

void MDLayoutManager::drawBackgroundUnderSelectionForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  dVar5 = param_4.field1_0x8;
  dVar4 = param_4.field0_0x0;
  uVar3 = param_3.field1_0x8;
  uVar2 = param_3.field0_0x0;
  IVar1 = showBackgroundGrid(param_1);
  if ((int)IVar1 != 0) {
    drawBackgroundGridForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  }
  drawIndentedCodeBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  drawFencedCodeBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  drawHighlighterBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  drawInlineCodeBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  drawTagsBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  drawInlineMathBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  drawMathBlockBackgroundForGlyphRange_atPoint_(param_1,dVar4,dVar5,uVar2,uVar3);
  return;
}

// ===== MDLayoutManager::drawBackgroundOverSelectionForGlyphRange:atPoint: @ 0001a410 =====

void MDLayoutManager::drawBackgroundOverSelectionForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  drawSearchResultBackgroundForGlyphRange_atPoint_(param_1);
  drawBlockQuoteBackgroundForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  return;
}

// ===== MDLayoutManager::drawBackgroundForGlyphRange:atPoint: @ 0001a464 =====

void MDLayoutManager::drawBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  drawBackgroundUnderSelectionForGlyphRange_atPoint_(param_1);
  local_50.super_class = &objc::class_t::MDLayoutManager;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"drawBackgroundForGlyphRange:atPoint:",param_4.field0_0x0,
                      param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  drawBackgroundOverSelectionForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,param_3.field0_0x0,param_3.field1_0x8);
  return;
}

// ===== MDLayoutManager::fillBackgroundRectArray:count:forCharacterRange:color: @ 0001a4f0 =====

void MDLayoutManager::fillBackgroundRectArray_count_forCharacterRange_color_
               (ID param_1,SEL param_2,const_CGRect__ param_3,unsigned_long_long param_4,
               _NSRange param_5,ID param_6)

{
  
  uVar3 = param_5.field0_0x0;
  if (param_5.field1_0x8 == 1) {
    IVar1 = textStorage(param_1);
    IVar1 = textAttachmentAtIndex_(IVar1,uVar3);
    IVar1 = isViewAttachment(IVar1);
    if ((IVar1 & 1) != 0) {
      return;
    }
  }
  IVar1 = textStorage(param_1);
  IVar1 = attribute_atIndex_effectiveRange_
                    (IVar1,&cf_MDSearchResultBackgroundColor,uVar3,0);
  if (IVar1 == 0) {
    IVar1 = unemphasizedSelectedContentBackgroundColor(NSColor);
    if (param_6 == IVar1) {
      selectionInactiveColor(param_1);
    }
    IVar2 = unemphasizedSelectedContentBackgroundColor(NSColor);
    IVar1 = param_6;
    if (param_6 == IVar2) {
      IVar1 = selectionInactiveColor(param_1);
    }
    IVar1 = colorWithAlphaComponent_(IVar1,0x3fe0000000000000);
    setFill(IVar1);
    local_70.super_class = &objc::class_t::MDLayoutManager;
    local_70.receiver = param_1;
    _objc_msgSendSuper2(&local_70,"fillBackgroundRectArray:count:forCharacterRange:color:",param_3,
                        param_4,uVar3,param_5.field1_0x8,param_6);
    setFill(param_6);
  }
  return;
}

// ===== MDLayoutManager::rangeOfTextAttachmentNearPoint:withDelta: @ 0001a6e4 =====

_NSRange MDLayoutManager::rangeOfTextAttachmentNearPoint_withDelta_
                   (ID param_1,SEL param_2,CGPoint param_3,double param_4)

{
  
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
  IVar1 = textContainers(param_1);
  IVar1 = firstObject(IVar1);
  IVar1 = glyphRangeForBoundingRect_inTextContainer_
                    (param_1,uVar5,dVar7,uVar8,uVar9,IVar1);
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_(param_1,IVar1,extraout_x1,0);
  IVar2 = textStorage(param_1);
  IVar2 = length(IVar2);
  if (IVar2 < IVar1 + extraout_x1_00) {
    uVar3 = 0;
    uVar4 = 0x7fffffffffffffff;
  }
  else {
    IVar2 = textStorage(param_1);
    local_120 = ___60__MDLayoutManager_rangeOfTextAttachmentNearPoint_withDelta___block_invoke;
    local_110 = param_1;
    local_f8 = param_3.field0_0x0;
    dStack_f0 = dVar6;
    local_e8 = dVar10;
    enumerateAttribute_inRange_options_usingBlock_
              (IVar2,_NSAttachmentAttributeName,IVar1,extraout_x1_00,0,
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

CGRect MDLayoutManager::attachmentFrameForGlyphAtIndex_atPoint_
                 (ID param_1,SEL param_2,unsigned_long_long param_3,CGPoint param_4)

{
  CGRect CVar4;
  
  dVar1 = param_4.field1_0x8;
  lineFragmentRectForGlyphAtIndex_effectiveRange_(param_1,param_3,0);
  dVar2 = dVar1;
  locationForGlyphAtIndex_(param_1,param_3);
  dVar3 = dVar2;
  attachmentSizeForGlyphAtIndex_(param_1,param_3);
  CVar4.field0_0x0.field0_0x0 = extraout_d0_00 + param_4.field0_0x0 + extraout_d0;
  CVar4.field0_0x0.field1_0x8 = dVar2 + param_4.field1_0x8 + (dVar1 - dVar3);
  CVar4.field1_0x10.field1_0x8 = dVar3;
  CVar4.field1_0x10.field0_0x0 = extraout_d0_01;
  return CVar4;
}

// ===== MDLayoutManager::attachmentFrameForCharacterAtIndex:atPoint: @ 0001ab14 =====

CGRect MDLayoutManager::attachmentFrameForCharacterAtIndex_atPoint_
                 (ID param_1,SEL param_2,unsigned_long_long param_3,CGPoint param_4)

{
  CGRect CVar3;
  
  dVar2 = param_4.field1_0x8;
  IVar1 = glyphRangeForCharacterRange_actualCharacterRange_(param_1,param_3,1,0);
  attachmentFrameForGlyphAtIndex_atPoint_(param_1,param_4.field0_0x0,IVar1);
  CVar3.field0_0x0.field1_0x8 = dVar2;
  CVar3.field0_0x0.field0_0x0 = extraout_d0;
  CVar3.field1_0x10.field1_0x8 = in_d3;
  CVar3.field1_0x10.field0_0x0 = in_d2;
  return CVar3;
}

// ===== MDLayoutManager::rearrangeAttachmentsViewsForCharacterRange:atPoint: @ 0001ab5c =====

void MDLayoutManager::rearrangeAttachmentsViewsForCharacterRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = glyphRangeForCharacterRange_actualCharacterRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  rearrangeAttachmentsViewsForGlyphRange_atPoint_
            (param_1,param_4.field0_0x0,param_4.field1_0x8,IVar1,extraout_x1);
  return;
}

// ===== MDLayoutManager::rearrangeAttachmentsViewsForGlyphRange:atPoint: @ 0001aba4 =====

void MDLayoutManager::rearrangeAttachmentsViewsForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  if (((0.0 <= param_4.field0_0x0) && (0.0 <= param_4.field1_0x8)) &&
     (IVar1 = preventAttachmentViewFromRearranging(param_1), (IVar1 & 1) == 0)) {
    IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
    self = textStorage(param_1);
    local_68 = ___66__MDLayoutManager_rearrangeAttachmentsViewsForGlyphRange_atPoint___block_invoke;
    local_58 = param_1;
    local_50 = param_4.field0_0x0;
    dStack_48 = param_4.field1_0x8;
    enumerateAttribute_inRange_options_usingBlock_
              (self,_NSAttachmentAttributeName,IVar1,extraout_x1,
               0x100000,&local_78);
  }
  return;
}

// ===== MDLayoutManager::layoutManager:shouldSetLineFragmentRect:lineFragmentUsedRect:baselineOffset:inTextContainer:forGlyphRange: @ 0001ae4c =====

bool MDLayoutManager::
     layoutManager_shouldSetLineFragmentRect_lineFragmentUsedRect_baselineOffset_inTextContainer_forGlyphRange_
               (ID param_1,SEL param_2,ID param_3,INOUT_CGRect__ param_4,INOUT_CGRect__ param_5,
               INOUT_double__ param_6,ID param_7,_NSRange param_8)

{
  
  fixedBaselineForBaselineOffset_lineFragment_forGlyphRange_
            (param_1,*param_6,(param_4->field0_0x0).field0_0x0,(param_4->field0_0x0).field1_0x8,
             (param_4->field1_0x10).field0_0x0,(param_4->field1_0x10).field1_0x8,param_8.field1_0x8,
             in_stack_00000008);
  uVar7 = (uint)((double)(long)*param_6 != (double)(long)extraout_d0);
  if ((double)(long)*param_6 != (double)(long)extraout_d0) {
    *param_6 = extraout_d0;
  }
  IVar2 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_3,param_8.field1_0x8,in_stack_00000008,0);
  IVar3 = textContainers(param_1);
  IVar3 = count(IVar3);
  local_78 = (uint)(1 < IVar3);
  IVar3 = 0;
  uVar8 = 0;
  if (IVar2 < IVar2 + extraout_x1) {
    local_74 = 1;
    lVar9 = extraout_x1;
    IVar10 = IVar2;
    do {
      IVar4 = textStorage(param_3);
      IVar4 = string(IVar4);
      IVar4 = characterAtIndex_(IVar4,IVar10);
      if ((int)IVar4 == 0xfffc) {
        if ((IVar3 & 1) == 0) {
LAB_0001b004:
          IVar3 = textStorage(param_3);
          IVar3 = string(IVar3);
          IVar3 = characterAtIndex_(IVar3,IVar10);
          if ((int)IVar3 == 0xfffc) {
            IVar3 = textStorage(param_3);
            IVar3 = textAttachmentAtIndex_(IVar3,IVar10);
            uVar5 = _objc_opt_class(&objc::class_t::SFTextAttachment);
            uVar6 = _objc_opt_isKindOfClass(IVar3,uVar5);
            if ((uVar6 & 1) != 0) {
              IVar4 = wantAttachmentBaselineOffset(IVar3);
              local_78 = (uint)IVar4 ^ 1 | local_78;
            }
            IVar3 = isViewAttachment(IVar3);
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
        IVar4 = textStorage(param_3);
        IVar4 = string(IVar4);
        IVar4 = characterAtIndex_(IVar4,IVar10);
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
    IVar3 = textStorage(param_3);
    IVar2 = attributesAtIndex_effectiveRange_(IVar3,IVar2,0);
    IVar3 = objectForKeyedSubscript_
                      (IVar2,_NSFontAttributeName);
    IVar2 = objectForKeyedSubscript_
                      (IVar2,_NSParagraphStyleAttributeName);
    minimumLineHeight(IVar2);
    lineSpacing(IVar2);
    if ((local_74 != 0) &&
       ((double)(long)(extraout_d0_00 + extraout_d0_01) <
        (double)(long)(param_5->field1_0x10).field1_0x8)) {
      descender(IVar3);
      (param_4->field1_0x10).field1_0x8 =
           (param_4->field1_0x10).field1_0x8 + (double)(long)ABS(extraout_d0_02);
      descender(IVar3);
      (param_5->field1_0x10).field1_0x8 =
           (param_5->field1_0x10).field1_0x8 + (double)(long)ABS(extraout_d0_03);
    }
    if ((uVar8 & 1) != 0) {
      descender(IVar3);
      dVar11 = extraout_d0_01 + (double)(long)ABS(extraout_d0_04);
      (param_4->field1_0x10).field1_0x8 = (param_4->field1_0x10).field1_0x8 + dVar11;
      (param_5->field1_0x10).field1_0x8 = (param_5->field1_0x10).field1_0x8 + dVar11;
      dVar12 = *param_6;
      *param_6 = dVar11 + dVar12;
      if (local_74 != 0) {
        descender(IVar3);
        *param_6 = dVar11 + dVar12 + ABS(extraout_d0_05);
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}

// ===== MDLayoutManager::fixedBaselineForBaselineOffset:lineFragment:forGlyphRange: @ 0001b28c =====

double MDLayoutManager::fixedBaselineForBaselineOffset_lineFragment_forGlyphRange_
                 (ID param_1,SEL param_2,double param_3,CGRect param_4,_NSRange param_5)

{
  
  IVar2 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3,param_4.field0_0x0.field0_0x0,param_4.field0_0x0.field1_0x8,
                     param_4.field1_0x10.field0_0x0,param_5.field0_0x0,param_5.field1_0x8,0);
  lVar6 = IVar2 + extraout_x1 + -1;
  IVar3 = textStorage(param_1);
  IVar3 = string(IVar3);
  IVar3 = characterAtIndex_(IVar3,lVar6);
  IVar4 = textStorage(param_1);
  IVar4 = isRangeInsideBlockCode_(IVar4,IVar2,1);
  if ((IVar4 & 1) == 0) {
    IVar4 = textStorage(param_1);
    IVar4 = paragraphStyleAtIndex_(IVar4,IVar2);
    IVar5 = defaultFont(param_1);
    lVar1 = IVar2 + extraout_x1 + -2;
    if (lVar6 == 0 || (int)IVar3 != 10) {
      lVar1 = lVar6;
    }
    IVar2 = textStorage(param_1);
    IVar2 = longestRangeForAttribute_atIndex_
                      (IVar2,_PMKHeadingAttributeName,lVar1);
    if (IVar2 != 0x7fffffffffffffff) {
      IVar5 = textStorage(param_1);
      IVar5 = nonHiddenFontAtIndex_(IVar5,IVar2);
    }
    ascender(IVar5);
    descender(IVar5);
    ascender(IVar5);
    minimumLineHeight(IVar4);
    lineSpacing(IVar4);
    dVar7 = (double)(long)(extraout_d0_02 + extraout_d0_03);
    if ((int)IVar3 == 10) {
      paragraphSpacing(IVar4);
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

bool MDLayoutManager::showBackgroundGrid(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_showBackgroundGrid) & 1;
}

// ===== MDLayoutManager::setShowBackgroundGrid: @ 0001b4d4 =====

void MDLayoutManager::setShowBackgroundGrid_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_showBackgroundGrid) = (char)param_3;
  return;
}

// ===== MDLayoutManager::preventAttachmentViewFromRearranging @ 0001b4e4 =====

bool MDLayoutManager::preventAttachmentViewFromRearranging(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_preventAttachmentViewFromRearranging) & 1;
}

// ===== MDLayoutManager::setPreventAttachmentViewFromRearranging: @ 0001b4f8 =====

void MDLayoutManager::setPreventAttachmentViewFromRearranging_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_preventAttachmentViewFromRearranging) = (char)param_3;
  return;
}

// ===== MDLayoutManager::styledRange @ 0001b508 =====

_NSRange MDLayoutManager::styledRange(ID param_1,SEL param_2)

{
  
  _objc_copyStruct(&local_20,param_1 + (long)_styledRange,0x10,1,0);
  return local_20;
}

// ===== MDLayoutManager::setStyledRange: @ 0001b548 =====

void MDLayoutManager::setStyledRange_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uStack_18 = param_3.field1_0x8;
  local_20 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + (long)_styledRange,&local_20,0x10,1,0);
  return;
}

// ===== MDLayoutManager::defaultLineSpacing @ 0001b584 =====

double MDLayoutManager::defaultLineSpacing(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_defaultLineSpacing);
}

// ===== MDLayoutManager::setDefaultLineSpacing: @ 0001b594 =====

void MDLayoutManager::setDefaultLineSpacing_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_defaultLineSpacing) = param_3;
  return;
}

// ===== MDLayoutManager::defaultParagraphIndent @ 0001b5a4 =====

double MDLayoutManager::defaultParagraphIndent(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_defaultParagraphIndent);
}

// ===== MDLayoutManager::setDefaultParagraphIndent: @ 0001b5b4 =====

void MDLayoutManager::setDefaultParagraphIndent_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_defaultParagraphIndent) = param_3;
  return;
}

// ===== MDLayoutManager::baseTabSize @ 0001b5c4 =====

double MDLayoutManager::baseTabSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_baseTabSize);
}

// ===== MDLayoutManager::setBaseTabSize: @ 0001b5d4 =====

void MDLayoutManager::setBaseTabSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_baseTabSize) = param_3;
  return;
}

// ===== MDLayoutManager::basePointSize @ 0001b5e4 =====

double MDLayoutManager::basePointSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_basePointSize);
}

// ===== MDLayoutManager::setBasePointSize: @ 0001b5f4 =====

void MDLayoutManager::setBasePointSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_basePointSize) = param_3;
  return;
}

// ===== MDLayoutManager::columnSize @ 0001b604 =====

double MDLayoutManager::columnSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_columnSize);
}

// ===== MDLayoutManager::setColumnSize: @ 0001b614 =====

void MDLayoutManager::setColumnSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_columnSize) = param_3;
  return;
}

// ===== MDLayoutManager::gutterSize @ 0001b624 =====

double MDLayoutManager::gutterSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_gutterSize);
}

// ===== MDLayoutManager::setGutterSize: @ 0001b634 =====

void MDLayoutManager::setGutterSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_gutterSize) = param_3;
  return;
}

// ===== MDLayoutManager::defaultFont @ 0001b644 =====

ID MDLayoutManager::defaultFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_defaultFont);
}

// ===== MDLayoutManager::setDefaultFont: @ 0001b654 =====

void MDLayoutManager::setDefaultFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_defaultFont) = param_3;
  return;
}

// ===== MDLayoutManager::selectionInactiveColor @ 0001b660 =====

ID MDLayoutManager::selectionInactiveColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_selectionInactiveColor);
}

// ===== MDLayoutManager::setSelectionInactiveColor: @ 0001b670 =====

void MDLayoutManager::setSelectionInactiveColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_selectionInactiveColor) = param_3;
  return;
}

// ===== MDLayoutManager::.cxx_destruct @ 0001b67c =====

void MDLayoutManager::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_selectionInactiveColor) = 0;
  *(undefined8 *)(param_1 + (long)_defaultFont) = 0;
  return;
}

// ===== MDLayoutManager::drawIndentedCodeBackgroundForGlyphRange:atPoint: @ 000344e0 =====

void MDLayoutManager::drawIndentedCodeBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = textStorage(param_1);
  local_80 = 
  ___76__MDLayoutManager_Drawing__drawIndentedCodeBackgroundForGlyphRange_atPoint___block_invoke;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,_PMKIndentedCodeAttributeName,IVar1,extraout_x1,0,
             &local_90);
  return;
}

// ===== MDLayoutManager::drawFencedCodeBackgroundForGlyphRange:atPoint: @ 00034764 =====

void MDLayoutManager::drawFencedCodeBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  self = textStorage(param_1);
  local_68 = 
  ___74__MDLayoutManager_Drawing__drawFencedCodeBackgroundForGlyphRange_atPoint___block_invoke;
  local_58 = param_1;
  local_50 = param_4.field0_0x0;
  dStack_48 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,_PMKFencedCodeAttributeName,IVar1,extraout_x1,0,
             &local_78);
  return;
}

// ===== MDLayoutManager::drawInlineCodeBackgroundForGlyphRange:atPoint: @ 000349b4 =====

void MDLayoutManager::drawInlineCodeBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = textStorage(param_1);
  local_80 = 
  ___74__MDLayoutManager_Drawing__drawInlineCodeBackgroundForGlyphRange_atPoint___block_invoke;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,_PMKCodeAttributeName,IVar1,extraout_x1,0,&local_90);
  return;
}

// ===== MDLayoutManager::drawMathBlockBackgroundForGlyphRange:atPoint: @ 00034ccc =====

void MDLayoutManager::drawMathBlockBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  self = textStorage(param_1);
  local_68 = 
  ___73__MDLayoutManager_Drawing__drawMathBlockBackgroundForGlyphRange_atPoint___block_invoke;
  local_58 = param_1;
  local_50 = param_4.field0_0x0;
  dStack_48 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,_PMKMathBlockAttributeName,IVar1,extraout_x1,0,
             &local_78);
  return;
}

// ===== MDLayoutManager::drawInlineMathBackgroundForGlyphRange:atPoint: @ 00034f1c =====

void MDLayoutManager::drawInlineMathBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = textStorage(param_1);
  local_80 = 
  ___74__MDLayoutManager_Drawing__drawInlineMathBackgroundForGlyphRange_atPoint___block_invoke;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,_PMKMathSpanAttributeName,IVar1,extraout_x1,0,
             &local_90);
  return;
}

// ===== MDLayoutManager::drawTagsBackgroundForGlyphRange:atPoint: @ 0003538c =====

void MDLayoutManager::drawTagsBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = textStorage(param_1);
  local_80 = ___68__MDLayoutManager_Drawing__drawTagsBackgroundForGlyphRange_atPoint___block_invoke;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,&cf_MDTagBackgroundColor,IVar1,extraout_x1,0,&local_90);
  return;
}

// ===== MDLayoutManager::drawHighlighterBackgroundForGlyphRange:atPoint: @ 00035684 =====

void MDLayoutManager::drawHighlighterBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = textStorage(param_1);
  local_80 = 
  ___75__MDLayoutManager_Drawing__drawHighlighterBackgroundForGlyphRange_atPoint___block_invoke;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,&cf_MDHighlighterBackgroundColor,IVar1,extraout_x1,0,&local_90);
  return;
}

// ===== MDLayoutManager::drawSearchResultBackgroundForGlyphRange:atPoint: @ 00035974 =====

void MDLayoutManager::drawSearchResultBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
  IVar2 = textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
  self = textStorage(param_1);
  local_80 = 
  ___76__MDLayoutManager_Drawing__drawSearchResultBackgroundForGlyphRange_atPoint___block_invoke;
  local_70 = param_1;
  local_68 = IVar2;
  local_60 = param_4.field0_0x0;
  dStack_58 = param_4.field1_0x8;
  enumerateAttribute_inRange_options_usingBlock_
            (self,&cf_MDSearchResultBackgroundColor,IVar1,extraout_x1,0,&local_90);
  return;
}

// ===== MDLayoutManager::drawBlockQuoteBackgroundForGlyphRange:atPoint: @ 00035c60 =====

void MDLayoutManager::drawBlockQuoteBackgroundForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  if (param_3.field1_0x8 != 0) {
    _objc_initWeak(auStack_78,param_1);
    IVar1 = textContainerForGlyphAtIndex_effectiveRange_(param_1,param_3.field0_0x0,0);
    IVar2 = characterRangeForGlyphRange_actualGlyphRange_
                      (param_1,param_3.field0_0x0,param_3.field1_0x8,0);
    IVar3 = textStorage(param_1);
    IVar2 = extendRangeToFullyContainBlockquote_(IVar3,IVar2,extraout_x1);
    columnSize(param_1);
    columnSize(param_1);
    IVar3 = textStorage(param_1);
    local_f8 = 
    ___74__MDLayoutManager_Drawing__drawBlockQuoteBackgroundForGlyphRange_atPoint___block_invoke;
    local_e8 = param_1;
    local_e0 = IVar1;
    _objc_copyWeak(auStack_d0,auStack_78);
    local_c8 = param_4.field0_0x0;
    dStack_c0 = param_4.field1_0x8;
    local_b8 = extraout_d0 * 0.5;
    dStack_b0 = extraout_d0_00 * 0.18;
    enumerateBlockquoteInRange_options_listBlock_listItemBlock_
              (IVar3,IVar2,extraout_x1_00,0,&local_108,0);
    _objc_destroyWeak(auStack_d0);
    __Block_object_dispose(&local_a8,8);
    _objc_destroyWeak(auStack_78);
  }
  return;
}

// ===== MDLayoutManager::drawBackgroundGridForGlyphRange:atPoint: @ 000366cc =====

void MDLayoutManager::drawBackgroundGridForGlyphRange_atPoint_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4)

{
  
  dVar9 = param_4.field1_0x8;
  IVar2 = textContainerForGlyphAtIndex_effectiveRange_
                    (param_1,param_4.field0_0x0,param_3.field0_0x0,0);
  usedRectForTextContainer_(param_1,IVar2);
  lineFragmentPadding(IVar2);
  lineFragmentPadding(IVar2);
  baseTabSize(param_1);
  lVar3 = (long)((in_d2 + extraout_d0_01 * -2.0) / extraout_d0_02);
  if (-1 < lVar3) {
    dVar9 = (double)(float)(int)(param_4.field1_0x8 + dVar9);
    dVar10 = (double)(float)(int)in_d3;
    lVar4 = -1;
    do {
      uVar1 = (int)lVar4 + 1;
      columnSize(param_1);
      gutterSize(param_1);
      columnSize(param_1);
      dVar11 = (double)(float)(int)(extraout_d0_00 + extraout_d0 +
                                   (extraout_d0_03 + extraout_d0_04) * (double)uVar1);
      IVar2 = bezierPathWithRect_
                        (NSBezierPath,dVar11,dVar9,extraout_d0_05,dVar10);
      uVar5 = 0x3feeb851eb851eb8;
      uVar6 = 0x3feeb851eb851eb8;
      if ((uVar1 & 1) == 0) {
        uVar5 = local_a8;
        uVar6 = 0x3ff0000000000000;
      }
      self = colorWithRed_green_blue_alpha_
                       (NSColor,uVar5,0x3feeb851eb851eb8,uVar6,0x3ff0000000000000
                       );
      setFill(self);
      fill(IVar2);
      dVar7 = dVar9;
      uVar5 = extraout_d0_05;
      dVar8 = dVar10;
      uVar6 = _CGRectInset(dVar11,dVar9,extraout_d0_05,dVar10,0x3fe0000000000000,0x3fe0000000000000)
      IVar2 = colorWithRed_green_blue_alpha_
                        (NSColor,0x3feccccccccccccd,0x3fe999999999999a,
                         0x3ff0000000000000,0x3ff0000000000000);
      setStroke(IVar2);
      IVar2 = bezierPathWithRect_
                        (NSBezierPath,uVar6,dVar7,uVar5,dVar8);
      stroke(IVar2);
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar3);
  }
  return;
}

// ===== MDLayoutManager::drawBlockBackgroundForCharRange:atPoint:color: @ 0003693c =====

void MDLayoutManager::drawBlockBackgroundForCharRange_atPoint_color_
               (ID param_1,SEL param_2,_NSRange param_3,CGPoint param_4,ID param_5)

{
  
  uVar4 = param_3.field0_0x0;
  IVar2 = glyphRangeForCharacterRange_actualCharacterRange_
                    (param_1,uVar4,param_3.field1_0x8,0);
  self = textContainerForGlyphAtIndex_effectiveRange_(param_1,IVar2,0);
  uStack_98 = *(undefined8 *)(PTR__CGRectZero + 8);
  local_a0 = _CGRectZero;
  uStack_88 = *(undefined8 *)(PTR__CGRectZero + 0x18);
  local_90 = *(undefined8 *)(PTR__CGRectZero + 0x10);
  IVar2 = rectArrayForGlyphRange_inTextContainer_atPoint_
                    (param_1,param_4.field0_0x0,param_4.field1_0x8,IVar2,extraout_x1,self);
  local_d8 = 
  ___74__MDLayoutManager_Drawing__drawBlockBackgroundForCharRange_atPoint_color___block_invoke;
  enumerateObjectsUsingBlock_(IVar2,&local_e8);
  lineFragmentPadding(self);
  defaultParagraphIndent(param_1);
  IVar2 = textStorage(param_1);
  IVar2 = string(IVar2);
  IVar2 = paragraphRangeForRange_(IVar2,uVar4,param_3.field1_0x8);
  IVar3 = textStorage(param_1);
  IVar2 = textAttachmentAtIndex_(IVar3,IVar2);
  if ((IVar2 == 0) && (uVar4 != 0)) {
    IVar2 = textStorage(param_1);
    IVar2 = textAttachmentAtIndex_(IVar2,uVar4 - 1);
  }
  dVar6 = extraout_d0 + extraout_d0_00;
  if (IVar2 == 0) {
    dVar5 = 0.0;
    if (uVar4 != 0) {
      IVar2 = textStorage(param_1);
      IVar2 = hasListMarkerAtIndex_(IVar2,uVar4 - 1);
      dVar5 = 0.0;
      if ((int)IVar2 != 0) {
        boundingRectForGlyphRange_inTextContainer_(param_1,uVar4 - 1,1,self);
        dVar5 = (double)_CGRectGetMaxX();
        IVar2 = textStorage(param_1);
        IVar2 = nonHiddenFontAtIndex_(IVar2,uVar4);
        pointSize(IVar2);
        dVar5 = (dVar5 - dVar6) + extraout_d0_05 * -0.5;
      }
    }
  }
  else {
    IVar3 = textStorage(param_1);
    IVar3 = nonHiddenFontAtIndex_(IVar3,uVar4);
    pointSize(IVar3);
    bounds(IVar2);
    dVar5 = in_d2 + 0.0 + extraout_d0_01 * -0.5;
  }
  local_b8[4] = param_4.field0_0x0 + dVar6 + dVar5;
  size(self);
  local_b8[6] = extraout_d0_02 - (dVar5 + dVar6 * 2.0);
  nestedBackgroundOffsetAtIndex_(param_1,uVar4);
  puVar1 = local_b8;
  local_b8[6] = (double)local_b8[6] - extraout_d0_03;
  basePointSize(param_1);
  IVar2 = bezierPathWithRoundedRect_cornerRadius_
                    (NSBezierPath,puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                     extraout_d0_04 * 3.0);
  setFill(param_5);
  fill(IVar2);
  __Block_object_dispose(&local_c0,8);
  return;
}

// ===== MDLayoutManager::rectArrayForInlineDrawingAtGlyphRange:inTextContainer:atPoint: @ 00036dac =====

ID MDLayoutManager::rectArrayForInlineDrawingAtGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  
  dVar3 = param_5.field1_0x8;
  IVar1 = nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint_
                    (param_1,param_5.field0_0x0,dVar3,param_3.field0_0x0,param_3.field1_0x8);
  IVar2 = count(IVar1);
  if (IVar2 == 1) {
    IVar2 = characterIndexForGlyphAtIndex_(param_1,param_3.field0_0x0);
    expectedLineHeightAtIndex_(param_1,IVar2);
    IVar2 = firstObject(IVar1);
    CGRectValue(IVar2);
    IVar2 = 0;
    if (extraout_d0 < in_d3) {
      IVar1 = firstObject(IVar1);
      CGRectValue(IVar1);
      local_70 = valueWithCGRect_
                           (NSValue,extraout_d0_00,dVar3 + (in_d3 - extraout_d0),
                            in_d2,extraout_d0);
      IVar1 = arrayWithObjects_count_(NSArray,&local_70,1);
      IVar2 = 0;
    }
  }
    return IVar1;
  }
}

// ===== MDLayoutManager::bezierPathsForRectArray:borderWidth:cornerRadius:roundMiddlePaths:rtl: @ 00036f1c =====

ID MDLayoutManager::bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl_
             (ID param_1,SEL param_2,ID param_3,CGSize param_4,double param_5,bool param_6,
             bool param_7)

{
  
  local_58 = array(NSMutableArray);
  local_c0 = 
  ___98__MDLayoutManager_Drawing__bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl___block_invoke
  local_88 = (undefined1)param_6;
  local_87 = (undefined1)param_7;
  local_b0 = param_3;
  local_a0 = param_4.field0_0x0;
  dStack_98 = param_4.field1_0x8;
  local_90 = param_5;
  enumerateObjectsUsingBlock_(param_3,&local_d0);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}

// ===== MDLayoutManager::rectArrayForGlyphRange:inTextContainer:atPoint: @ 000374a4 =====

ID MDLayoutManager::rectArrayForGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  
  local_58 = array(NSMutableArray);
  local_a8 = 
  ___75__MDLayoutManager_Drawing__rectArrayForGlyphRange_inTextContainer_atPoint___block_invoke;
  local_90 = param_5.field0_0x0;
  dStack_88 = param_5.field1_0x8;
  
  enumerateEnclosingRectsForGlyphRange_withinSelectedGlyphRange_inTextContainer_usingBlock_
            (param_1,param_3.field0_0x0,param_3.field1_0x8,param_3.field0_0x0,param_3.field1_0x8,
             param_4,&local_b8);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}

// ===== MDLayoutManager::nonCollapsedRectArrayForGlyphRange:inTextContainer:atPoint: @ 00037638 =====

ID MDLayoutManager::nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  
  local_58 = array(NSMutableArray);
  local_c8 = 
  ___87__MDLayoutManager_Drawing__nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint___block_invoke
  local_b8 = param_1;
  local_b0 = param_4;
  local_a0 = param_3.field0_0x0;
  uStack_98 = param_3.field1_0x8;
  local_90 = param_5.field0_0x0;
  dStack_88 = param_5.field1_0x8;
  enumerateLineFragmentsForGlyphRange_usingBlock_
            (param_1,param_3.field0_0x0,param_3.field1_0x8,&local_d8);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}

// ===== MDLayoutManager::rectCollectionForGlyphRange:inTextContainer:atPoint: @ 000378f4 =====

ID MDLayoutManager::rectCollectionForGlyphRange_inTextContainer_atPoint_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,CGPoint param_5)

{
  
  local_58 = _objc_opt_new(&objc::class_t::SFRectCollection);
  local_a8 = 
  ___80__MDLayoutManager_Drawing__rectCollectionForGlyphRange_inTextContainer_atPoint___block_invoke
  local_90 = param_5.field0_0x0;
  dStack_88 = param_5.field1_0x8;
  
  enumerateEnclosingRectsForGlyphRange_withinSelectedGlyphRange_inTextContainer_usingBlock_
            (param_1,param_3.field0_0x0,param_3.field1_0x8,param_3.field0_0x0,param_3.field1_0x8,
             param_4,&local_b8);
  IVar1 = local_78[5];
  __Block_object_dispose(&local_80,8);
  return IVar1;
}

// ===== MDLayoutManager::isRangeAtTheStartOfTheTextColumn: @ 00037a58 =====

bool MDLayoutManager::isRangeAtTheStartOfTheTextColumn_(ID param_1,SEL param_2,_NSRange param_3)

{
  
  uVar2 = param_3.field0_0x0;
  if (uVar2 == 0) {
    bVar3 = 1;
  }
  else {
    IVar1 = textStorage(param_1,uVar2,param_3.field1_0x8);
    IVar1 = string(IVar1);
    lVar4 = uVar2 - 1;
    IVar1 = characterAtIndex_(IVar1,lVar4);
    if ((int)IVar1 == 10) {
      bVar3 = 1;
    }
    else {
      IVar1 = textStorage(param_1);
      IVar1 = hasListMarkerAtIndex_(IVar1,lVar4);
      if ((IVar1 & 1) == 0) {
        IVar1 = textStorage(param_1);
        IVar1 = hasBlockquoteMarkerAtIndex_(IVar1,lVar4);
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

bool MDLayoutManager::isRTLAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  
  IVar1 = textStorage(param_1);
  IVar1 = attribute_atIndex_effectiveRange_
                    (IVar1,_PMKDirectionAttributeName,param_3,0);
  IVar1 = intValue(IVar1);
  return (bool)(*(long *)PTR__PMKDirectionRtlValue == (long)(int)IVar1);
}

// ===== MDLayoutManager::expectedLineHeightAtIndex: @ 00037bbc =====

double MDLayoutManager::expectedLineHeightAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  
  IVar1 = textStorage(param_1);
  IVar1 = paragraphStyleAtIndex_(IVar1,param_3);
  minimumLineHeight(IVar1);
  lineSpacing(IVar1);
  return (double)(long)(extraout_d0 + extraout_d0_00);
}

// ===== MDLayoutManager::nestedBackgroundOffsetAtIndex: @ 00037c34 =====

double MDLayoutManager::nestedBackgroundOffsetAtIndex_
                 (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  
  baseTabSize(param_1);
  IVar1 = textStorage(param_1);
  IVar1 = calloutNestLevelAtIndex_(IVar1,param_3);
  return extraout_d0 * (double)(long)IVar1;
}

