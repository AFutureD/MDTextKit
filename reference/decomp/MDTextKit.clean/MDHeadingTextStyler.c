// ===== MDHeadingTextStyler::init @ 000175d8 =====

ID MDHeadingTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDHeadingTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = systemFontOfSize_(NSFont,0x402c000000000000);
    setHeaderFont_(self,IVar1);
    IVar1 = blackColor(NSColor);
    setTextColor_(self,IVar1);
  }
  return self;
}

// ===== MDHeadingTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0001767c =====

void MDHeadingTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___74__MDHeadingTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateHeadingInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDHeadingTextStyler::atxAttachmentForRepresentedAttributedText:headerLevel:headerFont:rtl: @ 00017bc0 =====

ID MDHeadingTextStyler::atxAttachmentForRepresentedAttributedText_headerLevel_headerFont_rtl_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,bool param_6)

{
  
  local_90 = numberWithUnsignedInteger_(NSNumber,param_4);
  local_88 = numberWithBool_(NSNumber,(ulong)param_6);
  local_80 = string(param_3);
  IVar1 = arrayWithObjects_count_(NSArray,&local_90,3);
  IVar2 = cache(param_1);
  IVar2 = objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    baseFontSize(param_1);
    dVar5 = extraout_d0 * 1.1;
    baseFontSize(param_1);
    columnSize(param_1);
    dVar6 = (extraout_d0_01 - dVar5) * 0.5;
    IVar2 = _objc_alloc(&objc::class_t::MDATXHeadingAttachment);
    IVar2 = initWithRepresentedAttributedText_(IVar2,param_3);
    baseTabSize(param_1);
    setAttachmentSize_(IVar2);
    uVar4 = 0;
    setDrawingRect_(IVar2,dVar6,0,dVar5,extraout_d0_00 * 0.9);
    if (param_6 != 0) {
      attachmentSize(IVar2);
      uVar4 = 0;
      setDrawingRect_
                (IVar2,(extraout_d0_02 - dVar6) - dVar5,0,dVar5,extraout_d0_00 * 0.9);
    }
    if (3 < param_4) {
      attachmentSize(IVar2);
      baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,uVar4,0);
      setAttachmentBaselineOffset_(IVar2);
    }
    setRepresentedAttributedText_(IVar2,param_3);
    IVar3 = markerColor(param_1);
    setColor_(IVar2,IVar3);
    IVar3 = accentColor(param_1);
    setAccentColor_(IVar2,IVar3);
    basePointSize(param_1);
    setBorderWidth_(IVar2);
    setLevel_(IVar2,param_4);
    updateAttachmentImage(IVar2);
    IVar3 = cache(param_1);
    setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = copy(IVar2);
    return IVar1;
  }
}

// ===== MDHeadingTextStyler::setextAttachmentForRepresentedAttributedText:headerLevel:headerFont: @ 00017ebc =====

ID MDHeadingTextStyler::setextAttachmentForRepresentedAttributedText_headerLevel_headerFont_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  
  local_68 = &cf_setext;
  local_60 = numberWithUnsignedInteger_(NSNumber,param_4);
  IVar1 = arrayWithObjects_count_(NSArray,&local_68,2);
  IVar2 = cache(param_1);
  IVar2 = objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    IVar2 = _objc_alloc(&objc::class_t::MDSETEXTHeadingAttachment);
    IVar2 = initWithRepresentedAttributedText_(IVar2,param_3);
    maxTextContainerWidth(param_1);
    baseFontSize(param_1);
    uVar4 = extraout_d0_00;
    setAttachmentSize_(IVar2,extraout_d0,extraout_d0_00);
    basePointSize(param_1);
    setLineWidth_(IVar2,extraout_d0_01 + extraout_d0_01);
    IVar3 = markerColor(param_1);
    setLineColor_(IVar2,IVar3);
    attachmentSize(IVar2);
    baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,uVar4,0);
    setAttachmentBaselineOffset_(IVar2);
    updateAttachmentImage(IVar2);
    IVar3 = cache(param_1);
    setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = copy(IVar2);
    return IVar1;
  }
}

// ===== MDHeadingTextStyler::headingFontForBaseFont:headerLevel: @ 000180bc =====

