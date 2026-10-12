// ===== MDSyntaxHighlightTextStyler::init @ 00000fd0 =====

ID MDSyntaxHighlightTextStyler::init(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::MDSyntaxHighlightTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    uVar1 = _objc_alloc_init(NSOperationQueue);
    setSyntaxHighlightOperationQueue_(self,uVar1);
    IVar2 = syntaxHighlightOperationQueue(self);
    setMaxConcurrentOperationCount_(IVar2,1);
    IVar2 = blackColor(NSColor);
    setCommentColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setConstantColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setNumberColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setStringColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setEntityColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setKeywordColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setFunctionColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setVariableColor_(self,IVar2);
  }
  return self;
}

// ===== MDSyntaxHighlightTextStyler::canStyleAsync @ 000011ac =====

bool MDSyntaxHighlightTextStyler::canStyleAsync(ID param_1,SEL param_2)

{
  return 1;
}

// ===== MDSyntaxHighlightTextStyler::asyncStyleTextInAttributedString:range:completionBlock: @ 000011b4 =====

void MDSyntaxHighlightTextStyler::asyncStyleTextInAttributedString_range_completionBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  puVar1 = PTR___NSConcreteStackBlock;
  local_80 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke
  local_b0 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_4
  local_a0 = param_3;
  local_70 = param_1;
  local_68 = param_5;
  enumerateHTMLInlineInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_c0);
  local_e0 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_7
  local_d0 = param_3;
  enumerateHTMLBlockInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_f0);
  local_110 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2_8
  local_100 = param_3;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,_PMKMathSpanFormulaAttributeName,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_120);
  local_140 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_12
  local_130 = param_3;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,_PMKMathBlockFormulaAttributeName,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_150);
  local_170 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2_13
  local_160 = param_3;
  enumerateFencedCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_180);
  return;
}

// ===== MDSyntaxHighlightTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00001a80 =====

void MDSyntaxHighlightTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  puVar1 = PTR___NSConcreteStackBlock;
  local_80 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
  local_70 = param_1;
  local_68 = param_3;
  enumerateHTMLInlineInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_90);
  local_b0 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_17
  local_a0 = param_1;
  local_98 = param_3;
  enumerateHTMLBlockInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_c0);
  local_e0 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
  local_d0 = param_1;
  local_c8 = param_3;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,_PMKMathSpanFormulaAttributeName,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_f0);
  local_110 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_18
  local_100 = param_1;
  local_f8 = param_3;
  enumerateAttribute_inRange_options_usingBlock_
            (param_3,_PMKMathBlockFormulaAttributeName,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_120);
  local_140 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2_19
  local_130 = param_3;
  IStack_128 = param_1;
  enumerateFencedCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_150);
  return;
}

// ===== MDSyntaxHighlightTextStyler::highlightAttributedString:range:language: @ 00001dc0 =====

void MDSyntaxHighlightTextStyler::highlightAttributedString_range_language_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  
  IVar1 = string(param_3);
  IVar1 = substringWithRange_(IVar1,param_4.field0_0x0,param_4.field1_0x8);
  IVar2 = syntaxHighlighter(param_1);
  IVar1 = highlightedAttributedStringFromCode_language_error_(IVar2,IVar1,param_5,0);
  IVar2 = length(IVar1);
  local_78 = 
  ___72__MDSyntaxHighlightTextStyler_highlightAttributedString_range_language___block_invoke;
  local_68 = param_3;
  local_60 = param_4.field0_0x0;
  uStack_58 = param_4.field1_0x8;
  enumerateAttributesInRange_options_usingBlock_(IVar1,0,IVar2,0,&local_88);
  return;
}

// ===== MDSyntaxHighlightTextStyler::syntaxHighlighter @ 00001f38 =====

ID MDSyntaxHighlightTextStyler::syntaxHighlighter(ID param_1,SEL param_2)

{
  
  uVar2 = _objc_opt_class();
  _objc_sync_enter();
  if (_syntaxHighlighter_syntaxHighlighter == 0) {
    IVar3 = _objc_opt_new(SFCHighlighter);
    IVar1 = _syntaxHighlighter_syntaxHighlighter;
    _syntaxHighlighter_syntaxHighlighter = IVar3;
    setupSyntaxColors(param_1,IVar1);
  }
  IVar1 = _syntaxHighlighter_syntaxHighlighter;
  _objc_sync_exit(uVar2);
  return IVar1;
}

// ===== MDSyntaxHighlightTextStyler::setupSyntaxColors @ 00001fd4 =====

void MDSyntaxHighlightTextStyler::setupSyntaxColors(ID param_1,SEL param_2)

