// ===== MDEditorController::init @ 0000d804 =====

ID MDEditorController::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDEditorController;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(&objc::class_t::MDAttributedStringRenderer);
    setAttributedStringRenderer_(self,uVar1);
    uVar1 = _objc_opt_new(&objc::class_t::MDEditorBehaviourController);
    setEditorBehaviourController_(self,uVar1);
    uVar1 = _objc_opt_new(&objc::class_t::MDAttributedStringDiffer);
    setAttrStringDiffer_(self,uVar1);
    IVar2 = attrStringDiffer(self);
    setIgnoreAttachments_(IVar2,1);
    IVar2 = attrStringDiffer(self);
    setIgnoreColorInCodeBlocks_(IVar2,1);
    setUseDiff_(self,1);
  }
  return self;
}

// ===== MDEditorController::loadString:intoTextView: @ 0000d90c =====

void MDEditorController::loadString_intoTextView_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar2 = _objc_alloc(NSAttributedString);
  IVar2 = initWithString_(IVar2,param_3);
  setAttributedString_(IVar1,IVar2);
  performStylingInTextView_withAutomaticTextChanges_(param_1,param_4,0);
  IVar1 = textStorage(param_4);
  IVar1 = length(IVar1);
  rearrangeAttachmentsViewsInTextView_range_(param_1,param_4,0,IVar1);
  IVar1 = undoManager(param_4);
  removeAllActions(IVar1);
  return;
}

// ===== MDEditorController::styledAttributedStringFromString: @ 0000da10 =====

ID MDEditorController::styledAttributedStringFromString_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = attributedStringRenderer(param_1);
  IVar1 = styledAttributedStringFromString_(IVar1,param_3);
  IVar2 = textAttachmentConfigurator(param_1);
  
  validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset_
            (param_1,IVar2,IVar1,0,0);
  IVar2 = autoHideMarkdown(param_1);
  if ((int)IVar2 != 0) {
    IVar2 = length(IVar1);
    hideMarkdownInRange_inAttributedString_(param_1,0,IVar2,IVar1);
  }
  return IVar1;
}

// ===== MDEditorController::performStylingInTextView: @ 0000dad8 =====

void MDEditorController::performStylingInTextView_(ID param_1,SEL param_2,ID param_3)

{
  performStylingInTextView_withAutomaticTextChanges_(param_1,param_3,1);
  return;
}

// ===== MDEditorController::performStylingInTextView:withAutomaticTextChanges: @ 0000dae0 =====

void MDEditorController::performStylingInTextView_withAutomaticTextChanges_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  
  if (param_4 != 0) {
    performAutomaticTextChangesInTextView_(param_1,param_3);
  }
  local_60 = selectedRange(param_3);
  self = textStorage(param_3);
  local_e0 = 
  ___72__MDEditorController_performStylingInTextView_withAutomaticTextChanges___block_invoke;
  local_d0 = param_3;
  IStack_c8 = param_1;
  parseChangesUsingBlock_(self,&local_f0);
  __Block_object_dispose(&local_b0,8);
  __Block_object_dispose(&local_80,8);
  return;
}

// ===== MDEditorController::invalidateDisplayForStyledRange:inTextView: @ 0000e370 =====

void MDEditorController::invalidateDisplayForStyledRange_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar5 = param_3.field1_0x8;
  uVar4 = param_3.field0_0x0;
  IVar1 = textStorage(param_4);
  IVar1 = length(IVar1);
  if (uVar4 < IVar1) {
    IVar1 = textStorage(param_4);
    IVar1 = string(IVar1);
    IVar1 = characterAtIndex_(IVar1,uVar4);
    if ((int)IVar1 == 10) {
      setNeedsDisplay(param_4);
      return;
    }
  }
  IVar1 = enclosingScrollView(param_4);
  documentVisibleRect(IVar1);
  IVar1 = layoutManager(param_4);
  IVar2 = textContainer(param_4);
  IVar1 = glyphRangeForBoundingRectWithoutAdditionalLayout_inTextContainer_
                    (IVar1,extraout_d0,in_d1,in_d2,in_d3,IVar2);
  IVar2 = layoutManager(param_4);
  IVar1 = characterRangeForGlyphRange_actualGlyphRange_(IVar2,IVar1,extraout_x1,0);
  auVar6 = _NSIntersectionRange(IVar1,extraout_x1_00,uVar4,uVar5);
  if (auVar6._8_8_ != 0) {
    IVar1 = layoutManager(param_4);
    IVar1 = glyphRangeForCharacterRange_actualCharacterRange_
                      (IVar1,auVar6._0_8_,auVar6._8_8_,0);
    IVar2 = layoutManager(param_4);
    IVar3 = textContainer(param_4);
    boundingRectForGlyphRange_inTextContainer_(IVar2,IVar1,extraout_x1_01,IVar3);
    setNeedsDisplayInRect_avoidAdditionalLayout_
              (param_4,extraout_d0_00,in_d1,in_d2,in_d3,1);
  }
  IVar1 = textStorage(param_4);
  IVar1 = string(IVar1);
  IVar1 = previousParagraphForRange_(IVar1,uVar4,uVar5);
  if (IVar1 != 0x7fffffffffffffff) {
    param_3 = (_NSRange)_NSUnionRange(uVar4,uVar5,IVar1,extraout_x1_02);
  }
  IVar1 = textStorage(param_4);
  IVar1 = string(IVar1);
  IVar1 = nextParagraphForRange_(IVar1,param_3.field0_0x0,param_3.field1_0x8);
  if (IVar1 != 0x7fffffffffffffff) {
    param_3 = (_NSRange)_NSUnionRange(param_3.field0_0x0,param_3.field1_0x8,IVar1,extraout_x1_03);
  }
  IVar1 = textStorage(param_4);
  IVar1 = extendRangeToFullyContainBlockquote_
                    (IVar1,param_3.field0_0x0,param_3.field1_0x8);
  IVar2 = textStorage(param_4);
  IVar2 = isRangeInsideBlockquote_(IVar2,IVar1,extraout_x1_04);
  if ((int)IVar2 != 0) {
    IVar2 = layoutManager(param_4);
    invalidateDisplayForCharacterRange_(IVar2,IVar1,extraout_x1_04);
  }
  return;
}

// ===== MDEditorController::asyncStylerCompletionBlockForTextView: @ 0000e738 =====

ID MDEditorController::asyncStylerCompletionBlockForTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  return (ID)local_60;
}

// ===== MDEditorController::asyncTextStyler:styledString:asyncAttributeUUID:attributeName:attributeOffsetRange:textView: @ 0000e814 =====

void MDEditorController::
     asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,_NSRange param_7,
               ID param_8)

{
  
  self = mainQueue(NSOperationQueue);
  local_90 = 
  ___114__MDEditorController_asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView___block_invoke
  local_80 = param_8;
  local_78 = param_5;
  local_70 = param_6;
  local_68 = param_4;
  local_60 = param_7.field0_0x0;
  uStack_58 = param_7.field1_0x8;
  addOperationWithBlock_(self,&local_a0);
  return;
}

// ===== MDEditorController::diffRangeFromInnerAttrString:outerAttrString:inOuterRange:outerDiffRange: @ 0000ee60 =====

_NSRange MDEditorController::
         diffRangeFromInnerAttrString_outerAttrString_inOuterRange_outerDiffRange_
                   (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5,_NSRange *param_6)

{
  
  IVar1 = useDiff(param_1);
  if ((int)IVar1 == 0) {
    IVar1 = length(param_3);
    IVar2 = 0;
    param_6->field0_0x0 = param_5.field0_0x0;
    param_6->field1_0x8 = param_5.field1_0x8;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    IVar1 = attrStringDiffer(param_1);
    IVar2 = diffRangebetweenAttributedString_andAttributedString_inRange_secondDiffRange_
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

void MDEditorController::performAutomaticTextChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = isDictationActive(param_3);
  if ((IVar1 & 1) == 0) {
    IVar1 = undoManager(param_3);
    IVar1 = isUndoing(IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = undoManager(param_3);
      IVar1 = isRedoing(IVar1);
      if ((int)IVar1 == 0) {
        IVar1 = textStorage(param_3);
        IVar1 = currentReparsedRange(IVar1);
        if (IVar1 != 0x7fffffffffffffff) {
          IVar1 = textStorage(param_3);
          IVar1 = ast(IVar1);
          IVar1 = parseInlinesOnly(IVar1);
          IVar2 = textStorage(param_3);
          IVar3 = selectedRange(param_3);
          IVar4 = stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1);
          IVar2 = textStorage(param_3);
          IVar2 = currentReparsedRange(IVar2);
          IVar3 = textStorage(param_3);
          IVar3 = ast(IVar3);
          if ((int)IVar1 == 0) {
            IVar1 = renumberOrderedListInRange_selectionRange_
                              (IVar3,IVar2,extraout_x1_01,IVar4,extraout_x1_00);
            IVar2 = count(IVar1);
            uVar5 = extraout_x1_00;
            if (IVar2 != 0) {
              applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = textStorage(param_3);
              IVar2 = selectedRange(param_3);
              IVar4 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_02);
              uVar5 = extraout_x1_03;
            }
            IVar1 = textStorage(param_3);
            currentReparsedRange(IVar1);
            IVar1 = textStorage(param_3);
            IVar1 = ast(IVar1);
            IVar1 = unfoldAtRangeEdges_selectionRange_(IVar1,IVar4,uVar5,IVar4,uVar5);
            IVar2 = count(IVar1);
            if (IVar2 != 0) {
              applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = textStorage(param_3);
              IVar2 = selectedRange(param_3);
              IVar4 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_04);
              uVar5 = extraout_x1_05;
            }
            IVar1 = textStorage(param_3);
            IVar1 = currentReparsedRange(IVar1);
            IVar2 = textStorage(param_3);
            IVar2 = ast(IVar2);
            IVar1 = removeStrayMetaCommentInRange_selectionRange_
                              (IVar2,IVar1,extraout_x1_06,IVar4,uVar5);
            IVar2 = count(IVar1);
            if (IVar2 != 0) {
              applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = textStorage(param_3);
              IVar2 = selectedRange(param_3);
              IVar4 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_07);
              uVar5 = extraout_x1_08;
            }
            IVar1 = textStorage(param_3);
            IVar1 = currentReparsedRange(IVar1);
            IVar2 = textStorage(param_3);
            IVar2 = ast(IVar2);
            IVar1 = normalizeIndentationInRange_selectionRange_
                              (IVar2,IVar1,extraout_x1_09,IVar4,uVar5);
            IVar2 = count(IVar1);
            if (IVar2 != 0) {
              applyASTOperationResults_inTextView_postTextDidChange_
                        (param_1,IVar1,param_3,0);
              IVar1 = textStorage(param_3);
              IVar2 = selectedRange(param_3);
              IVar4 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_10);
              uVar5 = extraout_x1_11;
            }
            IVar1 = textStorage(param_3);
            IVar1 = currentReparsedRange(IVar1);
            IVar2 = textStorage(param_3);
            IVar2 = ast(IVar2);
            IVar1 = normalizeCalloutInRange_selectionRange_
                              (IVar2,IVar1,extraout_x1_12,IVar4,uVar5);
          }
          else {
            IVar1 = escapePipesInRange_selectionRange_
                              (IVar3,IVar2,extraout_x1_01,IVar4,extraout_x1_00);
          }
          IVar2 = count(IVar1);
          if (IVar2 != 0) {
            applyASTOperationResults_inTextView_postTextDidChange_
                      (param_1,IVar1,param_3,0);
          }
        }
      }
    }
  }
  return;
}

