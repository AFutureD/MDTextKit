// ===== MDHeadingTextStyler::init @ 000175d8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHeadingTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDHeadingTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x402c000000000000);
    objc_stub::setHeaderFont_(self,IVar1);
    IVar1 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setTextColor_(self,IVar1);
  }
  return self;
}


// ===== MDHeadingTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0001767c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDHeadingTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID IStack_40;
  ID local_38;
  
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = 
  ___74__MDHeadingTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_50 = &
               ___block_descriptor_56_e8_32s40s48bs_e72_v88__0__NSRange_QQ_8__NSRange_QQ_24__NSRange_QQ_40__NSRange_QQ_56q72_B80l
  ;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateHeadingInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


// ===== MDHeadingTextStyler::atxAttachmentForRepresentedAttributedText:headerLevel:headerFont:rtl: @ 00017bc0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x2c bytes */

ID MDHeadingTextStyler::atxAttachmentForRepresentedAttributedText_headerLevel_headerFont_rtl_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,bool param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  ID local_90;
  ID local_88;
  ID local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_90 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,param_4);
  local_88 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)param_6);
  local_80 = objc_stub::string(param_3);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_90,3);
  IVar2 = objc_stub::cache(param_1);
  IVar2 = objc_stub::objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    objc_stub::baseFontSize(param_1);
    dVar5 = extraout_d0 * 1.1;
    objc_stub::baseFontSize(param_1);
    objc_stub::columnSize(param_1);
    dVar6 = (extraout_d0_01 - dVar5) * 0.5;
    IVar2 = _objc_alloc(&objc::class_t::MDATXHeadingAttachment);
    IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar2,param_3);
    objc_stub::baseTabSize(param_1);
    objc_stub::setAttachmentSize_(IVar2);
    uVar4 = 0;
    objc_stub::setDrawingRect_(IVar2,dVar6,0,dVar5,extraout_d0_00 * 0.9);
    if (param_6 != 0) {
      objc_stub::attachmentSize(IVar2);
      uVar4 = 0;
      objc_stub::setDrawingRect_
                (IVar2,(extraout_d0_02 - dVar6) - dVar5,0,dVar5,extraout_d0_00 * 0.9);
    }
    if (3 < param_4) {
      objc_stub::attachmentSize(IVar2);
      objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,uVar4,0);
      objc_stub::setAttachmentBaselineOffset_(IVar2);
    }
    objc_stub::setRepresentedAttributedText_(IVar2,param_3);
    IVar3 = objc_stub::markerColor(param_1);
    objc_stub::setColor_(IVar2,IVar3);
    IVar3 = objc_stub::accentColor(param_1);
    objc_stub::setAccentColor_(IVar2,IVar3);
    objc_stub::basePointSize(param_1);
    objc_stub::setBorderWidth_(IVar2);
    objc_stub::setLevel_(IVar2,param_4);
    objc_stub::updateAttachmentImage(IVar2);
    IVar3 = objc_stub::cache(param_1);
    objc_stub::setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    objc_stub::setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = objc_stub::copy(IVar2);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_78) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDHeadingTextStyler::setextAttachmentForRepresentedAttributedText:headerLevel:headerFont: @ 00017ebc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDHeadingTextStyler::setextAttachmentForRepresentedAttributedText_headerLevel_headerFont_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  double extraout_d0_01;
  undefined8 uVar4;
  cfstringStruct *local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_68 = &cf_setext;
  local_60 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,param_4);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_68,2);
  IVar2 = objc_stub::cache(param_1);
  IVar2 = objc_stub::objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    IVar2 = _objc_alloc(&objc::class_t::MDSETEXTHeadingAttachment);
    IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar2,param_3);
    objc_stub::maxTextContainerWidth(param_1);
    objc_stub::baseFontSize(param_1);
    uVar4 = extraout_d0_00;
    objc_stub::setAttachmentSize_(IVar2,extraout_d0,extraout_d0_00);
    objc_stub::basePointSize(param_1);
    objc_stub::setLineWidth_(IVar2,extraout_d0_01 + extraout_d0_01);
    IVar3 = objc_stub::markerColor(param_1);
    objc_stub::setLineColor_(IVar2,IVar3);
    objc_stub::attachmentSize(IVar2);
    objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,uVar4,0);
    objc_stub::setAttachmentBaselineOffset_(IVar2);
    objc_stub::updateAttachmentImage(IVar2);
    IVar3 = objc_stub::cache(param_1);
    objc_stub::setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    objc_stub::setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = objc_stub::copy(IVar2);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDHeadingTextStyler::headingFontForBaseFont:headerLevel: @ 000180bc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID MDHeadingTextStyler::headingFontForBaseFont_headerLevel_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  ID local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_68 = param_3;
  local_60 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,param_4);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_68,2);
  IVar2 = objc_stub::cache(param_1);
  IVar1 = objc_stub::objectForKey_(IVar2,IVar1);
  if (IVar1 == 0) {
    objc_stub::baseFontSize(param_1);
    objc_stub::modularScale(param_1);
    objc_stub::headerSizeForBaseSize_headerLevel_maxHeaderLevel_modularScale_
              (param_1,extraout_d0,extraout_d0_00,param_4,7);
    IVar1 = objc_stub::headerFont(param_1);
    IVar1 = objc_stub::fontWithSize_(IVar1,extraout_d0_01);
    IVar2 = objc_stub::cache(param_1);
    objc_stub::setObject_forKey_(IVar2,IVar1,param_3);
  }
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDHeadingTextStyler::headerSizeForBaseSize:headerLevel:maxHeaderLevel:modularScale: @ 00018250 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

