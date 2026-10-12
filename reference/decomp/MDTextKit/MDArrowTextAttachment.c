// ===== MDArrowTextAttachment::isFlipped @ 00013d4c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDArrowTextAttachment::isFlipped(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::representedText(param_1);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_<_);
  IVar2 = objc_stub::representedAttributedText(param_1);
  IVar2 = objc_stub::writingDirectionAtIndex_(IVar2,0);
  return (uint)IVar1 ^ (uint)(IVar2 == 1);
}


// ===== MDArrowTextAttachment::drawAttachmentInRect: @ 00013dc8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDArrowTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::isFlipped(param_1);
  IVar2 = objc_stub::baseTextColor(param_1);
  if ((int)IVar1 == 0) {
    objc_stub::drawArrowRightWithFrame_fillColor_
              (param_1,(long)param_3.field0_0x0.field0_0x0,(long)param_3.field0_0x0.field1_0x8,
               (long)param_3.field1_0x10.field0_0x0,(long)param_3.field1_0x10.field1_0x8,IVar2);
  }
  else {
    objc_stub::drawArrowLeftWithFrame_fillColor_(param_1);
  }
  return;
}


// ===== MDArrowTextAttachment::drawArrowRightWithFrame:fillColor: @ 00013e54 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDArrowTextAttachment::drawArrowRightWithFrame_fillColor_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
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
  
  dVar11 = param_3.field1_0x10.field1_0x8;
  dVar10 = param_3.field1_0x10.field0_0x0;
  dVar9 = param_3.field0_0x0.field1_0x8;
  dVar8 = param_3.field0_0x0.field0_0x0;
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::moveToPoint_(IVar1,dVar2 + dVar10 * 0.58333,dVar3 + dVar11 * 0.04167);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.98274,dVar3 + dVar11 * 0.44107);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  dVar4 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar5 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  dVar6 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar7 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar2 + dVar10 * 0.98274,dVar3 + dVar11 * 0.55893,dVar4 + dVar10 * 1.01528,
             dVar5 + dVar11 * 0.47362,dVar6 + dVar10 * 1.01528,dVar7 + dVar11 * 0.52638);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.58333,dVar3 + dVar11 * 0.95833);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.58333,dVar3 + dVar11 * 0.95833);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.5,dVar3 + dVar11 * 0.875);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.70833,dVar3 + dVar11 * 0.54167);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.70833,dVar3 + dVar11 * 0.45833);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.5,dVar3 + dVar11 * 0.125);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.58333,dVar3 + dVar11 * 0.04167);
  objc_stub::closePath(IVar1);
  objc_stub::setUsesEvenOddFillRule_(IVar1,1);
  objc_stub::setFill(param_4);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::moveToPoint_(IVar1,dVar2 + dVar10 * 0.0,dVar3 + dVar11 * 0.50008);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar8 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.75,dVar8 + dVar11 * 0.50008);
  objc_stub::setStroke(param_4);
  objc_stub::lineThickness(param_1);
  objc_stub::setLineWidth_(IVar1);
  objc_stub::stroke(IVar1);
  return;
}


// ===== MDArrowTextAttachment::drawArrowLeftWithFrame:fillColor: @ 00014314 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDArrowTextAttachment::drawArrowLeftWithFrame_fillColor_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
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
  
  dVar11 = param_3.field1_0x10.field1_0x8;
  dVar10 = param_3.field1_0x10.field0_0x0;
  dVar9 = param_3.field0_0x0.field1_0x8;
  dVar8 = param_3.field0_0x0.field0_0x0;
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::moveToPoint_(IVar1,dVar2 + dVar10 * 0.41667,dVar3 + dVar11 * 0.04167);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.01726,dVar3 + dVar11 * 0.44107);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  dVar4 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar5 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  dVar6 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar7 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar2 + dVar10 * 0.01726,dVar3 + dVar11 * 0.55893,dVar4 + dVar10 * -0.01529,
             dVar5 + dVar11 * 0.47362,dVar6 + dVar10 * -0.01529,dVar7 + dVar11 * 0.52638);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.41667,dVar3 + dVar11 * 0.95833);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.41667,dVar3 + dVar11 * 0.95833);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.5,dVar3 + dVar11 * 0.875);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.29167,dVar3 + dVar11 * 0.54167);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.29167,dVar3 + dVar11 * 0.45833);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.5,dVar3 + dVar11 * 0.125);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.41667,dVar3 + dVar11 * 0.04167);
  objc_stub::closePath(IVar1);
  objc_stub::setUsesEvenOddFillRule_(IVar1,1);
  objc_stub::setFill(param_4);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar3 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::moveToPoint_(IVar1,dVar10 + dVar2,dVar3 + dVar11 * 0.50008);
  dVar2 = (double)_CGRectGetMinX(dVar8,dVar9,dVar10,dVar11);
  dVar8 = (double)_CGRectGetMinY(dVar8,dVar9,dVar10,dVar11);
  objc_stub::addLineToPoint_(IVar1,dVar2 + dVar10 * 0.25,dVar8 + dVar11 * 0.50008);
  objc_stub::setStroke(param_4);
  objc_stub::lineThickness(param_1);
  objc_stub::setLineWidth_(IVar1);
  objc_stub::stroke(IVar1);
  return;
}


// ===== MDArrowTextAttachment::decodeWithCoder: @ 000147d0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDArrowTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  float extraout_s0;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDArrowTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_lineThickness);
  objc_stub::floatValue(IVar1);
  objc_stub::setLineThickness_(param_1,(double)extraout_s0);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_baseTextColor);
  objc_stub::setBaseTextColor_(param_1,IVar1);
  return;
}


// ===== MDArrowTextAttachment::encodeWithCoder: @ 00014898 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDArrowTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDArrowTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  objc_stub::lineThickness(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_lineThickness);
  IVar1 = objc_stub::baseTextColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_baseTextColor);
  return;
}


// ===== MDArrowTextAttachment::copyWithZone: @ 0001496c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDArrowTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDArrowTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  objc_stub::lineThickness(param_1);
  objc_stub::setLineThickness_(self);
  IVar1 = objc_stub::baseTextColor(param_1);
  objc_stub::setBaseTextColor_(self,IVar1);
  return self;
}


// ===== MDArrowTextAttachment::lineThickness @ 000149ec =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDArrowTextAttachment::lineThickness(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lineThickness);
}


// ===== MDArrowTextAttachment::setLineThickness: @ 000149fc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDArrowTextAttachment::setLineThickness_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lineThickness) = param_3;
  return;
}


// ===== MDArrowTextAttachment::baseTextColor @ 00014a0c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDArrowTextAttachment::baseTextColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_baseTextColor);
}


// ===== MDArrowTextAttachment::setBaseTextColor: @ 00014a1c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDArrowTextAttachment::setBaseTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_baseTextColor) = param_3;
  return;
}


// ===== MDArrowTextAttachment::.cxx_destruct @ 00014a28 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDArrowTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_baseTextColor) = 0;
  return;
}


