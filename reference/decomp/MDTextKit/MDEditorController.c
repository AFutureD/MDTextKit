// ===== MDEditorController::init @ 0000d804 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorController::init(ID param_1,SEL param_2)

{
  ID self;
  undefined8 uVar1;
  ID IVar2;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDEditorController;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(&objc::class_t::MDAttributedStringRenderer);
    objc_stub::setAttributedStringRenderer_(self,uVar1);
    uVar1 = _objc_opt_new(&objc::class_t::MDEditorBehaviourController);
    objc_stub::setEditorBehaviourController_(self,uVar1);
    uVar1 = _objc_opt_new(&objc::class_t::MDAttributedStringDiffer);
    objc_stub::setAttrStringDiffer_(self,uVar1);
    IVar2 = objc_stub::attrStringDiffer(self);
    objc_stub::setIgnoreAttachments_(IVar2,1);
    IVar2 = objc_stub::attrStringDiffer(self);
    objc_stub::setIgnoreColorInCodeBlocks_(IVar2,1);
    objc_stub::setUseDiff_(self,1);
  }
  return self;
}


// ===== MDEditorController::loadString:intoTextView: @ 0000d90c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::loadString_intoTextView_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
  IVar2 = objc_stub::initWithString_(IVar2,param_3);
  objc_stub::setAttributedString_(IVar1,IVar2);
  objc_stub::performStylingInTextView_withAutomaticTextChanges_(param_1,param_4,0);
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::length(IVar1);
  objc_stub::rearrangeAttachmentsViewsInTextView_range_(param_1,param_4,0,IVar1);
  IVar1 = objc_stub::undoManager(param_4);
  objc_stub::removeAllActions(IVar1);
  return;
}


// ===== MDEditorController::styledAttributedStringFromString: @ 0000da10 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDEditorController::styledAttributedStringFromString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::attributedStringRenderer(param_1);
  IVar1 = objc_stub::styledAttributedStringFromString_(IVar1,param_3);
  IVar2 = objc_stub::textAttachmentConfigurator(param_1);
  objc_stub::
  validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset_
            (param_1,IVar2,IVar1,0,0);
  IVar2 = objc_stub::autoHideMarkdown(param_1);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::length(IVar1);
    objc_stub::hideMarkdownInRange_inAttributedString_(param_1,0,IVar2,IVar1);
  }
  return IVar1;
}


// ===== MDEditorController::performStylingInTextView: @ 0000dad8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::performStylingInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::performStylingInTextView_withAutomaticTextChanges_(param_1,param_3,1);
  return;
}


// ===== MDEditorController::performStylingInTextView:withAutomaticTextChanges: @ 0000dae0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x1c bytes */

void MDEditorController::performStylingInTextView_withAutomaticTextChanges_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID self;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  ID local_d0;
  ID IStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  char *local_68;
  ID local_60;
  
  if (param_4 != 0) {
    objc_stub::performAutomaticTextChangesInTextView_(param_1,param_3);
  }
  local_80 = 0;
  local_70 = 0x3010000000;
  local_68 = "";
  puStack_78 = &local_80;
  local_60 = objc_stub::selectedRange(param_3);
  local_b0 = 0;
  local_a0 = 0x3010000000;
  local_98 = "";
  uStack_88 = 0;
  local_90 = 0x7fffffffffffffff;
  puStack_a8 = &local_b0;
  self = objc_stub::textStorage(param_3);
  local_f0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_e8 = 0xc2000000;
  local_e0 = 
  ___72__MDEditorController_performStylingInTextView_withAutomaticTextChanges___block_invoke;
  puStack_d8 = &
               ___block_descriptor_64_e8_32s40s48r56r_e50_v32__0__NSMutableAttributedString_8__NSRange_QQ_16l
  ;
  local_d0 = param_3;
  IStack_c8 = param_1;
  local_c0 = &local_80;
  puStack_b8 = &local_b0;
  objc_stub::parseChangesUsingBlock_(self,&local_f0);
  __Block_object_dispose(&local_b0,8);
  __Block_object_dispose(&local_80,8);
  return;
}


// ===== MDEditorController::invalidateDisplayForStyledRange:inTextView: @ 0000e370 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::invalidateDisplayForStyledRange_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  ulong uVar4;
  unsigned_long_long uVar5;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined1 auVar6 [16];
  
  uVar5 = param_3.field1_0x8;
  uVar4 = param_3.field0_0x0;
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::length(IVar1);
  if (uVar4 < IVar1) {
    IVar1 = objc_stub::textStorage(param_4);
    IVar1 = objc_stub::string(IVar1);
    IVar1 = objc_stub::characterAtIndex_(IVar1,uVar4);
    if ((int)IVar1 == 10) {
      objc_stub::setNeedsDisplay(param_4);
      return;
    }
  }
  IVar1 = objc_stub::enclosingScrollView(param_4);
  objc_stub::documentVisibleRect(IVar1);
  IVar1 = objc_stub::layoutManager(param_4);
  IVar2 = objc_stub::textContainer(param_4);
  IVar1 = objc_stub::glyphRangeForBoundingRectWithoutAdditionalLayout_inTextContainer_
                    (IVar1,extraout_d0,in_d1,in_d2,in_d3,IVar2);
  IVar2 = objc_stub::layoutManager(param_4);
  IVar1 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_(IVar2,IVar1,extraout_x1,0);
  auVar6 = _NSIntersectionRange(IVar1,extraout_x1_00,uVar4,uVar5);
  if (auVar6._8_8_ != 0) {
    IVar1 = objc_stub::layoutManager(param_4);
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (IVar1,auVar6._0_8_,auVar6._8_8_,0);
    IVar2 = objc_stub::layoutManager(param_4);
    IVar3 = objc_stub::textContainer(param_4);
    objc_stub::boundingRectForGlyphRange_inTextContainer_(IVar2,IVar1,extraout_x1_01,IVar3);
    objc_stub::setNeedsDisplayInRect_avoidAdditionalLayout_
              (param_4,extraout_d0_00,in_d1,in_d2,in_d3,1);
  }
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::string(IVar1);
  IVar1 = objc_stub::previousParagraphForRange_(IVar1,uVar4,uVar5);
  if (IVar1 != 0x7fffffffffffffff) {
    param_3 = (_NSRange)_NSUnionRange(uVar4,uVar5,IVar1,extraout_x1_02);
  }
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::string(IVar1);
  IVar1 = objc_stub::nextParagraphForRange_(IVar1,param_3.field0_0x0,param_3.field1_0x8);
  if (IVar1 != 0x7fffffffffffffff) {
    param_3 = (_NSRange)_NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,IVar1,extraout_x1_03);
  }
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::extendRangeToFullyContainBlockquote_
                    (IVar1,param_3.field0_0x0,param_3.field1_0x8);
  IVar2 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::isRangeInsideBlockquote_(IVar2,IVar1,extraout_x1_04);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::layoutManager(param_4);
    objc_stub::invalidateDisplayForCharacterRange_(IVar2,IVar1,extraout_x1_04);
  }
  return;
}


// ===== MDEditorController::asyncStylerCompletionBlockForTextView: @ 0000e738 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDEditorController::asyncStylerCompletionBlockForTextView_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 local_60 [48];
  
  return (ID)local_60;
}


// ===== MDEditorController::asyncTextStyler:styledString:asyncAttributeUUID:attributeName:attributeOffsetRange:textView: @ 0000e814 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x48 bytes */

void MDEditorController::
     asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,_NSRange param_7,
               ID param_8)

{
  ID self;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  unsigned_long_long local_60;
  unsigned_long_long uStack_58;
  
  self = objc_stub::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  local_a0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_98 = 0xc2000000;
  local_90 = 
  ___114__MDEditorController_asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView___block_invoke
  ;
  puStack_88 = &___block_descriptor_80_e8_32s40s48s56s_e5_v8__0l;
  local_80 = param_8;
  local_78 = param_5;
  local_70 = param_6;
  local_68 = param_4;
  local_60 = param_7.field0_0x0;
  uStack_58 = param_7.field1_0x8;
  objc_stub::addOperationWithBlock_(self,&local_a0);
  return;
}


// ===== MDEditorController::diffRangeFromInnerAttrString:outerAttrString:inOuterRange:outerDiffRange: @ 0000ee60 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

_NSRange MDEditorController::
         diffRangeFromInnerAttrString_outerAttrString_inOuterRange_outerDiffRange_
                   (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5,_NSRange *param_6)

{
  ID IVar1;
  ID IVar2;
  ID extraout_x1;
  _NSRange _Var3;
  
  IVar1 = objc_stub::useDiff(param_1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::length(param_3);
    IVar2 = 0;
    param_6->field0_0x0 = param_5.field0_0x0;
    param_6->field1_0x8 = param_5.field1_0x8;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    IVar1 = objc_stub::attrStringDiffer(param_1);
    IVar2 = objc_stub::diffRangebetweenAttributedString_andAttributedString_inRange_secondDiffRange_
                      (IVar1,param_3,param_4,param_5.field0_0x0,param_5.field1_0x8,param_6);
    _CFAbsoluteTimeGetCurrent(0);
    _NSStringFromRange(IVar2,extraout_x1);
    _NSStringFromRange(param_6->field0_0x0,param_6->field1_0x8);
    _NSLog(&cf_Diffin_fmsd__t__);
    IVar1 = extraout_x1;
  }
  _Var3.field1_0x8 = IVar1;
  _Var3.field0_0x0 = IVar2;
  return _Var3;
}