double MDHeadingTextStyler::headerSizeForBaseSize_headerLevel_maxHeaderLevel_modularScale_
                 (ID param_1,SEL param_2,double param_3,long_long param_4,long_long param_5,
                 double param_6)

{
  long_long lVar1;
  long_long lVar2;
  double dVar3;
  
  lVar1 = param_5;
  if ((long)param_4 < 4) {
    lVar1 = param_4;
  }
  if (param_4 == 3) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (param_4 != 2) {
    lVar2 = lVar1;
  }
  dVar3 = (double)_pow(param_6,(double)(long)(param_5 - lVar2));
  return (double)(float)(int)(param_3 * dVar3);
}


// ===== MDHeadingTextStyler::headerFont @ 000182ac =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHeadingTextStyler::headerFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_headerFont);
}


// ===== MDHeadingTextStyler::setHeaderFont: @ 000182bc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHeadingTextStyler::setHeaderFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_headerFont) = param_3;
  return;
}


// ===== MDHeadingTextStyler::modularScale @ 000182c8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDHeadingTextStyler::modularScale(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_modularScale);
}


// ===== MDHeadingTextStyler::setModularScale: @ 000182d8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHeadingTextStyler::setModularScale_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_modularScale) = param_3;
  return;
}


// ===== MDHeadingTextStyler::lineHeightMultiplier @ 000182e8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDHeadingTextStyler::lineHeightMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lineHeightMultiplier);
}


// ===== MDHeadingTextStyler::setLineHeightMultiplier: @ 000182f8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHeadingTextStyler::setLineHeightMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lineHeightMultiplier) = param_3;
  return;
}


// ===== MDHeadingTextStyler::addTopBottomPadding @ 00018308 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDHeadingTextStyler::addTopBottomPadding(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_addTopBottomPadding);
}


// ===== MDHeadingTextStyler::setAddTopBottomPadding: @ 00018318 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDHeadingTextStyler::setAddTopBottomPadding_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_addTopBottomPadding) = (char)param_3;
  return;
}


// ===== MDHeadingTextStyler::paddingTopMultiplier @ 00018328 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDHeadingTextStyler::paddingTopMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_paddingTopMultiplier);
}


// ===== MDHeadingTextStyler::setPaddingTopMultiplier: @ 00018338 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHeadingTextStyler::setPaddingTopMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_paddingTopMultiplier) = param_3;
  return;
}


// ===== MDHeadingTextStyler::paddingBottomMultiplier @ 00018348 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDHeadingTextStyler::paddingBottomMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_paddingBottomMultiplier);
}


// ===== MDHeadingTextStyler::setPaddingBottomMultiplier: @ 00018358 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHeadingTextStyler::setPaddingBottomMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_paddingBottomMultiplier) = param_3;
  return;
}


// ===== MDHeadingTextStyler::textColor @ 00018368 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHeadingTextStyler::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}


// ===== MDHeadingTextStyler::setTextColor: @ 00018378 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHeadingTextStyler::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}


// ===== MDHeadingTextStyler::accentColor @ 00018384 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDHeadingTextStyler::accentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_accentColor);
}


// ===== MDHeadingTextStyler::setAccentColor: @ 00018394 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDHeadingTextStyler::setAccentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_accentColor) = param_3;
  return;
}


// ===== MDHeadingTextStyler::.cxx_destruct @ 000183a0 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDHeadingTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_accentColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_headerFont) = 0;
  return;
}


