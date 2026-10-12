// ===== SFTextAttachment::init @ 00015bec =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachment::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::initWithRepresentedAttributedText_(param_1,0);
  return IVar1;
}


// ===== SFTextAttachment::initWithRepresentedAttributedText: @ 00015bf4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID SFTextAttachment::initWithRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SFTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    if (param_3 == 0) {
      IVar1 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
      IVar1 = objc_stub::initWithString_(IVar1,&cf___);
      objc_stub::setRepresentedAttributedText_(self,IVar1);
    }
    else {
      objc_stub::setRepresentedAttributedText_(self,param_3);
    }
    objc_stub::commonInit(self);
  }
  return self;
}


// ===== SFTextAttachment::representedText @ 00015ca8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachment::representedText(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar1 = objc_stub::stringByExpandingTextAttachments(IVar1);
  return IVar1;
}


// ===== SFTextAttachment::commonInit @ 00015cec =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void SFTextAttachment::commonInit(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = _objc_alloc_init(&objc::class_t::SFTextAttachmentCell);
  objc_stub::setAttachmentCell_(param_1,uVar1);
  return;
}


// ===== SFTextAttachment::updateAttachmentImage @ 00015d28 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void SFTextAttachment::updateAttachmentImage(ID param_1,SEL param_2)

{
  return;
}


// ===== SFTextAttachment::setPreventAttachmentImageRendering: @ 00015d2c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void SFTextAttachment::setPreventAttachmentImageRendering_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_preventAttachmentImageRendering) = (char)param_3;
  if (param_3 != 0) {
    objc_stub::setImage_(param_1,0);
    return;
  }
  return;
}


// ===== SFTextAttachment::attachmentAttributedString @ 00015d48 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachment::attachmentAttributedString(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar1 = objc_stub::length(IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::representedAttributedText(param_1);
    IVar1 = objc_stub::attributesAtIndex_effectiveRange_(IVar1,0,0);
  }
  IVar1 = objc_stub::attachmentAttributedStringWithAttributes_(param_1,IVar1);
  return IVar1;
}


// ===== SFTextAttachment::attachmentAttributedStringWithAttributes: @ 00015df0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID SFTextAttachment::attachmentAttributedStringWithAttributes_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::attributedStringWithAttachment_((ID)&_OBJC_CLASS___NSAttributedString,param_1);
  if (param_3 != 0) {
    self = objc_stub::mutableCopy(self);
    objc_stub::addAttributes_range_(self,param_3,0,1);
  }
  return self;
}


// ===== SFTextAttachment::setHidden: @ 00015e7c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void SFTextAttachment::setHidden_(ID param_1,SEL param_2,bool param_3)

{
  objc_stub::setHidden_keepBounds_(param_1,(ulong)param_3,0);
  return;
}