// ===== MDEditorController::validateTextAttachmentsWithConfigurator:inAttributedString:selectionRange:selectionLocationOffset: @ 0000f548 =====

void MDEditorController::
     validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset_
               (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange *param_5,
               unsigned_long_long param_6)

{
  
  if (param_3 != 0) {
    uVar2 = _NSAttachmentAttributeName;
    IVar1 = length(param_4);
    local_88 = 
    ___120__MDEditorController_validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset___block_invoke
    local_78 = param_3;
    local_70 = param_4;
    IStack_68 = param_1;
    local_60 = param_6;
    p_Stack_58 = param_5;
    enumerateAttribute_inRange_options_usingBlock_(param_4,uVar2,0,IVar1,0,&local_98);
  }
  return;
}

// ===== MDEditorController::additionalRangeForAttachment:atIndex:inAttributedString: @ 0000f83c =====

_NSRange MDEditorController::additionalRangeForAttachment_atIndex_inAttributedString_
                   (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  
  IVar1 = isList(param_3);
  if ((int)IVar1 == 0) {
    IVar1 = isHeader(param_3);
    if ((int)IVar1 == 0) {
      uVar2 = 1;
      IVar1 = isTable(param_3);
      if (((IVar1 & 1) == 0) && (IVar1 = isThematicBreak(param_3), (int)IVar1 == 0)) {
        IVar1 = isLink(param_3);
        if ((int)IVar1 == 0) {
          IVar1 = isColor(param_3);
          if ((int)IVar1 == 0) {
            IVar1 = isArrow(param_3);
            if ((int)IVar1 == 0) {
              IVar1 = isBlockquote(param_3);
              if ((int)IVar1 == 0) {
                IVar1 = isCallout(param_3);
                if ((int)IVar1 == 0) {
                  IVar1 = isMath(param_3);
                  if ((int)IVar1 == 0) {
                    IVar1 = isMermaid(param_3);
                    if ((int)IVar1 != 0) {
                      param_4 = codeBlockRangeAtIndex_(param_5,param_4);
                      uVar2 = extraout_x1_08;
                    }
                  }
                  else {
                    param_4 = mathRangeAtIndex_(param_5,param_4);
                    uVar2 = extraout_x1_07;
                  }
                }
                else {
                  IVar1 = listItemInfoAtIndex_(param_5,param_4);
                  IVar1 = listLevel(IVar1);
                  param_4 = rangeOfBlockquoteLevel_atIndex_(param_5,IVar1,param_4);
                  uVar2 = extraout_x1_06;
                }
              }
              else {
                param_4 = rangeOfBlockquoteItemAtIndex_(param_5,param_4);
                uVar2 = extraout_x1_05;
              }
            }
            else {
              param_4 = arrowRangeAtIndex_(param_5,param_4);
              uVar2 = extraout_x1_04;
            }
          }
          else {
            param_4 = colorRangeAtIndex_(param_5,param_4);
            uVar2 = extraout_x1_03;
          }
        }
        else {
          param_4 = linkRangeAtIndex_(param_5,param_4);
          uVar2 = extraout_x1_02;
        }
      }
      else {
        IVar1 = string(param_5);
        param_4 = paragraphRangeForRange_(IVar1,param_4,1);
        uVar2 = extraout_x1_01;
      }
    }
    else {
      param_4 = headerRangeAtIndex_(param_5,param_4);
      uVar2 = extraout_x1_00;
    }
  }
  else {
    param_4 = rangeOfListItemAtIndex_(param_5,param_4);
    uVar2 = extraout_x1;
  }
  _Var3.field1_0x8 = uVar2;
  _Var3.field0_0x0 = param_4;
  return _Var3;
}

// ===== MDEditorController::rearrangeAttachmentsViewsInTextView:range: @ 0000fa0c =====

void MDEditorController::rearrangeAttachmentsViewsInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  textContainerOrigin(param_3);
  self = layoutManager(param_3);
  rearrangeAttachmentsViewsForCharacterRange_atPoint_
            (self,extraout_d0,in_d1,param_4.field0_0x0,param_4.field1_0x8);
  return;
}

// ===== MDEditorController::textView:didChangeAttachmentTextRepresentation:previousRepresentedText: @ 0000fa8c =====

void MDEditorController::textView_didChangeAttachmentTextRepresentation_previousRepresentedText_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  
  notifyTextChangesInTextView_(param_1,param_3);
  local_60[1] = 0;
  local_60[0] = 0x7fffffffffffffff;
  IVar2 = textStorage(param_3);
  IVar2 = rangeOfTextAttachment_foldRange_(IVar2,param_4,local_60);
  lVar1 = local_60[0];
  IVar3 = textStorage(param_3);
  if (lVar1 == 0x7fffffffffffffff) {
    IVar2 = stringRangeFromAttributedStringRange_(IVar3,IVar2,0);
    IVar3 = length(param_5);
  }
  else {
    IVar3 = stringRangeFromAttributedStringRange_(IVar3,local_60[0],0);
    IVar4 = textStorage(param_3);
    IVar4 = textAttachmentAtIndex_(IVar4,local_60[0]);
    IVar4 = representedAttributedText(IVar4);
    IVar2 = stringRangeFromAttributedStringRange_(IVar4,IVar2,extraout_x1);
    IVar2 = IVar2 + IVar3;
    IVar3 = length(param_5);
  }
  IVar4 = textStorage(param_3);
  IVar5 = representedText(param_4);
  recordNewReplacementChangeForStringRange_replacementString_(IVar4,IVar2,IVar3,IVar5);
  return;
}

// ===== MDEditorController::replaceCharactersInRange:withAttributedString:inTextView: @ 0000fc84 =====

void MDEditorController::replaceCharactersInRange_withAttributedString_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5)

{
  
  IVar1 = undoManager(param_5);
  beginUndoGrouping(IVar1);
  replaceCharactersInRange_withAttributedString_
            (param_5,param_3.field0_0x0,param_3.field1_0x8,param_4);
  performStylingInTextView_(param_1,param_5);
  IVar1 = undoManager(param_5);
  endUndoGrouping(IVar1);
  return;
}

// ===== MDEditorController::textView:shouldChangeTextInRange:replacementString: @ 0000fd44 =====

