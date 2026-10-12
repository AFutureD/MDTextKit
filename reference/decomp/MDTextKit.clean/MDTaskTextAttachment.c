// ===== MDTaskTextAttachment::drawAttachmentInRect: @ 000045bc =====

void MDTaskTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  lVar3 = (long)param_3.field0_0x0.field1_0x8;
  lVar4 = (long)param_3.field1_0x10.field0_0x0;
  lVar5 = (long)param_3.field1_0x10.field1_0x8;
  borderWidth(param_1);
  borderWidth(param_1);
  uVar2 = _CGRectInset((long)param_3.field0_0x0.field0_0x0,lVar3,lVar4,lVar5,extraout_d0 * 0.5,
                       extraout_d0_00 * 0.5);
  drawCheckboxBodyForCheckboxRect_(param_1);
  IVar1 = completed(param_1);
  if ((int)IVar1 != 0) {
    drawCheckboxCheckForCheckboxRect_(param_1,uVar2,lVar3,lVar4,lVar5);
    return;
  }
  return;
}

// ===== MDTaskTextAttachment::drawCheckboxBodyForCheckboxRect: @ 00004680 =====

void MDTaskTextAttachment::drawCheckboxBodyForCheckboxRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  self = squircleIn_cornerRadius_
                   (NSBezierPath,param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8,(long)(param_3.field1_0x10.field0_0x0 * 0.3));
  IVar1 = fillColor(param_1);
  if (IVar1 != 0) {
    IVar1 = fillColor(param_1);
    setFill(IVar1);
    fill(self);
  }
  IVar1 = completed(param_1);
  self_00 = borderColor(param_1);
  if ((int)IVar1 == 0) {
    setStroke(self_00);
    borderWidth(param_1);
  }
  else {
    IVar1 = colorWithAlphaComponent_(self_00,0x3fd6666666666666);
    setStroke(IVar1);
    borderCompletedWidth(param_1);
  }
  setLineWidth_(self);
  stroke(self);
  return;
}

// ===== MDTaskTextAttachment::drawCheckboxCheckForCheckboxRect: @ 0000479c =====

void MDTaskTextAttachment::drawCheckboxCheckForCheckboxRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  dVar17 = param_3.field1_0x10.field1_0x8;
  dVar16 = param_3.field1_0x10.field0_0x0;
  dVar15 = param_3.field0_0x0.field1_0x8;
  dVar14 = param_3.field0_0x0.field0_0x0;
  self = bezierPath(NSBezierPath);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  moveToPoint_(self,dVar2 + dVar3 * 0.81101,dVar4 + dVar5 * 0.24659);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar6 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar7 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar8 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar9 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar10 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar11 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar12 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar13 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.77463,dVar4 + dVar5 * 0.24659,dVar6 + dVar7 * 0.80107,
             dVar8 + dVar9 * 0.23744,dVar10 + dVar11 * 0.78475,dVar12 + dVar13 * 0.23735);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.42044,dVar4 + dVar5 * 0.57518);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.27127,dVar4 + dVar5 * 0.51982);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar6 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar7 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar8 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar9 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar10 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar11 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar12 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar13 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.24016,dVar4 + dVar5 * 0.52967,dVar6 + dVar7 * 0.25981,
             dVar8 + dVar9 * 0.51576,dVar10 + dVar11 * 0.24674,dVar12 + dVar13 * 0.52001);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar6 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar7 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar8 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar9 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar10 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar11 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar12 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar13 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.24167,dVar4 + dVar5 * 0.56248,dVar6 + dVar7 * 0.23316,
             dVar8 + dVar9 * 0.53963,dVar10 + dVar11 * 0.23376,dVar12 + dVar13 * 0.55303);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.40534,dVar4 + dVar5 * 0.75516);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar6 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar7 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar8 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar9 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar10 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar11 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar12 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar13 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.76471,dVar6 + dVar7 * 0.4105,
             dVar8 + dVar9 * 0.76115,dVar10 + dVar11 * 0.41791,dVar12 + dVar13 * 0.76471);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.42854,dVar4 + dVar5 * 0.76459);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar6 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar7 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar8 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar9 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar10 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar11 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar12 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar13 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.44699,dVar4 + dVar5 * 0.75435,dVar6 + dVar7 * 0.43584,
             dVar8 + dVar9 * 0.76379,dVar10 + dVar11 * 0.44263,dVar12 + dVar13 * 0.76003);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.81385,dVar4 + dVar5 * 0.28284);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar6 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar7 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar8 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar9 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  dVar10 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar11 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar12 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar13 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.81101,dVar4 + dVar5 * 0.24659,dVar6 + dVar7 * 0.82236,
             dVar8 + dVar9 * 0.27188,dVar10 + dVar11 * 0.82115,dVar12 + dVar13 * 0.25594);
  closePath(self);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  moveToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.75576);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.75587);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.75587);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar14 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  addLineToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar14 * 0.75576);
  closePath(self);
  setMiterLimit_(self,0x4010000000000000);
  IVar1 = checkColor(param_1);
  IVar1 = colorWithAlphaComponent_(IVar1,0x3fd999999999999a);
  setFill(IVar1);
  fill(self);
  return;
}

