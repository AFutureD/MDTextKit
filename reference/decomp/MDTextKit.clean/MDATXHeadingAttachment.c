// ===== MDATXHeadingAttachment::drawAttachmentInRect: @ 000292e0 =====

void MDATXHeadingAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  dVar3 = param_3.field1_0x10.field0_0x0;
  lVar6 = (long)(dVar3 * 0.35);
  IVar1 = level(param_1);
  if ((IVar1 == 4) || (IVar1 = level(param_1), IVar1 == 6)) {
    dVar2 = 0.5;
  }
  else {
    IVar1 = level(param_1);
    lVar7 = lVar6;
    if (IVar1 != 5) goto LAB_00029358;
    dVar2 = 0.45;
  }
  lVar7 = (long)(dVar3 * dVar2);
LAB_00029358:
  lVar12 = (long)(dVar3 * 0.9);
  dVar2 = param_3.field1_0x10.field1_0x8 / 13.0;
  dVar8 = (double)(long)(dVar2 + dVar2);
  lVar9 = (long)param_3.field0_0x0.field0_0x0;
  dVar3 = (double)_CGRectGetMaxY(lVar9,(long)param_3.field0_0x0.field1_0x8,dVar3,
                                 param_3.field1_0x10.field1_0x8);
  dVar10 = (double)(long)(dVar3 - dVar8);
  dVar3 = dVar8 + (double)(long)(dVar2 * 3.0);
  dVar11 = dVar10 - dVar3;
  dVar3 = dVar11 - dVar3;
  dVar5 = dVar8 * 0.5;
  IVar1 = bezierPathWithRoundedRect_cornerRadius_
                    (NSBezierPath,lVar9,dVar3,lVar12,dVar8,dVar5);
  self = bezierPathWithRoundedRect_cornerRadius_
                   (NSBezierPath,lVar9,dVar11,lVar7,dVar8,dVar5);
  self_00 = bezierPathWithRoundedRect_cornerRadius_
                      (NSBezierPath,lVar9,dVar10,lVar6,dVar8,dVar5);
  self_01 = color(param_1);
  setFill(self_01);
  fill(IVar1);
  fill(self);
  fill(self_00);
  uVar4 = _CGRectUnion(lVar9,dVar3,lVar12,dVar8,lVar9,dVar10,lVar6,dVar8);
  IVar1 = numberAttributedStringWithFontSize_(param_1,dVar2 * 10.0);
  drawWithRect_options_context_(IVar1,uVar4,dVar3 + dVar8,lVar12,dVar8,0,0);
  return;
}

// ===== MDATXHeadingAttachment::lineWidthForLineNumber:level:baseWidth: @ 00029544 =====

double MDATXHeadingAttachment::lineWidthForLineNumber_level_baseWidth_
                 (ID param_1,SEL param_2,long_long param_3,long_long param_4,double param_5)

{
  if (param_3 == 3) {
    if ((param_4 != 3) && (param_4 != 6)) goto LAB_000295a8;
  }
  else if (param_3 == 2) {
    if ((param_4 != 2) && (param_4 != 5)) goto LAB_000295a8;
  }
  else if ((param_3 != 1) || ((param_4 != 1 && (param_4 != 4)))) {
LAB_000295a8:
    return (double)(long)(param_5 * 0.55);
  }
  return (double)(long)(param_5 * 0.9);
}

// ===== MDATXHeadingAttachment::numberAttributedStringWithFontSize: @ 000295bc =====

ID MDATXHeadingAttachment::numberAttributedStringWithFontSize_
             (ID param_1,SEL param_2,double param_3)