bool MDEditorController::textView_shouldChangeTextInRange_replacementString_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  
  IVar1 = undoManager(param_3);
  IVar1 = isUndoing(IVar1);
  if ((int)IVar1 == 0) {
    IVar1 = undoManager(param_3);
    IVar1 = isRedoing(IVar1);
    if (((IVar1 & 1) == 0) &&
       ((IVar1 = hasMarkedText(param_3), (int)IVar1 == 0 ||
        (IVar1 = isEqualToString_(param_5,&cf__), (int)IVar1 != 0)))) {
      IVar1 = editorBehaviourController(param_1);
      IVar2 = textStorage(param_3);
      IVar3 = selectedRange(param_3);
      IVar1 = resultsForEditInRange_replacementString_attributedString_selectionRange_
                        (IVar1,param_4.field0_0x0,param_4.field1_0x8,param_5,IVar2,IVar3,extraout_x1
                        );
      if (IVar1 != 0) {
        _objc_initWeak(auStack_68,param_1);
        local_98 = 
        ___73__MDEditorController_textView_shouldChangeTextInRange_replacementString___block_invoke;
        _objc_copyWeak(auStack_70,auStack_68);
        local_88 = IVar1;
        local_80 = param_3;
        local_78 = param_5;
        _dispatch_async(PTR___dispatch_main_q,&local_a8);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        return 0;
      }
      IVar1 = textStorage(param_3);
      IVar2 = selectedRange(param_3);
      IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1_00);
      IVar2 = textStorage(param_3);
      IVar2 = stringRangeFromAttributedStringRange_
                        (IVar2,param_4.field0_0x0,param_4.field1_0x8);
      IVar3 = length(param_5);
      IVar1 = offsetSelectionRange_forReplacementRange_replacementLenght_
                        (NSAttributedString,IVar1,extraout_x1_01,IVar2,
                         extraout_x1_02,IVar3);
      IVar3 = textStorage(param_3);
      IVar3 = ast(IVar3);
      self = listItemSpaceCorrectionIn_replacementString_selectionRange_
                       (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      IVar3 = count(self);
      if (IVar3 == 0) {
        IVar3 = textStorage(param_3);
        IVar3 = ast(IVar3);
        self = fencedCodeCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = count(self);
      if (IVar3 == 0) {
        IVar3 = textStorage(param_3);
        IVar3 = ast(IVar3);
        self = calloutCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = count(self);
      if (IVar3 == 0) {
        IVar3 = textStorage(param_3);
        IVar3 = ast(IVar3);
        self = mathBlockCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = count(self);
      if (IVar3 == 0) {
        IVar3 = textStorage(param_3);
        IVar3 = ast(IVar3);
        self = invalidCharacterCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar3 = count(self);
      if ((IVar3 == 0) && (IVar3 = isEqualToString_(param_5,&cf___), (int)IVar3 != 0)) {
        IVar3 = textStorage(param_3);
        IVar3 = ast(IVar3);
        self = deleteWhitespaceCorrectionIn_replacementString_selectionRange_
                         (IVar3,IVar2,extraout_x1_02,param_5,IVar1,extraout_x1_03);
      }
      IVar1 = count(self);
      if (IVar1 == 0) {
        return 1;
      }
      applyASTOperationResults_inTextView_(param_1,self,param_3);
      return (uint)(IVar1 == 0);
    }
  }
  return 1;
}

// ===== MDEditorController::adjustedSelectionForTextView:currentSelection:proposedSelection: @ 0001055c =====

_NSRange MDEditorController::adjustedSelectionForTextView_currentSelection_proposedSelection_
                   (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  
  uVar5 = param_5.field1_0x8;
  IVar4 = param_5.field0_0x0;
  if (uVar5 != 0) {
    IVar1 = textStorage(param_3);
    IVar1 = editedCharacters(IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = textStorage(param_3);
      IVar1 = stringRangeFromAttributedStringRange_
                        (IVar1,param_4.field0_0x0,param_4.field1_0x8);
      IVar2 = textStorage(param_3);
      IVar2 = stringRangeFromAttributedStringRange_(IVar2,IVar4,uVar5);
      IVar3 = textStorage(param_3);
      IVar3 = ast(IVar3);
      IVar3 = markdownLength(IVar3);
      if (IVar2 + extraout_x1_00 <= IVar3) {
        IVar3 = textStorage(param_3);
        IVar3 = ast(IVar3);
        IVar1 = selectionCorrectionIn_replacementString_selectionRange_
                          (IVar3,IVar1,extraout_x1,0,IVar2,extraout_x1_00);
        IVar2 = count(IVar1);
        if (IVar2 != 0) {
          IVar4 = lastObject(IVar1);
          IVar4 = proposedSelection(IVar4);
          IVar1 = textStorage(param_3);
          IVar4 = attributedStringRangeFromStringRange_(IVar1,IVar4,extraout_x1_01);
          uVar5 = extraout_x1_02;
        }
      }
    }
  }
  IVar1 = textStorage(param_3);
  _Var6.field0_0x0 =
       spacersAdjustedSelectionForProposedSelection_currentSelection_
                 (IVar1,IVar4,uVar5,param_4.field0_0x0,param_4.field1_0x8);
  _Var6.field1_0x8 = extraout_x1_03;
  return _Var6;
}

// ===== MDEditorController::notifyTextChangesInTextView: @ 00010798 =====

void MDEditorController::notifyTextChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = notificationWithName_object_
                    (NSNotification,_MDTextViewTextDidChangeNotification,param_3)
  self = defaultQueue(NSNotificationQueue);
  enqueueNotification_postingStyle_(self,IVar1,1);
  return;
}

// ===== MDEditorController::notifyTextAttributesChangesInTextView: @ 00010804 =====

void MDEditorController::notifyTextAttributesChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = notificationWithName_object_
                    (NSNotification,
                     _MDTextViewTextAttributesDidChangeNotification,param_3);
  self = defaultQueue(NSNotificationQueue);
  enqueueNotification_postingStyle_(self,IVar1,1);
  return;
}

// ===== MDEditorController::notifyTextSelectionChangesInTextView: @ 00010870 =====

void MDEditorController::notifyTextSelectionChangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = notificationWithName_object_
                    (NSNotification,_MDTextViewTextDidChangeSelectionNotification
                     ,param_3);
  self = defaultQueue(NSNotificationQueue);
  enqueueNotification_postingStyle_(self,IVar1,1);
  return;
}

// ===== MDEditorController::fixTypingAttributesInTextView: @ 000108dc =====

void MDEditorController::fixTypingAttributesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = selectedRange(param_3);
  fixTypingAttributesInTextView_range_(param_1,param_3,IVar1,extraout_x1);
  return;
}

// ===== MDEditorController::fixTypingAttributesInTextView:range: @ 00010920 =====

void MDEditorController::fixTypingAttributesInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  if (param_4.field1_0x8 == 0) {
    IVar1 = textStorage(param_3);
    IVar1 = length(IVar1);
    if (param_4.field0_0x0 == IVar1) {
      IVar1 = typingAttributes(param_3);
      IVar1 = mutableCopy(IVar1);
      IVar2 = attributedStringRenderer(param_1);
      IVar2 = bidiStyler(IVar2);
      IVar2 = preferredParagraphStyle(IVar2);
      IVar2 = mutableCopy(IVar2);
      IVar3 = attributedStringRenderer(param_1);
      IVar3 = bidiStyler(IVar3);
      paragraphIndent(IVar3);
      firstLineHeadIndent(IVar2);
      setFirstLineHeadIndent_(IVar2,extraout_d0 + extraout_d0_00);
      setObject_forKeyedSubscript_
                (IVar1,IVar2,_NSParagraphStyleAttributeName);
      setTypingAttributes_(param_3,IVar1);
    }
  }
  return;
}

// ===== MDEditorController::autodisableLinksInTextView: @ 00010aa0 =====

void MDEditorController::autodisableLinksInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = isFirstResponder(param_3);
  if ((int)IVar1 == 0) {
    enableLinksInTextView_(param_1,param_3);
  }
  else {
    disableLinksInInTextView_(param_1,param_3);
  }
  return;
}

// ===== MDEditorController::enableLinksInTextView: @ 00010af0 =====

void MDEditorController::enableLinksInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar1 = length(IVar1);
  enableLinksInTextView_range_(param_1,param_3,0,IVar1);
  return;
}

// ===== MDEditorController::enableLinksInTextView:range: @ 00010b54 =====

void MDEditorController::enableLinksInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  IVar1 = textStorage(param_3);
  enableLinksInAttributedString_range_
            (param_1,IVar1,param_4.field0_0x0,param_4.field1_0x8);
  return;
}

// ===== MDEditorController::enableLinksInAttributedString:range: @ 00010bac =====

bool MDEditorController::enableLinksInAttributedString_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  local_70 = ___58__MDEditorController_enableLinksInAttributedString_range___block_invoke;
  local_60 = param_3;
  local_48 = puStack_58;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,&cf__NSLinkAttributeName,param_4.field0_0x0,param_4.field1_0x8,0,&local_80);
  bVar1 = *(byte *)(local_48 + 3);
  __Block_object_dispose(&local_50,8);
  return (bool)bVar1;
}

// ===== MDEditorController::disableLinksInInTextView: @ 00010d08 =====

void MDEditorController::disableLinksInInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar1 = length(IVar1);
  disableLinksInInTextView_range_(param_1,param_3,0,IVar1);
  return;
}

// ===== MDEditorController::disableLinksInInTextView:range: @ 00010d6c =====

void MDEditorController::disableLinksInInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  IVar1 = textStorage(param_3);
  disableLinksInAttributedString_range_
            (param_1,IVar1,param_4.field0_0x0,param_4.field1_0x8);
  return;
}

// ===== MDEditorController::disableLinksInAttributedString:range: @ 00010dc4 =====

bool MDEditorController::disableLinksInAttributedString_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  local_80 = ___59__MDEditorController_disableLinksInAttributedString_range___block_invoke;
  local_70 = param_3;
  local_58 = puStack_68;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,_NSLinkAttributeName,param_4.field0_0x0,
             param_4.field1_0x8,0,&local_90);
  bVar1 = *(byte *)(local_58 + 3);
  __Block_object_dispose(&local_60,8);
  return (bool)bVar1;
}

// ===== MDEditorController::urlAtPoint:inTextView: @ 00010f30 =====