// ===== MDEditorController::performAutomaticTextChangesInTextView: @ 0000efb0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::performAutomaticTextChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 uVar5;
  
  IVar1 = objc_stub::isDictationActive(param_3);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::undoManager(param_3);
    IVar1 = objc_stub::isUndoing(IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::undoManager(param_3);
      IVar1 = objc_stub::isRedoing(IVar1);
      if ((int)IVar1 == 0) {
        IVar1 = objc_stub::textStorage(param_3);
        IVar1 = objc_stub::currentReparsedRange(IVar1);
        if (IVar1 != 0x7fffffffffffffff) {
          IVar1 = objc_stub::textStorage(param_3);
          IVar1 = objc_stub::ast(IVar1);
          IVar1 = objc_stub::parseInlinesOnly(IVar1);
          IVar2 = objc_stub::textStorage(param_3);
          IVar3 = objc_stub::selectedRange(param_3);
          IVar4 = objc_stub::stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1);
          IVar2 = objc_stub::textStorage(param_3);
          IVar2 = objc_stub::currentReparsedRange(IVar2);
          IVar3 = objc_stub::textStorage(param_3);
          IVar3 = objc_stub::ast(IVar3);
          if ((int)IVar1 == 0) {
            IVar1 = objc_stub::renumberOrderedListInRange_selectionRange_
                              (IVar3,IVar2,extraout_x1_01,IVar4,extraout_x1_00);
            IVar2 = objc_stub::count(IVar1);
            uVar5 = extraout_x1_00;
            if (IVar2 != 0) {
              objc_stub::applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = objc_stub::textStorage(param_3);
              IVar2 = objc_stub::selectedRange(param_3);
              IVar4 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_02);
              uVar5 = extraout_x1_03;
            }
            IVar1 = objc_stub::textStorage(param_3);
            objc_stub::currentReparsedRange(IVar1);
            IVar1 = objc_stub::textStorage(param_3);
            IVar1 = objc_stub::ast(IVar1);
            IVar1 = objc_stub::unfoldAtRangeEdges_selectionRange_(IVar1,IVar4,uVar5,IVar4,uVar5);
            IVar2 = objc_stub::count(IVar1);
            if (IVar2 != 0) {
              objc_stub::applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = objc_stub::textStorage(param_3);
              IVar2 = objc_stub::selectedRange(param_3);
              IVar4 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_04);
              uVar5 = extraout_x1_05;
            }
            IVar1 = objc_stub::textStorage(param_3);
            IVar1 = objc_stub::currentReparsedRange(IVar1);
            IVar2 = objc_stub::textStorage(param_3);
            IVar2 = objc_stub::ast(IVar2);
            IVar1 = objc_stub::removeStrayMetaCommentInRange_selectionRange_
                              (IVar2,IVar1,extraout_x1_06,IVar4,uVar5);
            IVar2 = objc_stub::count(IVar1);
            if (IVar2 != 0) {
              objc_stub::applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = objc_stub::textStorage(param_3);
              IVar2 = objc_stub::selectedRange(param_3);
              IVar4 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_07);
              uVar5 = extraout_x1_08;
            }
            IVar1 = objc_stub::textStorage(param_3);
            IVar1 = objc_stub::currentReparsedRange(IVar1);
            IVar2 = objc_stub::textStorage(param_3);
            IVar2 = objc_stub::ast(IVar2);
            IVar1 = objc_stub::normalizeIndentationInRange_selectionRange_
                              (IVar2,IVar1,extraout_x1_09,IVar4,uVar5);
            IVar2 = objc_stub::count(IVar1);
            if (IVar2 != 0) {
              objc_stub::applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = objc_stub::textStorage(param_3);
              IVar2 = objc_stub::selectedRange(param_3);
              IVar4 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_10);
              uVar5 = extraout_x1_11;
            }
            IVar1 = objc_stub::textStorage(param_3);
            IVar1 = objc_stub::currentReparsedRange(IVar1);
            IVar2 = objc_stub::textStorage(param_3);
            IVar2 = objc_stub::ast(IVar2);
            IVar1 = objc_stub::normalizeCalloutInRange_selectionRange_
                              (IVar2,IVar1,extraout_x1_12,IVar4,uVar5);
          }
          else {
            IVar1 = objc_stub::escapePipesInRange_selectionRange_
                              (IVar3,IVar2,extraout_x1_01,IVar4,extraout_x1_00);
          }
          IVar2 = objc_stub::count(IVar1);
          if (IVar2 != 0) {
            objc_stub::applyASTOperationResults_inTextView_postTextDidChange_
                      (param_1,IVar1,param_3,0);
          }
        }
      }
    }
  }
  return;
}


// ===== MDEditorController::validateTextAttachmentsWithConfigurator:inAttributedString:selectionRange:selectionLocationOffset: @ 0000f548 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDEditorController::
     validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset_
               (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange *param_5,
               unsigned_long_long param_6)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  ID local_70;
  ID IStack_68;
  unsigned_long_long local_60;
  _NSRange *p_Stack_58;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30;
    IVar1 = objc_stub::length(param_4);
    local_98 = PTR___NSConcreteStackBlock_0005ebe0;
    local_90 = 0xc2000000;
    local_88 = 
    ___120__MDEditorController_validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset___block_invoke
    ;
    puStack_80 = &___block_descriptor_72_e8_32s40s48s_e27_v40__0_8__NSRange_QQ_16_B32l;
    local_78 = param_3;
    local_70 = param_4;
    IStack_68 = param_1;
    local_60 = param_6;
    p_Stack_58 = param_5;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_(param_4,uVar2,0,IVar1,0,&local_98);
  }
  return;
}


// ===== MDEditorController::additionalRangeForAttachment:atIndex:inAttributedString: @ 0000f83c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

_NSRange MDEditorController::additionalRangeForAttachment_atIndex_inAttributedString_
                   (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  ID IVar1;
  unsigned_long_long extraout_x1;
  unsigned_long_long extraout_x1_00;
  unsigned_long_long extraout_x1_01;
  unsigned_long_long extraout_x1_02;
  unsigned_long_long extraout_x1_03;
  unsigned_long_long extraout_x1_04;
  unsigned_long_long extraout_x1_05;
  unsigned_long_long extraout_x1_06;
  unsigned_long_long extraout_x1_07;
  unsigned_long_long extraout_x1_08;
  unsigned_long_long uVar2;
  _NSRange _Var3;
  
  IVar1 = objc_stub::isList(param_3);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::isHeader(param_3);
    if ((int)IVar1 == 0) {
      uVar2 = 1;
      IVar1 = objc_stub::isTable(param_3);
      if (((IVar1 & 1) == 0) && (IVar1 = objc_stub::isThematicBreak(param_3), (int)IVar1 == 0)) {
        IVar1 = objc_stub::isLink(param_3);
        if ((int)IVar1 == 0) {
          IVar1 = objc_stub::isColor(param_3);
          if ((int)IVar1 == 0) {
            IVar1 = objc_stub::isArrow(param_3);
            if ((int)IVar1 == 0) {
              IVar1 = objc_stub::isBlockquote(param_3);
              if ((int)IVar1 == 0) {
                IVar1 = objc_stub::isCallout(param_3);
                if ((int)IVar1 == 0) {
                  IVar1 = objc_stub::isMath(param_3);
                  if ((int)IVar1 == 0) {
                    IVar1 = objc_stub::isMermaid(param_3);
                    if ((int)IVar1 != 0) {
                      param_4 = objc_stub::codeBlockRangeAtIndex_(param_5,param_4);
                      uVar2 = extraout_x1_08;
                    }
                  }
                  else {
                    param_4 = objc_stub::mathRangeAtIndex_(param_5,param_4);
                    uVar2 = extraout_x1_07;
                  }
                }
                else {
                  IVar1 = objc_stub::listItemInfoAtIndex_(param_5,param_4);
                  IVar1 = objc_stub::listLevel(IVar1);
                  param_4 = objc_stub::rangeOfBlockquoteLevel_atIndex_(param_5,IVar1,param_4);
                  uVar2 = extraout_x1_06;
                }
              }
              else {
                param_4 = objc_stub::rangeOfBlockquoteItemAtIndex_(param_5,param_4);
                uVar2 = extraout_x1_05;
              }
            }
            else {
              param_4 = objc_stub::arrowRangeAtIndex_(param_5,param_4);
              uVar2 = extraout_x1_04;
            }
          }
          else {
            param_4 = objc_stub::colorRangeAtIndex_(param_5,param_4);
            uVar2 = extraout_x1_03;
          }
        }
        else {
          param_4 = objc_stub::linkRangeAtIndex_(param_5,param_4);
          uVar2 = extraout_x1_02;
        }
      }
      else {
        IVar1 = objc_stub::string(param_5);
        param_4 = objc_stub::paragraphRangeForRange_(IVar1,param_4,1);
        uVar2 = extraout_x1_01;
      }
    }
    else {
      param_4 = objc_stub::headerRangeAtIndex_(param_5,param_4);
      uVar2 = extraout_x1_00;
    }
  }
  else {
    param_4 = objc_stub::rangeOfListItemAtIndex_(param_5,param_4);
    uVar2 = extraout_x1;
  }
  _Var3.field1_0x8 = uVar2;
  _Var3.field0_0x0 = param_4;
  return _Var3;
}


// ===== MDEditorController::rearrangeAttachmentsViewsInTextView:range: @ 0000fa0c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::rearrangeAttachmentsViewsInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID self;
  undefined8 extraout_d0;
  undefined8 in_d1;
  
  objc_stub::textContainerOrigin(param_3);
  self = objc_stub::layoutManager(param_3);
  objc_stub::rearrangeAttachmentsViewsForCharacterRange_atPoint_
            (self,extraout_d0,in_d1,param_4.field0_0x0,param_4.field1_0x8);
  return;
}


// ===== MDEditorController::textView:didChangeAttachmentTextRepresentation:previousRepresentedText: @ 0000fa8c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::textView_didChangeAttachmentTextRepresentation_previousRepresentedText_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 extraout_x1;
  long local_60 [2];
  
  objc_stub::notifyTextChangesInTextView_(param_1,param_3);
  local_60[1] = 0;
  local_60[0] = 0x7fffffffffffffff;
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::rangeOfTextAttachment_foldRange_(IVar2,param_4,local_60);
  lVar1 = local_60[0];
  IVar3 = objc_stub::textStorage(param_3);
  if (lVar1 == 0x7fffffffffffffff) {
    IVar2 = objc_stub::stringRangeFromAttributedStringRange_(IVar3,IVar2,0);
    IVar3 = objc_stub::length(param_5);
  }
  else {
    IVar3 = objc_stub::stringRangeFromAttributedStringRange_(IVar3,local_60[0],0);
    IVar4 = objc_stub::textStorage(param_3);
    IVar4 = objc_stub::textAttachmentAtIndex_(IVar4,local_60[0]);
    IVar4 = objc_stub::representedAttributedText(IVar4);
    IVar2 = objc_stub::stringRangeFromAttributedStringRange_(IVar4,IVar2,extraout_x1);
    IVar2 = IVar2 + IVar3;
    IVar3 = objc_stub::length(param_5);
  }
  IVar4 = objc_stub::textStorage(param_3);
  IVar5 = objc_stub::representedText(param_4);
  objc_stub::recordNewReplacementChangeForStringRange_replacementString_(IVar4,IVar2,IVar3,IVar5);
  return;
}


// ===== MDEditorController::replaceCharactersInRange:withAttributedString:inTextView: @ 0000fc84 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDEditorController::replaceCharactersInRange_withAttributedString_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::undoManager(param_5);
  objc_stub::beginUndoGrouping(IVar1);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (param_5,param_3.field0_0x0,param_3.field1_0x8,param_4);
  objc_stub::performStylingInTextView_(param_1,param_5);
  IVar1 = objc_stub::undoManager(param_5);
  objc_stub::endUndoGrouping(IVar1);
  return;
}


// ===== MDEditorController::textView:shouldChangeTextInRange:replacementString: @ 0000fd44 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

