// ===== SFTextAttachmentCell::supportsSecureCoding @ 00005f68 =====

bool SFTextAttachmentCell::supportsSecureCoding(ID param_1,SEL param_2)

{
  return 1;
}

// ===== SFTextAttachmentCell::initWithCoder: @ 00005f70 =====

ID SFTextAttachmentCell::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_20.super_class = &objc::class_t::SFTextAttachmentCell;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"initWithCoder:");
  return IVar1;
}

// ===== SFTextAttachmentCell::cellFrameForTextContainer:proposedLineFragment:glyphPosition:characterIndex: @ 00005fa4 =====

CGRect SFTextAttachmentCell::
       cellFrameForTextContainer_proposedLineFragment_glyphPosition_characterIndex_
                 (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGPoint param_5,
                 unsigned_long_long param_6)

{
  CGRect CVar4;
  
  dVar3 = param_4.field1_0x10.field1_0x8;
  dVar2 = param_4.field1_0x10.field0_0x0;
  dVar1 = param_4.field0_0x0.field1_0x8;
  local_80.super_class = &objc::class_t::SFTextAttachmentCell;
  local_80.receiver = param_1;
  _objc_msgSendSuper2(&local_80,
                      "cellFrameForTextContainer:proposedLineFragment:glyphPosition:characterIndex:"
                      ,param_4.field0_0x0.field0_0x0,param_3,param_6);
  self = attachment(param_1);
  
  attachmentBoundsForTextContainer_proposedLineFragment_glyphPosition_characterIndex_proposedRect_
            (self,param_4.field0_0x0.field0_0x0,param_3,param_6);
  CVar4.field0_0x0.field1_0x8 = dVar1;
  CVar4.field0_0x0.field0_0x0 = extraout_d0;
  CVar4.field1_0x10.field1_0x8 = dVar3;
  CVar4.field1_0x10.field0_0x0 = dVar2;
  return CVar4;
}

// ===== SFTextAttachmentCell::cellSize @ 000060dc =====

CGSize SFTextAttachmentCell::cellSize(ID param_1,SEL param_2)

{
  CGSize CVar1;
  
  self = attachment(param_1);
  attachmentSize(self);
  CVar1.field1_0x8 = in_d1;
  CVar1.field0_0x0 = extraout_d0;
  return CVar1;
}

// ===== SFTextAttachmentCell::drawWithFrame:inView: @ 00006128 =====

void SFTextAttachmentCell::drawWithFrame_inView_(ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  
  self = attachment(param_1);
  drawAttachmentInFullRect_
            (self,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return;
}

// ===== SFTextAttachmentCell::wantsToTrackMouse @ 00006188 =====

bool SFTextAttachmentCell::wantsToTrackMouse(ID param_1,SEL param_2)

{
  
  IVar1 = attachment(param_1);
  IVar1 = isHidden(IVar1);
  return (uint)IVar1 ^ 1;
}