ID MDHeadingTextStyler::headingFontForBaseFont_headerLevel_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  
  local_68 = param_3;
  local_60 = numberWithInteger_(NSNumber,param_4);
  IVar1 = arrayWithObjects_count_(NSArray,&local_68,2);
  IVar2 = cache(param_1);
  IVar1 = objectForKey_(IVar2,IVar1);
  if (IVar1 == 0) {
    baseFontSize(param_1);
    modularScale(param_1);
    headerSizeForBaseSize_headerLevel_maxHeaderLevel_modularScale_
              (param_1,extraout_d0,extraout_d0_00,param_4,7);
    IVar1 = headerFont(param_1);
    IVar1 = fontWithSize_(IVar1,extraout_d0_01);
    IVar2 = cache(param_1);
    setObject_forKey_(IVar2,IVar1,param_3);
  }
    return IVar1;
  }
}

// ===== MDHeadingTextStyler::headerSizeForBaseSize:headerLevel:maxHeaderLevel:modularScale: @ 00018250 =====

double MDHeadingTextStyler::headerSizeForBaseSize_headerLevel_maxHeaderLevel_modularScale_
                 (ID param_1,SEL param_2,double param_3,long_long param_4,long_long param_5,
                 double param_6)

{
  long_long lVar1;
  long_long lVar2;
  
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

ID MDHeadingTextStyler::headerFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_headerFont);
}

// ===== MDHeadingTextStyler::setHeaderFont: @ 000182bc =====

void MDHeadingTextStyler::setHeaderFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_headerFont) = param_3;
  return;
}

// ===== MDHeadingTextStyler::modularScale @ 000182c8 =====

double MDHeadingTextStyler::modularScale(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_modularScale);
}

// ===== MDHeadingTextStyler::setModularScale: @ 000182d8 =====

void MDHeadingTextStyler::setModularScale_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_modularScale) = param_3;
  return;
}

// ===== MDHeadingTextStyler::lineHeightMultiplier @ 000182e8 =====

double MDHeadingTextStyler::lineHeightMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lineHeightMultiplier);
}

// ===== MDHeadingTextStyler::setLineHeightMultiplier: @ 000182f8 =====

void MDHeadingTextStyler::setLineHeightMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lineHeightMultiplier) = param_3;
  return;
}

// ===== MDHeadingTextStyler::addTopBottomPadding @ 00018308 =====

bool MDHeadingTextStyler::addTopBottomPadding(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_addTopBottomPadding);
}

// ===== MDHeadingTextStyler::setAddTopBottomPadding: @ 00018318 =====

void MDHeadingTextStyler::setAddTopBottomPadding_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_addTopBottomPadding) = (char)param_3;
  return;
}

// ===== MDHeadingTextStyler::paddingTopMultiplier @ 00018328 =====

double MDHeadingTextStyler::paddingTopMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_paddingTopMultiplier);
}

// ===== MDHeadingTextStyler::setPaddingTopMultiplier: @ 00018338 =====

void MDHeadingTextStyler::setPaddingTopMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_paddingTopMultiplier) = param_3;
  return;
}

// ===== MDHeadingTextStyler::paddingBottomMultiplier @ 00018348 =====

double MDHeadingTextStyler::paddingBottomMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_paddingBottomMultiplier);
}

// ===== MDHeadingTextStyler::setPaddingBottomMultiplier: @ 00018358 =====

void MDHeadingTextStyler::setPaddingBottomMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_paddingBottomMultiplier) = param_3;
  return;
}

// ===== MDHeadingTextStyler::textColor @ 00018368 =====

ID MDHeadingTextStyler::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}

// ===== MDHeadingTextStyler::setTextColor: @ 00018378 =====

void MDHeadingTextStyler::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}

// ===== MDHeadingTextStyler::accentColor @ 00018384 =====

ID MDHeadingTextStyler::accentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_accentColor);
}

// ===== MDHeadingTextStyler::setAccentColor: @ 00018394 =====

void MDHeadingTextStyler::setAccentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_accentColor) = param_3;
  return;
}

// ===== MDHeadingTextStyler::.cxx_destruct @ 000183a0 =====

void MDHeadingTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_accentColor) = 0;
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_headerFont) = 0;
  return;
}