bool MDEditorController::textView_shouldChangeTextInRange_replacementString_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  ID local_88;
  ID local_80;
  ID local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  IVar1 = objc_stub::undoManager(param_3);
  IVar1 = objc_stub::isUndoing(IVar1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::undoManager(param_3);
    IVar1 = objc_stub::isRedoing(IVar1);
    if (((IVar1 & 1) == 0) &&
       ((IVar1 = objc_stub::hasMarkedText(param_3), (int)IVar1 == 0 ||
        (IVar1 = objc_stub::isEqualToString_(param_5,&cf__), (int)IVar1 != 0)))) {
      IVar1 = objc_stub::editorBehaviourController(param_1);
      IVar2 = objc_stub::textStorage(param_3);
      IVar3 = objc_stub::selectedRange(param_3);
      IVar1 = objc_stub::resultsForEditInRange_replacementString_attributedString_selectionRange_
                        (IVar1,param_4.field0_0x0,param_4.field1_0x8,param_5,IVar2,IVar3,extraout_x1
                        );
      if (IVar1 != 0) {
        _objc_initWeak(auStack_68,param_1);
        local_a8 = PTR___NSConcreteStackBlock_0005ebe0;
        local_a0 = 0xc2000000;
        local_98 = 
        ___73__MDEditorController_textView_shouldChangeTextInRange_replacementString___block_invoke;
        puStack_90 = &___block_descriptor_64_e8_32s40s48s56w_e5_v8__0l;
        _objc_copyWeak(auStack_70,auStack_68);
        local_88 = IVar1;
        local_80 = param_3;
        local_78 = param_5;
        _dispatch_async(PTR___dispatch_main_q_0005ec08,&local_a8);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        return 0;
      }
      IVar1 = objc_stub::textStorage(param_3);
      IVar2 = objc_stub::selectedRange(param_3);
      IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_00);
      IVar2 = objc_stub::textStorage(param_3);
      IVar2 = objc_stub::stringRangeFromAttributedStringRange_
                        (IVar2,param_4.field0_0x0,param_4.field1_0x8);
      IVar3 = objc_stub::length(param_5);
      IVar1 = objc_stub::offsetSelectionRange_forReplacementRange_replacementLenght_
                        ((ID)&_OBJC_CLASS___NSAttributedString,IVar1,extraout_x1_01,IVar2,
                         extraout_x1_02,IVar3);
      IVar3 = objc_stub::textStorage(param_3);
      IVar3 = objc_stub::ast(IVar3);
      self = objc_stub::listItemSpaceCorrectionIn_replacementString_selectionRange_
                       (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      IVar3 = objc_stub::count(self);
      if (IVar3 == 0) {
        IVar3 = objc_stub::textStorage(param_3);
        IVar3 = objc_stub::ast(IVar3);
        self = objc_stub::fencedCodeCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = objc_stub::count(self);
      if (IVar3 == 0) {
        IVar3 = objc_stub::textStorage(param_3);
        IVar3 = objc_stub::ast(IVar3);
        self = objc_stub::calloutCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = objc_stub::count(self);
      if (IVar3 == 0) {
        IVar3 = objc_stub::textStorage(param_3);
        IVar3 = objc_stub::ast(IVar3);
        self = objc_stub::mathBlockCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = objc_stub::count(self);
      if (IVar3 == 0) {
        IVar3 = objc_stub::textStorage(param_3);
        IVar3 = objc_stub::ast(IVar3);
        self = objc_stub::invalidCharacterCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = objc_stub::count(self);
      if ((IVar3 == 0) && (IVar3 = objc_stub::isEqualToString_(param_5,&cf___), (int)IVar3 != 0)) {
        IVar3 = objc_stub::textStorage(param_3);
        IVar3 = objc_stub::ast(IVar3);
        self = objc_stub::deleteWhitespaceCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar1 = objc_stub::count(self);
      if (IVar1 == 0) {
        return 1;
      }
      objc_stub::applyASTOperationResults_inTextView_(param_1,self,param_3);
      return (uint)(IVar1 == 0);
    }
  }
  return 1;
}


// ===== MDEditorController::adjustedSelectionForTextView:currentSelection:proposedSelection: @ 0001055c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

_NSRange MDEditorController::adjustedSelectionForTextView_currentSelection_proposedSelection_
                   (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  unsigned_long_long extraout_x1_02;
  unsigned_long_long extraout_x1_03;
  unsigned_long_long uVar5;
  _NSRange _Var6;
  
  uVar5 = param_5.field1_0x8;
  IVar4 = param_5.field0_0x0;
  if (uVar5 != 0) {
    IVar1 = objc_stub::textStorage(param_3);
    IVar1 = objc_stub::editedCharacters(IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::textStorage(param_3);
      IVar1 = objc_stub::stringRangeFromAttributedStringRange_
                        (IVar1,param_4.field0_0x0,param_4.field1_0x8);
      IVar2 = objc_stub::textStorage(param_3);
      IVar2 = objc_stub::stringRangeFromAttributedStringRange_(IVar2,IVar4,uVar5);
      IVar3 = objc_stub::textStorage(param_3);
      IVar3 = objc_stub::ast(IVar3);
      IVar3 = objc_stub::markdownLength(IVar3);
      if (IVar2 + extraout_x1_00 <= IVar3) {
        IVar3 = objc_stub::textStorage(param_3);
        IVar3 = objc_stub::ast(IVar3);
        IVar1 = objc_stub::selectionCorrectionIn_replacementString_selectionRange_
                          (IVar3,IVar1,extraout_x1,0,IVar2,extraout_x1_00);
        IVar2 = objc_stub::count(IVar1);
        if (IVar2 != 0) {
          IVar4 = objc_stub::lastObject(IVar1);
          IVar4 = objc_stub::proposedSelection(IVar4);
          IVar1 = objc_stub::textStorage(param_3);
          IVar4 = objc_stub::attributedStringRangeFromStringRange_(IVar1,IVar4,extraout_x1_01);
          uVar5 = extraout_x1_02;
        }
      }
    }
  }
  IVar1 = objc_stub::textStorage(param_3);
  _Var6.field0_0x0 =
       objc_stub::spacersAdjustedSelectionForProposedSelection_currentSelection_
                 (IVar1,IVar4,uVar5,param_4.field0_0x0,param_4.field1_0x8);
  _Var6.field1_0x8 = extraout_x1_03;
  return _Var6;
}


// ===== MDEditorController::notifyTextChangesInTextView: @ 00010798 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::notifyTextChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::notificationWithName_object_
                    ((ID)&_OBJC_CLASS___NSNotification,_MDTextViewTextDidChangeNotification,param_3)
  ;
  self = objc_stub::defaultQueue((ID)&_OBJC_CLASS___NSNotificationQueue);
  objc_stub::enqueueNotification_postingStyle_(self,IVar1,1);
  return;
}


// ===== MDEditorController::notifyTextAttributesChangesInTextView: @ 00010804 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::notifyTextAttributesChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::notificationWithName_object_
                    ((ID)&_OBJC_CLASS___NSNotification,
                     _MDTextViewTextAttributesDidChangeNotification,param_3);
  self = objc_stub::defaultQueue((ID)&_OBJC_CLASS___NSNotificationQueue);
  objc_stub::enqueueNotification_postingStyle_(self,IVar1,1);
  return;
}


// ===== MDEditorController::notifyTextSelectionChangesInTextView: @ 00010870 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::notifyTextSelectionChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::notificationWithName_object_
                    ((ID)&_OBJC_CLASS___NSNotification,_MDTextViewTextDidChangeSelectionNotification
                     ,param_3);
  self = objc_stub::defaultQueue((ID)&_OBJC_CLASS___NSNotificationQueue);
  objc_stub::enqueueNotification_postingStyle_(self,IVar1,1);
  return;
}


// ===== MDEditorController::fixTypingAttributesInTextView: @ 000108dc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::fixTypingAttributesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 extraout_x1;
  
  IVar1 = objc_stub::selectedRange(param_3);
  objc_stub::fixTypingAttributesInTextView_range_(param_1,param_3,IVar1,extraout_x1);
  return;
}


// ===== MDEditorController::fixTypingAttributesInTextView:range: @ 00010920 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::fixTypingAttributesInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double extraout_d0;
  double extraout_d0_00;
  
  if (param_4.field1_0x8 == 0) {
    IVar1 = objc_stub::textStorage(param_3);
    IVar1 = objc_stub::length(IVar1);
    if (param_4.field0_0x0 == IVar1) {
      IVar1 = objc_stub::typingAttributes(param_3);
      IVar1 = objc_stub::mutableCopy(IVar1);
      IVar2 = objc_stub::attributedStringRenderer(param_1);
      IVar2 = objc_stub::bidiStyler(IVar2);
      IVar2 = objc_stub::preferredParagraphStyle(IVar2);
      IVar2 = objc_stub::mutableCopy(IVar2);
      IVar3 = objc_stub::attributedStringRenderer(param_1);
      IVar3 = objc_stub::bidiStyler(IVar3);
      objc_stub::paragraphIndent(IVar3);
      objc_stub::firstLineHeadIndent(IVar2);
      objc_stub::setFirstLineHeadIndent_(IVar2,extraout_d0 + extraout_d0_00);
      objc_stub::setObject_forKeyedSubscript_
                (IVar1,IVar2,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98);
      objc_stub::setTypingAttributes_(param_3,IVar1);
    }
  }
  return;
}


// ===== MDEditorController::autodisableLinksInTextView: @ 00010aa0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::autodisableLinksInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::isFirstResponder(param_3);
  if ((int)IVar1 == 0) {
    objc_stub::enableLinksInTextView_(param_1,param_3);
  }
  else {
    objc_stub::disableLinksInInTextView_(param_1,param_3);
  }
  return;
}


// ===== MDEditorController::enableLinksInTextView: @ 00010af0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::enableLinksInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar1 = objc_stub::length(IVar1);
  objc_stub::enableLinksInTextView_range_(param_1,param_3,0,IVar1);
  return;
}


// ===== MDEditorController::enableLinksInTextView:range: @ 00010b54 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::enableLinksInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::textStorage(param_3);
  objc_stub::enableLinksInAttributedString_range_
            (param_1,IVar1,param_4.field0_0x0,param_4.field1_0x8);
  return;
}


// ===== MDEditorController::enableLinksInAttributedString:range: @ 00010bac =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