// ===== SFTextAttachment::setHidden:keepBounds: @ 00015e84 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::setHidden_keepBounds_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  long lVar1;
  undefined8 extraout_d0;
  undefined8 in_d1;
  
  *(char *)(param_1 + (long)_hidden) = (char)param_3;
  lVar1 = (long)_hiddenWithBounds;
  *(char *)(param_1 + lVar1) = (char)param_4;
  if (((param_4 & 1) == 0) && (param_3 != 0)) {
    objc_stub::setBounds_
              (param_1,*(undefined8 *)PTR__CGRectZero_0005ed60,
               *(undefined8 *)(PTR__CGRectZero_0005ed60 + 8),
               *(undefined8 *)(PTR__CGRectZero_0005ed60 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_0005ed60 + 0x18));
    return;
  }
  if ((param_3 & 1) == 0) {
    objc_stub::attachmentSize(param_1);
    objc_stub::attachmentSize(param_1);
    objc_stub::setBounds_(param_1,0,0,extraout_d0,in_d1);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


// ===== SFTextAttachment::setAttachmentSize: @ 00015f20 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

void SFTextAttachment::setAttachmentSize_(ID param_1,SEL param_2,CGSize param_3)

{
  long lVar1;
  
  lVar1 = (long)_attachmentSize;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0;
  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;
  objc_stub::setBounds_(param_1,0,0,param_3.field0_0x0,param_3.field1_0x8);
  return;
}


// ===== SFTextAttachment::attachmentSize @ 00015f44 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

CGSize SFTextAttachment::attachmentSize(ID param_1,SEL param_2)

{
  ID IVar1;
  CGSize *pCVar2;
  
  IVar1 = objc_stub::hidden(param_1);
  if (((int)IVar1 == 0) ||
     (IVar1 = objc_stub::hiddenWithBounds(param_1), pCVar2 = (CGSize *)PTR__CGSizeZero_0005ed68,
     (int)IVar1 != 0)) {
    pCVar2 = (CGSize *)(param_1 + (long)_attachmentSize);
  }
  return *pCVar2;
}


// ===== SFTextAttachment::unhiddenAttachmentSize @ 00015f90 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

CGSize SFTextAttachment::unhiddenAttachmentSize(ID param_1,SEL param_2)

{
  return *(CGSize *)(param_1 + (long)_attachmentSize);
}


// ===== SFTextAttachment::maxWidthAttachmentAtIndex:forTextContainer: @ 00015fa4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

double SFTextAttachment::maxWidthAttachmentAtIndex_forTextContainer_
                 (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  
  objc_stub::size(param_4);
  objc_stub::lineFragmentPadding(param_4);
  IVar1 = objc_stub::layoutManager(param_4);
  IVar1 = objc_stub::textStorage(IVar1);
  IVar1 = objc_stub::attribute_atIndex_effectiveRange_
                    (IVar1,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,param_3,0);
  objc_stub::headIndent(IVar1);
  objc_stub::tailIndent(IVar1);
  return ((extraout_d0 + extraout_d0_00 * -2.0) - extraout_d0_01) + extraout_d0_02;
}


// ===== SFTextAttachment::wantAttachmentBaselineOffset @ 0001607c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool SFTextAttachment::wantAttachmentBaselineOffset(ID param_1,SEL param_2)

{
  return 1;
}


// ===== SFTextAttachment::drawAttachmentInFullRect: @ 00016084 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void SFTextAttachment::drawAttachmentInFullRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ulong uVar2;
  double extraout_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = param_3.field0_0x0.field1_0x8;
  dVar7 = param_3.field0_0x0.field0_0x0;
  dVar3 = dVar6;
  dVar4 = param_3.field1_0x10.field0_0x0;
  dVar5 = param_3.field1_0x10.field1_0x8;
  IVar1 = objc_stub::hidden(param_1);
  if ((IVar1 & 1) != 0) {
    return;
  }
  objc_stub::drawingRect(param_1);
  uVar2 = _CGRectEqualToRect();
  dVar8 = param_3.field1_0x10.field1_0x8;
  dVar9 = param_3.field1_0x10.field0_0x0;
  if ((uVar2 & 1) == 0) {
    objc_stub::drawingRect(param_1);
    objc_stub::drawingRect(param_1);
    dVar7 = dVar7 + extraout_d0;
    objc_stub::drawingRect(param_1);
    dVar6 = dVar6 + dVar3;
    dVar8 = dVar5;
    dVar9 = dVar4;
  }
  objc_stub::drawAttachmentInRect_(param_1,dVar7,dVar6,dVar9,dVar8);
  return;
}


// ===== SFTextAttachment::drawAttachmentInRect: @ 00016138 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void SFTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  return;
}


// ===== SFTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0001613c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x70 bytes */

CGRect SFTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  double extraout_d0;
  CGRect CVar1;
  
  objc_stub::attachmentBaselineOffset
            (param_1,param_4.field0_0x0.field0_0x0,param_4.field0_0x0.field1_0x8,
             param_4.field1_0x10.field0_0x0,param_4.field1_0x10.field1_0x8,param_5.field0_0x0,
             param_5.field1_0x8);
  CVar1.field0_0x0.field1_0x8 = param_7.field0_0x0.field1_0x8 + extraout_d0;
  CVar1.field0_0x0.field0_0x0 = param_7.field0_0x0.field0_0x0;
  CVar1.field1_0x10 = param_7.field1_0x10;
  return CVar1;
}


// ===== SFTextAttachment::description @ 00016178 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachment::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SFTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  objc_stub::isHidden(param_1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____);
  return IVar1;
}


// ===== SFTextAttachment::representedAttributedText @ 00016220 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachment::representedAttributedText(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_representedAttributedText);
}


// ===== SFTextAttachment::setRepresentedAttributedText: @ 00016230 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::setRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_representedAttributedText) = param_3;
  return;
}


// ===== SFTextAttachment::setRepresentedText: @ 00016244 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::setRepresentedText_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_representedText) = param_3;
  return;
}


