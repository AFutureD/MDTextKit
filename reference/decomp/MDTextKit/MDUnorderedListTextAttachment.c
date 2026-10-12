// ===== MDUnorderedListTextAttachment::drawAttachmentInRect: @ 0001b6bc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDUnorderedListTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ulong uVar2;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined8 uVar3;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  double extraout_d0_07;
  double extraout_d0_08;
  double extraout_d0_09;
  double dVar4;
  long lVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)param_3.field0_0x0.field0_0x0;
  lVar7 = (long)param_3.field0_0x0.field1_0x8;
  dVar6 = (double)(long)param_3.field1_0x10.field0_0x0;
  lVar5 = (long)param_3.field1_0x10.field1_0x8;
  IVar1 = objc_stub::bulletLevel(param_1);
  uVar2 = IVar1 & 3;
  IVar1 = objc_stub::bulletColor(param_1);
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      objc_stub::setFill(IVar1);
      IVar1 = objc_stub::bezierPathWithOvalInRect_
                        ((ID)&_OBJC_CLASS___NSBezierPath,lVar8,lVar7,dVar6,lVar5);
      objc_stub::fill(IVar1);
      return;
    }
    objc_stub::setStroke(IVar1);
    objc_stub::bulletBorderWidth(param_1);
    if (((int)extraout_d0_03 & 1U) != 0) {
      objc_stub::bulletBorderWidth(param_1);
      objc_stub::bulletBorderWidth(param_1);
      lVar8 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,extraout_d0_04 * 0.5,extraout_d0_05 * 0.5);
    }
    IVar1 = objc_stub::bezierPathWithOvalInRect_
                      ((ID)&_OBJC_CLASS___NSBezierPath,lVar8,lVar7,dVar6,lVar5);
  }
  else {
    if (uVar2 == 2) {
      objc_stub::setFill(IVar1);
      IVar1 = objc_stub::bulletColor(param_1);
      objc_stub::setStroke(IVar1);
      objc_stub::bulletBorderWidth(param_1);
      if (((int)extraout_d0 & 1U) != 0) {
        objc_stub::bulletBorderWidth(param_1);
        objc_stub::bulletBorderWidth(param_1);
        lVar8 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,extraout_d0_00 * 0.5,extraout_d0_01 * 0.5);
      }
      dVar4 = (double)((ulong)(long)(dVar6 + dVar6 / -1.4142135623730951) >> 1);
      uVar3 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,dVar4,dVar4);
      objc_stub::bulletBorderWidth(param_1);
      IVar1 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                        ((ID)&_OBJC_CLASS___NSBezierPath,uVar3,lVar7,dVar6,lVar5,
                         extraout_d0_02 * 0.5);
      objc_stub::rotateFromCenterByDegrees_(IVar1,0x4046800000000000);
      objc_stub::bulletBorderWidth(param_1);
      objc_stub::setLineWidth_(IVar1);
      objc_stub::fill(IVar1);
      goto LAB_0001ba08;
    }
    objc_stub::setStroke(IVar1);
    objc_stub::bulletBorderWidth(param_1);
    if (((int)extraout_d0_06 & 1U) != 0) {
      objc_stub::bulletBorderWidth(param_1);
      objc_stub::bulletBorderWidth(param_1);
      lVar8 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,extraout_d0_07 * 0.5,extraout_d0_08 * 0.5);
    }
    dVar4 = (double)((ulong)(long)(dVar6 + dVar6 / -1.4142135623730951) >> 1);
    uVar3 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,dVar4,dVar4);
    objc_stub::bulletBorderWidth(param_1);
    IVar1 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                      ((ID)&_OBJC_CLASS___NSBezierPath,uVar3,lVar7,dVar6,lVar5,extraout_d0_09 * 0.5)
    ;
    objc_stub::rotateFromCenterByDegrees_(IVar1,0x4046800000000000);
  }
  objc_stub::bulletBorderWidth(param_1);
  objc_stub::setLineWidth_(IVar1);
LAB_0001ba08:
  objc_stub::stroke(IVar1);
  return;
}


// ===== MDUnorderedListTextAttachment::decodeWithCoder: @ 0001ba30 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_bulletLevel);
  IVar1 = objc_stub::integerValue(IVar1);
  objc_stub::setBulletLevel_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_bulletColor);
  objc_stub::setBulletColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_bulletBorderWidth);
  objc_stub::doubleValue(IVar1);
  objc_stub::setBulletBorderWidth_(param_1);
  return;
}


// ===== MDUnorderedListTextAttachment::encodeWithCoder: @ 0001bb2c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::bulletLevel(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_bulletLevel);
  IVar1 = objc_stub::bulletColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_bulletColor);
  objc_stub::bulletBorderWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_bulletBorderWidth);
  return;
}


// ===== MDUnorderedListTextAttachment::copyWithZone: @ 0001bc40 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDUnorderedListTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = objc_stub::bulletLevel(param_1);
  objc_stub::setBulletLevel_(self,IVar1);
  IVar1 = objc_stub::bulletColor(param_1);
  objc_stub::setBulletColor_(self,IVar1);
  objc_stub::bulletBorderWidth(param_1);
  objc_stub::setBulletBorderWidth_(self);
  return self;
}


// ===== MDUnorderedListTextAttachment::bulletColor @ 0001bcdc =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDUnorderedListTextAttachment::bulletColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bulletColor);
}


// ===== MDUnorderedListTextAttachment::setBulletColor: @ 0001bcec =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextAttachment::setBulletColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_bulletColor) = param_3;
  return;
}


// ===== MDUnorderedListTextAttachment::bulletLevel @ 0001bcf8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long MDUnorderedListTextAttachment::bulletLevel(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_bulletLevel);
}


// ===== MDUnorderedListTextAttachment::setBulletLevel: @ 0001bd08 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextAttachment::setBulletLevel_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_bulletLevel) = param_3;
  return;
}


// ===== MDUnorderedListTextAttachment::bulletBorderWidth @ 0001bd18 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDUnorderedListTextAttachment::bulletBorderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_bulletBorderWidth);
}


// ===== MDUnorderedListTextAttachment::setBulletBorderWidth: @ 0001bd28 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextAttachment::setBulletBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_bulletBorderWidth) = param_3;
  return;
}


// ===== MDUnorderedListTextAttachment::.cxx_destruct @ 0001bd38 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDUnorderedListTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_bulletColor) = 0;
  return;
}


