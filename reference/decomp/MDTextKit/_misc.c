// ===== ___86-[MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString:range:completionBlock:]_block_invoke @ 00001450 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8
___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  ID local_98;
  undefined8 local_90;
  ID local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  IVar1 = objc_stub::attributedSubstringFromRange_(param_2,param_3,param_4);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::UUID((ID)&_OBJC_CLASS___NSUUID);
  IVar2 = objc_stub::UUIDString(IVar2);
  objc_stub::addAttribute_value_range_(param_2,&cf_MDAsyncStylingIdentifier,IVar2,param_3,param_4);
  IVar3 = objc_stub::syntaxHighlighter(*(ID *)(param_1 + 0x20));
  objc_stub::highlightedAttributedStringFromCode_language_error_(IVar3,0,0,0);
  IVar3 = objc_stub::syntaxHighlightOperationQueue(*(ID *)(param_1 + 0x20));
  local_c0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_b8 = 0xc2000000;
  local_b0 = 
  ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2
  ;
  puStack_a8 = &___block_descriptor_96_e8_32s40s48s56s64s72bs_e5_v8__0l;
  local_a0 = *(undefined8 *)(param_1 + 0x20);
  local_78 = *(undefined8 *)(param_1 + 0x28);
  local_98 = IVar1;
  local_90 = param_7;
  local_88 = IVar2;
  local_80 = param_8;
  uStack_70 = param_5;
  local_68 = param_6;
  objc_stub::addOperationWithBlock_(IVar3,&local_c0);
  return 0;
}


// ===== ___86-[MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString:range:completionBlock:]_block_invoke_2 @ 00001670 =====

void ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2
               (long param_1)

{
  ID self;
  ID self_00;
  ID IVar1;
  
  self = *(ID *)(param_1 + 0x20);
  self_00 = *(ID *)(param_1 + 0x28);
  IVar1 = objc_stub::length(self_00);
  objc_stub::highlightAttributedString_range_language_
            (self,self_00,0,IVar1,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000016c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
            (*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x58));
  return;
}


// ===== ___copy_helper_block_e8_32s40s48s56s64s72b @ 000016cc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40s48s56s64s72b(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x48),*(void **)(param_2 + 0x48),7);
  return;
}


// ===== ___destroy_helper_block_e8_32s40s48s56s64s72s @ 00001720 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s48s56s64s72s(void)

{
  return 0;
}


// ===== ___copy_helper_block_e8_32s40b @ 00001768 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40b(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  return;
}


// ===== ___destroy_helper_block_e8_32s40s @ 0000179c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s(void)

{
  return 0;
}


// ===== ___86-[MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString:range:completionBlock:]_block_invoke.4 @ 000017c4 =====

void ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_4
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2,param_3,0,0,&cf_html,
             *(undefined8 *)PTR__PMKHTMLInlineAttributeName_0005e938,param_4);
  return;
}


// ===== ___86-[MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString:range:completionBlock:]_block_invoke.7 @ 00001818 =====

void ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_7
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2,param_3,0,0,&cf_html,
             *(undefined8 *)PTR__PMKHTMLBlockAttributeName_0005e928,param_4);
  return;
}


// ===== ___86-[MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString:range:completionBlock:]_block_invoke_2.8 @ 0000186c =====

void ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2_8
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_3,param_4,0,0,
               &cf_mathjax,*(undefined8 *)PTR__PMKMathSpanFormulaAttributeName_0005ea08,param_5);
  }
  return;
}


// ===== ___86-[MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString:range:completionBlock:]_block_invoke.12 @ 000018b8 =====

void ___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_12
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_3,param_4,0,0,
               &cf_mathjax,*(undefined8 *)PTR__PMKMathBlockFormulaAttributeName_0005e9f0,param_5);
  }
  return;
}


// ===== ___86-[MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString:range:completionBlock:]_block_invoke_2.13 @ 00001904 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___86__MDSyntaxHighlightTextStyler_asyncStyleTextInAttributedString_range_completionBlock___block_invoke_2_13
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
          undefined8 param_11,undefined8 param_12,cfstringStruct *param_13,undefined8 param_14)

{
  ID IVar1;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  pcVar4 = param_13;
  if (param_13 == (cfstringStruct *)0x0) {
    IVar1 = objc_stub::hasYamlAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    if ((int)IVar1 == 0) {
      return 0;
    }
    pcVar4 = &cf_yaml;
  }
  if (param_9 != 0x7fffffffffffffff) {
    IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
    objc_stub::paragraphRangeForRange_(IVar1,param_4,param_5);
    lVar3 = (param_7 - (ulong)(param_13 == (cfstringStruct *)0x0)) + extraout_x1;
    uVar2 = *(undefined8 *)PTR__PMKFencedCodeAttributeName_0005e8e8;
    if (param_6 != 0x7fffffffffffffff) {
      IVar1 = objc_stub::longestRangeForAttribute_atIndex_(*(ID *)(param_1 + 0x20),uVar2,param_4);
      lVar3 = (lVar3 - (param_6 + param_7)) + extraout_x1_00 + IVar1;
    }
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),&cf_MDSyntaxHighlightLanguage,pcVar4,param_2,param_3);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_9,param_10,
               param_9 - param_4,lVar3,pcVar4,uVar2,param_14);
  }
  return 0;
}


// ===== ___82-[MDSyntaxHighlightTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00001c60 =====

void ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::highlightAttributedString_range_language_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,param_3,&cf_html);
  return;
}


// ===== ___copy_helper_block_e8_32s40s @ 00001c7c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 ___copy_helper_block_e8_32s40s(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x28);
}


// ===== ___82-[MDSyntaxHighlightTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.17 @ 00001ca4 =====

void ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_17
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::highlightAttributedString_range_language_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,param_3,&cf_html);
  return;
}


// ===== ___82-[MDSyntaxHighlightTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 00001cc0 =====

void ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    objc_stub::highlightAttributedString_range_language_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_3,param_4,&cf_mathjax);
    return;
  }
  return;
}


// ===== ___82-[MDSyntaxHighlightTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.18 @ 00001ce4 =====

void ___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_18
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    objc_stub::highlightAttributedString_range_language_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_3,param_4,&cf_mathjax);
    return;
  }
  return;
}


// ===== ___82-[MDSyntaxHighlightTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2.19 @ 00001d08 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___82__MDSyntaxHighlightTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2_19
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  cfstringStruct *in_stack_00000020;
  
  if (in_stack_00000020 == (cfstringStruct *)0x0) {
    IVar1 = objc_stub::hasYamlAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    if ((int)IVar1 == 0) {
      return 0;
    }
    in_stack_00000020 = &cf_yaml;
  }
  if (in_stack_00000000 != 0x7fffffffffffffff) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),&cf_MDSyntaxHighlightLanguage,in_stack_00000020,param_2,
               param_3);
    objc_stub::highlightAttributedString_range_language_
              (*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),in_stack_00000000,
               in_stack_00000008,in_stack_00000020);
  }
  return 0;
}


// ===== ___72-[MDSyntaxHighlightTextStyler_highlightAttributedString:range:language:]_block_invoke @ 00001f14 =====

void ___72__MDSyntaxHighlightTextStyler_highlightAttributedString_range_language___block_invoke
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  objc_stub::addAttributes_range_
            (*(ID *)(param_1 + 0x20),param_2,*(long *)(param_1 + 0x28) + param_3,param_4);
  return;
}


// ===== ___copy_helper_block_e8_32s @ 00001f28 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 ___copy_helper_block_e8_32s(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x20);
}


// ===== ___destroy_helper_block_e8_32s @ 00001f30 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s(void)

{
  return 0;
}


// ===== -[NSAttributedString(Attachments)_stringByExpandingTextAttachments] @ 000026e8 =====

void __NSAttributedString_Attachments__stringByExpandingTextAttachments_(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::length(param_1);
  objc_stub::stringByExpandingTextAttachmentsInRange_(param_1,0,IVar1);
  return;
}


// ===== -[NSAttributedString(Attachments)_stringByExpandingTextAttachmentsInRange:] @ 00002714 =====

void __NSAttributedString_Attachments__stringByExpandingTextAttachmentsInRange__
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  objc_stub::stringByExpandingTextAttachmentsInRange_selectionToOffset_(param_1,param_3,param_4,0);
  return;
}


// ===== -[NSAttributedString(Attachments)_stringByExpandingTextAttachmentsInRange:selectionToOffset:] @ 0000271c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID __NSAttributedString_Attachments__stringByExpandingTextAttachmentsInRange_selectionToOffset__
             (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  ID IVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID IStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableString);
  IVar1 = objc_stub::initWithCapacity_(IVar1,param_4);
  local_88 = PTR___NSConcreteStackBlock_0005ebe0;
  local_80 = 0xc2000000;
  local_78 = 
  ___93__NSAttributedString_Attachments__stringByExpandingTextAttachmentsInRange_selectionToOffset___block_invoke
  ;
  puStack_70 = &___block_descriptor_72_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_68 = IVar1;
  IStack_60 = param_1;
  local_58 = param_5;
  uStack_50 = param_3;
  local_48 = param_4;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,param_3,param_4,0,
             &local_88);
  return IVar1;
}


// ===== ___93-[NSAttributedString(Attachments)_stringByExpandingTextAttachmentsInRange:selectionToOffset:]_block_invoke @ 000027f4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___93__NSAttributedString_Attachments__stringByExpandingTextAttachmentsInRange_selectionToOffset___block_invoke
          (long param_1,ID param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ID extraout_x1;
  ID *pIVar5;
  long lVar6;
  
  if (param_2 != 0) {
    uVar1 = _objc_opt_class(&objc::class_t::SFTextAttachment);
    uVar2 = _objc_opt_isKindOfClass(param_2,uVar1);
    if ((uVar2 & 1) != 0) {
      IVar3 = objc_stub::representedText(param_2);
      objc_stub::appendString_(*(ID *)(param_1 + 0x20),IVar3);
      pIVar5 = *(ID **)(param_1 + 0x30);
      if (pIVar5 == (ID *)0x0) {
        return 0;
      }
      lVar6 = *(long *)(param_1 + 0x38);
      IVar3 = objc_stub::length(IVar3);
      IVar3 = objc_stub::offsetSelectionRange_forReplacementRange_replacementLenght_
                        ((ID)&_OBJC_CLASS___NSAttributedString,*pIVar5,pIVar5[1],lVar6 + param_3,
                         param_4,IVar3);
      *pIVar5 = IVar3;
      pIVar5[1] = extraout_x1;
      return 0;
    }
  }
  IVar3 = *(ID *)(param_1 + 0x20);
  IVar4 = objc_stub::string(*(ID *)(param_1 + 0x28));
  IVar4 = objc_stub::substringWithRange_(IVar4,param_3,param_4);
  objc_stub::appendString_(IVar3,IVar4);
  return 0;
}


// ===== -[NSAttributedString(Attachments)_baselineOffsetForAttachmentAtIndex:attachmentHeight:] @ 00002904 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
__NSAttributedString_Attachments__baselineOffsetForAttachmentAtIndex_attachmentHeight__
          (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::attributesAtIndex_effectiveRange_(param_1,param_3,0);
  IVar1 = objc_stub::objectForKeyedSubscript_
                    (IVar1,*(undefined8 *)PTR__NSFontAttributeName_0005ec48);
  objc_stub::capHeight(IVar1);
  return 0;
}


// ===== -[NSAttributedString(Attachments)_rangeOfTextAttachment:] @ 0000297c =====

void __NSAttributedString_Attachments__rangeOfTextAttachment__
               (ID param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::rangeOfTextAttachment_foldRange_(param_1,param_3,0);
  return;
}


// ===== -[NSAttributedString(Attachments)_rangeOfTextAttachment:foldRange:] @ 00002984 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
__NSAttributedString_Attachments__rangeOfTextAttachment_foldRange__
          (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  ID IVar2;
  undefined8 uVar3;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = &local_70;
  local_70 = 0;
  local_60 = 0x3010000000;
  local_58 = "";
  uStack_48 = 0;
  local_50 = 0x7fffffffffffffff;
  if (param_4 != (undefined8 *)0x0) {
    param_4[1] = 0;
    *param_4 = 0x7fffffffffffffff;
  }
  uVar3 = *(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30;
  IVar2 = objc_stub::length(param_1);
  local_a8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_a0 = 0xc2000000;
  local_98 = ___67__NSAttributedString_Attachments__rangeOfTextAttachment_foldRange___block_invoke;
  puStack_90 = &___block_descriptor_56_e8_32s40r_e45_v40__0__NSTextAttachment_8__NSRange_QQ_16_B32l;
  puStack_80 = &local_70;
  local_88 = param_3;
  local_78 = param_4;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,uVar3,0,IVar2,0x100000,&local_a8);
  auVar1 = *(undefined1 (*) [16])(local_68 + 4);
  __Block_object_dispose(&local_70,8);
  return auVar1;
}


// ===== ___67-[NSAttributedString(Attachments)_rangeOfTextAttachment:foldRange:]_block_invoke @ 00002ab8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___67__NSAttributedString_Attachments__rangeOfTextAttachment_foldRange___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined8 extraout_x1;
  long lVar3;
  
  if (param_2 == *(ID *)(param_1 + 0x20)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(undefined8 *)(lVar3 + 0x20) = param_3;
    *(undefined8 *)(lVar3 + 0x28) = param_4;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      return 0;
    }
    IVar2 = objc_stub::isFold(param_2);
    if ((int)IVar2 == 0) {
      return 0;
    }
    IVar2 = objc_stub::representedAttributedText(param_2);
    IVar2 = objc_stub::rangeOfTextAttachment_(IVar2,*(undefined8 *)(param_1 + 0x20));
    if (IVar2 == 0x7fffffffffffffff) {
      return 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ID *)(lVar3 + 0x20) = IVar2;
    *(undefined8 *)(lVar3 + 0x28) = extraout_x1;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_3;
      puVar1[1] = param_4;
    }
  }
  *param_5 = 1;
  return 0;
}


// ===== ___copy_helper_block_e8_32s40r @ 00002b8c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  return;
}


// ===== ___destroy_helper_block_e8_32s40r @ 00002bc0 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return 0;
}


// ===== -[NSAttributedString(Attachments)_textAttachmentAtIndex:] @ 00002bec =====

void __NSAttributedString_Attachments__textAttachmentAtIndex__
               (ID param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::attribute_atIndex_effectiveRange_
            (param_1,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,param_3,0);
  return;
}


// ===== -[NSAttributedString(Attachments)_containsFileBackedAttachmentsInRange:] @ 00002c04 =====

undefined1
__NSAttributedString_Attachments__containsFileBackedAttachmentsInRange__
          (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_48 = &local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = 
  ___72__NSAttributedString_Attachments__containsFileBackedAttachmentsInRange___block_invoke;
  puStack_50 = &
               ___block_descriptor_40_e8_32r_e59_v40__0__SFTextAttachmentFileBackedView_8__NSRange_QQ_16_B32l
  ;
  local_38 = local_48;
  objc_stub::enumerateFileBackedAttachmentInRange_options_usingBlock_
            (param_1,param_3,param_4,0,&local_68);
  uVar1 = *(undefined1 *)(local_38 + 3);
  __Block_object_dispose(&local_40,8);
  return uVar1;
}


// ===== ___72-[NSAttributedString(Attachments)_containsFileBackedAttachmentsInRange:]_block_invoke @ 00002ca8 =====

void ___72__NSAttributedString_Attachments__containsFileBackedAttachmentsInRange___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5)

{
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_5 = 1;
  }
  return;
}


// ===== ___copy_helper_block_e8_32r @ 00002cc4 =====

void ___copy_helper_block_e8_32r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}


// ===== ___destroy_helper_block_e8_32r @ 00002cd4 =====

void ___destroy_helper_block_e8_32r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}


// ===== -[NSAttributedString(Attachments)_enumerateFileBackedAttachmentInRange:options:usingBlock:] @ 00002ce0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
__NSAttributedString_Attachments__enumerateFileBackedAttachmentInRange_options_usingBlock__
          (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = 
  ___91__NSAttributedString_Attachments__enumerateFileBackedAttachmentInRange_options_usingBlock___block_invoke
  ;
  puStack_50 = &___block_descriptor_40_e8_32bs_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_48 = param_6;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,param_3,param_4,0,
             &local_68);
  return 0;
}


// ===== ___91-[NSAttributedString(Attachments)_enumerateFileBackedAttachmentInRange:options:usingBlock:]_block_invoke @ 00002d90 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___91__NSAttributedString_Attachments__enumerateFileBackedAttachmentInRange_options_usingBlock___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::isFileBacked(param_2);
    if ((int)IVar1 != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),param_2,param_3,param_4,param_5);
    }
    IVar1 = objc_stub::isFold(param_2);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::representedAttributedText(param_2);
      uVar3 = *(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30;
      IVar2 = objc_stub::representedAttributedText(param_2);
      IVar2 = objc_stub::length(IVar2);
      local_80 = PTR___NSConcreteStackBlock_0005ebe0;
      local_78 = 0xc2000000;
      local_70 = 
      ___91__NSAttributedString_Attachments__enumerateFileBackedAttachmentInRange_options_usingBlock___block_invoke_2
      ;
      puStack_68 = &___block_descriptor_48_e8_32bs_e27_v40__0_8__NSRange_QQ_16_B32l;
      local_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_58 = param_5;
      objc_stub::enumerateAttribute_inRange_options_usingBlock_(IVar1,uVar3,0,IVar2,0,&local_80);
    }
  }
  return 0;
}


// ===== ___91-[NSAttributedString(Attachments)_enumerateFileBackedAttachmentInRange:options:usingBlock:]_block_invoke_2 @ 00002ec8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___91__NSAttributedString_Attachments__enumerateFileBackedAttachmentInRange_options_usingBlock___block_invoke_2
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4,char *param_5)

{
  ID IVar1;
  
  if (((param_2 != 0) && (IVar1 = objc_stub::isFileBacked(param_2), (int)IVar1 != 0)) &&
     ((**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),param_2,0x7fffffffffffffff,0,param_5), *param_5 == '\x01'
     )) {
    **(undefined1 **)(param_1 + 0x28) = 1;
  }
  return 0;
}


// ===== ___copy_helper_block_e8_32b @ 00002f44 =====

void ___copy_helper_block_e8_32b(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return;
}


// ===== -[NSAttributedString(Attachments)_tableAttachmentAtIndex:] @ 00002f54 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_Attachments__tableAttachmentAtIndex__
             (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                    (param_1,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,param_3,0);
  if (IVar1 != 0) {
    uVar2 = _objc_opt_class(&objc::class_t::MDTableTextAttachment);
    uVar3 = _objc_opt_isKindOfClass(IVar1,uVar2);
    if ((uVar3 & 1) != 0) {
      return IVar1;
    }
  }
  return 0;
}


// ===== -[NSAttributedString(Spacers)_hasSpacerAtIndex:] @ 00002fd0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool __NSAttributedString_Spacers__hasSpacerAtIndex__
               (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_1,&cf_MDSpacer,param_3,0);
  return IVar1 != 0;
}


// ===== -[NSAttributedString(Spacers)_hasOpeningSpacerAtIndex:] @ 00003018 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
__NSAttributedString_Spacers__hasOpeningSpacerAtIndex__
          (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_1,&cf_MDSpacer,param_3,0);
  if ((IVar1 == 0) ||
     (IVar1 = objc_stub::integerValue(IVar1), IVar1 != *(ID *)PTR__PMKOpenMarkerValue_0005ea20)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== -[NSAttributedString(Spacers)_hasClosingSpacerAtIndex:] @ 0000308c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
__NSAttributedString_Spacers__hasClosingSpacerAtIndex__
          (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_1,&cf_MDSpacer,param_3,0);
  if ((IVar1 == 0) ||
     (IVar1 = objc_stub::integerValue(IVar1), IVar1 != *(ID *)PTR__PMKCloseMarkerValue_0005e898)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== -[NSAttributedString(Spacers)_spacersAdjustedSelectionForProposedSelection:currentSelection:] @ 00003100 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
__NSAttributedString_Spacers__spacersAdjustedSelectionForProposedSelection_currentSelection__
          (ID param_1,undefined8 param_2,ID param_3,long param_4,ulong param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long extraout_x1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long local_80;
  long lStack_78;
  ID local_70;
  long lStack_68;
  
  lVar9 = param_4;
  if (param_3 != 0 || param_4 != 0) {
    uVar1 = param_3 + param_4;
    IVar5 = objc_stub::length(param_1);
    if (((uVar1 <= IVar5) && (IVar5 = objc_stub::length(param_1), param_3 < IVar5)) &&
       ((lVar3 = param_3 - param_5, lVar3 != 0 || (param_4 != param_6)))) {
      lVar8 = param_4 - param_6;
      lVar2 = -lVar3;
      if (-1 < lVar3) {
        lVar2 = lVar3;
      }
      if (lVar2 == 1) {
        bVar4 = true;
      }
      else {
        lVar2 = -lVar8;
        if (-1 < lVar8) {
          lVar2 = lVar8;
        }
        bVar4 = param_3 == param_5 && lVar2 == 1;
        if ((param_3 != param_5 || lVar2 != 1) && (param_4 != 0)) {
          param_3 = objc_stub::rangeByExtendingRange_toIncludeAttribute_
                              (param_1,param_3,param_4,&cf_MDSpacer);
          lVar9 = extraout_x1;
          goto LAB_00003374;
        }
      }
      if (param_3 == param_5) {
        uVar10 = 0;
        if (param_4 != param_6) {
          uVar10 = uVar1;
        }
        if ((0 < lVar8) && (IVar5 = objc_stub::length(param_1), uVar10 = uVar1, IVar5 <= uVar1))
        goto LAB_00003374;
      }
      else {
        uVar10 = param_3;
        if ((param_3 == 0) && (lVar3 < 0)) {
          param_3 = 0;
          goto LAB_00003374;
        }
      }
      lStack_68 = 0;
      local_70 = 0x7fffffffffffffff;
      IVar5 = objc_stub::attribute_atIndex_effectiveRange_(param_1,&cf_MDSpacer,uVar10 - 1,0);
      if (IVar5 != 0) {
        IVar6 = objc_stub::length(param_1);
        objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                  (param_1,&cf_MDSpacer,uVar10 - 1,&local_70,0,IVar6);
      }
      lStack_78 = 0;
      local_80 = 0x7fffffffffffffff;
      IVar6 = objc_stub::attribute_atIndex_effectiveRange_(param_1,&cf_MDSpacer,uVar10,0);
      if (IVar6 != 0) {
        IVar7 = objc_stub::length(param_1);
        objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                  (param_1,&cf_MDSpacer,uVar10,&local_80,0,IVar7);
        if (IVar5 != 0) {
          IVar7 = objc_stub::integerValue(IVar5);
          IVar6 = objc_stub::integerValue(IVar6);
          if (IVar7 == IVar6) {
            if (bVar4) {
              if (-1 < lVar3) {
                if (lVar3 < 1) {
                  if (lVar8 < 0 && param_3 == param_5) {
                    lVar9 = (uVar1 + param_4) - (local_70 + lStack_68);
                  }
                  else if (0 < lVar8 && param_3 == param_5) {
                    lVar9 = (local_80 - param_3) + lStack_78;
                  }
                  goto LAB_00003374;
                }
                local_70 = lStack_78 + local_80;
              }
              lVar9 = 0;
              param_3 = local_70;
              if (param_4 != 0) {
                lVar9 = uVar1 - local_70;
              }
            }
            else {
              IVar5 = objc_stub::integerValue(IVar5);
              param_3 = local_70;
              if (IVar5 != 1) {
                param_3 = lStack_78 + local_80;
              }
            }
          }
        }
      }
    }
  }
LAB_00003374:
  auVar11._8_8_ = lVar9;
  auVar11._0_8_ = param_3;
  return auVar11;
}


// ===== ___80-[MDStrikethroughTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000034dc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___80__MDStrikethroughTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),
               *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_0005eca0,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e680,param_2,param_3);
    puVar2 = PTR__NSForegroundColorAttributeName_0005ec80;
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::textColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_2,param_3);
    uVar4 = *(undefined8 *)puVar2;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_4,param_5);
    uVar4 = *(undefined8 *)puVar2;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_6,param_7);
    return 0;
  }
  return param_1;
}


// ===== ___76-[MDReferenceTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00003a50 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___76__MDReferenceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
               long param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((param_2 == 0x7fffffffffffffff || param_4 == 0x7fffffffffffffff) && param_14 == 0) {
    auVar7 = _NSUnionRange(param_6,param_7,param_11,param_12);
    uVar5 = auVar7._8_8_;
    uVar6 = auVar7._0_8_;
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__PMKReferenceAttributeName_0005ea28,uVar6,
               uVar5);
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__PMKReferenceMarkerAttributeName_0005ea40,
               uVar6,uVar5);
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__PMKReferenceTextAttributeName_0005ea48,
               uVar6,uVar5);
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__PMKReferenceLabelAttributeName_0005ea38,
               uVar6,uVar5);
    return;
  }
  if (param_14 == 0 || param_5 == 0) {
    auVar7 = _NSUnionRange(param_6,param_7,param_11,param_12);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),&cf_MDPreventMarkdownHiding,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e698,auVar7._0_8_,auVar7._8_8_);
  }
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar6,IVar3,param_6,param_7);
  uVar6 = *(undefined8 *)puVar1;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar6,IVar3,param_11,param_12);
  if (param_9 != 0x7fffffffffffffff) {
    uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar4 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar4,uVar6,IVar3,param_9,param_10);
  }
  puVar1 = PTR__NSLinkAttributeName_0005ec90;
  IVar3 = *(ID *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)PTR__NSLinkAttributeName_0005ec90;
  IVar4 = objc_stub::URLWithString_((ID)&_OBJC_CLASS___NSURL,&cf_MDReferenceURLString);
  objc_stub::addAttribute_value_range_(IVar3,uVar6,IVar4,param_2,param_3);
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::linkColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar6,IVar3,param_2,param_3);
  puVar2 = PTR__NSUnderlineStyleAttributeName_0005ecb0;
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6b0,param_2,param_3);
  if (param_4 == 0x7fffffffffffffff) {
    return;
  }
  IVar3 = *(ID *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)puVar1;
  IVar4 = objc_stub::URLWithString_((ID)&_OBJC_CLASS___NSURL,&cf_MDReferenceURLLabel);
  objc_stub::addAttribute_value_range_(IVar3,uVar6,IVar4,param_4,param_5);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar2,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6b0,param_4,param_5);
  return;
}


// ===== ___76-[MDReferenceTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.4 @ 00003dd0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___76__MDReferenceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
          undefined8 param_11,undefined8 param_12,long param_13,undefined8 param_14,
          undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar5 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar5,IVar3,param_9,param_10);
  uVar5 = *(undefined8 *)puVar1;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar5,IVar3,param_11,param_12);
  if (param_13 != 0x7fffffffffffffff) {
    uVar5 = *(undefined8 *)puVar1;
    IVar4 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar4,uVar5,IVar3,param_13,param_14);
    uVar5 = *(undefined8 *)puVar1;
    IVar4 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar4,uVar5,IVar3,param_15,param_16);
  }
  if (param_6 != 0x7fffffffffffffff) {
    uVar5 = *(undefined8 *)puVar1;
    IVar4 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::labelColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar4,uVar5,IVar3,param_6,param_7);
  }
  puVar2 = PTR__NSLinkAttributeName_0005ec90;
  IVar3 = *(ID *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)PTR__NSLinkAttributeName_0005ec90;
  IVar4 = objc_stub::URLWithString_((ID)&_OBJC_CLASS___NSURL,&cf_MDReferenceURLLabel);
  objc_stub::addAttribute_value_range_(IVar3,uVar5,IVar4,param_2,param_3);
  if (param_4 == 0x7fffffffffffffff) {
    return 0;
  }
  IVar4 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar4 = objc_stub::substringWithRange_(IVar4,param_4,param_5);
  IVar4 = objc_stub::validURLFromString_((ID)&_OBJC_CLASS___NSURL,IVar4);
  if (IVar4 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar2,IVar4,param_4,param_5);
    uVar5 = *(undefined8 *)puVar1;
    IVar4 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::linkColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar4,uVar5,IVar3,param_4,param_5);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6b0,param_4,param_5);
  }
  return 0;
}


// ===== -[NSFont(FontVariants)_fontVariantOfSize:] @ 00004148 =====

void __NSFont_FontVariants__fontVariantOfSize__(ID param_1)

{
  objc_stub::fontVariantOfSize_byAddingTraits_(param_1,0xffffffff);
  return;
}


// ===== -[NSFont(FontVariants)_fontVariantOfSize:byAddingTraits:] @ 00004150 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSFont_FontVariants__fontVariantOfSize_byAddingTraits__
             (undefined8 param_1,ID param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  ID *pIVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_98;
  ID local_90;
  undefined8 local_88;
  undefined8 local_80;
  ID IStack_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar3 = objc_stub::fontDescriptor(param_2);
  self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar4 = objc_stub::familyName(param_2);
  objc_stub::setObject_forKeyedSubscript_
            (self,IVar4,*(undefined8 *)PTR__NSFontFamilyAttribute_0005ec50);
  puVar1 = PTR__NSFontTraitsAttribute_0005ec68;
  IVar4 = objc_stub::objectForKey_(IVar3,*(undefined8 *)PTR__NSFontTraitsAttribute_0005ec68);
  puVar2 = PTR__NSFontWeightTrait_0005ec78;
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,*(undefined8 *)PTR__NSFontWeightTrait_0005ec78);
  if ((param_4 == 1) && (IVar4 != 0)) {
    local_88 = *(undefined8 *)PTR__NSFontSymbolicTrait_0005ec60;
    IStack_78 = objc_stub::numberWithUnsignedInt_((ID)&_OBJC_CLASS___NSNumber,1);
    local_80 = *(undefined8 *)puVar2;
    pIVar5 = &IStack_78;
    puVar6 = &local_88;
    uVar7 = 2;
    local_70 = IVar4;
  }
  else {
    if (param_4 == 0xffffffff) {
      IVar3 = objc_stub::fontName(param_2);
      objc_stub::setObject_forKeyedSubscript_
                (self,IVar3,*(undefined8 *)PTR__NSFontNameAttribute_0005ec58);
      goto LAB_00004308;
    }
    local_98 = *(undefined8 *)PTR__NSFontSymbolicTrait_0005ec60;
    IVar3 = objc_stub::symbolicTraits(IVar3);
    local_90 = objc_stub::numberWithUnsignedInt_
                         ((ID)&_OBJC_CLASS___NSNumber,(ulong)((uint)IVar3 | param_4));
    pIVar5 = &local_90;
    puVar6 = &local_98;
    uVar7 = 1;
  }
  IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,pIVar5,puVar6,uVar7);
  objc_stub::setObject_forKeyedSubscript_(self,IVar3,*(undefined8 *)puVar1);
LAB_00004308:
  IVar3 = objc_stub::fontDescriptorWithFontAttributes_((ID)&_OBJC_CLASS___NSFontDescriptor,self);
  IVar3 = objc_stub::fontWithDescriptor_size_((ID)&_OBJC_CLASS___NSFont,param_1,IVar3);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_68) {
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== -[NSFont(FontVariants)_fontVariantOfSize:weight:] @ 000043dc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSFont_FontVariants__fontVariantOfSize_weight__
             (undefined8 param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  ID self;
  ID IVar2;
  undefined8 local_78;
  undefined8 local_70;
  ID local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = objc_stub::fontDescriptor(param_3);
  self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = objc_stub::familyName(param_3);
  objc_stub::setObject_forKeyedSubscript_
            (self,IVar2,*(undefined8 *)PTR__NSFontFamilyAttribute_0005ec50);
  local_78 = *(undefined8 *)PTR__NSFontWeightTrait_0005ec78;
  local_68 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,param_2);
  local_70 = *(undefined8 *)PTR__NSFontSymbolicTrait_0005ec60;
  IVar1 = objc_stub::symbolicTraits(IVar1);
  local_60 = objc_stub::numberWithUnsignedInt_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_68,&local_78,2);
  objc_stub::setObject_forKeyedSubscript_
            (self,IVar1,*(undefined8 *)PTR__NSFontTraitsAttribute_0005ec68);
  IVar1 = objc_stub::fontDescriptorWithFontAttributes_((ID)&_OBJC_CLASS___NSFontDescriptor,self);
  IVar1 = objc_stub::fontWithDescriptor_size_((ID)&_OBJC_CLASS___NSFont,param_1,IVar1);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== ___75-[MDEmphasisTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00005b98 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___75__MDEmphasisTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_3 != 0) {
    auVar6 = _NSUnionRange(param_4,param_5,param_6,param_7);
    local_90 = PTR___NSConcreteStackBlock_0005ebe0;
    local_88 = 0xc2000000;
    local_80 = 
    ___75__MDEmphasisTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
    puStack_78 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x20);
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    uStack_68 = auVar5._8_8_;
    local_70 = auVar5._0_8_;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (*(ID *)*(undefined1 (*) [16])(param_1 + 0x20),
               *(undefined8 *)PTR__NSFontAttributeName_0005ec48,auVar6._0_8_,auVar6._8_8_,0,
               &local_90);
    objc_stub::fixItalicAttributeInRange_(*(ID *)(param_1 + 0x20),param_2,param_3);
    puVar2 = PTR__NSForegroundColorAttributeName_0005ec80;
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_4,param_5);
    uVar4 = *(undefined8 *)puVar2;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_6,param_7);
    param_1 = 0;
  }
  return param_1;
}


// ===== ___75-[MDEmphasisTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 00005d10 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___75__MDEmphasisTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::italicFontForFont_(*(ID *)(param_1 + 0x20),param_2);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar1,
               param_3,param_4);
  }
  return 0;
}


// ===== ___73-[MDEscapeTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00005ee8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___73__MDEscapeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::markerColor(*(ID *)(param_1 + 0x20));
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80,
             IVar1,param_2,param_3);
  objc_stub::removeAttribute_range_
            (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,param_2,
             param_3);
  return 0;
}


// ===== ___Block_byref_object_copy_ @ 000064ac =====

void ___Block_byref_object_copy_(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


// ===== ___Block_byref_object_dispose_ @ 000064bc =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___Block_byref_object_dispose_(void)

{
  return 0;
}


// ===== ___36-[MDFileTextAttachment_setFilePath:]_block_invoke @ 000064c4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___36__MDFileTextAttachment_setFilePath___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  long lVar2;
  
  IVar1 = objc_stub::representedAttributedText(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::textAttachmentAtIndex_(IVar1,param_4);
  *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = IVar1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  return 0;
}


// ===== ___copy_helper_block_e8_32s40r48r @ 0000654c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40r48r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  return;
}


// ===== ___destroy_helper_block_e8_32s40r48r @ 00006590 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40r48r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return 0;
}


// ===== ___Block_byref_object_copy_ @ 00007680 =====

void ___Block_byref_object_copy_(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


// ===== ___Block_byref_object_dispose_ @ 00007690 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___Block_byref_object_dispose_(void)

{
  return 0;
}


// ===== ___21-[MDCalloutIcon_icon]_block_invoke @ 00007698 =====

undefined8 ___21__MDCalloutIcon_icon__block_invoke(long param_1)

{
  objc_stub::drawIcon(*(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  return 1;
}


// ===== ___60-[MDAttributedStringRenderer_styleAttributedString:inRange:]_block_invoke @ 0000a268 =====

void ___60__MDAttributedStringRenderer_styleAttributedString_inRange___block_invoke
               (long param_1,undefined8 param_2,long param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  
  IVar1 = objc_stub::length(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(ID *)(lVar2 + 0x28) = (IVar1 - param_3) + *(long *)(lVar2 + 0x28);
  return;
}


// ===== ___120-[MDAttributedStringRenderer_styleAttributedString:proposedSelectionRange:selectionLocationOffset:asyncCompletionBlock:]_block_invoke @ 0000a4dc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___120__MDAttributedStringRenderer_styleAttributedString_proposedSelectionRange_selectionLocationOffset_asyncCompletionBlock___block_invoke
          (long param_1,long param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID extraout_x1;
  long lVar4;
  ID *pIVar5;
  
  IVar1 = objc_stub::length(param_4);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(ID *)(lVar4 + 0x28) = (IVar1 - param_3) + *(long *)(lVar4 + 0x28);
  IVar1 = *(long *)(param_1 + 0x38) + param_2;
  IVar3 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::hashtagStyler(*(ID *)(param_1 + 0x28));
  if (((IVar3 != IVar2) ||
      (IVar1 != **(ID **)(param_1 + 0x40) || param_3 != (*(ID **)(param_1 + 0x40))[1])) ||
     (IVar3 = objc_stub::hasClosingSpacerAtIndex_(param_4,0), (IVar3 & 1) == 0)) {
    pIVar5 = *(ID **)(param_1 + 0x40);
    IVar3 = *pIVar5;
    IVar2 = pIVar5[1];
    if (IVar1 == IVar3 && param_3 == IVar2) {
      IVar3 = objc_stub::hasOpeningSpacerAtIndex_(param_4,0);
      if ((IVar3 & 1) != 0) {
        return 0;
      }
      pIVar5 = *(ID **)(param_1 + 0x40);
      IVar3 = *pIVar5;
      IVar2 = pIVar5[1];
    }
    IVar1 = objc_stub::offsetSelectionRange_forReplacementRange_replacementAttributedString_
                      ((ID)&_OBJC_CLASS___NSAttributedString,IVar3,IVar2,IVar1,param_3,param_4);
    *pIVar5 = IVar1;
    pIVar5[1] = extraout_x1;
  }
  return 0;
}


// ===== ___copy_helper_block_e8_32s40s48r @ 0000a5e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40s48r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  return;
}


// ===== ___destroy_helper_block_e8_32s40s48r @ 0000a620 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s48r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  return 0;
}


// ===== ___78-[MDIndentSpaceTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0000b648 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___78__MDIndentSpaceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::attachmentForRange_inAttributedString_
                      (*(ID *)(param_1 + 0x20),param_3,param_4,*(undefined8 *)(param_1 + 0x28));
    IVar1 = objc_stub::attachmentAttributedString(IVar1);
    IVar1 = objc_stub::mutableCopy(IVar1);
    objc_stub::replaceCharactersInRange_withAttributedString_
              (*(ID *)(param_1 + 0x28),param_3,param_4,IVar1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3,param_4,IVar1)
    ;
    return 0;
  }
  return param_1;
}


// ===== ___copy_helper_block_e8_32s40s48b @ 0000b6f4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40s48b(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),7);
  return;
}


// ===== ___destroy_helper_block_e8_32s40s48s @ 0000b730 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s48s(void)

{
  return 0;
}


// ===== ___72-[MDImageTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0000ba40 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
___72__MDImageTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_5 == 0 && param_3 == 0) {
    IVar5 = *(ID *)(param_1 + 0x20);
    auVar7 = _NSUnionRange(in_stack_00000000,in_stack_00000008,in_stack_00000030,in_stack_00000038);
    objc_stub::addAttribute_value_range_
              (IVar5,&cf_MDPreventMarkdownHiding,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6c8
               ,auVar7._0_8_,auVar7._8_8_);
  }
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar6,IVar2,in_stack_00000000,in_stack_00000008);
  uVar6 = *(undefined8 *)puVar1;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar6,IVar2,in_stack_00000010,in_stack_00000018);
  uVar6 = *(undefined8 *)puVar1;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar6,IVar2,in_stack_00000020,in_stack_00000028);
  uVar6 = *(undefined8 *)puVar1;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar6,IVar2,in_stack_00000030,in_stack_00000038);
  IVar5 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar5 = objc_stub::substringWithRange_(IVar5,param_4,param_5);
  IVar2 = objc_stub::stringByRemovingPercentEncoding(IVar5);
  if (IVar2 != 0) {
    IVar5 = IVar2;
  }
  auVar7 = _NSUnionRange(in_stack_00000000,in_stack_00000008,in_stack_00000030,in_stack_00000038);
  uVar4 = auVar7._8_8_;
  uVar6 = auVar7._0_8_;
  IVar2 = _objc_alloc(&objc::class_t::MDImageTextAttachment);
  IVar3 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),uVar6,uVar4);
  IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar2,IVar3);
  objc_stub::maxTextContainerWidth(*(ID *)(param_1 + 0x28));
  objc_stub::setMaxTextContainerWidth_(IVar2);
  objc_stub::setFilePath_(IVar2,IVar5);
  objc_stub::updateAttachmentImage(IVar2);
  IVar5 = objc_stub::attachmentAttributedString(IVar2);
  IVar5 = objc_stub::mutableCopy(IVar5);
  objc_stub::removeAttribute_range_
            (IVar5,*(undefined8 *)PTR__PMKImageMarkerAttributeName_0005e988,0,1);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x20),uVar6,uVar4,IVar5);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar6,uVar4,IVar5);
  return 0;
}


// ===== ___78-[MDHighlighterTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0000c0e8 =====

void ___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (void)

{
  return;
}


// ===== ___78-[MDHighlighterTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 0000c0ec =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  ID IVar1;
  undefined1 auVar2 [16];
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  self = *(ID *)(param_1 + 0x20);
  IVar1 = objc_stub::backgroundColors(*(ID *)(param_1 + 0x28));
  IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,param_4);
  objc_stub::addAttribute_value_range_(self,&cf_MDHighlighterBackgroundColor,IVar1,param_2,param_3);
  local_88 = PTR___NSConcreteStackBlock_0005ebe0;
  local_80 = 0xc2000000;
  local_78 = 
  ___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3
  ;
  puStack_70 = &___block_descriptor_56_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x20);
  auVar2 = NEON_ext(auVar2,auVar2,8,1);
  uStack_60 = auVar2._8_8_;
  local_68 = auVar2._0_8_;
  local_58 = param_4;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (*(ID *)*(undefined1 (*) [16])(param_1 + 0x20),
             *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80,param_2,param_3,0,&local_88
            );
  return 0;
}


// ===== ___78-[MDHighlighterTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_3 @ 0000c208 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::markerColor(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::isEqual_(param_2,IVar1);
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                        (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,
                         param_3,0);
      if ((IVar1 == 0) &&
         (IVar1 = objc_stub::isRangeInsideCode_(*(ID *)(param_1 + 0x28),param_3,param_4),
         (IVar1 & 1) == 0)) {
        uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
        IVar1 = *(ID *)(param_1 + 0x28);
        IVar2 = objc_stub::textColors(*(ID *)(param_1 + 0x20));
        IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,*(undefined8 *)(param_1 + 0x30));
        objc_stub::addAttribute_value_range_(IVar1,uVar3,IVar2,param_3,param_4);
      }
    }
    else {
      IVar1 = objc_stub::textColors(*(ID *)(param_1 + 0x20));
      IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,*(undefined8 *)(param_1 + 0x30));
      IVar1 = objc_stub::colorWithAlphaComponent_(IVar1,0x3fd999999999999a);
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80
                 ,IVar1,param_3,param_4);
    }
  }
  return 0;
}


// ===== ___78-[MDHighlighterTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.4 @ 0000c398 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4
          (long param_1,long param_2,long param_3,int param_4,long param_5)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  double extraout_d0;
  undefined8 extraout_d0_00;
  double extraout_d0_01;
  
  IVar1 = objc_stub::textColors(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,param_5);
  IVar1 = objc_stub::colorWithAlphaComponent_(IVar1,0x3fd999999999999a);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80,
             IVar1,param_2,param_3);
  if (param_4 != 0) {
    lVar3 = param_2 + param_3;
    if (param_5 == 0) {
      puVar2 = (undefined *)
               objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + 0x28),param_2,0);
      uVar4 = 0;
    }
    else {
      lVar3 = lVar3 + -2;
      uVar4 = 2;
      puVar2 = PTR____NSDictionary0__struct_0005ecd0;
    }
    IVar5 = *(ID *)(param_1 + 0x20);
    IVar1 = objc_stub::textColors(IVar5);
    IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,param_5);
    IVar1 = objc_stub::attachmentForRange_color_inAttributedString_
                      (IVar5,lVar3,uVar4,IVar1,*(undefined8 *)(param_1 + 0x28));
    IVar1 = objc_stub::attachmentAttributedString(IVar1);
    IVar1 = objc_stub::mutableCopy(IVar1);
    IVar5 = objc_stub::length(IVar1);
    objc_stub::addAttributes_range_(IVar1,puVar2,0,IVar5);
    objc_stub::replaceCharactersInRange_withAttributedString_
              (*(ID *)(param_1 + 0x28),lVar3,uVar4,IVar1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar3,uVar4,IVar1);
  }
  IVar1 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x28),param_2);
  IVar5 = _objc_opt_new(&objc::class_t::MDHighlighterSpacerTextAttachment);
  objc_stub::pointSize(IVar1);
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x20));
  objc_stub::setAttachmentSize_(IVar5,extraout_d0 * 0.25,extraout_d0_00);
  objc_stub::updateAttachmentImage(IVar5);
  if (param_4 == 0) {
    objc_stub::addRightBoundarySpacerAttachment_inAttributedString_atIndex_replacementBlock_
              (*(ID *)(param_1 + 0x20),IVar5,*(undefined8 *)(param_1 + 0x28),param_2 + param_3,
               *(undefined8 *)(param_1 + 0x30));
  }
  else {
    objc_stub::attachmentSize(IVar5);
    objc_stub::attachmentSize(IVar5);
    objc_stub::setAttachmentSize_(IVar5,extraout_d0_01 + -1.0);
    objc_stub::addLeftBoundarySpacerAttachment_inAttributedString_atIndex_replacementBlock_
              (*(ID *)(param_1 + 0x20),IVar5,*(undefined8 *)(param_1 + 0x28),param_2,
               *(undefined8 *)(param_1 + 0x30));
  }
  return 0;
}


// ===== ___71-[MDHTMLTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0000ce20 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  
  IVar1 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_2);
  objc_stub::pointSize(IVar1);
  objc_stub::fontSizeMultiplier(*(ID *)(param_1 + 0x28));
  IVar1 = objc_stub::codeFont(*(ID *)(param_1 + 0x28));
  IVar1 = objc_stub::fontWithSize_(IVar1,extraout_d0 * extraout_d0_00);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar1,param_2,
             param_3);
  return 0;
}


// ===== ___71-[MDHTMLTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.2 @ 0000cee4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  
  IVar1 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_2);
  objc_stub::pointSize(IVar1);
  objc_stub::fontSizeMultiplier(*(ID *)(param_1 + 0x28));
  IVar1 = objc_stub::codeFont(*(ID *)(param_1 + 0x28));
  IVar1 = objc_stub::fontWithSize_(IVar1,extraout_d0 * extraout_d0_00);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar1,param_2,
             param_3);
  return 0;
}


// ===== ___71-[MDHTMLTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 0000cfa8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___71__MDHTMLTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar1 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::entityColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_2,param_3);
  uVar4 = *(undefined8 *)puVar2;
  IVar1 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_4,param_5);
  uVar4 = *(undefined8 *)puVar2;
  IVar1 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_6,param_7);
  return 0;
}


// ===== ___71-[MDMathTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0000d298 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID ___71__MDMathTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
             (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  long lVar10;
  undefined8 uVar11;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 extraout_d0_01;
  double extraout_d0_02;
  undefined1 auVar12 [16];
  
  IVar3 = objc_stub::isRangeInsideTable_(*(ID *)(param_1 + 0x20),param_4,param_5);
  if ((IVar3 & 1) != 0) {
    return IVar3;
  }
  auVar12 = _NSUnionRange(param_4,param_5,param_6,param_7);
  lVar10 = auVar12._8_8_;
  lVar4 = auVar12._0_8_;
  IVar5 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  objc_stub::pointSize(IVar5);
  objc_stub::fontSizeMultiplier(*(ID *)(param_1 + 0x28));
  IVar3 = objc_stub::codeFont(*(ID *)(param_1 + 0x28));
  IVar6 = objc_stub::fontWithSize_(IVar3,extraout_d0 * extraout_d0_00);
  IVar7 = objc_stub::backgroundColorAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar8 = objc_stub::fontColorAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar3 = *(ID *)(param_1 + 0x20);
  IVar9 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
  objc_stub::addAttributes_range_(IVar3,IVar9,lVar4,lVar10);
  puVar1 = PTR__NSFontAttributeName_0005ec48;
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar6,param_2,
             param_3);
  puVar2 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar3 = *(ID *)(param_1 + 0x20);
  IVar9 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar3,uVar11,IVar9,param_4,param_5);
  uVar11 = *(undefined8 *)puVar2;
  IVar3 = *(ID *)(param_1 + 0x20);
  IVar9 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar3,uVar11,IVar9,param_6,param_7);
  IVar3 = *(ID *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)puVar1;
  auVar12 = _NSUnionRange(param_4,param_5,param_6,param_7);
  objc_stub::addAttribute_value_range_(IVar3,uVar11,IVar6,auVar12._0_8_,auVar12._8_8_);
  IVar3 = _objc_alloc(&objc::class_t::MDMathTextAttachment);
  IVar3 = objc_stub::initWithRepresentedAttributedText_(IVar3,0);
  IVar6 = objc_stub::attribute_atIndex_effectiveRange_
                    (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__PMKMathSpanAttributeName_0005ea00,
                     param_4,0);
  objc_stub::setMathString_(IVar3,IVar6);
  objc_stub::setFont_(IVar3,IVar5);
  IVar5 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  objc_stub::setParagraphStyle_(IVar3,IVar5);
  objc_stub::setAttachmentSize_(IVar3,0x3ff0000000000000,0x3ff0000000000000);
  objc_stub::setBackgroundColor_(IVar3,IVar7);
  objc_stub::setTextColor_(IVar3,IVar8);
  IVar3 = objc_stub::attachmentAttributedString(IVar3);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x20),param_6 + param_7,0,IVar3);
  IVar5 = objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + 0x20),param_4 + param_5,0);
  IVar5 = objc_stub::mutableCopy(IVar5);
  IVar6 = objc_stub::numberWithUnsignedInteger_
                    ((ID)&_OBJC_CLASS___NSNumber,*(undefined8 *)PTR__PMKCloseMarkerValue_0005e898);
  objc_stub::setObject_forKeyedSubscript_(IVar5,IVar6,&cf_MDSpacer);
  objc_stub::removeObjectForKey_(IVar5,*(undefined8 *)PTR__PMKMathSpanFormulaAttributeName_0005ea08)
  ;
  objc_stub::addAttributes_range_(*(ID *)(param_1 + 0x20),IVar5,param_6 + param_7,1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),param_6 + param_7,0,IVar3);
  IVar3 = _objc_opt_new(&objc::class_t::MDMathSpacerTextAttachment);
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
  objc_stub::setAttachmentSize_
            (IVar3,(double)(float)(int)(extraout_d0 * extraout_d0_00 * 0.25),extraout_d0_01);
  objc_stub::updateAttachmentImage(IVar3);
  objc_stub::addBoundarySpacerAttachment_inAttributedString_range_replacementBlock_
            (*(ID *)(param_1 + 0x28),IVar3,*(undefined8 *)(param_1 + 0x20),lVar4,lVar10,
             *(undefined8 *)(param_1 + 0x30));
  uVar11 = *(undefined8 *)PTR__NSKernAttributeName_0005ec88;
  IVar3 = *(ID *)(param_1 + 0x20);
  objc_stub::basePointSize(*(ID *)(param_1 + 0x28));
  IVar5 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,extraout_d0_02 * 7.0);
  objc_stub::addAttribute_value_range_(IVar3,uVar11,IVar5,lVar4 + lVar10,1);
  return 0;
}


// ===== ___72-[MDEditorController_performStylingInTextView:withAutomaticTextChanges:]_block_invoke @ 0000dc40 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___72__MDEditorController_performStylingInTextView_withAutomaticTextChanges___block_invoke
          (long param_1,undefined8 param_2,long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ID self;
  undefined1 auVar8 [16];
  uint local_104;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  ID IStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  long local_98;
  ID IStack_90;
  long local_88;
  ID IStack_80;
  ID local_78;
  undefined8 uStack_70;
  
  IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  local_78 = objc_stub::offsetSelection_byReplacingTextAttachmentInRange_
                       (IVar1,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),param_3,
                        param_4);
  uStack_70 = extraout_x1;
  IVar1 = objc_stub::attributedStringRenderer(*(ID *)(param_1 + 0x28));
  IVar2 = objc_stub::asyncStylerCompletionBlockForTextView_
                    (*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  IVar3 = objc_stub::
          styleAttributedString_proposedSelectionRange_selectionLocationOffset_asyncCompletionBlock_
                    (IVar1,param_2,&local_78,param_3,IVar2);
  IVar1 = objc_stub::length(IVar3);
  IVar2 = objc_stub::autoHideMarkdown(*(ID *)(param_1 + 0x28));
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::convertSelectionRangeFromSelection_toSubstringRange_
                      ((ID)&_OBJC_CLASS___NSString,local_78,uStack_70,param_3,param_4);
    IVar4 = objc_stub::isFirstResponder(*(ID *)(param_1 + 0x20));
    if ((int)IVar4 == 0) {
      IVar2 = 0x7fffffffffffffff;
    }
    objc_stub::autoHideMarkdownInAttributedString_selectionRange_
              (*(ID *)(param_1 + 0x28),IVar3,IVar2,extraout_x1_00);
  }
  IVar2 = *(ID *)(param_1 + 0x28);
  IVar4 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::diffRangeFromInnerAttrString_outerAttrString_inOuterRange_outerDiffRange_
                    (IVar2,IVar3,IVar4,param_3,param_4,&local_88);
  lVar6 = param_3;
  if (IVar2 != 0x7fffffffffffffff) {
    IVar3 = objc_stub::attributedSubstringFromRange_(IVar3,IVar2,extraout_x1_01);
    IVar3 = objc_stub::mutableCopy(IVar3);
    self = *(ID *)(param_1 + 0x28);
    IVar4 = objc_stub::textAttachmentConfigurator(self);
    objc_stub::
    validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset_
              (self,IVar4,IVar3,&local_78,IVar2 + param_3);
    param_4 = IStack_80;
    lVar6 = local_88;
  }
  IVar4 = objc_stub::undoManager(*(ID *)(param_1 + 0x20));
  IVar4 = objc_stub::isUndoing(IVar4);
  if ((IVar4 & 1) == 0) {
    IVar4 = objc_stub::undoManager(*(ID *)(param_1 + 0x20));
    IVar4 = objc_stub::isRedoing(IVar4);
    local_104 = (uint)IVar4;
    if (IVar2 == 0x7fffffffffffffff) {
      if ((IVar4 & 1) == 0) {
        IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
        objc_stub::beginEditing(IVar1);
        IVar1 = objc_stub::length(IVar3);
        local_c0 = PTR___NSConcreteStackBlock_0005ebe0;
        local_b8 = 0xc2000000;
        local_b0 = 
        ___72__MDEditorController_performStylingInTextView_withAutomaticTextChanges___block_invoke_2
        ;
        puStack_a8 = &___block_descriptor_56_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
        local_a0 = *(undefined8 *)(param_1 + 0x20);
        local_98 = lVar6;
        IStack_90 = param_4;
        objc_stub::enumerateAttribute_inRange_options_usingBlock_
                  (IVar3,&cf_MDAsyncStylingIdentifier,0,IVar1,0,&local_c0);
        IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
        objc_stub::endEditing(IVar1);
      }
      goto LAB_0000df6c;
    }
  }
  else {
    if (IVar2 == 0x7fffffffffffffff) {
LAB_0000df6c:
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      IVar1 = *(ID *)(param_1 + 0x28);
      goto LAB_0000e198;
    }
    local_104 = 1;
  }
  IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::string(IVar2);
  IVar2 = objc_stub::substringWithRange_(IVar2,lVar6,param_4);
  IVar4 = objc_stub::string(IVar3);
  IVar2 = objc_stub::isEqualToString_(IVar2,IVar4);
  if (((int)IVar2 == 0) || (IVar2 = objc_stub::useDiff(*(ID *)(param_1 + 0x28)), (IVar2 & 1) == 0))
  {
    if (local_104 == 0) {
      objc_stub::replaceCharactersInRange_withAttributedString_selectRange_
                (*(ID *)(param_1 + 0x20),lVar6,param_4,IVar3,local_78,uStack_70);
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(long *)(lVar7 + 0x20) = lVar6;
      *(ID *)(lVar7 + 0x28) = param_4;
      goto LAB_0000e170;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar7 + 0x20) = lVar6;
LAB_0000e184:
    *(ID *)(lVar7 + 0x28) = param_4;
  }
  else {
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    objc_stub::beginEditing(IVar2);
    IVar2 = objc_stub::length(IVar3);
    local_100 = PTR___NSConcreteStackBlock_0005ebe0;
    local_f8 = 0xc2000000;
    local_f0 = 
    ___72__MDEditorController_performStylingInTextView_withAutomaticTextChanges___block_invoke_11;
    puStack_e8 = &___block_descriptor_64_e8_32s40s_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l;
    auVar8 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x20),
                      8,1);
    uStack_d8 = auVar8._8_8_;
    local_e0 = auVar8._0_8_;
    local_d0 = lVar6;
    IStack_c8 = param_4;
    objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar3,0,IVar2,0,&local_100);
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    objc_stub::endEditing(IVar2);
    IVar2 = objc_stub::layoutManager(*(ID *)(param_1 + 0x20));
    objc_stub::ensureLayoutForCharacterRange_(IVar2,param_3,IVar1);
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar7 + 0x20) = lVar6;
    *(ID *)(lVar7 + 0x28) = param_4;
    if ((local_104 & 1) == 0) {
LAB_0000e170:
      param_4 = objc_stub::length(IVar3);
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      goto LAB_0000e184;
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  IVar1 = *(ID *)(param_1 + 0x28);
  lVar6 = *(long *)(lVar7 + 0x20);
  param_4 = *(ID *)(lVar7 + 0x28);
LAB_0000e198:
  objc_stub::invalidateDisplayForStyledRange_inTextView_(IVar1,lVar6,param_4,uVar5);
  return 0;
}


// ===== ___72-[MDEditorController_performStylingInTextView:withAutomaticTextChanges:]_block_invoke_2 @ 0000e1c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___72__MDEditorController_performStylingInTextView_withAutomaticTextChanges___block_invoke_2
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ID self;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    self = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    objc_stub::addAttribute_value_range_
              (self,&cf_MDAsyncStylingIdentifier,param_2,lVar1 + param_3,param_4);
    return 0;
  }
  return param_1;
}


// ===== ___72-[MDEditorController_performStylingInTextView:withAutomaticTextChanges:]_block_invoke.11 @ 0000e248 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___72__MDEditorController_performStylingInTextView_withAutomaticTextChanges___block_invoke_11
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ID self;
  ID IVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  self = objc_stub::attrStringDiffer(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x28));
  objc_stub::setAttributesPreservingViewAttachments_range_inAttributedString_
            (self,param_2,lVar2 + param_3,param_4,IVar1);
  return 0;
}


// ===== ___copy_helper_block_e8_32s40s48r56r @ 0000e2e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40s48r56r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  return;
}


// ===== ___destroy_helper_block_e8_32s40s48r56r @ 0000e330 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s48r56r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  return 0;
}


// ===== ___60-[MDEditorController_asyncStylerCompletionBlockForTextView:]_block_invoke @ 0000e7d4 =====

void ___60__MDEditorController_asyncStylerCompletionBlockForTextView___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  objc_stub::
  asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView_
            (*(ID *)(param_1 + 0x20),param_2,param_3,param_4,param_5,param_6,param_7,
             *(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== ___114-[MDEditorController_asyncTextStyler:styledString:asyncAttributeUUID:attributeName:attributeOffsetRange:textView:]_block_invoke @ 0000e964 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___114__MDEditorController_asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView___block_invoke
          (long param_1)

{
  ID self;
  ID IVar1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  self = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::length(IVar1);
  local_90 = PTR___NSConcreteStackBlock_0005ebe0;
  local_88 = 0xc2000000;
  local_80 = 
  ___114__MDEditorController_asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView___block_invoke_2
  ;
  puStack_78 = &___block_descriptor_80_e8_32s40s48s56s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_70 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  local_50 = *(undefined8 *)(param_1 + 0x40);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (self,&cf_MDAsyncStylingIdentifier,0,IVar1,0,&local_90);
  return 0;
}


// ===== ___114-[MDEditorController_asyncTextStyler:styledString:asyncAttributeUUID:attributeName:attributeOffsetRange:textView:]_block_invoke_2 @ 0000ea80 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___114__MDEditorController_asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView___block_invoke_2
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  ID IStack_68;
  
  if ((param_2 != 0) &&
     (IVar1 = objc_stub::isEqualToString_(param_2,*(undefined8 *)(param_1 + 0x20)), (int)IVar1 != 0)
     ) {
    IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x28));
    objc_stub::removeAttribute_range_(IVar1,&cf_MDAsyncStylingIdentifier,param_3,param_4);
    IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x28));
    IVar2 = objc_stub::length(IVar2);
    IVar1 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                      (IVar1,uVar3,param_3,&local_70,0,IVar2);
    if (IVar1 != 0) {
      local_70 = local_70 + *(long *)(param_1 + 0x40);
      IVar2 = IStack_68 - *(long *)(param_1 + 0x48);
      IStack_68 = IVar2;
      IVar1 = objc_stub::length(*(ID *)(param_1 + 0x38));
      if (IVar2 == IVar1) {
        IVar1 = _objc_opt_new(&objc::class_t::MDAttributedStringDiffer);
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x28));
        IVar1 = objc_stub::
                diffRangebetweenAttributedString_andAttributedString_inRange_secondDiffRange_
                          (IVar1,uVar3,IVar2,local_70,IStack_68,&local_80);
        if (IVar1 == 0x7fffffffffffffff) {
          *param_5 = 1;
          return 0;
        }
        IVar1 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x38),IVar1,extraout_x1);
        IStack_68 = uStack_78;
        local_70 = local_80;
        IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x28));
        objc_stub::beginEditing(IVar2);
        IVar2 = objc_stub::length(IVar1);
        local_b8 = PTR___NSConcreteStackBlock_0005ebe0;
        local_b0 = 0xc2000000;
        local_a8 = 
        ___114__MDEditorController_asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView___block_invoke_3
        ;
        puStack_a0 = &___block_descriptor_56_e8_32s_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l;
        uStack_88 = IStack_68;
        local_90 = local_70;
        local_98 = *(undefined8 *)(param_1 + 0x28);
        objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar1,0,IVar2,0,&local_b8);
        IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x28));
        objc_stub::endEditing(IVar1);
        IVar1 = objc_stub::layoutManager(*(ID *)(param_1 + 0x28));
        objc_stub::ensureLayoutForCharacterRange_(IVar1,local_80,uStack_78);
      }
    }
    *param_5 = 1;
  }
  return 0;
}


// ===== ___114-[MDEditorController_asyncTextStyler:styledString:asyncAttributeUUID:attributeName:attributeOffsetRange:textView:]_block_invoke_3 @ 0000ed58 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___114__MDEditorController_asyncTextStyler_styledString_asyncAttributeUUID_attributeName_attributeOffsetRange_textView___block_invoke_3
          (long param_1,ID param_2,long param_3,undefined8 param_4)

{
  ID self;
  ID self_00;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  self = objc_stub::mutableCopy(param_2);
  objc_stub::removeObjectForKey_(self,*(undefined8 *)PTR__NSFontAttributeName_0005ec48);
  objc_stub::removeObjectForKey_(self,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98);
  self_00 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
  objc_stub::addAttributes_range_(self_00,self,lVar1 + param_3,param_4);
  return 0;
}


// ===== ___copy_helper_block_e8_32s40s48s56s @ 0000edf0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 ___copy_helper_block_e8_32s40s48s56s(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x38);
}


// ===== ___destroy_helper_block_e8_32s40s48s56s @ 0000ee28 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s48s56s(void)

{
  return 0;
}


// ===== ___120-[MDEditorController_validateTextAttachmentsWithConfigurator:inAttributedString:selectionRange:selectionLocationOffset:]_block_invoke @ 0000f640 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___120__MDEditorController_validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset___block_invoke
          (long param_1,ID param_2,long param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  long extraout_x1;
  ID extraout_x1_00;
  ID *pIVar6;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::isTextAttachmentValid_(*(ID *)(param_1 + 0x20),param_2);
    if ((IVar1 & 1) == 0) {
      uVar5 = _objc_opt_respondsToSelector
                        (*(undefined8 *)(param_1 + 0x20),
                         "replacementAttributedStringForTextAttachment:");
      if ((uVar5 & 1) == 0) {
        IVar1 = objc_stub::representedAttributedText(param_2);
      }
      else {
        IVar1 = objc_stub::replacementAttributedStringForTextAttachment_
                          (*(ID *)(param_1 + 0x20),param_2);
      }
      objc_stub::replaceCharactersInRange_withAttributedString_
                (*(ID *)(param_1 + 0x28),param_3,param_4,IVar1);
      pIVar6 = *(ID **)(param_1 + 0x40);
      if (pIVar6 != (ID *)0x0) {
        IVar1 = objc_stub::offsetSelectionRange_forReplacementRange_replacementAttributedString_
                          ((ID)&_OBJC_CLASS___NSAttributedString,*pIVar6,pIVar6[1],
                           *(long *)(param_1 + 0x38) + param_3,param_4,IVar1);
        *pIVar6 = IVar1;
        pIVar6[1] = extraout_x1_00;
      }
    }
    else {
      IVar1 = objc_stub::isFold(param_2);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::representedAttributedText(param_2);
        IVar1 = objc_stub::mutableCopy(IVar1);
        objc_stub::
        validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset_
                  (*(ID *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),IVar1,0,0);
        IVar2 = objc_stub::representedAttributedText(param_2);
        IVar2 = objc_stub::isEqualToAttributedString_(IVar1,IVar2);
        if ((IVar2 & 1) == 0) {
          IVar2 = objc_stub::length(IVar1);
          IVar3 = objc_stub::representedAttributedText(param_2);
          IVar3 = objc_stub::length(IVar3);
          IVar4 = objc_stub::collapsedRange(param_2);
          objc_stub::collapsedRange(param_2);
          objc_stub::setCollapsedRange_(param_2,IVar4,(IVar2 - IVar3) + extraout_x1);
          objc_stub::setRepresentedAttributedText_(param_2,IVar1);
        }
      }
    }
  }
  return 0;
}


// ===== ___copy_helper_block_e8_32s40s48s @ 0000f80c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 ___copy_helper_block_e8_32s40s48s(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x30);
}


// ===== ___73-[MDEditorController_textView:shouldChangeTextInRange:replacementString:]_block_invoke @ 000102f8 =====

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___73__MDEditorController_textView_shouldChangeTextInRange_replacementString___block_invoke
               (long param_1)

{
  ID IVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  objc_stub::applyTextOperationResults_inTextView_
            (*(ID *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28)
            );
  IVar1 = objc_stub::isEqualToString_(*(ID *)(param_1 + 0x30),&cf_space_s_);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::restyleTimer(*(ID *)(param_1 + 0x38));
    objc_stub::invalidate(IVar1);
    local_60 = PTR___NSConcreteStackBlock_0005ebe0;
    local_58 = 0xc2000000;
    local_50 = 
    ___73__MDEditorController_textView_shouldChangeTextInRange_replacementString___block_invoke_2;
    puStack_48 = &___block_descriptor_48_e8_32s40w_e17_v16__0__NSTimer_8l;
    _objc_copyWeak(auStack_38,param_1 + 0x38);
    local_40 = *(undefined8 *)(param_1 + 0x28);
    IVar1 = objc_stub::scheduledTimerWithTimeInterval_repeats_block_
                      ((ID)&_OBJC_CLASS___NSTimer,0x4000000000000000,0,&local_60);
    objc_stub::setRestyleTimer_(*(ID *)(param_1 + 0x38),IVar1);
    _objc_destroyWeak(auStack_38);
  }
  return;
}


// ===== ___73-[MDEditorController_textView:shouldChangeTextInRange:replacementString:]_block_invoke_2 @ 0001043c =====

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___73__MDEditorController_textView_shouldChangeTextInRange_replacementString___block_invoke_2
          (long param_1)

{
  objc_stub::performStylingInTextView_(*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  objc_stub::setRestyleTimer_(*(ID *)(param_1 + 0x28),0);
  return 0;
}


// ===== ___copy_helper_block_e8_32s40w @ 0001048c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40w(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}


// ===== ___destroy_helper_block_e8_32s40w @ 000104bc =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40w(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  return 0;
}


// ===== ___copy_helper_block_e8_32s40s48s56w @ 000104e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40s48s56w(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
  return;
}


// ===== ___destroy_helper_block_e8_32s40s48s56w @ 00010524 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s48s56w(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  return 0;
}


// ===== ___58-[MDEditorController_enableLinksInAttributedString:range:]_block_invoke @ 00010c90 =====

void ___58__MDEditorController_enableLinksInAttributedString_range___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,param_2,
               param_3,param_4);
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),&cf__NSLinkAttributeName,param_3,param_4);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}


// ===== ___59-[MDEditorController_disableLinksInAttributedString:range:]_block_invoke @ 00010eb8 =====

void ___59__MDEditorController_disableLinksInAttributedString_range___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),&cf__NSLinkAttributeName,param_2,param_3,param_4);
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,param_3,
               param_4);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}


// ===== ___66-[MDEditorController_urlContainingRangesWithAttribute:inTextView:]_block_invoke @ 000115f4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___66__MDEditorController_urlContainingRangesWithAttribute_inTextView___block_invoke
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ID IVar3;
  ID self;
  
  if (param_2 != 0) {
    uVar1 = _objc_opt_class(&_OBJC_CLASS___NSURL);
    uVar2 = _objc_opt_isKindOfClass(param_2,uVar1);
    if ((uVar2 & 1) != 0) {
      self = *(ID *)(param_1 + 0x20);
      IVar3 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,param_3,param_4);
      objc_stub::addObject_(self,IVar3);
    }
  }
  return 0;
}


// ===== ___92-[MDEditorController_autoHideCalloutTitleInTextView:forOldSelectionRange:newSelectionRange:]_block_invoke @ 000118fc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___92__MDEditorController_autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  ID IVar1;
  
  if (param_4 < *(ulong *)(param_1 + 0x28)) {
    IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::textAttachmentAtIndex_(IVar1,param_4);
    if (param_6 == 0x7fffffffffffffff) {
      objc_stub::setHideLabel_(IVar1,0);
      IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
      objc_stub::addAttribute_value_range_
                (IVar1,&cf_TMP,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6e0,param_4,param_5);
      IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
      objc_stub::removeAttribute_range_(IVar1,&cf_TMP,param_4,param_5);
      IVar1 = objc_stub::layoutManager(*(ID *)(param_1 + 0x20));
      objc_stub::ensureLayoutForCharacterRange_(IVar1,param_4,param_5);
      IVar1 = objc_stub::layoutManager(*(ID *)(param_1 + 0x20));
      objc_stub::invalidateDisplayForCharacterRange_(IVar1,param_4,param_5);
    }
    return 0;
  }
  return param_1;
}


// ===== ___92-[MDEditorController_autoHideCalloutTitleInTextView:forOldSelectionRange:newSelectionRange:]_block_invoke.40 @ 00011a48 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___92__MDEditorController_autoHideCalloutTitleInTextView_forOldSelectionRange_newSelectionRange___block_invoke_40
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  ID IVar1;
  
  if (param_4 < *(ulong *)(param_1 + 0x28)) {
    IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::textAttachmentAtIndex_(IVar1,param_4);
    if (param_6 == 0x7fffffffffffffff) {
      objc_stub::setHideLabel_(IVar1,1);
      IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
      objc_stub::addAttribute_value_range_
                (IVar1,&cf_TMP,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6e0,param_4,param_5);
      IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
      objc_stub::removeAttribute_range_(IVar1,&cf_TMP,param_4,param_5);
      IVar1 = objc_stub::layoutManager(*(ID *)(param_1 + 0x20));
      objc_stub::ensureLayoutForCharacterRange_(IVar1,param_4,param_5);
      IVar1 = objc_stub::layoutManager(*(ID *)(param_1 + 0x20));
      objc_stub::invalidateDisplayForCharacterRange_(IVar1,param_4,param_5);
    }
    return 0;
  }
  return param_1;
}


// ===== ___74-[MDHashtagTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000124ac =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
___74__MDHashtagTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6,undefined8 param_7)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  long lVar10;
  undefined8 uVar11;
  double extraout_d0;
  undefined8 extraout_d0_00;
  double extraout_d0_01;
  double dVar12;
  undefined8 extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  undefined8 uStack_78;
  
  auVar15 = _NSUnionRange(param_4,param_5);
  if (param_6 != 0x7fffffffffffffff) {
    auVar15 = _NSUnionRange(param_4,param_5,param_6,param_7);
  }
  lVar10 = auVar15._8_8_;
  lVar3 = auVar15._0_8_;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar4 = objc_stub::backgroundColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,&cf_MDTagBackgroundColor,IVar4,lVar3,lVar10);
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar4 = objc_stub::textColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar4,lVar3,lVar10);
  uVar11 = *(undefined8 *)puVar1;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar4 = objc_stub::hashColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar4,param_4,param_5);
  if (param_6 != 0) {
    uVar11 = *(undefined8 *)puVar1;
    IVar5 = *(ID *)(param_1 + 0x20);
    IVar4 = objc_stub::hashColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar4,param_6,param_7);
  }
  IVar5 = objc_stub::attribute_atIndex_effectiveRange_
                    (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__PMKHashtagAttributeName_0005e948,
                     param_2,0);
  IVar4 = objc_stub::tagURLBlock(*(ID *)(param_1 + 0x28));
  if (IVar4 != 0) {
    IVar4 = objc_stub::tagURLBlock(*(ID *)(param_1 + 0x28));
    lVar6 = (**(code **)(IVar4 + 0x10))(IVar4,IVar5);
    if (lVar6 != 0) {
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,lVar6,
                 lVar3,lVar10);
    }
  }
  local_80 = *(ID *)(param_1 + 0x20);
  local_a0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_98 = 0xc2000000;
  local_90 = 
  ___74__MDHashtagTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
  puStack_88 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (local_80,*(undefined8 *)PTR__PMKHashtagSeparatorAttributeName_0005e958,param_2,param_3,
             0,&local_a0);
  IVar4 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar7 = _objc_opt_new(&objc::class_t::MDTagTextAttachment);
  objc_stub::pointSize(IVar4);
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
  IVar8 = objc_stub::tagIconBlock(*(ID *)(param_1 + 0x28));
  if (IVar8 == 0) {
    dVar12 = extraout_d0 * 0.5;
    uVar11 = extraout_d0_00;
  }
  else {
    objc_stub::pointSize(IVar4);
    dVar12 = extraout_d0_01 / 1.5;
    objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
    uVar11 = extraout_d0_02;
  }
  objc_stub::setAttachmentSize_(IVar7,(long)dVar12,uVar11);
  objc_stub::updateAttachmentImage(IVar7);
  objc_stub::addBoundarySpacerAttachment_inAttributedString_range_replacementBlock_
            (*(ID *)(param_1 + 0x28),IVar7,*(undefined8 *)(param_1 + 0x20),lVar3,lVar10,
             *(undefined8 *)(param_1 + 0x30));
  objc_stub::removeAttribute_range_(*(ID *)(param_1 + 0x20),&cf_MDSpacer,lVar3 + lVar10,1);
  IVar7 = objc_stub::tagIconBlock(*(ID *)(param_1 + 0x28));
  if (IVar7 != 0) {
    IVar7 = objc_stub::isAttributedString_RTLAtIndex_
                      (*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_4);
    IVar8 = _objc_alloc(&objc::class_t::MDHashtagIconTextAttachment);
    IVar9 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),lVar3 + 1,0);
    IVar8 = objc_stub::initWithRepresentedAttributedText_(IVar8,IVar9);
    IVar9 = objc_stub::tagIconBlock(*(ID *)(param_1 + 0x28));
    uVar11 = (**(code **)(IVar9 + 0x10))(IVar9,IVar5);
    objc_stub::setIcon_(IVar8,uVar11);
    objc_stub::pointSize(IVar4);
    IVar5 = objc_stub::configurationWithPointSize_weight_
                      ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration);
    IVar9 = objc_stub::icon(IVar8);
    IVar9 = objc_stub::symbolConfiguration(IVar9);
    IVar5 = objc_stub::configurationByApplyingConfiguration_(IVar9,IVar5);
    IVar9 = objc_stub::icon(IVar8);
    IVar5 = objc_stub::imageByApplyingSymbolConfiguration_(IVar9,IVar5);
    objc_stub::setIcon_(IVar8,IVar5);
    objc_stub::pointSize(IVar4);
    uVar11 = 0x3fd6666666666666;
    dVar14 = (double)(long)(extraout_d0_03 * 0.35);
    IVar5 = objc_stub::icon(IVar8);
    objc_stub::size(IVar5);
    IVar5 = objc_stub::icon(IVar8);
    objc_stub::size(IVar5);
    bVar2 = (int)IVar7 == 0;
    dVar12 = 0.0;
    if (bVar2) {
      dVar12 = dVar14;
    }
    if (bVar2) {
      dVar14 = 0.0;
    }
    objc_stub::setAttachmentSize_(IVar8,dVar12 + extraout_d0_04);
    IVar5 = objc_stub::icon(IVar8);
    objc_stub::size(IVar5);
    IVar5 = objc_stub::icon(IVar8);
    objc_stub::size(IVar5);
    uVar13 = 0;
    objc_stub::setDrawingRect_(IVar8,dVar14,0,extraout_d0_05,uVar11);
    IVar5 = *(ID *)(param_1 + 0x20);
    objc_stub::attachmentSize(IVar8);
    objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(IVar5,uVar13,lVar3 + 1);
    objc_stub::setAttachmentBaselineOffset_(IVar8);
    objc_stub::updateAttachmentImage(IVar8);
    IVar5 = objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + 0x20),lVar3 + 1,0);
    IVar5 = objc_stub::attachmentAttributedStringWithAttributes_(IVar8,IVar5);
    objc_stub::replaceCharactersInRange_withAttributedString_
              (*(ID *)(param_1 + 0x20),lVar3 + 1,0,IVar5);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar3 + 1,0,IVar5);
  }
  return 0;
}


// ===== ___74-[MDHashtagTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 00012b50 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___74__MDHashtagTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    self = *(ID *)(param_1 + 0x20);
    IVar1 = objc_stub::hashColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(self,uVar2,IVar1,param_3,param_4);
    return 0;
  }
  return param_1;
}


// ===== _centerRectInRect @ 00012ed4 =====

undefined1  [16]
_centerRectInRect(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,
                 undefined1 param_4 [16],double param_5,undefined1 param_6 [16],double param_7)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_5 + (param_7 - param_3) * 0.5;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== -[NSAttributedString(DrawingSize)_drawingSizeForWidth:] @ 00014a3c =====

undefined1  [16]
__NSAttributedString_DrawingSize__drawingSizeForWidth__
          (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],ID param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_3._8_8_;
  uVar2 = param_3._0_8_;
  objc_stub::boundingRectWithSize_options_context_(param_4,param_1,0x41dfffffffc00000,3,0);
  _CGRectIntegral();
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}


// ===== -[NSTextView(Dictation)_isDictationActive] @ 00014a6c =====

undefined8 __NSTextView_Dictation__isDictationActive_(void)

{
  return 0;
}


// ===== -[NSTextView(Dictation)_isAnyScribbleInteractionActive] @ 00014a74 =====

undefined8 __NSTextView_Dictation__isAnyScribbleInteractionActive_(void)

{
  return 0;
}


// ===== ___71-[MDLinkTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00014f84 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___71__MDLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  double extraout_d0;
  double extraout_d0_00;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  int local_8c;
  
  IVar4 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar4 = objc_stub::substringWithRange_(IVar4,param_4,param_5);
  local_8c = 1;
  if ((param_3 != 0) && (param_5 != 0)) {
    IVar5 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar5 = objc_stub::substringWithRange_(IVar5,param_2,param_3);
    IVar6 = objc_stub::whitespaceCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar5 = objc_stub::stringByTrimmingCharactersInSet_(IVar5,IVar6);
    IVar5 = objc_stub::isEqualToString_(IVar5,&cf___);
    local_8c = (int)IVar5;
  }
  IVar5 = objc_stub::disablePreview(*(ID *)(param_1 + 0x28));
  if ((IVar5 & 1) == 0) {
    uVar1 = in_stack_00000030 + in_stack_00000038;
    IVar5 = objc_stub::length(*(ID *)(param_1 + 0x20));
    if ((uVar1 < IVar5) &&
       (IVar5 = objc_stub::metadataAtIndex_(*(ID *)(param_1 + 0x20),uVar1), IVar5 != 0)) {
      IVar6 = objc_stub::objectForKey_(IVar5,&cf_preview);
      IVar6 = objc_stub::boolValue(IVar6);
      if ((IVar6 & 1) != 0) {
        IVar5 = objc_stub::objectForKey_(IVar5,&cf_embed);
        IVar5 = objc_stub::boolValue(IVar5);
        if ((IVar5 & 1) == 0) {
          IVar4 = objc_stub::metadataRangeAtIndex_(*(ID *)(param_1 + 0x20),uVar1);
          auVar14 = _NSUnionRange(in_stack_00000000,in_stack_00000008,IVar4,extraout_x1);
          uVar9 = auVar14._8_8_;
          uVar11 = auVar14._0_8_;
          IVar4 = _objc_alloc(&objc::class_t::MDLinkPreviewTextAttachment);
          IVar5 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),uVar11,uVar9);
          IVar4 = objc_stub::initWithRepresentedAttributedText_(IVar4,IVar5);
          objc_stub::updateAttachmentImage(IVar4);
          IVar4 = objc_stub::attachmentAttributedString(IVar4);
          IVar4 = objc_stub::mutableCopy(IVar4);
          uVar10 = *(undefined8 *)PTR__PMKLinkMarkerAttributeName_0005e9c0;
          IVar5 = objc_stub::length(IVar4);
          objc_stub::removeAttribute_range_(IVar4,uVar10,0,IVar5);
          objc_stub::replaceCharactersInRange_withAttributedString_
                    (*(ID *)(param_1 + 0x20),uVar11,uVar9,IVar4);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                    (*(long *)(param_1 + 0x30),uVar11,uVar9,IVar4);
          return 0;
        }
      }
    }
  }
  puVar3 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar6 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar6,in_stack_00000000,in_stack_00000008);
  uVar11 = *(undefined8 *)puVar3;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar6 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar6,in_stack_00000010,in_stack_00000018);
  uVar11 = *(undefined8 *)puVar3;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar6 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar6,in_stack_00000020,in_stack_00000028);
  uVar11 = *(undefined8 *)puVar3;
  IVar5 = *(ID *)(param_1 + 0x20);
  IVar6 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar6,in_stack_00000030,in_stack_00000038);
  IVar5 = objc_stub::validURLFromString_((ID)&_OBJC_CLASS___NSURL,IVar4);
  if (IVar5 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,IVar5,
               param_2,param_3);
    uVar11 = *(undefined8 *)puVar3;
    IVar5 = *(ID *)(param_1 + 0x20);
    IVar6 = objc_stub::linkColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar5,uVar11,IVar6,param_2,param_3);
    puVar3 = PTR__NSUnderlineStyleAttributeName_0005ecb0;
    IVar5 = objc_stub::attribute_atIndex_effectiveRange_
                      (*(ID *)(param_1 + 0x20),
                       *(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,param_2,0);
    if (IVar5 == 0) {
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar3,
                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6f8,param_2,param_3);
    }
    IVar5 = *(ID *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)puVar3;
    auVar14 = _NSUnionRange(in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038)
    ;
    objc_stub::addAttribute_value_range_
              (IVar5,uVar11,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e6f8,auVar14._0_8_,
               auVar14._8_8_);
  }
  if (local_8c != 0) {
    IVar5 = *(ID *)(param_1 + 0x20);
    auVar14 = _NSUnionRange(in_stack_00000000,in_stack_00000008,in_stack_00000030,in_stack_00000038)
    ;
    objc_stub::addAttribute_value_range_
              (IVar5,&cf_MDPreventMarkdownHiding,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e710
               ,auVar14._0_8_,auVar14._8_8_);
  }
  IVar5 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  auVar14 = _NSUnionRange(in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038);
  lVar7 = auVar14._0_8_;
  lVar12 = auVar14._8_8_ + -2;
  IVar6 = _objc_alloc(&objc::class_t::MDLinkTextAttachment);
  IVar8 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),lVar7 + 1,lVar12);
  IVar6 = objc_stub::initWithRepresentedAttributedText_(IVar6,IVar8);
  objc_stub::pointSize(IVar5);
  objc_stub::pointSize(IVar5);
  dVar13 = (double)(long)extraout_d0;
  objc_stub::setAttachmentSize_
            (IVar6,(double)((long)(extraout_d0_00 * 0.4) + (long)extraout_d0),dVar13);
  uVar11 = 0;
  objc_stub::setDrawingRect_(IVar6,(double)(long)(extraout_d0_00 * 0.4) / 2.0,0,dVar13,dVar13);
  IVar5 = objc_stub::attachmentColor(*(ID *)(param_1 + 0x28));
  objc_stub::setColor_(IVar6,IVar5);
  IVar5 = *(ID *)(param_1 + 0x20);
  objc_stub::attachmentSize(IVar6);
  objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(IVar5,uVar11,in_stack_00000000);
  objc_stub::setAttachmentBaselineOffset_(IVar6);
  objc_stub::updateAttachmentImage(IVar6);
  IVar5 = objc_stub::attachmentAttributedString(IVar6);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x20),lVar7 + 1,lVar12,IVar5);
  uVar11 = *(undefined8 *)PTR__PMKLinkURLAttributeName_0005e9d0;
  IVar6 = objc_stub::attribute_atIndex_effectiveRange_(IVar5,uVar11,0,0);
  if (IVar6 == 0) {
    objc_stub::addAttribute_value_range_(*(ID *)(param_1 + 0x20),uVar11,IVar4,lVar7 + 1,1);
  }
  uVar11 = *(undefined8 *)PTR__PMKLinkAttributeName_0005e9b0;
  IVar4 = objc_stub::attribute_atIndex_effectiveRange_(IVar5,uVar11,0,0);
  if (IVar4 == 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),uVar11,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e710,
               lVar7 + 1,1);
  }
  iVar2 = 0;
  if (param_5 == 0) {
    iVar2 = local_8c;
  }
  if (iVar2 == 1) {
    IVar4 = objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + 0x20),lVar7,0);
    objc_stub::addAttributes_range_(*(ID *)(param_1 + 0x20),IVar4,lVar7 + 1,1);
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__PMKLinkMarkerAttributeName_0005e9c0,
               lVar7 + 1,1);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar7 + 1,lVar12,IVar5);
  return 0;
}


// ===== ___60-[MDAttributedStringDiffer_areAttributes:equalToAttributes:]_block_invoke @ 00016fbc =====

void ___60__MDAttributedStringDiffer_areAttributes_equalToAttributes___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x20),param_3,param_2);
  return;
}


// ===== ___60-[MDAttributedStringDiffer_areAttributes:equalToAttributes:]_block_invoke.1 @ 00016fc8 =====

void ___60__MDAttributedStringDiffer_areAttributes_equalToAttributes___block_invoke_1
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x20),param_3,param_2);
  return;
}


// ===== ___92-[MDAttributedStringDiffer_setAttributesPreservingViewAttachments:range:inAttributedString:]_block_invoke @ 000174c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___92__MDAttributedStringDiffer_setAttributesPreservingViewAttachments_range_inAttributedString___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID self;
  
  if (param_2 != 0) {
    self = *(ID *)(param_1 + 0x20);
    IVar1 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,param_3,param_4);
    objc_stub::setObject_forKeyedSubscript_(self,param_2,IVar1);
    return 0;
  }
  return param_1;
}


// ===== ___92-[MDAttributedStringDiffer_setAttributesPreservingViewAttachments:range:inAttributedString:]_block_invoke.6 @ 0001754c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___92__MDAttributedStringDiffer_setAttributesPreservingViewAttachments_range_inAttributedString___block_invoke_6
          (long param_1,ID param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 extraout_x1;
  ID self;
  undefined8 uVar2;
  
  self = *(ID *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar1 = objc_stub::rangeValue(param_2);
  objc_stub::addAttribute_value_range_(self,uVar2,param_3,IVar1,extraout_x1);
  return 0;
}


// ===== ___74-[MDHeadingTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00017744 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___74__MDHeadingTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
          undefined8 param_11)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  
  IVar1 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_9);
  self = objc_stub::headingFontForBaseFont_headerLevel_(*(ID *)(param_1 + 0x28),IVar1,param_11);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,self,param_9,
             param_10);
  uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar1 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::textColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar2,param_9,param_10);
  IVar1 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_9);
  IVar1 = objc_stub::mutableCopy(IVar1);
  objc_stub::lineHeightMultiplier(*(ID *)(param_1 + 0x28));
  objc_stub::setCenteredLineHeightMultiplier_forFont_(IVar1,self);
  if (param_6 != 0x7fffffffffffffff) goto LAB_000179a8;
  IVar2 = objc_stub::addTopBottomPadding(*(ID *)(param_1 + 0x28));
  if ((int)IVar2 != 0) {
    objc_stub::paddingTopMultiplier(*(ID *)(param_1 + 0x28));
    objc_stub::pointSize(self);
    objc_stub::paragraphSpacingBefore(IVar1);
    objc_stub::setParagraphSpacingBefore_
              (IVar1,extraout_d0_01 + (double)(float)(int)(extraout_d0 * extraout_d0_00));
    IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::nextParagraphForRange_(IVar2,param_9,param_10);
    if (extraout_x1 == 1) {
      IVar3 = objc_stub::string(*(ID *)(param_1 + 0x20));
      IVar3 = objc_stub::characterAtIndex_(IVar3,IVar2);
      if ((int)IVar3 == 10) {
        IVar3 = objc_stub::string(*(ID *)(param_1 + 0x20));
        IVar2 = objc_stub::characterAtIndex_(IVar3,IVar2 - 1);
        if ((int)IVar2 == 10) goto LAB_00017988;
      }
    }
    objc_stub::paddingBottomMultiplier(*(ID *)(param_1 + 0x28));
    objc_stub::pointSize(self);
    objc_stub::paragraphSpacing(IVar1);
    objc_stub::setParagraphSpacing_
              (IVar1,extraout_d0_04 + (double)(float)(int)(extraout_d0_02 * extraout_d0_03));
  }
LAB_00017988:
  objc_stub::defaultParagraphIndent(*(ID *)(param_1 + 0x28));
  objc_stub::firstLineHeadIndent(IVar1);
  objc_stub::setFirstLineHeadIndent_(IVar1,extraout_d0_06 - extraout_d0_05);
LAB_000179a8:
  IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::paragraphRangeForRange_(IVar2,param_9,param_10);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
             IVar1,IVar2,extraout_x1_00);
  if (param_4 != 0x7fffffffffffffff) {
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar2,param_4,param_5);
  }
  if (param_6 != 0x7fffffffffffffff) {
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar2,param_6,param_7);
  }
  IVar1 = objc_stub::isAttributedString_RTLAtIndex_
                    (*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_9);
  if (param_4 == 0x7fffffffffffffff) {
    IVar1 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),param_6,param_7);
    IVar1 = objc_stub::setextAttachmentForRepresentedAttributedText_headerLevel_headerFont_
                      (*(ID *)(param_1 + 0x28),IVar1,param_11,self);
    param_4 = param_6;
    param_5 = param_7;
  }
  else {
    IVar2 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),param_4,param_5);
    IVar1 = objc_stub::atxAttachmentForRepresentedAttributedText_headerLevel_headerFont_rtl_
                      (*(ID *)(param_1 + 0x28),IVar2,param_11,self,IVar1);
  }
  IVar1 = objc_stub::attachmentAttributedString(IVar1);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x20),param_4,param_5,IVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_4,param_5,IVar1);
  return 0;
}


// ===== +[NSColor(Strings)_sfColorFromString:] @ 000183f4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSColor_Strings__sfColorFromString__(ID param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::hasPrefix_(param_3,&cf__);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::hasPrefix_(param_3,&cf_rgb);
    if ((int)IVar1 == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = objc_stub::colorFromRGBAString_(param_1,param_3);
    }
  }
  else {
    IVar1 = objc_stub::colorFromHEXString_(param_1,param_3);
  }
  return IVar1;
}


// ===== +[NSColor(Strings)_colorFromHEXString:] @ 00018484 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSColor_Strings__colorFromHEXString__(undefined8 param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  uint local_34;
  
  local_34 = 0;
  IVar1 = objc_stub::scannerWithString_((ID)&_OBJC_CLASS___NSScanner,param_3);
  IVar2 = objc_stub::characterSetWithCharactersInString_((ID)&_OBJC_CLASS___NSCharacterSet,&cf__);
  objc_stub::setCharactersToBeSkipped_(IVar1,IVar2);
  objc_stub::scanHexInt_(IVar1,&local_34);
  IVar1 = objc_stub::length(param_3);
  if (IVar1 == 9) {
    uVar3 = local_34 >> 0x10 & 0xff;
    uVar4 = local_34 >> 8 & 0xff;
    uVar5 = local_34 & 0xff;
    dVar6 = (double)(local_34 >> 0x18);
  }
  else {
    if (IVar1 == 7) {
      uVar3 = local_34 >> 0x10;
      uVar4 = local_34 >> 8 & 0xff;
      uVar5 = local_34 & 0xff;
    }
    else {
      if (IVar1 != 4) {
        return 0;
      }
      uVar3 = (local_34 >> 8) * 0x10 + (local_34 >> 8);
      uVar4 = local_34 >> 4 & 0xf;
      uVar4 = uVar4 | uVar4 << 4;
      uVar5 = local_34 & 0xf | (local_34 & 0xf) << 4;
    }
    dVar6 = 255.0;
  }
  IVar1 = objc_stub::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,(double)uVar3 / 255.0,(double)uVar4 / 255.0,
                     (double)uVar5 / 255.0,dVar6 / 255.0);
  return IVar1;
}


// ===== +[NSColor(Strings)_colorFromRGBAString:] @ 000185ec =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSColor_Strings__colorFromRGBAString__(void)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  float fVar7;
  float fVar8;
  float extraout_s0;
  double dVar9;
  float fVar10;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  
  self = objc_stub::scannerWithString_((ID)&_OBJC_CLASS___NSScanner);
  IVar1 = objc_stub::characterSetWithCharactersInString_((ID)&_OBJC_CLASS___NSCharacterSet,&cf__);
  IVar2 = objc_stub::decimalDigitCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  local_88 = 0;
  objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar2,&local_88);
  IVar2 = local_88;
  IVar3 = objc_stub::hasPrefix_(local_88,&cf_rgb_);
  if (((IVar3 & 1) == 0) && (IVar3 = objc_stub::hasPrefix_(IVar2,&cf_rgba_), (int)IVar3 == 0)) {
    IVar2 = 0;
  }
  else {
    IVar3 = objc_stub::punctuationCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    local_90 = 0;
    objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar3,&local_90);
    IVar3 = local_90;
    IVar4 = objc_stub::decimalDigitCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    local_98 = IVar2;
    objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar4,&local_98);
    IVar2 = local_98;
    IVar4 = objc_stub::hasPrefix_(local_98,&cf__);
    IVar3 = objc_stub::intValue(IVar3);
    fVar7 = 100.0;
    fVar8 = fVar7;
    if ((int)IVar4 == 0) {
      fVar8 = 255.0;
    }
    IVar4 = objc_stub::punctuationCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    local_a0 = 0;
    objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar4,&local_a0);
    IVar4 = local_a0;
    IVar5 = objc_stub::decimalDigitCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    local_a8 = IVar2;
    objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar5,&local_a8);
    IVar2 = local_a8;
    IVar5 = objc_stub::hasPrefix_(local_a8,&cf__);
    fVar10 = fVar7;
    if ((int)IVar5 == 0) {
      fVar10 = 255.0;
    }
    IVar5 = objc_stub::intValue(IVar4);
    IVar4 = objc_stub::punctuationCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    local_b0 = 0;
    objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar4,&local_b0);
    IVar4 = local_b0;
    IVar6 = objc_stub::decimalDigitCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    local_b8 = IVar2;
    objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar6,&local_b8);
    IVar2 = objc_stub::hasPrefix_(local_b8,&cf__);
    if ((int)IVar2 == 0) {
      fVar7 = 255.0;
    }
    IVar2 = objc_stub::intValue(IVar4);
    local_c0 = 0;
    objc_stub::scanUpToCharactersFromSet_intoString_(self,IVar1,&local_c0);
    if (local_c0 == 0) {
      dVar9 = 1.0;
    }
    else {
      objc_stub::floatValue(local_c0);
      dVar9 = (double)extraout_s0;
    }
    IVar2 = objc_stub::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___NSColor,(double)((float)(int)IVar3 / fVar8),
                       (double)((float)(int)IVar5 / fVar10),(double)((float)(int)IVar2 / fVar7),
                       dVar9);
  }
  return IVar2;
}


// ===== +[NSAttributedString(Ranges)_offsetSelectionRange:forReplacementRange:replacementAttributedString:] @ 0001898c =====

void __NSAttributedString_Ranges__offsetSelectionRange_forReplacementRange_replacementAttributedString__
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,ID param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::length(param_7);
  objc_stub::offsetSelectionRange_forReplacementRange_replacementLenght_
            (param_1,param_3,param_4,param_5,param_6,IVar1);
  return;
}


// ===== +[NSAttributedString(Ranges)_offsetSelectionRange:forReplacementRange:replacementLenght:] @ 000189e8 =====

undefined1  [16]
__NSAttributedString_Ranges__offsetSelectionRange_forReplacementRange_replacementLenght__
          (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
          long param_6,long param_7)

{
  ulong uVar1;
  long extraout_x1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (param_4 == 0) {
    if (param_5 < param_3) {
      if (param_3 < param_5 + param_6) {
        uVar2 = 0;
        param_3 = param_5 + param_7;
        goto LAB_00018aa8;
      }
    }
    else {
      uVar2 = 0;
      if ((param_5 != param_3) || (param_6 != 0)) goto LAB_00018aa8;
    }
    uVar2 = 0;
    param_3 = (param_3 - param_6) + param_7;
  }
  else {
    _NSIntersectionRange(param_3,param_4,param_5,param_6);
    uVar2 = param_4;
    if (param_5 - param_3 < param_4) {
      uVar2 = (param_4 - param_6) + param_7;
    }
    uVar1 = param_3;
    if (param_5 <= param_3) {
      uVar1 = param_5;
      uVar2 = param_4;
      param_3 = (param_3 - param_6) + param_7;
    }
    if (extraout_x1 != 0) {
      uVar2 = (param_7 + param_4) - extraout_x1;
      param_3 = uVar1;
    }
  }
LAB_00018aa8:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_3;
  return auVar3;
}


// ===== -[NSAttributedString(Ranges)_rangeByExtendingRange:toIncludeAttribute:] @ 00018ac0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
__NSAttributedString_Ranges__rangeByExtendingRange_toIncludeAttribute__
          (ID param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  ID IVar1;
  ID IVar2;
  undefined1 auVar3 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_3;
  if (param_4 != 0) {
    IVar1 = objc_stub::length(param_1);
    IVar1 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                      (param_1,param_5,param_3,&local_50,0,IVar1);
    IVar2 = objc_stub::length(param_1);
    IVar2 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                      (param_1,param_5,param_4 + param_3 + -1,&local_60,0,IVar2);
    if (IVar1 != 0) {
      auVar3 = _NSUnionRange(param_3,param_4,local_50,uStack_48);
    }
    if (IVar2 != 0) {
      auVar3 = _NSUnionRange(auVar3._0_8_,auVar3._8_8_,local_60,uStack_58);
    }
  }
  return auVar3;
}


// ===== -[NSAttributedString(Ranges)_stringRangeFromAttributedStringRange:] @ 00018bcc =====

undefined1  [16]
__NSAttributedString_Ranges__stringRangeFromAttributedStringRange__
          (ID param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_90 = &local_50;
  local_50 = 0;
  local_40 = 0x2020000000;
  local_38 = 0;
  puStack_88 = &local_70;
  local_70 = 0;
  local_60 = 0x2020000000;
  local_58 = 0;
  local_b0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_a8 = 0xc2000000;
  local_a0 = ___67__NSAttributedString_Ranges__stringRangeFromAttributedStringRange___block_invoke;
  puStack_98 = &___block_descriptor_64_e8_32r40r_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_80 = param_3;
  lStack_78 = param_4;
  local_68 = puStack_88;
  local_48 = local_90;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,0,param_3 + param_4,0,
             &local_b0);
  lVar1 = local_48[3];
  lVar2 = local_68[3];
  __Block_object_dispose(&local_70,8);
  __Block_object_dispose(&local_50,8);
  auVar3._8_8_ = lVar2 + param_4;
  auVar3._0_8_ = lVar1 + param_3;
  return auVar3;
}


// ===== ___67-[NSAttributedString(Ranges)_stringRangeFromAttributedStringRange:]_block_invoke @ 00018ccc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___67__NSAttributedString_Ranges__stringRangeFromAttributedStringRange___block_invoke
          (long param_1,ID param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  
  if (param_2 != 0) {
    uVar1 = _objc_opt_class(&objc::class_t::SFTextAttachment);
    uVar2 = _objc_opt_isKindOfClass(param_2,uVar1);
    if ((uVar2 & 1) != 0) {
      IVar3 = objc_stub::representedText(param_2);
      IVar3 = objc_stub::length(IVar3);
      lVar4 = 0x20;
      if (*(ulong *)(param_1 + 0x30) <= (param_4 + param_3) - 1U) {
        lVar4 = 0x28;
      }
      lVar4 = *(long *)(*(long *)(param_1 + lVar4) + 8);
      *(ID *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + (IVar3 - param_4);
    }
  }
  return 0;
}


// ===== ___copy_helper_block_e8_32r40r @ 00018d84 =====

void ___copy_helper_block_e8_32r40r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  return;
}


// ===== ___destroy_helper_block_e8_32r40r @ 00018dc0 =====

void ___destroy_helper_block_e8_32r40r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}


// ===== -[NSAttributedString(Ranges)_attributedStringRangeFromStringRange:] @ 00018df0 =====

void __NSAttributedString_Ranges__attributedStringRangeFromStringRange__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  objc_stub::attributedStringRangeForStringRange_inAttributedString_
            ((ID)&objc::class_t::MDStringToAttributedStringIndexMap,param_3,param_4,param_1);
  return;
}


// ===== -[NSAttributedString(Ranges)_offsetSelection:byReplacingTextAttachmentInRange:] @ 00018e00 =====

undefined1  [16]
__NSAttributedString_Ranges__offsetSelection_byReplacingTextAttachmentInRange__
          (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = &local_50;
  local_50 = 0;
  local_40 = 0x3010000000;
  local_38 = "";
  local_78 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = 0xc2000000;
  local_68 = 
  ___79__NSAttributedString_Ranges__offsetSelection_byReplacingTextAttachmentInRange___block_invoke;
  puStack_60 = &___block_descriptor_40_e8_32r_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_48 = local_58;
  local_30 = param_3;
  local_28 = param_4;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,param_5,param_6,2,
             &local_78);
  auVar1 = *(undefined1 (*) [16])(local_48 + 4);
  __Block_object_dispose(&local_50,8);
  return auVar1;
}


// ===== ___79-[NSAttributedString(Ranges)_offsetSelection:byReplacingTextAttachmentInRange:]_block_invoke @ 00018ec8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___79__NSAttributedString_Ranges__offsetSelection_byReplacingTextAttachmentInRange___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long lVar4;
  
  if (param_2 != 0) {
    uVar1 = _objc_opt_class(&objc::class_t::SFTextAttachment);
    uVar2 = _objc_opt_isKindOfClass(param_2,uVar1);
    if ((uVar2 & 1) != 0) {
      IVar3 = objc_stub::representedText(param_2);
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      IVar3 = objc_stub::length(IVar3);
      IVar3 = objc_stub::offsetSelectionRange_forReplacementRange_replacementLenght_
                        ((ID)&_OBJC_CLASS___NSAttributedString,*(undefined8 *)(lVar4 + 0x20),
                         *(undefined8 *)(lVar4 + 0x28),param_3,param_4,IVar3);
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      *(ID *)(lVar4 + 0x20) = IVar3;
      *(undefined8 *)(lVar4 + 0x28) = extraout_x1;
    }
  }
  return 0;
}


// ===== ___108+[MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringRangesInAttributedString:usingBlock:]_block_invoke @ 000193b4 =====

void ___108__MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringRangesInAttributedString_usingBlock___block_invoke
               (long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    if (param_3 != *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)) {
      if (*(long *)(lVar1 + 0x28) == 0) {
        uVar3 = 0;
      }
      else {
        uVar4 = 0;
        do {
          lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                    (*(long *)(param_1 + 0x20),uVar4 + *(long *)(lVar1 + 0x20),1,
                     *(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                     *(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18);
          uVar4 = uVar4 + 1;
          lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
          uVar3 = *(ulong *)(lVar1 + 0x28);
        } while (uVar4 < uVar3);
      }
      *(ulong *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + uVar3;
      *(undefined8 *)(lVar1 + 0x28) = 1;
      lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x28) + *(long *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = 1;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) & 1) != 0) {
        *param_4 = 1;
        return;
      }
      goto LAB_000194d8;
    }
    *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + 1;
  }
  if (param_3 != *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + 1;
  }
LAB_000194d8:
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
  *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_3;
  return;
}


// ===== ___copy_helper_block_e8_32b40r48r56r64r72r @ 00019504 =====

void ___copy_helper_block_e8_32b40r48r56r64r72r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),8);
  __Block_object_assign((void *)(param_1 + 0x48),*(void **)(param_2 + 0x48),8);
  return;
}


// ===== ___destroy_helper_block_e8_32s40r48r56r64r72r @ 00019580 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40r48r56r64r72r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x48),8);
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return 0;
}


// ===== ___109+[MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringIndexesInAttributedString:usingBlock:]_block_invoke @ 00019738 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___109__MDStringToAttributedStringIndexMap_enumerateStringAndAttributedStringIndexesInAttributedString_usingBlock___block_invoke
          (long param_1,long param_2,long param_3,long param_4,byte *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != 0) {
    uVar2 = _objc_opt_class(&objc::class_t::SFTextAttachment);
    uVar3 = _objc_opt_isKindOfClass(param_2,uVar2);
    if ((uVar3 & 1) != 0) {
      if (param_4 == 0) {
        return 0;
      }
      lVar7 = 0;
      do {
        IVar4 = objc_stub::textAttachmentAtIndex_(*(ID *)(param_1 + 0x20),lVar7 + param_3);
        lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + 1;
        IVar4 = objc_stub::representedText(IVar4);
        IVar4 = objc_stub::length(IVar4);
        if (IVar4 == 0) {
          IVar4 = objc_stub::hasClosingSpacerAtIndex_(*(ID *)(param_1 + 0x20),lVar7 + param_3);
          uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
          lVar5 = 0;
          if (-1 < (long)uVar3) {
            lVar5 = uVar3 + lVar7;
          }
          if (0x7fffffffffffffff < uVar3) {
            uVar3 = 0xffffffffffffffff;
          }
          if ((IVar4 & 1) == 0) {
            lVar5 = uVar3 + 1;
          }
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                    (*(long *)(param_1 + 0x28),lVar5,
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18),param_5);
        }
        else if (0 < (long)IVar4) {
          lVar5 = 1;
          do {
            lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
            *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
            (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                      (*(long *)(param_1 + 0x28),
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18),param_5);
            if ((*param_5 & 1) != 0) break;
            bVar1 = lVar5 < (long)IVar4;
            lVar5 = lVar5 + 1;
          } while (bVar1);
        }
        lVar7 = lVar7 + 1;
        if (lVar7 == param_4) {
          return 0;
        }
      } while( true );
    }
  }
  do {
    if (param_4 == 0) {
      return 0;
    }
    param_4 = param_4 + -1;
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18),param_5);
  } while ((*param_5 & 1) == 0);
  return 0;
}


// ===== ___copy_helper_block_e8_32s40b48r56r @ 00019958 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40b48r56r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  return;
}


// ===== ___93+[MDStringToAttributedStringIndexMap_attributedStringRangeForStringRange:inAttributedString:]_block_invoke @ 00019c40 =====

void ___93__MDStringToAttributedStringIndexMap_attributedStringRangeForStringRange_inAttributedString___block_invoke
               (long param_1,ulong param_2,long param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if ((param_2 == *(ulong *)(param_1 + 0x48)) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8), uVar1 = param_2,
     *(long *)(lVar2 + 0x18) == 0x7fffffffffffffff)) {
    *(long *)(lVar2 + 0x18) = param_3;
    uVar1 = *(ulong *)(param_1 + 0x48);
  }
  lVar2 = *(long *)(param_1 + 0x50) + uVar1;
  if (lVar2 == 0 || param_2 == lVar2 - 1U) {
    *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3 + 1;
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) =
       *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == param_3;
  *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_3;
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_2;
  if ((ulong)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48)) <= param_2) {
    *param_4 = 1;
  }
  return;
}


// ===== ___copy_helper_block_e8_32r40r48r56r64r @ 00019ce8 =====

void ___copy_helper_block_e8_32r40r48r56r64r(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),8);
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),8);
  return;
}


// ===== ___destroy_helper_block_e8_32r40r48r56r64r @ 00019d54 =====

void ___destroy_helper_block_e8_32r40r48r56r64r(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  __Block_object_dispose(*(void **)(param_1 + 0x38),8);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}


// ===== ___63-[MDStringToAttributedStringIndexMap_buildRangeForStringRange:]_block_invoke @ 00019e60 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___63__MDStringToAttributedStringIndexMap_buildRangeForStringRange___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::indexes(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,param_4,param_5);
  objc_stub::addObject_(self,IVar1);
  return 0;
}


// ===== ___60-[MDLayoutManager_rangeOfTextAttachmentNearPoint:withDelta:]_block_invoke @ 0001a938 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___60__MDLayoutManager_rangeOfTextAttachmentNearPoint_withDelta___block_invoke
          (undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5,
          long param_6,undefined8 param_7,undefined8 param_8)

{
  ID IVar1;
  long lVar2;
  ID self;
  double extraout_d0;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  if (param_6 != 0) {
    self = *(ID *)(param_5 + 0x20);
    IVar1 = objc_stub::textContainers(self);
    IVar1 = objc_stub::firstObject(IVar1);
    objc_stub::boundingRectForGlyphRange_inTextContainer_(self,param_7,param_8,IVar1);
    fVar5 = (float)NEON_fminnm((float)*(double *)(param_5 + 0x38),(float)(extraout_d0 + param_3));
    if (fVar5 <= (float)extraout_d0) {
      fVar5 = (float)extraout_d0;
    }
    fVar6 = (float)NEON_fminnm((float)*(double *)(param_5 + 0x40),(float)(param_2 + param_4));
    if (fVar6 <= (float)param_2) {
      fVar6 = (float)param_2;
    }
    dVar3 = *(double *)(param_5 + 0x38) - (double)fVar5;
    dVar4 = *(double *)(param_5 + 0x40) - (double)fVar6;
    dVar3 = (double)SQRT((float)(dVar4 * dVar4 + dVar3 * dVar3));
    lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 8);
    dVar4 = *(double *)(lVar2 + 0x18);
    if (((dVar4 == -1.0) || (dVar3 < dVar4)) && (dVar3 <= *(double *)(param_5 + 0x48))) {
      *(double *)(lVar2 + 0x18) = dVar3;
      lVar2 = *(long *)(*(long *)(param_5 + 0x30) + 8);
      *(undefined8 *)(lVar2 + 0x20) = param_7;
      *(undefined8 *)(lVar2 + 0x28) = param_8;
    }
  }
  return 0;
}


// ===== ___66-[MDLayoutManager_rearrangeAttachmentsViewsForGlyphRange:atPoint:]_block_invoke @ 0001ac8c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___66__MDLayoutManager_rearrangeAttachmentsViewsForGlyphRange_atPoint___block_invoke
          (undefined1 param_1 [16],double param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,ID param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID IVar4;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 extraout_d0_01;
  double dVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  uVar2 = _objc_opt_class(&objc::class_t::SFTextAttachmentView);
  uVar3 = _objc_opt_isKindOfClass(param_6,uVar2);
  if ((uVar3 & 1) != 0) {
    IVar4 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_5 + 0x20),param_7,param_8,0);
    objc_stub::lineFragmentRectForGlyphAtIndex_effectiveRange_(*(ID *)(param_5 + 0x20),IVar4,0);
    dVar5 = param_2;
    objc_stub::locationForGlyphAtIndex_(*(ID *)(param_5 + 0x20),IVar4);
    dVar9 = *(double *)(param_5 + 0x28);
    dVar10 = *(double *)(param_5 + 0x30);
    dVar6 = dVar5;
    objc_stub::attachmentSizeForGlyphAtIndex_(*(ID *)(param_5 + 0x20),IVar4);
    bVar1 = false;
    if ((extraout_d0_00 == 1.0) && (bVar1 = false, !NAN(dVar6))) {
      bVar1 = dVar6 == 1.0;
    }
    if (!bVar1) {
      lVar7 = (long)(param_2 + ((dVar5 + dVar10) - dVar6));
      lVar8 = (long)(extraout_d0 + dVar9);
      dVar5 = dVar6;
      IVar4 = objc_stub::attachmentViewController(param_6);
      IVar4 = objc_stub::view(IVar4);
      objc_stub::frame(IVar4);
      uVar3 = _CGRectEqualToRect(lVar8,lVar7,extraout_d0_00,dVar6,extraout_d0_01,dVar5,param_3,
                                 param_4);
      if ((uVar3 & 1) == 0) {
        IVar4 = objc_stub::attachmentViewController(param_6);
        IVar4 = objc_stub::view(IVar4);
        objc_stub::setFrame_(IVar4,lVar8,lVar7,extraout_d0_00,dVar6);
      }
    }
  }
  return 0;
}


// ===== ___93-[MDEditorController(TextOperations)_expandTextAttachmentsForASTOperationResults:inTextView:]_block_invoke @ 0001c6d0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___93__MDEditorController_TextOperations__expandTextAttachmentsForASTOperationResults_inTextView___block_invoke
          (long param_1,ID param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ID IVar3;
  ID self;
  
  if (param_2 != 0) {
    uVar1 = _objc_opt_class(&objc::class_t::SFTextAttachment);
    uVar2 = _objc_opt_isKindOfClass(param_2,uVar1);
    if ((uVar2 & 1) != 0) {
      self = *(ID *)(param_1 + 0x20);
      IVar3 = objc_stub::representedAttributedText(param_2);
      objc_stub::replaceCharactersInRange_withAttributedString_(self,param_3,1,IVar3);
    }
  }
  return 0;
}


// ===== ___71-[MDCodeTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0001f128 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___71__MDCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined1 auVar6 [16];
  
  auVar6 = _NSUnionRange(param_4,param_5,param_6,param_7);
  IVar2 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  objc_stub::pointSize(IVar2);
  objc_stub::fontSizeMultiplier(*(ID *)(param_1 + 0x28));
  IVar2 = objc_stub::codeFont(*(ID *)(param_1 + 0x28));
  IVar3 = objc_stub::fontWithSize_(IVar2,extraout_d0 * extraout_d0_00);
  IVar2 = *(ID *)(param_1 + 0x20);
  IVar4 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
  objc_stub::addAttributes_range_(IVar2,IVar4,auVar6._0_8_,auVar6._8_8_);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar3,param_2,
             param_3);
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar5 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar2 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar2,uVar5,IVar3,param_4,param_5);
  uVar5 = *(undefined8 *)puVar1;
  IVar2 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar2,uVar5,IVar3,param_6,param_7);
  IVar2 = _objc_opt_new(&objc::class_t::MDCodeTextAttachment);
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
  objc_stub::setAttachmentSize_
            (IVar2,(double)(float)(int)(extraout_d0 * extraout_d0_00 * 0.25),extraout_d0_01);
  objc_stub::updateAttachmentImage(IVar2);
  objc_stub::addBoundarySpacerAttachment_inAttributedString_range_replacementBlock_
            (*(ID *)(param_1 + 0x28),IVar2,*(undefined8 *)(param_1 + 0x20),auVar6._0_8_,auVar6._8_8_
             ,*(undefined8 *)(param_1 + 0x30));
  return 0;
}


// ===== ___80-[MDHardLineBreakTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0001f4a0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___80__MDHardLineBreakTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::attachmentForRange_inAttributedString_
                    (*(ID *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  IVar1 = objc_stub::attachmentAttributedString(IVar1);
  IVar1 = objc_stub::mutableCopy(IVar1);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x28),param_2,param_3,IVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,param_3,IVar1);
  return 0;
}


// ===== -[NSMutableAttributedString(Fonts)_addFontTraits:inRange:] @ 0001fc98 =====

void __NSMutableAttributedString_Fonts__addFontTraits_inRange__
               (ID param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *local_40;
  undefined8 local_38;
  code *local_30;
  undefined *puStack_28;
  ID local_20;
  undefined4 local_18;
  
  local_40 = PTR___NSConcreteStackBlock_0005ebe0;
  local_38 = 0xc2000000;
  local_30 = ___58__NSMutableAttributedString_Fonts__addFontTraits_inRange___block_invoke;
  puStack_28 = &___block_descriptor_44_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_20 = param_1;
  local_18 = param_3;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,*(undefined8 *)PTR__NSFontAttributeName_0005ec48,param_4,param_5,0,&local_40);
  return;
}


// ===== ___58-[NSMutableAttributedString(Fonts)_addFontTraits:inRange:]_block_invoke @ 0001fd00 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___58__NSMutableAttributedString_Fonts__addFontTraits_inRange___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    objc_stub::pointSize(param_2);
    IVar1 = objc_stub::fontVariantOfSize_byAddingTraits_(param_2,(ulong)*(uint *)(param_1 + 0x28));
    if (IVar1 != 0) {
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar1,
                 param_3,param_4);
    }
  }
  return 0;
}


// ===== -[NSMutableAttributedString(Fonts)_addFontWeight:inRange:] @ 0001fd94 =====

void __NSMutableAttributedString_Fonts__addFontWeight_inRange__
               (undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *puStack_28;
  ID local_20;
  undefined8 local_18;
  
  local_40 = PTR___NSConcreteStackBlock_0005ebe0;
  local_38 = 0xc2000000;
  local_30 = 0x1fe00;
  puStack_28 = &___block_descriptor_48_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_20 = param_2;
  local_18 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_2,*(undefined8 *)PTR__NSFontAttributeName_0005ec48,param_4,param_5,0,&local_40);
  return;
}


// ===== ___58-[NSMutableAttributedString(Fonts)_addFontWeight:inRange:]_block_invoke @ 0001fe00 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___58__NSMutableAttributedString_Fonts__addFontWeight_inRange___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  undefined1 extraout_q0 [16];
  
  if (param_2 != 0) {
    objc_stub::pointSize(param_2);
    IVar1 = objc_stub::fontVariantOfSize_weight_
                      (param_2,extraout_q0,*(undefined8 *)(param_1 + 0x28));
    if (IVar1 != 0) {
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar1,
                 param_3,param_4);
    }
  }
  return 0;
}


// ===== ___75-[MDAutoLinkTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000204a4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___75__MDAutoLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::substringWithRange_(IVar2,param_2,param_3);
  IVar2 = objc_stub::validURLFromString_((ID)&_OBJC_CLASS___NSURL,IVar2);
  if (IVar2 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,IVar2,
               param_2,param_3);
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::linkColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_2,param_3);
    puVar1 = PTR__NSUnderlineStyleAttributeName_0005ecb0;
    IVar2 = objc_stub::attribute_atIndex_effectiveRange_
                      (*(ID *)(param_1 + 0x20),
                       *(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,param_2,0);
    if (IVar2 == 0) {
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,
                 &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e758,param_2,param_3);
    }
  }
  if (param_4 != 0x7fffffffffffffff) {
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_4,param_5);
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_6,param_7);
  }
  return 0;
}


// ===== ___75-[MDAutoLinkTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.3 @ 000206cc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___75__MDAutoLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
  objc_stub::substringWithRange_(IVar2,param_2,param_3);
  IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_mailto___);
  IVar2 = objc_stub::URLWithString_((ID)&_OBJC_CLASS___NSURL,IVar2);
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  if (IVar2 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,IVar2,
               param_2,param_3);
    uVar4 = *(undefined8 *)puVar1;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::linkColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_2,param_3);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e758,param_2,param_3);
  }
  if (param_4 != 0x7fffffffffffffff) {
    uVar4 = *(undefined8 *)puVar1;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_4,param_5);
    uVar4 = *(undefined8 *)puVar1;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_6,param_7);
  }
  return 0;
}


// ===== ___Block_byref_object_copy_ @ 00021a4c =====

void ___Block_byref_object_copy_(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


// ===== ___Block_byref_object_dispose_ @ 00021a5c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___Block_byref_object_dispose_(void)

{
  return 0;
}


// ===== ___58-[MDMarkdownHider_hideMarkdownInRange:inAttributedString:]_block_invoke @ 00021a64 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke
               (long param_1,ID param_2,ID param_3,long param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long extraout_x1;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ID IVar8;
  double extraout_d0;
  undefined8 local_2b0;
  long lStack_2a8;
  long *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  long lStack_268;
  long *local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  long lStack_228;
  long *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_0005ec00;
  lStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  local_220 = (long *)0x0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  IVar1 = objc_stub::attributesToHide(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_230,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar7 = *local_220;
    do {
      IVar8 = 0;
      do {
        if (*local_220 != lVar7) {
          _objc_enumerationMutation(IVar1);
        }
        lVar5 = *(long *)(lStack_228 + IVar8 * 8);
        IVar3 = objc_stub::objectForKeyedSubscript_(param_2,lVar5);
        if (IVar3 != 0) {
          uStack_248 = 0;
          local_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          lStack_268 = 0;
          local_270 = 0;
          uStack_258 = 0;
          local_260 = (long *)0x0;
          IVar1 = objc_stub::attributesPreventingHiding(*(ID *)(param_1 + 0x20));
          IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar1,&local_270,auStack_170,0x10);
          if (IVar2 == 0) goto LAB_00021c14;
          lVar7 = *local_260;
          goto LAB_00021bac;
        }
        IVar8 = IVar8 + 1;
      } while (IVar2 != IVar8);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_230,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  goto LAB_00021dbc;
LAB_00021bac:
  do {
    IVar8 = 0;
    do {
      if (*local_260 != lVar7) {
        _objc_enumerationMutation(IVar1);
      }
      IVar3 = objc_stub::objectForKeyedSubscript_(param_2,*(undefined8 *)(lStack_268 + IVar8 * 8));
      if (IVar3 != 0) goto LAB_00021edc;
      IVar8 = IVar8 + 1;
    } while (IVar2 != IVar8);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_270,auStack_170,0x10)
    ;
  } while (IVar2 != 0);
LAB_00021c14:
  if (lVar5 == *(long *)PTR__PMKFootNoteMarkerAttributeName_0005e920) {
    IVar1 = objc_stub::string(*(ID *)(param_1 + 0x28));
    IVar1 = objc_stub::characterAtIndex_(IVar1,param_4 + -1 + param_3);
    if ((int)IVar1 != 0x3a) goto LAB_00021c6c;
LAB_00021cb4:
    param_4 = param_4 + -1;
  }
  else {
LAB_00021c6c:
    if (lVar5 == *(long *)PTR__PMKReferenceMarkerAttributeName_0005ea40) {
      IVar1 = objc_stub::string(*(ID *)(param_1 + 0x28));
      IVar1 = objc_stub::characterAtIndex_(IVar1,param_4 + -1 + param_3);
      if ((int)IVar1 == 0x3a) goto LAB_00021cb4;
    }
    if (lVar5 == *(long *)PTR__PMKReferenceLabelAttributeName_0005ea38) {
      IVar1 = objc_stub::objectForKeyedSubscript_(param_2);
      IVar1 = objc_stub::intValue(IVar1);
      if ((int)IVar1 == 2) goto LAB_00021dbc;
    }
    if (lVar5 == *(long *)PTR__PMKWikiLinkAliasSeparatorAttributeName_0005ea90) {
      IVar1 = objc_stub::longestRangeForAttribute_atIndex_
                        (*(ID *)(param_1 + 0x28),
                         *(undefined8 *)PTR__PMKWikiLinkAttributeName_0005eaa0,param_3);
      uVar6 = param_3 + param_4;
      if (uVar6 < (extraout_x1 + IVar1) - 2) {
        param_3 = IVar1;
        param_4 = uVar6 - IVar1;
      }
    }
  }
  objc_stub::addTemporaryAttribute_value_inRange_
            (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_3,param_4);
  objc_stub::addTemporaryAttribute_value_inRange_
            (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSKernAttributeName_0005ec88,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e770,param_3,param_4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
LAB_00021dbc:
  IVar1 = objc_stub::objectForKeyedSubscript_
                    (param_2,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
  if (IVar1 == 0) goto LAB_00021edc;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = (long *)0x0;
  IVar2 = objc_stub::attributesPreventingHiding(*(ID *)(param_1 + 0x20));
  IVar8 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_2b0,auStack_1f0,0x10);
  if (IVar8 != 0) {
    lVar7 = *local_2a0;
    do {
      IVar3 = 0;
      do {
        if (*local_2a0 != lVar7) {
          _objc_enumerationMutation(IVar2);
        }
        IVar4 = objc_stub::objectForKeyedSubscript_(param_2,*(undefined8 *)(lStack_2a8 + IVar3 * 8))
        ;
        if (IVar4 != 0) goto LAB_00021edc;
        IVar3 = IVar3 + 1;
      } while (IVar8 != IVar3);
      IVar8 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_2b0,auStack_1f0,0x10);
    } while (IVar8 != 0);
  }
  IVar2 = objc_stub::isATXHeader(IVar1);
  if ((int)IVar2 == 0) {
    IVar2 = objc_stub::isHardLineBreak(IVar1);
    if ((((IVar2 & 1) == 0) && (IVar2 = objc_stub::isHighlighter(IVar1), (IVar2 & 1) == 0)) &&
       (IVar2 = objc_stub::isInlineMathSpacer(IVar1), (int)IVar2 == 0)) {
      IVar2 = objc_stub::isBlockquote(IVar1);
      if ((int)IVar2 == 0) {
LAB_00022038:
        IVar2 = objc_stub::isIndentSpace(IVar1);
        if ((int)IVar2 == 0) goto LAB_00021edc;
        uVar6 = param_4 + param_3;
        IVar2 = objc_stub::length(*(ID *)(param_1 + 0x28));
        if ((IVar2 <= uVar6) ||
           ((IVar2 = objc_stub::isRangeInsideBlockMath_(*(ID *)(param_1 + 0x28),uVar6,1),
            (IVar2 & 1) == 0 &&
            (IVar2 = objc_stub::isRangeInsideMermaid_(*(ID *)(param_1 + 0x28),uVar6,1),
            (int)IVar2 == 0)))) goto LAB_00021edc;
      }
      else {
        uVar6 = param_4 + param_3;
        IVar2 = objc_stub::length(*(ID *)(param_1 + 0x28));
        if ((IVar2 <= uVar6) ||
           ((IVar2 = objc_stub::isRangeInsideBlockMath_(*(ID *)(param_1 + 0x28),uVar6,1),
            (IVar2 & 1) == 0 &&
            (IVar2 = objc_stub::isRangeInsideMermaid_(*(ID *)(param_1 + 0x28),uVar6,1),
            (int)IVar2 == 0)))) goto LAB_00022038;
      }
      objc_stub::setHidden_(IVar1,1);
      objc_stub::updateAttachmentImage(IVar1);
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x28),&cf_TMP,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e788
                 ,param_3,param_4);
      objc_stub::removeAttribute_range_(*(ID *)(param_1 + 0x28),&cf_TMP,param_3,param_4);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
      goto LAB_00021edc;
    }
    objc_stub::setHidden_(IVar1,1);
  }
  else {
    IVar2 = objc_stub::isRangeInsideList_(*(ID *)(param_1 + 0x28),param_3,param_4);
    if (((IVar2 & 1) == 0) &&
       (IVar2 = objc_stub::isRangeInsideBlockquote_(*(ID *)(param_1 + 0x28),param_3,param_4),
       (IVar2 & 1) == 0)) {
      IVar2 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x28),param_3);
      objc_stub::headIndent(IVar2);
      uVar6 = (ulong)(extraout_d0 != 0.0);
    }
    else {
      uVar6 = 0;
    }
    objc_stub::setHidden_keepBounds_(IVar1,1,uVar6);
  }
  objc_stub::updateAttachmentImage(IVar1);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x28),&cf_TMP,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e788,
             param_3,param_4);
  objc_stub::removeAttribute_range_(*(ID *)(param_1 + 0x28),&cf_TMP,param_3,param_4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
LAB_00021edc:
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== ___58-[MDMarkdownHider_hideMarkdownInRange:inAttributedString:]_block_invoke.4 @ 000220e4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke_4
             (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ID self;
  undefined8 uVar4;
  double extraout_d0;
  undefined1 auVar5 [16];
  
  if ((param_6 != 0x7fffffffffffffff) &&
     (IVar2 = objc_stub::attribute_atIndex_effectiveRange_
                        (*(ID *)(param_1 + 0x20),&cf_MDPreventMarkdownHiding,param_4,0), IVar2 == 0)
     ) {
    IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::substringWithRange_(IVar2,param_2,param_3);
    IVar3 = objc_stub::whitespaceAndNewlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar2 = objc_stub::stringByTrimmingCharactersInSet_(IVar2,IVar3);
    IVar2 = objc_stub::length(IVar2);
    if (IVar2 != 0) {
      auVar5 = _NSUnionRange(param_4,param_5,param_2,param_3);
      IVar2 = _objc_alloc_init(&_OBJC_CLASS___NSMutableParagraphStyle);
      objc_stub::setMinimumLineHeight_(IVar2,0);
      objc_stub::setMaximumLineHeight_(IVar2,0);
      IVar3 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
      objc_stub::firstLineHeadIndent(IVar3);
      objc_stub::setFirstLineHeadIndent_(IVar2);
      IVar3 = objc_stub::string(*(ID *)(param_1 + 0x20));
      IVar3 = objc_stub::paragraphRangeForRange_(IVar3,auVar5._0_8_,auVar5._8_8_);
      puVar1 = PTR__NSParagraphStyleAttributeName_0005ec98;
      objc_stub::addTemporaryAttribute_value_inRange_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
                 IVar2,IVar3,extraout_x1);
      IVar2 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_6);
      IVar2 = objc_stub::mutableCopy(IVar2);
      objc_stub::headIndent(IVar2);
      objc_stub::setFirstLineHeadIndent_(IVar2,extraout_d0 + -2.0);
      self = *(ID *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)puVar1;
      IVar3 = objc_stub::string(self);
      IVar3 = objc_stub::paragraphRangeForRange_(IVar3,param_6,param_7);
      objc_stub::addTemporaryAttribute_value_inRange_(self,uVar4,IVar2,IVar3,extraout_x1_00);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
      return 0;
    }
  }
  IVar2 = objc_stub::removeTemporaryAttributesInRange_(*(ID *)(param_1 + 0x20),param_2,param_3);
  return IVar2;
}


// ===== ___58-[MDMarkdownHider_hideMarkdownInRange:inAttributedString:]_block_invoke.7 @ 00022390 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID ___58__MDMarkdownHider_hideMarkdownInRange_inAttributedString___block_invoke_7
             (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  
  IVar1 = objc_stub::isRangeInsideMermaid_(*(ID *)(param_1 + 0x20),param_4,param_5);
  if ((int)IVar1 == 0) {
    return IVar1;
  }
  if ((param_6 != 0x7fffffffffffffff) &&
     (IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                        (*(ID *)(param_1 + 0x20),&cf_MDPreventMarkdownHiding,param_4,0), IVar1 == 0)
     ) {
    IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::substringWithRange_(IVar1,param_9,param_10);
    IVar2 = objc_stub::whitespaceAndNewlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar1 = objc_stub::stringByTrimmingCharactersInSet_(IVar1,IVar2);
    IVar1 = objc_stub::length(IVar1);
    if (IVar1 != 0) {
      auVar3 = _NSUnionRange(param_4,param_5,param_9,param_10);
      IVar1 = _objc_alloc_init(&_OBJC_CLASS___NSMutableParagraphStyle);
      objc_stub::setMinimumLineHeight_(IVar1,0);
      objc_stub::setMaximumLineHeight_(IVar1,0);
      IVar2 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
      objc_stub::firstLineHeadIndent(IVar2);
      objc_stub::setFirstLineHeadIndent_(IVar1);
      IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
      IVar2 = objc_stub::paragraphRangeForRange_(IVar2,auVar3._0_8_,auVar3._8_8_);
      objc_stub::addTemporaryAttribute_value_inRange_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
                 IVar1,IVar2,extraout_x1);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
      return 0;
    }
  }
  IVar1 = objc_stub::removeTemporaryAttributesInRange_(*(ID *)(param_1 + 0x20),param_9,param_10);
  return IVar1;
}


// ===== ___58-[MDMarkdownHider_showMarkdownInRange:inAttributedString:]_block_invoke @ 000226cc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___58__MDMarkdownHider_showMarkdownInRange_inAttributedString___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if ((param_2 != 0) &&
     ((((IVar1 = objc_stub::isATXHeader(param_2), (IVar1 & 1) != 0 ||
        (IVar1 = objc_stub::isHardLineBreak(param_2), (IVar1 & 1) != 0)) ||
       (IVar1 = objc_stub::isHighlighter(param_2), (IVar1 & 1) != 0)) ||
      (((IVar1 = objc_stub::isInlineMathSpacer(param_2), (IVar1 & 1) != 0 ||
        (IVar1 = objc_stub::isBlockquote(param_2), (IVar1 & 1) != 0)) ||
       (IVar1 = objc_stub::isIndentSpace(param_2), (int)IVar1 != 0)))))) {
    objc_stub::setHidden_(param_2,0);
    objc_stub::updateAttachmentImage(param_2);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),&cf_TMP,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e788,
               param_3,param_4);
    objc_stub::removeAttribute_range_(*(ID *)(param_1 + 0x20),&cf_TMP,param_3,param_4);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return 0;
}


// ===== ___67-[MDMarkdownHider_removeHidableMarkdownInRange:inAttributedString:]_block_invoke @ 0002284c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___67__MDMarkdownHider_removeHidableMarkdownInRange_inAttributedString___block_invoke
               (long param_1,ID param_2,ID param_3,long param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long extraout_x1;
  ID IVar5;
  long lVar6;
  long lVar7;
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
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::attributesToHide(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar6 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar1);
        }
        lVar7 = *(long *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::objectForKeyedSubscript_(param_2,lVar7);
        if (IVar3 != 0) {
          IVar3 = objc_stub::allKeys(param_2);
          IVar4 = objc_stub::attributesPreventingHiding(*(ID *)(param_1 + 0x20));
          IVar3 = objc_stub::firstObjectCommonWithArray_(IVar3,IVar4);
          if (IVar3 == 0) {
            if (lVar7 == *(long *)PTR__PMKFootNoteMarkerAttributeName_0005e920) {
              IVar1 = objc_stub::string(*(ID *)(param_1 + 0x28));
              IVar1 = objc_stub::characterAtIndex_(IVar1,param_4 + -1 + param_3);
              if ((int)IVar1 != 0x3a) goto LAB_00022a00;
LAB_00022a4c:
              param_4 = param_4 + -1;
            }
            else {
LAB_00022a00:
              if (lVar7 == *(long *)PTR__PMKReferenceMarkerAttributeName_0005ea40) {
                IVar1 = objc_stub::string(*(ID *)(param_1 + 0x28));
                IVar1 = objc_stub::characterAtIndex_(IVar1,param_4 + -1 + param_3);
                if ((int)IVar1 == 0x3a) goto LAB_00022a4c;
              }
              if (lVar7 == *(long *)PTR__PMKReferenceLabelAttributeName_0005ea38) {
                IVar1 = objc_stub::objectForKeyedSubscript_(param_2);
                IVar1 = objc_stub::intValue(IVar1);
                if ((int)IVar1 == 2) goto LAB_00022af8;
              }
              if (lVar7 == *(long *)PTR__PMKFencedCodeMarkerAttributeName_0005e8f8) {
                IVar1 = objc_stub::string(*(ID *)(param_1 + 0x28));
                param_3 = objc_stub::paragraphRangeForRange_(IVar1,param_3,param_4);
                param_4 = extraout_x1;
              }
            }
            objc_stub::replaceCharactersInRange_withString_
                      (*(ID *)(param_1 + 0x28),param_3,param_4,&cf___);
            goto LAB_00022af8;
          }
        }
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
LAB_00022af8:
  IVar1 = objc_stub::objectForKeyedSubscript_
                    (param_2,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
  if (IVar1 != 0) {
    IVar2 = objc_stub::allKeys(param_2);
    IVar5 = objc_stub::attributesPreventingHiding(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::firstObjectCommonWithArray_(IVar2,IVar5);
    if ((IVar2 == 0) &&
       (((IVar2 = objc_stub::isATXHeader(IVar1), (IVar2 & 1) != 0 ||
         (IVar2 = objc_stub::isLink(IVar1), (IVar2 & 1) != 0)) ||
        (IVar1 = objc_stub::isHardLineBreak(IVar1), (int)IVar1 != 0)))) {
      objc_stub::replaceCharactersInRange_withString_
                (*(ID *)(param_1 + 0x28),param_3,param_4,&cf___);
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== ___77-[MDMarkdownHider_rangesToCheckForMarkdownHidingForRange:inAttributedString:]_block_invoke @ 00022ed0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___77__MDMarkdownHider_rangesToCheckForMarkdownHidingForRange_inAttributedString___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  
  IVar1 = objc_stub::allKeys(param_2);
  IVar2 = objc_stub::attributesPreventingHiding(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::firstObjectCommonWithArray_(IVar1,IVar2);
  if (IVar1 != 0) {
    IVar1 = objc_stub::extendedRangeForRange_inAttributedString_
                      (*(ID *)(param_1 + 0x20),param_3,param_4,*(undefined8 *)(param_1 + 0x28));
    IVar2 = *(ID *)(param_1 + 0x30);
    IVar1 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,IVar1,extraout_x1);
    objc_stub::addObject_(IVar2,IVar1);
    return 0;
  }
  return 0;
}


// ===== ___45-[MDMarkdownHider_normalizedRangesForRanges:]_block_invoke @ 000231c4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong ___45__MDMarkdownHider_normalizedRangesForRanges___block_invoke
                (long param_1,ID param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  long extraout_x1;
  ulong uVar4;
  ID self;
  
  uVar2 = objc_stub::rangeValue(param_2);
  uVar4 = *(ulong *)(param_1 + 0x30);
  uVar1 = uVar2 + extraout_x1;
  if ((uVar2 <= uVar4 && uVar4 <= uVar1) ||
     (uVar4 = *(long *)(param_1 + 0x38) + uVar4, uVar2 <= uVar4 && uVar4 <= uVar1)) {
    objc_stub::removeObjectAtIndex_(*(ID *)(param_1 + 0x20),param_3);
    uVar4 = *(ulong *)(param_1 + 0x30);
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    uVar4 = *(long *)(param_1 + 0x38) + uVar4;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    self = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::valueWithRange_((ID)&_OBJC_CLASS___NSValue,uVar2,uVar1 - uVar2);
    objc_stub::insertObject_atIndex_(self,IVar3,param_3);
    uVar2 = 0;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  return uVar2;
}


// ===== ___45-[MDMarkdownHider_normalizedRangesForRanges:]_block_invoke.16 @ 0002329c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong ___45__MDMarkdownHider_normalizedRangesForRanges___block_invoke_16
                (undefined8 param_1,ID param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  
  IVar1 = objc_stub::rangeValue(param_2);
  IVar2 = objc_stub::rangeValue(param_3);
  uVar3 = (ulong)(IVar2 < IVar1);
  if (IVar1 < IVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}


// ===== ___60-[MDMarkdownHider_extendedRangeForRange:inAttributedString:]_block_invoke @ 00023a60 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___60__MDMarkdownHider_extendedRangeForRange_inAttributedString___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5)

{
  ID IVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar2;
  
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    IVar1 = objc_stub::longestRangeForAttribute_atIndex_
                      (*(ID *)(param_1 + 0x20),
                       *(undefined8 *)PTR__PMKMathBlockAttributeName_0005e9e8,param_3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(ID *)(lVar2 + 0x20) = IVar1;
    *(undefined8 *)(lVar2 + 0x28) = extraout_x1;
    IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    IVar1 = objc_stub::paragraphRangeForRange_
                      (IVar1,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(ID *)(lVar2 + 0x20) = IVar1;
    *(undefined8 *)(lVar2 + 0x28) = extraout_x1_00;
    param_1 = 0;
    *param_5 = 1;
  }
  return param_1;
}


// ===== ___60-[MDMarkdownHider_extendedRangeForRange:inAttributedString:]_block_invoke.20 @ 00023afc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___60__MDMarkdownHider_extendedRangeForRange_inAttributedString___block_invoke_20
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5)

{
  ID IVar1;
  ID self;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar2;
  
  if ((param_2 != 0) &&
     (IVar1 = objc_stub::longestRangeForAttribute_atIndex_
                        (*(ID *)(param_1 + 0x20),
                         *(undefined8 *)PTR__PMKFencedCodeAttributeName_0005e8e8,param_3),
     IVar1 != 0x7fffffffffffffff)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    self = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::paragraphRangeForRange_(self,IVar1,extraout_x1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(ID *)(lVar2 + 0x20) = IVar1;
    *(undefined8 *)(lVar2 + 0x28) = extraout_x1_00;
    *param_5 = 1;
  }
  return 0;
}


// ===== ___71-[MDFileTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000240dc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID ___71__MDFileTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
             (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000030;
  long in_stack_00000038;
  
  IVar1 = objc_stub::length(*(ID *)(param_1 + 0x20));
  if ((ulong)(in_stack_00000030 + in_stack_00000038) < IVar1) {
    IVar1 = objc_stub::metadataAtIndex_
                      (*(ID *)(param_1 + 0x20),in_stack_00000030 + in_stack_00000038);
    if ((IVar1 != 0) && (IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_embed), IVar1 != 0))
    {
      IVar1 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),param_4,param_5);
      IVar1 = objc_stub::stringByExpandingTextAttachments(IVar1);
      IVar2 = objc_stub::stringByRemovingPercentEncoding(IVar1);
      if (IVar2 != 0) {
        IVar1 = IVar2;
      }
      auVar6 = _NSUnionRange(in_stack_00000000,in_stack_00000008,in_stack_00000030,in_stack_00000038
                            );
      uVar5 = auVar6._8_8_;
      uVar3 = auVar6._0_8_;
      IVar2 = _objc_alloc(&objc::class_t::MDFileTextAttachment);
      IVar4 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),uVar3,uVar5);
      IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar2,IVar4);
      objc_stub::setFilePath_(IVar2,IVar1);
      objc_stub::maxTextContainerWidth(*(ID *)(param_1 + 0x28));
      objc_stub::setMaxTextContainerWidth_(IVar2);
      objc_stub::basePointSize(*(ID *)(param_1 + 0x28));
      objc_stub::setBasePointSize_(IVar2);
      objc_stub::updateAttachmentImage(IVar2);
      IVar1 = objc_stub::attachmentAttributedString(IVar2);
      IVar1 = objc_stub::mutableCopy(IVar1);
      objc_stub::removeAttribute_range_(IVar1,*(undefined8 *)PTR__PMKLinkAttributeName_0005e9b0,0,1)
      ;
      objc_stub::removeAttribute_range_
                (IVar1,*(undefined8 *)PTR__PMKLinkMarkerAttributeName_0005e9c0,0,1);
      objc_stub::replaceCharactersInRange_withAttributedString_
                (*(ID *)(param_1 + 0x20),uVar3,uVar5,IVar1);
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar3,uVar5,IVar1);
    }
    return 0;
  }
  return IVar1;
}


// ===== ___71-[MDBidiTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000249bc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::intValue(param_2);
    if (*(long *)PTR__PMKDirectionLtrValue_0005e8c0 == (long)(int)IVar1) {
      uVar3 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98;
      IVar1 = *(ID *)(param_1 + 0x20);
      IVar2 = objc_stub::ltrParagraphStyle(*(ID *)(param_1 + 0x28));
    }
    else {
      IVar2 = objc_stub::intValue(param_2);
      uVar3 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98;
      IVar1 = *(ID *)(param_1 + 0x20);
      if (*(long *)PTR__PMKDirectionRtlValue_0005e8c8 == (long)(int)IVar2) {
        IVar2 = objc_stub::rtlParagraphStyle(*(ID *)(param_1 + 0x28));
      }
      else {
        IVar2 = objc_stub::preferredParagraphStyle(*(ID *)(param_1 + 0x28));
      }
    }
    objc_stub::addAttribute_value_range_(IVar1,uVar3,IVar2,param_3,param_4);
  }
  return 0;
}


// ===== ___71-[MDBidiTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.2 @ 00024ab0 =====

void ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    objc_stub::forceWritingDirectionToMatchParagraphInRange_inAttributedString_
              (*(ID *)(param_1 + 0x20),param_3,param_4,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}


// ===== ___71-[MDBidiTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 00024ac4 =====

void ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    objc_stub::forceWritingDirectionToLTRInRange_inAttributedString_
              (*(ID *)(param_1 + 0x20),param_3,param_4,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}


// ===== ___71-[MDBidiTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_3 @ 00024ad8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  if (param_2 != 0) {
    local_38 = *(ID *)(param_1 + 0x20);
    local_58 = PTR___NSConcreteStackBlock_0005ebe0;
    local_50 = 0xc2000000;
    local_48 = 
    ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4;
    puStack_40 = &___block_descriptor_40_e8_32s_e45_v40__0__NSParagraphStyle_8__NSRange_QQ_16_B32l;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (local_38,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,param_3,param_4,0
               ,&local_58);
    return 0;
  }
  return param_1;
}


// ===== ___71-[MDBidiTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_4 @ 00024b70 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID self;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::writingDirectionAtIndex_(*(ID *)(param_1 + 0x20),param_3);
    self = objc_stub::mutableCopy(param_2);
    objc_stub::setBaseWritingDirection_(self,IVar1);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
               self,param_3,param_4);
    return 0;
  }
  return param_1;
}


// ===== ___71-[MDBidiTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.4 @ 00024c10 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___71__MDBidiTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
               long param_6)

{
  undefined *puVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ID IVar8;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 local_1a0;
  long lStack_198;
  long *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
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
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_0005ec00;
  uVar6 = (param_6 + param_5) - 1;
  uVar5 = param_3;
  if (param_3 < uVar6) {
    do {
      IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
      IVar2 = objc_stub::characterAtIndex_(IVar2,param_3);
      uVar5 = param_3;
      if ((int)IVar2 != 0x20) break;
      param_3 = param_3 + 1;
      uVar5 = uVar6;
    } while (uVar6 != param_3);
  }
  IVar2 = objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + 0x20),uVar5,0);
  local_d8 = *(undefined8 *)PTR__PMKHeadingAttributeName_0005e960;
  uStack_d0 = *(undefined8 *)PTR__PMKListAttributeName_0005e9d8;
  local_c8 = *(undefined8 *)PTR__PMKBlockquoteAttributeName_0005e880;
  uStack_c0 = *(undefined8 *)PTR__PMKTableAttributeName_0005ea70;
  local_b8 = *(undefined8 *)PTR__PMKReferenceDefinitionAttributeName_0005ea30;
  uStack_b0 = *(undefined8 *)PTR__PMKFencedCodeAttributeName_0005e8e8;
  local_a8 = *(undefined8 *)PTR__PMKIndentedCodeAttributeName_0005e9a8;
  uStack_a0 = *(undefined8 *)PTR__PMKHTMLBlockAttributeName_0005e928;
  local_98 = *(undefined8 *)PTR__PMKYamlAttributeName_0005eab0;
  uStack_90 = *(undefined8 *)PTR__PMKThematicBreakAttributeName_0005ea78;
  local_88 = *(undefined8 *)PTR__PMKImageAttributeName_0005e980;
  self = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_d8,0xb);
  lStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_190 = (long *)0x0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_1a0,auStack_158,0x10);
  if (IVar3 != 0) {
    lVar7 = *local_190;
    do {
      IVar8 = 0;
      do {
        if (*local_190 != lVar7) {
          _objc_enumerationMutation(self);
        }
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,*(undefined8 *)(lStack_198 + IVar8 * 8));
        if (IVar4 != 0) goto LAB_00024e98;
        IVar8 = IVar8 + 1;
      } while (IVar3 != IVar8);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self,&local_1a0,auStack_158,0x10);
    } while (IVar3 != 0);
  }
  puVar1 = PTR__NSParagraphStyleAttributeName_0005ec98;
  IVar2 = objc_stub::objectForKeyedSubscript_
                    (IVar2,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98);
  IVar2 = objc_stub::mutableCopy(IVar2);
  objc_stub::paragraphIndent(*(ID *)(param_1 + 0x28));
  objc_stub::firstLineHeadIndent(IVar2);
  objc_stub::setFirstLineHeadIndent_(IVar2,extraout_d0 + extraout_d0_00);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar2,param_5,param_6);
LAB_00024e98:
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== -[NSAttributedString(AttributesUtils)_fontAtIndex:] @ 00025020 =====

void __NSAttributedString_AttributesUtils__fontAtIndex__
               (ID param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::attribute_atIndex_effectiveRange_
            (param_1,*(undefined8 *)PTR__NSFontAttributeName_0005ec48,param_3,0);
  return;
}


// ===== -[NSAttributedString(AttributesUtils)_nonHiddenFontAtIndex:] @ 00025038 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_AttributesUtils__nonHiddenFontAtIndex__
             (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::nonTemporaryAttributesAtIndex_(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_
                    (IVar1,*(undefined8 *)PTR__NSFontAttributeName_0005ec48);
  if (IVar1 == 0) {
    IVar1 = objc_stub::fontAtIndex_(param_1,param_3);
  }
  return IVar1;
}


// ===== -[NSAttributedString(AttributesUtils)_paragraphStyleAtIndex:] @ 000250b4 =====

void __NSAttributedString_AttributesUtils__paragraphStyleAtIndex__
               (ID param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::attribute_atIndex_effectiveRange_
            (param_1,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,param_3,0);
  return;
}


// ===== -[NSAttributedString(AttributesUtils)_fontColorAtIndex:] @ 000250cc =====

void __NSAttributedString_AttributesUtils__fontColorAtIndex__
               (ID param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::attribute_atIndex_effectiveRange_
            (param_1,*(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80,param_3,0);
  return;
}


// ===== -[NSAttributedString(AttributesUtils)_backgroundColorAtIndex:] @ 000250e4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_AttributesUtils__backgroundColorAtIndex__
             (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::extendRangeToFullyContainBlockquote_(param_1,param_3,1);
  if ((IVar1 == 0x7fffffffffffffff) ||
     (IVar1 = objc_stub::attribute_atIndex_effectiveRange_(param_1,&cf_MDCalloutColors,IVar1,0),
     IVar1 == 0)) {
    IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                      (param_1,&cf_MDHighlighterBackgroundColor,param_3,0);
  }
  else {
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_background);
  }
  return IVar1;
}


// ===== -[NSAttributedString(AttributesUtils)_isRangeInsideMermaid:] @ 0002519c =====

void __NSAttributedString_AttributesUtils__isRangeInsideMermaid__
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  objc_stub::isRange_insideAttribute_(param_1,param_3,param_4,&cf_MDMermaidCode);
  return;
}


// ===== ___76-[MDMathBlockTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000252cc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
___76__MDMathBlockTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,long param_2,long param_3,ID param_4,undefined8 param_5,long param_6,
          long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  double dVar17;
  undefined1 auVar18 [16];
  long local_d8;
  long lStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  ID local_a0;
  undefined8 local_98;
  ID local_90;
  
  lVar15 = param_3;
  lVar1 = param_2;
  if (param_6 != 0x7fffffffffffffff) {
    lVar15 = param_7;
    lVar1 = param_6;
  }
  auVar18 = _NSUnionRange(param_4,param_5,lVar1,lVar15);
  uVar12 = auVar18._8_8_;
  uVar14 = auVar18._0_8_;
  IVar4 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar5 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar6 = objc_stub::backgroundColorAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar7 = objc_stub::fontColorAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar9 = *(ID *)(param_1 + 0x20);
  IVar8 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
  objc_stub::addAttributes_range_(IVar9,IVar8,uVar14,uVar12);
  puVar2 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar13 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar9 = *(ID *)(param_1 + 0x20);
  IVar8 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar9,uVar13,IVar8,param_4,param_5);
  if (param_6 != 0x7fffffffffffffff) {
    uVar13 = *(undefined8 *)puVar2;
    IVar9 = *(ID *)(param_1 + 0x20);
    IVar8 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar9,uVar13,IVar8,param_6,param_7);
  }
  IVar9 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
  puVar2 = PTR__NSParagraphStyleAttributeName_0005ec98;
  IVar9 = objc_stub::objectForKeyedSubscript_
                    (IVar9,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98);
  if (IVar9 != 0) {
    objc_stub::headIndent(IVar4);
    objc_stub::headIndent(IVar9);
    if (extraout_d0_00 < extraout_d0) {
      IVar9 = objc_stub::mutableCopy(IVar9);
      objc_stub::headIndent(IVar4);
      objc_stub::setHeadIndent_(IVar9);
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar2,IVar9,uVar14,uVar12);
    }
  }
  IVar9 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar9 = objc_stub::paragraphRangeForRange_(IVar9,param_4,param_5);
  if (IVar9 == param_4) {
    objc_stub::pointSize(IVar5);
    IVar9 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    IVar9 = objc_stub::mutableCopy(IVar9);
    objc_stub::firstLineHeadIndent(IVar9);
    objc_stub::setFirstLineHeadIndent_(IVar9,extraout_d0_01 + extraout_d0_02);
    objc_stub::headIndent(IVar9);
    objc_stub::setHeadIndent_(IVar9,extraout_d0_01 + extraout_d0_03);
    objc_stub::tailIndent(IVar9);
    objc_stub::setTailIndent_(IVar9,extraout_d0_04 - extraout_d0_01);
    IVar8 = objc_stub::cache(*(ID *)(param_1 + 0x28));
    objc_stub::baseTabSize(*(ID *)(param_1 + 0x28));
    IVar10 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
    IVar8 = objc_stub::objectForKey_(IVar8,IVar10);
    if (IVar8 == 0) {
      IVar8 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
      puVar3 = PTR____NSDictionary0__struct_0005ecd0;
      dVar17 = 0.0;
      iVar16 = 0x12;
      do {
        IVar10 = _objc_alloc(&_OBJC_CLASS___NSTextTab);
        objc_stub::baseTabSize(*(ID *)(param_1 + 0x28));
        objc_stub::defaultParagraphIndent(*(ID *)(param_1 + 0x28));
        IVar10 = objc_stub::initWithTextAlignment_location_options_
                           (IVar10,extraout_d0_01 + extraout_d0_06 + dVar17 * extraout_d0_05,4,
                            puVar3);
        objc_stub::addObject_(IVar8,IVar10);
        dVar17 = dVar17 + 1.0;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      IVar10 = objc_stub::cache(*(ID *)(param_1 + 0x28));
      objc_stub::baseTabSize(*(ID *)(param_1 + 0x28));
      IVar11 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
      objc_stub::setObject_forKey_(IVar10,IVar8,IVar11);
    }
    objc_stub::setTabStops_(IVar9,IVar8);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar2,IVar9,uVar14,uVar12);
  }
  else {
    IVar8 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),IVar9);
    IVar8 = objc_stub::mutableCopy(IVar8);
    IVar10 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
    IVar10 = objc_stub::objectForKeyedSubscript_(IVar10,*(undefined8 *)puVar2);
    objc_stub::paragraphSpacing(IVar10);
    objc_stub::setParagraphSpacing_(IVar8);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar2,IVar8,IVar9,extraout_x1);
    IVar9 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar9 = objc_stub::paragraphRangeForRange_(IVar9,uVar14,uVar12);
    local_90 = objc_stub::calloutNestLevelAtIndex_(*(ID *)(param_1 + 0x20),uVar14);
    local_c8 = PTR___NSConcreteStackBlock_0005ebe0;
    local_c0 = 0xc2000000;
    local_b8 = 
    ___76__MDMathBlockTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
    ;
    puStack_b0 = &___block_descriptor_64_e8_32s40s48s_e27_v40__0_8__NSRange_QQ_16_B32l;
    local_a8 = *(undefined8 *)(param_1 + 0x28);
    local_98 = *(undefined8 *)(param_1 + 0x20);
    local_a0 = IVar5;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar2,IVar9,extraout_x1_00,0,&local_c8);
  }
  IVar9 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar9 = objc_stub::substringWithRange_(IVar9,param_2,param_3);
  IVar8 = objc_stub::whitespaceAndNewlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  IVar9 = objc_stub::stringByTrimmingCharactersInSet_(IVar9,IVar8);
  IVar9 = objc_stub::length(IVar9);
  if ((param_6 != 0x7fffffffffffffff) && (IVar9 != 0)) {
    IVar9 = _objc_alloc(&objc::class_t::MDMathTextAttachment);
    IVar9 = objc_stub::initWithRepresentedAttributedText_(IVar9,0);
    IVar10 = *(ID *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)PTR__PMKMathBlockAttributeName_0005e9e8;
    IVar8 = objc_stub::length(IVar10);
    IVar8 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                      (IVar10,uVar14,param_4,&local_d8,0,IVar8);
    objc_stub::setMathString_(IVar9,IVar8);
    objc_stub::setFont_(IVar9,IVar5);
    objc_stub::setParagraphStyle_(IVar9,IVar4);
    objc_stub::setAttachmentSize_(IVar9,0,0);
    objc_stub::setFullLine_(IVar9,1);
    objc_stub::setBackgroundColor_(IVar9,IVar6);
    objc_stub::setTextColor_(IVar9,IVar7);
    IVar4 = objc_stub::string(*(ID *)(param_1 + 0x20));
    lVar15 = lStack_d0 + local_d8 + -1;
    IVar4 = objc_stub::characterAtIndex_(IVar4,lVar15);
    if ((int)IVar4 != 10) {
      lVar15 = lStack_d0 + local_d8;
    }
    IVar9 = objc_stub::attachmentAttributedString(IVar9);
    objc_stub::replaceCharactersInRange_withAttributedString_
              (*(ID *)(param_1 + 0x20),lVar15,0,IVar9);
    IVar4 = objc_stub::attributesAtIndex_effectiveRange_
                      (*(ID *)(param_1 + 0x20),param_3 + param_2 + -1,0);
    IVar4 = objc_stub::mutableCopy(IVar4);
    uVar14 = *(undefined8 *)PTR__PMKCloseMarkerValue_0005e898;
    IVar5 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,uVar14);
    objc_stub::setObject_forKeyedSubscript_(IVar4,IVar5,&cf_MDSpacer);
    objc_stub::removeObjectForKey_
              (IVar4,*(undefined8 *)PTR__PMKMathBlockFormulaAttributeName_0005e9f0);
    objc_stub::addAttributes_range_(*(ID *)(param_1 + 0x20),IVar4,lVar15,1);
    IVar5 = *(ID *)(param_1 + 0x20);
    IVar4 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,uVar14);
    objc_stub::addAttribute_value_range_(IVar5,&cf_MDSpacer,IVar4,param_7 + param_6 + -1,1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar15,0,IVar9);
  }
  return 0;
}


// ===== ___76-[MDMathBlockTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 00025b88 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___76__MDMathBlockTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  long lVar1;
  double extraout_d0;
  double extraout_d0_00;
  
  if (param_2 != 0) {
    self = objc_stub::mutableCopy(param_2);
    objc_stub::baseTabSize(*(ID *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x38);
    objc_stub::pointSize(*(ID *)(param_1 + 0x28));
    objc_stub::setTailIndent_(self,-(extraout_d0 * (double)(lVar1 + 1)) - extraout_d0_00 * 0.5);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x30),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
               self,param_3,param_4);
    return 0;
  }
  return param_1;
}


// ===== ___77-[MDFencedCodeTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00027830 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___77__MDFencedCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,long param_2,undefined8 param_3,ID param_4,undefined8 param_5,long param_6,
          undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  double extraout_d0_07;
  double dVar11;
  undefined1 auVar12 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  ID local_a0;
  undefined8 local_98;
  ID local_90;
  
  if (param_6 != 0x7fffffffffffffff) {
    param_3 = param_7;
    param_2 = param_6;
  }
  auVar12 = _NSUnionRange(param_4,param_5,param_2,param_3);
  lVar7 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  IVar3 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar4 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_4);
  IVar6 = *(ID *)(param_1 + 0x20);
  IVar5 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
  objc_stub::addAttributes_range_(IVar6,IVar5,lVar9,lVar7);
  uVar8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar6 = *(ID *)(param_1 + 0x20);
  IVar5 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar6,uVar8,IVar5,param_4,param_5);
  if (param_6 != 0x7fffffffffffffff) {
    uVar8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar6 = *(ID *)(param_1 + 0x20);
    IVar5 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar6,uVar8,IVar5,param_6,param_7);
  }
  if (in_stack_00000010 != 0x7fffffffffffffff) {
    uVar8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar6 = *(ID *)(param_1 + 0x20);
    IVar5 = objc_stub::languageColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar6,uVar8,IVar5,in_stack_00000010,in_stack_00000018);
  }
  IVar6 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
  puVar1 = PTR__NSParagraphStyleAttributeName_0005ec98;
  IVar6 = objc_stub::objectForKeyedSubscript_
                    (IVar6,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98);
  if (IVar6 != 0) {
    objc_stub::headIndent(IVar3);
    objc_stub::headIndent(IVar6);
    if (extraout_d0_00 < extraout_d0) {
      IVar6 = objc_stub::mutableCopy(IVar6);
      objc_stub::headIndent(IVar3);
      objc_stub::setHeadIndent_(IVar6);
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar6,lVar9,lVar7);
    }
  }
  IVar6 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar6 = objc_stub::paragraphRangeForRange_(IVar6,param_4,param_5);
  if (IVar6 == param_4) {
    objc_stub::pointSize(IVar4);
    IVar6 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    IVar6 = objc_stub::mutableCopy(IVar6);
    objc_stub::firstLineHeadIndent(IVar6);
    objc_stub::setFirstLineHeadIndent_(IVar6,extraout_d0_01 + extraout_d0_02);
    objc_stub::headIndent(IVar6);
    objc_stub::setHeadIndent_(IVar6,extraout_d0_01 + extraout_d0_03);
    objc_stub::tailIndent(IVar6);
    objc_stub::setTailIndent_(IVar6,extraout_d0_04 - extraout_d0_01);
    IVar3 = objc_stub::cache(*(ID *)(param_1 + 0x28));
    objc_stub::baseTabSize(*(ID *)(param_1 + 0x28));
    IVar4 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
    IVar3 = objc_stub::objectForKey_(IVar3,IVar4);
    if (IVar3 == 0) {
      IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
      puVar2 = PTR____NSDictionary0__struct_0005ecd0;
      dVar11 = 0.0;
      iVar10 = 0x12;
      do {
        IVar4 = _objc_alloc(&_OBJC_CLASS___NSTextTab);
        objc_stub::baseTabSize(*(ID *)(param_1 + 0x28));
        objc_stub::defaultParagraphIndent(*(ID *)(param_1 + 0x28));
        IVar4 = objc_stub::initWithTextAlignment_location_options_
                          (IVar4,extraout_d0_01 + extraout_d0_06 + dVar11 * extraout_d0_05,4,puVar2)
        ;
        objc_stub::addObject_(IVar3,IVar4);
        dVar11 = dVar11 + 1.0;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      IVar4 = objc_stub::cache(*(ID *)(param_1 + 0x28));
      objc_stub::baseTabSize(*(ID *)(param_1 + 0x28));
      IVar5 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
      objc_stub::setObject_forKey_(IVar4,IVar3,IVar5);
    }
    objc_stub::setTabStops_(IVar6,IVar3);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar6,lVar9,lVar7);
  }
  else {
    IVar3 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),IVar6);
    IVar3 = objc_stub::mutableCopy(IVar3);
    IVar5 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
    IVar5 = objc_stub::objectForKeyedSubscript_(IVar5,*(undefined8 *)puVar1);
    objc_stub::paragraphSpacing(IVar5);
    objc_stub::setParagraphSpacing_(IVar3);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar3,IVar6,extraout_x1);
    IVar6 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar6 = objc_stub::paragraphRangeForRange_(IVar6,lVar9,lVar7);
    local_90 = objc_stub::calloutNestLevelAtIndex_(*(ID *)(param_1 + 0x20),lVar9);
    local_c8 = PTR___NSConcreteStackBlock_0005ebe0;
    local_c0 = 0xc2000000;
    local_b8 = 
    ___77__MDFencedCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
    ;
    puStack_b0 = &___block_descriptor_64_e8_32s40s48s_e27_v40__0_8__NSRange_QQ_16_B32l;
    local_a8 = *(undefined8 *)(param_1 + 0x28);
    local_98 = *(undefined8 *)(param_1 + 0x20);
    local_a0 = IVar4;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar6,extraout_x1_00,0,&local_c8);
  }
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
  IVar6 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),lVar9);
  IVar6 = objc_stub::mutableCopy(IVar6);
  objc_stub::setParagraphSpacingBefore_(IVar6,extraout_d0_07 * 0.15);
  IVar3 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar3 = objc_stub::paragraphRangeForRange_(IVar3,lVar9,1);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar6,IVar3,extraout_x1_01);
  lVar9 = lVar7 + lVar9 + -1;
  IVar6 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),lVar9);
  IVar6 = objc_stub::mutableCopy(IVar6);
  objc_stub::setParagraphSpacing_(IVar6,extraout_d0_07 * 0.15);
  IVar3 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar3 = objc_stub::paragraphRangeForRange_(IVar3,lVar9,1);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar6,IVar3,extraout_x1_02);
  return 0;
}


// ===== ___77-[MDFencedCodeTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 00027f98 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___77__MDFencedCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  long lVar1;
  double extraout_d0;
  double extraout_d0_00;
  
  if (param_2 != 0) {
    self = objc_stub::mutableCopy(param_2);
    objc_stub::baseTabSize(*(ID *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x38);
    objc_stub::pointSize(*(ID *)(param_1 + 0x28));
    objc_stub::setTailIndent_(self,-(extraout_d0 * (double)(lVar1 + 1)) - extraout_d0_00 * 0.5);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x30),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
               self,param_3,param_4);
    return 0;
  }
  return param_1;
}


// ===== ___112-[MDBaseTextStyler(ListUtils)_indentParagraphsForListItemRange:indentWidth:inAttributedString:replacementBlock:]_block_invoke @ 00028248 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___112__MDBaseTextStyler_ListUtils__indentParagraphsForListItemRange_indentWidth_inAttributedString_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  ID IVar1;
  double extraout_d0;
  
  IVar1 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::mutableCopy(IVar1);
  objc_stub::headIndent(IVar1);
  objc_stub::setHeadIndent_(IVar1,extraout_d0 + *(double *)(param_1 + 0x40));
  objc_stub::defaultParagraphIndent(*(ID *)(param_1 + 0x28));
  objc_stub::setFirstLineHeadIndent_(IVar1);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
             IVar1,param_5,param_6);
  *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4 == 0;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  return 0;
}


// ===== ___118-[MDBaseTextStyler(ListUtils)_indentParagraphsForBlockquoteItemRange:indentWidth:inAttributedString:replacementBlock:]_block_invoke @ 00028490 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___118__MDBaseTextStyler_ListUtils__indentParagraphsForBlockquoteItemRange_indentWidth_inAttributedString_replacementBlock___block_invoke
          (long param_1)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 in_x4;
  undefined8 in_x5;
  double extraout_d0;
  
  IVar1 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::mutableCopy(IVar1);
  objc_stub::headIndent(IVar1);
  objc_stub::setHeadIndent_(IVar1,extraout_d0 + *(double *)(param_1 + 0x30));
  objc_stub::defaultParagraphIndent(*(ID *)(param_1 + 0x28));
  objc_stub::setFirstLineHeadIndent_(IVar1);
  IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::paragraphRangeForRange_(IVar2,in_x4,in_x5);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
             IVar1,IVar2,extraout_x1);
  return 0;
}


// ===== ___80-[MDUnorderedListTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000288e0 =====

void ___80__MDUnorderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (void)

{
  return;
}


// ===== ___80-[MDUnorderedListTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 000288e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___80__MDUnorderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  ID self;
  
  objc_stub::baseTabSize(*(ID *)(param_1 + 0x20));
  objc_stub::indentListItemRange_indentWidth_inAttributedString_replacementBlock_
            (*(ID *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  IVar1 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x28),param_4,param_5);
  IVar2 = objc_stub::isAttributedString_RTLAtIndex_
                    (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2);
  IVar3 = objc_stub::taskType(param_6);
  if (IVar3 == 0) {
    IVar4 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::listLevel(param_6);
    IVar1 = objc_stub::attachmentForRepresentedAttributedText_listLevel_rtl_
                      (IVar4,IVar1,IVar3,IVar2);
  }
  else {
    IVar3 = objc_stub::taskType(param_6);
    self = *(ID *)(param_1 + 0x20);
    IVar4 = objc_stub::listLevel(param_6);
    IVar1 = objc_stub::taskAttachmentForRepresentedAttributedText_listLevel_taskCompleted_rtl_
                      (self,IVar1,IVar4,(ulong)(IVar3 == 2),IVar2);
    if (IVar3 == 2) {
      IVar3 = objc_stub::rangeOfListItemWithoutSublistsAtIndex_(*(ID *)(param_1 + 0x28),param_2);
      uVar5 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
      IVar2 = *(ID *)(param_1 + 0x28);
      IVar4 = objc_stub::completedTaskTextColor(*(ID *)(param_1 + 0x20));
      objc_stub::addAttribute_value_range_(IVar2,uVar5,IVar4,IVar3,extraout_x1);
    }
  }
  IVar1 = objc_stub::attachmentAttributedString(IVar1);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x28),param_4,param_5,IVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_4,param_5,IVar1);
  return 0;
}


// ===== -[NSAttributedString(Archiving)_dataFromPolarRepresentation] @ 00029b4c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_Archiving__dataFromPolarRepresentation_(undefined8 param_1)

{
  ID IVar1;
  long local_28;
  
  local_28 = 0;
  IVar1 = objc_stub::archivedDataWithRootObject_requiringSecureCoding_error_
                    ((ID)&_OBJC_CLASS___NSKeyedArchiver,param_1,0,&local_28);
  if (local_28 != 0) {
    _NSLog(&cf_errorwhilearchivingattributedstring___);
  }
  return IVar1;
}


// ===== +[NSAttributedString(Archiving)_attributedStringFromPolarData:] @ 00029bc0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_Archiving__attributedStringFromPolarData__
             (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ID IVar2;
  long local_68;
  
  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSAttributedString);
  _objc_opt_class(&objc::class_t::SFTextAttachment);
  _objc_opt_class(&_OBJC_CLASS___PMKListInfo);
  _objc_opt_class(&_OBJC_CLASS___NSValue);
  _objc_opt_class(&_OBJC_CLASS___NSFileWrapper);
  _objc_opt_class(&_OBJC_CLASS___NSDate);
  _objc_opt_class(&_OBJC_CLASS___NSImage);
  _objc_opt_class(&objc::class_t::SFTextAttachmentCell);
  IVar2 = objc_stub::setWithObjects_((ID)&_OBJC_CLASS___NSSet,uVar1);
  local_68 = 0;
  IVar2 = objc_stub::unarchivedObjectOfClasses_fromData_error_
                    ((ID)&_OBJC_CLASS___NSKeyedUnarchiver,IVar2,param_3,&local_68);
  if (local_68 != 0) {
    _NSLog(&cf_errorwhileunarchivingattributedstring___);
  }
  return IVar2;
}


// ===== -[NSAttributedString(Archiving)_deepCopy] @ 00029d20 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_Archiving__deepCopy_(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar1 = _objc_opt_class();
  IVar2 = objc_stub::dataFromPolarRepresentation(param_1);
  IVar1 = objc_stub::attributedStringFromPolarData_(IVar1,IVar2);
  if (IVar1 == 0) {
    IVar1 = objc_stub::mutableCopy(param_1);
    uVar4 = *(undefined8 *)PTR__NSFontAttributeName_0005ec48;
    IVar2 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x4028000000000000);
    IVar3 = objc_stub::length(IVar1);
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar2,0,IVar3);
    IVar1 = objc_stub::deepCopy(IVar1);
  }
  return IVar1;
}


// ===== ___77-[MDBlockQuoteTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00029fac =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  ID local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  ID local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  local_68 = &local_70;
  local_70 = 0;
  local_60 = 0x2020000000;
  local_58 = 0;
  IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
  local_90 = objc_stub::paragraphRangeForRange_(IVar1,param_2,1);
  local_b0 = *(ID *)(param_1 + 0x20);
  local_d0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_c8 = 0xc2000000;
  local_c0 = 
  ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
  puStack_b8 = &
               ___block_descriptor_96_e8_32s40s48r_e57_v72__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40Q56_B64l
  ;
  uStack_a8 = *(undefined8 *)(param_1 + 0x28);
  local_a0 = &local_70;
  uStack_98 = param_4;
  local_80 = param_2;
  uStack_78 = param_3;
  objc_stub::enumerateCalloutInRange_options_usingBlock_(local_b0,local_90,extraout_x1,0,&local_d0);
  if ((*(byte *)(local_68 + 3) & 1) == 0) {
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_
              (IVar1,&cf_MDBlockQuoteBackgroundColor,IVar2,param_2,param_3);
  }
  __Block_object_dispose(&local_70,8);
  return;
}


// ===== ___77-[MDBlockQuoteTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 0002a110 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long extraout_x1;
  undefined8 in_x7;
  undefined8 uVar5;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double extraout_d0_02;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ID local_78;
  
  IVar2 = objc_stub::blockquoteItemInfoAtIndex_(*(ID *)(param_1 + 0x20),param_2);
  IVar2 = objc_stub::listLevel(IVar2);
  if (IVar2 == *(ID *)(param_1 + 0x38)) {
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
    objc_stub::addAttributes_range_(IVar2,IVar3,param_2,param_3);
    IVar2 = objc_stub::calloutColors(*(ID *)(param_1 + 0x28));
    IVar2 = objc_stub::count(IVar2);
    if (IVar2 != 0) {
      uVar5 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
      IVar2 = *(ID *)(param_1 + 0x20);
      IVar3 = objc_stub::calloutColors(*(ID *)(param_1 + 0x28));
      IVar4 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,in_x7);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,IVar4);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_text);
      objc_stub::addAttribute_value_range_(IVar2,uVar5,IVar3,param_2,param_3);
      IVar2 = *(ID *)(param_1 + 0x20);
      IVar3 = objc_stub::calloutColors(*(ID *)(param_1 + 0x28));
      IVar4 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,in_x7);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,IVar4);
      objc_stub::addAttribute_value_range_(IVar2,&cf_MDCalloutColors,IVar3,param_2,param_3);
    }
    IVar2 = objc_stub::paragraphStyleAtIndex_
                      (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
    IVar2 = objc_stub::mutableCopy(IVar2);
    IVar3 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar3 = objc_stub::paragraphRangeForRange_
                      (IVar3,*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x58) + -1,1);
    puVar1 = PTR__NSParagraphStyleAttributeName_0005ec98;
    if ((*(ID *)(param_1 + 0x40) == IVar3) && (*(long *)(param_1 + 0x48) == extraout_x1)) {
      objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
      auVar6._0_8_ = extraout_d0 * 0.8;
      auVar6._8_8_ = 0;
      objc_stub::setParagraphSpacingBefore_(IVar2,auVar6);
      objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
      auVar7._0_8_ = extraout_d0_00 * 0.8;
      auVar7._8_8_ = 0;
      objc_stub::setParagraphSpacing_(IVar2,auVar7);
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar2,*(undefined8 *)(param_1 + 0x40)
                 ,*(undefined8 *)(param_1 + 0x48));
    }
    else {
      IVar4 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),IVar3);
      IVar4 = objc_stub::mutableCopy(IVar4);
      objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
      auVar9._0_8_ = extraout_d0_01 * 0.8;
      auVar9._8_8_ = 0;
      objc_stub::setParagraphSpacingBefore_(IVar2,auVar9);
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar2,*(undefined8 *)(param_1 + 0x40)
                 ,*(undefined8 *)(param_1 + 0x48));
      objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
      auVar8._0_8_ = extraout_d0_02 * 0.8;
      auVar8._8_8_ = 0;
      objc_stub::setParagraphSpacing_(IVar4,auVar8);
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,IVar4,IVar3,extraout_x1);
    }
    local_78 = objc_stub::calloutNestLevelAtIndex_
                         (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x50));
    local_a8 = PTR___NSConcreteStackBlock_0005ebe0;
    local_a0 = 0xc2000000;
    local_98 = 
    ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3
    ;
    puStack_90 = &___block_descriptor_56_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x20);
    auVar9 = NEON_ext(auVar9,auVar9,8,1);
    uStack_80 = auVar9._8_8_;
    local_88 = auVar9._0_8_;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (*(ID *)*(undefined1 (*) [16])(param_1 + 0x20),*(undefined8 *)puVar1,
               *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,&local_a8);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  return 0;
}


// ===== ___77-[MDBlockQuoteTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_3 @ 0002a500 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_3
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  double extraout_d0;
  long lVar1;
  double extraout_d0_00;
  
  if (param_2 != 0) {
    self = objc_stub::mutableCopy(param_2);
    objc_stub::baseTabSize(*(ID *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x30);
    objc_stub::headIndent(self);
    objc_stub::setTailIndent_(self,-(extraout_d0 * (double)lVar1) - extraout_d0_00);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x28),*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,
               self,param_3,param_4);
    return 0;
  }
  return param_1;
}


// ===== ___77-[MDBlockQuoteTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.5 @ 0002a594 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_5
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,ID param_6)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  long lVar6;
  ID self;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  ID local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  objc_stub::baseTabSize(*(ID *)(param_1 + 0x20));
  objc_stub::indentBlockQuoteItemRange_indentWidth_inAttributedString_replacementBlock_
            (*(ID *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
  lVar6 = param_4 + -1;
  if (lVar6 < 0) {
LAB_0002a6a4:
    lVar6 = param_4 + param_5;
    lVar8 = lVar6 + -1;
    if (param_4 <= lVar8) {
      lVar9 = -(param_4 + param_5);
      do {
        lVar9 = lVar9 + 1;
        IVar2 = objc_stub::string(*(ID *)(param_1 + 0x28));
        IVar2 = objc_stub::characterAtIndex_(IVar2,lVar8);
        if ((int)IVar2 == 0x3e) {
          IVar2 = objc_stub::attributedSubstringFromRange_
                            (*(ID *)(param_1 + 0x28),lVar8,lVar6 + lVar9);
          IVar5 = _objc_alloc(&objc::class_t::MDBlockQuoteTextAttachment);
          IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar5,IVar2);
          objc_stub::baseTabSize(*(ID *)(param_1 + 0x20));
          objc_stub::baseFontSize(*(ID *)(param_1 + 0x20));
          objc_stub::setAttachmentSize_(IVar2,extraout_d0,extraout_d0_00);
          objc_stub::updateAttachmentImage(IVar2);
          self = *(ID *)(param_1 + 0x28);
          IVar5 = objc_stub::attachmentAttributedString(IVar2);
          objc_stub::replaceCharactersInRange_withAttributedString_(self,lVar8,lVar6 + lVar9,IVar5);
          lVar7 = *(long *)(param_1 + 0x30);
          IVar2 = objc_stub::attachmentAttributedString(IVar2);
          (**(code **)(lVar7 + 0x10))(lVar7,lVar8,lVar6 + lVar9,IVar2);
          lVar6 = lVar8;
        }
        lVar8 = lVar8 + -1;
      } while (param_4 <= lVar8);
    }
    IVar2 = objc_stub::isCallout(param_6);
    if (((IVar2 & 1) != 0) && (IVar2 = objc_stub::itemIndex(param_6), IVar2 == 0)) {
      IVar2 = objc_stub::string(*(ID *)(param_1 + 0x28));
      IVar2 = objc_stub::paragraphRangeForRange_(IVar2,param_2,1);
      local_88 = *(ID *)(param_1 + 0x28);
      local_a8 = PTR___NSConcreteStackBlock_0005ebe0;
      local_a0 = 0xc2000000;
      local_98 = 
      ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2_7
      ;
      puStack_90 = &
                   ___block_descriptor_56_e8_32s40s48bs_e57_v72__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40Q56_B64l
      ;
      uStack_80 = *(undefined8 *)(param_1 + 0x20);
      local_78 = *(undefined8 *)(param_1 + 0x30);
      objc_stub::enumerateCalloutInRange_options_usingBlock_(local_88,IVar2,extraout_x1,0,&local_a8)
      ;
    }
    return 0;
  }
  do {
    IVar2 = objc_stub::attribute_atIndex_effectiveRange_
                      (*(ID *)(param_1 + 0x28),*(undefined8 *)puVar1,lVar6,0);
    if (IVar2 == 0) {
LAB_0002a65c:
      IVar2 = objc_stub::string(*(ID *)(param_1 + 0x28));
      IVar2 = objc_stub::characterAtIndex_(IVar2,lVar6);
      if (((int)IVar2 == 10) || (lVar6 + -1 < 0)) goto LAB_0002a6a4;
    }
    else {
      uVar3 = _objc_opt_class(&objc::class_t::MDBlockQuoteTextAttachment);
      uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
      if ((uVar4 & 1) == 0) goto LAB_0002a65c;
      if (lVar6 < 1) goto LAB_0002a6a4;
    }
    lVar6 = lVar6 + -1;
  } while( true );
}


// ===== ___77-[MDBlockQuoteTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2.7 @ 0002a8e4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2_7
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,long param_6
          )

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  
  IVar1 = objc_stub::length(*(ID *)(param_1 + 0x20));
  if ((ulong)(param_4 + param_5) < IVar1) {
    IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::characterAtIndex_(IVar1,param_4 + param_5);
    if (((uint)IVar1 & 0xffff) == 0x20) {
      param_5 = param_5 + 1;
    }
  }
  IVar1 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),param_4,param_5);
  IVar2 = _objc_alloc(&objc::class_t::MDCalloutTextAttachment);
  IVar3 = objc_stub::calloutLabels(*(ID *)(param_1 + 0x28));
  IVar1 = objc_stub::initWithRepresentedAttributedText_labels_showLabel_
                    (IVar2,IVar1,IVar3,(ulong)(param_6 == 0x7fffffffffffffff));
  objc_stub::updateAttachmentImage(IVar1);
  IVar3 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::attachmentAttributedString(IVar1);
  objc_stub::replaceCharactersInRange_withAttributedString_(IVar3,param_4,param_5,IVar2);
  lVar4 = *(long *)(param_1 + 0x30);
  IVar1 = objc_stub::attachmentAttributedString(IVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,param_4,param_5,IVar1);
  return 0;
}


// ===== ___80-[MDThematicBreakTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0002abc0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___80__MDThematicBreakTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,ID param_2,long param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 uVar7;
  
  IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::paragraphRangeForRange_(IVar1,param_2,param_3);
  uVar6 = param_2 - IVar2;
  lVar5 = param_3;
  IVar1 = param_2;
  if (uVar6 < 4) {
    IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::substringWithRange_(IVar1,IVar2,uVar6);
    IVar1 = objc_stub::stringByReplacingOccurrencesOfString_withString_(IVar1,&cf_space_s_,&cf___);
    IVar3 = objc_stub::isEqualToString_(IVar1,&cf___);
    lVar5 = uVar6 + param_3;
    IVar1 = IVar2;
    if ((int)IVar3 == 0) {
      lVar5 = param_3;
      IVar1 = param_2;
    }
  }
  IVar2 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),IVar1,lVar5);
  IVar3 = _objc_alloc(&objc::class_t::MDThematicBreakTextAttachment);
  IVar3 = objc_stub::initWithRepresentedAttributedText_(IVar3,IVar2);
  objc_stub::basePointSize(*(ID *)(param_1 + 0x28));
  objc_stub::setLineWidth_(IVar3);
  objc_stub::maxTextContainerWidth(*(ID *)(param_1 + 0x28));
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
  uVar7 = extraout_d0_00;
  objc_stub::setAttachmentSize_(IVar3,extraout_d0,extraout_d0_00);
  IVar4 = objc_stub::borderColor(*(ID *)(param_1 + 0x28));
  objc_stub::setLineColor_(IVar3,IVar4);
  objc_stub::attachmentSize(IVar3);
  objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(IVar2,uVar7,0);
  objc_stub::setAttachmentBaselineOffset_(IVar3);
  objc_stub::updateAttachmentImage(IVar3);
  IVar2 = objc_stub::attachmentAttributedString(IVar3);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x20),IVar1,lVar5,IVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),IVar1,lVar5,IVar2);
  return 0;
}


// ===== +[NSString(Ranges)_convertSelectionRangeFromSelection:toSubstringRange:] @ 0002af00 =====

undefined1  [16]
__NSString_Ranges__convertSelectionRangeFromSelection_toSubstringRange__
          (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
          long param_6)

{
  long lVar1;
  long lVar3;
  undefined1 auVar4 [16];
  long lVar2;
  
  if (param_4 == 0) {
    lVar3 = 0x7fffffffffffffff;
    if (param_3 <= param_5 + param_6) {
      lVar3 = param_3 - param_5;
    }
    lVar1 = 0x7fffffffffffffff;
    if (param_5 <= param_3) {
      lVar1 = lVar3;
    }
    lVar3 = 0;
  }
  else {
    auVar4 = _NSIntersectionRange(param_3,param_4,param_5,param_6);
    lVar2 = auVar4._8_8_;
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    lVar1 = 0x7fffffffffffffff;
    if (lVar2 != 0) {
      lVar1 = auVar4._0_8_ - param_5;
    }
  }
  auVar4._8_8_ = lVar3;
  auVar4._0_8_ = lVar1;
  return auVar4;
}


// ===== -[NSString(Ranges)_previousParagraphForRange:] @ 0002af70 =====

ID __NSString_Ranges__previousParagraphForRange__(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::paragraphRangeForRange_(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::paragraphRangeForRange_(param_1,IVar1 - 1,1);
    return IVar1;
  }
  return 0x7fffffffffffffff;
}


// ===== -[NSString(Ranges)_nextParagraphForRange:] @ 0002afb4 =====

ID __NSString_Ranges__nextParagraphForRange__(ID param_1)

{
  ID IVar1;
  ID IVar2;
  long extraout_x1;
  
  IVar1 = objc_stub::paragraphRangeForRange_(param_1);
  IVar2 = objc_stub::length(param_1);
  if (IVar1 + extraout_x1 < IVar2) {
    IVar1 = objc_stub::paragraphRangeForRange_(param_1,IVar1 + extraout_x1,1);
    return IVar1;
  }
  return 0x7fffffffffffffff;
}


// ===== -[NSString(Ranges)_rangeByTrimmingCharactersInSet:fromRange:] @ 0002b008 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
__NSString_Ranges__rangeByTrimmingCharactersInSet_fromRange__
          (ID param_1,undefined8 param_2,ID param_3,ulong param_4,long param_5)

{
  ID IVar1;
  undefined1 auVar2 [16];
  
  for (; IVar1 = objc_stub::length(param_1), param_4 < IVar1; param_4 = param_4 + 1) {
    IVar1 = objc_stub::characterAtIndex_(param_1,param_4);
    IVar1 = objc_stub::characterIsMember_(param_3,IVar1);
    if ((int)IVar1 == 0) break;
    param_5 = param_5 + -1;
  }
  do {
    if (param_5 == 0) {
      param_4 = 0x7fffffffffffffff;
LAB_0002b098:
      auVar2._8_8_ = param_5;
      auVar2._0_8_ = param_4;
      return auVar2;
    }
    IVar1 = objc_stub::characterAtIndex_(param_1,param_4 + param_5 + -1);
    IVar1 = objc_stub::characterIsMember_(param_3,IVar1);
    if ((int)IVar1 == 0) goto LAB_0002b098;
    param_5 = param_5 + -1;
  } while( true );
}


// ===== -[NSString(Ranges)_hasOnlyWhitespaceCharactersInRange:] @ 0002b0b8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool __NSString_Ranges__hasOnlyWhitespaceCharactersInRange__
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  long extraout_x1;
  
  IVar1 = objc_stub::whitespaceCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  objc_stub::rangeByTrimmingCharactersInSet_fromRange_(param_1,IVar1,param_3,param_4);
  return extraout_x1 == 0;
}


// ===== -[NSString(Ranges)_hasNewLineBeforeRange:] @ 0002b124 =====

bool __NSString_Ranges__hasNewLineBeforeRange__(ID param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ID IVar2;
  
  if (param_3 != 0) {
    IVar2 = objc_stub::length(param_1);
    if (IVar2 < param_3) {
      bVar1 = false;
    }
    else {
      IVar2 = objc_stub::characterAtIndex_(param_1,param_3 - 1);
      bVar1 = (int)IVar2 == 10;
    }
    return bVar1;
  }
  return false;
}


// ===== -[NSString(Ranges)_hasNewLineAfterRange:] @ 0002b178 =====

bool __NSString_Ranges__hasNewLineAfterRange__
               (ID param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::length(param_1);
  if ((ulong)(param_3 + param_4) < IVar2) {
    IVar2 = objc_stub::characterAtIndex_(param_1,param_3 + param_4);
    bVar1 = (int)IVar2 == 10;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== +[NSURL(ValidURL)_validURLFromString:] @ 0002b1c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID __NSURL_ValidURL__validURLFromString__(undefined8 param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  if ((param_3 == 0) || (IVar1 = objc_stub::isEqualToString_(param_3,&cf___), (IVar1 & 1) != 0)) {
    return 0;
  }
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSURLComponents);
  IVar1 = objc_stub::initWithString_(IVar1,param_3);
  if (IVar1 != 0) {
    IVar2 = objc_stub::percentEncodedPath(IVar1);
    IVar2 = objc_stub::stringByReplacingOccurrencesOfString_withString_(IVar2,&cf__3B,&cf__);
    objc_stub::setPercentEncodedPath_(IVar1,IVar2);
    IVar1 = objc_stub::URL(IVar1);
    if (IVar1 != 0) goto LAB_0002b338;
  }
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSURLComponents);
  IVar1 = objc_stub::initWithString_(IVar1,param_3);
  if (IVar1 == 0) {
    IVar1 = objc_stub::URLQueryAllowedCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar1 = objc_stub::stringByAddingPercentEncodingWithAllowedCharacters_(param_3,IVar1);
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSURLComponents);
    IVar1 = objc_stub::initWithString_(IVar2,IVar1);
  }
  IVar1 = objc_stub::URL(IVar1);
  if (IVar1 == 0) {
    return 0;
  }
LAB_0002b338:
  IVar2 = objc_stub::scheme(IVar1);
  if (IVar2 == 0) {
    objc_stub::absoluteString(IVar1);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_https_____);
    IVar1 = objc_stub::URLWithString_((ID)&_OBJC_CLASS___NSURL,IVar1);
  }
  return IVar1;
}


// ===== ___79-[MDIndentedCodeTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0002b4ec =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___79__MDIndentedCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID self;
  ID IVar1;
  
  self = *(ID *)(param_1 + 0x20);
  IVar1 = objc_stub::textAttributes(*(ID *)(param_1 + 0x28));
  objc_stub::addAttributes_range_(self,IVar1,param_2,param_3);
  return 0;
}


// ===== ___71-[MDFoldTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0002b638 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___71__MDFoldTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined8 extraout_d0_02;
  double extraout_d0_03;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  auVar11 = _NSUnionRange(param_2,param_3,param_4,param_5);
  uVar4 = auVar11._8_8_;
  lVar1 = auVar11._0_8_;
  IVar2 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),lVar1,uVar4);
  IVar3 = _objc_alloc(&objc::class_t::MDFoldTextAttachment);
  IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar3,IVar2);
  objc_stub::basePointSize(*(ID *)(param_1 + 0x28));
  dVar8 = extraout_d0 * 4.0;
  objc_stub::basePointSize(*(ID *)(param_1 + 0x28));
  dVar10 = extraout_d0_00 * 4.0;
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x28));
  objc_stub::setAttachmentSize_(IVar2,dVar10 + (dVar8 + extraout_d0_01) * 2.0,extraout_d0_02);
  objc_stub::attachmentSize(IVar2);
  dVar6 = dVar10 + dVar8 * 2.0;
  dVar9 = extraout_d0_03 - dVar6;
  objc_stub::attachmentSize(IVar2);
  uVar7 = 0;
  objc_stub::setDrawingRect_(IVar2,dVar8 + dVar10,0,dVar9,dVar6);
  IVar3 = objc_stub::headerLevelAtIndex_(*(ID *)(param_1 + 0x20),lVar1);
  if ((IVar3 == 0) || (2 < (long)IVar3)) {
    IVar3 = *(ID *)(param_1 + 0x20);
    lVar5 = lVar1 + -1;
    if (lVar1 == 0) {
      lVar5 = 1;
    }
    objc_stub::attachmentSize(IVar2);
    objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(IVar3,uVar7,lVar5);
    objc_stub::setAttachmentBaselineOffset_(IVar2);
  }
  IVar3 = objc_stub::backgroundColor(*(ID *)(param_1 + 0x28));
  objc_stub::setBackgroundColor_(IVar2,IVar3);
  IVar3 = objc_stub::textColor(*(ID *)(param_1 + 0x28));
  objc_stub::setTextColor_(IVar2,IVar3);
  objc_stub::updateAttachmentImage(IVar2);
  objc_stub::setCollapsedRange_(IVar2,param_3,param_5);
  IVar2 = objc_stub::attachmentAttributedString(IVar2);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x20),lVar1,uVar4,IVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar1,uVar4,IVar2);
  return 0;
}


// ===== ___73-[MDStrongTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0002b96c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___73__MDStrongTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (param_3 != 0) {
    auVar5 = _NSUnionRange(param_4,param_5,param_6,param_7);
    IVar2 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_2);
    objc_stub::pointSize(IVar2);
    IVar2 = objc_stub::fontVariantOfSize_byAddingTraits_(IVar2,2);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar2,
               auVar5._0_8_,auVar5._8_8_);
    puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_4,param_5);
    uVar4 = *(undefined8 *)puVar1;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar4,IVar3,param_6,param_7);
    return 0;
  }
  return param_1;
}


// ===== ___75-[MDFootnoteTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0002bbcc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID ___75__MDFootnoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
             (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  double extraout_d0;
  double extraout_d0_00;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  if (param_5 == 0) {
    IVar4 = *(ID *)(param_1 + 0x20);
    auVar5 = _NSUnionRange(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
    objc_stub::addAttribute_value_range_
              (IVar4,&cf_MDPreventMarkdownHiding,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e7b8
               ,auVar5._0_8_,auVar5._8_8_);
  }
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar3,IVar2,in_stack_00000000);
  uVar3 = *(undefined8 *)puVar1;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar3,IVar2,in_stack_00000010,in_stack_00000018);
  uVar3 = *(undefined8 *)puVar1;
  IVar4 = *(ID *)(param_1 + 0x20);
  IVar2 = objc_stub::linkColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar4,uVar3,IVar2,param_4,param_5);
  if (param_4 != 0x7fffffffffffffff) {
    IVar2 = *(ID *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)PTR__NSLinkAttributeName_0005ec90;
    IVar4 = objc_stub::URLWithString_((ID)&_OBJC_CLASS___NSURL,&cf_MDFootnoteURLString);
    objc_stub::addAttribute_value_range_(IVar2,uVar3,IVar4,param_4 + -1,param_5 + 1);
  }
  puVar1 = PTR__NSUnderlineStyleAttributeName_0005ecb0;
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e7d0,param_4,param_5);
  objc_stub::addAttribute_value_range_
            (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e7d0,in_stack_00000000,in_stack_00000008
            );
  IVar4 = objc_stub::addAttribute_value_range_
                    (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,
                     &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e7d0,in_stack_00000010,
                     in_stack_00000018);
  if (in_stack_00000020 == 1) {
    IVar4 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_2);
    objc_stub::pointSize(IVar4);
    IVar2 = objc_stub::fontVariantOfSize_(IVar4,(double)(float)(int)(extraout_d0 * 0.95));
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar2,
               param_2,param_3);
    objc_stub::pointSize(IVar4);
    IVar2 = *(ID *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_0005ec40;
    IVar4 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,extraout_d0_00 * 0.4);
    objc_stub::addAttribute_value_range_(IVar2,uVar3,IVar4,param_2,param_3);
    return 0;
  }
  return IVar4;
}


// ===== +[NSFont(Metrics)_basePointSizeForFontSize:] @ 0002bf14 =====

undefined1  [16] __NSFont_Metrics__basePointSizeForFontSize__(double param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (ulong)(param_1 * 0.05);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== -[NSFont(Metrics)_basePointSize] @ 0002bf28 =====

void __NSFont_Metrics__basePointSize_(ID param_1)

{
  ID self;
  
  self = _objc_opt_class();
  objc_stub::pointSize(param_1);
  objc_stub::basePointSizeForFontSize_(self);
  return;
}


// ===== -[NSFont(Metrics)_calculatedLineHeight] @ 0002bf58 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long __NSFont_Metrics__calculatedLineHeight_(ID param_1)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  
  IVar1 = objc_stub::familyName(param_1);
  IVar2 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x4024000000000000);
  IVar2 = objc_stub::familyName(IVar2);
  IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::fontName(param_1);
    objc_stub::pointSize(param_1);
    lVar4 = _CTFontCreateWithName(IVar1,0);
    lVar3 = 0;
  }
  else {
    objc_stub::pointSize(param_1);
    lVar3 = _CTFontCreateUIFontForLanguage(2,0);
    lVar4 = lVar3;
  }
  if (lVar4 != 0) {
    _CTFontGetAscent(lVar4);
    _CTFontGetDescent(lVar4);
    lVar3 = _CTFontGetLeading(lVar4);
  }
  return lVar3;
}


// ===== ___76-[MDUnderlineTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0002d17c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___76__MDUnderlineTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e7e8,param_2,param_3);
    uVar4 = *(undefined8 *)PTR__NSUnderlineColorAttributeName_0005eca8;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::underlineColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_2,param_3);
    puVar2 = PTR__NSForegroundColorAttributeName_0005ec80;
    uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_4,param_5);
    uVar4 = *(undefined8 *)puVar2;
    IVar1 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar1,uVar4,IVar3,param_6,param_7);
    return 0;
  }
  return param_1;
}


// ===== ___55+[MDTextKitStyleKit_imageOfLinkIconWithSize:fillColor:]_block_invoke @ 0002f6f4 =====

undefined8 ___55__MDTextKitStyleKit_imageOfLinkIconWithSize_fillColor___block_invoke(long param_1)

{
  objc_stub::drawLinkIconWithFrame_fillColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,0,0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  return 1;
}


// ===== ___60+[MDTextKitStyleKit_imageOfHardLineBreakWithSize:fillColor:]_block_invoke @ 0002f7dc =====

undefined8
___60__MDTextKitStyleKit_imageOfHardLineBreakWithSize_fillColor___block_invoke(long param_1)

{
  objc_stub::drawHardLineBreakWithFrame_fillColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,0,0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  return 1;
}


// ===== ___56+[MDTextKitStyleKit_imageOfArrowIconWithSize:fillColor:]_block_invoke @ 0002f8c4 =====

undefined8 ___56__MDTextKitStyleKit_imageOfArrowIconWithSize_fillColor___block_invoke(long param_1)

{
  objc_stub::drawArrowIconWithFrame_fillColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,0,0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  return 1;
}


// ===== ___70+[MDTextKitStyleKit_imageOfHighlighterWithSize:fillColor:accentColor:]_block_invoke @ 0002f9e0 =====

undefined8
___70__MDTextKitStyleKit_imageOfHighlighterWithSize_fillColor_accentColor___block_invoke
          (long param_1)

{
  objc_stub::drawHighlighterWithFrame_fillColor_accentColor_
            ((ID)&objc::class_t::MDTextKitStyleKit,0,0,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return 1;
}


// ===== ___78-[MDOrderedListTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0002fbcc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___78__MDOrderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2)

{
  ID self;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  
  self = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_2);
  objc_stub::minimumLineHeight(self);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = extraout_d0;
  objc_stub::lineSpacing(self);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = extraout_d0_00;
  return 0;
}


// ===== ___78-[MDOrderedListTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke.1 @ 0002fc28 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___78__MDOrderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_1
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  undefined8 extraout_d0_06;
  double dVar4;
  
  if (param_4 == 0x7fffffffffffffff) {
    return param_1;
  }
  objc_stub::spaceSizeForMarkerRange_inAttributedString_
            (*(ID *)(param_1 + 0x20),param_4,param_5,*(undefined8 *)(param_1 + 0x28));
  objc_stub::numberPlusSeparatorSizeForMarkerRange_inAttributedString_
            (*(ID *)(param_1 + 0x20),param_4,param_5,*(undefined8 *)(param_1 + 0x28));
  objc_stub::baseTabSize(*(ID *)(param_1 + 0x20));
  objc_stub::columnSize(*(ID *)(param_1 + 0x20));
  dVar4 = extraout_d0_01;
  if (extraout_d0_02 < extraout_d0_00) {
    objc_stub::columnSize(*(ID *)(param_1 + 0x20));
    dVar4 = extraout_d0_01 + (extraout_d0_00 - extraout_d0_03);
  }
  objc_stub::indentListItemRange_indentWidth_inAttributedString_replacementBlock_
            (*(ID *)(param_1 + 0x20),dVar4,param_2,param_3,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)PTR__NSKernAttributeName_0005ec88;
  IVar2 = *(ID *)(param_1 + 0x28);
  objc_stub::gutterSize(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,extraout_d0_04 - extraout_d0);
  objc_stub::addAttribute_value_range_(IVar2,uVar3,IVar1,param_5 + param_4 + -1,1);
  uVar3 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar2 = *(ID *)(param_1 + 0x28);
  IVar1 = objc_stub::markerColor(*(ID *)(param_1 + 0x20));
  objc_stub::addAttribute_value_range_(IVar2,uVar3,IVar1,param_4,param_5);
  IVar2 = _objc_opt_new(&objc::class_t::MDOrderedListTextAttachment);
  objc_stub::columnSize(*(ID *)(param_1 + 0x20));
  dVar4 = 0.0;
  if (0.0 <= extraout_d0_05 - extraout_d0_00) {
    dVar4 = extraout_d0_05 - extraout_d0_00;
  }
  objc_stub::baseFontSize(*(ID *)(param_1 + 0x20));
  objc_stub::setAttachmentSize_(IVar2,dVar4,extraout_d0_06);
  objc_stub::updateAttachmentImage(IVar2);
  objc_stub::addLeftBoundarySpacerAttachment_inAttributedString_atIndex_replacementBlock_
            (*(ID *)(param_1 + 0x20),IVar2,*(undefined8 *)(param_1 + 0x28),param_4,
             *(undefined8 *)(param_1 + 0x30));
  return 0;
}


// ===== ___45-[SFRectCollection_enumerateRectsUsingBlock:]_block_invoke @ 00030240 =====

void ___45__SFRectCollection_enumerateRectsUsingBlock___block_invoke
               (long param_1,ID param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 local_31;
  
  local_31 = 0;
  objc_stub::CGRectValue(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,&local_31);
  *param_4 = local_31;
  return;
}


// ===== ___31-[SFRectCollection_description]_block_invoke @ 00030484 =====

void ___31__SFRectCollection_description__block_invoke(long param_1,ID param_2)

{
  objc_stub::CGRectValue(param_2);
  objc_stub::appendFormat_(*(ID *)(param_1 + 0x20),&cf____0_0f__0_0f____0_0f__0_0f_);
  return;
}


// ===== -[NSTextAttachment(AttachmentKind)_isHeader] @ 00030834 =====

uint __NSTextAttachment_AttachmentKind__isHeader_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDATXHeadingAttachment);
  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = _objc_opt_class(&objc::class_t::MDSETEXTHeadingAttachment);
    uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isATXHeader] @ 00030890 =====

uint __NSTextAttachment_AttachmentKind__isATXHeader_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDATXHeadingAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isList] @ 000308c8 =====

uint __NSTextAttachment_AttachmentKind__isList_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDUnorderedListTextAttachment);
  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = _objc_opt_class(&objc::class_t::MDOrderedListTextAttachment);
    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = _objc_opt_class(&objc::class_t::MDTaskTextAttachment);
      uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
      goto LAB_00030930;
    }
  }
  uVar1 = 1;
LAB_00030930:
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isOrderedList] @ 00030940 =====

uint __NSTextAttachment_AttachmentKind__isOrderedList_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDOrderedListTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isUnorderedList] @ 00030978 =====

uint __NSTextAttachment_AttachmentKind__isUnorderedList_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDUnorderedListTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isTask] @ 000309b0 =====

uint __NSTextAttachment_AttachmentKind__isTask_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDTaskTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isTable] @ 000309e8 =====

uint __NSTextAttachment_AttachmentKind__isTable_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDTableTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isThematicBreak] @ 00030a20 =====

uint __NSTextAttachment_AttachmentKind__isThematicBreak_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDThematicBreakTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isLink] @ 00030a58 =====

uint __NSTextAttachment_AttachmentKind__isLink_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDLinkTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isLinkPreview] @ 00030a90 =====

uint __NSTextAttachment_AttachmentKind__isLinkPreview_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDLinkPreviewTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isFootnote] @ 00030ac8 =====

uint __NSTextAttachment_AttachmentKind__isFootnote_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDFootnoteTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isColor] @ 00030b00 =====

uint __NSTextAttachment_AttachmentKind__isColor_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDColorTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isArrow] @ 00030b38 =====

uint __NSTextAttachment_AttachmentKind__isArrow_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDArrowTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isBlockquote] @ 00030b70 =====

uint __NSTextAttachment_AttachmentKind__isBlockquote_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDBlockQuoteTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isFold] @ 00030ba8 =====

uint __NSTextAttachment_AttachmentKind__isFold_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDFoldTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isViewAttachment] @ 00030be0 =====

uint __NSTextAttachment_AttachmentKind__isViewAttachment_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::SFTextAttachmentView);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isFileBacked] @ 00030c18 =====

uint __NSTextAttachment_AttachmentKind__isFileBacked_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::SFTextAttachmentFileBackedView);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isImage] @ 00030c50 =====

uint __NSTextAttachment_AttachmentKind__isImage_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDImageTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isHardLineBreak] @ 00030c88 =====

uint __NSTextAttachment_AttachmentKind__isHardLineBreak_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDHardLineBreakTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isHighlighter] @ 00030cc0 =====

uint __NSTextAttachment_AttachmentKind__isHighlighter_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDHighlighterTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isInlineMathSpacer] @ 00030cf8 =====

uint __NSTextAttachment_AttachmentKind__isInlineMathSpacer_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDMathSpacerTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isIndentSpace] @ 00030d30 =====

uint __NSTextAttachment_AttachmentKind__isIndentSpace_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDIndentSpaceTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isCallout] @ 00030d68 =====

uint __NSTextAttachment_AttachmentKind__isCallout_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDCalloutTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isMath] @ 00030da0 =====

uint __NSTextAttachment_AttachmentKind__isMath_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDMathTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== -[NSTextAttachment(AttachmentKind)_isMermaid] @ 00030dd8 =====

uint __NSTextAttachment_AttachmentKind__isMermaid_(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_class(&objc::class_t::MDMermaidTextAttachment);
  uVar1 = _objc_opt_isKindOfClass(param_1,uVar2);
  return uVar1 & 1;
}


// ===== ___Block_byref_object_copy_ @ 00030fa4 =====

void ___Block_byref_object_copy_(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


// ===== ___Block_byref_object_dispose_ @ 00030fb4 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___Block_byref_object_dispose_(void)

{
  return 0;
}


// ===== ___27-[MDLinkTextAttachment_url]_block_invoke @ 00030fbc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___27__MDLinkTextAttachment_url__block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::representedAttributedText(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::attributedSubstringFromRange_(IVar1,param_3,param_4);
    IVar1 = objc_stub::string(IVar1);
    *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = IVar1;
    return 0;
  }
  return param_1;
}


// ===== ___29-[MDLinkTextAttachment_title]_block_invoke @ 00031174 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___29__MDLinkTextAttachment_title__block_invoke
               (long param_1,long param_2,long param_3,long param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::representedAttributedText(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::attributedSubstringFromRange_(IVar1,param_3 + 1,param_4 + -2);
    IVar1 = objc_stub::string(IVar1);
    *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = IVar1;
    return 0;
  }
  return param_1;
}


// ===== ___72-[MDArrowTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000314c8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___72__MDArrowTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::attachmentForArrowRange_inAttributedString_
                    (*(ID *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  IVar1 = objc_stub::attachmentAttributedString(IVar1);
  IVar1 = objc_stub::mutableCopy(IVar1);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x28),param_2,param_3,IVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,param_3,IVar1);
  return 0;
}


// ===== -[NSAttributedString(Headings)_rangeOfHeadingMatchingText:] @ 00031f2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
__NSAttributedString_Headings__rangeOfHeadingMatchingText__
          (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  
  IVar1 = objc_stub::length(param_1);
  auVar2._0_8_ = objc_stub::rangeOfHeadingMatchingText_inRange_compareOptions_
                           (param_1,param_3,0,IVar1,0);
  auVar2._8_8_ = extraout_x1;
  return auVar2;
}


// ===== -[NSAttributedString(Headings)_rangeOfHeadingMatchingText:inRange:compareOptions:] @ 00031f94 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
__NSAttributedString_Headings__rangeOfHeadingMatchingText_inRange_compareOptions__
          (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_80 = &local_70;
  local_70 = 0;
  local_60 = 0x3010000000;
  local_58 = "";
  uStack_48 = 0;
  local_50 = 0x7fffffffffffffff;
  local_b0 = PTR___NSConcreteStackBlock_0005ebe0;
  local_a8 = 0xc2000000;
  local_a0 = 
  ___82__NSAttributedString_Headings__rangeOfHeadingMatchingText_inRange_compareOptions___block_invoke
  ;
  puStack_98 = &
               ___block_descriptor_64_e8_32s40s48r_e72_v88__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56q72_B80l
  ;
  local_90 = param_1;
  local_88 = param_3;
  uStack_78 = param_6;
  local_68 = local_80;
  objc_stub::enumerateHeadingInRange_options_usingBlock_(param_1,param_4,param_5,0,&local_b0);
  auVar1 = *(undefined1 (*) [16])(local_68 + 4);
  __Block_object_dispose(&local_70,8);
  return auVar1;
}


// ===== ___82-[NSAttributedString(Headings)_rangeOfHeadingMatchingText:inRange:compareOptions:]_block_invoke @ 000320a4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___82__NSAttributedString_Headings__rangeOfHeadingMatchingText_inRange_compareOptions___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long lVar4;
  undefined1 *in_stack_00000018;
  
  IVar1 = objc_stub::rangeByTrimmingTrailingNewlineOrFold_(*(ID *)(param_1 + 0x20),param_2,param_3);
  IVar2 = objc_stub::humanizedStringForRange_(*(ID *)(param_1 + 0x20),IVar1,extraout_x1);
  IVar3 = objc_stub::whitespaceAndNewlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  IVar2 = objc_stub::stringByTrimmingCharactersInSet_(IVar2,IVar3);
  IVar2 = objc_stub::compare_options_(*(ID *)(param_1 + 0x28),IVar2,*(undefined8 *)(param_1 + 0x38))
  ;
  if (IVar2 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(ID *)(lVar4 + 0x20) = IVar1;
    *(undefined8 *)(lVar4 + 0x28) = extraout_x1;
    *in_stack_00000018 = 1;
  }
  return 0;
}


// ===== -[NSAttributedString(Headings)_rangeByTrimmingTrailingNewlineOrFold:] @ 0003217c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
__NSAttributedString_Headings__rangeByTrimmingTrailingNewlineOrFold__
          (ID param_1,undefined8 param_2,long param_3,long param_4)

{
  ID IVar1;
  undefined1 auVar2 [16];
  
  if (param_4 != 0) {
    do {
      IVar1 = objc_stub::textAttachmentAtIndex_(param_1,param_3 + -1 + param_4);
      IVar1 = objc_stub::isFold(IVar1);
      if ((int)IVar1 == 0) {
        IVar1 = objc_stub::string(param_1);
        IVar1 = objc_stub::characterAtIndex_(IVar1,param_3 + -1 + param_4);
        if ((int)IVar1 != 10) break;
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}


// ===== -[NSString(Bidi)_getBaseDirectionForRange:] @ 00032234 =====

void __NSString_Bidi__getBaseDirectionForRange__
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  objc_stub::getTextDirectionForRange_markdownAware_(param_1,param_3,param_4,0);
  return;
}


// ===== -[NSString(Bidi)_getMarkdownBaseDirectionForRange:] @ 0003223c =====

void __NSString_Bidi__getMarkdownBaseDirectionForRange__
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  objc_stub::getTextDirectionForRange_markdownAware_(param_1,param_3,param_4,1);
  return;
}


// ===== -[NSString(Bidi)_getTextDirectionForRange:markdownAware:] @ 00032244 =====

void __NSString_Bidi__getTextDirectionForRange_markdownAware__
               (ID param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  ID IVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x8;
  int *piVar5;
  long lVar6;
  long alStack_70 [3];
  int iStack_54;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar2 = objc_stub::maximumLengthOfBytesUsingEncoding_(param_1,0x8c000100);
  (*(code *)PTR____chkstk_darwin_0005ebf0)((IVar2 & 0xfffffffffffffffc) + 0xf & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  local_50 = 0;
  *(long *)((long)alStack_70 + lVar6 + 8) = param_4;
  *(undefined8 *)((long)alStack_70 + lVar6 + 0x10) = 0;
  *(undefined8 *)((long)alStack_70 + lVar6) = param_3;
  objc_stub::getBytes_maxLength_usedLength_encoding_options_range_remainingRange_
            (param_1,(long)&local_50 + lVar6);
  if (param_4 != 0) {
    piVar5 = (int *)((long)&iStack_54 + lVar6);
    lVar6 = -1;
    do {
      iVar1 = piVar5[1];
      if ((((param_5 == 0) || (lVar6 + 1U < 3)) || (iVar1 != 0x78)) ||
         (((*piVar5 != 0x5b || (piVar5[-1] != 0x20)) || (piVar5[-2] != 0x2d)))) {
        uVar3 = _isCodePointStrongRTL(iVar1);
        if ((uVar3 & 1) != 0) {
          uVar4 = 0xffffffff;
          goto LAB_00032368;
        }
        uVar3 = _isCodePointStrongLTR(iVar1);
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_00032368;
        }
      }
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  uVar4 = 0;
LAB_00032368:
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}


// ===== _isCodePointStrongRTL @ 0003239c =====

bool _isCodePointStrongRTL(uint param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint6 uVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint6 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  
  if (((uint)(param_1 - 0x5be < 9) & 0x125U >> (ulong)(param_1 - 0x5be & 0x1f)) != 0) {
    return true;
  }
  if (param_1 - 0x5d0 < 0x1b) {
    return true;
  }
  if ((0x2b < param_1 - 0x5f0) || ((0x8002900001fU >> ((ulong)(param_1 - 0x5f0) & 0x3f) & 1) == 0))
  {
    bVar13 = NEON_umaxv(CONCAT17(-((param_1 & 0xfffffffe) == 0x6ee),
                                 CONCAT16(-(param_1 - 0x712 < 0x1e),
                                          CONCAT15(-(param_1 - 0x70f < 2),
                                                   CONCAT14(-(param_1 - 0x6fa < 0x14),
                                                            CONCAT13(-(param_1 - 0x6e5 < 2),
                                                                     CONCAT12(-(param_1 - 0x671 <
                                                                               0x65),CONCAT11(-(
                                                  param_1 - 0x66d < 3),-(param_1 - 0x61e < 0x2d)))))
                                                  ))),1);
    if ((bVar13 & 1) == 0) {
      if (param_1 - 0x7c0 < 0x2b) {
        return true;
      }
      if (param_1 == 0x7b1) {
        return true;
      }
      if (param_1 - 0x74d < 0x59) {
        return true;
      }
      if ((param_1 - 0x7f4 < 7) && ((1 << (ulong)(param_1 - 0x7f4 & 0x1f) & 0x43U) != 0)) {
        return true;
      }
      if (0x15 < param_1 - 0x800) {
        if ((param_1 - 0x81a < 0xf) && ((1 << (ulong)(param_1 - 0x81a & 0x1f) & 0x4401U) != 0)) {
          return true;
        }
        if (param_1 - 0x830 < 0xf) {
          return true;
        }
        if (param_1 - 0x840 < 0x19) {
          return true;
        }
        if (param_1 == 0x85e) {
          return true;
        }
        if (param_1 == 0x8a0) {
          return true;
        }
        if (10 < param_1 - 0x8a2) {
          if (param_1 == 0x200f) {
            return true;
          }
          if (param_1 == 0xfb1d) {
            return true;
          }
          if (param_1 - 0xfb1f < 10) {
            return true;
          }
          if (param_1 - 0xfb2a < 0xd) {
            return true;
          }
          if ((6 < param_1 - 0xfb38) || ((0x5fU >> (ulong)(param_1 - 0xfb38 & 0x1f) & 1) == 0)) {
            iVar10 = -(uint)(param_1 - 0xfdf0 < 0xd);
            iVar11 = -(uint)(param_1 - 0xfe70 < 5);
            iVar12 = -(uint)(param_1 - 0xfe76 < 0x87);
            iVar6 = -(uint)(param_1 - 0xfb46 < 0x7c);
            iVar7 = -(uint)(param_1 - 0xfbd3 < 0x16b);
            iVar8 = -(uint)(param_1 - 0xfd50 < 0x40);
            uVar9 = CONCAT15((char)((uint)iVar10 >> 8),
                             CONCAT14((char)iVar10,-(uint)(param_1 - 0xfd92 < 0x36))) &
                    0xffff0000ffff;
            uVar3 = CONCAT15((char)((uint)iVar6 >> 8),
                             CONCAT14((char)iVar6,-(uint)(param_1 - 0xfb43 < 2))) & 0xffff0000ffff;
            auVar4[2] = (char)(uVar3 >> 0x20);
            auVar4._0_2_ = (short)uVar3;
            auVar4[3] = (char)(uVar3 >> 0x28);
            auVar4[4] = (char)iVar7;
            auVar4[5] = (char)((uint)iVar7 >> 8);
            auVar4[6] = (char)iVar8;
            auVar4[7] = (char)((uint)iVar8 >> 8);
            auVar4[8] = (char)uVar9;
            auVar4[9] = (char)(uVar9 >> 8);
            auVar4[10] = (char)(uVar9 >> 0x20);
            auVar4[0xb] = (char)(uVar9 >> 0x28);
            auVar4[0xc] = (char)iVar11;
            auVar4[0xd] = (char)((uint)iVar11 >> 8);
            auVar4[0xe] = (char)iVar12;
            auVar4[0xf] = (char)((uint)iVar12 >> 8);
            uVar5 = NEON_umaxv(auVar4,2);
            if ((uVar5 & 1) != 0) {
              return true;
            }
            if ((param_1 & 0xfffffffe) == 0xfb40) {
              return true;
            }
            if (((uint)(param_1 - 0x10800 < 9) & 0x13fU >> (ulong)(param_1 - 0x10800 & 0x1f)) != 0)
            {
              return true;
            }
            if (param_1 - 0x1080a < 0x2c) {
              return true;
            }
            if ((param_1 - 0x10837 < 6) && ((1 << (ulong)(param_1 - 0x10837 & 0x1f) & 0x23U) != 0))
            {
              return true;
            }
            if (param_1 - 0x10900 < 0x1c) {
              return true;
            }
            if (param_1 - 0x1083f < 0x17) {
              return true;
            }
            if (param_1 - 0x10857 < 9) {
              return true;
            }
            if (param_1 - 0x10980 < 0x38) {
              return true;
            }
            if (param_1 == 0x1093f) {
              return true;
            }
            if (param_1 - 0x10920 < 0x1a) {
              return true;
            }
            if (param_1 - 0x109be < 2) {
              return true;
            }
            if (param_1 == 0x10a00) {
              return true;
            }
            bVar13 = NEON_umaxv(CONCAT17(-((char)((param_1 - 0x1ee05 < 0x1b) * -0x80) < '\0'),
                                         CONCAT16(-((char)((param_1 - 0x10c00 < 0x49) * -0x80) <
                                                   '\0'),CONCAT15(-((char)((param_1 - 0x10b58 < 0x1b
                                                                           ) * -0x80) < '\0'),
                                                                  CONCAT14(-((char)((param_1 - 
                                                  0x10b40 < 0x16) * -0x80) < '\0'),
                                                  CONCAT13(-((char)((-(param_1 - 0x10b00 < 0x36) |
                                                                    -((param_1 & 0xfffffff8) ==
                                                                     0x10b78)) << 7) < '\0'),
                                                           CONCAT12(-((char)((-(param_1 - 0x10a50 <
                                                                               9) | -((param_1 &
                                                                                      0xffffffe0) ==
                                                                                     0x10a60)) << 7)
                                                                     < '\0'),CONCAT11(-((char)((-(
                                                  param_1 - 0x10a19 < 0x1b) |
                                                  -((param_1 & 0xfffffff8) == 0x10a40)) << 7) < '\0'
                                                  ),-((char)((-(param_1 - 0x10a15 < 3) |
                                                             -((param_1 & 0xfffffffc) == 0x10a10))
                                                            << 7) < '\0')))))))),1);
            if ((bVar13 & 1) != 0) {
              return true;
            }
            uVar1 = param_1 & 0xfffffffc;
            if (uVar1 == 0x1ee00) {
              return true;
            }
            if ((6 < param_1 - 0x1ee21) || ((0x4bU >> (ulong)(param_1 - 0x1ee21 & 0x1f) & 1) == 0))
            {
              if (param_1 - 0x1ee29 < 10) {
                return true;
              }
              if (uVar1 == 0x1ee34) {
                return true;
              }
              if (((uint)(param_1 - 0x1ee39 < 0x2c) &
                  (uint)(0xb554b754205 >> ((ulong)(param_1 - 0x1ee39) & 0x3f))) != 0) {
                return true;
              }
              if (uVar1 == 0x1ee74) {
                return true;
              }
              if ((0x17 < param_1 - 0x1ee67) ||
                 ((0xbc0fefU >> (ulong)(param_1 - 0x1ee67 & 0x1f) & 1) == 0)) {
                iVar6 = -(uint)(param_1 - 0x1ee8b < 0x11);
                iVar7 = -(uint)(param_1 - 0x1eea1 < 3);
                iVar8 = -(uint)(param_1 - 0x1eea5 < 5);
                auVar2[4] = (char)iVar6;
                auVar2._0_4_ = -(uint)(param_1 - 0x1ee80 < 10);
                auVar2[5] = (char)((uint)iVar6 >> 8);
                auVar2[6] = (char)((uint)iVar6 >> 0x10);
                auVar2[7] = (char)((uint)iVar6 >> 0x18);
                auVar2[8] = (char)iVar7;
                auVar2[9] = (char)((uint)iVar7 >> 8);
                auVar2[10] = (char)((uint)iVar7 >> 0x10);
                auVar2[0xb] = (char)((uint)iVar7 >> 0x18);
                auVar2[0xc] = (char)iVar8;
                auVar2[0xd] = (char)((uint)iVar8 >> 8);
                auVar2[0xe] = (char)((uint)iVar8 >> 0x10);
                auVar2[0xf] = (char)((uint)iVar8 >> 0x18);
                uVar1 = NEON_umaxv(auVar2,4);
                if ((uVar1 & 1) == 0) {
                  return param_1 - 0x1eeab < 0x11;
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


// ===== _isCodePointStrongLTR @ 000327f4 =====

undefined8 _isCodePointStrongLTR(uint param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint6 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ushort uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint6 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  
  if (0x19 < (param_1 & 0xffffffdf) - 0x41) {
    if ((param_1 - 0xaa < 0x11) && ((1 << (ulong)(param_1 - 0xaa & 0x1f) & 0x10801U) != 0)) {
      return 1;
    }
    uVar38 = (undefined1)(param_1 >> 0x18);
    iVar14 = -(uint)(param_1 - 0xd8 < 0x1f);
    iVar15 = -(uint)(param_1 - 0xf8 < 0x1c1);
    iVar16 = -(uint)(param_1 - 699 < 7);
    auVar2[4] = (char)iVar14;
    auVar2._0_4_ = -(uint)(param_1 - 0xc0 < 0x17);
    auVar2[5] = (char)((uint)iVar14 >> 8);
    auVar2[6] = (char)((uint)iVar14 >> 0x10);
    auVar2[7] = (char)((uint)iVar14 >> 0x18);
    auVar2[8] = (char)iVar15;
    auVar2[9] = (char)((uint)iVar15 >> 8);
    auVar2[10] = (char)((uint)iVar15 >> 0x10);
    auVar2[0xb] = (char)((uint)iVar15 >> 0x18);
    auVar2[0xc] = (char)iVar16;
    auVar2[0xd] = (char)((uint)iVar16 >> 8);
    auVar2[0xe] = (char)((uint)iVar16 >> 0x10);
    auVar2[0xf] = (char)((uint)iVar16 >> 0x18);
    uVar36 = NEON_umaxv(auVar2,4);
    if ((uVar36 & 1) != 0) {
      return 1;
    }
    uVar36 = param_1 & 0xfffffffe;
    if (uVar36 == 0x2d0) {
      return 1;
    }
    if ((0xe < param_1 - 0x2e0) || ((0x401fU >> (ulong)(param_1 - 0x2e0 & 0x1f) & 1) == 0)) {
      uVar1 = param_1 & 0xfffffffc;
      if (uVar1 == 0x370) {
        return 1;
      }
      if (uVar36 == 0x376) {
        return 1;
      }
      if ((0x12 < param_1 - 0x37a) || ((0x5d00fU >> (ulong)(param_1 - 0x37a & 0x1f) & 1) == 0)) {
        iVar14 = -(uint)(param_1 - 0x3a3 < 0x53);
        iVar15 = -(uint)(param_1 - 0x3f7 < 0x8c);
        iVar16 = -(uint)(param_1 - 0x48a < 0x9e);
        auVar3[4] = (char)iVar14;
        auVar3._0_4_ = -(uint)(param_1 - 0x38e < 0x14);
        auVar3[5] = (char)((uint)iVar14 >> 8);
        auVar3[6] = (char)((uint)iVar14 >> 0x10);
        auVar3[7] = (char)((uint)iVar14 >> 0x18);
        auVar3[8] = (char)iVar15;
        auVar3[9] = (char)((uint)iVar15 >> 8);
        auVar3[10] = (char)((uint)iVar15 >> 0x10);
        auVar3[0xb] = (char)((uint)iVar15 >> 0x18);
        auVar3[0xc] = (char)iVar16;
        auVar3[0xd] = (char)((uint)iVar16 >> 8);
        auVar3[0xe] = (char)((uint)iVar16 >> 0x10);
        auVar3[0xf] = (char)((uint)iVar16 >> 0x18);
        uVar13 = NEON_umaxv(auVar3,4);
        if ((uVar13 & 1) != 0) {
          return 1;
        }
        if (param_1 - 0x531 < 0x26) {
          return 1;
        }
        if (param_1 - 0x559 < 7) {
          return 1;
        }
        if (param_1 == 0x589) {
          return 1;
        }
        if (param_1 - 0x561 < 0x27) {
          return 1;
        }
        iVar23 = -(uint)(param_1 - 0x964 < 0x14);
        iVar24 = -(uint)(param_1 - 0x979 < 7);
        iVar25 = -(uint)(param_1 - 0x985 < 8);
        iVar14 = -(uint)(param_1 - 0x93d < 4);
        iVar15 = -(uint)(param_1 - 0x949 < 4);
        iVar16 = -(uint)(param_1 - 0x94e < 3);
        uVar17 = CONCAT15((char)((uint)iVar23 >> 8),
                          CONCAT14((char)iVar23,-(uint)(param_1 - 0x958 < 10))) & 0xffff0000ffff;
        uVar4 = CONCAT15((char)((uint)iVar14 >> 8),
                         CONCAT14((char)iVar14,-(uint)(param_1 - 0x903 < 0x37))) & 0xffff0000ffff;
        auVar5[2] = (char)(uVar4 >> 0x20);
        auVar5._0_2_ = (short)uVar4;
        auVar5[3] = (char)(uVar4 >> 0x28);
        auVar5[4] = (char)iVar15;
        auVar5[5] = (char)((uint)iVar15 >> 8);
        auVar5[6] = (char)iVar16;
        auVar5[7] = (char)((uint)iVar16 >> 8);
        auVar5[8] = (char)uVar17;
        auVar5[9] = (char)(uVar17 >> 8);
        auVar5[10] = (char)(uVar17 >> 0x20);
        auVar5[0xb] = (char)(uVar17 >> 0x28);
        auVar5[0xc] = (char)iVar24;
        auVar5[0xd] = (char)((uint)iVar24 >> 8);
        auVar5[0xe] = (char)iVar25;
        auVar5[0xf] = (char)((uint)iVar25 >> 8);
        uVar12 = NEON_umaxv(auVar5,2);
        if ((uVar12 & 1) != 0) {
          return 1;
        }
        if (param_1 - 0x98f < 2) {
          return 1;
        }
        if (param_1 - 0x993 < 0x16) {
          return 1;
        }
        if (param_1 == 0x93b) {
          return 1;
        }
        if (uVar36 == 0x982) {
          return 1;
        }
        if (((uint)(param_1 - 0x9aa < 0x2e) &
            (uint)(0x20166078f17f >> ((ulong)(param_1 - 0x9aa) & 0x3f))) != 0) {
          return 1;
        }
        if (param_1 - 0x9e6 < 0xc) {
          return 1;
        }
        if (((uint)(param_1 - 0x9dc < 0x28) &
            (uint)(0x807f00003b >> ((ulong)(param_1 - 0x9dc) & 0x3f))) != 0) {
          return 1;
        }
        if (param_1 - 0xa13 < 0x16) {
          return 1;
        }
        if ((param_1 - 0xa05 < 0x3c) &&
           ((1L << ((ulong)(param_1 - 0xa05) & 0x3f) & 0xe1b6fe000000c3fU) != 0)) {
          return 1;
        }
        if ((param_1 - 0xa59 < 6) && (param_1 - 0xa59 != 4)) {
          return 1;
        }
        if ((9 < param_1 - 0xa66) &&
           ((0x11 < param_1 - 0xa72 || ((0x20007U >> (ulong)(param_1 - 0xa72 & 0x1f) & 1) == 0)))) {
          iVar14 = -(uint)(param_1 - 0xa8f < 3);
          iVar15 = -(uint)(param_1 - 0xa93 < 0x16);
          iVar16 = -(uint)(param_1 - 0xaaa < 7);
          auVar6[4] = (char)iVar14;
          auVar6._0_4_ = -(uint)(param_1 - 0xa85 < 9);
          auVar6[5] = (char)((uint)iVar14 >> 8);
          auVar6[6] = (char)((uint)iVar14 >> 0x10);
          auVar6[7] = (char)((uint)iVar14 >> 0x18);
          auVar6[8] = (char)iVar15;
          auVar6[9] = (char)((uint)iVar15 >> 8);
          auVar6[10] = (char)((uint)iVar15 >> 0x10);
          auVar6[0xb] = (char)((uint)iVar15 >> 0x18);
          auVar6[0xc] = (char)iVar16;
          auVar6[0xd] = (char)((uint)iVar16 >> 8);
          auVar6[0xe] = (char)((uint)iVar16 >> 0x10);
          auVar6[0xf] = (char)((uint)iVar16 >> 0x18);
          uVar13 = NEON_umaxv(auVar6,4);
          if (((uVar13 & 1) == 0) &&
             (((7 < param_1 - 0xab2 || ((0xfbU >> (ulong)(param_1 - 0xab2 & 0x1f) & 1) == 0)) &&
              ((0x13 < param_1 - 0xabd || ((0x8d00fU >> (ulong)(param_1 - 0xabd & 0x1f) & 1) == 0)))
              ))) {
            uVar39 = (undefined1)(param_1 >> 0x10);
            bVar40 = NEON_umaxv(CONCAT17(-(uVar36 == 0xb02),
                                         CONCAT16(-(uVar36 == 0xae0),
                                                  CONCAT15(-(param_1 - 0xb35 < 5),
                                                           CONCAT14(-(param_1 - 0xb2a < 7),
                                                                    CONCAT13(-(param_1 - 0xb13 <
                                                                              0x16),CONCAT12(-(
                                                  param_1 - 0xb0f < 2),
                                                  CONCAT11(-(param_1 - 0xb05 < 8),
                                                           -(param_1 - 0xae6 < 0xb)))))))),1);
            if ((bVar40 & 1) != 0) {
              return 1;
            }
            if (uVar36 == 0xb32) {
              return 1;
            }
            if (((3 < param_1 - 0xb3d) || (param_1 - 0xb3d == 2)) && (1 < param_1 - 0xb47)) {
              if (((uint)(param_1 - 0xb4b < 0x17) & 0x761003U >> (ulong)(param_1 - 0xb4b & 0x1f)) !=
                  0) {
                return 1;
              }
              if (param_1 - 0xb66 < 0x12) {
                return 1;
              }
              if (((uint)(param_1 - 0xb83 < 0x1a) & 0x2c7b8fdU >> (ulong)(param_1 - 0xb83 & 0x1f))
                  != 0) {
                return 1;
              }
              if (param_1 - 0xbae < 0xc) {
                return 1;
              }
              if ((0x39 < param_1 - 0xb9e) ||
                 ((0x204771b00001c63U >> ((ulong)(param_1 - 0xb9e) & 0x3f) & 1) == 0)) {
                iVar14 = -(uint)(param_1 - 0xc01 < 3);
                iVar15 = -(uint)(param_1 - 0xc05 < 8);
                iVar16 = -(uint)(param_1 - 0xc0e < 3);
                auVar26[4] = (char)iVar14;
                auVar26._0_4_ = -(uint)(param_1 - 0xbe6 < 0xd);
                auVar26[5] = (char)((uint)iVar14 >> 8);
                auVar26[6] = (char)((uint)iVar14 >> 0x10);
                auVar26[7] = (char)((uint)iVar14 >> 0x18);
                auVar26[8] = (char)iVar15;
                auVar26[9] = (char)((uint)iVar15 >> 8);
                auVar26[10] = (char)((uint)iVar15 >> 0x10);
                auVar26[0xb] = (char)((uint)iVar15 >> 0x18);
                auVar26[0xc] = (char)iVar16;
                auVar26[0xd] = (char)((uint)iVar16 >> 8);
                auVar26[0xe] = (char)((uint)iVar16 >> 0x10);
                auVar26[0xf] = (char)((uint)iVar16 >> 0x18);
                uVar13 = NEON_umaxv(auVar26,4);
                if ((uVar13 & 1) != 0) {
                  return 1;
                }
                if (param_1 - 0xc12 < 0x17) {
                  return 1;
                }
                if (param_1 - 0xc2a < 10) {
                  return 1;
                }
                if ((0x2c < param_1 - 0xc35) ||
                   ((0x18180000f11fU >> ((ulong)(param_1 - 0xc35) & 0x3f) & 1) == 0)) {
                  iVar23 = -(uint)(param_1 - 0xcb5 < 5);
                  iVar24 = -(uint)(param_1 - 0xcbd < 8);
                  iVar25 = -(uint)(param_1 - 0xcc6 < 3);
                  iVar14 = -(uint)(param_1 - 0xc85 < 8);
                  iVar15 = -(uint)(param_1 - 0xc8e < 3);
                  iVar16 = -(uint)(param_1 - 0xc92 < 0x17);
                  uVar17 = CONCAT15((char)((uint)iVar23 >> 8),
                                    CONCAT14((char)iVar23,-(uint)(param_1 - 0xcaa < 10))) &
                           0xffff0000ffff;
                  uVar4 = CONCAT15((char)((uint)iVar14 >> 8),
                                   CONCAT14((char)iVar14,-(uint)(param_1 - 0xc66 < 10))) &
                          0xffff0000ffff;
                  auVar27[2] = (char)(uVar4 >> 0x20);
                  auVar27._0_2_ = (short)uVar4;
                  auVar27[3] = (char)(uVar4 >> 0x28);
                  auVar27[4] = (char)iVar15;
                  auVar27[5] = (char)((uint)iVar15 >> 8);
                  auVar27[6] = (char)iVar16;
                  auVar27[7] = (char)((uint)iVar16 >> 8);
                  auVar27[8] = (char)uVar17;
                  auVar27[9] = (char)(uVar17 >> 8);
                  auVar27[10] = (char)(uVar17 >> 0x20);
                  auVar27[0xb] = (char)(uVar17 >> 0x28);
                  auVar27[0xc] = (char)iVar24;
                  auVar27[0xd] = (char)((uint)iVar24 >> 8);
                  auVar27[0xe] = (char)iVar25;
                  auVar27[0xf] = (char)((uint)iVar25 >> 8);
                  uVar12 = NEON_umaxv(auVar27,2);
                  if ((uVar12 & 1) == 0) {
                    if ((param_1 - 0xcca < 0x15) &&
                       ((1 << (ulong)(param_1 - 0xcca & 0x1f) & 0x101803U) != 0)) {
                      return 1;
                    }
                    if ((param_1 - 0xc7f < 5) &&
                       ((1 << (ulong)(param_1 - 0xc7f & 0x1f) & 0x19U) != 0)) {
                      return 1;
                    }
                    bVar40 = NEON_umaxv(CONCAT17(-((ushort)(CONCAT15(0xc,CONCAT14(0xe0,param_1 - 
                                                  0xd46)) >> 0x20) == uVar36),
                                                 CONCAT16(-(param_1 - 0xd46 < 3),
                                                          CONCAT15(-(param_1 - 0xd3d < 4),
                                                                   CONCAT14(-(param_1 - 0xd12 < 0x29
                                                                             ),CONCAT13(-(param_1 - 
                                                  0xd0e < 3),
                                                  CONCAT12(-(param_1 - 0xd05 < 8),
                                                           CONCAT11(-(param_1 - 0xcf1 < 2),
                                                                    -(param_1 - 0xce6 < 10)))))))),1
                                       );
                    if ((bVar40 & 1) != 0) {
                      return 1;
                    }
                    if (uVar36 == 0xd02) {
                      return 1;
                    }
                    if ((0xd < param_1 - 0xd4a) ||
                       ((0x2017U >> (ulong)(param_1 - 0xd4a & 0x1f) & 1) == 0)) {
                      iVar14 = -(uint)(param_1 - 0xd79 < 7);
                      iVar15 = -(uint)(param_1 - 0xd85 < 0x12);
                      iVar16 = -(uint)(param_1 - 0xd9a < 0x18);
                      auVar28[4] = (char)iVar14;
                      auVar28._0_4_ = -(uint)(param_1 - 0xd66 < 0x10);
                      auVar28[5] = (char)((uint)iVar14 >> 8);
                      auVar28[6] = (char)((uint)iVar14 >> 0x10);
                      auVar28[7] = (char)((uint)iVar14 >> 0x18);
                      auVar28[8] = (char)iVar15;
                      auVar28[9] = (char)((uint)iVar15 >> 8);
                      auVar28[10] = (char)((uint)iVar15 >> 0x10);
                      auVar28[0xb] = (char)((uint)iVar15 >> 0x18);
                      auVar28[0xc] = (char)iVar16;
                      auVar28[0xd] = (char)((uint)iVar16 >> 8);
                      auVar28[0xe] = (char)((uint)iVar16 >> 0x10);
                      auVar28[0xf] = (char)((uint)iVar16 >> 0x18);
                      uVar13 = NEON_umaxv(auVar28,4);
                      if (((uVar13 & 1) == 0) &&
                         ((0x23 < param_1 - 0xd60 ||
                          ((0xc00000003U >> ((ulong)(param_1 - 0xd60) & 0x3f) & 1) == 0)))) {
                        bVar40 = NEON_umaxv(CONCAT17(-((ushort)(CONCAT15(0xd,CONCAT14(0xbd,param_1 -
                                                                                           0xe4f))
                                                               >> 0x20) == param_1),
                                                     CONCAT16(-(param_1 - 0xe4f < 0xd),
                                                              CONCAT15(-(param_1 - 0xe40 < 7),
                                                                       CONCAT14(-(param_1 - 0xe01 <
                                                                                 0x30),CONCAT13(-(
                                                  param_1 - 0xdf2 < 3),
                                                  CONCAT12(-(param_1 - 0xdcf < 3),
                                                           CONCAT11(-(param_1 - 0xdc0 < 7),
                                                                    -(param_1 - 0xdb3 < 9)))))))),1)
                        ;
                        if ((bVar40 & 1) != 0) {
                          return 1;
                        }
                        uVar13 = param_1 & 0xfffffff8;
                        if (uVar13 == 0xdd8) {
                          return 1;
                        }
                        if (uVar36 == 0xe32) {
                          return 1;
                        }
                        if ((0xc < param_1 - 0xe81) ||
                           ((0x12cbU >> (ulong)(param_1 - 0xe81 & 0x1f) & 1) == 0)) {
                          if (uVar1 == 0xe94) {
                            return 1;
                          }
                          if (param_1 - 0xe99 < 7) {
                            return 1;
                          }
                          if ((0x25 < param_1 - 0xea1) ||
                             ((0x2f9006f657U >> ((ulong)(param_1 - 0xea1) & 0x3f) & 1) == 0)) {
                            if (param_1 - 0xf1a < 0x1b) {
                              return 1;
                            }
                            if (param_1 - 0xf00 < 0x18) {
                              return 1;
                            }
                            if (param_1 - 0xed0 < 10) {
                              return 1;
                            }
                            if (uVar1 == 0xedc) {
                              return 1;
                            }
                            if (param_1 == 0xf36) {
                              return 1;
                            }
                            if (param_1 == 0xf38) {
                              return 1;
                            }
                            if (param_1 - 0xf3e < 10) {
                              return 1;
                            }
                            if (param_1 - 0xf49 < 0x24) {
                              return 1;
                            }
                            if (param_1 == 0xf7f) {
                              return 1;
                            }
                            if (param_1 == 0xf85) {
                              return 1;
                            }
                            if (0xc < param_1 - 0xfce) {
                              if ((param_1 - 0xfbe < 0xf) && (param_1 - 0xfbe != 8)) {
                                return 1;
                              }
                              if (param_1 - 0xf88 < 5) {
                                return 1;
                              }
                              if (0x2c < param_1 - 0x1000) {
                                if (param_1 == 0x1031) {
                                  return 1;
                                }
                                if (param_1 == 0x1038) {
                                  return 1;
                                }
                                iVar23 = -(uint)(param_1 - 0x1083 < 2);
                                iVar24 = -(uint)(param_1 - 0x1087 < 6);
                                iVar25 = -(uint)(param_1 - 0x108e < 0xf);
                                iVar14 = -(uint)(param_1 - 0x103f < 0x19);
                                iVar15 = -(uint)(param_1 - 0x105a < 4);
                                iVar16 = -(uint)(param_1 - 0x1061 < 0x10);
                                uVar17 = CONCAT15((char)((uint)iVar23 >> 8),
                                                  CONCAT14((char)iVar23,
                                                           -(uint)(param_1 - 0x1075 < 0xd))) &
                                         0xffff0000ffff;
                                uVar4 = CONCAT15((char)((uint)iVar14 >> 8),
                                                 CONCAT14((char)iVar14,-(uint)(param_1 - 0x103b < 2)
                                                         )) & 0xffff0000ffff;
                                auVar29[2] = (char)(uVar4 >> 0x20);
                                auVar29._0_2_ = (short)uVar4;
                                auVar29[3] = (char)(uVar4 >> 0x28);
                                auVar29[4] = (char)iVar15;
                                auVar29[5] = (char)((uint)iVar15 >> 8);
                                auVar29[6] = (char)iVar16;
                                auVar29[7] = (char)((uint)iVar16 >> 8);
                                auVar29[8] = (char)uVar17;
                                auVar29[9] = (char)(uVar17 >> 8);
                                auVar29[10] = (char)(uVar17 >> 0x20);
                                auVar29[0xb] = (char)(uVar17 >> 0x28);
                                auVar29[0xc] = (char)iVar24;
                                auVar29[0xd] = (char)((uint)iVar24 >> 8);
                                auVar29[0xe] = (char)iVar25;
                                auVar29[0xf] = (char)((uint)iVar25 >> 8);
                                uVar12 = NEON_umaxv(auVar29,2);
                                if ((uVar12 & 1) != 0) {
                                  return 1;
                                }
                                if (param_1 - 0x109e < 0x28) {
                                  return 1;
                                }
                                if (param_1 == 0x10c7) {
                                  return 1;
                                }
                                if (param_1 == 0x10cd) {
                                  return 1;
                                }
                                if (param_1 - 0x10d0 < 0x179) {
                                  return 1;
                                }
                                if (param_1 - 0x124a < 4) {
                                  return 1;
                                }
                                if ((8 < param_1 - 0x1250) ||
                                   ((0x17fU >> (ulong)(param_1 - 0x1250 & 0x1f) & 1) == 0)) {
                                  iVar14 = -(uint)(param_1 - 0x1260 < 0x29);
                                  iVar15 = -(uint)(param_1 - 0x128a < 4);
                                  iVar16 = -(uint)(param_1 - 0x1290 < 0x21);
                                  auVar30[4] = (char)iVar14;
                                  auVar30._0_4_ = -(uint)(param_1 - 0x125a < 4);
                                  auVar30[5] = (char)((uint)iVar14 >> 8);
                                  auVar30[6] = (char)((uint)iVar14 >> 0x10);
                                  auVar30[7] = (char)((uint)iVar14 >> 0x18);
                                  auVar30[8] = (char)iVar15;
                                  auVar30[9] = (char)((uint)iVar15 >> 8);
                                  auVar30[10] = (char)((uint)iVar15 >> 0x10);
                                  auVar30[0xb] = (char)((uint)iVar15 >> 0x18);
                                  auVar30[0xc] = (char)iVar16;
                                  auVar30[0xd] = (char)((uint)iVar16 >> 8);
                                  auVar30[0xe] = (char)((uint)iVar16 >> 0x10);
                                  auVar30[0xf] = (char)((uint)iVar16 >> 0x18);
                                  uVar37 = NEON_umaxv(auVar30,4);
                                  if ((uVar37 & 1) != 0) {
                                    return 1;
                                  }
                                  if (param_1 - 0x12b2 < 4) {
                                    return 1;
                                  }
                                  if ((8 < param_1 - 0x12b8) ||
                                     ((0x17fU >> (ulong)(param_1 - 0x12b8 & 0x1f) & 1) == 0)) {
                                    uVar4 = (uint6)CONCAT14(-(param_1 - 0x1360 < 0x1d),
                                                            -(uint)(param_1 - 0x1318 < 0x43)) &
                                            0xffff0000ffff;
                                    auVar31[1] = -(param_1 - 0x12c8 < 0xf);
                                    auVar31[0] = -(param_1 - 0x12c2 < 4);
                                    auVar31[2] = -(param_1 - 0x12d8 < 0x39);
                                    auVar31[3] = -(param_1 - 0x1312 < 4);
                                    auVar31[4] = (char)uVar4;
                                    auVar31[5] = (char)(uVar4 >> 0x20);
                                    auVar31[6] = -(param_1 - 0x13a0 < 0x55);
                                    auVar31[7] = -(param_1 - 0x1401 < 0x27f);
                                    auVar31[8] = -(param_1 - 0x1681 < 0x1a);
                                    auVar31[9] = -(param_1 - 0x16a0 < 0x51);
                                    auVar31[10] = -(param_1 - 0x1700 < 0xd);
                                    auVar31[0xb] = -(param_1 - 0x170e < 4);
                                    auVar31[0xc] = -(param_1 - 0x1720 < 0x12);
                                    auVar31[0xd] = -(param_1 - 0x1735 < 2);
                                    auVar31[0xe] = -(param_1 - 0x1740 < 0x12);
                                    auVar31[0xf] = -(param_1 - 0x1760 < 0xd);
                                    bVar40 = NEON_umaxv(auVar31,1);
                                    if ((bVar40 & 1) != 0) {
                                      return 1;
                                    }
                                    if (param_1 - 0x176e < 3) {
                                      return 1;
                                    }
                                    if (param_1 - 0x1780 < 0x34) {
                                      return 1;
                                    }
                                    if ((param_1 & 0xfffffff0) == 0x1380) {
                                      return 1;
                                    }
                                    if ((0x26 < param_1 - 0x17b6) ||
                                       ((0x5fc006ff01U >> ((ulong)(param_1 - 0x17b6) & 0x3f) & 1) ==
                                        0)) {
                                      if (param_1 - 0x1820 < 0x58) {
                                        return 1;
                                      }
                                      if (param_1 - 0x17e0 < 10) {
                                        return 1;
                                      }
                                      if (param_1 - 0x1810 < 10) {
                                        return 1;
                                      }
                                      uVar4 = (uint6)CONCAT14(-(param_1 - 0x1933 < 6),
                                                              -(uint)(param_1 - 0x1929 < 3)) &
                                              0xffff0000ffff;
                                      uVar17 = (uint6)CONCAT14(-(param_1 - 0x1a1e < 0x38),
                                                               -(uint)(param_1 - 0x1a19 < 3)) &
                                               0xffff0000ffff;
                                      auVar32[1] = -(param_1 - 0x18b0 < 0x46);
                                      auVar32[0] = -(param_1 - 0x1880 < 0x29);
                                      auVar32[2] = -(param_1 - 0x1900 < 0x1d);
                                      auVar32[3] = -(param_1 - 0x1923 < 4);
                                      auVar32[4] = (char)uVar4;
                                      auVar32[5] = (char)(uVar4 >> 0x20);
                                      auVar32[6] = -(param_1 - 0x1946 < 0x28);
                                      auVar32[7] = -(param_1 - 0x1970 < 5);
                                      auVar32[8] = -(param_1 - 0x1980 < 0x2c);
                                      auVar32[9] = -(param_1 - 0x19b0 < 0x1a);
                                      auVar32[10] = -(param_1 - 0x19d0 < 0xb);
                                      auVar32[0xb] = -(param_1 - 0x1a00 < 0x17);
                                      auVar32[0xc] = (char)uVar17;
                                      auVar32[0xd] = (char)(uVar17 >> 0x20);
                                      auVar32[0xe] = -(param_1 == 0x18aa);
                                      auVar32[0xf] = -(uVar36 == 0x1930);
                                      bVar40 = NEON_umaxv(auVar32,1);
                                      if ((bVar40 & 1) == 0) {
                                        if (param_1 == 0x1a57) {
                                          return 1;
                                        }
                                        if (param_1 == 0x1a61) {
                                          return 1;
                                        }
                                        uVar37 = param_1 & 0xffffffee;
                                        uVar41 = (undefined1)(param_1 >> 8);
                                        iVar14 = -(uint)(param_1 - 0x1a6d < 6);
                                        iVar15 = -(uint)(CONCAT13((char)(uVar37 >> 0x18),
                                                                  (int3)(CONCAT16((char)(uVar37 >>
                                                                                        0x10),
                                                                                  CONCAT15((char)(
                                                  uVar37 >> 8),CONCAT14((char)uVar37,param_1))) >>
                                                  0x20)) - 0x1a80U < 10);
                                        iVar16 = -(uint)(CONCAT13(uVar38,(int3)(CONCAT16(uVar39,
                                                  CONCAT15(uVar41,CONCAT14((char)param_1,param_1)))
                                                  >> 0x20)) - 0x1aa0U < 0xe);
                                        auVar18[4] = (char)iVar14;
                                        auVar18._0_4_ = -(uint)(param_1 - 0x1a63 < 2);
                                        auVar18[5] = (char)((uint)iVar14 >> 8);
                                        auVar18[6] = (char)((uint)iVar14 >> 0x10);
                                        auVar18[7] = (char)((uint)iVar14 >> 0x18);
                                        auVar18[8] = (char)iVar15;
                                        auVar18[9] = (char)((uint)iVar15 >> 8);
                                        auVar18[10] = (char)((uint)iVar15 >> 0x10);
                                        auVar18[0xb] = (char)((uint)iVar15 >> 0x18);
                                        auVar18[0xc] = (char)iVar16;
                                        auVar18[0xd] = (char)((uint)iVar16 >> 8);
                                        auVar18[0xe] = (char)((uint)iVar16 >> 0x10);
                                        auVar18[0xf] = (char)((uint)iVar16 >> 0x18);
                                        uVar37 = NEON_umaxv(auVar18,4);
                                        if ((uVar37 & 1) != 0) {
                                          return 1;
                                        }
                                        if (param_1 - 0x1b04 < 0x30) {
                                          return 1;
                                        }
                                        if (param_1 == 0x1b35) {
                                          return 1;
                                        }
                                        if (param_1 == 0x1b3b) {
                                          return 1;
                                        }
                                        iVar14 = -(uint)(param_1 - 0x1b43 < 9);
                                        iVar15 = -(uint)(param_1 - 0x1b50 < 0x1b);
                                        iVar16 = -(uint)(param_1 - 0x1b74 < 9);
                                        auVar19[4] = (char)iVar14;
                                        auVar19._0_4_ = -(uint)(param_1 - 0x1b3d < 5);
                                        auVar19[5] = (char)((uint)iVar14 >> 8);
                                        auVar19[6] = (char)((uint)iVar14 >> 0x10);
                                        auVar19[7] = (char)((uint)iVar14 >> 0x18);
                                        auVar19[8] = (char)iVar15;
                                        auVar19[9] = (char)((uint)iVar15 >> 8);
                                        auVar19[10] = (char)((uint)iVar15 >> 0x10);
                                        auVar19[0xb] = (char)((uint)iVar15 >> 0x18);
                                        auVar19[0xc] = (char)iVar16;
                                        auVar19[0xd] = (char)((uint)iVar16 >> 8);
                                        auVar19[0xe] = (char)((uint)iVar16 >> 0x10);
                                        auVar19[0xf] = (char)((uint)iVar16 >> 0x18);
                                        uVar37 = NEON_umaxv(auVar19,4);
                                        if ((uVar37 & 1) != 0) {
                                          return 1;
                                        }
                                        if (param_1 - 0x1b82 < 0x20) {
                                          return 1;
                                        }
                                        if ((param_1 - 0x1ba6 < 5) &&
                                           ((1 << (ulong)(param_1 - 0x1ba6 & 0x1f) & 0x13U) != 0)) {
                                          return 1;
                                        }
                                        if (param_1 == 0x1be7) {
                                          return 1;
                                        }
                                        if (param_1 - 0x1bac < 0x3a) {
                                          return 1;
                                        }
                                        if ((4 < param_1 - 0x1bea) ||
                                           ((0x17U >> (ulong)(param_1 - 0x1bea & 0x1f) & 1) == 0)) {
                                          if (param_1 - 0x1c4d < 0x33) {
                                            return 1;
                                          }
                                          if (param_1 - 0x1c3b < 0xf) {
                                            return 1;
                                          }
                                          if (uVar36 == 0x1c34) {
                                            return 1;
                                          }
                                          if (uVar36 == 0x1bf2) {
                                            return 1;
                                          }
                                          if (param_1 - 0x1bfc < 0x30) {
                                            return 1;
                                          }
                                          iVar23 = -(uint)(param_1 - 0x1f18 < 6);
                                          iVar24 = -(uint)(param_1 - 0x1f20 < 0x26);
                                          iVar25 = -(uint)(param_1 - 0x1f48 < 6);
                                          iVar14 = -(uint)(param_1 - 0x1cee < 6);
                                          iVar15 = -(uint)(param_1 - 0x1cf5 < 2);
                                          iVar16 = -(uint)(param_1 - 0x1d00 < 0xc0);
                                          uVar17 = CONCAT15((char)((uint)iVar23 >> 8),
                                                            CONCAT14((char)iVar23,
                                                                     -(uint)(param_1 - 0x1e00 <
                                                                            0x116))) &
                                                   0xffff0000ffff;
                                          uVar4 = CONCAT15((char)((uint)iVar14 >> 8),
                                                           CONCAT14((char)iVar14,
                                                                    -(uint)(param_1 - 0x1ce9 < 4)))
                                                  & 0xffff0000ffff;
                                          auVar20[2] = (char)(uVar4 >> 0x20);
                                          auVar20._0_2_ = (short)uVar4;
                                          auVar20[3] = (char)(uVar4 >> 0x28);
                                          auVar20[4] = (char)iVar15;
                                          auVar20[5] = (char)((uint)iVar15 >> 8);
                                          auVar20[6] = (char)iVar16;
                                          auVar20[7] = (char)((uint)iVar16 >> 8);
                                          auVar20[8] = (char)uVar17;
                                          auVar20[9] = (char)(uVar17 >> 8);
                                          auVar20[10] = (char)(uVar17 >> 0x20);
                                          auVar20[0xb] = (char)(uVar17 >> 0x28);
                                          auVar20[0xc] = (char)iVar24;
                                          auVar20[0xd] = (char)((uint)iVar24 >> 8);
                                          auVar20[0xe] = (char)iVar25;
                                          auVar20[0xf] = (char)((uint)iVar25 >> 8);
                                          uVar12 = NEON_umaxv(auVar20,2);
                                          if ((uVar12 & 1) != 0) {
                                            return 1;
                                          }
                                          if (param_1 == 0x1cd3) {
                                            return 1;
                                          }
                                          if (uVar13 == 0x1cc0) {
                                            return 1;
                                          }
                                          if (param_1 == 0x1ce1) {
                                            return 1;
                                          }
                                          if (param_1 - 0x1f80 < 0x35) {
                                            return 1;
                                          }
                                          if (param_1 - 0x1f5f < 0x1f) {
                                            return 1;
                                          }
                                          if (param_1 == 0x1f5d) {
                                            return 1;
                                          }
                                          if (uVar13 == 0x1f50) {
                                            return 1;
                                          }
                                          if ((param_1 & 0xfffffffd) == 0x1f59) {
                                            return 1;
                                          }
                                          if ((8 < param_1 - 0x1fb6) ||
                                             ((0x17fU >> (ulong)(param_1 - 0x1fb6 & 0x1f) & 1) == 0)
                                             ) {
                                            iVar14 = -(uint)(param_1 - 0x1fc6 < 7);
                                            iVar15 = -(uint)(param_1 - 0x1fd6 < 6);
                                            iVar16 = -(uint)(param_1 - 0x1fe0 < 0xd);
                                            auVar21[4] = (char)iVar14;
                                            auVar21._0_4_ = -(uint)(param_1 - 0x1fc2 < 3);
                                            auVar21[5] = (char)((uint)iVar14 >> 8);
                                            auVar21[6] = (char)((uint)iVar14 >> 0x10);
                                            auVar21[7] = (char)((uint)iVar14 >> 0x18);
                                            auVar21[8] = (char)iVar15;
                                            auVar21[9] = (char)((uint)iVar15 >> 8);
                                            auVar21[10] = (char)((uint)iVar15 >> 0x10);
                                            auVar21[0xb] = (char)((uint)iVar15 >> 0x18);
                                            auVar21[0xc] = (char)iVar16;
                                            auVar21[0xd] = (char)((uint)iVar16 >> 8);
                                            auVar21[0xe] = (char)((uint)iVar16 >> 0x10);
                                            auVar21[0xf] = (char)((uint)iVar16 >> 0x18);
                                            uVar37 = NEON_umaxv(auVar21,4);
                                            if ((uVar37 & 1) != 0) {
                                              return 1;
                                            }
                                            if (param_1 - 0x1ff2 < 3) {
                                              return 1;
                                            }
                                            if (uVar1 == 0x1fd0) {
                                              return 1;
                                            }
                                            if ((param_1 - 0x1ff6 < 0x19) &&
                                               ((1 << (ulong)(param_1 - 0x1ff6 & 0x1f) & 0x100007fU)
                                                != 0)) {
                                              return 1;
                                            }
                                            if (param_1 == 0x2071) {
                                              return 1;
                                            }
                                            if (param_1 == 0x207f) {
                                              return 1;
                                            }
                                            if (0xc < param_1 - 0x2090) {
                                              if (param_1 == 0x2102) {
                                                return 1;
                                              }
                                              if (param_1 == 0x2107) {
                                                return 1;
                                              }
                                              if (param_1 == 0x2115) {
                                                return 1;
                                              }
                                              if (param_1 - 0x210a < 10) {
                                                return 1;
                                              }
                                              if ((0xf < param_1 - 0x2119) ||
                                                 ((0xa81fU >> (ulong)(param_1 - 0x2119 & 0x1f) & 1)
                                                  == 0)) {
                                                iVar14 = -(uint)(param_1 - 0x212f < 0xb);
                                                iVar15 = -(uint)(param_1 - 0x2145 < 5);
                                                iVar16 = -(uint)(param_1 - 0x2160 < 0x29);
                                                auVar22[4] = (char)iVar14;
                                                auVar22._0_4_ = -(uint)(param_1 - 0x212a < 4);
                                                auVar22[5] = (char)((uint)iVar14 >> 8);
                                                auVar22[6] = (char)((uint)iVar14 >> 0x10);
                                                auVar22[7] = (char)((uint)iVar14 >> 0x18);
                                                auVar22[8] = (char)iVar15;
                                                auVar22[9] = (char)((uint)iVar15 >> 8);
                                                auVar22[10] = (char)((uint)iVar15 >> 0x10);
                                                auVar22[0xb] = (char)((uint)iVar15 >> 0x18);
                                                auVar22[0xc] = (char)iVar16;
                                                auVar22[0xd] = (char)((uint)iVar16 >> 8);
                                                auVar22[0xe] = (char)((uint)iVar16 >> 0x10);
                                                auVar22[0xf] = (char)((uint)iVar16 >> 0x18);
                                                uVar37 = NEON_umaxv(auVar22,4);
                                                if ((uVar37 & 1) != 0) {
                                                  return 1;
                                                }
                                                if (uVar1 == 0x213c) {
                                                  return 1;
                                                }
                                                if (uVar36 == 0x214e) {
                                                  return 1;
                                                }
                                                if (param_1 == 0x2395) {
                                                  return 1;
                                                }
                                                if (param_1 - 0x2336 < 0x45) {
                                                  return 1;
                                                }
                                                bVar40 = NEON_umaxv(CONCAT17(-((param_1 & 0xffffff00
                                                                               ) == 0x2800),
                                                                             CONCAT16(-(param_1 ==
                                                                                       0x26ac),
                                                  CONCAT15(-(param_1 - 0x2d00 < 0x26),
                                                           CONCAT14(-(param_1 - 0x2ceb < 4),
                                                                    CONCAT13(-(param_1 - 0x2c60 <
                                                                              0x85),CONCAT12(-(
                                                  param_1 - 0x2c30 < 0x2f),
                                                  CONCAT11(-(param_1 - 0x2c00 < 0x2f),
                                                           -(param_1 - 0x249c < 0x4e)))))))),1);
                                                if ((bVar40 & 1) != 0) {
                                                  return 1;
                                                }
                                                if (uVar36 == 0x2cf2) {
                                                  return 1;
                                                }
                                                if (param_1 == 0x2d27) {
                                                  return 1;
                                                }
                                                if (param_1 == 0x2d2d) {
                                                  return 1;
                                                }
                                                uVar37 = param_1 & 0xffffffe7;
                                                uVar4 = (uint6)CONCAT14(-(param_1 - 0x3005 < 3),
                                                                        -(uint)(uVar37 - 0x2dc0 < 7)
                                                                       ) & 0xffff0000ffff;
                                                auVar33[1] = -(param_1 - 0x2d6f < 2) |
                                                             -(param_1 - 0x3260 < 0x1c);
                                                auVar33[0] = -(param_1 - 0x2d30 < 0x38) |
                                                             -(param_1 - 0x3220 < 0x30);
                                                auVar33[2] = -(param_1 - 0x2d80 < 0x17) |
                                                             -(param_1 - 0x327f < 0x32);
                                                auVar33[3] = -(CONCAT13((char)(uVar37 >> 0x18),
                                                                        (int3)(CONCAT16((char)(
                                                  uVar37 >> 0x10),
                                                  CONCAT15((char)(uVar37 >> 8),
                                                           CONCAT14((char)uVar37,param_1))) >> 0x20)
                                                  ) - 0x2da0U < 7) | -(param_1 - 0x32c0 < 0xc);
                                                auVar33[4] = (byte)uVar4 |
                                                             -(param_1 - 0x32d0 < 0x2f);
                                                auVar33[5] = (byte)(uVar4 >> 0x20) |
                                                             -(param_1 - 0x3300 < 0x77);
                                                auVar33[6] = -(param_1 - 0x3021 < 9) |
                                                             -(param_1 - 0x337b < 99);
                                                auVar33[7] = -(param_1 - 0x3031 < 5) |
                                                             -(param_1 - 0x33e0 < 0x1f);
                                                auVar33[8] = -(param_1 - 0x3038 < 5);
                                                auVar33[9] = -(param_1 - 0x3041 < 0x56);
                                                auVar33[10] = -(param_1 - 0x309d < 3);
                                                auVar33[0xb] = -(param_1 - 0x30a1 < 0x5a);
                                                auVar33[0xc] = -(param_1 - 0x3105 < 0x29);
                                                auVar33[0xd] = -(param_1 - 0x3131 < 0x5e);
                                                auVar33[0xe] = -(param_1 - 0x3190 < 0x2b);
                                                auVar33[0xf] = -(param_1 - 0x31f0 < 0x2d);
                                                bVar40 = NEON_umaxv(auVar33,1);
                                                if ((bVar40 & 1) != 0) {
                                                  return 1;
                                                }
                                                if (uVar36 == 0x302e) {
                                                  return 1;
                                                }
                                                if (uVar1 == 0x30fc) {
                                                  return 1;
                                                }
                                                if ((int)param_1 < 0x4e00) {
                                                  if (param_1 == 0x3400) {
                                                    return 1;
                                                  }
                                                  uVar37 = 0x4db5;
                                                }
                                                else {
                                                  if (param_1 == 0x4e00) {
                                                    return 1;
                                                  }
                                                  uVar37 = 0x9fcc;
                                                }
                                                if (param_1 == uVar37) {
                                                  return 1;
                                                }
                                                bVar40 = NEON_umaxv(CONCAT17(-((char)((param_1 - 
                                                  0xa722 < 0x66) * -0x80) < '\0'),
                                                  CONCAT16(-((char)((param_1 - 0xa6f2 < 6) * -0x80)
                                                            < '\0'),CONCAT15(-((char)((param_1 - 
                                                  0xa6a0 < 0x50) * -0x80) < '\0'),
                                                  CONCAT14(-((char)((param_1 - 0xa680 < 0x18) *
                                                                   -0x80) < '\0'),
                                                           CONCAT13(-((char)((-(param_1 - 0xa640 <
                                                                               0x2f) | -(param_1 - 
                                                  0xa803 < 3)) << 7) < '\0'),
                                                  CONCAT12(-((char)((-(param_1 - 0xa610 < 0x1c) |
                                                                    -(param_1 - 43000 < 10)) << 7) <
                                                            '\0'),CONCAT11(-((char)((-(param_1 - 
                                                  0xa4d0 < 0x13d) | -(param_1 - 0xa7a0 < 0xb)) << 7)
                                                  < '\0'),-((char)((-(param_1 - 0xa000 < 0x48d) |
                                                                   -(param_1 - 0xa789 < 6)) << 7) <
                                                           '\0')))))))),1);
                                                if ((bVar40 & 1) != 0) {
                                                  return 1;
                                                }
                                                if (param_1 - 0xa807 < 4) {
                                                  return 1;
                                                }
                                                if (uVar1 == 0xa790) {
                                                  return 1;
                                                }
                                                uVar4 = (uint6)CONCAT14(-(param_1 - 0xa900 < 0x26),
                                                                        -(uint)(param_1 - 0xa8f2 <
                                                                               10)) & 0xffff0000ffff
                                                ;
                                                uVar17 = (uint6)CONCAT14(-(param_1 - 0xaa33 < 2),
                                                                         -(uint)(param_1 - 0xaa2f <
                                                                                2)) & 0xffff0000ffff
                                                ;
                                                auVar34[1] = -((char)((-(param_1 - 0xa840 < 0x34) |
                                                                      -(uVar36 == 0xa9b4)) << 7) <
                                                              '\0');
                                                auVar34[0] = -((char)((-(param_1 - 0xa80c < 0x19) |
                                                                      -(uVar36 == 0xa952)) << 7) <
                                                              '\0');
                                                auVar34[2] = -((char)((-(param_1 - 0xa880 < 0x44) |
                                                                      -(uVar36 == 0xa9ba)) << 7) <
                                                              '\0');
                                                auVar34[3] = -((char)((-(param_1 - 0xa8ce < 0xc) |
                                                                      -(uVar36 == 0xa9de)) << 7) <
                                                              '\0');
                                                auVar34[4] = -((char)((char)uVar4 << 7) < '\0');
                                                auVar34[5] = -((char)((char)(uVar4 >> 0x20) << 7) <
                                                              '\0');
                                                auVar34[6] = -((char)((param_1 - 0xa92e < 0x19) *
                                                                     -0x80) < '\0');
                                                auVar34[7] = -((char)((param_1 - 0xa95f < 0x1e) *
                                                                     -0x80) < '\0');
                                                auVar34[8] = -((char)((param_1 - 0xa983 < 0x30) *
                                                                     -0x80) < '\0');
                                                auVar34[9] = -((char)((param_1 - 0xa9bd < 0x11) *
                                                                     -0x80) < '\0');
                                                auVar34[10] = -((char)((param_1 - 0xa9cf < 0xb) *
                                                                      -0x80) < '\0');
                                                auVar34[0xb] = -((char)((param_1 - 0xaa00 < 0x29) *
                                                                       -0x80) < '\0');
                                                auVar34[0xc] = -((char)((char)uVar17 << 7) < '\0');
                                                auVar34[0xd] = -((char)((char)(uVar17 >> 0x20) << 7)
                                                                < '\0');
                                                auVar34[0xe] = -((char)((param_1 - 0xaa40 < 3) *
                                                                       -0x80) < '\0');
                                                auVar34[0xf] = -((char)((param_1 == 0xa827) * -0x80)
                                                                < '\0');
                                                bVar40 = NEON_umaxv(auVar34,1);
                                                if ((bVar40 & 1) != 0) {
                                                  return 1;
                                                }
                                                if (uVar13 == 0xa830) {
                                                  return 1;
                                                }
                                                if ((9 < param_1 - 0xaa44) ||
                                                   ((0x2ffU >> (ulong)(param_1 - 0xaa44 & 0x1f) & 1)
                                                    == 0)) {
                                                  if (param_1 - 0xaa80 < 0x30) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0xaa50 < 10) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0xaa5c < 0x20) {
                                                    return 1;
                                                  }
                                                  if ((0x11 < param_1 - 0xaab1) ||
                                                     ((0x29f31U >> (ulong)(param_1 - 0xaab1 & 0x1f)
                                                      & 1) == 0)) {
                                                    uVar13 = param_1 & 0xfffffff7;
                                                    iVar14 = -(uint)(param_1 - 0xaaee < 8);
                                                    iVar15 = -(uint)(CONCAT13((char)(uVar13 >> 0x18)
                                                                              ,(int3)(CONCAT16((char
                                                  )(uVar13 >> 0x10),
                                                  CONCAT15((char)(uVar13 >> 8),
                                                           CONCAT14((char)uVar13,param_1))) >> 0x20)
                                                  ) - 0xab01U < 6);
                                                  iVar16 = -(uint)(CONCAT13(uVar38,(int3)(CONCAT16(
                                                  uVar39,CONCAT15(uVar41,CONCAT14((char)param_1,
                                                                                  param_1))) >> 0x20
                                                  )) - 0xab11U < 6);
                                                  iVar23 = -(uint)(param_1 - 0xabc0 < 0x25);
                                                  iVar24 = -(uint)(param_1 - 0xabe9 < 4);
                                                  iVar25 = -(uint)(param_1 - 0xabf0 < 10);
                                                  uVar17 = CONCAT15((char)((uint)iVar23 >> 8),
                                                                    CONCAT14((char)iVar23,
                                                                             -(uint)(uVar13 - 0xab20
                                                                                    < 7))) &
                                                           0xffff0000ffff;
                                                  uVar4 = CONCAT15((char)((uint)iVar14 >> 8),
                                                                   CONCAT14((char)iVar14,
                                                                            -(uint)(param_1 - 0xaadb
                                                                                   < 0x11))) &
                                                          0xffff0000ffff;
                                                  auVar35[2] = (char)(uVar4 >> 0x20);
                                                  auVar35._0_2_ = (short)uVar4;
                                                  auVar35[3] = (char)(uVar4 >> 0x28);
                                                  auVar35[4] = (char)iVar15;
                                                  auVar35[5] = (char)((uint)iVar15 >> 8);
                                                  auVar35[6] = (char)iVar16;
                                                  auVar35[7] = (char)((uint)iVar16 >> 8);
                                                  auVar35[8] = (char)uVar17;
                                                  auVar35[9] = (char)(uVar17 >> 8);
                                                  auVar35[10] = (char)(uVar17 >> 0x20);
                                                  auVar35[0xb] = (char)(uVar17 >> 0x28);
                                                  auVar35[0xc] = (char)iVar24;
                                                  auVar35[0xd] = (char)((uint)iVar24 >> 8);
                                                  auVar35[0xe] = (char)iVar25;
                                                  auVar35[0xf] = (char)((uint)iVar25 >> 8);
                                                  uVar12 = NEON_umaxv(auVar35,2);
                                                  if ((uVar12 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if (uVar36 == 0xabe6) {
                                                    return 1;
                                                  }
                                                  if (param_1 == 0xac00) {
                                                    return 1;
                                                  }
                                                  if (param_1 == 0xd7a3) {
                                                    return 1;
                                                  }
                                                  if (0x16 < param_1 - 0xd7b0) {
                                                    uVar13 = param_1 & 0xfffffff6;
                                                    uVar4 = (uint6)CONCAT14(-(param_1 - 0xfa70 <
                                                                             0x6a),-(uint)(param_1 -
                                                                                           0xf8ff < 
                                                  0x16f)) & 0xffff0000ffff;
                                                  uVar17 = (uint6)CONCAT14(-(param_1 - 0xffda < 3),
                                                                           -(uint)(param_1 - 0xffd2
                                                                                  < 6)) &
                                                           0xffff0000ffff;
                                                  auVar7[1] = -(param_1 - 0xdb7f < 2);
                                                  auVar7[0] = -(param_1 - 0xd7cb < 0x31);
                                                  auVar7[2] = -(param_1 - 0xdbff < 2);
                                                  auVar7[3] = -(param_1 - 0xdfff < 2);
                                                  auVar7[4] = (char)uVar4;
                                                  auVar7[5] = (char)(uVar4 >> 0x20);
                                                  auVar7[6] = -(param_1 - 0xfb00 < 7);
                                                  auVar7[7] = -(param_1 - 0xfb13 < 5);
                                                  auVar7[8] = -(param_1 - 0xff21 < 0x1a);
                                                  auVar7[9] = -(param_1 - 0xff41 < 0x1a);
                                                  auVar7[10] = -(param_1 - 0xff66 < 0x59);
                                                  auVar7[0xb] = -(CONCAT13((char)(uVar13 >> 0x18),
                                                                           (int3)(CONCAT16((char)(
                                                  uVar13 >> 0x10),
                                                  CONCAT15((char)(uVar13 >> 8),
                                                           CONCAT14((char)uVar13,param_1))) >> 0x20)
                                                  ) - 0xffc2U < 6);
                                                  auVar7[0xc] = (char)uVar17;
                                                  auVar7[0xd] = (char)(uVar17 >> 0x20);
                                                  auVar7[0xe] = -(param_1 - 0x10000 < 0xc);
                                                  auVar7[0xf] = -(param_1 - 0x1000d < 0x1a);
                                                  bVar40 = NEON_umaxv(auVar7,1);
                                                  if ((bVar40 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x10028 < 0x13) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x1003f < 0xf) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x10050 < 0xe) {
                                                    return 1;
                                                  }
                                                  if (param_1 == 0xd800) {
                                                    return 1;
                                                  }
                                                  if (uVar36 == 0x1003c) {
                                                    return 1;
                                                  }
                                                  bVar40 = NEON_umaxv(CONCAT17(-((char)((param_1 - 
                                                  0x10330 < 0x1b) * -0x80) < '\0'),
                                                  CONCAT16(-((char)((param_1 - 0x10300 < 0x1f) *
                                                                   -0x80) < '\0'),
                                                           CONCAT15(-((char)((param_1 - 0x102a0 <
                                                                             0x31) * -0x80) < '\0'),
                                                                    CONCAT14(-((char)((param_1 - 
                                                  0x10280 < 0x1d) * -0x80) < '\0'),
                                                  CONCAT13(-((char)((-(param_1 - 66000 < 0x2d) |
                                                                    -(param_1 - 0x10400 < 0x9e)) <<
                                                                   7) < '\0'),
                                                           CONCAT12(-((char)((-(param_1 - 0x10137 <
                                                                               9) | -(param_1 - 
                                                  0x103c8 < 0xe)) << 7) < '\0'),
                                                  CONCAT11(-((char)((-(param_1 - 0x10107 < 0x2d) |
                                                                    -(param_1 - 0x1039f < 0x25)) <<
                                                                   7) < '\0'),
                                                           -((char)((-(param_1 - 0x10080 < 0x7b) |
                                                                    -(param_1 - 0x10380 < 0x1e)) <<
                                                                   7) < '\0')))))))),1);
                                                  if ((bVar40 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if ((param_1 & 0xfffffffd) == 0x10100) {
                                                    return 1;
                                                  }
                                                  if (uVar1 == 0x10320) {
                                                    return 1;
                                                  }
                                                  iVar23 = -(uint)(param_1 - 0x110b7 < 2);
                                                  iVar24 = -(uint)(param_1 - 0x110bb < 7);
                                                  iVar25 = -(uint)(param_1 - 0x110d0 < 0x19);
                                                  iVar14 = -(uint)(param_1 - 0x11002 < 0x36);
                                                  iVar15 = -(uint)(param_1 - 0x11047 < 7);
                                                  iVar16 = -(uint)(param_1 - 0x11066 < 10);
                                                  uVar17 = CONCAT15((char)((uint)iVar23 >> 8),
                                                                    CONCAT14((char)iVar23,
                                                                             -(uint)(param_1 - 
                                                  0x11082 < 0x31))) & 0xffff0000ffff;
                                                  uVar4 = CONCAT15((char)((uint)iVar14 >> 8),
                                                                   CONCAT14((char)iVar14,
                                                                            -(uint)(param_1 - 
                                                  0x104a0 < 10))) & 0xffff0000ffff;
                                                  auVar8[2] = (char)(uVar4 >> 0x20);
                                                  auVar8._0_2_ = (short)uVar4;
                                                  auVar8[3] = (char)(uVar4 >> 0x28);
                                                  auVar8[4] = (char)iVar15;
                                                  auVar8[5] = (char)((uint)iVar15 >> 8);
                                                  auVar8[6] = (char)iVar16;
                                                  auVar8[7] = (char)((uint)iVar16 >> 8);
                                                  auVar8[8] = (char)uVar17;
                                                  auVar8[9] = (char)(uVar17 >> 8);
                                                  auVar8[10] = (char)(uVar17 >> 0x20);
                                                  auVar8[0xb] = (char)(uVar17 >> 0x28);
                                                  auVar8[0xc] = (char)iVar24;
                                                  auVar8[0xd] = (char)((uint)iVar24 >> 8);
                                                  auVar8[0xe] = (char)iVar25;
                                                  auVar8[0xf] = (char)((uint)iVar25 >> 8);
                                                  uVar12 = NEON_umaxv(auVar8,2);
                                                  if ((uVar12 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x110f0 < 10) {
                                                    return 1;
                                                  }
                                                  if (param_1 == 0x11000) {
                                                    return 1;
                                                  }
                                                  iVar14 = -(uint)(param_1 - 0x11136 < 0xe);
                                                  iVar15 = -(uint)(param_1 - 0x11182 < 0x34);
                                                  iVar16 = -(uint)(param_1 - 0x111bf < 10);
                                                  auVar9[4] = (char)iVar14;
                                                  auVar9._0_4_ = -(uint)(param_1 - 0x11103 < 0x24);
                                                  auVar9[5] = (char)((uint)iVar14 >> 8);
                                                  auVar9[6] = (char)((uint)iVar14 >> 0x10);
                                                  auVar9[7] = (char)((uint)iVar14 >> 0x18);
                                                  auVar9[8] = (char)iVar15;
                                                  auVar9[9] = (char)((uint)iVar15 >> 8);
                                                  auVar9[10] = (char)((uint)iVar15 >> 0x10);
                                                  auVar9[0xb] = (char)((uint)iVar15 >> 0x18);
                                                  auVar9[0xc] = (char)iVar16;
                                                  auVar9[0xd] = (char)((uint)iVar16 >> 8);
                                                  auVar9[0xe] = (char)((uint)iVar16 >> 0x10);
                                                  auVar9[0xf] = (char)((uint)iVar16 >> 0x18);
                                                  uVar13 = NEON_umaxv(auVar9,4);
                                                  if ((uVar13 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x111d0 < 10) {
                                                    return 1;
                                                  }
                                                  if (param_1 == 0x1112c) {
                                                    return 1;
                                                  }
                                                  if (param_1 == 0x116ac) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x11680 < 0x2b) {
                                                    return 1;
                                                  }
                                                  if ((param_1 - 0x116ae < 9) &&
                                                     ((1 << (ulong)(param_1 - 0x116ae & 0x1f) &
                                                      0x103U) != 0)) {
                                                    return 1;
                                                  }
                                                  uVar17 = (uint6)CONCAT14(-(param_1 - 0x16f00 <
                                                                            0x45),-(uint)(param_1 - 
                                                  0x16800 < 0x239)) & 0xffff0000ffff;
                                                  uVar4 = (uint6)CONCAT14(-(param_1 - 0x1d18c < 0x1e
                                                                           ),-(uint)(param_1 - 
                                                  0x1d183 < 2)) & 0xffff0000ffff;
                                                  auVar10[1] = -(param_1 - 0x12000 < 0x36f);
                                                  auVar10[0] = -(param_1 - 0x116c0 < 10);
                                                  auVar10[2] = -(param_1 - 0x12400 < 99);
                                                  auVar10[3] = -(param_1 - 0x13000 < 0x42f);
                                                  auVar10[4] = (char)uVar17;
                                                  auVar10[5] = (char)(uVar17 >> 0x20);
                                                  auVar10[6] = -(param_1 - 0x16f50 < 0x2f);
                                                  auVar10[7] = -(param_1 - 0x16f93 < 0xd);
                                                  auVar10[8] = -(param_1 - 0x1d000 < 0xf6);
                                                  auVar10[9] = -(param_1 - 0x1d100 < 0x27);
                                                  auVar10[10] = -(param_1 - 0x1d129 < 0x3e);
                                                  auVar10[0xb] = -(param_1 - 0x1d16a < 9);
                                                  auVar10[0xc] = (char)uVar4;
                                                  auVar10[0xd] = (char)(uVar4 >> 0x20);
                                                  auVar10[0xe] = -(param_1 - 0x1d1ae < 0x30);
                                                  auVar10[0xf] = -(param_1 - 0x1d360 < 0x12);
                                                  bVar40 = NEON_umaxv(auVar10,1);
                                                  if ((bVar40 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x1d400 < 0x55) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x1d456 < 0x47) {
                                                    return 1;
                                                  }
                                                  if (uVar1 == 0x12470) {
                                                    return 1;
                                                  }
                                                  if (uVar36 == 0x1b000) {
                                                    return 1;
                                                  }
                                                  if ((0xe < param_1 - 0x1d49e) ||
                                                     ((0x7993U >> (ulong)(param_1 - 0x1d49e & 0x1f)
                                                      & 1) == 0)) {
                                                    iVar23 = -(uint)(param_1 - 0x1d516 < 7);
                                                    iVar24 = -(uint)(param_1 - 0x1d51e < 0x1c);
                                                    iVar25 = -(uint)(param_1 - 0x1d53b < 4);
                                                    iVar14 = -(uint)(param_1 - 0x1d4bd < 7);
                                                    iVar15 = -(uint)(param_1 - 0x1d4c5 < 0x41);
                                                    iVar16 = -(uint)(param_1 - 0x1d507 < 4);
                                                    uVar17 = CONCAT15((char)((uint)iVar23 >> 8),
                                                                      CONCAT14((char)iVar23,
                                                                               -(uint)(param_1 - 
                                                  0x1d50d < 8))) & 0xffff0000ffff;
                                                  uVar4 = CONCAT15((char)((uint)iVar14 >> 8),
                                                                   CONCAT14((char)iVar14,
                                                                            -(uint)(param_1 - 
                                                  0x1d4ae < 0xc))) & 0xffff0000ffff;
                                                  auVar11[2] = (char)(uVar4 >> 0x20);
                                                  auVar11._0_2_ = (short)uVar4;
                                                  auVar11[3] = (char)(uVar4 >> 0x28);
                                                  auVar11[4] = (char)iVar15;
                                                  auVar11[5] = (char)((uint)iVar15 >> 8);
                                                  auVar11[6] = (char)iVar16;
                                                  auVar11[7] = (char)((uint)iVar16 >> 8);
                                                  auVar11[8] = (char)uVar17;
                                                  auVar11[9] = (char)(uVar17 >> 8);
                                                  auVar11[10] = (char)(uVar17 >> 0x20);
                                                  auVar11[0xb] = (char)(uVar17 >> 0x28);
                                                  auVar11[0xc] = (char)iVar24;
                                                  auVar11[0xd] = (char)((uint)iVar24 >> 8);
                                                  auVar11[0xe] = (char)iVar25;
                                                  auVar11[0xf] = (char)((uint)iVar25 >> 8);
                                                  uVar12 = NEON_umaxv(auVar11,2);
                                                  if ((uVar12 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if (param_1 == 0x1d4bb) {
                                                    return 1;
                                                  }
                                                  if ((6 < param_1 - 0x1d540) ||
                                                     ((0x5fU >> (ulong)(param_1 - 0x1d540 & 0x1f) &
                                                      1) == 0)) {
                                                    bVar40 = NEON_umaxv(CONCAT17(-((char)((param_1 -
                                                                                           0x1d7c4 <
                                                                                          8) * -0x80
                                                                                         ) < '\0'),
                                                                                 CONCAT16(-((char)((
                                                  param_1 - 0x1d78a < 0x39) * -0x80) < '\0'),
                                                  CONCAT15(-((char)((param_1 - 0x1d750 < 0x39) *
                                                                   -0x80) < '\0'),
                                                           CONCAT14(-((char)((param_1 - 0x1d716 <
                                                                             0x39) * -0x80) < '\0'),
                                                                    CONCAT13(-((char)((-(param_1 - 
                                                  0x1d6dc < 0x39) | -(param_1 - 0x1f1e6 < 0x1d)) <<
                                                  7) < '\0'),
                                                  CONCAT12(-((char)((-(param_1 - 0x1d6a8 < 0x33) |
                                                                    -(param_1 - 0x1f170 < 0x2b)) <<
                                                                   7) < '\0'),
                                                           CONCAT11(-((char)((-(param_1 - 0x1d552 <
                                                                               0x154) |
                                                                             -(param_1 - 0x1f130 <
                                                                              0x3a)) << 7) < '\0'),
                                                                    -((char)((-(param_1 - 0x1d54a <
                                                                               7) | -(param_1 - 
                                                  0x1f110 < 0x1f)) << 7) < '\0')))))))),1);
                                                  if ((bVar40 & 1) != 0) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x1f210 < 0x2b) {
                                                    return 1;
                                                  }
                                                  if (param_1 - 0x1f240 < 9) {
                                                    return 1;
                                                  }
                                                  if ((int)param_1 < 0x2a700) {
                                                    if (param_1 - 0x1f250 < 2) {
                                                      return 1;
                                                    }
                                                    if (param_1 == 0x20000) {
                                                      return 1;
                                                    }
                                                    uVar36 = 0xa6d6;
                                                  }
                                                  else if ((int)param_1 < 0x2b740) {
                                                    if (param_1 == 0x2a700) {
                                                      return 1;
                                                    }
                                                    uVar36 = 0xb734;
                                                  }
                                                  else {
                                                    if (param_1 == 0x2b740) {
                                                      return 1;
                                                    }
                                                    uVar36 = 0xb81d;
                                                  }
                                                  if (param_1 == (uVar36 | 0x20000)) {
                                                    return 1;
                                                  }
                                                  if (0x21d < param_1 - 0x2f800) {
                                                    if ((int)param_1 < 0x100000) {
                                                      if (param_1 == 0xf0000) {
                                                        return 1;
                                                      }
                                                      uVar36 = 0xffffd;
                                                    }
                                                    else {
                                                      if (param_1 == 0x100000) {
                                                        return 1;
                                                      }
                                                      uVar36 = 0x10fffd;
                                                    }
                                                    if (param_1 == uVar36) {
                                                      return 1;
                                                    }
                                                    return 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


// ===== -[NSMutableAttributedString(Italic)_fixItalicAttributeInRange:] @ 00033e9c =====

void __NSMutableAttributedString_Italic__fixItalicAttributeInRange__
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  objc_stub::fixFontAttributeInRange_(param_1);
  local_58 = PTR___NSConcreteStackBlock_0005ebe0;
  local_50 = 0xc2000000;
  local_48 = ___63__NSMutableAttributedString_Italic__fixItalicAttributeInRange___block_invoke;
  puStack_40 = &___block_descriptor_40_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_38 = param_1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,*(undefined8 *)PTR__NSFontAttributeName_0005ec48,param_3,param_4,0,&local_58);
  return;
}


// ===== ___63-[NSMutableAttributedString(Italic)_fixItalicAttributeInRange:]_block_invoke @ 00033f28 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___63__NSMutableAttributedString_Italic__fixItalicAttributeInRange___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  float fVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::fontName(param_2);
    IVar1 = objc_stub::isEqualToString_(IVar1,&cf_AppleColorEmoji);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::fontDescriptor(param_2);
      IVar1 = objc_stub::symbolicTraits(IVar1);
      if ((IVar1 & 1) == 0) {
        IVar1 = objc_stub::transform((ID)&_OBJC_CLASS___NSAffineTransform);
        objc_stub::pointSize(param_2);
        objc_stub::scaleBy_(IVar1);
        fVar3 = (float)_acosf(0);
        fVar3 = (float)_tanf((fVar3 * -14.0) / 90.0);
        IVar2 = objc_stub::transform((ID)&_OBJC_CLASS___NSAffineTransform);
        uStack_98 = 0;
        local_a0 = 0x3ff0000000000000;
        local_80 = 0;
        uStack_78 = 0;
        local_88 = 0x3ff0000000000000;
        local_90 = (double)-fVar3;
        objc_stub::setTransformStruct_(IVar2,&local_a0);
        objc_stub::appendTransform_(IVar1,IVar2);
        IVar2 = objc_stub::fontDescriptor(param_2);
        IVar1 = objc_stub::fontWithDescriptor_textTransform_((ID)&_OBJC_CLASS___NSFont,IVar2,IVar1);
        objc_stub::addAttribute_value_range_
                  (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar1,
                   param_3,param_4);
      }
    }
  }
  return 0;
}


// ===== ___72-[MDTableTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 000341e0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
___72__MDTableTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar1 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),param_2,param_3);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::length(IVar1);
  objc_stub::fixAttributesInRange_(IVar1,0,IVar2);
  uVar3 = *(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30;
  IVar2 = objc_stub::length(IVar1);
  local_78 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = 0xc2000000;
  local_68 = 
  ___72__MDTableTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2;
  puStack_60 = &___block_descriptor_40_e8_32s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_58 = IVar1;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_(IVar1,uVar3,0,IVar2,0,&local_78);
  IVar2 = _objc_alloc(&objc::class_t::MDTableTextAttachment);
  IVar1 = objc_stub::initWithRepresentedAttributedText_(IVar2,IVar1);
  objc_stub::maxTextContainerWidth(*(ID *)(param_1 + 0x28));
  objc_stub::setMaxTextContainerWidth_(IVar1);
  objc_stub::updateAttachmentImage(IVar1);
  IVar1 = objc_stub::attachmentAttributedString(IVar1);
  IVar1 = objc_stub::mutableCopy(IVar1);
  objc_stub::replaceCharactersInRange_withAttributedString_
            (*(ID *)(param_1 + 0x20),param_2,param_3,IVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,param_3,IVar1);
  return 0;
}


// ===== ___72-[MDTableTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke_2 @ 00034370 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___72__MDTableTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if ((param_2 != 0) && (IVar1 = objc_stub::isFileBacked(param_2), (int)IVar1 != 0)) {
    IVar1 = objc_stub::representedAttributedText(param_2);
    objc_stub::replaceCharactersInRange_withAttributedString_
              (*(ID *)(param_1 + 0x20),param_3,param_4,IVar1);
  }
  return 0;
}


// ===== -[NSMutableParagraphStyle(CenteredLineHeight)_setCenteredLineHeightMultiplier:forFont:] @ 000343f4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void __NSMutableParagraphStyle_CenteredLineHeight__setCenteredLineHeightMultiplier_forFont__
               (double param_1,ID param_2,undefined8 param_3,ID param_4)

{
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar1;
  
  objc_stub::pointSize(param_4);
  objc_stub::calculatedLineHeight(param_4);
  dVar1 = (double)(long)(param_1 * extraout_d0);
  if (dVar1 <= extraout_d0_00) {
    dVar1 = extraout_d0_00;
  }
  objc_stub::setMinimumLineHeight_(param_2,dVar1);
  objc_stub::minimumLineHeight(param_2);
  objc_stub::lineSpacingForLineHeight_font_(param_2,param_4);
  objc_stub::setLineSpacing_(param_2,(long)extraout_d0_01);
  return;
}


// ===== -[NSMutableParagraphStyle(CenteredLineHeight)_lineSpacingForLineHeight:font:] @ 00034474 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
__NSMutableParagraphStyle_CenteredLineHeight__lineSpacingForLineHeight_font__
          (undefined8 param_1,undefined8 param_2,ID param_3)

{
  objc_stub::ascender(param_3);
  objc_stub::descender(param_3);
  objc_stub::leading(param_3);
  return 0;
}


// ===== ___76-[MDLayoutManager(Drawing)_drawIndentedCodeBackgroundForGlyphRange:atPoint:]_block_invoke @ 000345e4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___76__MDLayoutManager_Drawing__drawIndentedCodeBackgroundForGlyphRange_atPoint___block_invoke
               (undefined1 param_1 [16],double param_2,undefined1 param_3 [16],undefined8 param_4,
               long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar3;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double dVar4;
  double dVar5;
  
  if (param_6 != 0) {
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_5 + 0x20),param_7,param_8,0);
    IVar2 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
    IVar2 = objc_stub::attribute_atIndex_effectiveRange_(IVar2,&cf_MDCodeBackgroundColor,param_7,0);
    objc_stub::boundingRectForGlyphRange_inTextContainer_
              (*(ID *)(param_5 + 0x20),IVar1,extraout_x1,*(undefined8 *)(param_5 + 0x28));
    objc_stub::size(*(ID *)(param_5 + 0x28));
    objc_stub::lineFragmentPadding(*(ID *)(param_5 + 0x28));
    dVar5 = extraout_d0_00 - extraout_d0_01 * 2.0;
    _CGRectIntegral(extraout_d0,param_2,dVar5,param_4);
    dVar3 = *(double *)(param_5 + 0x38);
    objc_stub::lineFragmentPadding(*(ID *)(param_5 + 0x28));
    objc_stub::defaultParagraphIndent(*(ID *)(param_5 + 0x20));
    dVar4 = *(double *)(param_5 + 0x30);
    objc_stub::defaultParagraphIndent(*(ID *)(param_5 + 0x20));
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    IVar1 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                      ((ID)&_OBJC_CLASS___NSBezierPath,extraout_d0_02 + extraout_d0_03 + dVar4,
                       dVar3 + param_2,dVar5 - extraout_d0_04 * 2.0,param_4,extraout_d0_05 * 3.0);
    objc_stub::setFill(IVar2);
    objc_stub::fill(IVar1);
    return 0;
  }
  return param_5;
}


// ===== ___74-[MDLayoutManager(Drawing)_drawFencedCodeBackgroundForGlyphRange:atPoint:]_block_invoke @ 00034820 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___74__MDLayoutManager_Drawing__drawFencedCodeBackgroundForGlyphRange_atPoint___block_invoke
          (long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  ID IVar2;
  double extraout_d0;
  
  if (param_2 != 0) {
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::paragraphStyleAtIndex_(IVar2,param_3);
    objc_stub::minimumLineHeight(IVar2);
    if (0.0 < extraout_d0 && param_4 != 0) {
      do {
        IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
        IVar2 = objc_stub::string(IVar2);
        IVar2 = objc_stub::characterAtIndex_(IVar2,param_3 + param_4 + -1);
        iVar1 = (int)IVar2;
        if (((iVar1 != 10) && (iVar1 != 0x20)) && ((iVar1 == 0 || (iVar1 != 0xfffc)))) {
          IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
          IVar2 = objc_stub::attribute_atIndex_effectiveRange_
                            (IVar2,&cf_MDCodeBackgroundColor,param_3,0);
          objc_stub::drawBlockBackgroundForCharRange_atPoint_color_
                    (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30),param_3,param_4,IVar2);
          return 0;
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return 0;
}


// ===== ___74-[MDLayoutManager(Drawing)_drawInlineCodeBackgroundForGlyphRange:atPoint:]_block_invoke @ 00034ab8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___74__MDLayoutManager_Drawing__drawInlineCodeBackgroundForGlyphRange_atPoint___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  long lVar3;
  ID IVar4;
  double extraout_d0;
  double extraout_d0_00;
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
  if (param_2 != 0) {
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_1 + 0x20),param_3,param_4,0);
    IVar1 = objc_stub::rectArrayForInlineDrawingAtGlyphRange_inTextContainer_atPoint_
                      (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x38),IVar1,extraout_x1,
                       *(undefined8 *)(param_1 + 0x28));
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::nonHiddenFontAtIndex_(IVar2,param_3);
    objc_stub::basePointSize(*(ID *)(param_1 + 0x20));
    objc_stub::pointSize(IVar2);
    IVar1 = objc_stub::bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl_
                      (*(ID *)(param_1 + 0x20),0,extraout_d0 * 1.5,extraout_d0_00 / 5.0,IVar1,1,0);
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::attribute_atIndex_effectiveRange_(IVar2,&cf_MDCodeBackgroundColor,param_3,0);
    objc_stub::setFill(IVar2);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
    if (IVar2 != 0) {
      lVar3 = *local_120;
      do {
        IVar4 = 0;
        do {
          if (*local_120 != lVar3) {
            _objc_enumerationMutation(IVar1);
          }
          objc_stub::fill(*(ID *)(lStack_128 + IVar4 * 8));
          IVar4 = IVar4 + 1;
        } while (IVar2 != IVar4);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_e8,0x10);
      } while (IVar2 != 0);
    }
    param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1);
}


// ===== ___73-[MDLayoutManager(Drawing)_drawMathBlockBackgroundForGlyphRange:atPoint:]_block_invoke @ 00034d88 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___73__MDLayoutManager_Drawing__drawMathBlockBackgroundForGlyphRange_atPoint___block_invoke
          (long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  ID IVar2;
  double extraout_d0;
  
  if (param_2 != 0) {
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::paragraphStyleAtIndex_(IVar2,param_3);
    objc_stub::minimumLineHeight(IVar2);
    if (0.0 < extraout_d0 && param_4 != 0) {
      do {
        IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
        IVar2 = objc_stub::string(IVar2);
        IVar2 = objc_stub::characterAtIndex_(IVar2,param_3 + param_4 + -1);
        iVar1 = (int)IVar2;
        if (((iVar1 != 10) && (iVar1 != 0x20)) && ((iVar1 == 0 || (iVar1 != 0xfffc)))) {
          IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
          IVar2 = objc_stub::attribute_atIndex_effectiveRange_
                            (IVar2,&cf_MDCodeBackgroundColor,param_3,0);
          objc_stub::drawBlockBackgroundForCharRange_atPoint_color_
                    (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30),param_3,param_4,IVar2);
          return 0;
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return 0;
}


// ===== ___74-[MDLayoutManager(Drawing)_drawInlineMathBackgroundForGlyphRange:atPoint:]_block_invoke @ 00035020 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___74__MDLayoutManager_Drawing__drawInlineMathBackgroundForGlyphRange_atPoint___block_invoke
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4,
               long param_5,long param_6,long param_7,long param_8)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_x1;
  long lVar4;
  float extraout_s0;
  double extraout_d0;
  undefined8 extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  undefined8 uVar5;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_0005ec00;
  if (param_6 != 0) {
    IVar1 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
    IVar1 = objc_stub::fontAtIndex_(IVar1,param_7);
    objc_stub::pointSize(IVar1);
    if (1.0 <= extraout_d0) {
      IVar1 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
      IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                        (IVar1,&cf_MDCodeBackgroundColor,param_7,0);
      IVar2 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                        (*(ID *)(param_5 + 0x20),param_7,param_8 + -1,0);
      uVar5 = *(undefined8 *)(param_5 + 0x38);
      IVar2 = objc_stub::rectArrayForInlineDrawingAtGlyphRange_inTextContainer_atPoint_
                        (*(ID *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x30),uVar5,IVar2,
                         extraout_x1,*(undefined8 *)(param_5 + 0x28));
      IVar2 = objc_stub::mutableCopy(IVar2);
      IVar3 = objc_stub::lastObject(IVar2);
      objc_stub::CGRectValue(IVar3);
      IVar3 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
      IVar3 = objc_stub::attribute_atIndex_effectiveRange_
                        (IVar3,*(undefined8 *)PTR__NSKernAttributeName_0005ec88,
                         param_8 + param_7 + -3,0);
      objc_stub::floatValue(IVar3);
      objc_stub::removeLastObject(IVar2);
      IVar3 = objc_stub::valueWithCGRect_
                        ((ID)&_OBJC_CLASS___NSValue,extraout_d0_00,uVar5,
                         param_3 - (double)extraout_s0,param_4);
      objc_stub::addObject_(IVar2,IVar3);
      IVar3 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
      IVar3 = objc_stub::nonHiddenFontAtIndex_(IVar3,param_7);
      objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
      objc_stub::pointSize(IVar3);
      IVar2 = objc_stub::bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl_
                        (*(ID *)(param_5 + 0x20),0,extraout_d0_01 * 1.5,extraout_d0_02 / 5.0,IVar2,1
                         ,0);
      objc_stub::setFill(IVar1);
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      local_140 = (long *)0x0;
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_150,auStack_108,0x10);
      if (IVar1 != 0) {
        lVar4 = *local_140;
        do {
          IVar3 = 0;
          do {
            if (*local_140 != lVar4) {
              _objc_enumerationMutation(IVar2);
            }
            objc_stub::fill(*(ID *)(lStack_148 + IVar3 * 8));
            IVar3 = IVar3 + 1;
          } while (IVar1 != IVar3);
          IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar2,&local_150,auStack_108,0x10);
        } while (IVar1 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== ___68-[MDLayoutManager(Drawing)_drawTagsBackgroundForGlyphRange:atPoint:]_block_invoke @ 00035490 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___68__MDLayoutManager_Drawing__drawTagsBackgroundForGlyphRange_atPoint___block_invoke
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  long lVar3;
  ID IVar4;
  double extraout_d0;
  undefined8 extraout_d0_00;
  double in_d3;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_0005ec00;
  if (param_2 != 0) {
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_1 + 0x20),param_3,param_4,0);
    IVar1 = objc_stub::rectArrayForInlineDrawingAtGlyphRange_inTextContainer_atPoint_
                      (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x38),IVar1,extraout_x1,
                       *(undefined8 *)(param_1 + 0x28));
    objc_stub::basePointSize(*(ID *)(param_1 + 0x20));
    objc_stub::basePointSize(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::firstObject(IVar1);
    objc_stub::CGRectValue(IVar2);
    IVar2 = objc_stub::isRTLAtIndex_(*(ID *)(param_1 + 0x20),param_3);
    IVar1 = objc_stub::bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl_
                      (*(ID *)(param_1 + 0x20),extraout_d0,extraout_d0_00,
                       (in_d3 + extraout_d0 * -2.0) * 0.5,IVar1,0,IVar2);
    objc_stub::setFill(param_2);
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_140,auStack_f8,0x10);
    if (IVar2 != 0) {
      lVar3 = *local_130;
      do {
        IVar4 = 0;
        do {
          if (*local_130 != lVar3) {
            _objc_enumerationMutation(IVar1);
          }
          objc_stub::fill(*(ID *)(lStack_138 + IVar4 * 8));
          IVar4 = IVar4 + 1;
        } while (IVar2 != IVar4);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_140,auStack_f8,0x10);
      } while (IVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== ___75-[MDLayoutManager(Drawing)_drawHighlighterBackgroundForGlyphRange:atPoint:]_block_invoke @ 00035788 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___75__MDLayoutManager_Drawing__drawHighlighterBackgroundForGlyphRange_atPoint___block_invoke
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  long lVar3;
  ID IVar4;
  double extraout_d0;
  double extraout_d0_00;
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
  if (param_2 != 0) {
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_1 + 0x20),param_3,param_4,0);
    IVar1 = objc_stub::rectArrayForInlineDrawingAtGlyphRange_inTextContainer_atPoint_
                      (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x38),IVar1,extraout_x1,
                       *(undefined8 *)(param_1 + 0x28));
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::nonHiddenFontAtIndex_(IVar2,param_3);
    objc_stub::basePointSize(*(ID *)(param_1 + 0x20));
    objc_stub::pointSize(IVar2);
    IVar1 = objc_stub::bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl_
                      (*(ID *)(param_1 + 0x20),0,extraout_d0 * 1.5,extraout_d0_00 / 5.0,IVar1,1,0);
    objc_stub::setFill(param_2);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
    if (IVar2 != 0) {
      lVar3 = *local_120;
      do {
        IVar4 = 0;
        do {
          if (*local_120 != lVar3) {
            _objc_enumerationMutation(IVar1);
          }
          objc_stub::fill(*(ID *)(lStack_128 + IVar4 * 8));
          IVar4 = IVar4 + 1;
        } while (IVar2 != IVar4);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_e8,0x10);
      } while (IVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== ___76-[MDLayoutManager(Drawing)_drawSearchResultBackgroundForGlyphRange:atPoint:]_block_invoke @ 00035a78 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___76__MDLayoutManager_Drawing__drawSearchResultBackgroundForGlyphRange_atPoint___block_invoke
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_x1;
  long lVar3;
  ID IVar4;
  double extraout_d0;
  undefined8 uVar5;
  undefined8 uVar6;
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
  if (param_2 != 0) {
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_1 + 0x20),param_3,param_4,0);
    IVar1 = objc_stub::rectArrayForInlineDrawingAtGlyphRange_inTextContainer_atPoint_
                      (*(ID *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x38),IVar1,extraout_x1,
                       *(undefined8 *)(param_1 + 0x28));
    IVar2 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::nonHiddenFontAtIndex_(IVar2,param_3);
    uVar5 = *(undefined8 *)PTR__CGSizeZero_0005ed68;
    uVar6 = *(undefined8 *)(PTR__CGSizeZero_0005ed68 + 8);
    objc_stub::pointSize(IVar2);
    IVar1 = objc_stub::bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl_
                      (*(ID *)(param_1 + 0x20),uVar5,uVar6,extraout_d0 / 5.0,IVar1,1,0);
    objc_stub::setFill(param_2);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
    if (IVar2 != 0) {
      lVar3 = *local_120;
      do {
        IVar4 = 0;
        do {
          if (*local_120 != lVar3) {
            _objc_enumerationMutation(IVar1);
          }
          objc_stub::fill(*(ID *)(lStack_128 + IVar4 * 8));
          IVar4 = IVar4 + 1;
        } while (IVar2 != IVar4);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_e8,0x10);
      } while (IVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== ___Block_byref_object_copy_ @ 00035e9c =====

void ___Block_byref_object_copy_(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


// ===== ___Block_byref_object_dispose_ @ 00035eac =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___Block_byref_object_dispose_(void)

{
  return 0;
}


// ===== ___74-[MDLayoutManager(Drawing)_drawBlockQuoteBackgroundForGlyphRange:atPoint:]_block_invoke @ 00035eb4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */

undefined8
___74__MDLayoutManager_Drawing__drawBlockQuoteBackgroundForGlyphRange_atPoint___block_invoke
          (undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5,
          long param_6,long param_7,ulong param_8)

{
  ID IVar1;
  ID IVar2;
  ID self;
  ID self_00;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  undefined8 extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double dVar8;
  double extraout_d0_06;
  double extraout_d0_07;
  double extraout_d0_08;
  double extraout_d0_09;
  double extraout_d0_10;
  double dVar9;
  undefined8 extraout_d0_11;
  double extraout_d0_12;
  undefined8 uVar10;
  double extraout_d0_13;
  double extraout_d0_14;
  double extraout_d0_15;
  double extraout_d0_16;
  double extraout_d0_17;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  IVar1 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
  objc_stub::rangeOfBlockquoteItemAtIndex_markerRange_(IVar1,param_6,&local_b0);
  IVar1 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
  IVar1 = objc_stub::string(IVar1);
  IVar1 = objc_stub::characterAtIndex_(IVar1,param_7 + param_6 + -1);
  param_7 = param_7 - (ulong)((int)IVar1 == 10);
  IVar1 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_(IVar1,&cf_MDCalloutColors,local_b0,0);
  if (IVar1 == 0) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_5 + 0x30) + 8) + 0x28);
    if (lVar11 == 0) {
      IVar1 = objc_stub::textStorage(*(ID *)(param_5 + 0x20));
      IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                        (IVar1,&cf_MDBlockQuoteBackgroundColor,param_6,0);
      lVar5 = *(long *)(*(long *)(param_5 + 0x30) + 8);
      lVar11 = *(long *)(lVar5 + 0x28);
      *(ID *)(lVar5 + 0x28) = IVar1;
    }
    IVar1 = objc_stub::textStorage(*(ID *)(param_5 + 0x20),lVar11);
    IVar1 = objc_stub::string(IVar1);
    IVar1 = objc_stub::characterAtIndex_(IVar1,param_6 + param_7 + -1);
    IVar2 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_5 + 0x20),local_b0,uStack_a8,0);
    objc_stub::boundingRectForGlyphRange_inTextContainer_
              (*(ID *)(param_5 + 0x38),IVar2,extraout_x1_01,*(undefined8 *)(param_5 + 0x28));
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_5 + 0x20),param_6,param_7 - (ulong)((int)IVar1 == 10),0);
    objc_stub::boundingRectForGlyphRange_inTextContainer_
              (*(ID *)(param_5 + 0x38),IVar1,extraout_x1_02,*(undefined8 *)(param_5 + 0x28));
    dVar9 = *(double *)(param_5 + 0x48);
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    dVar8 = *(double *)(param_5 + 0x50);
    dVar16 = *(double *)(param_5 + 0x58);
    dVar13 = *(double *)(param_5 + 0x40);
    IVar1 = objc_stub::isRTLAtIndex_(*(ID *)(param_5 + 0x20),param_6);
    if ((int)IVar1 == 0) {
      dVar13 = dVar13 + extraout_d0_06 + dVar8 + dVar16 * -0.5;
    }
    else {
      dVar13 = *(double *)(param_5 + 0x40) +
               ((extraout_d0_06 + param_3) -
               (*(double *)(param_5 + 0x50) + *(double *)(param_5 + 0x58) * 0.5));
    }
    lVar5 = (long)(param_2 + dVar9 + extraout_d0_07 * 3.0);
    lVar12 = (long)dVar16;
    lVar11 = (long)(param_4 + extraout_d0_08 * -4.0);
    if ((param_8 & 1) == 0) {
      IVar1 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                        ((ID)&_OBJC_CLASS___NSBezierPath,(long)dVar13,lVar5,lVar12,lVar11,
                         *(double *)(param_5 + 0x58) * 0.5);
      objc_stub::setFill(*(ID *)(*(long *)(*(long *)(param_5 + 0x30) + 8) + 0x28));
      objc_stub::fill(IVar1);
    }
    else {
      objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
      objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
      _CGRectInset((long)dVar13,lVar5,lVar12,lVar11,extraout_d0_16 * 0.5,extraout_d0_17 * 0.5);
      IVar1 = objc_stub::bezierPathWithRoundedRect_cornerRadius_((ID)&_OBJC_CLASS___NSBezierPath);
      objc_stub::setStroke(*(ID *)(*(long *)(*(long *)(param_5 + 0x30) + 8) + 0x28));
      objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
      objc_stub::setLineWidth_(IVar1);
      objc_stub::stroke(IVar1);
    }
  }
  else {
    IVar2 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_5 + 0x20),param_6,param_7,0);
    self = objc_stub::objectForKeyedSubscript_(IVar1,&cf_background);
    self_00 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_border);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_ribbon);
    IVar3 = objc_stub::defaultFont(*(ID *)(param_5 + 0x20));
    objc_stub::pointSize(IVar3);
    objc_stub::lineFragmentPadding(*(ID *)(param_5 + 0x28));
    objc_stub::defaultParagraphIndent(*(ID *)(param_5 + 0x20));
    dVar16 = extraout_d0_00 + extraout_d0_01;
    IVar3 = objc_stub::isRTLAtIndex_(*(ID *)(param_5 + 0x20),param_6);
    IVar4 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (*(ID *)(param_5 + 0x20),local_b0,uStack_a8,0);
    objc_stub::boundingRectForGlyphRange_inTextContainer_
              (*(ID *)(param_5 + 0x38),IVar4,extraout_x1_00,*(undefined8 *)(param_5 + 0x28));
    dVar9 = param_2;
    dVar13 = param_4;
    objc_stub::boundingRectForGlyphRange_inTextContainer_
              (*(ID *)(param_5 + 0x20),IVar2,extraout_x1,*(undefined8 *)(param_5 + 0x28));
    objc_stub::size(*(ID *)(param_5 + 0x28));
    iVar7 = (int)IVar3;
    if (iVar7 == 0) {
      dVar8 = (double)_CGRectGetMinX(extraout_d0_02,param_2,param_3,param_4);
      dVar8 = dVar8 - dVar16;
    }
    else {
      objc_stub::size(*(ID *)(param_5 + 0x28));
      dVar8 = (double)_CGRectGetMaxX(extraout_d0_02,param_2,param_3,param_4);
      dVar8 = extraout_d0_05 - (dVar16 + dVar8);
    }
    dVar8 = (extraout_d0_04 + dVar16 * -2.0) - dVar8;
    _CGRectIntegral(extraout_d0_03,dVar9,dVar8,dVar13);
    dVar17 = *(double *)(param_5 + 0x40);
    dVar16 = *(double *)(param_5 + 0x48);
    dVar14 = *(double *)(param_5 + 0x50);
    dVar15 = *(double *)(param_5 + 0x58);
    objc_stub::nestedBackgroundOffsetAtIndex_(*(ID *)(param_5 + 0x20),param_6);
    objc_stub::baseTabSize(*(ID *)(param_5 + 0x20));
    dVar8 = (dVar8 - (dVar14 * 2.0 - dVar15)) - (extraout_d0_09 - extraout_d0_10);
    if (iVar7 == 0) {
      dVar17 = dVar17 + extraout_d0_02 + dVar14 + dVar15 * -0.5;
    }
    else {
      dVar17 = (double)_CGRectGetMaxX(extraout_d0_02,param_2,param_3,param_4);
      dVar17 = *(double *)(param_5 + 0x40) +
               ((dVar17 - (*(double *)(param_5 + 0x50) + *(double *)(param_5 + 0x58) * -0.5)) -
               dVar8);
    }
    lVar11 = (long)(dVar16 + dVar9);
    dVar9 = (double)_CGRectInset((long)dVar17,lVar11,dVar8,dVar13,0,extraout_d0 * -0.8);
    dVar16 = *(double *)(param_5 + 0x58);
    if (iVar7 == 0) {
      uVar6 = 5;
      local_c8 = dVar9;
    }
    else {
      dVar17 = (double)_CGRectGetMaxX(dVar9,lVar11,dVar8,dVar13);
      uVar6 = 10;
      local_c8 = dVar17 - dVar16;
    }
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    lVar5 = lVar11;
    dVar17 = dVar13;
    uVar10 = _CGRectInset(dVar9,lVar11,dVar8,dVar13,extraout_d0_11,extraout_d0_12 * 0.5);
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    IVar2 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                      ((ID)&_OBJC_CLASS___NSBezierPath,uVar10,lVar5,dVar8,dVar17,
                       extraout_d0_13 * 3.0);
    objc_stub::setFill(self);
    objc_stub::fill(IVar2);
    objc_stub::setStroke(self_00);
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    objc_stub::setLineWidth_(IVar2);
    objc_stub::stroke(IVar2);
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    objc_stub::basePointSize(*(ID *)(param_5 + 0x20));
    IVar2 = objc_stub::bezierPathWithRoundedRect_byRoundingCorners_cornerRadii_
                      ((ID)&_OBJC_CLASS___NSBezierPath,local_c8,lVar11,dVar16,dVar13,
                       extraout_d0_14 * 3.0,extraout_d0_15 * 3.0,uVar6);
    objc_stub::setFill(IVar1);
    objc_stub::fill(IVar2);
  }
  return 0;
}


// ===== ___copy_helper_block_e8_32s40s48r56w @ 00036648 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void ___copy_helper_block_e8_32s40s48r56w(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
  return;
}


// ===== ___destroy_helper_block_e8_32s40s48r56w @ 00036690 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___destroy_helper_block_e8_32s40s48r56w(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  return 0;
}


// ===== ___74-[MDLayoutManager(Drawing)_drawBlockBackgroundForCharRange:atPoint:color:]_block_invoke @ 00036d40 =====

void ___74__MDLayoutManager_Drawing__drawBlockBackgroundForCharRange_atPoint_color___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,ID param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_d0;
  
  if (param_7 == 0) {
    objc_stub::CGRectValue(param_6);
    uVar2 = extraout_d0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_5 + 0x20) + 8);
    objc_stub::CGRectValue(param_6);
    param_2 = *(undefined8 *)(lVar1 + 0x28);
    param_3 = *(undefined8 *)(lVar1 + 0x30);
    param_4 = *(undefined8 *)(lVar1 + 0x38);
    uVar2 = _CGRectUnion(*(undefined8 *)(lVar1 + 0x20));
  }
  lVar1 = *(long *)(*(long *)(param_5 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined8 *)(lVar1 + 0x38) = param_4;
  return;
}


// ===== ___98-[MDLayoutManager(Drawing)_bezierPathsForRectArray:borderWidth:cornerRadius:roundMiddlePaths:rtl:]_block_invoke @ 00037058 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___98__MDLayoutManager_Drawing__bezierPathsForRectArray_borderWidth_cornerRadius_roundMiddlePaths_rtl___block_invoke
          (undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,long param_5,
          ID param_6,long param_7)

{
  char cVar1;
  ID IVar2;
  ID self;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  double extraout_d0;
  double dVar6;
  double extraout_d0_00;
  double dVar7;
  double dVar8;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  
  objc_stub::CGRectValue(param_6);
  uVar9 = param_2;
  dVar7 = param_3;
  dVar8 = param_4;
  IVar2 = objc_stub::count(*(ID *)(param_5 + 0x20));
  dVar12 = param_4;
  dVar13 = param_3;
  uVar14 = param_2;
  dVar6 = extraout_d0;
  if (((0.0 < param_3) && (0.0 < param_4)) &&
     ((*(double *)(param_5 + 0x30) != 0.0 || (*(double *)(param_5 + 0x38) != 0.0)))) {
    uVar9 = param_2;
    dVar7 = param_3;
    dVar8 = param_4;
    dVar6 = (double)_CGRectInset(extraout_d0);
    dVar12 = dVar8;
    dVar13 = dVar7;
    uVar14 = uVar9;
  }
  dVar11 = *(double *)(param_5 + 0x40);
  if (dVar11 <= 0.0) {
LAB_00037240:
    IVar2 = objc_stub::bezierPathWithRect_
                      ((ID)&_OBJC_CLASS___NSBezierPath,dVar6,uVar14,dVar13,dVar12);
    goto LAB_0003745c;
  }
  if ((param_7 == 0) && (IVar2 == 1)) {
    IVar2 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                      ((ID)&_OBJC_CLASS___NSBezierPath,dVar6,uVar14,dVar13,dVar12);
    goto LAB_0003745c;
  }
  if ((*(byte *)(param_5 + 0x48) & 1) == 0) {
    if (param_7 == 0) {
      cVar1 = *(char *)(param_5 + 0x49);
      uVar4 = 5;
      uVar5 = 10;
    }
    else {
      if (param_7 != IVar2 - 1) goto LAB_00037240;
      cVar1 = *(char *)(param_5 + 0x49);
      uVar4 = 10;
      uVar5 = 5;
    }
    if (cVar1 == '\0') {
      uVar5 = uVar4;
    }
  }
  else {
    self = *(ID *)(param_5 + 0x20);
    if (param_7 == 0) {
      IVar2 = objc_stub::objectAtIndexedSubscript_(self,1);
      objc_stub::CGRectValue(IVar2);
      uVar3 = 0;
      if (*(char *)(param_5 + 0x48) == '\x01') {
        if ((extraout_d0 < extraout_d0_01) ||
           (uVar3 = _CGRectGetMaxX(extraout_d0_01,uVar9,dVar7,dVar8,0), extraout_d0_02 < extraout_d0
           )) {
          uVar5 = 7;
        }
        else {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 3;
      }
      if (*(char *)(param_5 + 0x48) == '\x01') {
        dVar7 = (double)_CGRectGetMaxX(extraout_d0_01,uVar9,dVar7,dVar8,uVar3);
        dVar8 = (double)_CGRectGetMaxX(extraout_d0,param_2,param_3,param_4);
        if (dVar7 < dVar8) {
          uVar5 = uVar5 | 8;
        }
      }
    }
    else {
      if (param_7 != IVar2 - 1) {
        IVar2 = objc_stub::objectAtIndexedSubscript_(self,param_7 + 1);
        objc_stub::CGRectValue(IVar2);
        uVar3 = uVar9;
        dVar11 = dVar7;
        dVar10 = dVar8;
        IVar2 = objc_stub::objectAtIndexedSubscript_(*(ID *)(param_5 + 0x20),param_7 + -1);
        objc_stub::CGRectValue(IVar2);
        uVar5 = 4;
        if (extraout_d0_03 <= extraout_d0) {
          uVar5 = 0;
        }
        dVar7 = (double)_CGRectGetMaxX(extraout_d0_03,uVar9,dVar7,dVar8,0);
        dVar8 = (double)_CGRectGetMaxX(extraout_d0,param_2,param_3,param_4);
        uVar4 = uVar5 | 8;
        if (dVar8 <= dVar7) {
          uVar4 = uVar5;
        }
        if (extraout_d0 < extraout_d0_04) {
          uVar4 = uVar4 + 1;
        }
        dVar7 = (double)_CGRectGetMaxX(extraout_d0_04,uVar3,dVar11,dVar10);
        dVar8 = (double)_CGRectGetMaxX(extraout_d0,param_2,param_3,param_4);
        uVar5 = uVar4 | 2;
        if (dVar8 <= dVar7) {
          uVar5 = uVar4;
        }
        dVar11 = *(double *)(param_5 + 0x40);
        goto LAB_0003744c;
      }
      IVar2 = objc_stub::objectAtIndexedSubscript_(self,param_7 + -1);
      objc_stub::CGRectValue(IVar2);
      uVar5 = 0xc;
      if ((*(byte *)(param_5 + 0x48) & extraout_d0 < extraout_d0_00) != 0) {
        uVar5 = 0xd;
      }
      if (*(byte *)(param_5 + 0x48) == 1) {
        dVar7 = (double)_CGRectGetMaxX(extraout_d0_00,uVar9,dVar7,dVar8,0);
        dVar8 = (double)_CGRectGetMaxX(extraout_d0,param_2,param_3,param_4);
        if ((dVar7 < dVar8) ||
           (dVar7 = (double)_CGRectGetMaxX(extraout_d0,param_2,param_3,param_4),
           dVar7 < extraout_d0_00)) {
          uVar5 = uVar5 | 2;
        }
      }
    }
    dVar11 = *(double *)(param_5 + 0x40);
  }
LAB_0003744c:
  IVar2 = objc_stub::bezierPathWithRoundedRect_byRoundingCorners_cornerRadii_
                    ((ID)&_OBJC_CLASS___NSBezierPath,dVar6,uVar14,dVar13,dVar12,dVar11,dVar11,uVar5)
  ;
LAB_0003745c:
  objc_stub::addObject_(*(ID *)(*(long *)(*(long *)(param_5 + 0x28) + 8) + 0x28),IVar2);
  return 0;
}


// ===== ___75-[MDLayoutManager(Drawing)_rectArrayForGlyphRange:inTextContainer:atPoint:]_block_invoke @ 000375d8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___75__MDLayoutManager_Drawing__rectArrayForGlyphRange_inTextContainer_atPoint___block_invoke
          (double param_1,double param_2,long param_3)

{
  ID IVar1;
  ID self;
  
  _CGRectIntegral(param_1 + *(double *)(param_3 + 0x28),param_2 + *(double *)(param_3 + 0x30));
  self = *(ID *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  IVar1 = objc_stub::valueWithCGRect_((ID)&_OBJC_CLASS___NSValue);
  objc_stub::addObject_(self,IVar1);
  return 0;
}


// ===== ___87-[MDLayoutManager(Drawing)_nonCollapsedRectArrayForGlyphRange:inTextContainer:atPoint:]_block_invoke @ 0003777c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___87__MDLayoutManager_Drawing__nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint___block_invoke
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  auVar4 = _NSIntersectionRange(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  lVar3 = auVar4._8_8_;
  if ((ulong)(param_3 + param_4) < (ulong)(*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38))) {
    IVar1 = objc_stub::textStorage(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::string(IVar1);
    IVar2 = objc_stub::characterIndexForGlyphAtIndex_
                      (*(ID *)(param_1 + 0x20),(param_3 + param_4) - 1);
    IVar1 = objc_stub::characterAtIndex_(IVar1,IVar2);
    lVar3 = lVar3 - (ulong)(((uint)IVar1 & 0xffff) == 10);
  }
  local_78 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = 0xc2000000;
  local_68 = 
  ___87__MDLayoutManager_Drawing__nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint___block_invoke_2
  ;
  puStack_60 = &___block_descriptor_56_e8_32r_e43_v48__0_CGRect__CGPoint_dd__CGSize_dd__8_B40l;
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  local_50 = *(undefined8 *)(param_1 + 0x48);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  objc_stub::
  enumerateEnclosingRectsForGlyphRange_withinSelectedGlyphRange_inTextContainer_usingBlock_
            (*(ID *)(param_1 + 0x20),auVar4._0_8_,lVar3,auVar4._0_8_,lVar3,
             *(undefined8 *)(param_1 + 0x28),&local_78);
  return;
}


// ===== ___87-[MDLayoutManager(Drawing)_nonCollapsedRectArrayForGlyphRange:inTextContainer:atPoint:]_block_invoke_2 @ 00037894 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___87__MDLayoutManager_Drawing__nonCollapsedRectArrayForGlyphRange_inTextContainer_atPoint___block_invoke_2
          (double param_1,double param_2,long param_3)

{
  ID IVar1;
  ID self;
  
  _CGRectIntegral(param_1 + *(double *)(param_3 + 0x28),param_2 + *(double *)(param_3 + 0x30));
  self = *(ID *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  IVar1 = objc_stub::valueWithCGRect_((ID)&_OBJC_CLASS___NSValue);
  objc_stub::addObject_(self,IVar1);
  return 0;
}


// ===== ___80-[MDLayoutManager(Drawing)_rectCollectionForGlyphRange:inTextContainer:atPoint:]_block_invoke @ 00037a20 =====

void ___80__MDLayoutManager_Drawing__rectCollectionForGlyphRange_inTextContainer_atPoint___block_invoke
               (double param_1,double param_2,long param_3)

{
  _CGRectIntegral(param_1 + *(double *)(param_3 + 0x28),param_2 + *(double *)(param_3 + 0x30));
  objc_stub::addRect_(*(ID *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
  return;
}


// ===== -[NSAttributedString(Humanize)_attributesToSkip] @ 00037c94 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_Humanize__attributesToSkip_(void)

{
  ID IVar1;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_110 = *(undefined8 *)PTR__PMKStrongMarkerAttributeName_0005ea68;
  uStack_108 = *(undefined8 *)PTR__PMKEmphasisMarkerAttributeName_0005e8d8;
  local_100 = *(undefined8 *)PTR__PMKCodeMarkerAttributeName_0005e8a8;
  uStack_f8 = *(undefined8 *)PTR__PMKStrikethroughMarkerAttributeName_0005ea58;
  local_f0 = *(undefined8 *)PTR__PMKUnderlineMarkerAttributeName_0005ea88;
  uStack_e8 = *(undefined8 *)PTR__PMKHighlighterMarkerAttributeName_0005e978;
  local_e0 = *(undefined8 *)PTR__PMKEscapeAttributeName_0005e8e0;
  uStack_d8 = *(undefined8 *)PTR__PMKThematicBreakAttributeName_0005ea78;
  local_d0 = *(undefined8 *)PTR__PMKHeadingMarkerAttributeName_0005e968;
  uStack_c8 = *(undefined8 *)PTR__PMKFencedCodeMarkerAttributeName_0005e8f8;
  local_c0 = *(undefined8 *)PTR__PMKFencedCodeLanguageAttributeName_0005e8f0;
  uStack_b8 = *(undefined8 *)PTR__PMKListMarkerAttributeName_0005e9e0;
  local_b0 = *(undefined8 *)PTR__PMKBlockquoteMarkerAttributeName_0005e888;
  uStack_a8 = *(undefined8 *)PTR__PMKLinkMarkerAttributeName_0005e9c0;
  local_a0 = *(undefined8 *)PTR__PMKLinkURLAttributeName_0005e9d0;
  uStack_98 = *(undefined8 *)PTR__PMKLinkTitleAttributeName_0005e9c8;
  local_90 = *(undefined8 *)PTR__PMKImageMarkerAttributeName_0005e988;
  uStack_88 = *(undefined8 *)PTR__PMKImageURLAttributeName_0005e998;
  local_80 = *(undefined8 *)PTR__PMKImageTitleAttributeName_0005e990;
  uStack_78 = *(undefined8 *)PTR__PMKHTMLBlockAttributeName_0005e928;
  local_70 = *(undefined8 *)PTR__PMKHTMLInlineAttributeName_0005e938;
  uStack_68 = *(undefined8 *)PTR__PMKReferenceMarkerAttributeName_0005ea40;
  local_60 = *(undefined8 *)PTR__PMKReferenceDefinitionAttributeName_0005ea30;
  uStack_58 = *(undefined8 *)PTR__PMKFootNoteMarkerAttributeName_0005e920;
  local_50 = *(undefined8 *)PTR__PMKFootNoteLabelAttributeName_0005e918;
  uStack_48 = *(undefined8 *)PTR__PMKWikiLinkMarkerAttributeName_0005eaa8;
  local_40 = *(undefined8 *)PTR__PMKYamlAttributeName_0005eab0;
  uStack_38 = *(undefined8 *)PTR__PMKMetadataAttributeName_0005ea18;
  local_30 = *(undefined8 *)PTR__PMKFoldMarkerAttributeName_0005e900;
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_110,0x1d);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_28) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== -[NSAttributedString(Humanize)_humanizedString] @ 00037e94 =====

void __NSAttributedString_Humanize__humanizedString_(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::length(param_1);
  objc_stub::humanizedStringForRange_(param_1,0,IVar1);
  return;
}


// ===== -[NSAttributedString(Humanize)_humanizedStringForRange:] @ 00037ec0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID __NSAttributedString_Humanize__humanizedStringForRange__(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::humanizedAttributedString_(param_1);
  IVar1 = objc_stub::string(IVar1);
  return IVar1;
}


// ===== -[NSAttributedString(Humanize)_humanizedAttributedString] @ 00037f04 =====

void __NSAttributedString_Humanize__humanizedAttributedString_(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::length(param_1);
  objc_stub::humanizedAttributedString_(param_1,0,IVar1);
  return;
}


// ===== -[NSAttributedString(Humanize)_humanizedAttributedString:] @ 00037f30 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
__NSAttributedString_Humanize__humanizedAttributedString__
          (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  ID IStack_38;
  
  uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableAttributedString);
  local_60 = PTR___NSConcreteStackBlock_0005ebe0;
  local_58 = 0xc2000000;
  local_50 = ___58__NSAttributedString_Humanize__humanizedAttributedString___block_invoke;
  puStack_48 = &___block_descriptor_48_e8_32s40s_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l;
  local_40 = uVar1;
  IStack_38 = param_1;
  objc_stub::enumerateAttributesInRange_options_usingBlock_(param_1,param_3,param_4,0,&local_60);
  return uVar1;
}


// ===== ___58-[NSAttributedString(Humanize)_humanizedAttributedString:]_block_invoke @ 00037fdc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___58__NSAttributedString_Humanize__humanizedAttributedString___block_invoke
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
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
  
  puVar1 = PTR__NSAttachmentAttributeName_0005ec30;
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar2 = objc_stub::objectForKeyedSubscript_
                    (param_2,*(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30);
  if (IVar2 != 0) {
    IVar2 = objc_stub::objectForKeyedSubscript_(param_2,*(undefined8 *)puVar1);
    uVar3 = _objc_opt_class(&objc::class_t::SFTextAttachment);
    uVar4 = _objc_opt_isKindOfClass(IVar2,uVar3);
    if ((uVar4 & 1) != 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_(param_2,*(undefined8 *)puVar1);
      IVar5 = objc_stub::isFold(IVar2);
      if ((int)IVar5 == 0) {
        IVar2 = objc_stub::representedAttributedText(IVar2);
      }
      else {
        IVar2 = objc_stub::collapsedAttributedText(IVar2);
      }
      IVar2 = objc_stub::humanizedAttributedString(IVar2);
      objc_stub::appendAttributedString_(*(ID *)(param_1 + 0x20),IVar2);
      goto LAB_000381ec;
    }
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = objc_stub::attributesToSkip(*(ID *)(param_1 + 0x28));
  IVar5 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_e8,0x10);
  if (IVar5 != 0) {
    lVar7 = *local_120;
    do {
      IVar8 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(IVar2);
        }
        IVar6 = objc_stub::objectForKeyedSubscript_(param_2,*(undefined8 *)(lStack_128 + IVar8 * 8))
        ;
        if (IVar6 != 0) goto LAB_000381ec;
        IVar8 = IVar8 + 1;
      } while (IVar5 != IVar8);
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_e8,0x10);
    } while (IVar5 != 0);
  }
  IVar2 = *(ID *)(param_1 + 0x20);
  IVar5 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x28),param_3,param_4);
  objc_stub::appendAttributedString_(IVar2,IVar5);
LAB_000381ec:
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== ___75-[MDWikiLinkTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00038ce8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___75__MDWikiLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,ID param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6,undefined8 param_7,undefined8 param_8,long param_9,undefined8 param_10,
          long param_11,long param_12,undefined8 param_13,undefined8 param_14,long param_15,
          long param_16,undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (((param_6 == 0) || (param_9 == param_15 + param_16)) ||
     ((IVar2 = objc_stub::isEqualToString_(param_2,&cf___), (int)IVar2 != 0 && (param_12 == 0)))) {
    IVar2 = *(ID *)(param_1 + 0x20);
    auVar7 = _NSUnionRange(param_15,param_16,param_17,param_18);
    objc_stub::addAttribute_value_range_
              (IVar2,&cf_MDPreventMarkdownHiding,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e800
               ,auVar7._0_8_,auVar7._8_8_);
  }
  IVar2 = objc_stub::wikiLinkURLBlock(*(ID *)(param_1 + 0x28));
  if (IVar2 != 0) {
    if (param_11 == 0x7fffffffffffffff) {
      IVar2 = 0;
    }
    else {
      IVar2 = objc_stub::attribute_atIndex_effectiveRange_
                        (*(ID *)(param_1 + 0x20),
                         *(undefined8 *)PTR__PMKWikiLinkAnchorAttributeName_0005ea98,param_11,0);
    }
    IVar3 = objc_stub::length(IVar2);
    if (IVar3 == 0) {
      IVar2 = 0;
    }
    IVar3 = objc_stub::wikiLinkURLBlock(*(ID *)(param_1 + 0x28));
    lVar4 = (**(code **)(IVar3 + 0x10))(IVar3,param_2,IVar2);
    if (lVar4 != 0) {
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,lVar4,
                 param_5,param_6,param_7,param_8,lVar4,IVar2);
      uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
      IVar3 = *(ID *)(param_1 + 0x20);
      IVar5 = objc_stub::linkColor(*(ID *)(param_1 + 0x28));
      objc_stub::addAttribute_value_range_(IVar3,uVar6,IVar5,param_5,param_6);
      puVar1 = PTR__NSUnderlineStyleAttributeName_0005ecb0;
      IVar3 = objc_stub::attribute_atIndex_effectiveRange_
                        (*(ID *)(param_1 + 0x20),
                         *(undefined8 *)PTR__NSUnderlineStyleAttributeName_0005ecb0,param_3,0);
      if (IVar3 == 0) {
        objc_stub::addAttribute_value_range_
                  (*(ID *)(param_1 + 0x20),*(undefined8 *)puVar1,
                   &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e818,param_3,param_4,param_7,
                   param_8,lVar4,IVar2);
      }
    }
  }
  puVar1 = PTR__NSForegroundColorAttributeName_0005ec80;
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  IVar2 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar2,uVar6,IVar3,param_15,param_16);
  uVar6 = *(undefined8 *)puVar1;
  IVar2 = *(ID *)(param_1 + 0x20);
  IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
  objc_stub::addAttribute_value_range_(IVar2,uVar6,IVar3,param_17,param_18);
  if (param_9 != 0x7fffffffffffffff) {
    uVar6 = *(undefined8 *)puVar1;
    IVar2 = *(ID *)(param_1 + 0x20);
    IVar3 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
    objc_stub::addAttribute_value_range_(IVar2,uVar6,IVar3,param_9,param_10);
  }
  return 0;
}


// ===== -[NSAttributedString(MarkdownURL)_markdownURLAtIndex:actualURLIndex:] @ 00039920 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID __NSAttributedString_MarkdownURL__markdownURLAtIndex_actualURLIndex__
             (ID param_1,undefined8 param_2,ulong param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::length(param_1);
  if (param_3 < IVar1) {
    IVar1 = objc_stub::markdownURLIndexAtIndex_(param_1,param_3);
  }
  else {
    IVar1 = 0x7fffffffffffffff;
  }
  if ((0 < (long)param_3) && (IVar1 == 0x7fffffffffffffff)) {
    IVar1 = objc_stub::markdownURLIndexAtIndex_(param_1,param_3 - 1);
  }
  if (IVar1 == 0x7fffffffffffffff) {
    IVar2 = 0;
    IVar1 = 0x7fffffffffffffff;
  }
  else {
    IVar2 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                      (param_1,*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,IVar1,0,IVar1,1);
    if (IVar2 == 0) {
      IVar2 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                        (param_1,&cf__NSLinkAttributeName,IVar1,0,IVar1,1);
    }
    if (IVar2 == 0 || param_4 == (ID *)0x0) {
      IVar1 = 0x7fffffffffffffff;
    }
  }
  if (param_4 != (ID *)0x0) {
    *param_4 = IVar1;
  }
  return IVar2;
}


// ===== -[NSAttributedString(MarkdownURL)_markdownURLIndexAtIndex:] @ 00039a18 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID __NSAttributedString_MarkdownURL__markdownURLIndexAtIndex__
             (ID param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                    (param_1,*(undefined8 *)PTR__NSLinkAttributeName_0005ec90,param_3,0,param_3,1);
  IVar2 = objc_stub::attribute_atIndex_longestEffectiveRange_inRange_
                    (param_1,&cf__NSLinkAttributeName,param_3,0,param_3,1);
  if (IVar2 == 0 && IVar1 == 0 || param_3 == 0x7fffffffffffffff) {
    IVar1 = objc_stub::linkRangeAtIndex_(param_1,param_3);
    if ((long)IVar1 < 0x7ffffffffffffffe) {
      param_3 = IVar1 + 1;
    }
    else {
      IVar1 = objc_stub::wikiLinkRangeAtIndex_(param_1,param_3);
      if ((IVar1 & 0xfffffffffffffffd) == 0x7ffffffffffffffd) {
        param_3 = objc_stub::footnoteRangeAtIndex_(param_1,param_3);
        if (param_3 != 0x7fffffffffffffff) {
          param_3 = param_3 + 2;
        }
      }
      else {
        param_3 = IVar1 + 2;
      }
    }
  }
  return param_3;
}


// ===== ___75-[MDMetadataTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 00039bd8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___75__MDMetadataTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,long param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID self;
  ID IVar4;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(param_4,&cf_fold);
    IVar1 = objc_stub::boolValue(IVar1);
    if (((IVar1 & 1) == 0) &&
       (IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                          (*(ID *)(param_1 + 0x20),
                           *(undefined8 *)PTR__NSAttachmentAttributeName_0005ec30,param_2 + -1,0),
       IVar1 != 0)) {
      uVar2 = _objc_opt_class(&objc::class_t::SFTextAttachment);
      uVar3 = _objc_opt_isKindOfClass(IVar1,uVar2);
      if ((uVar3 & 1) != 0) {
        self = _objc_opt_new(&_OBJC_CLASS___NSMutableAttributedString);
        IVar4 = objc_stub::representedAttributedText(IVar1);
        objc_stub::appendAttributedString_(self,IVar4);
        IVar4 = objc_stub::attributedSubstringFromRange_(*(ID *)(param_1 + 0x20),param_2,param_3);
        objc_stub::appendAttributedString_(self,IVar4);
        objc_stub::setRepresentedAttributedText_(IVar1,self);
        IVar1 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
        IVar1 = objc_stub::initWithString_(IVar1,&cf___);
        objc_stub::replaceCharactersInRange_withAttributedString_
                  (*(ID *)(param_1 + 0x20),param_2,param_3,IVar1);
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                  (*(long *)(param_1 + 0x28),param_2,param_3,IVar1);
      }
    }
  }
  return 0;
}


// ===== -[NSAttributedString(TemporaryAttributes)_nonTemporaryAttributesAtIndex:] @ 00039d74 =====

void __NSAttributedString_TemporaryAttributes__nonTemporaryAttributesAtIndex__
               (ID param_1,undefined8 param_2,undefined8 param_3)

{
  objc_stub::attribute_atIndex_effectiveRange_(param_1,&cf_MDOriginalAttributes,param_3,0);
  return;
}


// ===== -[NSMutableAttributedString(TemporaryAttributes)_removeTemporaryAttributesInRange:] @ 00039d88 =====

undefined1
__NSMutableAttributedString_TemporaryAttributes__removeTemporaryAttributesInRange__
          (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  puStack_48 = &local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  local_70 = PTR___NSConcreteStackBlock_0005ebe0;
  local_68 = 0xc2000000;
  local_60 = 
  ___83__NSMutableAttributedString_TemporaryAttributes__removeTemporaryAttributesInRange___block_invoke
  ;
  puStack_58 = &___block_descriptor_48_e8_32s40r_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l;
  local_50 = param_1;
  local_38 = puStack_48;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,&cf_MDOriginalAttributes,param_3,param_4,0,&local_70);
  uVar1 = *(undefined1 *)(local_38 + 3);
  __Block_object_dispose(&local_40,8);
  return uVar1;
}


// ===== ___83-[NSMutableAttributedString(TemporaryAttributes)_removeTemporaryAttributesInRange:]_block_invoke @ 00039e3c =====

void ___83__NSMutableAttributedString_TemporaryAttributes__removeTemporaryAttributesInRange___block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    objc_stub::addAttributes_range_(*(ID *)(param_1 + 0x20),param_2,param_3,param_4);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    objc_stub::removeAttribute_range_
              (*(ID *)(param_1 + 0x20),&cf_MDOriginalAttributes,param_3,param_4);
    return;
  }
  return;
}


// ===== -[NSMutableAttributedString(TemporaryAttributes)_addTemporaryAttribute:value:inRange:] @ 00039ea8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
__NSMutableAttributedString_TemporaryAttributes__addTemporaryAttribute_value_inRange__
          (ID param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  undefined8 local_48;
  
  local_70 = PTR___NSConcreteStackBlock_0005ebe0;
  local_68 = 0xc2000000;
  local_60 = 
  ___86__NSMutableAttributedString_TemporaryAttributes__addTemporaryAttribute_value_inRange___block_invoke
  ;
  puStack_58 = &___block_descriptor_48_e8_32s40s_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_50 = param_1;
  local_48 = param_3;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_1,param_3,param_5,param_6,0,&local_70);
  if (param_4 == 0) {
    objc_stub::removeAttribute_range_(param_1,param_3,param_5,param_6);
  }
  else {
    objc_stub::addAttribute_value_range_(param_1,param_3,param_4,param_5,param_6);
  }
  return 0;
}


// ===== ___86-[NSMutableAttributedString(TemporaryAttributes)_addTemporaryAttribute:value:inRange:]_block_invoke @ 00039f9c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___86__NSMutableAttributedString_TemporaryAttributes__addTemporaryAttribute_value_inRange___block_invoke
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    local_78 = PTR___NSConcreteStackBlock_0005ebe0;
    local_70 = 0xc2000000;
    local_68 = 
    ___86__NSMutableAttributedString_TemporaryAttributes__addTemporaryAttribute_value_inRange___block_invoke_2
    ;
    puStack_60 = &___block_descriptor_56_e8_32s40s48s_e41_v40__0__NSDictionary_8__NSRange_QQ_16_B32l
    ;
    local_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x20);
    local_50 = param_2;
    objc_stub::enumerateAttribute_inRange_options_usingBlock_
              (*(ID *)(param_1 + 0x20),&cf_MDOriginalAttributes,param_3,param_4,0,&local_78);
  }
  return 0;
}


// ===== ___86-[NSMutableAttributedString(TemporaryAttributes)_addTemporaryAttribute:value:inRange:]_block_invoke_2 @ 0003a064 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void ___86__NSMutableAttributedString_TemporaryAttributes__addTemporaryAttribute_value_inRange___block_invoke_2
               (long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = objc_stub::objectForKeyedSubscript_(param_2,*(undefined8 *)(param_1 + 0x20));
  if (IVar1 == 0) {
    if (param_2 == 0) {
      uStack_50 = *(undefined8 *)(param_1 + 0x28);
      IVar1 = *(ID *)(param_1 + 0x30);
      local_58 = *(undefined8 *)(param_1 + 0x20);
      IVar2 = objc_stub::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&uStack_50,&local_58,1);
      objc_stub::addAttribute_value_range_(IVar1,&cf_MDOriginalAttributes,IVar2,param_3,param_4);
    }
    else {
      IVar1 = objc_stub::mutableCopy(param_2);
      objc_stub::setObject_forKey_
                (IVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      objc_stub::addAttribute_value_range_
                (*(ID *)(param_1 + 0x30),&cf_MDOriginalAttributes,IVar1,param_3,param_4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


// ===== ___72-[MDColorTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0003a550 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___72__MDColorTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 extraout_d0_01;
  
  IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::substringWithRange_(IVar1,param_2,param_3);
  IVar1 = objc_stub::sfColorFromString_((ID)&_OBJC_CLASS___NSColor,IVar1);
  if (IVar1 != 0) {
    IVar2 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_2);
    IVar3 = objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + 0x20),param_2,0);
    objc_stub::pointSize(IVar2);
    objc_stub::fontSizeMultiplier(*(ID *)(param_1 + 0x28));
    IVar2 = objc_stub::codeFont(*(ID *)(param_1 + 0x28));
    IVar2 = objc_stub::fontWithSize_(IVar2,extraout_d0 * extraout_d0_00);
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),*(undefined8 *)PTR__NSFontAttributeName_0005ec48,IVar2,
               param_2,param_3);
    IVar4 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar4 = objc_stub::characterAtIndex_(IVar4,param_2);
    if ((int)IVar4 == 0x23) {
      uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
      IVar4 = *(ID *)(param_1 + 0x20);
      IVar5 = objc_stub::markerColor(*(ID *)(param_1 + 0x28));
      objc_stub::addAttribute_value_range_(IVar4,uVar6,IVar5,param_2,1);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    IVar4 = *(ID *)(param_1 + 0x28);
    objc_stub::basePointSize(IVar2);
    IVar1 = objc_stub::attachmentForColorRange_inAttributedString_color_fontSize_borderWidth_
                      (IVar4,extraout_d0 * extraout_d0_00,extraout_d0_01,param_2,param_3,uVar6,IVar1
                      );
    IVar1 = objc_stub::attributedStringWithAttachment_((ID)&_OBJC_CLASS___NSAttributedString,IVar1);
    IVar1 = objc_stub::mutableCopy(IVar1);
    objc_stub::addAttributes_range_(IVar1,IVar3,0,1);
    objc_stub::replaceCharactersInRange_withAttributedString_
              (*(ID *)(param_1 + 0x20),param_2,0,IVar1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,0,IVar1);
  }
  return 0;
}


// ===== ___Block_byref_object_copy_ @ 0003ac78 =====

void ___Block_byref_object_copy_(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


// ===== ___Block_byref_object_dispose_ @ 0003ac88 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___Block_byref_object_dispose_(void)

{
  return 0;
}


// ===== ___81-[MDOrderTaskListTextOperation_resultForAttributedString:inRange:selectionRange:]_block_invoke @ 0003ac90 =====

void ___81__MDOrderTaskListTextOperation_resultForAttributedString_inRange_selectionRange___block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar1 = *(long *)(lVar2 + 0x18);
  if (lVar1 == -1) {
    *(long *)(lVar2 + 0x18) = param_4;
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  }
  if (param_4 == lVar1) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
  }
  return;
}


// ===== ___81-[MDOrderTaskListTextOperation_resultForAttributedString:inRange:selectionRange:]_block_invoke.1 @ 0003accc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___81__MDOrderTaskListTextOperation_resultForAttributedString_inRange_selectionRange___block_invoke_1
          (long param_1,ID param_2,long param_3,long param_4,undefined8 param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long extraout_x1;
  long extraout_x1_00;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_70 [8];
  long local_68;
  
  IVar1 = objc_stub::listLevel(param_6);
  if (IVar1 == *(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18)) {
    IVar1 = objc_stub::isTaskList(param_6);
    if ((IVar1 & 1) != 0) {
      IVar1 = objc_stub::taskType(param_6);
      if (IVar1 != 1) {
        return 0;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      if (param_2 != *(ID *)(lVar4 + 0x18)) {
        IVar1 = objc_stub::attributedSubstringFromRange_
                          (*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),param_2,param_3)
        ;
        IVar1 = objc_stub::mutableCopy(IVar1);
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
        if ((lVar4 == 0) ||
           ((IVar2 = objc_stub::hasListMarkerAtIndex_
                               (*(ID *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),lVar4 + -1)
            , (IVar2 & 1) == 0 &&
            (IVar2 = objc_stub::hasBlockquoteMarkerAtIndex_
                               (*(ID *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
                                *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) + -1),
            (int)IVar2 == 0)))) {
          param_4 = 0;
          IVar2 = param_2;
          lVar4 = param_3;
        }
        else {
          IVar1 = objc_stub::string(*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
          IVar2 = objc_stub::paragraphRangeForRange_(IVar1,param_2,param_3);
          IVar1 = objc_stub::attributedSubstringFromRange_
                            (*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),IVar2,
                             extraout_x1);
          IVar1 = objc_stub::mutableCopy(IVar1);
          param_4 = param_4 - IVar2;
          IVar3 = objc_stub::attributedSubstringFromRange_
                            (*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),IVar2,param_4)
          ;
          objc_stub::appendAttributedString_(IVar1,IVar3);
          objc_stub::replaceCharactersInRange_withString_(IVar1,0,param_4,&cf___);
          lVar4 = extraout_x1;
        }
        objc_stub::replaceCharactersInRange_withString_
                  (*(ID *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),IVar2,lVar4,&cf___);
        objc_stub::replaceCharactersInRange_withAttributedString_
                  (*(ID *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18),0,IVar1);
        IVar2 = objc_stub::string(*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
        lVar4 = param_3 + param_2 + -1;
        IVar2 = objc_stub::characterAtIndex_(IVar2,lVar4);
        if ((int)IVar2 != 10) {
          objc_stub::replaceCharactersInRange_withString_
                    (*(ID *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),lVar4,1,&cf___);
          IVar2 = *(ID *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
          IVar1 = objc_stub::length(IVar1);
          lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          lVar4 = *(long *)(lVar5 + 0x18) + (IVar1 - param_4);
          *(long *)(lVar5 + 0x18) = lVar4;
          IVar1 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
          IVar1 = objc_stub::initWithString_(IVar1,&cf_newline_s_);
          objc_stub::replaceCharactersInRange_withAttributedString_(IVar2,lVar4,0,IVar1);
        }
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        param_2 = *(ID *)(lVar4 + 0x18);
      }
      *(ID *)(lVar4 + 0x18) = param_2 + param_3;
      while( true ) {
        uVar7 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
        IVar1 = objc_stub::length(*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
        if (IVar1 <= uVar7) {
          return 0;
        }
        IVar1 = objc_stub::hasBlockquoteMarkerAtIndex_
                          (*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
                           *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
        if ((int)IVar1 == 0) break;
        objc_stub::rangeOfBlockquoteItemAtIndex_markerRange_
                  (*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18),auStack_70);
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + local_68;
      }
      return 0;
    }
    IVar1 = objc_stub::rangeOfListItemWithoutSublistsAtIndex_
                      (*(ID *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),param_2);
    lVar4 = IVar1 + extraout_x1_00;
    plVar6 = (long *)(param_1 + 0x30);
  }
  else {
    IVar1 = objc_stub::listLevel(param_6);
    plVar6 = (long *)(param_1 + 0x28);
    if (IVar1 + 1 <= *(ulong *)(*(long *)(*plVar6 + 8) + 0x18)) {
      return 0;
    }
    IVar1 = objc_stub::listLevel(param_6);
    lVar4 = IVar1 + 1;
  }
  *(long *)(*(long *)(*plVar6 + 8) + 0x18) = lVar4;
  return 0;
}


// ===== ___Block_byref_object_copy_ @ 0003b32c =====

void ___Block_byref_object_copy_(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


// ===== ___Block_byref_object_dispose_ @ 0003b33c =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 ___Block_byref_object_dispose_(void)

{
  return 0;
}


// ===== ___36-[MDLinkPreviewTextAttachment_label]_block_invoke @ 0003b344 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___36__MDLinkPreviewTextAttachment_label__block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::representedAttributedText(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::attributedSubstringFromRange_(IVar1,param_3,param_4);
    IVar1 = objc_stub::string(IVar1);
    *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = IVar1;
    return 0;
  }
  return param_1;
}


// ===== ___34-[MDLinkPreviewTextAttachment_url]_block_invoke @ 0003b4fc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___34__MDLinkPreviewTextAttachment_url__block_invoke
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::representedAttributedText(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::attributedSubstringFromRange_(IVar1,param_3,param_4);
    IVar1 = objc_stub::string(IVar1);
    *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = IVar1;
    return 0;
  }
  return param_1;
}


// ===== ___36-[MDLinkPreviewTextAttachment_title]_block_invoke @ 0003b6b4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long ___36__MDLinkPreviewTextAttachment_title__block_invoke
               (long param_1,long param_2,long param_3,long param_4)

{
  ID IVar1;
  
  if (param_2 != 0) {
    IVar1 = objc_stub::representedAttributedText(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::attributedSubstringFromRange_(IVar1,param_3 + 1,param_4 + -2);
    IVar1 = objc_stub::string(IVar1);
    *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = IVar1;
    return 0;
  }
  return param_1;
}


// ===== ___84-[MDMermaidFencedCodeTextStyler_styleTextInAttributedString:range:replacementBlock:]_block_invoke @ 0003bf94 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
___84__MDMermaidFencedCodeTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6,long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
          undefined8 param_11,undefined8 param_12,ID param_13)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long extraout_x1;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  IVar1 = objc_stub::lowercaseString(param_13);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_mermaid);
  if ((int)IVar1 == 0 || param_6 == 0x7fffffffffffffff) {
    return 0;
  }
  IVar1 = objc_stub::string(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::substringWithRange_(IVar1,param_9,param_10);
  IVar2 = objc_stub::whitespaceAndNewlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  IVar1 = objc_stub::stringByTrimmingCharactersInSet_(IVar1,IVar2);
  IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__C);
  IVar1 = objc_stub::stringByReplacingOccurrencesOfString_withString_(IVar1,IVar2,&cf___);
  IVar2 = objc_stub::length(IVar1);
  if (IVar2 != 0) {
    objc_stub::addAttribute_value_range_
              (*(ID *)(param_1 + 0x20),&cf_MDMermaidCodeContent,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e830,param_9,param_10);
    IVar2 = *(ID *)(param_1 + 0x20);
    auVar10 = _NSUnionRange(param_4,param_5,param_6,param_7);
    objc_stub::addAttribute_value_range_
              (IVar2,&cf_MDMermaidCode,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e830,
               auVar10._0_8_,auVar10._8_8_);
    IVar2 = objc_stub::fontAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    IVar3 = objc_stub::backgroundColorAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    IVar4 = objc_stub::fontColorAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    IVar5 = objc_stub::paragraphStyleAtIndex_(*(ID *)(param_1 + 0x20),param_4);
    IVar6 = _objc_alloc(&objc::class_t::MDMermaidTextAttachment);
    IVar6 = objc_stub::initWithRepresentedAttributedText_(IVar6,0);
    objc_stub::setMermaidCode_(IVar6,IVar1);
    objc_stub::setFont_(IVar6,IVar2);
    objc_stub::setParagraphStyle_(IVar6,IVar5);
    objc_stub::setAttachmentSize_(IVar6,0,0);
    objc_stub::setBackgroundColor_(IVar6,IVar3);
    objc_stub::setTextColor_(IVar6,IVar4);
    IVar2 = objc_stub::string(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::paragraphRangeForRange_(IVar2,param_6,param_7);
    IVar3 = objc_stub::string(*(ID *)(param_1 + 0x20));
    lVar8 = IVar2 + extraout_x1 + -1;
    IVar3 = objc_stub::characterAtIndex_(IVar3,lVar8);
    if ((int)IVar3 != 10) {
      lVar8 = IVar2 + extraout_x1;
    }
    IVar2 = objc_stub::attachmentAttributedString(IVar6);
    objc_stub::replaceCharactersInRange_withAttributedString_(*(ID *)(param_1 + 0x20),lVar8,0,IVar2)
    ;
    lVar7 = param_7 + param_6 + -1;
    IVar3 = objc_stub::attributesAtIndex_effectiveRange_(*(ID *)(param_1 + 0x20),lVar7,0);
    IVar3 = objc_stub::mutableCopy(IVar3);
    objc_stub::removeObjectForKey_
              (IVar3,*(undefined8 *)PTR__NSBackgroundColorAttributeName_0005ec38);
    objc_stub::removeObjectForKey_(IVar3,&cf_MDCodeBackgroundColor);
    objc_stub::removeObjectForKey_(IVar3,&cf_MDCodeBorderColor);
    objc_stub::removeObjectForKey_
              (IVar3,*(undefined8 *)PTR__PMKFencedCodeMarkerAttributeName_0005e8f8);
    uVar9 = *(undefined8 *)PTR__PMKCloseMarkerValue_0005e898;
    IVar4 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,uVar9);
    objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_MDSpacer);
    objc_stub::setObject_forKeyedSubscript_(IVar3,IVar1,&cf_MDMermaidCode);
    objc_stub::addAttributes_range_(*(ID *)(param_1 + 0x20),IVar3,lVar8,1);
    IVar3 = *(ID *)(param_1 + 0x20);
    IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,uVar9);
    objc_stub::addAttribute_value_range_(IVar3,&cf_MDSpacer,IVar1,lVar7,1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar8,0,IVar2);
  }
  return 0;
}