// ===== SFTextAttachment::attachmentFileWrapper @ 00016258 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachment::attachmentFileWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentFileWrapper);
}


// ===== SFTextAttachment::setAttachmentFileWrapper: @ 00016268 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::setAttachmentFileWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentFileWrapper) = param_3;
  return;
}


// ===== SFTextAttachment::drawingRect @ 00016274 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

CGRect SFTextAttachment::drawingRect(ID param_1,SEL param_2)

{
  return *(CGRect *)(param_1 + (long)_drawingRect);
}


// ===== SFTextAttachment::setDrawingRect: @ 0001628c =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void SFTextAttachment::setDrawingRect_(ID param_1,SEL param_2,CGRect param_3)

{
  double *pdVar1;
  
  pdVar1 = (double *)(param_1 + (long)_drawingRect);
  *pdVar1 = param_3.field0_0x0.field0_0x0;
  pdVar1[1] = param_3.field0_0x0.field1_0x8;
  pdVar1[2] = param_3.field1_0x10.field0_0x0;
  pdVar1[3] = param_3.field1_0x10.field1_0x8;
  return;
}


// ===== SFTextAttachment::attachmentBaselineOffset @ 000162a4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double SFTextAttachment::attachmentBaselineOffset(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_attachmentBaselineOffset);
}


// ===== SFTextAttachment::setAttachmentBaselineOffset: @ 000162b4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::setAttachmentBaselineOffset_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_attachmentBaselineOffset) = param_3;
  return;
}


// ===== SFTextAttachment::preventAttachmentImageRendering @ 000162c4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool SFTextAttachment::preventAttachmentImageRendering(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_preventAttachmentImageRendering);
}


// ===== SFTextAttachment::hidden @ 000162d4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool SFTextAttachment::hidden(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_hidden);
}


// ===== SFTextAttachment::hiddenWithBounds @ 000162e4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool SFTextAttachment::hiddenWithBounds(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_hiddenWithBounds);
}


// ===== SFTextAttachment::setHiddenWithBounds: @ 000162f4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void SFTextAttachment::setHiddenWithBounds_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_hiddenWithBounds) = (char)param_3;
  return;
}


// ===== SFTextAttachment::.cxx_destruct @ 00016304 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void SFTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_attachmentFileWrapper) = 0;
  *(undefined8 *)(param_1 + (long)_representedText) = 0;
  *(undefined8 *)(param_1 + (long)_representedAttributedText) = 0;
  return;
}


// ===== SFTextAttachment::metadata @ 00025c60 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFTextAttachment::metadata(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  IVar1 = objc_stub::representedAttributedText(param_1);
  IVar1 = objc_stub::length(IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::representedAttributedText(param_1);
    uVar3 = *(undefined8 *)PTR__PMKMetadataAttributeName_0005ea18;
    IVar2 = objc_stub::representedAttributedText(param_1);
    IVar2 = objc_stub::length(IVar2);
    IVar1 = objc_stub::attribute_atIndex_effectiveRange_(IVar1,uVar3,IVar2 - 1,0);
  }
  return IVar1;
}


// ===== SFTextAttachment::setMetadata: @ 00025d1c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::setMetadata_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ID IStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar2 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::mutableCopy(IVar2);
  puVar1 = PTR__PMKMetadataAttributeName_0005ea18;
  if ((param_3 == 0) || (IVar3 = objc_stub::count(param_3), IVar3 == 0)) {
    pcVar5 = &cf___;
    puVar6 = PTR____NSDictionary0__struct_0005ecd0;
  }
  else {
    IVar3 = objc_stub::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,param_3,0,0);
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSString);
    objc_stub::initWithData_encoding_(IVar4,IVar3,4);
    pcVar5 = (cfstringStruct *)
             objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_<_______>);
    local_68 = *(undefined8 *)puVar1;
    IStack_60 = param_3;
    puVar6 = (undefined *)
             objc_stub::dictionaryWithObjects_forKeys_count_
                       ((ID)&_OBJC_CLASS___NSDictionary,&IStack_60,&local_68,1);
  }
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
  IVar3 = objc_stub::initWithString_attributes_(IVar3,pcVar5,puVar6);
  uVar7 = *(undefined8 *)puVar1;
  IVar4 = objc_stub::length(IVar2);
  IVar4 = objc_stub::attribute_atIndex_effectiveRange_(IVar2,uVar7,IVar4 - 1,&local_78);
  if (IVar4 == 0) {
    objc_stub::appendAttributedString_(IVar2,IVar3);
  }
  else {
    objc_stub::replaceCharactersInRange_withAttributedString_(IVar2,local_78,uStack_70,IVar3);
  }
  objc_stub::setRepresentedAttributedText_(param_1,IVar2);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== SFTextAttachment::hasPreviewMetadata @ 00025f20 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool SFTextAttachment::hasPreviewMetadata(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::metadata(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_preview);
  IVar1 = objc_stub::boolValue(IVar1);
  return (bool)IVar1;
}


