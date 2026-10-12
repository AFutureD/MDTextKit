// ===== SFTextAttachment::init @ 00015bec =====

ID SFTextAttachment::init(ID param_1,SEL param_2)

{
  
  IVar1 = initWithRepresentedAttributedText_(param_1,0);
  return IVar1;
}

// ===== SFTextAttachment::initWithRepresentedAttributedText: @ 00015bf4 =====

ID SFTextAttachment::initWithRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::SFTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    if (param_3 == 0) {
      IVar1 = _objc_alloc(NSAttributedString);
      IVar1 = initWithString_(IVar1,&cf___);
      setRepresentedAttributedText_(self,IVar1);
    }
    else {
      setRepresentedAttributedText_(self,param_3);
    }
    commonInit(self);
  }
  return self;
}

// ===== SFTextAttachment::representedText @ 00015ca8 =====

ID SFTextAttachment::representedText(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar1 = stringByExpandingTextAttachments(IVar1);
  return IVar1;
}

// ===== SFTextAttachment::commonInit @ 00015cec =====

void SFTextAttachment::commonInit(ID param_1,SEL param_2)

{
  
  uVar1 = _objc_alloc_init(&objc::class_t::SFTextAttachmentCell);
  setAttachmentCell_(param_1,uVar1);
  return;
}

// ===== SFTextAttachment::updateAttachmentImage @ 00015d28 =====

void SFTextAttachment::updateAttachmentImage(ID param_1,SEL param_2)

{
  return;
}

// ===== SFTextAttachment::setPreventAttachmentImageRendering: @ 00015d2c =====

void SFTextAttachment::setPreventAttachmentImageRendering_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_preventAttachmentImageRendering) = (char)param_3;
  if (param_3 != 0) {
    setImage_(param_1,0);
    return;
  }
  return;
}

// ===== SFTextAttachment::attachmentAttributedString @ 00015d48 =====

ID SFTextAttachment::attachmentAttributedString(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar1 = length(IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = representedAttributedText(param_1);
    IVar1 = attributesAtIndex_effectiveRange_(IVar1,0,0);
  }
  IVar1 = attachmentAttributedStringWithAttributes_(param_1,IVar1);
  return IVar1;
}

// ===== SFTextAttachment::attachmentAttributedStringWithAttributes: @ 00015df0 =====

ID SFTextAttachment::attachmentAttributedStringWithAttributes_(ID param_1,SEL param_2,ID param_3)

{
  
  self = attributedStringWithAttachment_(NSAttributedString,param_1);
  if (param_3 != 0) {
    self = mutableCopy(self);
    addAttributes_range_(self,param_3,0,1);
  }
  return self;
}

// ===== SFTextAttachment::setHidden: @ 00015e7c =====

void SFTextAttachment::setHidden_(ID param_1,SEL param_2,bool param_3)

{
  setHidden_keepBounds_(param_1,(ulong)param_3,0);
  return;
}

// ===== SFTextAttachment::setHidden:keepBounds: @ 00015e84 =====

void SFTextAttachment::setHidden_keepBounds_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  
  *(char *)(param_1 + (long)_hidden) = (char)param_3;
  lVar1 = (long)_hiddenWithBounds;
  *(char *)(param_1 + lVar1) = (char)param_4;
  if (((param_4 & 1) == 0) && (param_3 != 0)) {
    setBounds_
              (param_1,_CGRectZero,
               *(undefined8 *)(PTR__CGRectZero + 8),
               *(undefined8 *)(PTR__CGRectZero + 0x10),
               *(undefined8 *)(PTR__CGRectZero + 0x18));
    return;
  }
  if ((param_3 & 1) == 0) {
    attachmentSize(param_1);
    attachmentSize(param_1);
    setBounds_(param_1,0,0,extraout_d0,in_d1);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}

// ===== SFTextAttachment::setAttachmentSize: @ 00015f20 =====

void SFTextAttachment::setAttachmentSize_(ID param_1,SEL param_2,CGSize param_3)

{
  
  lVar1 = (long)_attachmentSize;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0;
  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;
  setBounds_(param_1,0,0,param_3.field0_0x0,param_3.field1_0x8);
  return;
}

// ===== SFTextAttachment::attachmentSize @ 00015f44 =====

CGSize SFTextAttachment::attachmentSize(ID param_1,SEL param_2)