ID MDEditorController::urlAtPoint_inTextView_(ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  
  dVar10 = param_3.field1_0x8;
  IVar3 = linkRangesInTextView_(param_1,param_4);
  IVar3 = arrayWithArray_(NSMutableArray,IVar3);
  IVar4 = disabledLinkRangesInTextView_(param_1,param_4);
  addObjectsFromArray_(IVar3,IVar4);
  IVar4 = FAST_ENUM(IVar3);
  puVar1 = PTR__NSLinkAttributeName;
  if (IVar4 != 0) {
    lVar9 = *local_150;
    do {
      IVar8 = 0;
      do {
        if (*local_150 != lVar9) {
          _objc_enumerationMutation(IVar3);
        }
        IVar5 = rangeValue(*(ID *)(lStack_158 + IVar8 * 8));
        IVar6 = layoutManager(param_4);
        IVar7 = textContainer(param_4);
        boundingRectForGlyphRange_inTextContainer_(IVar6,IVar5,extraout_x1,IVar7);
        iVar2 = _CGRectContainsPoint
                          (extraout_d0,dVar10,in_d2,in_d3,param_3.field0_0x0,param_3.field1_0x8,0);
        if (iVar2 != 0) {
          IVar6 = textStorage(param_4);
          IVar6 = attribute_atIndex_effectiveRange_
                            (IVar6,*(undefined8 *)puVar1,IVar5,&local_170);
          if (IVar6 != 0) goto LAB_00011198;
          IVar6 = textStorage(param_4);
          IVar6 = attribute_atIndex_effectiveRange_
                            (IVar6,&cf__NSLinkAttributeName,IVar5,&local_170);
          if (IVar6 != 0) goto LAB_00011198;
        }
        IVar8 = IVar8 + 1;
      } while (IVar4 != IVar8);
      IVar4 = countByEnumeratingWithState_objects_count_
                        (IVar3,&local_160,auStack_120,0x10);
    } while (IVar4 != 0);
  }
  IVar6 = 0;
LAB_00011198:
    return IVar6;
  }
}

// ===== MDEditorController::urlsInRange:inTextView: @ 000111fc =====

ID MDEditorController::urlsInRange_inTextView_(ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  uVar7 = param_3.field0_0x0;
  IVar3 = linkRangesInTextView_(param_1,param_4);
  IVar3 = arrayWithArray_(NSMutableArray,IVar3);
  self = array(NSMutableArray);
  IVar4 = disabledLinkRangesInTextView_(param_1,param_4);
  addObjectsFromArray_(IVar3,IVar4);
  IVar4 = FAST_ENUM(IVar3);
  if (IVar4 != 0) {
    lVar9 = *local_120;
    uVar1 = uVar7 + param_3.field1_0x8;
    do {
      IVar8 = 0;
      do {
        if (*local_120 != lVar9) {
          _objc_enumerationMutation(IVar3);
        }
        IVar5 = rangeValue(*(ID *)(lStack_128 + IVar8 * 8));
        uVar2 = IVar5 + extraout_x1;
        if (((IVar5 >= uVar7 && IVar5 <= uVar1) && (IVar5 < uVar7 || uVar1 != IVar5)) ||
           (uVar7 < uVar2 && uVar2 <= uVar1 ||
            ((uVar7 >= IVar5 && uVar7 <= uVar2) && (uVar7 < IVar5 || uVar2 != uVar7) ||
            IVar5 < uVar1 && uVar1 <= uVar2))) {
          IVar6 = textStorage(param_4);
          IVar6 = attribute_atIndex_effectiveRange_
                            (IVar6,_NSLinkAttributeName,IVar5,&local_140
                            );
          if (IVar6 != 0) {
            addObject_(self,IVar6);
          }
          IVar6 = textStorage(param_4);
          IVar5 = attribute_atIndex_effectiveRange_
                            (IVar6,&cf__NSLinkAttributeName,IVar5,&local_140);
          if (IVar5 != 0) {
            addObject_(self,IVar5);
          }
        }
        IVar8 = IVar8 + 1;
      } while (IVar4 != IVar8);
      IVar4 = countByEnumeratingWithState_objects_count_
                        (IVar3,&local_130,auStack_f0,0x10);
    } while (IVar4 != 0);
  }
    return self;
  }
}

// ===== MDEditorController::linkRangesInTextView: @ 000114b0 =====

ID MDEditorController::linkRangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = urlContainingRangesWithAttribute_inTextView_
                    (param_1,_NSLinkAttributeName,param_3);
  return IVar1;
}

// ===== MDEditorController::disabledLinkRangesInTextView: @ 000114c4 =====

ID MDEditorController::disabledLinkRangesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = urlContainingRangesWithAttribute_inTextView_
                    (param_1,&cf__NSLinkAttributeName,param_3);
  return IVar1;
}

// ===== MDEditorController::urlContainingRangesWithAttribute:inTextView: @ 000114d4 =====

ID MDEditorController::urlContainingRangesWithAttribute_inTextView_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar1 = array(NSMutableArray);
  self = textStorage(param_4);
  IVar2 = textStorage(param_4);
  IVar2 = length(IVar2);
  local_58 = ___66__MDEditorController_urlContainingRangesWithAttribute_inTextView___block_invoke;
  local_48 = IVar1;
  enumerateAttribute_inRange_options_usingBlock_(self,param_3,0,IVar2,0,&local_68);
  return IVar1;
}

// ===== MDEditorController::autoHideCalloutTitleInTextView:forOldSelectionRange:newSelectionRange: @ 00011688 =====

void MDEditorController::autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  
  uVar4 = param_5.field0_0x0;
  uVar3 = param_4.field0_0x0;
  if (param_4.field1_0x8 == 0) {
    IVar1 = textStorage(param_3);
    IVar1 = attribute_atIndex_effectiveRange_
                      (IVar1,_PMKCalloutAttributeName,uVar3,0);
    if (IVar1 != 0) {
      IVar1 = textStorage(param_3);
      IVar1 = string(IVar1);
      IVar1 = paragraphRangeForRange_(IVar1,uVar3,0);
      IVar2 = textStorage(param_3);
      local_78 = 
      ___92__MDEditorController_autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange___block_invoke
      local_68 = param_3;
      local_60 = uVar3;
      enumerateCalloutInRange_options_usingBlock_(IVar2,IVar1,extraout_x1,0,&local_88);
    }
  }
  if (param_5.field1_0x8 == 0) {
    IVar1 = textStorage(param_3);
    IVar1 = attribute_atIndex_effectiveRange_
                      (IVar1,_PMKCalloutAttributeName,uVar4,0);
    if (IVar1 != 0) {
      IVar1 = textStorage(param_3);
      IVar1 = string(IVar1);
      IVar1 = paragraphRangeForRange_(IVar1,uVar4,0);
      IVar2 = textStorage(param_3);
      local_b0 = 
      ___92__MDEditorController_autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange___block_invoke_40
      local_a0 = param_3;
      local_98 = uVar4;
      enumerateCalloutInRange_options_usingBlock_(IVar2,IVar1,extraout_x1_00,0,&local_c0)
    }
  }
  return;
}

// ===== MDEditorController::autoHideMarkdownInTextView:forOldSelectionRange:newSelectionRange: @ 00011b94 =====

void MDEditorController::autoHideMarkdownInTextView_forOldSelectionRange_newSelectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5)

{
  
  self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar1 = textStorage(param_3);
  IVar1 = editedCharactersOrAttributes(IVar1);
  if ((IVar1 & 1) == 0) {
    showHideMarkdownInTextView_oldSelectionRange_newSelectionRange_
              (self,param_3,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
               param_5.field1_0x8);
    autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange_
              (param_1,param_3,param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,
               param_5.field1_0x8);
  }
  return;
}

// ===== MDEditorController::hideMarkdownInTextView:range: @ 00011c68 =====

void MDEditorController::hideMarkdownInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar2 = textStorage(param_3);
  IVar2 = rangesToCheckForMarkdownHidingForRange_inAttributedString_
                    (IVar1,param_4.field0_0x0,param_4.field1_0x8,IVar2);
  IVar3 = textStorage(param_3);
  beginEditing(IVar3);
  IVar3 = FAST_ENUM(IVar2);
  if (IVar3 != 0) {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar2);
        }
        IVar4 = rangeValue(*(ID *)(lStack_128 + IVar7 * 8));
        IVar5 = textStorage(param_3);
        hideMarkdownInRange_inAttributedString_(IVar1,IVar4,extraout_x1,IVar5);
        IVar7 = IVar7 + 1;
      } while (IVar3 != IVar7);
      IVar3 = countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_e8,0x10);
    } while (IVar3 != 0);
  }
  IVar1 = textStorage(param_3);
  endEditing(IVar1);
    return;
  }
}

// ===== MDEditorController::showMarkdownInTextView:range: @ 00011e54 =====

void MDEditorController::showMarkdownInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar1 = textStorage(param_3);
  IVar1 = rangeToCheckForMarkdownShowingForRange_inAttributedString_
                    (self,param_4.field0_0x0,param_4.field1_0x8,IVar1);
  IVar2 = textStorage(param_3);
  showMarkdownInRange_inAttributedString_(self,IVar1,extraout_x1,IVar2);
  return;
}

// ===== MDEditorController::autoHideMarkdownInAttributedString:selectionRange: @ 00011f18 =====

void MDEditorController::autoHideMarkdownInAttributedString_selectionRange_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  IVar1 = length(param_3);
  hideMarkdownInRange_inAttributedString_(self,0,IVar1,param_3);
  if (param_4.field0_0x0 != 0x7fffffffffffffff) {
    IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
    IVar1 = rangeToCheckForMarkdownShowingForRange_inAttributedString_
                      (IVar1,param_4.field0_0x0,param_4.field1_0x8,param_3);
    if (IVar1 != 0x7fffffffffffffff) {
      showMarkdownInRange_inAttributedString_(self,IVar1,extraout_x1,param_3);
    }
  }
  return;
}

// ===== MDEditorController::hideMarkdownInRange:inAttributedString: @ 00011fe0 =====

bool MDEditorController::hideMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = hideMarkdownInRange_inAttributedString_expandingRangeForAttributes_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4,0);
  return (bool)IVar1;
}

