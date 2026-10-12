// ===== MDAttributedStringRenderer::init @ 00009ea0 =====

ID MDAttributedStringRenderer::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDAttributedStringRenderer;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(PMKAST);
    setAst_(self,uVar1);
  }
  return self;
}

// ===== MDAttributedStringRenderer::setStyleInlinesOnly: @ 00009f0c =====

void MDAttributedStringRenderer::setStyleInlinesOnly_(ID param_1,SEL param_2,bool param_3)

{
  
  *(char *)(param_1 + 8) = (char)param_3;
  self = ast(param_1);
  setParseInlinesOnly_(self,(ulong)param_3);
  return;
}

// ===== MDAttributedStringRenderer::attributedStringFromPolarMarkString: @ 00009f48 =====

ID MDAttributedStringRenderer::attributedStringFromPolarMarkString_
             (ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = ast(param_1);
  replaceAllWithMarkdown_(IVar1,param_3);
  IVar1 = ast(param_1);
  IVar1 = annotatedString(IVar1);
  return IVar1;
}

// ===== MDAttributedStringRenderer::styledAttributedStringFromString: @ 00009fd4 =====

ID MDAttributedStringRenderer::styledAttributedStringFromString_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = ast(param_1);
  replaceAllWithMarkdown_(IVar1,param_3);
  IVar1 = ast(param_1);
  IVar1 = annotatedString(IVar1);
  IVar2 = length(IVar1);
  IVar1 = styleAttributedString_inRange_(param_1,IVar1,0,IVar2);
  return IVar1;
}

// ===== MDAttributedStringRenderer::styleAttributedString:inRange: @ 0000a090 =====

ID MDAttributedStringRenderer::styleAttributedString_inRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  
  local_100 = param_4.field1_0x8;
  local_108 = param_4.field0_0x0;
  self = textStylers(param_1);
  IVar2 = FAST_ENUM(self);
  puVar1 = PTR___NSConcreteStackBlock;
  if (IVar2 != 0) {
    lVar3 = *local_160;
    do {
      IVar4 = 0;
      do {
        if (*local_160 != lVar3) {
          _objc_enumerationMutation(self);
        }
        local_188 = ___60__MDAttributedStringRenderer_styleAttributedString_inRange___block_invoke;
        styleTextInAttributedString_range_replacementBlock_
                  (*(ID *)(lStack_168 + IVar4 * 8),param_3,local_120 + 4,&local_198);
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = FAST_ENUM(self)
    } while (IVar2 != 0);
  }
  fixAttributesInRange_(param_3,local_120[4],local_120[5]);
  __Block_object_dispose(&local_128,8);
    return param_3;
  }
}

// ===== MDAttributedStringRenderer::styleAttributedString:proposedSelectionRange:selectionLocationOffset:asyncCompletionBlock: @ 0000a2a8 =====

ID MDAttributedStringRenderer::
   styleAttributedString_proposedSelectionRange_selectionLocationOffset_asyncCompletionBlock_
             (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,unsigned_long_long param_5,
             ID param_6,undefined4 param_7)

{
  
  local_108 = length(param_3);
  self = textStylers(param_1);
  IVar1 = FAST_ENUM(self);
  if (IVar1 != 0) {
    lVar3 = *local_160;
    do {
      IVar4 = 0;
      do {
        if (*local_160 != lVar3) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_168 + IVar4 * 8);
        if ((param_6 == 0) || (IVar2 = canStyleAsync(self_00), (int)IVar2 == 0)) {
          local_1a8 = 
          ___120__MDAttributedStringRenderer_styleAttributedString_proposedSelectionRange_selectionLocationOffset_asyncCompletionBlock___block_invoke
          local_198 = self_00;
          IStack_190 = param_1;
          uStack_180 = param_5;
          local_178 = param_4;
          styleTextInAttributedString_range_replacementBlock_
                    (self_00,param_3,local_128 + 4,&local_1b8);
        }
        else {
          asyncStyleTextInAttributedString_range_completionBlock_
                    (self_00,param_3,local_128 + 4,param_6);
        }
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = countByEnumeratingWithState_objects_count_
                        (self,&local_170,auStack_100,0x10);
    } while (IVar1 != 0);
  }
  fixAttributesInRange_(param_3,local_128[4],local_128[5]);
  __Block_object_dispose(&local_130,8);
    return param_3;
  }
}

// ===== MDAttributedStringRenderer::textStylers @ 0000a654 =====

ID MDAttributedStringRenderer::textStylers(ID param_1,SEL param_2)