bool MDEditorController::enableLinksInAttributedString_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  byte bVar1;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  puStack_58 = &local_50;
  local_50 = 0;
  local_40 = 0x2020000000;
  local_38 = 0;
  local_80 = PTR___NSConcreteStackBlock_0005ebe0;
  local_78 = 0xc2000000;
  local_70 = ___58__MDEditorController_enableLinksInAttributedString_range___block_invoke;
  puStack_68 = &___block_descriptor_48_e8_32s40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_60 = param_3;
  local_48 = puStack_58;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,&cf__NSLinkAttributeName,param_4.field0_0x0,param_4.field1_0x8,0,&local_80);
  bVar1 = *(byte *)(local_48 + 3);
  __Block_object_dispose(&local_50,8);
  return (bool)bVar1;
}


// ===== MDEditorController::disableLinksInInTextView: @ 00010d08 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::disableLinksInInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar1 = objc_stub::length(IVar1);
  objc_stub::disableLinksInInTextView_range_(param_1,param_3,0,IVar1);
  return;
}


// ===== MDEditorController::disableLinksInInTextView:range: @ 00010d6c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::disableLinksInInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::textStorage(param_3);
  objc_stub::disableLinksInAttributedString_range_
            (param_1,IVar1,param_4.field0_0x0,param_4.field1_0x8);
  return;
}


// ===== MDEditorController::disableLinksInAttributedString:range: @ 00010dc4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

bool MDEditorController::disableLinksInAttributedString_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  byte bVar1;
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
  
  puStack_68 = &local_60;
  local_60 = 0;
  local_50 = 0x2020000000;
  local_48 = 0;
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = ___59__MDEditorController_disableLinksInAttributedString_range___block_invoke;
  puStack_78 = &___block_descriptor_48_e8_32s40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = param_3;
  local_58 = puStack_68;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,param_4.field0_0x0,
             param_4.field1_0x8,0,&local_90);
  bVar1 = *(byte *)(local_58 + 3);
  __Block_object_dispose(&local_60,8);
  return (bool)bVar1;
}


// ===== MDEditorController::urlAtPoint:inTextView: @ 00010f30 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDEditorController::urlAtPoint_inTextView_(ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 extraout_x1;
  ID IVar8;
  long lVar9;
  undefined8 extraout_d0;
  double dVar10;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long local_a0;
  
  local_a0 = *(long *)PTR____stack_chk_guard_0005ec00;
  dVar10 = param_3.field1_0x8;
  IVar3 = objc_stub::linkRangesInTextView_(param_1,param_4);
  IVar3 = objc_stub::arrayWithArray_((ID)&_OBJC_CLASS___NSMutableArray,IVar3);
  IVar4 = objc_stub::disabledLinkRangesInTextView_(param_1,param_4);
  objc_stub::addObjectsFromArray_(IVar3,IVar4);
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = (long *)0x0;
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_160,auStack_120,0x10);
  puVar1 = PTR__NSLinkAttributeName_0005ec90;
  if (IVar4 != 0) {
    lVar9 = *local_150;
    do {
      IVar8 = 0;
      do {
        if (*local_150 != lVar9) {
          _objc_enumerationMutation(IVar3);
        }
        IVar5 = objc_stub::rangeValue(*(ID *)(lStack_158 + IVar8 * 8));
        IVar6 = objc_stub::layoutManager(param_4);
        IVar7 = objc_stub::textContainer(param_4);
        objc_stub::boundingRectForGlyphRange_inTextContainer_(IVar6,IVar5,extraout_x1,IVar7);
        iVar2 = _CGRectContainsPoint
                          (extraout_d0,dVar10,in_d2,in_d3,param_3.field0_0x0,param_3.field1_0x8,0);
        if (iVar2 != 0) {
          uStack_168 = 0;
          local_170 = 0x7fffffffffffffff;
          IVar6 = objc_stub::textStorage(param_4);
          IVar6 = objc_stub::attribute_atIndex_effectiveRange_
                            (IVar6,*(undefined8 *)puVar1,IVar5,&local_170);
          if (IVar6 != 0) goto LAB_00011198;
          IVar6 = objc_stub::textStorage(param_4);
          IVar6 = objc_stub::attribute_atIndex_effectiveRange_
                            (IVar6,&cf__NSLinkAttributeName,IVar5,&local_170);
          if (IVar6 != 0) goto LAB_00011198;
        }
        IVar8 = IVar8 + 1;
      } while (IVar4 != IVar8);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar3,&local_160,auStack_120,0x10);
    } while (IVar4 != 0);
  }
  IVar6 = 0;
LAB_00011198:
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_a0) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDEditorController::urlsInRange:inTextView: @ 000111fc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDEditorController::urlsInRange_inTextView_(ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long extraout_x1;
  ulong uVar7;
  ID IVar8;
  long lVar9;
  undefined8 local_140;
  undefined8 uStack_138;
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
  
  uVar7 = param_3.field0_0x0;
  local_70 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar3 = objc_stub::linkRangesInTextView_(param_1,param_4);
  IVar3 = objc_stub::arrayWithArray_((ID)&_OBJC_CLASS___NSMutableArray,IVar3);
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar4 = objc_stub::disabledLinkRangesInTextView_(param_1,param_4);
  objc_stub::addObjectsFromArray_(IVar3,IVar4);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_130,auStack_f0,0x10);
  if (IVar4 != 0) {
    lVar9 = *local_120;
    uVar1 = uVar7 + param_3.field1_0x8;
    do {
      IVar8 = 0;
      do {
        if (*local_120 != lVar9) {
          _objc_enumerationMutation(IVar3);
        }
        IVar5 = objc_stub::rangeValue(*(ID *)(lStack_128 + IVar8 * 8));
        uVar2 = IVar5 + extraout_x1;
        if (((IVar5 >= uVar7 && IVar5 <= uVar1) && (IVar5 < uVar7 || uVar1 != IVar5)) ||
           (uVar7 < uVar2 && uVar2 <= uVar1 ||
            ((uVar7 >= IVar5 && uVar7 <= uVar2) && (uVar7 < IVar5 || uVar2 != uVar7) ||
            IVar5 < uVar1 && uVar1 <= uVar2))) {
          uStack_138 = 0;
          local_140 = 0x7fffffffffffffff;
          IVar6 = objc_stub::textStorage(param_4);
          IVar6 = objc_stub::attribute_atIndex_effectiveRange_
                            (IVar6,*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,IVar5,&local_140
                            );
          if (IVar6 != 0) {
            objc_stub::addObject_(self,IVar6);
          }
          IVar6 = objc_stub::textStorage(param_4);
          IVar5 = objc_stub::attribute_atIndex_effectiveRange_
                            (IVar6,&cf__NSLinkAttributeName,IVar5,&local_140);
          if (IVar5 != 0) {
            objc_stub::addObject_(self,IVar5);
          }
        }
        IVar8 = IVar8 + 1;
      } while (IVar4 != IVar8);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar3,&local_130,auStack_f0,0x10);
    } while (IVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDEditorController::linkRangesInTextView: @ 000114b0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDEditorController::linkRangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::urlContainingRangesWithAttribute_inTextView_
                    (param_1,*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,param_3);
  return IVar1;
}


// ===== MDEditorController::disabledLinkRangesInTextView: @ 000114c4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDEditorController::disabledLinkRangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::urlContainingRangesWithAttribute_inTextView_
                    (param_1,&cf__NSLinkAttributeName,param_3);
  return IVar1;
}


// ===== MDEditorController::urlContainingRangesWithAttribute:inTextView: @ 000114d4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID MDEditorController::urlContainingRangesWithAttribute_inTextView_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID self;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  self = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::length(IVar2);
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = ___66__MDEditorController_urlContainingRangesWithAttribute_inTextView___block_invoke;
  puStack_50 = &___block_descriptor_40_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_48 = IVar1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_(self,param_3,0,IVar2,0,&local_68);
  return IVar1;
}


// ===== MDEditorController::autoHideCalloutTitleInTextView:forOldSelectionRange:newSelectionRange: @ 00011688 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDEditorController::autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  unsigned_long_long uVar3;
  unsigned_long_long uVar4;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  unsigned_long_long local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  unsigned_long_long local_60;
  undefined8 uStack_58;
  
  uVar4 = param_5.field0_0x0;
  uVar3 = param_4.field0_0x0;
  if (param_4.field1_0x8 == 0) {
    IVar1 = objc_stub::textStorage(param_3);
    IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                      (IVar1,*(undefined8 *)PTR__PMKCalloutAttributeName_0005e890,uVar3,0);
    if (IVar1 != 0) {
      IVar1 = objc_stub::textStorage(param_3);
      IVar1 = objc_stub::string(IVar1);
      IVar1 = objc_stub::paragraphRangeForRange_(IVar1,uVar3,0);
      IVar2 = objc_stub::textStorage(param_3);
      local_88 = PTR___NSConcreteStackBlock_0005ebe0;
      local_80 = 0xc2000000;
      local_78 = 
      ___92__MDEditorController_autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange___block_invoke
      ;
      puStack_70 = &
                   ___block_descriptor_56_e8_32s_e57_v72__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40Q56_B64l
      ;
      uStack_58 = 0;
      local_68 = param_3;
      local_60 = uVar3;
      objc_stub::enumerateCalloutInRange_options_usingBlock_(IVar2,IVar1,extraout_x1,0,&local_88);
    }
  }
  if (param_5.field1_0x8 == 0) {
    IVar1 = objc_stub::textStorage(param_3);
    IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                      (IVar1,*(undefined8 *)PTR__PMKCalloutAttributeName_0005e890,uVar4,0);
    if (IVar1 != 0) {
      IVar1 = objc_stub::textStorage(param_3);
      IVar1 = objc_stub::string(IVar1);
      IVar1 = objc_stub::paragraphRangeForRange_(IVar1,uVar4,0);
      IVar2 = objc_stub::textStorage(param_3);
      local_c0 = PTR___NSConcreteStackBlock_0005ebe0;
      local_b8 = 0xc2000000;
      local_b0 = 
      ___92__MDEditorController_autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange___block_invoke_40
      ;
      puStack_a8 = &
                   ___block_descriptor_56_e8_32s_e57_v72__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40Q56_B64l
      ;
      uStack_90 = 0;
      local_a0 = param_3;
      local_98 = uVar4;
      objc_stub::enumerateCalloutInRange_options_usingBlock_(IVar2,IVar1,extraout_x1_00,0,&local_c0)
      ;
    }
  }
  return;
}


// ===== MDEditorController::autoHideMarkdownInTextView:forOldSelectionRange:newSelectionRange: @ 00011b94 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDEditorController::autoHideMarkdownInTextView_forOldSelectionRange_newSelectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  ID self;
  ID IVar1;
  
  self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar1 = objc_stub::textStorage(param_3);
  IVar1 = objc_stub::editedCharactersOrAttributes(IVar1);
  if ((IVar1 & 1) == 0) {
    objc_stub::showHideMarkdownInTextView_oldSelectionRange_newSelectionRange_
              (self,param_3,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
               param_5.field1_0x8);
    objc_stub::autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange_
              (param_1,param_3,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
               param_5.field1_0x8);
  }
  return;
}