// ===== MDEditorController::hideMarkdownInRange:inAttributedString:expandingRangeForAttributes: @ 00011fe8 =====

bool MDEditorController::hideMarkdownInRange_inAttributedString_expandingRangeForAttributes_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,bool param_5)

{
  
  uVar4 = param_3.field0_0x0;
  IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  if (param_5 == 0) {
    IVar1 = hideMarkdownInRange_inAttributedString_
                      (IVar1,uVar4,param_3.field1_0x8,param_4);
    bVar5 = (bool)IVar1;
  }
  else {
    if (uVar4 != 0x7fffffffffffffff) {
      self = rangesToCheckForMarkdownHidingForRange_inAttributedString_
                       (IVar1,uVar4,param_3.field1_0x8,param_4);
      IVar2 = FAST_ENUM(self)
      if (IVar2 != 0) {
        lVar6 = *local_110;
        do {
          IVar7 = 0;
          do {
            if (*local_110 != lVar6) {
              _objc_enumerationMutation(self);
            }
            IVar3 = rangeValue(*(ID *)(lStack_118 + IVar7 * 8));
            hideMarkdownInRange_inAttributedString_(IVar1,IVar3,extraout_x1,param_4);
            IVar7 = IVar7 + 1;
          } while (IVar2 != IVar7);
          IVar2 = countByEnumeratingWithState_objects_count_
                            (self,&local_120,auStack_d8,0x10);
        } while (IVar2 != 0);
      }
    }
    bVar5 = 0;
  }
  }
  return bVar5;
}

// ===== MDEditorController::showMarkdownInRange:inAttributedString: @ 00012170 =====

bool MDEditorController::showMarkdownInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = showMarkdownInRange_inAttributedString_expandingRangeForAttributes_
                    (param_1,param_3.field0_0x0,param_3.field1_0x8,param_4,0);
  return (bool)IVar1;
}

// ===== MDEditorController::showMarkdownInRange:inAttributedString:expandingRangeForAttributes: @ 00012178 =====

bool MDEditorController::showMarkdownInRange_inAttributedString_expandingRangeForAttributes_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4,bool param_5)

{
  
  uVar3 = param_3.field1_0x8;
  IVar2 = param_3.field0_0x0;
  IVar1 = _objc_opt_new(&objc::class_t::MDMarkdownHider);
  if (param_5 == 0) {
LAB_00012204:
    IVar1 = showMarkdownInRange_inAttributedString_(IVar1,IVar2,uVar3,param_4);
    bVar4 = (bool)IVar1;
  }
  else {
    if (IVar2 != 0x7fffffffffffffff) {
      self = _objc_opt_new(&objc::class_t::MDMarkdownHider);
      IVar2 = rangeToCheckForMarkdownShowingForRange_inAttributedString_
                        (self,IVar2,uVar3,param_4);
      uVar3 = extraout_x1;
      if (IVar2 != 0x7fffffffffffffff) goto LAB_00012204;
    }
    bVar4 = 0;
  }
  return bVar4;
}

// ===== MDEditorController::attributedStringRenderer @ 00012248 =====

ID MDEditorController::attributedStringRenderer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== MDEditorController::setAttributedStringRenderer: @ 00012254 =====

void MDEditorController::setAttributedStringRenderer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDEditorController::editorBehaviourController @ 0001225c =====

ID MDEditorController::editorBehaviourController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}

// ===== MDEditorController::setEditorBehaviourController: @ 00012268 =====

void MDEditorController::setEditorBehaviourController_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}

// ===== MDEditorController::textAttachmentConfigurator @ 00012270 =====

ID MDEditorController::textAttachmentConfigurator(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}

// ===== MDEditorController::setTextAttachmentConfigurator: @ 00012278 =====

void MDEditorController::setTextAttachmentConfigurator_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}

// ===== MDEditorController::useDiff @ 00012280 =====

bool MDEditorController::useDiff(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

// ===== MDEditorController::setUseDiff: @ 0001228c =====

void MDEditorController::setUseDiff_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}

// ===== MDEditorController::autoHideMarkdown @ 00012294 =====

bool MDEditorController::autoHideMarkdown(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

// ===== MDEditorController::setAutoHideMarkdown: @ 000122a0 =====

void MDEditorController::setAutoHideMarkdown_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}

// ===== MDEditorController::restyleTimer @ 000122a8 =====

ID MDEditorController::restyleTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}

// ===== MDEditorController::setRestyleTimer: @ 000122b4 =====

void MDEditorController::setRestyleTimer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}

// ===== MDEditorController::attrStringDiffer @ 000122bc =====

ID MDEditorController::attrStringDiffer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}

// ===== MDEditorController::setAttrStringDiffer: @ 000122c8 =====

void MDEditorController::setAttrStringDiffer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}

// ===== MDEditorController::.cxx_destruct @ 000122d0 =====

void MDEditorController::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

// ===== MDEditorController::applyASTOperationResults:inTextView: @ 0001c104 =====

void MDEditorController::applyASTOperationResults_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  applyASTOperationResults_inTextView_postTextDidChange_(param_1,param_3,param_4,1);
  return;
}

// ===== MDEditorController::applyASTOperationResults:inTextView:postTextDidChange: @ 0001c10c =====

void MDEditorController::applyASTOperationResults_inTextView_postTextDidChange_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  
  IVar1 = firstObject(param_3);
  IVar1 = replacementRange(IVar1);
  IVar2 = lastObject(param_3);
  IVar2 = replacementRange(IVar2);
  auVar9 = _NSUnionRange(IVar1,extraout_x1,IVar2,extraout_x1_00);
  IVar1 = textStorage(param_4);
  IVar1 = attributedStringRangeFromStringRange_(IVar1,auVar9._0_8_,auVar9._8_8_);
  IVar2 = textStorage(param_4);
  IVar2 = stringByExpandingTextAttachmentsInRange_(IVar2,IVar1,extraout_x1_01);
  IVar2 = mutableCopy(IVar2);
  IVar3 = textStorage(param_4);
  IVar3 = stringRangeFromAttributedStringRange_(IVar3,IVar1,0);
  IVar4 = FAST_ENUM(param_3);
  if (IVar4 != 0) {
    lVar7 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        IVar8 = *(ID *)(lStack_128 + IVar6 * 8);
        IVar5 = replacementRange(IVar8);
        IVar8 = replacementString(IVar8);
        replaceCharactersInRange_withString_(IVar2,IVar5 - IVar3,extraout_x1_02,IVar8);
        IVar6 = IVar6 + 1;
      } while (IVar4 != IVar6);
      IVar4 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar4 != 0);
  }
  IVar3 = _objc_alloc(NSAttributedString);
  IVar2 = initWithString_(IVar3,IVar2);
  replaceCharactersInRange_withAttributedString_(param_4,IVar1,extraout_x1_01,IVar2);
  IVar1 = textStorage(param_4);
  IVar2 = lastObject(param_3);
  IVar2 = proposedSelection(IVar2);
  IVar1 = attributedStringRangeFromStringRange_(IVar1,IVar2,extraout_x1_03);
  setSelectedRange_(param_4,IVar1,extraout_x1_04);
  if (param_5 != 0) {
    postTextDidChangeNotification(param_4);
  }
    return;
  }
}

// ===== MDEditorController::expandTextAttachmentsForASTOperationResults:inTextView: @ 0001c42c =====

void MDEditorController::expandTextAttachmentsForASTOperationResults_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar1 = FAST_ENUM(param_3)
  if (IVar1 != 0) {
    lVar6 = *local_130;
    do {
      IVar7 = 0;
      do {
        if (*local_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        IVar5 = *(ID *)(lStack_138 + IVar7 * 8);
        replacementRange(IVar5);
        if (extraout_x1 == 0) {
          IVar2 = replacementString(IVar5);
          IVar2 = isEqualToString_(IVar2,&cf___);
          if ((IVar2 & 1) == 0) goto LAB_0001c51c;
        }
        else {
LAB_0001c51c:
          IVar2 = textStorage(param_4);
          IVar5 = replacementRange(IVar5);
          IVar5 = attributedStringRangeFromStringRange_(IVar2,IVar5,extraout_x1_00);
          if (extraout_x1_01 == 0) {
            IVar2 = textStorage(param_4);
            IVar2 = textAttachmentAtIndex_(IVar2,IVar5);
            if (IVar2 != 0) {
              uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachment);
              uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
              if ((uVar4 & 1) != 0) {
                IVar2 = representedAttributedText(IVar2);
                replaceCharactersInRange_withAttributedString_(param_4,IVar5,1,IVar2);
              }
            }
          }
          else {
            IVar2 = textStorage(param_4);
            local_158 = 
            ___93__MDEditorController_TextOperations__expandTextAttachmentsForASTOperationResults_inTextView___block_invoke
            local_148 = param_4;
            enumerateAttribute_inRange_options_usingBlock_
                      (IVar2,_NSAttachmentAttributeName,IVar5,
                       extraout_x1_01,0,&local_168);
          }
        }
        IVar7 = IVar7 + 1;
      } while (IVar1 != IVar7);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_140,auStack_100,0x10);
    } while (IVar1 != 0);
  }
  }
  return;
}

// ===== MDEditorController::applyTextOperationResult:inTextView: @ 0001c75c =====

