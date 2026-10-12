// ===== MDAttributedStringRenderer::init @ 00009ea0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::init(ID param_1,SEL param_2)

{
  ID self;
  undefined8 uVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDAttributedStringRenderer;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___PMKAST);
    objc_stub::setAst_(self,uVar1);
  }
  return self;
}


// ===== MDAttributedStringRenderer::setStyleInlinesOnly: @ 00009f0c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDAttributedStringRenderer::setStyleInlinesOnly_(ID param_1,SEL param_2,bool param_3)

{
  ID self;
  
  *(char *)(param_1 + 8) = (char)param_3;
  self = objc_stub::ast(param_1);
  objc_stub::setParseInlinesOnly_(self,(ulong)param_3);
  return;
}


// ===== MDAttributedStringRenderer::attributedStringFromPolarMarkString: @ 00009f48 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDAttributedStringRenderer::attributedStringFromPolarMarkString_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::ast(param_1);
  objc_stub::replaceAllWithMarkdown_(IVar1,param_3);
  IVar1 = objc_stub::ast(param_1);
  IVar1 = objc_stub::annotatedString(IVar1);
  return IVar1;
}


// ===== MDAttributedStringRenderer::styledAttributedStringFromString: @ 00009fd4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDAttributedStringRenderer::styledAttributedStringFromString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::ast(param_1);
  objc_stub::replaceAllWithMarkdown_(IVar1,param_3);
  IVar1 = objc_stub::ast(param_1);
  IVar1 = objc_stub::annotatedString(IVar1);
  IVar2 = objc_stub::length(IVar1);
  IVar1 = objc_stub::styleAttributedString_inRange_(param_1,IVar1,0,IVar2);
  return IVar1;
}


