// ===== MDATXHeadingAttachment::drawAttachmentInRect: @ 000292e0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDATXHeadingAttachment::drawAttachmentInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID self_01;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  long lVar12;
  
  dVar3 = param_3.field1_0x10.field0_0x0;
  lVar6 = (long)(dVar3 * 0.35);
  IVar1 = objc_stub::level(param_1);
  if ((IVar1 == 4) || (IVar1 = objc_stub::level(param_1), IVar1 == 6)) {
    dVar2 = 0.5;
  }
  else {
    IVar1 = objc_stub::level(param_1);
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
  IVar1 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                    ((ID)&_OBJC_CLASS___NSBezierPath,lVar9,dVar3,lVar12,dVar8,dVar5);
  self = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                   ((ID)&_OBJC_CLASS___NSBezierPath,lVar9,dVar11,lVar7,dVar8,dVar5);
  self_00 = objc_stub::bezierPathWithRoundedRect_cornerRadius_
                      ((ID)&_OBJC_CLASS___NSBezierPath,lVar9,dVar10,lVar6,dVar8,dVar5);
  self_01 = objc_stub::color(param_1);
  objc_stub::setFill(self_01);
  objc_stub::fill(IVar1);
  objc_stub::fill(self);
  objc_stub::fill(self_00);
  uVar4 = _CGRectUnion(lVar9,dVar3,lVar12,dVar8,lVar9,dVar10,lVar6,dVar8);
  IVar1 = objc_stub::numberAttributedStringWithFontSize_(param_1,dVar2 * 10.0);
  objc_stub::drawWithRect_options_context_(IVar1,uVar4,dVar3 + dVar8,lVar12,dVar8,0,0);
  return;
}


// ===== MDATXHeadingAttachment::lineWidthForLineNumber:level:baseWidth: @ 00029544 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

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

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDATXHeadingAttachment::numberAttributedStringWithFontSize_
             (ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ID local_60;
  ID IStack_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = objc_stub::fontWithName_size_((ID)&_OBJC_CLASS___NSFont,&cf_BearSansUI_Bold);
  IVar2 = objc_stub::defaultParagraphStyle((ID)&_OBJC_CLASS___NSParagraphStyle);
  IVar2 = objc_stub::mutableCopy(IVar2);
  objc_stub::setAlignment_(IVar2,2);
  objc_stub::level(param_1);
  IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__lu);
  IVar4 = objc_stub::accentColor(param_1);
  self = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
  local_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_0005ec80;
  uStack_70 = *(undefined8 *)PTR__NSFontAttributeName_0005ec48;
  local_68 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98;
  local_60 = IVar4;
  IStack_58 = IVar1;
  local_50 = IVar2;
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_78,3);
  IVar1 = objc_stub::initWithString_attributes_(self,IVar3,IVar1);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDATXHeadingAttachment::decodeWithCoder: @ 0002975c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDATXHeadingAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDATXHeadingAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_borderWidth);
  IVar1 = objc_stub::boolValue(IVar1);
  objc_stub::setBorderWidth_(param_1,(double)(IVar1 & 0xffffffff));
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_color);
  objc_stub::setColor_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_level);
  IVar1 = objc_stub::integerValue(IVar1);
  objc_stub::setLevel_(param_1,IVar1);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_accentColor);
  objc_stub::setAccentColor_(param_1,IVar1);
  return;
}


// ===== MDATXHeadingAttachment::encodeWithCoder: @ 00029888 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDATXHeadingAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDATXHeadingAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  objc_stub::borderWidth(param_1);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_borderWidth);
  IVar1 = objc_stub::color(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_color);
  IVar1 = objc_stub::level(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_level);
  IVar1 = objc_stub::accentColor(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_accentColor);
  return;
}


// ===== MDATXHeadingAttachment::copyWithZone: @ 000299cc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDATXHeadingAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDATXHeadingAttachment;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"copyWithZone:");
  objc_stub::borderWidth(param_1);
  objc_stub::setBorderWidth_(self);
  IVar1 = objc_stub::color(param_1);
  objc_stub::setColor_(self,IVar1);
  IVar1 = objc_stub::level(param_1);
  objc_stub::setLevel_(self,IVar1);
  IVar1 = objc_stub::accentColor(param_1);
  objc_stub::setAccentColor_(self,IVar1);
  return self;
}


// ===== MDATXHeadingAttachment::color @ 00029a90 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDATXHeadingAttachment::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_color);
}


// ===== MDATXHeadingAttachment::setColor: @ 00029aa0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDATXHeadingAttachment::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_color) = param_3;
  return;
}


// ===== MDATXHeadingAttachment::accentColor @ 00029aac =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDATXHeadingAttachment::accentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_accentColor);
}


// ===== MDATXHeadingAttachment::setAccentColor: @ 00029abc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDATXHeadingAttachment::setAccentColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_accentColor) = param_3;
  return;
}


// ===== MDATXHeadingAttachment::borderWidth @ 00029ac8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDATXHeadingAttachment::borderWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_borderWidth);
}


// ===== MDATXHeadingAttachment::setBorderWidth: @ 00029ad8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDATXHeadingAttachment::setBorderWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_borderWidth) = param_3;
  return;
}


// ===== MDATXHeadingAttachment::level @ 00029ae8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long MDATXHeadingAttachment::level(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_level);
}


// ===== MDATXHeadingAttachment::setLevel: @ 00029af8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDATXHeadingAttachment::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_level) = param_3;
  return;
}


// ===== MDATXHeadingAttachment::.cxx_destruct @ 00029b08 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDATXHeadingAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_accentColor) = 0;
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}