// ===== MDEditorController::hideMarkdownInTextView:range: @ 00011c68 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::hideMarkdownInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 extraout_x1;
  long lVar6;
  ID IVar7;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::rangesToCheckForMarkdownHidingForRange_inAttributedString_
                    (IVar1,param_4.field0_0x0,param_4.field1_0x8,IVar2);
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
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_e8,0x10);
  if (IVar3 != 0) {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar2);
        }
        IVar4 = objc_stub::rangeValue(*(ID *)(lStack_128 + IVar7 * 8));
        IVar5 = objc_stub::textStorage(param_3);
        objc_stub::hideMarkdownInRange_inAttributedString_(IVar1,IVar4,extraout_x1,IVar5);
        IVar7 = IVar7 + 1;
      } while (IVar3 != IVar7);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_e8,0x10);
    } while (IVar3 != 0);
  }
  IVar1 = objc_stub::textStorage(param_3);
  objc_stub::endEditing(IVar1);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDEditorController::showMarkdownInTextView:range: @ 00011e54 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::showMarkdownInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  
  self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar1 = objc_stub::textStorage(param_3);
  IVar1 = objc_stub::rangeToCheckForMarkdownShowingForRange_inAttributedString_
                    (self,param_4.field0_0x0,param_4.field1_0x8,IVar1);
  IVar2 = objc_stub::textStorage(param_3);
  objc_stub::showMarkdownInRange_inAttributedString_(self,IVar1,extraout_x1,IVar2);
  return;
}


// ===== MDEditorController::autoHideMarkdownInAttributedString:selectionRange: @ 00011f18 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::autoHideMarkdownInAttributedString_selectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID self;
  ID IVar1;
  undefined8 extraout_x1;
  
  self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar1 = objc_stub::length(param_3);
  objc_stub::hideMarkdownInRange_inAttributedString_(self,0,IVar1,param_3);
  if (param_4.field0_0x0 != 0x7fffffffffffffff) {
    IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
    IVar1 = objc_stub::rangeToCheckForMarkdownShowingForRange_inAttributedString_
                      (IVar1,param_4.field0_0x0,param_4.field1_0x8,param_3);
    if (IVar1 != 0x7fffffffffffffff) {
      objc_stub::showMarkdownInRange_inAttributedString_(self,IVar1,extraout_x1,param_3);
    }
  }
  return;
}


// ===== MDEditorController::hideMarkdownInRange:inAttributedString: @ 00011fe0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

bool MDEditorController::hideMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::hideMarkdownInRange_inAttributedString_expandingRangeForAttributes_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4,0);
  return (bool)IVar1;
}


// ===== MDEditorController::hideMarkdownInRange:inAttributedString:expandingRangeForAttributes: @ 00011fe8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x2c bytes */

bool MDEditorController::hideMarkdownInRange_inAttributedString_expandingRangeForAttributes_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,bool param_5)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  unsigned_long_long uVar4;
  bool bVar5;
  long lVar6;
  ID IVar7;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  uVar4 = param_3.field0_0x0;
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  if (param_5 == 0) {
    IVar1 = objc_stub::hideMarkdownInRange_inAttributedString_
                      (IVar1,uVar4,param_3.field1_0x8,param_4);
    bVar5 = (bool)IVar1;
  }
  else {
    if (uVar4 != 0x7fffffffffffffff) {
      self = objc_stub::rangesToCheckForMarkdownHidingForRange_inAttributedString_
                       (IVar1,uVar4,param_3.field1_0x8,param_4);
      lStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      local_110 = (long *)0x0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
      if (IVar2 != 0) {
        lVar6 = *local_110;
        do {
          IVar7 = 0;
          do {
            if (*local_110 != lVar6) {
              _objc_enumerationMutation(self);
            }
            IVar3 = objc_stub::rangeValue(*(ID *)(lStack_118 + IVar7 * 8));
            objc_stub::hideMarkdownInRange_inAttributedString_(IVar1,IVar3,extraout_x1,param_4);
            IVar7 = IVar7 + 1;
          } while (IVar2 != IVar7);
          IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                            (self,&local_120,auStack_d8,0x10);
        } while (IVar2 != 0);
      }
    }
    bVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar5;
}


// ===== MDEditorController::showMarkdownInRange:inAttributedString: @ 00012170 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

bool MDEditorController::showMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::showMarkdownInRange_inAttributedString_expandingRangeForAttributes_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4,0);
  return (bool)IVar1;
}


// ===== MDEditorController::showMarkdownInRange:inAttributedString:expandingRangeForAttributes: @ 00012178 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x2c bytes */

bool MDEditorController::showMarkdownInRange_inAttributedString_expandingRangeForAttributes_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,bool param_5)

{
  ID IVar1;
  ID self;
  ID IVar2;
  unsigned_long_long extraout_x1;
  unsigned_long_long uVar3;
  bool bVar4;
  
  uVar3 = param_3.field1_0x8;
  IVar2 = param_3.field0_0x0;
  IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  if (param_5 == 0) {
LAB_00012204:
    IVar1 = objc_stub::showMarkdownInRange_inAttributedString_(IVar1,IVar2,uVar3,param_4);
    bVar4 = (bool)IVar1;
  }
  else {
    if (IVar2 != 0x7fffffffffffffff) {
      self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
      IVar2 = objc_stub::rangeToCheckForMarkdownShowingForRange_inAttributedString_
                        (self,IVar2,uVar3,param_4);
      uVar3 = extraout_x1;
      if (IVar2 != 0x7fffffffffffffff) goto LAB_00012204;
    }
    bVar4 = 0;
  }
  return bVar4;
}


// ===== MDEditorController::attributedStringRenderer @ 00012248 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorController::attributedStringRenderer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== MDEditorController::setAttributedStringRenderer: @ 00012254 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::setAttributedStringRenderer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDEditorController::editorBehaviourController @ 0001225c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorController::editorBehaviourController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


// ===== MDEditorController::setEditorBehaviourController: @ 00012268 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::setEditorBehaviourController_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


// ===== MDEditorController::textAttachmentConfigurator @ 00012270 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorController::textAttachmentConfigurator(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}


// ===== MDEditorController::setTextAttachmentConfigurator: @ 00012278 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::setTextAttachmentConfigurator_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}


// ===== MDEditorController::useDiff @ 00012280 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDEditorController::useDiff(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}


// ===== MDEditorController::setUseDiff: @ 0001228c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDEditorController::setUseDiff_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}


// ===== MDEditorController::autoHideMarkdown @ 00012294 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDEditorController::autoHideMarkdown(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}


// ===== MDEditorController::setAutoHideMarkdown: @ 000122a0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDEditorController::setAutoHideMarkdown_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}


// ===== MDEditorController::restyleTimer @ 000122a8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorController::restyleTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}


// ===== MDEditorController::setRestyleTimer: @ 000122b4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::setRestyleTimer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}


// ===== MDEditorController::attrStringDiffer @ 000122bc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDEditorController::attrStringDiffer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}


// ===== MDEditorController::setAttrStringDiffer: @ 000122c8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::setAttrStringDiffer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}


// ===== MDEditorController::.cxx_destruct @ 000122d0 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDEditorController::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== MDEditorController::applyASTOperationResults:inTextView: @ 0001c104 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::applyASTOperationResults_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  objc_stub::applyASTOperationResults_inTextView_postTextDidChange_(param_1,param_3,param_4,1);
  return;
}


// ===== MDEditorController::applyASTOperationResults:inTextView:postTextDidChange: @ 0001c10c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x24 bytes */

