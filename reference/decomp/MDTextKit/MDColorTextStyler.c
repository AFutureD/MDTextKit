// ===== MDColorTextStyler::init @ 0003a404 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDColorTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDColorTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x402c000000000000);
    objc_stub::setCodeFont_(self,IVar1);
    objc_stub::setFontSizeMultiplier_(self,0x3ff0000000000000);
  }
  return self;
}


// ===== MDColorTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0003a488 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDColorTextStyler::styleTextInAttributedString_range_replacementBlock_
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
  ___72__MDColorTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  puStack_50 = &___block_descriptor_56_e8_32s40s48bs_e24_v32__0__NSRange_QQ_8_B24l;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  objc_stub::enumerateColorInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}


// ===== MDColorTextStyler::attachmentForColorRange:inAttributedString:color:fontSize:borderWidth: @ 0003a7d8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

ID MDColorTextStyler::attachmentForColorRange_inAttributedString_color_fontSize_borderWidth_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4,ID param_5,double param_6,
             double param_7)

{
  ID IVar1;
  ID IVar2;
  undefined8 extraout_d0;
  undefined8 uVar3;
  double dVar4;
  
  IVar1 = _objc_alloc(&objc::class_t::MDColorTextAttachment,param_2,param_3.field0_0x0,
                      param_3.field1_0x8);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
  IVar2 = objc_stub::initWithString_(IVar2,&cf___);
  IVar1 = objc_stub::initWithRepresentedAttributedText_(IVar1,IVar2);
  dVar4 = param_6 * 1.1;
  objc_stub::setAttachmentSize_(IVar1,dVar4 + dVar4 * 0.2,dVar4);
  uVar3 = 0;
  objc_stub::setDrawingRect_(IVar1,dVar4 * 0.2 * 0.5,0,dVar4,dVar4);
  objc_stub::setBorderWidth_(IVar1,param_7);
  objc_stub::setColor_(IVar1,param_5);
  objc_stub::attachmentSize(IVar1);
  objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_4,uVar3,param_3.field0_0x0);
  objc_stub::setAttachmentBaselineOffset_(IVar1,extraout_d0);
  objc_stub::updateAttachmentImage(IVar1);
  return IVar1;
}


// ===== MDColorTextStyler::codeFont @ 0003a920 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDColorTextStyler::codeFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_codeFont);
}


// ===== MDColorTextStyler::setCodeFont: @ 0003a930 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDColorTextStyler::setCodeFont_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_codeFont) = param_3;
  return;
}


// ===== MDColorTextStyler::fontSizeMultiplier @ 0003a93c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDColorTextStyler::fontSizeMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_fontSizeMultiplier);
}


// ===== MDColorTextStyler::setFontSizeMultiplier: @ 0003a94c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDColorTextStyler::setFontSizeMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_fontSizeMultiplier) = param_3;
  return;
}


// ===== MDColorTextStyler::.cxx_destruct @ 0003a95c =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDColorTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_codeFont) = 0;
  return;
}


