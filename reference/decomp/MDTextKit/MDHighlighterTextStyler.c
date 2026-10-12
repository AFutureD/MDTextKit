// ===== MDHighlighterTextStyler::init @ 0000bd4c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHighlighterTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_d8;
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
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_d8.super_class = &objc::class_t::MDHighlighterTextStyler;
  local_d8.receiver = param_1;
  self = _objc_msgSendSuper2(&local_d8,"init");
  if (self != 0) {
    local_98 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    local_90 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    local_88 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    local_80 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    local_78 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    local_70 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_98,6);
    objc_stub::setTextColors_(self,IVar1);
    local_c8 = objc_stub::greenColor((ID)&_OBJC_CLASS___NSColor);
    local_c0 = objc_stub::greenColor((ID)&_OBJC_CLASS___NSColor);
    local_b8 = objc_stub::greenColor((ID)&_OBJC_CLASS___NSColor);
    local_b0 = objc_stub::greenColor((ID)&_OBJC_CLASS___NSColor);
    local_a8 = objc_stub::greenColor((ID)&_OBJC_CLASS___NSColor);
    local_a0 = objc_stub::greenColor((ID)&_OBJC_CLASS___NSColor);
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_c8,6);
    objc_stub::setBackgroundColors_(self,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_68) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDHighlighterTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0000bfc8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDHighlighterTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID IStack_58;
  
  local_80 = PTR___NSConcreteStackBlock_0005ebe0;
  local_78 = 0xc2000000;
  local_70 = 
  ___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
  ;
  puStack_68 = &___block_descriptor_48_e8_32s40s_e27_v40__0__NSRange_QQ_8Q24_B32l;
  local_b8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_b0 = 0xc2000000;
  local_a8 = 
  ___78__MDHighlighterTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_4
  ;
  puStack_a0 = &___block_descriptor_56_e8_32s40s48bs_e30_v44__0__NSRange_QQ_8B24Q28_B36l;
  local_98 = param_1;
  local_90 = param_3;
  local_88 = param_5;
  local_60 = param_3;
  IStack_58 = param_1;
  objc_stub::enumerateHighlighterInRange_options_highlighterBlock_colorBlock_markerBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&___block_literal_global,&local_80,
             &local_b8);
  return;
}


// ===== MDHighlighterTextStyler::attachmentForRange:color:inAttributedString: @ 0000c650 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID MDHighlighterTextStyler::attachmentForRange_color_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  unsigned_long_long uVar3;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 uVar4;
  
  uVar3 = param_3.field0_0x0;
  IVar1 = _objc_alloc(&objc::class_t::MDHighlighterTextAttachment);
  IVar2 = objc_stub::attributedSubstringFromRange_(param_5,uVar3,param_3.field1_0x8);
  IVar1 = objc_stub::initWithRepresentedAttributedText_(IVar1,IVar2);
  IVar2 = objc_stub::fontAtIndex_(param_5,uVar3);
  objc_stub::pointSize(IVar2);
  objc_stub::pointSize(IVar2);
  objc_stub::setAttachmentSize_
            (IVar1,extraout_d0 + (double)(long)(extraout_d0_00 * 0.2),extraout_d0);
  uVar4 = 0;
  objc_stub::setDrawingRect_
            (IVar1,(double)(long)(extraout_d0_00 * 0.2) * 0.3,0,extraout_d0,extraout_d0);
  objc_stub::attachmentSize(IVar1);
  objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_5,uVar4,uVar3);
  objc_stub::setAttachmentBaselineOffset_(IVar1,extraout_d0_01);
  IVar2 = objc_stub::colorWithAlphaComponent_(param_4,0x3fe3333333333333);
  objc_stub::setColor_(IVar1,IVar2);
  objc_stub::setAccentColor_(IVar1,param_4);
  objc_stub::updateAttachmentImage(IVar1);
  return IVar1;
}


// ===== MDHighlighterTextStyler::backgroundColors @ 0000c7dc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHighlighterTextStyler::backgroundColors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColors);
}


// ===== MDHighlighterTextStyler::setBackgroundColors: @ 0000c7ec =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHighlighterTextStyler::setBackgroundColors_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColors) = param_3;
  return;
}


// ===== MDHighlighterTextStyler::textColors @ 0000c7f8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHighlighterTextStyler::textColors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColors);
}


// ===== MDHighlighterTextStyler::setTextColors: @ 0000c808 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHighlighterTextStyler::setTextColors_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColors) = param_3;
  return;
}


// ===== MDHighlighterTextStyler::.cxx_destruct @ 0000c814 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDHighlighterTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textColors) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColors) = 0;
  return;
}