void MDEditorController::applyASTOperationResults_inTextView_postTextDidChange_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined1 auVar9 [16];
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
  IVar1 = objc_stub::firstObject(param_3);
  IVar1 = objc_stub::replacementRange(IVar1);
  IVar2 = objc_stub::lastObject(param_3);
  IVar2 = objc_stub::replacementRange(IVar2);
  auVar9 = _NSUnionRange(IVar1,extraout_x1,IVar2,extraout_x1_00);
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::attributedStringRangeFromStringRange_(IVar1,auVar9._0_8_,auVar9._8_8_);
  IVar2 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::stringByExpandingTextAttachmentsInRange_(IVar2,IVar1,extraout_x1_01);
  IVar2 = objc_stub::mutableCopy(IVar2);
  IVar3 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::stringRangeFromAttributedStringRange_(IVar3,IVar1,0);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar4 != 0) {
    lVar7 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        IVar8 = *(ID *)(lStack_128 + IVar6 * 8);
        IVar5 = objc_stub::replacementRange(IVar8);
        IVar8 = objc_stub::replacementString(IVar8);
        objc_stub::replaceCharactersInRange_withString_(IVar2,IVar5 - IVar3,extraout_x1_02,IVar8);
        IVar6 = IVar6 + 1;
      } while (IVar4 != IVar6);
      IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar4 != 0);
  }
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
  IVar2 = objc_stub::initWithString_(IVar3,IVar2);
  objc_stub::replaceCharactersInRange_withAttributedString_(param_4,IVar1,extraout_x1_01,IVar2);
  IVar1 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::lastObject(param_3);
  IVar2 = objc_stub::proposedSelection(IVar2);
  IVar1 = objc_stub::attributedStringRangeFromStringRange_(IVar1,IVar2,extraout_x1_03);
  objc_stub::setSelectedRange_(param_4,IVar1,extraout_x1_04);
  if (param_5 != 0) {
    objc_stub::postTextDidChangeNotification(param_4);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDEditorController::expandTextAttachmentsForASTOperationResults:inTextView: @ 0001c42c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::expandTextAttachmentsForASTOperationResults_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x1;
  undefined8 extraout_x1_00;
  long extraout_x1_01;
  ID IVar5;
  long lVar6;
  ID IVar7;
  undefined *local_168;
  undefined8 local_160;
  code *local_158;
  undefined *puStack_150;
  ID local_148;
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
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_140,auStack_100,0x10)
  ;
  if (IVar1 != 0) {
    lVar6 = *local_130;
    do {
      IVar7 = 0;
      do {
        if (*local_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        IVar5 = *(ID *)(lStack_138 + IVar7 * 8);
        objc_stub::replacementRange(IVar5);
        if (extraout_x1 == 0) {
          IVar2 = objc_stub::replacementString(IVar5);
          IVar2 = objc_stub::isEqualToString_(IVar2,&cf___);
          if ((IVar2 & 1) == 0) goto LAB_0001c51c;
        }
        else {
LAB_0001c51c:
          IVar2 = objc_stub::textStorage(param_4);
          IVar5 = objc_stub::replacementRange(IVar5);
          IVar5 = objc_stub::attributedStringRangeFromStringRange_(IVar2,IVar5,extraout_x1_00);
          if (extraout_x1_01 == 0) {
            IVar2 = objc_stub::textStorage(param_4);
            IVar2 = objc_stub::textAttachmentAtIndex_(IVar2,IVar5);
            if (IVar2 != 0) {
              uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachment);
              uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
              if ((uVar4 & 1) != 0) {
                IVar2 = objc_stub::representedAttributedText(IVar2);
                objc_stub::replaceCharactersInRange_withAttributedString_(param_4,IVar5,1,IVar2);
              }
            }
          }
          else {
            IVar2 = objc_stub::textStorage(param_4);
            local_168 = PTR___NSConcreteStackBlock_0005ebe0;
            local_160 = 0xc2000000;
            local_158 = 
            ___93__MDEditorController_TextOperations__expandTextAttachmentsForASTOperationResults_inTextView___block_invoke
            ;
            puStack_150 = &___block_descriptor_40_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
            local_148 = param_4;
            objc_stub::enumerateAttribute_inRange_options_usingBlock_
                      (IVar2,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,IVar5,
                       extraout_x1_01,0,&local_168);
          }
        }
        IVar7 = IVar7 + 1;
      } while (IVar1 != IVar7);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_140,auStack_100,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== MDEditorController::applyTextOperationResult:inTextView: @ 0001c75c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::applyTextOperationResult_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  IVar1 = objc_stub::replacementAttributedString(param_3);
  if (IVar1 == 0) {
    IVar1 = objc_stub::proposedSelectionRange(param_3);
    objc_stub::setSelectedRange_(param_4,IVar1,extraout_x1_01);
  }
  else {
    IVar1 = objc_stub::undoManager(param_4);
    objc_stub::beginUndoGrouping(IVar1);
    IVar1 = objc_stub::replacementRange(param_3);
    IVar2 = objc_stub::replacementAttributedString(param_3);
    IVar3 = objc_stub::proposedSelectionRange(param_3);
    objc_stub::replaceCharactersInRange_withAttributedString_selectRange_
              (param_4,IVar1,extraout_x1,IVar2,IVar3,extraout_x1_00);
    objc_stub::replacementRange(param_3);
    IVar1 = objc_stub::replacementAttributedString(param_3);
    objc_stub::length(IVar1);
    IVar1 = objc_stub::needStyling(param_3);
    if ((int)IVar1 != 0) {
      objc_stub::postTextDidChangeNotification(param_4);
    }
    IVar1 = objc_stub::undoManager(param_4);
    objc_stub::endUndoGrouping(IVar1);
  }
  return;
}


// ===== MDEditorController::applyTextOperationResults:inTextView: @ 0001c8b0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::applyTextOperationResults_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 auVar1 [16];
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  ID IVar6;
  ulong uVar7;
  ID IVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_138;
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
  IVar2 = objc_stub::undoManager(param_4);
  objc_stub::beginUndoGrouping(IVar2);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar2 == 0) {
    IVar2 = objc_stub::selectedRange(param_4);
    objc_stub::scrollRangeToVisible_(param_4,IVar2,extraout_x1_04);
  }
  else {
    lVar9 = *local_120;
    auVar10 = ZEXT816(0x7fffffffffffffff);
    do {
      IVar6 = 0;
      do {
        local_138 = auVar10._8_8_;
        uVar7 = auVar10._0_8_;
        if (*local_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        IVar8 = *(ID *)(lStack_128 + IVar6 * 8);
        IVar3 = objc_stub::replacementAttributedString(IVar8);
        if (IVar3 == 0) {
          IVar3 = objc_stub::proposedSelectionRange(IVar8);
          objc_stub::setSelectedRange_(param_4,IVar3,extraout_x1_01);
        }
        else {
          IVar3 = objc_stub::replacementRange(IVar8);
          IVar4 = objc_stub::replacementAttributedString(IVar8);
          IVar5 = objc_stub::proposedSelectionRange(IVar8);
          objc_stub::replaceCharactersInRange_withAttributedString_selectRange_
                    (param_4,IVar3,extraout_x1,IVar4,IVar5,extraout_x1_00);
          IVar3 = objc_stub::replacementRange(IVar8);
          IVar4 = objc_stub::replacementAttributedString(IVar8);
          IVar4 = objc_stub::length(IVar4);
          auVar1._8_8_ = IVar4;
          auVar1._0_8_ = IVar3;
          IVar5 = objc_stub::needStyling(IVar8);
          if (((int)IVar5 != 0) && (auVar10 = auVar1, uVar7 != 0x7fffffffffffffff)) {
            if (IVar3 < uVar7) {
              objc_stub::replacementRange(IVar8);
              IVar8 = objc_stub::replacementAttributedString(IVar8);
              IVar8 = objc_stub::length(IVar8);
              uVar7 = (uVar7 - extraout_x1_02) + IVar8;
            }
            auVar10 = _NSUnionRange(uVar7,local_138,IVar3,IVar4);
          }
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
    IVar2 = objc_stub::selectedRange(param_4);
    objc_stub::scrollRangeToVisible_(param_4,IVar2,extraout_x1_03);
    if (auVar10._0_8_ != 0x7fffffffffffffff) {
      objc_stub::postTextDidChangeNotification(param_4);
    }
  }
  IVar2 = objc_stub::undoManager(param_4);
  objc_stub::endUndoGrouping(IVar2);
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== MDEditorController::toggleTaskInTextView:range:style: @ 0001cb9c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDEditorController::toggleTaskInTextView_range_style_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,unsigned_long_long param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::stringRangeFromAttributedStringRange_
                    (IVar2,param_4.field0_0x0,param_4.field1_0x8);
  IVar3 = objc_stub::textStorage(param_3);
  IVar3 = objc_stub::ast(IVar3);
  IVar1 = objc_stub::toggleTask_selectionRange_style_
                    (IVar3,IVar2,extraout_x1_01,IVar1,extraout_x1_00,param_5);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::orderTasksInTextView:range: @ 0001ccd8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::orderTasksInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  
  IVar1 = _objc_opt_new(&objc::class_t::MDOrderTaskListTextOperation);
  IVar2 = objc_stub::textStorage(param_3);
  IVar3 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::resultForAttributedString_inRange_selectionRange_
                    (IVar1,IVar2,param_4.field0_0x0,param_4.field1_0x8,IVar3,extraout_x1);
  objc_stub::applyTextOperationResult_inTextView_(param_1,IVar1,param_3);
  return;
}


// ===== MDEditorController::textViewShouldDeleteBackward: @ 0001cd9c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::textViewShouldDeleteBackward_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  bool bVar4;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar2 = objc_stub::deletePrevious_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00)
  ;
  IVar3 = objc_stub::count(IVar2);
  if (IVar3 == 0) {
LAB_0001cedc:
    bVar4 = 1;
  }
  else {
    IVar3 = objc_stub::count(IVar2);
    if (IVar3 == 1) {
      IVar3 = objc_stub::firstObject(IVar2);
      IVar3 = objc_stub::replacementRange(IVar3);
      if ((IVar3 == IVar1) && (extraout_x1_01 == extraout_x1_00)) {
        IVar1 = objc_stub::firstObject(IVar2);
        IVar1 = objc_stub::replacementString(IVar1);
        IVar1 = objc_stub::isEqual_(IVar1,&cf___);
        if ((IVar1 & 1) != 0) goto LAB_0001cedc;
      }
    }
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar2,param_3);
    bVar4 = 0;
  }
  return bVar4;
}


// ===== MDEditorController::textViewShouldDeleteForward: @ 0001cf34 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::textViewShouldDeleteForward_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  bool bVar4;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar2 = objc_stub::deleteNext_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar3 = objc_stub::count(IVar2);
  if (IVar3 == 0) {
LAB_0001d074:
    bVar4 = 1;
  }
  else {
    IVar3 = objc_stub::count(IVar2);
    if (IVar3 == 1) {
      IVar3 = objc_stub::firstObject(IVar2);
      IVar3 = objc_stub::replacementRange(IVar3);
      if ((IVar3 == IVar1) && (extraout_x1_01 == extraout_x1_00)) {
        IVar1 = objc_stub::firstObject(IVar2);
        IVar1 = objc_stub::replacementString(IVar1);
        IVar1 = objc_stub::isEqual_(IVar1,&cf___);
        if ((IVar1 & 1) != 0) goto LAB_0001d074;
      }
    }
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar2,param_3);
    bVar4 = 0;
  }
  return bVar4;
}


// ===== MDEditorController::insertYamlInTextView: @ 0001d0cc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::insertYamlInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 extraout_x1;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
  IVar1 = objc_stub::initWithString_(IVar1,&cf____property____);
  objc_stub::replaceCharactersInRange_withAttributedString_(param_3,0,0,IVar1);
  objc_stub::setSelectedRange_(param_3,4,8);
  IVar1 = objc_stub::selectedRange(param_3);
  objc_stub::scrollRangeToVisible_(param_3,IVar1,extraout_x1);
  objc_stub::postTextDidChangeNotification(param_3);
  return;
}


// ===== MDEditorController::insertThematicBreakInTextView: @ 0001d160 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::insertThematicBreakInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::insertThematicBreak_selectionRange_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::canInsertTableInTextView: @ 0001d24c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::canInsertTableInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::insertTable_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar1 = objc_stub::count(IVar1);
  return (bool)(IVar1 != 0);
}


// ===== MDEditorController::insertTableInTextView: @ 0001d32c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::insertTableInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::insertTable_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::insertFootnoteInTextView: @ 0001d418 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::insertFootnoteInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar3 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar1 = objc_stub::textStorage(param_3);
  IVar1 = objc_stub::ast(IVar1);
  uVar4 = _objc_opt_class(param_1);
  IVar2 = objc_stub::bundleForClass_((ID)&_OBJC_CLASS___NSBundle,uVar4);
  IVar2 = objc_stub::localizedStringForKey_value_table_(IVar2,&cf_footnotetext,&cf___,0);
  IVar2 = objc_stub::insertFootnoteWithDefinitionText_atRange_selectionRange_
                    (IVar1,IVar2,IVar3,extraout_x1_00,IVar3,extraout_x1_00);
  IVar5 = objc_stub::count(IVar2);
  uVar4 = extraout_x1_00;
  if (IVar5 != 0) {
    objc_stub::applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar2,param_3,0);
    IVar2 = objc_stub::lastObject(IVar2);
    IVar3 = objc_stub::proposedSelection(IVar2);
    uVar4 = extraout_x1_01;
  }
  IVar2 = objc_stub::markdownLength(IVar1);
  IVar2 = objc_stub::renumberFootnotesIn_selectionRange_(IVar1,0,IVar2,IVar3,uVar4);
  IVar5 = objc_stub::count(IVar2);
  if (IVar5 != 0) {
    objc_stub::applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar2,param_3,0);
    IVar2 = objc_stub::lastObject(IVar2);
    IVar3 = objc_stub::proposedSelection(IVar2);
    uVar4 = extraout_x1_02;
  }
  IVar2 = objc_stub::markdownLength(IVar1);
  IVar1 = objc_stub::reorderFootnoteDefinitionsIn_selectionRange_(IVar1,0,IVar2,IVar3,uVar4);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar1,param_3,0);
    IVar1 = objc_stub::lastObject(IVar1);
    objc_stub::proposedSelection(IVar1);
  }
  objc_stub::postTextDidChangeNotification(param_3);
  return;
}