{
  
  IVar2 = commentColor(param_1);
  if (IVar2 != 0) {
    IVar2 = syntaxHighlighter(param_1);
    puVar1 = PTR__NSForegroundColorAttributeName;
    local_58 = _NSForegroundColorAttributeName;
    local_50 = commentColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_50,&local_58,1);
    setCommentGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_68 = *(undefined8 *)puVar1;
    local_60 = constantColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_60,&local_68,1);
    setConstantGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_78 = *(undefined8 *)puVar1;
    local_70 = numberColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_70,&local_78,1);
    setNumberGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_88 = *(undefined8 *)puVar1;
    local_80 = stringColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_80,&local_88,1);
    setStringGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_98 = *(undefined8 *)puVar1;
    local_90 = entityColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_90,&local_98,1);
    setEntityGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_a8 = *(undefined8 *)puVar1;
    local_a0 = keywordColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_a0,&local_a8,1);
    setKeywordGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_b8 = *(undefined8 *)puVar1;
    local_b0 = functionColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_b0,&local_b8,1);
    setFunctionGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_c8 = *(undefined8 *)puVar1;
    local_c0 = variableColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_c0,&local_c8,1);
    setVariableGroupAttributes_(IVar2,IVar3);
    IVar2 = syntaxHighlighter(param_1);
    local_d8 = *(undefined8 *)puVar1;
    local_d0 = stringColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_d0,&local_d8,1);
    setAttributes_forTypeName_(IVar2,IVar3,&cf_deleted);
    IVar2 = syntaxHighlighter(param_1);
    local_e8 = *(undefined8 *)puVar1;
    local_e0 = entityColor(param_1);
    IVar3 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_e0,&local_e8,1);
    setAttributes_forTypeName_(IVar2,IVar3,&cf_inserted);
  }
    return;
  }
}

// ===== MDSyntaxHighlightTextStyler::commentColor @ 00002518 =====

ID MDSyntaxHighlightTextStyler::commentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_commentColor);
}

// ===== MDSyntaxHighlightTextStyler::setCommentColor: @ 00002528 =====

void MDSyntaxHighlightTextStyler::setCommentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_commentColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::constantColor @ 00002534 =====

ID MDSyntaxHighlightTextStyler::constantColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_constantColor);
}

// ===== MDSyntaxHighlightTextStyler::setConstantColor: @ 00002544 =====

void MDSyntaxHighlightTextStyler::setConstantColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_constantColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::numberColor @ 00002550 =====

ID MDSyntaxHighlightTextStyler::numberColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_numberColor);
}

// ===== MDSyntaxHighlightTextStyler::setNumberColor: @ 00002560 =====

void MDSyntaxHighlightTextStyler::setNumberColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_numberColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::stringColor @ 0000256c =====

ID MDSyntaxHighlightTextStyler::stringColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_stringColor);
}

// ===== MDSyntaxHighlightTextStyler::setStringColor: @ 0000257c =====

void MDSyntaxHighlightTextStyler::setStringColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_stringColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::entityColor @ 00002588 =====

ID MDSyntaxHighlightTextStyler::entityColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_entityColor);
}

// ===== MDSyntaxHighlightTextStyler::setEntityColor: @ 00002598 =====

void MDSyntaxHighlightTextStyler::setEntityColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_entityColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::keywordColor @ 000025a4 =====

ID MDSyntaxHighlightTextStyler::keywordColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_keywordColor);
}

// ===== MDSyntaxHighlightTextStyler::setKeywordColor: @ 000025b4 =====

void MDSyntaxHighlightTextStyler::setKeywordColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_keywordColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::functionColor @ 000025c0 =====

ID MDSyntaxHighlightTextStyler::functionColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_functionColor);
}

// ===== MDSyntaxHighlightTextStyler::setFunctionColor: @ 000025d0 =====

void MDSyntaxHighlightTextStyler::setFunctionColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_functionColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::variableColor @ 000025dc =====

ID MDSyntaxHighlightTextStyler::variableColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_variableColor);
}

// ===== MDSyntaxHighlightTextStyler::setVariableColor: @ 000025ec =====

void MDSyntaxHighlightTextStyler::setVariableColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_variableColor) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::syntaxHighlightOperationQueue @ 000025f8 =====

ID MDSyntaxHighlightTextStyler::syntaxHighlightOperationQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_syntaxHighlightOperationQueue);
}

// ===== MDSyntaxHighlightTextStyler::setSyntaxHighlightOperationQueue: @ 00002608 =====

void MDSyntaxHighlightTextStyler::setSyntaxHighlightOperationQueue_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_syntaxHighlightOperationQueue) = param_3;
  return;
}

// ===== MDSyntaxHighlightTextStyler::.cxx_destruct @ 0000261c =====

void MDSyntaxHighlightTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_syntaxHighlightOperationQueue) = 0;
  *(undefined8 *)(param_1 + (long)_variableColor) = 0;
  *(undefined8 *)(param_1 + (long)_functionColor) = 0;
  *(undefined8 *)(param_1 + (long)_keywordColor) = 0;
  *(undefined8 *)(param_1 + (long)_entityColor) = 0;
  *(undefined8 *)(param_1 + (long)_stringColor) = 0;
  *(undefined8 *)(param_1 + (long)_numberColor) = 0;
  *(undefined8 *)(param_1 + (long)_constantColor) = 0;
  *(undefined8 *)(param_1 + (long)_commentColor) = 0;
  return;
}