{
  CGSize *pCVar2;
  
  IVar1 = hidden(param_1);
  if (((int)IVar1 == 0) ||
     (IVar1 = hiddenWithBounds(param_1), pCVar2 = (CGSize *)PTR__CGSizeZero,
     (int)IVar1 != 0)) {
    pCVar2 = (CGSize *)(param_1 + (long)_attachmentSize);
  }
  return *pCVar2;
}

// ===== SFTextAttachment::unhiddenAttachmentSize @ 00015f90 =====

CGSize SFTextAttachment::unhiddenAttachmentSize(ID param_1,SEL param_2)

{
  return *(CGSize *)(param_1 + (long)_attachmentSize);
}

// ===== SFTextAttachment::maxWidthAttachmentAtIndex:forTextContainer: @ 00015fa4 =====

double SFTextAttachment::maxWidthAttachmentAtIndex_forTextContainer_
                 (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  
  size(param_4);
  lineFragmentPadding(param_4);
  IVar1 = layoutManager(param_4);
  IVar1 = textStorage(IVar1);
  IVar1 = attribute_atIndex_effectiveRange_
                    (IVar1,_NSParagraphStyleAttributeName,param_3,0);
  headIndent(IVar1);
  tailIndent(IVar1);
  return ((extraout_d0 + extraout_d0_00 * -2.0) - extraout_d0_01) + extraout_d0_02;
}

// ===== SFTextAttachment::wantAttachmentBaselineOffset @ 0001607c =====

bool SFTextAttachment::wantAttachmentBaselineOffset(ID param_1,SEL param_2)

{
  return 1;
}

// ===== SFTextAttachment::drawAttachmentInFullRect: @ 00016084 =====

void SFTextAttachment::drawAttachmentInFullRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  dVar6 = param_3.field0_0x0.field1_0x8;
  dVar7 = param_3.field0_0x0.field0_0x0;
  dVar3 = dVar6;
  dVar4 = param_3.field1_0x10.field0_0x0;
  dVar5 = param_3.field1_0x10.field1_0x8;
  IVar1 = hidden(param_1);
  if ((IVar1 & 1) != 0) {
    return;
  }
  drawingRect(param_1);
  uVar2 = _CGRectEqualToRect();
  dVar8 = param_3.field1_0x10.field1_0x8;
  dVar9 = param_3.field1_0x10.field0_0x0;
  if ((uVar2 & 1) == 0) {
    drawingRect(param_1);
    drawingRect(param_1);
    dVar7 = dVar7 + extraout_d0;
    drawingRect(param_1);
    dVar6 = dVar6 + dVar3;
    dVar8 = dVar5;
    dVar9 = dVar4;
  }
  drawAttachmentInRect_(param_1,dVar7,dVar6,dVar9,dVar8);
  return;
}

// ===== SFTextAttachment::drawAttachmentInRect: @ 00016138 =====

void SFTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  return;
}

// ===== SFTextAttachment::attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:proposedRect: @ 0001613c =====

CGRect SFTextAttachment::
       attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6,CGRect param_7)

{
  CGRect CVar1;
  
  attachmentBaselineOffset
            (param_1,param_4.field0_0x0.field0_0x0,param_4.field0_0x0.field1_0x8,
             param_4.field1_0x10.field0_0x0,param_4.field1_0x10.field1_0x8,param_5.field0_0x0,
             param_5.field1_0x8);
  CVar1.field0_0x0.field1_0x8 = param_7.field0_0x0.field1_0x8 + extraout_d0;
  CVar1.field0_0x0.field0_0x0 = param_7.field0_0x0.field0_0x0;
  CVar1.field1_0x10 = param_7.field1_0x10;
  return CVar1;
}

// ===== SFTextAttachment::description @ 00016178 =====

ID SFTextAttachment::description(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::SFTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  isHidden(param_1);
  IVar1 = stringWithFormat_(NSString,&cf_____);
  return IVar1;
}

// ===== SFTextAttachment::representedAttributedText @ 00016220 =====

ID SFTextAttachment::representedAttributedText(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_representedAttributedText);
}

// ===== SFTextAttachment::setRepresentedAttributedText: @ 00016230 =====

void SFTextAttachment::setRepresentedAttributedText_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_representedAttributedText) = param_3;
  return;
}

// ===== SFTextAttachment::setRepresentedText: @ 00016244 =====

void SFTextAttachment::setRepresentedText_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_representedText) = param_3;
  return;
}

// ===== SFTextAttachment::attachmentFileWrapper @ 00016258 =====

ID SFTextAttachment::attachmentFileWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attachmentFileWrapper);
}

