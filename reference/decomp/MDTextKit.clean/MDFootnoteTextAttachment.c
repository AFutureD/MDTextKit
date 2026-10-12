// ===== MDFootnoteTextAttachment::drawAttachmentInRect: @ 000316d8 =====

void MDFootnoteTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  drawFootnoteWithFrame_
            (param_1,(long)param_3.field0_0x0.field0_0x0,(long)param_3.field0_0x0.field1_0x8,
             (long)param_3.field1_0x10.field0_0x0,(long)param_3.field1_0x10.field1_0x8);
  return;
}

// ===== MDFootnoteTextAttachment::drawFootnoteWithFrame: @ 000316ec =====

void MDFootnoteTextAttachment::drawFootnoteWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  
  dVar6 = param_3.field1_0x10.field1_0x8;
  dVar5 = param_3.field1_0x10.field0_0x0;
  IVar1 = currentContext(NSGraphicsContext);
  IVar1 = _objc_retainAutorelease(IVar1);
  IVar1 = CGContext(IVar1);
  self = color(param_1);
  dVar3 = (double)_CGRectGetMinX(param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,dVar5,
                                 dVar6);
  dVar9 = (double)(long)(dVar5 * 0.0 + 0.5);
  dVar3 = dVar9 + dVar3;
  dVar4 = (double)_CGRectGetMinY(param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,dVar5,
                                 dVar6);
  dVar7 = (double)(long)(dVar6 * 0.0 + 0.5);
  dVar4 = dVar7 + dVar4;
  dVar9 = (double)(long)(dVar5 + 0.5) - dVar9;
  dVar7 = (double)(long)(dVar6 + 0.5) - dVar7;
  _CGContextSaveGState(IVar1);
  _CGContextBeginTransparencyLayer(IVar1,0);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar10 = (double)(long)(dVar9 * 0.0 + 0.5);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  dVar8 = (double)(long)(dVar7 * 0.0 + 0.5);
  IVar2 = bezierPathWithOvalInRect_
                    (NSBezierPath,dVar10 + dVar5,dVar8 + dVar6,
                     (double)(long)(dVar9 + 0.5) - dVar10,(double)(long)(dVar7 + 0.5) - dVar8);
  addClip(IVar2);
  IVar2 = bezierPath(NSBezierPath);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  moveToPoint_(IVar2,dVar5 + dVar9 * 0.59091,dVar6 + dVar7 * -0.01136);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.59091,dVar6 + dVar7 * 0.37487);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.95824,dVar6 + dVar7 * 0.25552);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 1.01443,dVar6 + dVar7 * 0.42844);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.64709,dVar6 + dVar7 * 0.54779);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.87412,dVar6 + dVar7 * 0.86027);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.72703,dVar6 + dVar7 * 0.96714);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.5,dVar6 + dVar7 * 0.65466);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.27298,dVar6 + dVar7 * 0.96714);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.12588,dVar6 + dVar7 * 0.86027);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.3529,dVar6 + dVar7 * 0.54779);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * -0.01443,dVar6 + dVar7 * 0.42844);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.04176,dVar6 + dVar7 * 0.25552);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.40909,dVar6 + dVar7 * 0.37487);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.40909,dVar6 + dVar7 * -0.01136);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar3 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  addLineToPoint_(IVar2,dVar5 + dVar9 * 0.59091,dVar3 + dVar7 * -0.01136);
  closePath(IVar2);
  rotateFromCenterByDegrees_(IVar2,0x4032000000000000);
  setFill(self);
  fill(IVar2);
  _CGContextEndTransparencyLayer(IVar1);
  _CGContextRestoreGState(IVar1);
  return;
}

// ===== MDFootnoteTextAttachment::decodeWithCoder: @ 00031d64 =====

void MDFootnoteTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDFootnoteTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_color);
  setColor_(param_1,IVar1);
  return;
}

// ===== MDFootnoteTextAttachment::encodeWithCoder: @ 00031df8 =====

void MDFootnoteTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDFootnoteTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = color(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_color);
  return;
}

// ===== MDFootnoteTextAttachment::copyWithZone: @ 00031e8c =====

ID MDFootnoteTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_30.super_class = &objc::class_t::MDFootnoteTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = color(param_1);
  setColor_(self,IVar1);
  return self;
}

// ===== MDFootnoteTextAttachment::color @ 00031efc =====

ID MDFootnoteTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}

// ===== MDFootnoteTextAttachment::setColor: @ 00031f0c =====

void MDFootnoteTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}

// ===== MDFootnoteTextAttachment::.cxx_destruct @ 00031f18 =====

void MDFootnoteTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}

