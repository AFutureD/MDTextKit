// ===== MDTaskTextAttachment::drawAttachmentInRect: @ 000045bc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDTaskTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = (long)param_3.field0_0x0.field1_0x8;
  lVar4 = (long)param_3.field1_0x10.field0_0x0;
  lVar5 = (long)param_3.field1_0x10.field1_0x8;
  objc_stub::borderWidth(param_1);
  objc_stub::borderWidth(param_1);
  uVar2 = _CGRectInset((long)param_3.field0_0x0.field0_0x0,lVar3,lVar4,lVar5,extraout_d0 * 0.5,
                       extraout_d0_00 * 0.5);
  objc_stub::drawCheckboxBodyForCheckboxRect_(param_1);
  IVar1 = objc_stub::completed(param_1);
  if ((int)IVar1 != 0) {
    objc_stub::drawCheckboxCheckForCheckboxRect_(param_1,uVar2,lVar3,lVar4,lVar5);
    return;
  }
  return;
}


// ===== MDTaskTextAttachment::drawCheckboxBodyForCheckboxRect: @ 00004680 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDTaskTextAttachment::drawCheckboxBodyForCheckboxRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  ID self_00;
  
  self = objc_stub::squircleIn_cornerRadius_
                   ((ID)&_OBJC_CLASS___NSBezierPath,param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8,(long)(param_3.field1_0x10.field0_0x0 * 0.3));
  IVar1 = objc_stub::fillColor(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::fillColor(param_1);
    objc_stub::setFill(IVar1);
    objc_stub::fill(self);
  }
  IVar1 = objc_stub::completed(param_1);
  self_00 = objc_stub::borderColor(param_1);
  if ((int)IVar1 == 0) {
    objc_stub::setStroke(self_00);
    objc_stub::borderWidth(param_1);
  }
  else {
    IVar1 = objc_stub::colorWithAlphaComponent_(self_00,0x3fd6666666666666);
    objc_stub::setStroke(IVar1);
    objc_stub::borderCompletedWidth(param_1);
  }
  objc_stub::setLineWidth_(self);
  objc_stub::stroke(self);
  return;
}


// ===== MDTaskTextAttachment::drawCheckboxCheckForCheckboxRect: @ 0000479c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDTaskTextAttachment::drawCheckboxCheckForCheckboxRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar17 = param_3.field1_0x10.field1_0x8;
  dVar16 = param_3.field1_0x10.field0_0x0;
  dVar15 = param_3.field0_0x0.field1_0x8;
  dVar14 = param_3.field0_0x0.field0_0x0;
  self = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::moveToPoint_(self,dVar2 + dVar3 * 0.81101,dVar4 + dVar5 * 0.24659);
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
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.77463,dVar4 + dVar5 * 0.24659,dVar6 + dVar7 * 0.80107,
             dVar8 + dVar9 * 0.23744,dVar10 + dVar11 * 0.78475,dVar12 + dVar13 * 0.23735);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.42044,dVar4 + dVar5 * 0.57518);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.27127,dVar4 + dVar5 * 0.51982);
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
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
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
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.24167,dVar4 + dVar5 * 0.56248,dVar6 + dVar7 * 0.23316,
             dVar8 + dVar9 * 0.53963,dVar10 + dVar11 * 0.23376,dVar12 + dVar13 * 0.55303);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.40534,dVar4 + dVar5 * 0.75516);
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
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.76471,dVar6 + dVar7 * 0.4105,
             dVar8 + dVar9 * 0.76115,dVar10 + dVar11 * 0.41791,dVar12 + dVar13 * 0.76471);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.42854,dVar4 + dVar5 * 0.76459);
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
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.44699,dVar4 + dVar5 * 0.75435,dVar6 + dVar7 * 0.43584,
             dVar8 + dVar9 * 0.76379,dVar10 + dVar11 * 0.44263,dVar12 + dVar13 * 0.76003);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.81385,dVar4 + dVar5 * 0.28284);
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
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (self,dVar2 + dVar3 * 0.81101,dVar4 + dVar5 * 0.24659,dVar6 + dVar7 * 0.82236,
             dVar8 + dVar9 * 0.27188,dVar10 + dVar11 * 0.82115,dVar12 + dVar13 * 0.25594);
  objc_stub::closePath(self);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::moveToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.75576);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.75587);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar5 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar5 * 0.75587);
  dVar2 = (double)_CGRectGetMinX(dVar14,dVar15,dVar16,dVar17);
  dVar3 = (double)_CGRectGetWidth(dVar14,dVar15,dVar16,dVar17);
  dVar4 = (double)_CGRectGetMinY(dVar14,dVar15,dVar16,dVar17);
  dVar14 = (double)_CGRectGetHeight(dVar14,dVar15,dVar16,dVar17);
  objc_stub::addLineToPoint_(self,dVar2 + dVar3 * 0.4257,dVar4 + dVar14 * 0.75576);
  objc_stub::closePath(self);
  objc_stub::setMiterLimit_(self,0x4010000000000000);
  IVar1 = objc_stub::checkColor(param_1);
  IVar1 = objc_stub::colorWithAlphaComponent_(IVar1,0x3fd999999999999a);
  objc_stub::setFill(IVar1);
  objc_stub::fill(self);
  return;
}


