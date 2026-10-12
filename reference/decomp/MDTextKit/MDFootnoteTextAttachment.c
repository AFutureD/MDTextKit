// ===== MDFootnoteTextAttachment::drawAttachmentInRect: @ 000316d8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDFootnoteTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  objc_stub::drawFootnoteWithFrame_
            (param_1,(long)param_3.field0_0x0.field0_0x0,(long)param_3.field0_0x0.field1_0x8,
             (long)param_3.field1_0x10.field0_0x0,(long)param_3.field1_0x10.field1_0x8);
  return;
}


// ===== MDFootnoteTextAttachment::drawFootnoteWithFrame: @ 000316ec =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDFootnoteTextAttachment::drawFootnoteWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID self;
  ID IVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = param_3.field1_0x10.field1_0x8;
  dVar5 = param_3.field1_0x10.field0_0x0;
  IVar1 = objc_stub::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  IVar1 = _objc_retainAutorelease(IVar1);
  IVar1 = objc_stub::CGContext(IVar1);
  self = objc_stub::color(param_1);
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
  IVar2 = objc_stub::bezierPathWithOvalInRect_
                    ((ID)&_OBJC_CLASS___NSBezierPath,dVar10 + dVar5,dVar8 + dVar6,
                     (double)(long)(dVar9 + 0.5) - dVar10,(double)(long)(dVar7 + 0.5) - dVar8);
  objc_stub::addClip(IVar2);
  IVar2 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::moveToPoint_(IVar2,dVar5 + dVar9 * 0.59091,dVar6 + dVar7 * -0.01136);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.59091,dVar6 + dVar7 * 0.37487);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.95824,dVar6 + dVar7 * 0.25552);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 1.01443,dVar6 + dVar7 * 0.42844);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.64709,dVar6 + dVar7 * 0.54779);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.87412,dVar6 + dVar7 * 0.86027);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.72703,dVar6 + dVar7 * 0.96714);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.5,dVar6 + dVar7 * 0.65466);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.27298,dVar6 + dVar7 * 0.96714);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.12588,dVar6 + dVar7 * 0.86027);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.3529,dVar6 + dVar7 * 0.54779);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * -0.01443,dVar6 + dVar7 * 0.42844);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.04176,dVar6 + dVar7 * 0.25552);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.40909,dVar6 + dVar7 * 0.37487);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar6 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.40909,dVar6 + dVar7 * -0.01136);
  dVar5 = (double)_CGRectGetMinX(dVar3,dVar4,dVar9,dVar7);
  dVar3 = (double)_CGRectGetMinY(dVar3,dVar4,dVar9,dVar7);
  objc_stub::addLineToPoint_(IVar2,dVar5 + dVar9 * 0.59091,dVar3 + dVar7 * -0.01136);
  objc_stub::closePath(IVar2);
  objc_stub::rotateFromCenterByDegrees_(IVar2,0x4032000000000000);
  objc_stub::setFill(self);
  objc_stub::fill(IVar2);
  _CGContextEndTransparencyLayer(IVar1);
  _CGContextRestoreGState(IVar1);
  return;
}


// ===== MDFootnoteTextAttachment::decodeWithCoder: @ 00031d64 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFootnoteTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFootnoteTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_color);
  objc_stub::setColor_(param_1,IVar1);
  return;
}


// ===== MDFootnoteTextAttachment::encodeWithCoder: @ 00031df8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFootnoteTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFootnoteTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::color(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_color);
  return;
}


// ===== MDFootnoteTextAttachment::copyWithZone: @ 00031e8c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDFootnoteTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDFootnoteTextAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = objc_stub::color(param_1);
  objc_stub::setColor_(self,IVar1);
  return self;
}


// ===== MDFootnoteTextAttachment::color @ 00031efc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFootnoteTextAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}


// ===== MDFootnoteTextAttachment::setColor: @ 00031f0c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFootnoteTextAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}


// ===== MDFootnoteTextAttachment::.cxx_destruct @ 00031f18 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDFootnoteTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}