// ===== MDAttributedStringRenderer::styleAttributedString:inRange: @ 0000a090 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDAttributedStringRenderer::styleAttributedString_inRange_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined *local_198;
  undefined8 local_190;
  code *local_188;
  undefined *puStack_180;
  undefined8 *local_178;
  undefined8 local_170;
  long lStack_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  char *local_110;
  unsigned_long_long local_108;
  unsigned_long_long local_100;
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_100 = param_4.field1_0x8;
  local_108 = param_4.field0_0x0;
  local_78 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_120 = &local_128;
  local_128 = 0;
  local_118 = 0x3010000000;
  local_110 = "";
  lStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = (long *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  self = objc_stub::textStylers(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_170,auStack_f8,0x10);
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  if (IVar2 != 0) {
    lVar3 = *local_160;
    do {
      IVar4 = 0;
      do {
        if (*local_160 != lVar3) {
          _objc_enumerationMutation(self);
        }
        local_198 = puVar1;
        local_190 = 0xc2000000;
        local_188 = ___60__MDAttributedStringRenderer_styleAttributedString_inRange___block_invoke;
        puStack_180 = &
                      ___block_descriptor_40_e8_32r_e43_v32__0__NSRange_QQ_8__NSAttributedString_24l
        ;
        local_178 = &local_128;
        objc_stub::styleTextInAttributedString_range_replacementBlock_
                  (*(ID *)(lStack_168 + IVar4 * 8),param_3,local_120 + 4,&local_198);
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_170,auStack_f8,0x10)
      ;
    } while (IVar2 != 0);
  }
  objc_stub::fixAttributesInRange_(param_3,local_120[4],local_120[5]);
  __Block_object_dispose(&local_128,8);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_78) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== MDAttributedStringRenderer::styleAttributedString:proposedSelectionRange:selectionLocationOffset:asyncCompletionBlock: @ 0000a2a8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID MDAttributedStringRenderer::
   styleAttributedString_proposedSelectionRange_selectionLocationOffset_asyncCompletionBlock_
             (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,unsigned_long_long param_5,
             ID param_6,undefined4 param_7)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID self_00;
  long lVar3;
  ID IVar4;
  undefined *local_1b8;
  undefined8 local_1b0;
  code *local_1a8;
  undefined *puStack_1a0;
  ID local_198;
  ID IStack_190;
  undefined8 *local_188;
  unsigned_long_long uStack_180;
  _NSRange *local_178;
  undefined8 local_170;
  long lStack_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  ID local_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_128 = &local_130;
  local_130 = 0;
  local_120 = 0x3010000000;
  local_118 = "";
  local_108 = objc_stub::length(param_3);
  local_110 = 0;
  lStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = (long *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  self = objc_stub::textStylers(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_170,auStack_100,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_160;
    do {
      IVar4 = 0;
      do {
        if (*local_160 != lVar3) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_168 + IVar4 * 8);
        if ((param_6 == 0) || (IVar2 = objc_stub::canStyleAsync(self_00), (int)IVar2 == 0)) {
          local_1b8 = PTR___NSConcreteStackBlock_0005ebe0;
          local_1b0 = 0xc2000000;
          local_1a8 = 
          ___120__MDAttributedStringRenderer_styleAttributedString_proposedSelectionRange_selectionLocationOffset_asyncCompletionBlock___block_invoke
          ;
          puStack_1a0 = &
                        ___block_descriptor_72_e8_32s40s48r_e43_v32__0__NSRange_QQ_8__NSAttributedString_24l
          ;
          local_188 = &local_130;
          local_198 = self_00;
          IStack_190 = param_1;
          uStack_180 = param_5;
          local_178 = param_4;
          objc_stub::styleTextInAttributedString_range_replacementBlock_
                    (self_00,param_3,local_128 + 4,&local_1b8);
        }
        else {
          objc_stub::asyncStyleTextInAttributedString_range_completionBlock_
                    (self_00,param_3,local_128 + 4,param_6);
        }
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self,&local_170,auStack_100,0x10);
    } while (IVar1 != 0);
  }
  objc_stub::fixAttributesInRange_(param_3,local_128[4],local_128[5]);
  __Block_object_dispose(&local_130,8);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_80) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDAttributedStringRenderer::textStylers @ 0000a654 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::textStylers(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IStack_188;
  ID local_180;
  ID local_178;
  ID local_170;
  ID local_168;
  ID local_160;
  ID local_158;
  ID local_150;
  ID local_148;
  ID local_140;
  ID local_138;
  ID local_130;
  ID local_128;
  ID local_120;
  ID local_118;
  ID local_110;
  ID local_108;
  ID local_100;
  ID local_f8;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  ID local_d8;
  ID local_d0;
  ID local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = *(ID *)(param_1 + 0x10);
  if (IVar1 == 0) {
    uVar2 = _objc_opt_new(&objc::class_t::MDBodyTextStyler);
    objc_stub::setBodyStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDBidiTextStyler);
    objc_stub::setBidiStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHeadingTextStyler);
    objc_stub::setHeadingStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDOrderedListTextStyler);
    objc_stub::setOrderedListStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDUnorderedListTextStyler);
    objc_stub::setUnorderedListStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDBlockQuoteTextStyler);
    objc_stub::setBlockQuoteStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFencedCodeTextStyler);
    objc_stub::setFencedCodeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDIndentedCodeTextStyler);
    objc_stub::setIndentedCodeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDStrongTextStyler);
    objc_stub::setStrongStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDEmphasisTextStyler);
    objc_stub::setEmphasisStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDStrikethroughTextStyler);
    objc_stub::setStrikethroughStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDUnderlineTextStyler);
    objc_stub::setUnderlineStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHighlighterTextStyler);
    objc_stub::setHighlighterStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDCodeTextStyler);
    objc_stub::setCodeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDLinkTextStyler);
    objc_stub::setLinkStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDImageTextStyler);
    objc_stub::setImageStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDThematicBreakTextStyler);
    objc_stub::setThematicBreakStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDColorTextStyler);
    objc_stub::setColorStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDArrowTextStyler);
    objc_stub::setArrowStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDEscapeTextStyler);
    objc_stub::setEscapeStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHashtagTextStyler);
    objc_stub::setHashtagStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDAutoLinkTextStyler);
    objc_stub::setAutoLinkStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHTMLTextStyler);
    objc_stub::setHtmlStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDSyntaxHighlightTextStyler);
    objc_stub::setSyntaxHighlightStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDReferenceTextStyler);
    objc_stub::setReferenceStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFileTextStyler);
    objc_stub::setFileStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFootnoteTextStyler);
    objc_stub::setFootnoteStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDWikiLinkTextStyler);
    objc_stub::setWikiLinkStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDTableTextStyler);
    objc_stub::setTableStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDFoldTextStyler);
    objc_stub::setFoldTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMetadataTextStyler);
    objc_stub::setMetadataTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDHardLineBreakTextStyler);
    objc_stub::setHardLineBreakTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDIndentSpaceTextStyler);
    objc_stub::setIndentSpaceTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMathTextStyler);
    objc_stub::setMathTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMathBlockTextStyler);
    objc_stub::setMathBlockTextStyler_(param_1,uVar2);
    uVar2 = _objc_opt_new(&objc::class_t::MDMermaidFencedCodeTextStyler);
    objc_stub::setMermaidFencedCodeStyler_(param_1,uVar2);
    IStack_188 = objc_stub::bodyStyler(param_1);
    local_180 = objc_stub::bidiStyler(param_1);
    local_178 = objc_stub::headingStyler(param_1);
    local_170 = objc_stub::orderedListStyler(param_1);
    local_168 = objc_stub::unorderedListStyler(param_1);
    local_160 = objc_stub::blockQuoteStyler(param_1);
    local_158 = objc_stub::indentSpaceTextStyler(param_1);
    local_150 = objc_stub::fencedCodeStyler(param_1);
    local_148 = objc_stub::mathBlockTextStyler(param_1);
    local_140 = objc_stub::mermaidFencedCodeStyler(param_1);
    local_138 = objc_stub::indentedCodeStyler(param_1);
    local_130 = objc_stub::strongStyler(param_1);
    local_128 = objc_stub::emphasisStyler(param_1);
    local_120 = objc_stub::strikethroughStyler(param_1);
    local_118 = objc_stub::underlineStyler(param_1);
    local_110 = objc_stub::codeStyler(param_1);
    local_108 = objc_stub::linkStyler(param_1);
    local_100 = objc_stub::imageStyler(param_1);
    local_f8 = objc_stub::thematicBreakStyler(param_1);
    local_f0 = objc_stub::colorStyler(param_1);
    local_e8 = objc_stub::arrowStyler(param_1);
    local_e0 = objc_stub::hashtagStyler(param_1);
    local_d8 = objc_stub::autoLinkStyler(param_1);
    local_d0 = objc_stub::htmlStyler(param_1);
    local_c8 = objc_stub::syntaxHighlightStyler(param_1);
    local_c0 = objc_stub::referenceStyler(param_1);
    local_b8 = objc_stub::fileStyler(param_1);
    local_b0 = objc_stub::footnoteStyler(param_1);
    local_a8 = objc_stub::wikiLinkStyler(param_1);
    local_a0 = objc_stub::escapeStyler(param_1);
    local_98 = objc_stub::highlighterStyler(param_1);
    local_90 = objc_stub::mathTextStyler(param_1);
    local_88 = objc_stub::tableStyler(param_1);
    local_80 = objc_stub::metadataTextStyler(param_1);
    local_78 = objc_stub::foldTextStyler(param_1);
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&IStack_188,0x23);
    IVar1 = objc_stub::arrayWithArray_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
    *(ID *)(param_1 + 0x10) = IVar1;
    IVar1 = *(ID *)(param_1 + 0x10);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== MDAttributedStringRenderer::setTextStylers: @ 0000b094 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setTextStylers_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::styleInlinesOnly @ 0000b0a0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDAttributedStringRenderer::styleInlinesOnly(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}