// ===== SFTextAttachment::setAttachmentFileWrapper: @ 00016268 =====

void SFTextAttachment::setAttachmentFileWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_attachmentFileWrapper) = param_3;
  return;
}

// ===== SFTextAttachment::drawingRect @ 00016274 =====

CGRect SFTextAttachment::drawingRect(ID param_1,SEL param_2)

{
  return *(CGRect *)(param_1 + (long)_drawingRect);
}

// ===== SFTextAttachment::setDrawingRect: @ 0001628c =====

void SFTextAttachment::setDrawingRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  pdVar1 = (double *)(param_1 + (long)_drawingRect);
  *pdVar1 = param_3.field0_0x0.field0_0x0;
  pdVar1[1] = param_3.field0_0x0.field1_0x8;
  pdVar1[2] = param_3.field1_0x10.field0_0x0;
  pdVar1[3] = param_3.field1_0x10.field1_0x8;
  return;
}

// ===== SFTextAttachment::attachmentBaselineOffset @ 000162a4 =====

double SFTextAttachment::attachmentBaselineOffset(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_attachmentBaselineOffset);
}

// ===== SFTextAttachment::setAttachmentBaselineOffset: @ 000162b4 =====

void SFTextAttachment::setAttachmentBaselineOffset_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_attachmentBaselineOffset) = param_3;
  return;
}

// ===== SFTextAttachment::preventAttachmentImageRendering @ 000162c4 =====

bool SFTextAttachment::preventAttachmentImageRendering(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_preventAttachmentImageRendering);
}

// ===== SFTextAttachment::hidden @ 000162d4 =====

bool SFTextAttachment::hidden(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_hidden);
}

// ===== SFTextAttachment::hiddenWithBounds @ 000162e4 =====

bool SFTextAttachment::hiddenWithBounds(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_hiddenWithBounds);
}

// ===== SFTextAttachment::setHiddenWithBounds: @ 000162f4 =====

void SFTextAttachment::setHiddenWithBounds_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_hiddenWithBounds) = (char)param_3;
  return;
}

// ===== SFTextAttachment::.cxx_destruct @ 00016304 =====

void SFTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_attachmentFileWrapper) = 0;
  *(undefined8 *)(param_1 + (long)_representedText) = 0;
  *(undefined8 *)(param_1 + (long)_representedAttributedText) = 0;
  return;
}

// ===== SFTextAttachment::metadata @ 00025c60 =====

ID SFTextAttachment::metadata(ID param_1,SEL param_2)

{
  
  IVar1 = representedAttributedText(param_1);
  IVar1 = length(IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = representedAttributedText(param_1);
    uVar3 = _PMKMetadataAttributeName;
    IVar2 = representedAttributedText(param_1);
    IVar2 = length(IVar2);
    IVar1 = attribute_atIndex_effectiveRange_(IVar1,uVar3,IVar2 - 1,0);
  }
  return IVar1;
}

// ===== SFTextAttachment::setMetadata: @ 00025d1c =====

void SFTextAttachment::setMetadata_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar2 = representedAttributedText(param_1);
  IVar2 = mutableCopy(IVar2);
  puVar1 = PTR__PMKMetadataAttributeName;
  if ((param_3 == 0) || (IVar3 = count(param_3), IVar3 == 0)) {
    pcVar5 = &cf___;
    puVar6 = PTR____NSDictionary0__struct;
  }
  else {
    IVar3 = dataWithJSONObject_options_error_
                      (NSJSONSerialization,param_3,0,0);
    IVar4 = _objc_alloc(NSString);
    initWithData_encoding_(IVar4,IVar3,4);
    pcVar5 = (cfstringStruct *)
             stringWithFormat_(NSString,&cf_<_______>);
    local_68 = *(undefined8 *)puVar1;
    IStack_60 = param_3;
    puVar6 = (undefined *)
             dictionaryWithObjects_forKeys_count_
                       (NSDictionary,&IStack_60,&local_68,1);
  }
  IVar3 = _objc_alloc(NSAttributedString);
  IVar3 = initWithString_attributes_(IVar3,pcVar5,puVar6);
  uVar7 = *(undefined8 *)puVar1;
  IVar4 = length(IVar2);
  IVar4 = attribute_atIndex_effectiveRange_(IVar2,uVar7,IVar4 - 1,&local_78);
  if (IVar4 == 0) {
    appendAttributedString_(IVar2,IVar3);
  }
  else {
    replaceCharactersInRange_withAttributedString_(IVar2,local_78,uStack_70,IVar3);
  }
  setRepresentedAttributedText_(param_1,IVar2);
    return;
  }
}