{
  
  IVar1 = *(ID *)(param_1 + 0x10);
  if (IVar1 == 0) {
    uVar2 = _objc_opt_new(&objc::class_t::MDBodyTextStyler);
    setBodyStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDBidiTextStyler);
    setBidiStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHeadingTextStyler);
    setHeadingStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDOrderedListTextStyler);
    setOrderedListStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDUnorderedListTextStyler);
    setUnorderedListStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDBlockQuoteTextStyler);
    setBlockQuoteStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFencedCodeTextStyler);
    setFencedCodeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDIndentedCodeTextStyler);
    setIndentedCodeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDStrongTextStyler);
    setStrongStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDEmphasisTextStyler);
    setEmphasisStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDStrikethroughTextStyler);
    setStrikethroughStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDUnderlineTextStyler);
    setUnderlineStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHighlighterTextStyler);
    setHighlighterStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDCodeTextStyler);
    setCodeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDLinkTextStyler);
    setLinkStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDImageTextStyler);
    setImageStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDThematicBreakTextStyler);
    setThematicBreakStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDColorTextStyler);
    setColorStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDArrowTextStyler);
    setArrowStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDEscapeTextStyler);
    setEscapeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHashtagTextStyler);
    setHashtagStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDAutoLinkTextStyler);
    setAutoLinkStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHTMLTextStyler);
    setHtmlStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDSyntaxHighlightTextStyler);
    setSyntaxHighlightStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDReferenceTextStyler);
    setReferenceStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFileTextStyler);
    setFileStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFootnoteTextStyler);
    setFootnoteStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDWikiLinkTextStyler);
    setWikiLinkStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDTableTextStyler);
    setTableStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFoldTextStyler);
    setFoldTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMetadataTextStyler);
    setMetadataTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHardLineBreakTextStyler);
    setHardLineBreakTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDIndentSpaceTextStyler);
    setIndentSpaceTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMathTextStyler);
    setMathTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMathBlockTextStyler);
    setMathBlockTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMermaidFencedCodeTextStyler);
    setMermaidFencedCodeStyler_(param_1,uVar2);
    IStack_188 = bodyStyler(param_1);
    local_180 = bidiStyler(param_1);
    local_178 = headingStyler(param_1);
    local_170 = orderedListStyler(param_1);
    local_168 = unorderedListStyler(param_1);
    local_160 = blockQuoteStyler(param_1);
    local_158 = indentSpaceTextStyler(param_1);
    local_150 = fencedCodeStyler(param_1);
    local_148 = mathBlockTextStyler(param_1);
    local_140 = mermaidFencedCodeStyler(param_1);
    local_138 = indentedCodeStyler(param_1);
    local_130 = strongStyler(param_1);
    local_128 = emphasisStyler(param_1);
    local_120 = strikethroughStyler(param_1);
    local_118 = underlineStyler(param_1);
    local_110 = codeStyler(param_1);
    local_108 = linkStyler(param_1);
    local_100 = imageStyler(param_1);
    local_f8 = thematicBreakStyler(param_1);
    local_f0 = colorStyler(param_1);
    local_e8 = arrowStyler(param_1);
    local_e0 = hashtagStyler(param_1);
    local_d8 = autoLinkStyler(param_1);
    local_d0 = htmlStyler(param_1);
    local_c8 = syntaxHighlightStyler(param_1);
    local_c0 = referenceStyler(param_1);
    local_b8 = fileStyler(param_1);
    local_b0 = footnoteStyler(param_1);
    local_a8 = wikiLinkStyler(param_1);
    local_a0 = escapeStyler(param_1);
    local_98 = highlighterStyler(param_1);
    local_90 = mathTextStyler(param_1);
    local_88 = tableStyler(param_1);
    local_80 = metadataTextStyler(param_1);
    local_78 = foldTextStyler(param_1);
    IVar1 = arrayWithObjects_count_(NSArray,&IStack_188,0x23);
    IVar1 = arrayWithArray_(NSMutableArray,IVar1);
    *(ID *)(param_1 + 0x10) = IVar1;
    IVar1 = *(ID *)(param_1 + 0x10);
  }
    return IVar1;
  }
}

// ===== MDAttributedStringRenderer::setTextStylers: @ 0000b094 =====

void MDAttributedStringRenderer::setTextStylers_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::styleInlinesOnly @ 0000b0a0 =====

bool MDAttributedStringRenderer::styleInlinesOnly(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}

// ===== MDAttributedStringRenderer::bodyStyler @ 0000b0a8 =====

ID MDAttributedStringRenderer::bodyStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}

// ===== MDAttributedStringRenderer::setBodyStyler: @ 0000b0b4 =====

void MDAttributedStringRenderer::setBodyStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::bidiStyler @ 0000b0bc =====

ID MDAttributedStringRenderer::bidiStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}

// ===== MDAttributedStringRenderer::setBidiStyler: @ 0000b0c8 =====

void MDAttributedStringRenderer::setBidiStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::headingStyler @ 0000b0d0 =====

ID MDAttributedStringRenderer::headingStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}