// ===== MDTaskTextAttachment::decodeWithCoder: @ 000055c0 =====

void MDTaskTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDTaskTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_completed);
  IVar1 = boolValue(IVar1);
  setCompleted_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_borderWidth);
  doubleValue(IVar1);
  setBorderWidth_(param_1);
  IVar1 = decodeObjectForKey_(param_3,&cf_borderCompletedWidth);
  doubleValue(IVar1);
  setBorderCompletedWidth_(param_1);
  IVar1 = decodeObjectForKey_(param_3,&cf_fillColor);
  setFillColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_borderColor);
  setBorderColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_checkColor);
  setCheckColor_(param_1,IVar1);
  return;
}

// ===== MDTaskTextAttachment::encodeWithCoder: @ 00005748 =====

void MDTaskTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDTaskTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = completed(param_1);
  IVar1 = numberWithBool_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_completed);
  borderWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_borderWidth);
  borderCompletedWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_borderCompletedWidth);
  IVar1 = fillColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_fillColor);
  IVar1 = borderColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_borderColor);
  IVar1 = checkColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_checkColor);
  return;
}

// ===== MDTaskTextAttachment::copyWithZone: @ 000058f8 =====

ID MDTaskTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDTaskTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = completed(param_1);
  setCompleted_(self,IVar1);
  borderWidth(param_1);
  setBorderWidth_(self);
  IVar1 = fillColor(param_1);
  setFillColor_(self,IVar1);
  IVar1 = borderColor(param_1);
  setBorderColor_(self,IVar1);
  IVar1 = checkColor(param_1);
  setCheckColor_(self,IVar1);
  borderCompletedWidth(param_1);
  setBorderCompletedWidth_(self);
  return self;
}

// ===== MDTaskTextAttachment::completed @ 000059f4 =====

bool MDTaskTextAttachment::completed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_completed) & 1;
}

// ===== MDTaskTextAttachment::setCompleted: @ 00005a08 =====

void MDTaskTextAttachment::setCompleted_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_completed) = (char)param_3;
  return;
}

// ===== MDTaskTextAttachment::borderWidth @ 00005a18 =====

double MDTaskTextAttachment::borderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderWidth);
}

// ===== MDTaskTextAttachment::setBorderWidth: @ 00005a28 =====

void MDTaskTextAttachment::setBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderWidth) = param_3;
  return;
}

// ===== MDTaskTextAttachment::borderCompletedWidth @ 00005a38 =====

double MDTaskTextAttachment::borderCompletedWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderCompletedWidth);
}

// ===== MDTaskTextAttachment::setBorderCompletedWidth: @ 00005a48 =====

void MDTaskTextAttachment::setBorderCompletedWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderCompletedWidth) = param_3;
  return;
}

// ===== MDTaskTextAttachment::fillColor @ 00005a58 =====

ID MDTaskTextAttachment::fillColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_fillColor);
}

// ===== MDTaskTextAttachment::setFillColor: @ 00005a68 =====

void MDTaskTextAttachment::setFillColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_fillColor) = param_3;
  return;
}

// ===== MDTaskTextAttachment::borderColor @ 00005a74 =====

ID MDTaskTextAttachment::borderColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_borderColor);
}

// ===== MDTaskTextAttachment::setBorderColor: @ 00005a84 =====

void MDTaskTextAttachment::setBorderColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_borderColor) = param_3;
  return;
}

// ===== MDTaskTextAttachment::checkColor @ 00005a90 =====

ID MDTaskTextAttachment::checkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_checkColor);
}

// ===== MDTaskTextAttachment::setCheckColor: @ 00005aa0 =====

void MDTaskTextAttachment::setCheckColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_checkColor) = param_3;
  return;
}

// ===== MDTaskTextAttachment::.cxx_destruct @ 00005aac =====

void MDTaskTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_checkColor) = 0;
  *(undefined8 *)(param_1 + (long)_borderColor) = 0;
  *(undefined8 *)(param_1 + (long)_fillColor) = 0;
  return;
}