// ===== SFTextAttachment::hasPreviewMetadata @ 00025f20 =====

bool SFTextAttachment::hasPreviewMetadata(ID param_1,SEL param_2)

{
  
  IVar1 = metadata(param_1);
  IVar1 = objectForKeyedSubscript_(IVar1,&cf_preview);
  IVar1 = boolValue(IVar1);
  return (bool)IVar1;
}

// ===== SFTextAttachment::removePreviewMetadata @ 00025f84 =====

void SFTextAttachment::removePreviewMetadata(ID param_1,SEL param_2)

{
  
  IVar1 = hasPreviewMetadata(param_1);
  if ((int)IVar1 != 0) {
    IVar1 = metadata(param_1);
    IVar1 = mutableCopy(IVar1);
    removeObjectForKey_(IVar1,&cf_preview);
    setMetadata_(param_1,IVar1);
    return;
  }
  return;
}

// ===== SFTextAttachment::supportsSecureCoding @ 00026004 =====

bool SFTextAttachment::supportsSecureCoding(ID param_1,SEL param_2)

{
  return 1;
}

// ===== SFTextAttachment::initWithCoder: @ 0002600c =====

ID SFTextAttachment::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_30.super_class = &objc::class_t::SFTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"initWithCoder:",param_3);
  if (self != 0) {
    decodeWithCoder_(self,param_3);
    commonInit(self);
    updateAttachmentImage(self);
  }
  return self;
}

// ===== SFTextAttachment::decodeWithCoder: @ 0002608c =====

void SFTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = decodeObjectForKey_(param_3,&cf_representedAttributedText);
  setRepresentedAttributedText_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_attachmentSize);
  CGSizeValue(IVar1);
  setAttachmentSize_(param_1);
  IVar1 = decodeObjectForKey_(param_3,&cf_drawingRect);
  CGRectValue(IVar1);
  setDrawingRect_(param_1);
  IVar1 = decodeObjectForKey_(param_3,&cf_attachmentBaselineOffset);
  doubleValue(IVar1);
  setAttachmentBaselineOffset_(param_1);
  IVar1 = decodeObjectForKey_(param_3,&cf_attachmentFileWrapper);
  setAttachmentFileWrapper_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_attachmentFileWrapperFileAttributes);
  if (IVar1 != 0) {
    IVar1 = decodeObjectForKey_(param_3,&cf_attachmentFileWrapperFileAttributes);
    self = attachmentFileWrapper(param_1);
    setFileAttributes_(self,IVar1);
  }
  return;
}

// ===== SFTextAttachment::encodeWithCoder: @ 00026218 =====

void SFTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::SFTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = representedAttributedText(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_representedAttributedText);
  unhiddenAttachmentSize(param_1);
  IVar1 = valueWithCGSize_(NSValue);
  encodeObject_forKey_(param_3,IVar1,&cf_attachmentSize);
  drawingRect(param_1);
  IVar1 = valueWithCGRect_(NSValue);
  encodeObject_forKey_(param_3,IVar1,&cf_drawingRect);
  attachmentBaselineOffset(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_attachmentBaselineOffset);
  IVar1 = attachmentFileWrapper(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_attachmentFileWrapper);
  IVar1 = attachmentFileWrapper(param_1);
  IVar1 = fileAttributes(IVar1);
  if (IVar1 != 0) {
    IVar1 = attachmentFileWrapper(param_1);
    IVar1 = fileAttributes(IVar1);
    encodeObject_forKey_(param_3,IVar1,&cf_attachmentFileWrapperFileAttributes);
  }
  return;
}

// ===== SFTextAttachment::copyWithZone: @ 00026410 =====

ID SFTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  _objc_opt_class();
  IVar1 = _objc_alloc();
  IVar2 = representedAttributedText(param_1);
  IVar2 = copy(IVar2);
  IVar1 = initWithRepresentedAttributedText_(IVar1,IVar2);
  attachmentSize(param_1);
  setAttachmentSize_(IVar1);
  drawingRect(param_1);
  setDrawingRect_(IVar1);
  attachmentBaselineOffset(param_1);
  setAttachmentBaselineOffset_(IVar1);
  IVar2 = image(param_1);
  IVar2 = copy(IVar2);
  setImage_(IVar1,IVar2);
  return IVar1;
}