// ===== MDAttributedStringRenderer::setHeadingStyler: @ 0000b0dc =====

void MDAttributedStringRenderer::setHeadingStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::orderedListStyler @ 0000b0e4 =====

ID MDAttributedStringRenderer::orderedListStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}

// ===== MDAttributedStringRenderer::setOrderedListStyler: @ 0000b0f0 =====

void MDAttributedStringRenderer::setOrderedListStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::unorderedListStyler @ 0000b0f8 =====

ID MDAttributedStringRenderer::unorderedListStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}

// ===== MDAttributedStringRenderer::setUnorderedListStyler: @ 0000b104 =====

void MDAttributedStringRenderer::setUnorderedListStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::blockQuoteStyler @ 0000b10c =====

ID MDAttributedStringRenderer::blockQuoteStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}

// ===== MDAttributedStringRenderer::setBlockQuoteStyler: @ 0000b118 =====

void MDAttributedStringRenderer::setBlockQuoteStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::fencedCodeStyler @ 0000b120 =====

ID MDAttributedStringRenderer::fencedCodeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}

// ===== MDAttributedStringRenderer::setFencedCodeStyler: @ 0000b12c =====

void MDAttributedStringRenderer::setFencedCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::indentedCodeStyler @ 0000b134 =====

ID MDAttributedStringRenderer::indentedCodeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}

// ===== MDAttributedStringRenderer::setIndentedCodeStyler: @ 0000b140 =====

void MDAttributedStringRenderer::setIndentedCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::strongStyler @ 0000b148 =====

ID MDAttributedStringRenderer::strongStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}

// ===== MDAttributedStringRenderer::setStrongStyler: @ 0000b154 =====

void MDAttributedStringRenderer::setStrongStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::emphasisStyler @ 0000b15c =====

ID MDAttributedStringRenderer::emphasisStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}

// ===== MDAttributedStringRenderer::setEmphasisStyler: @ 0000b168 =====

void MDAttributedStringRenderer::setEmphasisStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::strikethroughStyler @ 0000b170 =====

ID MDAttributedStringRenderer::strikethroughStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}

// ===== MDAttributedStringRenderer::setStrikethroughStyler: @ 0000b17c =====

void MDAttributedStringRenderer::setStrikethroughStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::underlineStyler @ 0000b184 =====

ID MDAttributedStringRenderer::underlineStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}

// ===== MDAttributedStringRenderer::setUnderlineStyler: @ 0000b190 =====

void MDAttributedStringRenderer::setUnderlineStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::highlighterStyler @ 0000b198 =====

ID MDAttributedStringRenderer::highlighterStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}

// ===== MDAttributedStringRenderer::setHighlighterStyler: @ 0000b1a4 =====

void MDAttributedStringRenderer::setHighlighterStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::codeStyler @ 0000b1ac =====

ID MDAttributedStringRenderer::codeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}

// ===== MDAttributedStringRenderer::setCodeStyler: @ 0000b1b8 =====

void MDAttributedStringRenderer::setCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x80) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::linkStyler @ 0000b1c0 =====

ID MDAttributedStringRenderer::linkStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x88);
}

// ===== MDAttributedStringRenderer::setLinkStyler: @ 0000b1cc =====

void MDAttributedStringRenderer::setLinkStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x88) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::imageStyler @ 0000b1d4 =====

ID MDAttributedStringRenderer::imageStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x90);
}

// ===== MDAttributedStringRenderer::setImageStyler: @ 0000b1e0 =====

void MDAttributedStringRenderer::setImageStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x90) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::thematicBreakStyler @ 0000b1e8 =====

ID MDAttributedStringRenderer::thematicBreakStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x98);
}

// ===== MDAttributedStringRenderer::setThematicBreakStyler: @ 0000b1f4 =====

void MDAttributedStringRenderer::setThematicBreakStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x98) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::colorStyler @ 0000b1fc =====

ID MDAttributedStringRenderer::colorStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa0);
}

// ===== MDAttributedStringRenderer::setColorStyler: @ 0000b208 =====

void MDAttributedStringRenderer::setColorStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa0) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::arrowStyler @ 0000b210 =====

ID MDAttributedStringRenderer::arrowStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa8);
}

// ===== MDAttributedStringRenderer::setArrowStyler: @ 0000b21c =====

void MDAttributedStringRenderer::setArrowStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa8) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::escapeStyler @ 0000b224 =====

ID MDAttributedStringRenderer::escapeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xb0);
}

// ===== MDAttributedStringRenderer::setEscapeStyler: @ 0000b230 =====

void MDAttributedStringRenderer::setEscapeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xb0) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::hashtagStyler @ 0000b238 =====

ID MDAttributedStringRenderer::hashtagStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xb8);
}

// ===== MDAttributedStringRenderer::setHashtagStyler: @ 0000b244 =====