// ===== MDEditorController::insertFootnoteDefinitionForReferenceInRange:inTextView: @ 0001d690 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::insertFootnoteDefinitionForReferenceInRange_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::selectedRange(param_4);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::stringRangeFromAttributedStringRange_
                    (IVar2,param_3.field0_0x0,param_3.field1_0x8);
  IVar3 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::ast(IVar3);
  uVar4 = _objc_opt_class(param_1);
  IVar5 = objc_stub::bundleForClass_((ID)&_OBJC_CLASS___NSBundle,uVar4);
  IVar5 = objc_stub::localizedStringForKey_value_table_(IVar5,&cf_footnotetext,&cf___,0);
  IVar1 = objc_stub::insertFootnoteDefinitionWithText_forReferenceAtRange_selectionRange_
                    (IVar3,IVar5,IVar2,extraout_x1_01,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}


// ===== MDEditorController::renumberFootnotesInTextView: @ 0001d824 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::renumberFootnotesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar3 = objc_stub::markdownLength(IVar2);
  IVar3 = objc_stub::renumberFootnotesIn_selectionRange_(IVar2,0,IVar3,IVar1,extraout_x1_00);
  IVar4 = objc_stub::count(IVar3);
  uVar5 = extraout_x1_00;
  if (IVar4 != 0) {
    objc_stub::applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar3,param_3,0);
    IVar1 = objc_stub::lastObject(IVar3);
    IVar1 = objc_stub::proposedSelection(IVar1);
    uVar5 = extraout_x1_01;
  }
  IVar3 = objc_stub::markdownLength(IVar2);
  IVar1 = objc_stub::reorderFootnoteDefinitionsIn_selectionRange_(IVar2,0,IVar3,IVar1,uVar5);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar1,param_3,0);
    IVar1 = objc_stub::lastObject(IVar1);
    objc_stub::proposedSelection(IVar1);
  }
  objc_stub::postTextDidChangeNotification(param_3);
  return;
}


// ===== MDEditorController::canAddIndentInTextView: @ 0001d9c8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::canAddIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::indent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar1 = objc_stub::count(IVar1);
  return (bool)(IVar1 != 0);
}


// ===== MDEditorController::addIndentInTextView: @ 0001daa8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::addIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::indent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::canRemoveIndentInTextView: @ 0001db94 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::canRemoveIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::outdent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar1 = objc_stub::count(IVar1);
  return (bool)(IVar1 != 0);
}


// ===== MDEditorController::removeIndentInTextView: @ 0001dc74 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::removeIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::outdent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::toggleFoldingAtIndex:inTextView: @ 0001dd60 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::toggleFoldingAtIndex_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,param_3,0);
  IVar2 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::selectedRange(param_4);
  IVar2 = objc_stub::stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1_00);
  IVar3 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::ast(IVar3);
  IVar1 = objc_stub::toggleFoldInRange_selectionRange_(IVar3,IVar1,extraout_x1,IVar2,extraout_x1_01)
  ;
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}


// ===== MDEditorController::canToggleFoldingAtIndex:inTextView: @ 0001de88 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

bool MDEditorController::canToggleFoldingAtIndex_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,param_3,0);
  IVar2 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::selectedRange(param_4);
  IVar2 = objc_stub::stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1_00);
  IVar3 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::ast(IVar3);
  IVar1 = objc_stub::toggleFoldInRange_selectionRange_(IVar3,IVar1,extraout_x1,IVar2,extraout_x1_01)
  ;
  IVar1 = objc_stub::count(IVar1);
  return (bool)(IVar1 != 0);
}


// ===== MDEditorController::hasFoldableContentAtIndex:inTextView: @ 0001dfa4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

bool MDEditorController::hasFoldableContentAtIndex_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                    (IVar1,*(undefined8 *)PTR__PMKFoldableAttributeName_0005e908,param_3,0);
  return (bool)(IVar1 != 0);
}


// ===== MDEditorController::foldAllHeadingInTextView: @ 0001e00c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::foldAllHeadingInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::foldAllHeadingSelectionRange_(IVar2,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::unfoldAllHeadingInTextView: @ 0001e0f0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::unfoldAllHeadingInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::unfoldAllHeadingSelectionRange_(IVar2,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::unfoldAtASTRangeEdges:inTextView: @ 0001e1d4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDEditorController::unfoldAtASTRangeEdges_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::ast(IVar1);
  IVar2 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::selectedRange(param_4);
  IVar2 = objc_stub::stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1);
  IVar1 = objc_stub::unfoldAtRangeEdges_selectionRange_
                    (IVar1,param_3.field0_0x0,param_3.field1_0x8,IVar2,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}


// ===== MDEditorController::textViewShouldInsertNewLine: @ 0001e2d0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::textViewShouldInsertNewLine_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  bool bVar4;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar2 = objc_stub::insertNewlineInRange_selectionRange_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar3 = objc_stub::count(IVar2);
  if (IVar3 == 0) {
LAB_0001e410:
    bVar4 = 1;
  }
  else {
    IVar3 = objc_stub::count(IVar2);
    if (IVar3 == 1) {
      IVar3 = objc_stub::firstObject(IVar2);
      IVar3 = objc_stub::replacementRange(IVar3);
      if ((IVar3 == IVar1) && (extraout_x1_01 == extraout_x1_00)) {
        IVar1 = objc_stub::firstObject(IVar2);
        IVar1 = objc_stub::replacementString(IVar1);
        IVar1 = objc_stub::isEqual_(IVar1,&cf_newline_s_);
        if ((IVar1 & 1) != 0) goto LAB_0001e410;
      }
    }
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar2,param_3);
    bVar4 = 0;
  }
  return bVar4;
}


// ===== MDEditorController::textViewShouldInsertTab: @ 0001e468 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::textViewShouldInsertTab_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::indent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return (bool)(IVar2 == 0);
}


// ===== MDEditorController::textViewShouldRemoveTab: @ 0001e568 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::textViewShouldRemoveTab_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::outdent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return (bool)(IVar2 == 0);
}


// ===== MDEditorController::moveParagraphUpInTextView: @ 0001e668 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::moveParagraphUpInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::moveLinesUpIn_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::moveParagraphDownInTextView: @ 0001e754 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::moveParagraphDownInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::selectedRange(param_3);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::moveLinesDownIn_selectionRange_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}


// ===== MDEditorController::dragRange:toRange:inTextView:dropAsNewLine: @ 0001e840 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x3c bytes */

bool MDEditorController::dragRange_toRange_inTextView_dropAsNewLine_
               (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4,ID param_5,bool param_6)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_opt_new(&objc::class_t::MDDragTextOperation);
  IVar2 = objc_stub::textStorage(param_5);
  objc_stub::selectedRange(param_5);
  IVar1 = objc_stub::
          resultForAttributedString_dragRange_destinationRange_selectionRange_dropAsNewLine_
                    (IVar1,IVar2,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  if (IVar1 != 0) {
    objc_stub::applyTextOperationResult_inTextView_(param_1,IVar1,param_5);
  }
  return (bool)(IVar1 == 0);
}


// ===== MDEditorController::selectionToFirstBlockMarkerInTextView:limitToLineRange: @ 0001e940 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x1c bytes */

_NSRange MDEditorController::selectionToFirstBlockMarkerInTextView_limitToLineRange_
                   (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long extraout_x1_02;
  unsigned_long_long uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  _NSRange _Var10;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  
  IVar2 = objc_stub::selectedRange(param_3);
  IVar3 = objc_stub::textStorage(param_3);
  IVar3 = objc_stub::length(IVar3);
  if (IVar2 < IVar3) {
    if (IVar2 == 0) {
      lVar7 = 0;
    }
    else {
      IVar3 = objc_stub::string(param_3);
      IVar3 = objc_stub::characterAtIndex_(IVar3,IVar2 - 1);
      lVar7 = IVar2 - (((uint)IVar3 & 0xffff) != 10);
    }
  }
  else {
    lVar7 = IVar2 - 1;
  }
  lStack_58 = 0;
  local_60 = 0x7fffffffffffffff;
  if (param_4 == 0) {
    IVar3 = objc_stub::textStorage(param_3);
    IVar3 = objc_stub::string(IVar3);
    IVar3 = objc_stub::paragraphRangeForRange_(IVar3,IVar2,extraout_x1);
    uVar9 = extraout_x1_01;
  }
  else {
    IVar3 = objc_stub::layoutManager(param_3);
    IVar4 = objc_stub::layoutManager(param_3);
    IVar4 = objc_stub::glyphIndexForCharacterAtIndex_(IVar4,lVar7);
    objc_stub::lineFragmentRectForGlyphAtIndex_effectiveRange_(IVar3,IVar4,&local_70);
    IVar3 = objc_stub::layoutManager(param_3);
    IVar3 = objc_stub::characterRangeForGlyphRange_actualGlyphRange_(IVar3,local_70,uStack_68,0);
    uVar9 = extraout_x1_00;
  }
  IVar4 = objc_stub::textStorage(param_3);
  IVar4 = objc_stub::isRangeInsideList_(IVar4,lVar7,0);
  IVar5 = objc_stub::textStorage(param_3);
  if ((int)IVar4 == 0) {
    IVar4 = objc_stub::isRangeInsideBlockquote_(IVar5,lVar7,0);
    IVar5 = objc_stub::textStorage(param_3);
    if ((int)IVar4 == 0) {
      IVar4 = objc_stub::isRangeInsideHeader_(IVar5,lVar7,0);
      if ((int)IVar4 != 0) {
        IVar4 = objc_stub::textStorage(param_3);
        objc_stub::headerRangeAtIndex_markerRange_(IVar4,lVar7,&local_60);
      }
    }
    else {
      objc_stub::rangeOfBlockquoteItemAtIndex_markerRange_(IVar5,lVar7,&local_60);
    }
  }
  else {
    objc_stub::rangeOfListItemAtIndex_markerRange_(IVar5,lVar7,&local_60);
  }
  uVar8 = 0x7fffffffffffffff;
  if ((local_60 == 0x7fffffffffffffff) ||
     (_NSIntersectionRange(IVar3,uVar9,local_60,lStack_58), extraout_x1_02 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar1 = lStack_58 + local_60;
    uVar8 = 0x7fffffffffffffff;
    if (uVar1 < IVar2) {
      uVar8 = uVar1;
    }
    uVar6 = 0;
    if (uVar1 < IVar2) {
      uVar6 = (IVar2 + extraout_x1) - uVar1;
    }
  }
  _Var10.field1_0x8 = uVar6;
  _Var10.field0_0x0 = uVar8;
  return _Var10;
}


// ===== MDEditorController::handleMoveToLeftEndOfLineInTextView:extendSelection: @ 0001ec1c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x1c bytes */

bool MDEditorController::handleMoveToLeftEndOfLineInTextView_extendSelection_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong extraout_x1_01;
  bool bVar5;
  
  IVar2 = objc_stub::selectionToFirstBlockMarkerInTextView_limitToLineRange_(param_1,param_3,1);
  IVar3 = objc_stub::textStorage(param_3);
  IVar3 = objc_stub::string(IVar3);
  IVar4 = objc_stub::selectedRange(param_3);
  IVar3 = objc_stub::paragraphRangeForRange_(IVar3,IVar4,extraout_x1_00);
  if (IVar2 == 0x7fffffffffffffff) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    if ((IVar3 <= IVar2) && (IVar2 - IVar3 < extraout_x1_01)) {
      uVar1 = extraout_x1;
      if (param_4 == 0) {
        uVar1 = 0;
      }
      objc_stub::setSelectedRange_(param_3,IVar2,uVar1);
      bVar5 = 1;
    }
  }
  return bVar5;
}


