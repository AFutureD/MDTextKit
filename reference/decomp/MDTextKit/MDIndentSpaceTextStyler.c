// ===== MDIndentSpaceTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000b56c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDIndentSpaceTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  ID local_48;
  
  local_78 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = 0xc2000000;
  local_68 = 
  ___78__MDIndentSpaceTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_60 = &___block_descriptor_56_e8_32s40s48bs_e27_v40__0_8__NSRange_QQ_16_B32l;
  local_58 = param_1;
  local_50 = param_3;
  local_48 = param_5;
  objc_stub::enumerateAttribute_inRange_options_usingBlock_
            (param_3,*(undefined8 *)PTR__PMKIndentSpaceAttributeName_0005e9a0,param_4->field0_0x0,
             param_4->field1_0x8,0,&local_78);
  return;
}


// ===== MDIndentSpaceTextStyler::attachmentForRange:inAttributedString:tabSize:paragraphIndent:fontSize: @ 0000b760 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDIndentSpaceTextStyler::attachmentForRange_inAttributedString_tabSize_paragraphIndent_fontSize_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,double param_5,double param_6,
             double param_7)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  unsigned_long_long uVar5;
  double dVar6;
  double extraout_d0;
  
  uVar5 = param_3.field0_0x0;
  IVar1 = _objc_alloc(&objc::class_t::MDIndentSpaceTextAttachment);
  IVar2 = objc_stub::attributedSubstringFromRange_(param_4,uVar5,param_3.field1_0x8);
  IVar1 = objc_stub::initWithRepresentedAttributedText_(IVar1,IVar2);
  IVar2 = objc_stub::listOrBlockquoteItemInfoAtIndex_(param_4,uVar5 + param_3.field1_0x8);
  IVar3 = objc_stub::attribute_atIndex_effectiveRange_
                    (param_4,*(undefined8 *)PTR__PMKIndentSpaceAttributeName_0005e9a0,uVar5,0);
  IVar3 = objc_stub::intValue(IVar3);
  IVar4 = objc_stub::isOrderedList(IVar2);
  dVar6 = 0.0;
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::paragraphStyleAtIndex_(param_4,uVar5);
    objc_stub::headIndent(IVar4);
    IVar2 = objc_stub::listLevel(IVar2);
    dVar6 = ((extraout_d0 - param_5) - param_6) - (double)IVar2 * param_5;
  }
  objc_stub::setAttachmentSize_(IVar1,dVar6 + (double)(ulong)(long)(int)IVar3 * param_5,param_7);
  objc_stub::updateAttachmentImage(IVar1);
  return IVar1;
}


// ===== MDIndentSpaceTextStyler::attachmentForRange:inAttributedString: @ 0000b8cc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDIndentSpaceTextStyler::attachmentForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  
  IVar1 = _objc_opt_class(param_1);
  objc_stub::baseTabSize(param_1);
  objc_stub::defaultParagraphIndent(param_1);
  objc_stub::baseFontSize(param_1);
  IVar1 = objc_stub::attachmentForRange_inAttributedString_tabSize_paragraphIndent_fontSize_
                    (IVar1,extraout_d0,extraout_d0_00,extraout_d0_01,param_3.field0_0x0,
                     param_3.field1_0x8,param_4);
  return IVar1;
}


