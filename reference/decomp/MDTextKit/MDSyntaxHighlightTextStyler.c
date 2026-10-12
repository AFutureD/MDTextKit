// ===== MDSyntaxHighlightTextStyler::init @ 00000fd0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  undefined8 uVar1;
  ID IVar2;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDSyntaxHighlightTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    uVar1 = _objc_alloc_init(&_OBJC_CLASS___NSOperationQueue);
    objc_stub::setSyntaxHighlightOperationQueue_(self,uVar1);
    IVar2 = objc_stub::syntaxHighlightOperationQueue(self);
    objc_stub::setMaxConcurrentOperationCount_(IVar2,1);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setCommentColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setConstantColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setNumberColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setStringColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setEntityColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setKeywordColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setFunctionColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setVariableColor_(self,IVar2);
  }
  return self;
}


// ===== MDSyntaxHighlightTextStyler::canStyleAsync @ 000011ac =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDSyntaxHighlightTextStyler::canStyleAsync(ID param_1,SEL param_2)

{
  return 1;
}


// ===== MDSyntaxHighlightTextStyler::asyncStyleTextInAttributedString:range:completionBlock: @ 000011b4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDSyntaxHighlightTextStyler::asyncStyleTextInAttributedString_range_completionBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *local_180;
  undefined8 local_178;
  code *local_170;
  undefined *puStack_168;
  ID local_160;
  undefined **local_158;
  undefined *local_150;
  undefined8 local_148;
  code *local_140;
  undefined *puStack_138;
  ID local_130;
  undefined **local_128;
  undefined *local_120;
  undefined8 local_118;
  code *local_110;
  undefined *puStack_108;
  ID local_100;
  undefined **local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  ID local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  undefined **local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke
  ;
  puStack_78 = &
               ___block_descriptor_48_e8_32s40bs_e95_v72__0__NSMutableAttributedString_8__NSRange_QQ_16__NSRange_QQ_32__NSString_48__NSString_56_B64l
  ;
  local_c0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_b8 = 0xc2000000;
  local_b0 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_4
  ;
  puStack_a8 = &___block_descriptor_48_e8_32s40bs_e24_v32__0__NSRange_QQ_8_B24l;
  local_a0 = param_3;
  local_98 = &local_90;
  local_70 = param_1;
  local_68 = param_5;
  objc_stub::enumerateHTMLInlineInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_c0);
  local_f0 = puVar1;
  local_e8 = 0xc2000000;
  local_e0 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_7
  ;
  puStack_d8 = &___block_descriptor_48_e8_32s40bs_e24_v32__0__NSRange_QQ_8_B24l;
  local_d0 = param_3;
  local_c8 = &local_90;
  objc_stub::enumerateHTMLBlockInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_f0);
  local_120 = puVar1;
  local_118 = 0xc2000000;
  local_110 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2_8
  ;
  puStack_108 = &___block_descriptor_48_e8_32s40bs_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_100 = param_3;
  local_f8 = &local_90;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,*(undefined8 *)PTR__PMKMathSpanFormulaAttributeName_0005ea08,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_120);
  local_150 = puVar1;
  local_148 = 0xc2000000;
  local_140 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_12
  ;
  puStack_138 = &___block_descriptor_48_e8_32s40bs_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_130 = param_3;
  local_128 = &local_90;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,*(undefined8 *)PTR__PMKMathBlockFormulaAttributeName_0005e9f0,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_150);
  local_180 = puVar1;
  local_178 = 0xc2000000;
  local_170 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2_13
  ;
  puStack_168 = &
                ___block_descriptor_48_e8_32s40bs_e98_v104__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72__NSString_88_B96l
  ;
  local_160 = param_3;
  local_158 = &local_90;
  objc_stub::enumerateFencedCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_180);
  return;
}


// ===== MDSyntaxHighlightTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00001a80 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDSyntaxHighlightTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *local_150;
  undefined8 local_148;
  code *local_140;
  undefined *puStack_138;
  ID local_130;
  ID IStack_128;
  undefined *local_120;
  undefined8 local_118;
  code *local_110;
  undefined *puStack_108;
  ID local_100;
  ID local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  ID local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  ID local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  
  puVar1 = PTR___NSConcreteStackBlock_0005ebe0;
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
  ;
  puStack_78 = &___block_descriptor_48_e8_32s40s_e24_v32__0__NSRange_QQ_8_B24l;
  local_70 = param_1;
  local_68 = param_3;
  objc_stub::enumerateHTMLInlineInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_90);
  local_c0 = puVar1;
  local_b8 = 0xc2000000;
  local_b0 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_17
  ;
  puStack_a8 = &___block_descriptor_48_e8_32s40s_e24_v32__0__NSRange_QQ_8_B24l;
  local_a0 = param_1;
  local_98 = param_3;
  objc_stub::enumerateHTMLBlockInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_c0);
  local_f0 = puVar1;
  local_e8 = 0xc2000000;
  local_e0 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
  ;
  puStack_d8 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_d0 = param_1;
  local_c8 = param_3;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,*(undefined8 *)PTR__PMKMathSpanFormulaAttributeName_0005ea08,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_f0);
  local_120 = puVar1;
  local_118 = 0xc2000000;
  local_110 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_18
  ;
  puStack_108 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_100 = param_1;
  local_f8 = param_3;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,*(undefined8 *)PTR__PMKMathBlockFormulaAttributeName_0005e9f0,
             param_4->field0_0x0,param_4->field1_0x8,0,&local_120);
  local_150 = puVar1;
  local_148 = 0xc2000000;
  local_140 = 
  ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2_19
  ;
  puStack_138 = &
                ___block_descriptor_48_e8_32s40s_e98_v104__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56__NSRange_QQ_72__NSString_88_B96l
  ;
  local_130 = param_3;
  IStack_128 = param_1;
  objc_stub::enumerateFencedCodeInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_150);
  return;
}


// ===== MDSyntaxHighlightTextStyler::highlightAttributedString:range:language: @ 00001dc0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDSyntaxHighlightTextStyler::highlightAttributedString_range_language_
               (ID param_1,SEL param_2,ID param_3,_NSRange param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  unsigned_long_long local_60;
  unsigned_long_long uStack_58;
  
  IVar1 = objc_stub::string(param_3);
  IVar1 = objc_stub::substringWithRange_(IVar1,param_4.field0_0x0,param_4.field1_0x8);
  IVar2 = objc_stub::syntaxHighlighter(param_1);
  IVar1 = objc_stub::highlightedAttributedStringFromCode_language_error_(IVar2,IVar1,param_5,0);
  IVar2 = objc_stub::length(IVar1);
  local_88 = PTR___NSConcreteStackBlock_0005ebe0;
  local_80 = 0xc2000000;
  local_78 = 
  ___72__MDSyntaxHighlightTextStyler_highlightAttributedString_range_language___block_invoke;
  puStack_70 = &___block_descriptor_56_e8_32s_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l;
  local_68 = param_3;
  local_60 = param_4.field0_0x0;
  uStack_58 = param_4.field1_0x8;
  objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar1,0,IVar2,0,&local_88);
  return;
}


// ===== MDSyntaxHighlightTextStyler::syntaxHighlighter @ 00001f38 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::syntaxHighlighter(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar2 = _objc_opt_class();
  _objc_sync_enter();
  if (_syntaxHighlighter_syntaxHighlighter == 0) {
    IVar3 = _objc_opt_new(&_OBJC_CLASS___SFCHighlighter);
    IVar1 = _syntaxHighlighter_syntaxHighlighter;
    _syntaxHighlighter_syntaxHighlighter = IVar3;
    objc_stub::setupSyntaxColors(param_1,IVar1);
  }
  IVar1 = _syntaxHighlighter_syntaxHighlighter;
  _objc_sync_exit(uVar2);
  return IVar1;
}