// ===== MDAttributedStringRenderer::bodyStyler @ 0000b0a8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::bodyStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


// ===== MDAttributedStringRenderer::setBodyStyler: @ 0000b0b4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setBodyStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::bidiStyler @ 0000b0bc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::bidiStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}


// ===== MDAttributedStringRenderer::setBidiStyler: @ 0000b0c8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setBidiStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::headingStyler @ 0000b0d0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::headingStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}


// ===== MDAttributedStringRenderer::setHeadingStyler: @ 0000b0dc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setHeadingStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::orderedListStyler @ 0000b0e4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::orderedListStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}


// ===== MDAttributedStringRenderer::setOrderedListStyler: @ 0000b0f0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setOrderedListStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::unorderedListStyler @ 0000b0f8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::unorderedListStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}


// ===== MDAttributedStringRenderer::setUnorderedListStyler: @ 0000b104 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setUnorderedListStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::blockQuoteStyler @ 0000b10c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::blockQuoteStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}


// ===== MDAttributedStringRenderer::setBlockQuoteStyler: @ 0000b118 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setBlockQuoteStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::fencedCodeStyler @ 0000b120 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::fencedCodeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}


// ===== MDAttributedStringRenderer::setFencedCodeStyler: @ 0000b12c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setFencedCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::indentedCodeStyler @ 0000b134 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::indentedCodeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}


// ===== MDAttributedStringRenderer::setIndentedCodeStyler: @ 0000b140 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setIndentedCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x50) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::strongStyler @ 0000b148 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::strongStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}


// ===== MDAttributedStringRenderer::setStrongStyler: @ 0000b154 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setStrongStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x58) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::emphasisStyler @ 0000b15c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::emphasisStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}


// ===== MDAttributedStringRenderer::setEmphasisStyler: @ 0000b168 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setEmphasisStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x60) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::strikethroughStyler @ 0000b170 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::strikethroughStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}


// ===== MDAttributedStringRenderer::setStrikethroughStyler: @ 0000b17c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setStrikethroughStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x68) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::underlineStyler @ 0000b184 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::underlineStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}


// ===== MDAttributedStringRenderer::setUnderlineStyler: @ 0000b190 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setUnderlineStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x70) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::highlighterStyler @ 0000b198 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::highlighterStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}


// ===== MDAttributedStringRenderer::setHighlighterStyler: @ 0000b1a4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setHighlighterStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::codeStyler @ 0000b1ac =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::codeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}


// ===== MDAttributedStringRenderer::setCodeStyler: @ 0000b1b8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x80) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::linkStyler @ 0000b1c0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::linkStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x88);
}