void MDEditorController::applyTextOperationResult_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar1 = replacementAttributedString(param_3);
  if (IVar1 == 0) {
    IVar1 = proposedSelectionRange(param_3);
    setSelectedRange_(param_4,IVar1,extraout_x1_01);
  }
  else {
    IVar1 = undoManager(param_4);
    beginUndoGrouping(IVar1);
    IVar1 = replacementRange(param_3);
    IVar2 = replacementAttributedString(param_3);
    IVar3 = proposedSelectionRange(param_3);
    replaceCharactersInRange_withAttributedString_selectRange_
              (param_4,IVar1,extraout_x1,IVar2,IVar3,extraout_x1_00);
    replacementRange(param_3);
    IVar1 = replacementAttributedString(param_3);
    length(IVar1);
    IVar1 = needStyling(param_3);
    if ((int)IVar1 != 0) {
      postTextDidChangeNotification(param_4);
    }
    IVar1 = undoManager(param_4);
    endUndoGrouping(IVar1);
  }
  return;
}

// ===== MDEditorController::applyTextOperationResults:inTextView: @ 0001c8b0 =====

void MDEditorController::applyTextOperationResults_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar2 = undoManager(param_4);
  beginUndoGrouping(IVar2);
  IVar2 = FAST_ENUM(param_3);
  if (IVar2 == 0) {
    IVar2 = selectedRange(param_4);
    scrollRangeToVisible_(param_4,IVar2,extraout_x1_04);
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
        IVar3 = replacementAttributedString(IVar8);
        if (IVar3 == 0) {
          IVar3 = proposedSelectionRange(IVar8);
          setSelectedRange_(param_4,IVar3,extraout_x1_01);
        }
        else {
          IVar3 = replacementRange(IVar8);
          IVar4 = replacementAttributedString(IVar8);
          IVar5 = proposedSelectionRange(IVar8);
          replaceCharactersInRange_withAttributedString_selectRange_
                    (param_4,IVar3,extraout_x1,IVar4,IVar5,extraout_x1_00);
          IVar3 = replacementRange(IVar8);
          IVar4 = replacementAttributedString(IVar8);
          IVar4 = length(IVar4);
          auVar1._8_8_ = IVar4;
          auVar1._0_8_ = IVar3;
          IVar5 = needStyling(IVar8);
          if (((int)IVar5 != 0) && (auVar10 = auVar1, uVar7 != 0x7fffffffffffffff)) {
            if (IVar3 < uVar7) {
              replacementRange(IVar8);
              IVar8 = replacementAttributedString(IVar8);
              IVar8 = length(IVar8);
              uVar7 = (uVar7 - extraout_x1_02) + IVar8;
            }
            auVar10 = _NSUnionRange(uVar7,local_138,IVar3,IVar4);
          }
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
    IVar2 = selectedRange(param_4);
    scrollRangeToVisible_(param_4,IVar2,extraout_x1_03);
    if (auVar10._0_8_ != 0x7fffffffffffffff) {
      postTextDidChangeNotification(param_4);
    }
  }
  IVar2 = undoManager(param_4);
  endUndoGrouping(IVar2);
  }
  return;
}

// ===== MDEditorController::toggleTaskInTextView:range:style: @ 0001cb9c =====

void MDEditorController::toggleTaskInTextView_range_style_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,unsigned_long_long param_5)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = stringRangeFromAttributedStringRange_
                    (IVar2,param_4.field0_0x0,param_4.field1_0x8);
  IVar3 = textStorage(param_3);
  IVar3 = ast(IVar3);
  IVar1 = toggleTask_selectionRange_style_
                    (IVar3,IVar2,extraout_x1_01,IVar1,extraout_x1_00,param_5);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::orderTasksInTextView:range: @ 0001ccd8 =====

void MDEditorController::orderTasksInTextView_range_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  IVar1 = _objc_opt_new(&objc::class_t::MDOrderTaskListTextOperation);
  IVar2 = textStorage(param_3);
  IVar3 = selectedRange(param_3);
  IVar1 = resultForAttributedString_inRange_selectionRange_
                    (IVar1,IVar2,param_4.field0_0x0,param_4.field1_0x8,IVar3,extraout_x1);
  applyTextOperationResult_inTextView_(param_1,IVar1,param_3);
  return;
}

// ===== MDEditorController::textViewShouldDeleteBackward: @ 0001cd9c =====

bool MDEditorController::textViewShouldDeleteBackward_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar2 = deletePrevious_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00)
  IVar3 = count(IVar2);
  if (IVar3 == 0) {
LAB_0001cedc:
    bVar4 = 1;
  }
  else {
    IVar3 = count(IVar2);
    if (IVar3 == 1) {
      IVar3 = firstObject(IVar2);
      IVar3 = replacementRange(IVar3);
      if ((IVar3 == IVar1) && (extraout_x1_01 == extraout_x1_00)) {
        IVar1 = firstObject(IVar2);
        IVar1 = replacementString(IVar1);
        IVar1 = isEqual_(IVar1,&cf___);
        if ((IVar1 & 1) != 0) goto LAB_0001cedc;
      }
    }
    applyASTOperationResults_inTextView_(param_1,IVar2,param_3);
    bVar4 = 0;
  }
  return bVar4;
}

// ===== MDEditorController::textViewShouldDeleteForward: @ 0001cf34 =====

bool MDEditorController::textViewShouldDeleteForward_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar2 = deleteNext_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar3 = count(IVar2);
  if (IVar3 == 0) {
LAB_0001d074:
    bVar4 = 1;
  }
  else {
    IVar3 = count(IVar2);
    if (IVar3 == 1) {
      IVar3 = firstObject(IVar2);
      IVar3 = replacementRange(IVar3);
      if ((IVar3 == IVar1) && (extraout_x1_01 == extraout_x1_00)) {
        IVar1 = firstObject(IVar2);
        IVar1 = replacementString(IVar1);
        IVar1 = isEqual_(IVar1,&cf___);
        if ((IVar1 & 1) != 0) goto LAB_0001d074;
      }
    }
    applyASTOperationResults_inTextView_(param_1,IVar2,param_3);
    bVar4 = 0;
  }
  return bVar4;
}

// ===== MDEditorController::insertYamlInTextView: @ 0001d0cc =====

void MDEditorController::insertYamlInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = _objc_alloc(NSAttributedString);
  IVar1 = initWithString_(IVar1,&cf____property____);
  replaceCharactersInRange_withAttributedString_(param_3,0,0,IVar1);
  setSelectedRange_(param_3,4,8);
  IVar1 = selectedRange(param_3);
  scrollRangeToVisible_(param_3,IVar1,extraout_x1);
  postTextDidChangeNotification(param_3);
  return;
}

// ===== MDEditorController::insertThematicBreakInTextView: @ 0001d160 =====

void MDEditorController::insertThematicBreakInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = insertThematicBreak_selectionRange_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::canInsertTableInTextView: @ 0001d24c =====

bool MDEditorController::canInsertTableInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = insertTable_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar1 = count(IVar1);
  return (bool)(IVar1 != 0);
}

// ===== MDEditorController::insertTableInTextView: @ 0001d32c =====

void MDEditorController::insertTableInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = insertTable_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::insertFootnoteInTextView: @ 0001d418 =====

void MDEditorController::insertFootnoteInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar3 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar1 = textStorage(param_3);
  IVar1 = ast(IVar1);
  uVar4 = _objc_opt_class(param_1);
  IVar2 = bundleForClass_(NSBundle,uVar4);
  IVar2 = localizedStringForKey_value_table_(IVar2,&cf_footnotetext,&cf___,0);
  IVar2 = insertFootnoteWithDefinitionText_atRange_selectionRange_
                    (IVar1,IVar2,IVar3,extraout_x1_00,IVar3,extraout_x1_00);
  IVar5 = count(IVar2);
  uVar4 = extraout_x1_00;
  if (IVar5 != 0) {
    applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar2,param_3,0);
    IVar2 = lastObject(IVar2);
    IVar3 = proposedSelection(IVar2);
    uVar4 = extraout_x1_01;
  }
  IVar2 = markdownLength(IVar1);
  IVar2 = renumberFootnotesIn_selectionRange_(IVar1,0,IVar2,IVar3,uVar4);
  IVar5 = count(IVar2);
  if (IVar5 != 0) {
    applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar2,param_3,0);
    IVar2 = lastObject(IVar2);
    IVar3 = proposedSelection(IVar2);
    uVar4 = extraout_x1_02;
  }
  IVar2 = markdownLength(IVar1);
  IVar1 = reorderFootnoteDefinitionsIn_selectionRange_(IVar1,0,IVar2,IVar3,uVar4);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar1,param_3,0);
    IVar1 = lastObject(IVar1);
    proposedSelection(IVar1);
  }
  postTextDidChangeNotification(param_3);
  return;
}

// ===== MDEditorController::insertFootnoteDefinitionForReferenceInRange:inTextView: @ 0001d690 =====

void MDEditorController::insertFootnoteDefinitionForReferenceInRange_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar2 = selectedRange(param_4);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_4);
  IVar2 = stringRangeFromAttributedStringRange_
                    (IVar2,param_3.field0_0x0,param_3.field1_0x8);
  IVar3 = textStorage(param_4);
  IVar3 = ast(IVar3);
  uVar4 = _objc_opt_class(param_1);
  IVar5 = bundleForClass_(NSBundle,uVar4);
  IVar5 = localizedStringForKey_value_table_(IVar5,&cf_footnotetext,&cf___,0);
  IVar1 = insertFootnoteDefinitionWithText_forReferenceAtRange_selectionRange_
                    (IVar3,IVar5,IVar2,extraout_x1_01,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}

// ===== MDEditorController::renumberFootnotesInTextView: @ 0001d824 =====