// ===== MDTaskTextAttachment::decodeWithCoder: @ 000055c0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTaskTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDTaskTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_completed);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setCompleted_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_borderWidth);
  objc_stub::doubleValue(IVar1);
  objc_stub::setBorderWidth_(param_1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_borderCompletedWidth);
  objc_stub::doubleValue(IVar1);
  objc_stub::setBorderCompletedWidth_(param_1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_fillColor);
  objc_stub::setFillColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_borderColor);
  objc_stub::setBorderColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_checkColor);
  objc_stub::setCheckColor_(param_1,IVar1);
  return;
}


// ===== MDTaskTextAttachment::encodeWithCoder: @ 00005748 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTaskTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDTaskTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::completed(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_completed);
  objc_stub::borderWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_borderWidth);
  objc_stub::borderCompletedWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_borderCompletedWidth);
  IVar1 = objc_stub::fillColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_fillColor);
  IVar1 = objc_stub::borderColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_borderColor);
  IVar1 = objc_stub::checkColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_checkColor);
  return;
}


// ===== MDTaskTextAttachment::copyWithZone: @ 000058f8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDTaskTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDTaskTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = objc_stub::completed(param_1);
  objc_stub::setCompleted_(self,IVar1);
  objc_stub::borderWidth(param_1);
  objc_stub::setBorderWidth_(self);
  IVar1 = objc_stub::fillColor(param_1);
  objc_stub::setFillColor_(self,IVar1);
  IVar1 = objc_stub::borderColor(param_1);
  objc_stub::setBorderColor_(self,IVar1);
  IVar1 = objc_stub::checkColor(param_1);
  objc_stub::setCheckColor_(self,IVar1);
  objc_stub::borderCompletedWidth(param_1);
  objc_stub::setBorderCompletedWidth_(self);
  return self;
}


// ===== MDTaskTextAttachment::completed @ 000059f4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDTaskTextAttachment::completed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_completed) & 1;
}


// ===== MDTaskTextAttachment::setCompleted: @ 00005a08 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void MDTaskTextAttachment::setCompleted_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_completed) = (char)param_3;
  return;
}


// ===== MDTaskTextAttachment::borderWidth @ 00005a18 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDTaskTextAttachment::borderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderWidth);
}


// ===== MDTaskTextAttachment::setBorderWidth: @ 00005a28 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTaskTextAttachment::setBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderWidth) = param_3;
  return;
}


// ===== MDTaskTextAttachment::borderCompletedWidth @ 00005a38 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDTaskTextAttachment::borderCompletedWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderCompletedWidth);
}


// ===== MDTaskTextAttachment::setBorderCompletedWidth: @ 00005a48 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTaskTextAttachment::setBorderCompletedWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderCompletedWidth) = param_3;
  return;
}


// ===== MDTaskTextAttachment::fillColor @ 00005a58 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTaskTextAttachment::fillColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_fillColor);
}


// ===== MDTaskTextAttachment::setFillColor: @ 00005a68 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTaskTextAttachment::setFillColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_fillColor) = param_3;
  return;
}


// ===== MDTaskTextAttachment::borderColor @ 00005a74 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTaskTextAttachment::borderColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_borderColor);
}


// ===== MDTaskTextAttachment::setBorderColor: @ 00005a84 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTaskTextAttachment::setBorderColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_borderColor) = param_3;
  return;
}


// ===== MDTaskTextAttachment::checkColor @ 00005a90 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDTaskTextAttachment::checkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_checkColor);
}


// ===== MDTaskTextAttachment::setCheckColor: @ 00005aa0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDTaskTextAttachment::setCheckColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_checkColor) = param_3;
  return;
}


// ===== MDTaskTextAttachment::.cxx_destruct @ 00005aac =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDTaskTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_checkColor) = 0;
  *(undefined8 *)(param_1 + (long)_borderColor) = 0;
  *(undefined8 *)(param_1 + (long)_fillColor) = 0;
  return;
}


