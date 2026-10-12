// ===== MDUnorderedListTextAttachment::drawAttachmentInRect: @ 0001b6bc =====

void MDUnorderedListTextAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  lVar8 = (long)param_3.field0_0x0.field0_0x0;
  lVar7 = (long)param_3.field0_0x0.field1_0x8;
  dVar6 = (double)(long)param_3.field1_0x10.field0_0x0;
  lVar5 = (long)param_3.field1_0x10.field1_0x8;
  IVar1 = bulletLevel(param_1);
  uVar2 = IVar1 & 3;
  IVar1 = bulletColor(param_1);
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      setFill(IVar1);
      IVar1 = bezierPathWithOvalInRect_
                        (NSBezierPath,lVar8,lVar7,dVar6,lVar5);
      fill(IVar1);
      return;
    }
    setStroke(IVar1);
    bulletBorderWidth(param_1);
    if (((int)extraout_d0_03 & 1U) != 0) {
      bulletBorderWidth(param_1);
      bulletBorderWidth(param_1);
      lVar8 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,extraout_d0_04 * 0.5,extraout_d0_05 * 0.5);
    }
    IVar1 = bezierPathWithOvalInRect_
                      (NSBezierPath,lVar8,lVar7,dVar6,lVar5);
  }
  else {
    if (uVar2 == 2) {
      setFill(IVar1);
      IVar1 = bulletColor(param_1);
      setStroke(IVar1);
      bulletBorderWidth(param_1);
      if (((int)extraout_d0 & 1U) != 0) {
        bulletBorderWidth(param_1);
        bulletBorderWidth(param_1);
        lVar8 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,extraout_d0_00 * 0.5,extraout_d0_01 * 0.5);
      }
      dVar4 = (double)((ulong)(long)(dVar6 + dVar6 / -1.4142135623730951) >> 1);
      uVar3 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,dVar4,dVar4);
      bulletBorderWidth(param_1);
      IVar1 = bezierPathWithRoundedRect_cornerRadius_
                        (NSBezierPath,uVar3,lVar7,dVar6,lVar5,
                         extraout_d0_02 * 0.5);
      rotateFromCenterByDegrees_(IVar1,0x4046800000000000);
      bulletBorderWidth(param_1);
      setLineWidth_(IVar1);
      fill(IVar1);
      goto LAB_0001ba08;
    }
    setStroke(IVar1);
    bulletBorderWidth(param_1);
    if (((int)extraout_d0_06 & 1U) != 0) {
      bulletBorderWidth(param_1);
      bulletBorderWidth(param_1);
      lVar8 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,extraout_d0_07 * 0.5,extraout_d0_08 * 0.5);
    }
    dVar4 = (double)((ulong)(long)(dVar6 + dVar6 / -1.4142135623730951) >> 1);
    uVar3 = _CGRectInset(lVar8,lVar7,dVar6,lVar5,dVar4,dVar4);
    bulletBorderWidth(param_1);
    IVar1 = bezierPathWithRoundedRect_cornerRadius_
                      (NSBezierPath,uVar3,lVar7,dVar6,lVar5,extraout_d0_09 * 0.5)
    rotateFromCenterByDegrees_(IVar1,0x4046800000000000);
  }
  bulletBorderWidth(param_1);
  setLineWidth_(IVar1);
LAB_0001ba08:
  stroke(IVar1);
  return;
}

// ===== MDUnorderedListTextAttachment::decodeWithCoder: @ 0001ba30 =====

void MDUnorderedListTextAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_bulletLevel);
  IVar1 = integerValue(IVar1);
  setBulletLevel_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_bulletColor);
  setBulletColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_bulletBorderWidth);
  doubleValue(IVar1);
  setBulletBorderWidth_(param_1);
  return;
}

// ===== MDUnorderedListTextAttachment::encodeWithCoder: @ 0001bb2c =====

void MDUnorderedListTextAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = bulletLevel(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_bulletLevel);
  IVar1 = bulletColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_bulletColor);
  bulletBorderWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_bulletBorderWidth);
  return;
}

// ===== MDUnorderedListTextAttachment::copyWithZone: @ 0001bc40 =====

ID MDUnorderedListTextAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  IVar1 = bulletLevel(param_1);
  setBulletLevel_(self,IVar1);
  IVar1 = bulletColor(param_1);
  setBulletColor_(self,IVar1);
  bulletBorderWidth(param_1);
  setBulletBorderWidth_(self);
  return self;
}

// ===== MDUnorderedListTextAttachment::bulletColor @ 0001bcdc =====

ID MDUnorderedListTextAttachment::bulletColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bulletColor);
}

// ===== MDUnorderedListTextAttachment::setBulletColor: @ 0001bcec =====

void MDUnorderedListTextAttachment::setBulletColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_bulletColor) = param_3;
  return;
}

// ===== MDUnorderedListTextAttachment::bulletLevel @ 0001bcf8 =====

unsigned_long_long MDUnorderedListTextAttachment::bulletLevel(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_bulletLevel);
}

// ===== MDUnorderedListTextAttachment::setBulletLevel: @ 0001bd08 =====

void MDUnorderedListTextAttachment::setBulletLevel_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_bulletLevel) = param_3;
  return;
}

// ===== MDUnorderedListTextAttachment::bulletBorderWidth @ 0001bd18 =====

double MDUnorderedListTextAttachment::bulletBorderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_bulletBorderWidth);
}

// ===== MDUnorderedListTextAttachment::setBulletBorderWidth: @ 0001bd28 =====

void MDUnorderedListTextAttachment::setBulletBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_bulletBorderWidth) = param_3;
  return;
}

// ===== MDUnorderedListTextAttachment::.cxx_destruct @ 0001bd38 =====

void MDUnorderedListTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_bulletColor) = 0;
  return;
}

