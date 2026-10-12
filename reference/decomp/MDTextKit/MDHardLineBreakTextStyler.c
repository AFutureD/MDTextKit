// ===== MDHardLineBreakTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0001f3d8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDHardLineBreakTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  ID local_38;
  
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = 
  ___80__MDHardLineBreakTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
  ;
  puStack_50 = &___block_descriptor_56_e8_32s40s48bs_e24_v32__0__NSRange_QQ_8_B24l;
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_5;
  objc_stub::enumerateHardLinebreakInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


// ===== MDHardLineBreakTextStyler::attachmentForRange:inAttributedString: @ 0001f54c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDHardLineBreakTextStyler::attachmentForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  unsigned_long_long uVar3;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 uVar4;
  double dVar5;
  
  uVar3 = param_3.field0_0x0;
  IVar1 = _objc_alloc(&objc::class_t::MDHardLineBreakTextAttachment);
  IVar2 = objc_stub::attributedSubstringFromRange_(param_4,uVar3,param_3.field1_0x8);
  IVar1 = objc_stub::initWithRepresentedAttributedText_(IVar1,IVar2);
  IVar2 = objc_stub::fontAtIndex_(param_4,uVar3);
  objc_stub::pointSize(IVar2);
  objc_stub::pointSize(IVar2);
  dVar5 = (double)(long)extraout_d0;
  objc_stub::setAttachmentSize_
            (IVar1,(double)((long)(extraout_d0_00 * 0.4) + (long)extraout_d0),dVar5);
  uVar4 = 0;
  objc_stub::setDrawingRect_(IVar1,(double)(long)(extraout_d0_00 * 0.4) / 2.0,0,dVar5,dVar5);
  IVar2 = objc_stub::baseTextColor(param_1);
  objc_stub::setArrowColor_(IVar1,IVar2);
  objc_stub::attachmentSize(IVar1);
  objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_4,uVar4,uVar3);
  objc_stub::setAttachmentBaselineOffset_(IVar1,extraout_d0_01);
  objc_stub::updateAttachmentImage(IVar1);
  return IVar1;
}