void MDEditorController::renumberFootnotesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar3 = markdownLength(IVar2);
  IVar3 = renumberFootnotesIn_selectionRange_(IVar2,0,IVar3,IVar1,extraout_x1_00);
  IVar4 = count(IVar3);
  uVar5 = extraout_x1_00;
  if (IVar4 != 0) {
    applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar3,param_3,0);
    IVar1 = lastObject(IVar3);
    IVar1 = proposedSelection(IVar1);
    uVar5 = extraout_x1_01;
  }
  IVar3 = markdownLength(IVar2);
  IVar1 = reorderFootnoteDefinitionsIn_selectionRange_(IVar2,0,IVar3,IVar1,uVar5);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_postTextDidChange_(param_1,IVar1,param_3,0);
    IVar1 = lastObject(IVar1);
    proposedSelection(IVar1);
  }
  postTextDidChangeNotification(param_3);
  return;
}

// ===== MDEditorController::canAddIndentInTextView: @ 0001d9c8 =====

bool MDEditorController::canAddIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = indent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar1 = count(IVar1);
  return (bool)(IVar1 != 0);
}

// ===== MDEditorController::addIndentInTextView: @ 0001daa8 =====

void MDEditorController::addIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = indent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::canRemoveIndentInTextView: @ 0001db94 =====

bool MDEditorController::canRemoveIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = outdent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar1 = count(IVar1);
  return (bool)(IVar1 != 0);
}

// ===== MDEditorController::removeIndentInTextView: @ 0001dc74 =====

void MDEditorController::removeIndentInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = outdent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::toggleFoldingAtIndex:inTextView: @ 0001dd60 =====

void MDEditorController::toggleFoldingAtIndex_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,param_3,0);
  IVar2 = textStorage(param_4);
  IVar3 = selectedRange(param_4);
  IVar2 = stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1_00);
  IVar3 = textStorage(param_4);
  IVar3 = ast(IVar3);
  IVar1 = toggleFoldInRange_selectionRange_(IVar3,IVar1,extraout_x1,IVar2,extraout_x1_01)
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}

// ===== MDEditorController::canToggleFoldingAtIndex:inTextView: @ 0001de88 =====

bool MDEditorController::canToggleFoldingAtIndex_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,param_3,0);
  IVar2 = textStorage(param_4);
  IVar3 = selectedRange(param_4);
  IVar2 = stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1_00);
  IVar3 = textStorage(param_4);
  IVar3 = ast(IVar3);
  IVar1 = toggleFoldInRange_selectionRange_(IVar3,IVar1,extraout_x1,IVar2,extraout_x1_01)
  IVar1 = count(IVar1);
  return (bool)(IVar1 != 0);
}

// ===== MDEditorController::hasFoldableContentAtIndex:inTextView: @ 0001dfa4 =====

bool MDEditorController::hasFoldableContentAtIndex_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar1 = attribute_atIndex_effectiveRange_
                    (IVar1,_PMKFoldableAttributeName,param_3,0);
  return (bool)(IVar1 != 0);
}

// ===== MDEditorController::foldAllHeadingInTextView: @ 0001e00c =====

void MDEditorController::foldAllHeadingInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = foldAllHeadingSelectionRange_(IVar2,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::unfoldAllHeadingInTextView: @ 0001e0f0 =====

void MDEditorController::unfoldAllHeadingInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = unfoldAllHeadingSelectionRange_(IVar2,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::unfoldAtASTRangeEdges:inTextView: @ 0001e1d4 =====

void MDEditorController::unfoldAtASTRangeEdges_inTextView_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar1 = ast(IVar1);
  IVar2 = textStorage(param_4);
  IVar3 = selectedRange(param_4);
  IVar2 = stringRangeFromAttributedStringRange_(IVar2,IVar3,extraout_x1);
  IVar1 = unfoldAtRangeEdges_selectionRange_
                    (IVar1,param_3.field0_0x0,param_3.field1_0x8,IVar2,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}

// ===== MDEditorController::textViewShouldInsertNewLine: @ 0001e2d0 =====

bool MDEditorController::textViewShouldInsertNewLine_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar2 = insertNewlineInRange_selectionRange_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar3 = count(IVar2);
  if (IVar3 == 0) {
LAB_0001e410:
    bVar4 = 1;
  }
  else {
    IVar3 = count(IVar2);
    if (IVar3 == 1) {
      IVar3 = firstObject(IVar2);
      IVar3 = replacementRange(IVar3);
      if ((IVar3 == IVar1) && (extraout_x1_01 == extraout_x1_00)) {
        IVar1 = firstObject(IVar2);
        IVar1 = replacementString(IVar1);
        IVar1 = isEqual_(IVar1,&cf_newline_s_);
        if ((IVar1 & 1) != 0) goto LAB_0001e410;
      }
    }
    applyASTOperationResults_inTextView_(param_1,IVar2,param_3);
    bVar4 = 0;
  }
  return bVar4;
}

// ===== MDEditorController::textViewShouldInsertTab: @ 0001e468 =====

bool MDEditorController::textViewShouldInsertTab_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = indent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return (bool)(IVar2 == 0);
}

// ===== MDEditorController::textViewShouldRemoveTab: @ 0001e568 =====

bool MDEditorController::textViewShouldRemoveTab_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = outdent_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return (bool)(IVar2 == 0);
}

// ===== MDEditorController::moveParagraphUpInTextView: @ 0001e668 =====

void MDEditorController::moveParagraphUpInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = moveLinesUpIn_selectionRange_(IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::moveParagraphDownInTextView: @ 0001e754 =====

void MDEditorController::moveParagraphDownInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = textStorage(param_3);
  IVar2 = selectedRange(param_3);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_3);
  IVar2 = ast(IVar2);
  IVar1 = moveLinesDownIn_selectionRange_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_3);
  }
  return;
}

// ===== MDEditorController::dragRange:toRange:inTextView:dropAsNewLine: @ 0001e840 =====

bool MDEditorController::dragRange_toRange_inTextView_dropAsNewLine_
               (ID param_1,SEL param_2,_NSRange param_3,_NSRange param_4,ID param_5,bool param_6)

{
  
  IVar1 = _objc_opt_new(&objc::class_t::MDDragTextOperation);
  IVar2 = textStorage(param_5);
  selectedRange(param_5);
  IVar1 = 
          resultForAttributedString_dragRange_destinationRange_selectionRange_dropAsNewLine_
                    (IVar1,IVar2,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,
                     param_4.field1_0x8);
  if (IVar1 != 0) {
    applyTextOperationResult_inTextView_(param_1,IVar1,param_5);
  }
  return (bool)(IVar1 == 0);
}

// ===== MDEditorController::selectionToFirstBlockMarkerInTextView:limitToLineRange: @ 0001e940 =====

_NSRange MDEditorController::selectionToFirstBlockMarkerInTextView_limitToLineRange_
                   (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  
  IVar2 = selectedRange(param_3);
  IVar3 = textStorage(param_3);
  IVar3 = length(IVar3);
  if (IVar2 < IVar3) {
    if (IVar2 == 0) {
      lVar7 = 0;
    }
    else {
      IVar3 = string(param_3);
      IVar3 = characterAtIndex_(IVar3,IVar2 - 1);
      lVar7 = IVar2 - (((uint)IVar3 & 0xffff) != 10);
    }
  }
  else {
    lVar7 = IVar2 - 1;
  }
  if (param_4 == 0) {
    IVar3 = textStorage(param_3);
    IVar3 = string(IVar3);
    IVar3 = paragraphRangeForRange_(IVar3,IVar2,extraout_x1);
    uVar9 = extraout_x1_01;
  }
  else {
    IVar3 = layoutManager(param_3);
    IVar4 = layoutManager(param_3);
    IVar4 = glyphIndexForCharacterAtIndex_(IVar4,lVar7);
    lineFragmentRectForGlyphAtIndex_effectiveRange_(IVar3,IVar4,&local_70);
    IVar3 = layoutManager(param_3);
    IVar3 = characterRangeForGlyphRange_actualGlyphRange_(IVar3,local_70,uStack_68,0);
    uVar9 = extraout_x1_00;
  }
  IVar4 = textStorage(param_3);
  IVar4 = isRangeInsideList_(IVar4,lVar7,0);
  IVar5 = textStorage(param_3);
  if ((int)IVar4 == 0) {
    IVar4 = isRangeInsideBlockquote_(IVar5,lVar7,0);
    IVar5 = textStorage(param_3);
    if ((int)IVar4 == 0) {
      IVar4 = isRangeInsideHeader_(IVar5,lVar7,0);
      if ((int)IVar4 != 0) {
        IVar4 = textStorage(param_3);
        headerRangeAtIndex_markerRange_(IVar4,lVar7,&local_60);
      }
    }
    else {
      rangeOfBlockquoteItemAtIndex_markerRange_(IVar5,lVar7,&local_60);
    }
  }
  else {
    rangeOfListItemAtIndex_markerRange_(IVar5,lVar7,&local_60);
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

bool MDEditorController::handleMoveToLeftEndOfLineInTextView_extendSelection_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  
  IVar2 = selectionToFirstBlockMarkerInTextView_limitToLineRange_(param_1,param_3,1);
  IVar3 = textStorage(param_3);
  IVar3 = string(IVar3);
  IVar4 = selectedRange(param_3);
  IVar3 = paragraphRangeForRange_(IVar3,IVar4,extraout_x1_00);
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
      setSelectedRange_(param_3,IVar2,uVar1);
      bVar5 = 1;
    }
  }
  return bVar5;
}

// ===== MDEditorController::handleDeleteToBeginningOfLineInTextView: @ 0001ed18 =====