// ===== SFTextAttachment::removePreviewMetadata @ 00025f84 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void SFTextAttachment::removePreviewMetadata(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::hasPreviewMetadata(param_1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::metadata(param_1);
    IVar1 = objc_stub::mutableCopy(IVar1);
    objc_stub::removeObjectForKey_(IVar1,&cf_preview);
    objc_stub::setMetadata_(param_1,IVar1);
    return;
  }
  return;
}


// ===== SFTextAttachment::supportsSecureCoding @ 00026004 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool SFTextAttachment::supportsSecureCoding(ID param_1,SEL param_2)

{
  return 1;
}


// ===== SFTextAttachment::initWithCoder: @ 0002600c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID SFTextAttachment::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SFTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"initWithCoder:",param_3);
  if (self != 0) {
    objc_stub::decodeWithCoder_(self,param_3);
    objc_stub::commonInit(self);
    objc_stub::updateAttachmentImage(self);
  }
  return self;
}


// ===== SFTextAttachment::decodeWithCoder: @ 0002608c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_representedAttributedText);
  objc_stub::setRepresentedAttributedText_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_attachmentSize);
  objc_stub::CGSizeValue(IVar1);
  objc_stub::setAttachmentSize_(param_1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_drawingRect);
  objc_stub::CGRectValue(IVar1);
  objc_stub::setDrawingRect_(param_1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_attachmentBaselineOffset);
  objc_stub::doubleValue(IVar1);
  objc_stub::setAttachmentBaselineOffset_(param_1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_attachmentFileWrapper);
  objc_stub::setAttachmentFileWrapper_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_attachmentFileWrapperFileAttributes);
  if (IVar1 != 0) {
    IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_attachmentFileWrapperFileAttributes);
    self = objc_stub::attachmentFileWrapper(param_1);
    objc_stub::setFileAttributes_(self,IVar1);
  }
  return;
}


// ===== SFTextAttachment::encodeWithCoder: @ 00026218 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SFTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::representedAttributedText(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_representedAttributedText);
  objc_stub::unhiddenAttachmentSize(param_1);
  IVar1 = objc_stub::valueWithCGSize_((ID)&_OBJC_CLASS___NSValue);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_attachmentSize);
  objc_stub::drawingRect(param_1);
  IVar1 = objc_stub::valueWithCGRect_((ID)&_OBJC_CLASS___NSValue);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_drawingRect);
  objc_stub::attachmentBaselineOffset(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_attachmentBaselineOffset);
  IVar1 = objc_stub::attachmentFileWrapper(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_attachmentFileWrapper);
  IVar1 = objc_stub::attachmentFileWrapper(param_1);
  IVar1 = objc_stub::fileAttributes(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::attachmentFileWrapper(param_1);
    IVar1 = objc_stub::fileAttributes(IVar1);
    objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_attachmentFileWrapperFileAttributes);
  }
  return;
}


// ===== SFTextAttachment::copyWithZone: @ 00026410 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID SFTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  ID IVar2;
  
  _objc_opt_class();
  IVar1 = _objc_alloc();
  IVar2 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::copy(IVar2);
  IVar1 = objc_stub::initWithRepresentedAttributedText_(IVar1,IVar2);
  objc_stub::attachmentSize(param_1);
  objc_stub::setAttachmentSize_(IVar1);
  objc_stub::drawingRect(param_1);
  objc_stub::setDrawingRect_(IVar1);
  objc_stub::attachmentBaselineOffset(param_1);
  objc_stub::setAttachmentBaselineOffset_(IVar1);
  IVar2 = objc_stub::image(param_1);
  IVar2 = objc_stub::copy(IVar2);
  objc_stub::setImage_(IVar1,IVar2);
  return IVar1;
}