// ===== MDAttributedStringRenderer::setLinkStyler: @ 0000b1cc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setLinkStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x88) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::imageStyler @ 0000b1d4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::imageStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x90);
}


// ===== MDAttributedStringRenderer::setImageStyler: @ 0000b1e0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setImageStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x90) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::thematicBreakStyler @ 0000b1e8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::thematicBreakStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x98);
}


// ===== MDAttributedStringRenderer::setThematicBreakStyler: @ 0000b1f4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setThematicBreakStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x98) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::colorStyler @ 0000b1fc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::colorStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa0);
}


// ===== MDAttributedStringRenderer::setColorStyler: @ 0000b208 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setColorStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa0) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::arrowStyler @ 0000b210 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::arrowStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xa8);
}


// ===== MDAttributedStringRenderer::setArrowStyler: @ 0000b21c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setArrowStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xa8) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::escapeStyler @ 0000b224 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::escapeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xb0);
}


// ===== MDAttributedStringRenderer::setEscapeStyler: @ 0000b230 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setEscapeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xb0) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::hashtagStyler @ 0000b238 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::hashtagStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xb8);
}


// ===== MDAttributedStringRenderer::setHashtagStyler: @ 0000b244 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setHashtagStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xb8) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::autoLinkStyler @ 0000b24c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::autoLinkStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xc0);
}


// ===== MDAttributedStringRenderer::setAutoLinkStyler: @ 0000b258 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setAutoLinkStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xc0) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::htmlStyler @ 0000b260 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::htmlStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 200);
}


// ===== MDAttributedStringRenderer::setHtmlStyler: @ 0000b26c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setHtmlStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 200) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::syntaxHighlightStyler @ 0000b274 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::syntaxHighlightStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xd0);
}


// ===== MDAttributedStringRenderer::setSyntaxHighlightStyler: @ 0000b280 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setSyntaxHighlightStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xd0) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::referenceStyler @ 0000b288 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::referenceStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xd8);
}


// ===== MDAttributedStringRenderer::setReferenceStyler: @ 0000b294 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setReferenceStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xd8) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::fileStyler @ 0000b29c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::fileStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe0);
}


// ===== MDAttributedStringRenderer::setFileStyler: @ 0000b2a8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setFileStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xe0) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::footnoteStyler @ 0000b2b0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::footnoteStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe8);
}


// ===== MDAttributedStringRenderer::setFootnoteStyler: @ 0000b2bc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setFootnoteStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xe8) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::wikiLinkStyler @ 0000b2c4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::wikiLinkStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xf0);
}


// ===== MDAttributedStringRenderer::setWikiLinkStyler: @ 0000b2d0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setWikiLinkStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xf0) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::tableStyler @ 0000b2d8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::tableStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xf8);
}


// ===== MDAttributedStringRenderer::setTableStyler: @ 0000b2e4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setTableStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0xf8) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::foldTextStyler @ 0000b2ec =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::foldTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x100);
}


// ===== MDAttributedStringRenderer::setFoldTextStyler: @ 0000b2f8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setFoldTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x100) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::metadataTextStyler @ 0000b300 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::metadataTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x108);
}


// ===== MDAttributedStringRenderer::setMetadataTextStyler: @ 0000b30c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setMetadataTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x108) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::hardLineBreakTextStyler @ 0000b314 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::hardLineBreakTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x110);
}


// ===== MDAttributedStringRenderer::setHardLineBreakTextStyler: @ 0000b320 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setHardLineBreakTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x110) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::indentSpaceTextStyler @ 0000b328 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::indentSpaceTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x118);
}


// ===== MDAttributedStringRenderer::setIndentSpaceTextStyler: @ 0000b334 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setIndentSpaceTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x118) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::mathTextStyler @ 0000b33c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::mathTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x120);
}


// ===== MDAttributedStringRenderer::setMathTextStyler: @ 0000b348 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setMathTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x120) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::mathBlockTextStyler @ 0000b350 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::mathBlockTextStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x128);
}


// ===== MDAttributedStringRenderer::setMathBlockTextStyler: @ 0000b35c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setMathBlockTextStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x128) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::mermaidFencedCodeStyler @ 0000b364 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::mermaidFencedCodeStyler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x130);
}


// ===== MDAttributedStringRenderer::setMermaidFencedCodeStyler: @ 0000b370 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setMermaidFencedCodeStyler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x130) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::ast @ 0000b378 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDAttributedStringRenderer::ast(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x138);
}


// ===== MDAttributedStringRenderer::setAst: @ 0000b384 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDAttributedStringRenderer::setAst_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x138) = param_3;
  return;
}


// ===== MDAttributedStringRenderer::.cxx_destruct @ 0000b38c =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

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