bool MDEditorController::handleDeleteToBeginningOfLineInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = selectionToFirstBlockMarkerInTextView_limitToLineRange_(param_1,param_3,1);
  IVar2 = textStorage(param_3);
  IVar2 = string(IVar2);
  IVar3 = selectedRange(param_3);
  IVar2 = paragraphRangeForRange_(IVar2,IVar3,extraout_x1_00);
  if (IVar1 == 0x7fffffffffffffff) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0;
    if ((IVar2 <= IVar1) && (IVar1 - IVar2 < extraout_x1_01)) {
      IVar2 = _objc_alloc(NSAttributedString);
      IVar2 = initWithString_(IVar2,&cf___);
      replaceCharactersInRange_withAttributedString_(param_3,IVar1,extraout_x1,IVar2);
      postTextDidChangeNotification(param_3);
      bVar4 = 1;
    }
  }
  return bVar4;
}

// ===== MDEditorController::pasteCorrectionForReplacementString:range:inTextView: @ 0001ee3c =====

bool MDEditorController::pasteCorrectionForReplacementString_range_inTextView_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  
  IVar1 = textStorage(param_5);
  IVar2 = selectedRange(param_5);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_5);
  IVar2 = stringRangeFromAttributedStringRange_
                    (IVar2,param_4.field0_0x0,param_4.field1_0x8);
  IVar3 = length(param_3);
  IVar1 = offsetSelectionRange_forReplacementRange_replacementLenght_
                    (NSAttributedString,IVar1,extraout_x1_00,IVar2,extraout_x1_01
                     ,IVar3);
  IVar3 = textStorage(param_5);
  IVar3 = ast(IVar3);
  IVar1 = pasteCorrectionIn_replacementString_selectionRange_
                    (IVar3,IVar2,extraout_x1_01,param_3,IVar1,extraout_x1_02);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_5);
  }
  return (bool)(IVar2 != 0);
}

// ===== MDEditorController::applyToggleStyleOperation:inTextView: @ 00038234 =====

void MDEditorController::applyToggleStyleOperation_inTextView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar2 = selectedRange(param_4);
  IVar3 = selectedRange(param_4);
  IVar1 = resultForAttributedString_inRange_selectionRange_
                    (param_3,IVar1,IVar2,extraout_x1,IVar3,extraout_x1_00);
  applyTextOperationResult_inTextView_(param_1,IVar1,param_4);
  return;
}

// ===== MDEditorController::toggleInlineStyle:inTextView: @ 000382fc =====

void MDEditorController::toggleInlineStyle_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  
  IVar1 = selectedRange(param_4);
  selectedRange(param_4);
  if (extraout_x1_00 == 1) {
    IVar2 = textStorage(param_4);
    IVar3 = selectedRange(param_4);
    IVar2 = textAttachmentAtIndex_(IVar2,IVar3);
    IVar2 = isHighlighter(IVar2);
    if ((int)IVar2 != 0) {
      IVar2 = selectedRange(param_4);
      IVar3 = textStorage(param_4);
      IVar1 = highlighterRangeAtIndex_(IVar3,IVar1);
      uVar4 = 1;
      uVar5 = extraout_x1_01;
      goto LAB_000383e0;
    }
  }
  uVar4 = 0;
  IVar2 = 0x7fffffffffffffff;
  uVar5 = extraout_x1;
LAB_000383e0:
  IVar3 = textStorage(param_4);
  IVar1 = stringRangeFromAttributedStringRange_(IVar3,IVar1,uVar5);
  IVar3 = textStorage(param_4);
  IVar3 = ast(IVar3);
  IVar1 = toggleInlineStyle_selectionRange_style_
                    (IVar3,IVar1,extraout_x1_02,IVar1,extraout_x1_02,param_3);
  IVar3 = count(IVar1);
  if (IVar3 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  if (IVar2 != 0x7fffffffffffffff) {
    IVar1 = textStorage(param_4);
    IVar1 = textAttachmentAtIndex_(IVar1,IVar2);
    IVar1 = isHighlighter(IVar1);
    if ((int)IVar1 != 0) {
      setSelectedRange_(param_4,IVar2,uVar4);
    }
  }
  return;
}

// ===== MDEditorController::toggleStrongInTextView: @ 0003850c =====

void MDEditorController::toggleStrongInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,0,param_3);
  return;
}

// ===== MDEditorController::toggleEmphasisInTextView: @ 00038518 =====

void MDEditorController::toggleEmphasisInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,1,param_3);
  return;
}

// ===== MDEditorController::toggleStrikethroughInTextView: @ 00038524 =====

void MDEditorController::toggleStrikethroughInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,2,param_3);
  return;
}

// ===== MDEditorController::toggleUnderlineInTextView: @ 00038530 =====

void MDEditorController::toggleUnderlineInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,3,param_3);
  return;
}

// ===== MDEditorController::toggleCodeInTextView: @ 0003853c =====

void MDEditorController::toggleCodeInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,10,param_3);
  return;
}

// ===== MDEditorController::toggleMathSpanInTextView: @ 00038548 =====

void MDEditorController::toggleMathSpanInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,0xb,param_3);
  return;
}

// ===== MDEditorController::toggleHighlighterInTextView: @ 00038554 =====

void MDEditorController::toggleHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,4,param_3);
  return;
}

// ===== MDEditorController::toggleRedHighlighterInTextView: @ 00038560 =====

void MDEditorController::toggleRedHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,5,param_3);
  return;
}

// ===== MDEditorController::toggleBlueHighlighterInTextView: @ 0003856c =====

void MDEditorController::toggleBlueHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,6,param_3);
  return;
}

// ===== MDEditorController::toggleGreenHighlighterInTextView: @ 00038578 =====

void MDEditorController::toggleGreenHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,7,param_3);
  return;
}

// ===== MDEditorController::toggleYellowHighlighterInTextView: @ 00038584 =====

void MDEditorController::toggleYellowHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,8,param_3);
  return;
}

// ===== MDEditorController::togglePurpleHighlighterInTextView: @ 00038590 =====

void MDEditorController::togglePurpleHighlighterInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleInlineStyle_inTextView_(param_1,9,param_3);
  return;
}

// ===== MDEditorController::toggleBlockStyle:inTextView: @ 0003859c =====

void MDEditorController::toggleBlockStyle_inTextView_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  
  IVar1 = textStorage(param_4);
  IVar2 = selectedRange(param_4);
  IVar1 = stringRangeFromAttributedStringRange_(IVar1,IVar2,extraout_x1);
  IVar2 = textStorage(param_4);
  IVar2 = ast(IVar2);
  IVar1 = toggleBlockStyle_selectionRange_style_
                    (IVar2,IVar1,extraout_x1_00,IVar1,extraout_x1_00,param_3);
  IVar2 = count(IVar1);
  if (IVar2 != 0) {
    applyASTOperationResults_inTextView_(param_1,IVar1,param_4);
  }
  return;
}

// ===== MDEditorController::toggleHeadingInTextView:headingLevel: @ 00038698 =====

void MDEditorController::toggleHeadingInTextView_headingLevel_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  
  lVar1 = param_4 - 1;
  if (4 < param_4 - 2) {
    lVar1 = 0;
  }
  toggleBlockStyle_inTextView_(param_1,lVar1,param_3);
  return;
}

// ===== MDEditorController::toggleUnorderedListInTextView: @ 000386b4 =====

void MDEditorController::toggleUnorderedListInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,6,param_3);
  return;
}

// ===== MDEditorController::toggleOrderedListInTextView: @ 000386c0 =====

void MDEditorController::toggleOrderedListInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,7,param_3);
  return;
}

// ===== MDEditorController::toggleTaskListInTextView: @ 000386cc =====

void MDEditorController::toggleTaskListInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,8,param_3);
  return;
}

// ===== MDEditorController::toggleBlockQuoteInTextView: @ 000386d8 =====

void MDEditorController::toggleBlockQuoteInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,9,param_3);
  return;
}

// ===== MDEditorController::toggleCodeBlockInTextView: @ 000386e4 =====

void MDEditorController::toggleCodeBlockInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,10,param_3);
  return;
}

// ===== MDEditorController::toggleMathBlockInTextView: @ 000386f0 =====

void MDEditorController::toggleMathBlockInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,0xb,param_3);
  return;
}

// ===== MDEditorController::toggleCalloutInTextView: @ 000386fc =====

void MDEditorController::toggleCalloutInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,0xc,param_3);
  return;
}

// ===== MDEditorController::toggleCalloutNoteInTextView: @ 00038708 =====

void MDEditorController::toggleCalloutNoteInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,0xd,param_3);
  return;
}

// ===== MDEditorController::toggleCalloutTipInTextView: @ 00038714 =====

void MDEditorController::toggleCalloutTipInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,0xe,param_3);
  return;
}

// ===== MDEditorController::toggleCalloutCautionInTextView: @ 00038720 =====

void MDEditorController::toggleCalloutCautionInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,0xf,param_3);
  return;
}

// ===== MDEditorController::toggleCalloutWarningInTextView: @ 0003872c =====

void MDEditorController::toggleCalloutWarningInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,0x10,param_3);
  return;
}

// ===== MDEditorController::toggleCalloutImportantInTextView: @ 00038738 =====

void MDEditorController::toggleCalloutImportantInTextView_(ID param_1,SEL param_2,ID param_3)

{
  toggleBlockStyle_inTextView_(param_1,0x11,param_3);
  return;
}

// ===== MDEditorController::orderCheckboxesInTextView: @ 00038744 =====

void MDEditorController::orderCheckboxesInTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  uVar1 = _objc_opt_new(&objc::class_t::MDOrderTaskListTextOperation);
  applyToggleStyleOperation_inTextView_(param_1,uVar1,param_3);
  return;
}