{
  
  IVar1 = fontWithName_size_(NSFont,&cf_BearSansUI_Bold);
  IVar2 = defaultParagraphStyle(NSParagraphStyle);
  IVar2 = mutableCopy(IVar2);
  setAlignment_(IVar2,2);
  level(param_1);
  IVar3 = stringWithFormat_(NSString,&cf__lu);
  IVar4 = accentColor(param_1);
  self = _objc_alloc(NSAttributedString);
  local_78 = _NSForegroundColorAttributeName;
  uStack_70 = _NSFontAttributeName;
  local_68 = _NSParagraphStyleAttributeName;
  local_60 = IVar4;
  IStack_58 = IVar1;
  local_50 = IVar2;
  IVar1 = dictionaryWithObjects_forKeys_count_
                    (NSDictionary,&local_60,&local_78,3);
  IVar1 = initWithString_attributes_(self,IVar3,IVar1);
    return IVar1;
  }
}

// ===== MDATXHeadingAttachment::decodeWithCoder: @ 0002975c =====

void MDATXHeadingAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDATXHeadingAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = decodeObjectForKey_(param_3,&cf_borderWidth);
  IVar1 = boolValue(IVar1);
  setBorderWidth_(param_1,(double)(IVar1 & 0xffffffff));
  IVar1 = decodeObjectForKey_(param_3,&cf_color);
  setColor_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_level);
  IVar1 = integerValue(IVar1);
  setLevel_(param_1,IVar1);
  IVar1 = decodeObjectForKey_(param_3,&cf_accentColor);
  setAccentColor_(param_1,IVar1);
  return;
}

// ===== MDATXHeadingAttachment::encodeWithCoder: @ 00029888 =====

void MDATXHeadingAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  
  local_40.super_class = &objc::class_t::MDATXHeadingAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  borderWidth(param_1);
  IVar1 = numberWithDouble_(NSNumber);
  encodeObject_forKey_(param_3,IVar1,&cf_borderWidth);
  IVar1 = color(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_color);
  IVar1 = level(param_1);
  IVar1 = numberWithUnsignedInteger_(NSNumber,IVar1);
  encodeObject_forKey_(param_3,IVar1,&cf_level);
  IVar1 = accentColor(param_1);
  encodeObject_forKey_(param_3,IVar1,&cf_accentColor);
  return;
}

// ===== MDATXHeadingAttachment::copyWithZone: @ 000299cc =====

ID MDATXHeadingAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  
  local_40.super_class = &objc::class_t::MDATXHeadingAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  borderWidth(param_1);
  setBorderWidth_(self);
  IVar1 = color(param_1);
  setColor_(self,IVar1);
  IVar1 = level(param_1);
  setLevel_(self,IVar1);
  IVar1 = accentColor(param_1);
  setAccentColor_(self,IVar1);
  return self;
}

// ===== MDATXHeadingAttachment::color @ 00029a90 =====

ID MDATXHeadingAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}

// ===== MDATXHeadingAttachment::setColor: @ 00029aa0 =====

void MDATXHeadingAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}

// ===== MDATXHeadingAttachment::accentColor @ 00029aac =====

ID MDATXHeadingAttachment::accentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_accentColor);
}

// ===== MDATXHeadingAttachment::setAccentColor: @ 00029abc =====

void MDATXHeadingAttachment::setAccentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_accentColor) = param_3;
  return;
}

// ===== MDATXHeadingAttachment::borderWidth @ 00029ac8 =====

double MDATXHeadingAttachment::borderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderWidth);
}

// ===== MDATXHeadingAttachment::setBorderWidth: @ 00029ad8 =====

void MDATXHeadingAttachment::setBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderWidth) = param_3;
  return;
}

// ===== MDATXHeadingAttachment::level @ 00029ae8 =====

unsigned_long_long MDATXHeadingAttachment::level(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_level);
}

// ===== MDATXHeadingAttachment::setLevel: @ 00029af8 =====

void MDATXHeadingAttachment::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_level) = param_3;
  return;
}

// ===== MDATXHeadingAttachment::.cxx_destruct @ 00029b08 =====

void MDATXHeadingAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_accentColor) = 0;
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}