// ===== MDEditorController::handleDeleteToBeginningOfLineInTextView: @ 0001ed18 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

bool MDEditorController::handleDeleteToBeginningOfLineInTextView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong extraout_x1_01;
  bool bVar4;
  
  IVar1 = objc_stub::selectionToFirstBlockMarkerInTextView_limitToLineRange_(param_1,param_3,1);
  IVar2 = objc_stub::textStorage(param_3);
  IVar2 = objc_stub::string(IVar2);
  IVar3 = objc_stub::selectedRange(param_3);
  IVar2 = objc_stub::paragraphRangeForRange_(IVar2,IVar3,extraout_x1_00);
  if (IVar1 == 0x7fffffffffffffff) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    if ((IVar2 <= IVar1) && (IVar1 - IVar2 < extraout_x1_01)) {
      IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
      IVar2 = objc_stub::initWithString_(IVar2,&cf___);
      objc_stub::replaceCharactersInRange_withAttributedString_(param_3,IVar1,extraout_x1,IVar2);
      objc_stub::postTextDidChangeNotification(param_3);
      bVar4 = 1;
    }
  }
  return bVar4;
}


// ===== MDEditorController::pasteCorrectionForReplacementString:range:inTextView: @ 0001ee3c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

bool MDEditorController::pasteCorrectionForReplacementString_range_inTextView_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  
  IVar1 = objc_stub::textStorage(param_5);
  IVar2 = objc_stub::selectedRange(param_5);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_5);
  IVar2 = objc_stub::stringRangeFromAttributedStringRange_
                    (IVar2,param_4.field0_0x0,param_4.field1_0x8);
  IVar3 = objc_stub::length(param_3);
  IVar1 = objc_stub::offsetSelectionRange_forReplacementRange_replacementLenght_
                    ((ID)&_OBJC_CLASS___NSAttributedString,IVar1,extraout_x1_00,IVar2,extraout_x1_01
                     ,IVar3);
  IVar3 = objc_stub::textStorage(param_5);
  IVar3 = objc_stub::ast(IVar3);
  IVar1 = objc_stub::pasteCorrectionIn_replacementString_selectionRange_
                    (IVar3,IVar2,extraout_x1_01,param_3,IVar1,extraout_x1_02);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_5);
  }
  return (bool)(IVar2 != 0);
}


// ===== MDEditorController::applyToggleStyleOperation:inTextView: @ 00038234 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::applyToggleStyleOperation_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::selectedRange(param_4);
  IVar3 = objc_stub::selectedRange(param_4);
  IVar1 = objc_stub::resultForAttributedString_inRange_selectionRange_
                    (param_3,IVar1,IVar2,extraout_x1,IVar3,extraout_x1_00);
  objc_stub::applyTextOperationResult_inTextView_(param_1,IVar1,param_4);
  return;
}


// ===== MDEditorController::toggleInlineStyle:inTextView: @ 000382fc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::toggleInlineStyle_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar4;
  undefined8 uVar5;
  
  IVar1 = objc_stub::selectedRange(param_4);
  objc_stub::selectedRange(param_4);
  if (extraout_x1_00 == 1) {
    IVar2 = objc_stub::textStorage(param_4);
    IVar3 = objc_stub::selectedRange(param_4);
    IVar2 = objc_stub::textAttachmentAtIndex_(IVar2,IVar3);
    IVar2 = objc_stub::isHighlighter(IVar2);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::selectedRange(param_4);
      IVar3 = objc_stub::textStorage(param_4);
      IVar1 = objc_stub::highlighterRangeAtIndex_(IVar3,IVar1);
      uVar4 = 1;
      uVar5 = extraout_x1_01;
      goto LAB_000383e0;
    }
  }
  uVar4 = 0;
  IVar2 = 0x7fffffffffffffff;
  uVar5 = extraout_x1;
LAB_000383e0:
  IVar3 = objc_stub::textStorage(param_4);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar3,IVar1,uVar5);
  IVar3 = objc_stub::textStorage(param_4);
  IVar3 = objc_stub::ast(IVar3);
  IVar1 = objc_stub::toggleInlineStyle_selectionRange_style_
                    (IVar3,IVar1,extraout_x1_02,IVar1,extraout_x1_02,param_3);
  IVar3 = objc_stub::count(IVar1);
  if (IVar3 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  if (IVar2 != 0x7fffffffffffffff) {
    IVar1 = objc_stub::textStorage(param_4);
    IVar1 = objc_stub::textAttachmentAtIndex_(IVar1,IVar2);
    IVar1 = objc_stub::isHighlighter(IVar1);
    if ((int)IVar1 != 0) {
      objc_stub::setSelectedRange_(param_4,IVar2,uVar4);
    }
  }
  return;
}


// ===== MDEditorController::toggleStrongInTextView: @ 0003850c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleStrongInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,0,param_3);
  return;
}


// ===== MDEditorController::toggleEmphasisInTextView: @ 00038518 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleEmphasisInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,1,param_3);
  return;
}


// ===== MDEditorController::toggleStrikethroughInTextView: @ 00038524 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleStrikethroughInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,2,param_3);
  return;
}


// ===== MDEditorController::toggleUnderlineInTextView: @ 00038530 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleUnderlineInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,3,param_3);
  return;
}


// ===== MDEditorController::toggleCodeInTextView: @ 0003853c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCodeInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,10,param_3);
  return;
}


// ===== MDEditorController::toggleMathSpanInTextView: @ 00038548 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleMathSpanInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,0xb,param_3);
  return;
}


// ===== MDEditorController::toggleHighlighterInTextView: @ 00038554 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,4,param_3);
  return;
}


// ===== MDEditorController::toggleRedHighlighterInTextView: @ 00038560 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleRedHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,5,param_3);
  return;
}


// ===== MDEditorController::toggleBlueHighlighterInTextView: @ 0003856c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleBlueHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,6,param_3);
  return;
}


// ===== MDEditorController::toggleGreenHighlighterInTextView: @ 00038578 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleGreenHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,7,param_3);
  return;
}


// ===== MDEditorController::toggleYellowHighlighterInTextView: @ 00038584 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleYellowHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,8,param_3);
  return;
}


// ===== MDEditorController::togglePurpleHighlighterInTextView: @ 00038590 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::togglePurpleHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleInlineStyle_inTextView_(param_1,9,param_3);
  return;
}


// ===== MDEditorController::toggleBlockStyle:inTextView: @ 0003859c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::toggleBlockStyle_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  IVar1 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::selectedRange(param_4);
  IVar1 = objc_stub::stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = objc_stub::textStorage(param_4);
  IVar2 = objc_stub::ast(IVar2);
  IVar1 = objc_stub::toggleBlockStyle_selectionRange_style_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00,param_3);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}


// ===== MDEditorController::toggleHeadingInTextView:headingLevel: @ 00038698 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void MDEditorController::toggleHeadingInTextView_headingLevel_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  long lVar1;
  
  lVar1 = param_4 - 1;
  if (4 < param_4 - 2) {
    lVar1 = 0;
  }
  objc_stub::toggleBlockStyle_inTextView_(param_1,lVar1,param_3);
  return;
}


// ===== MDEditorController::toggleUnorderedListInTextView: @ 000386b4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleUnorderedListInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,6,param_3);
  return;
}


// ===== MDEditorController::toggleOrderedListInTextView: @ 000386c0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleOrderedListInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,7,param_3);
  return;
}


// ===== MDEditorController::toggleTaskListInTextView: @ 000386cc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleTaskListInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,8,param_3);
  return;
}


// ===== MDEditorController::toggleBlockQuoteInTextView: @ 000386d8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleBlockQuoteInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,9,param_3);
  return;
}


// ===== MDEditorController::toggleCodeBlockInTextView: @ 000386e4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCodeBlockInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,10,param_3);
  return;
}


// ===== MDEditorController::toggleMathBlockInTextView: @ 000386f0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleMathBlockInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,0xb,param_3);
  return;
}


// ===== MDEditorController::toggleCalloutInTextView: @ 000386fc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCalloutInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,0xc,param_3);
  return;
}


// ===== MDEditorController::toggleCalloutNoteInTextView: @ 00038708 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCalloutNoteInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,0xd,param_3);
  return;
}


// ===== MDEditorController::toggleCalloutTipInTextView: @ 00038714 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCalloutTipInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,0xe,param_3);
  return;
}


// ===== MDEditorController::toggleCalloutCautionInTextView: @ 00038720 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCalloutCautionInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,0xf,param_3);
  return;
}


// ===== MDEditorController::toggleCalloutWarningInTextView: @ 0003872c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCalloutWarningInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,0x10,param_3);
  return;
}


// ===== MDEditorController::toggleCalloutImportantInTextView: @ 00038738 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::toggleCalloutImportantInTextView_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::toggleBlockStyle_inTextView_(param_1,0x11,param_3);
  return;
}


// ===== MDEditorController::orderCheckboxesInTextView: @ 00038744 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDEditorController::orderCheckboxesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = _objc_opt_new(&objc::class_t::MDOrderTaskListTextOperation);
  objc_stub::applyToggleStyleOperation_inTextView_(param_1,uVar1,param_3);
  return;
}