void MDAttributedStringRenderer::setHashtagStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xb8) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::autoLinkStyler @ 0000b24c =====

ID MDAttributedStringRenderer::autoLinkStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xc0);
}

// ===== MDAttributedStringRenderer::setAutoLinkStyler: @ 0000b258 =====

void MDAttributedStringRenderer::setAutoLinkStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xc0) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::htmlStyler @ 0000b260 =====

ID MDAttributedStringRenderer::htmlStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 200);
}

// ===== MDAttributedStringRenderer::setHtmlStyler: @ 0000b26c =====

void MDAttributedStringRenderer::setHtmlStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 200) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::syntaxHighlightStyler @ 0000b274 =====

ID MDAttributedStringRenderer::syntaxHighlightStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xd0);
}

// ===== MDAttributedStringRenderer::setSyntaxHighlightStyler: @ 0000b280 =====

void MDAttributedStringRenderer::setSyntaxHighlightStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xd0) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::referenceStyler @ 0000b288 =====

ID MDAttributedStringRenderer::referenceStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xd8);
}

// ===== MDAttributedStringRenderer::setReferenceStyler: @ 0000b294 =====

void MDAttributedStringRenderer::setReferenceStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xd8) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::fileStyler @ 0000b29c =====

ID MDAttributedStringRenderer::fileStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe0);
}

// ===== MDAttributedStringRenderer::setFileStyler: @ 0000b2a8 =====

void MDAttributedStringRenderer::setFileStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xe0) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::footnoteStyler @ 0000b2b0 =====

ID MDAttributedStringRenderer::footnoteStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe8);
}

// ===== MDAttributedStringRenderer::setFootnoteStyler: @ 0000b2bc =====

void MDAttributedStringRenderer::setFootnoteStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xe8) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::wikiLinkStyler @ 0000b2c4 =====

ID MDAttributedStringRenderer::wikiLinkStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xf0);
}

// ===== MDAttributedStringRenderer::setWikiLinkStyler: @ 0000b2d0 =====

void MDAttributedStringRenderer::setWikiLinkStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xf0) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::tableStyler @ 0000b2d8 =====

ID MDAttributedStringRenderer::tableStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xf8);
}

// ===== MDAttributedStringRenderer::setTableStyler: @ 0000b2e4 =====

void MDAttributedStringRenderer::setTableStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xf8) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::foldTextStyler @ 0000b2ec =====

ID MDAttributedStringRenderer::foldTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x100);
}

// ===== MDAttributedStringRenderer::setFoldTextStyler: @ 0000b2f8 =====

void MDAttributedStringRenderer::setFoldTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x100) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::metadataTextStyler @ 0000b300 =====

ID MDAttributedStringRenderer::metadataTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x108);
}

// ===== MDAttributedStringRenderer::setMetadataTextStyler: @ 0000b30c =====

void MDAttributedStringRenderer::setMetadataTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x108) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::hardLineBreakTextStyler @ 0000b314 =====

ID MDAttributedStringRenderer::hardLineBreakTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x110);
}

// ===== MDAttributedStringRenderer::setHardLineBreakTextStyler: @ 0000b320 =====

void MDAttributedStringRenderer::setHardLineBreakTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x110) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::indentSpaceTextStyler @ 0000b328 =====

ID MDAttributedStringRenderer::indentSpaceTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x118);
}

// ===== MDAttributedStringRenderer::setIndentSpaceTextStyler: @ 0000b334 =====

void MDAttributedStringRenderer::setIndentSpaceTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x118) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::mathTextStyler @ 0000b33c =====

ID MDAttributedStringRenderer::mathTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x120);
}

// ===== MDAttributedStringRenderer::setMathTextStyler: @ 0000b348 =====

void MDAttributedStringRenderer::setMathTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x120) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::mathBlockTextStyler @ 0000b350 =====

ID MDAttributedStringRenderer::mathBlockTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x128);
}

// ===== MDAttributedStringRenderer::setMathBlockTextStyler: @ 0000b35c =====

void MDAttributedStringRenderer::setMathBlockTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x128) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::mermaidFencedCodeStyler @ 0000b364 =====

ID MDAttributedStringRenderer::mermaidFencedCodeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x130);
}

// ===== MDAttributedStringRenderer::setMermaidFencedCodeStyler: @ 0000b370 =====

void MDAttributedStringRenderer::setMermaidFencedCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x130) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::ast @ 0000b378 =====

ID MDAttributedStringRenderer::ast(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x138);
}

// ===== MDAttributedStringRenderer::setAst: @ 0000b384 =====

void MDAttributedStringRenderer::setAst_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x138) = param_3;
  return;
}

// ===== MDAttributedStringRenderer::.cxx_destruct @ 0000b38c =====

void MDAttributedStringRenderer::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