// ===== MDSyntaxHighlightTextStyler::setupSyntaxColors @ 00001fd4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDSyntaxHighlightTextStyler::setupSyntaxColors(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_e8;
  ID local_e0;
  undefined8 local_d8;
  ID local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined8 local_b8;
  ID local_b0;
  undefined8 local_a8;
  ID local_a0;
  undefined8 local_98;
  ID local_90;
  undefined8 local_88;
  ID local_80;
  undefined8 local_78;
  ID local_70;
  undefined8 local_68;
  ID local_60;
  undefined8 local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar2 = objc_stub::commentColor(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
    local_58 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    local_50 = objc_stub::commentColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_50,&local_58,1);
    objc_stub::setCommentGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_68 = *(undefined8 *)puVar1;
    local_60 = objc_stub::constantColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_68,1);
    objc_stub::setConstantGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_78 = *(undefined8 *)puVar1;
    local_70 = objc_stub::numberColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_70,&local_78,1);
    objc_stub::setNumberGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_88 = *(undefined8 *)puVar1;
    local_80 = objc_stub::stringColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_80,&local_88,1);
    objc_stub::setStringGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_98 = *(undefined8 *)puVar1;
    local_90 = objc_stub::entityColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_90,&local_98,1);
    objc_stub::setEntityGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_a8 = *(undefined8 *)puVar1;
    local_a0 = objc_stub::keywordColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_a0,&local_a8,1);
    objc_stub::setKeywordGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_b8 = *(undefined8 *)puVar1;
    local_b0 = objc_stub::functionColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_b0,&local_b8,1);
    objc_stub::setFunctionGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_c8 = *(undefined8 *)puVar1;
    local_c0 = objc_stub::variableColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_c0,&local_c8,1);
    objc_stub::setVariableGroupAttributes_(IVar2,IVar3);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_d8 = *(undefined8 *)puVar1;
    local_d0 = objc_stub::stringColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_d0,&local_d8,1);
    objc_stub::setAttributes_forTypeName_(IVar2,IVar3,&cf_deleted);
    IVar2 = objc_stub::syntaxHighlighter(param_1);
    local_e8 = *(undefined8 *)puVar1;
    local_e0 = objc_stub::entityColor(param_1);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_e0,&local_e8,1);
    objc_stub::setAttributes_forTypeName_(IVar2,IVar3,&cf_inserted);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDSyntaxHighlightTextStyler::commentColor @ 00002518 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::commentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_commentColor);
}


// ===== MDSyntaxHighlightTextStyler::setCommentColor: @ 00002528 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setCommentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_commentColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::constantColor @ 00002534 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::constantColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_constantColor);
}


// ===== MDSyntaxHighlightTextStyler::setConstantColor: @ 00002544 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setConstantColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_constantColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::numberColor @ 00002550 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::numberColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_numberColor);
}


// ===== MDSyntaxHighlightTextStyler::setNumberColor: @ 00002560 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setNumberColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_numberColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::stringColor @ 0000256c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::stringColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_stringColor);
}


// ===== MDSyntaxHighlightTextStyler::setStringColor: @ 0000257c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setStringColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_stringColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::entityColor @ 00002588 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::entityColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_entityColor);
}


// ===== MDSyntaxHighlightTextStyler::setEntityColor: @ 00002598 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setEntityColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_entityColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::keywordColor @ 000025a4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::keywordColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_keywordColor);
}


// ===== MDSyntaxHighlightTextStyler::setKeywordColor: @ 000025b4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setKeywordColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_keywordColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::functionColor @ 000025c0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::functionColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_functionColor);
}


// ===== MDSyntaxHighlightTextStyler::setFunctionColor: @ 000025d0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setFunctionColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_functionColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::variableColor @ 000025dc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::variableColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_variableColor);
}


// ===== MDSyntaxHighlightTextStyler::setVariableColor: @ 000025ec =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setVariableColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_variableColor) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::syntaxHighlightOperationQueue @ 000025f8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDSyntaxHighlightTextStyler::syntaxHighlightOperationQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_syntaxHighlightOperationQueue);
}


// ===== MDSyntaxHighlightTextStyler::setSyntaxHighlightOperationQueue: @ 00002608 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDSyntaxHighlightTextStyler::setSyntaxHighlightOperationQueue_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_syntaxHighlightOperationQueue) = param_3;
  return;
}


// ===== MDSyntaxHighlightTextStyler::.cxx_destruct @ 0000261c =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

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


