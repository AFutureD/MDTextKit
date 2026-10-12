// ===== MDCalloutIcon::initWithType:fontSize:color: @ 00007488 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDCalloutIcon::initWithType_fontSize_color_
             (ID param_1,SEL param_2,unsigned_long_long param_3,double param_4,ID param_5)

{
  ID self;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::MDCalloutIcon;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"init");
  if (self != 0) {
    objc_stub::setType_(self,param_3);
    objc_stub::setFontSize_(self,param_4);
    objc_stub::setColor_(self,param_5);
    objc_stub::setScale_(self,param_4 / 20.0);
  }
  return self;
}


// ===== MDCalloutIcon::size @ 00007534 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

CGSize MDCalloutIcon::size(ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  double extraout_d0_00;
  double dVar2;
  double dVar3;
  CGSize CVar4;
  
  IVar1 = objc_stub::type(param_1);
  if (IVar1 < 5) {
    dVar2 = *(double *)(&DAT_00048a00 + IVar1 * 8);
    dVar3 = *(double *)(&DAT_00048a28 + IVar1 * 8);
    objc_stub::scale(param_1);
    dVar2 = extraout_d0 * dVar2;
    objc_stub::scale(param_1);
    dVar3 = extraout_d0_00 * dVar3;
  }
  else {
    dVar2 = *(double *)PTR__CGSizeZero_0005ed68;
    dVar3 = *(double *)(PTR__CGSizeZero_0005ed68 + 8);
  }
  CVar4.field1_0x8 = dVar3;
  CVar4.field0_0x0 = dVar2;
  return CVar4;
}


// ===== MDCalloutIcon::icon @ 000075a8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCalloutIcon::icon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  code *local_38;
  code *pcStack_30;
  ID local_28;
  
  local_50 = 0;
  local_40 = 0x3032000000;
  local_38 = ___Block_byref_object_copy_;
  pcStack_30 = ___Block_byref_object_dispose_;
  puStack_48 = &local_50;
  local_28 = param_1;
  objc_stub::size(param_1);
  local_78 = PTR___NSConcreteStackBlock_0005ebe0;
  local_70 = 0xc2000000;
  local_68 = ___21__MDCalloutIcon_icon__block_invoke;
  puStack_60 = &___block_descriptor_40_e8_32r_e39_B40__0_CGRect__CGPoint_dd__CGSize_dd__8l;
  local_58 = &local_50;
  IVar1 = objc_stub::imageWithSize_flipped_drawingHandler_((ID)&_OBJC_CLASS___NSImage,1,&local_78);
  __Block_object_dispose(&local_50,8);
  return IVar1;
}


// ===== MDCalloutIcon::drawIcon @ 000076bc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutIcon::drawIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::type(param_1);
  if ((long)IVar1 < 2) {
    if (IVar1 == 0) {
      objc_stub::drawNoteIcon(param_1);
      return;
    }
    if (IVar1 == 1) {
      objc_stub::drawTipIcon(param_1);
      return;
    }
  }
  else {
    if (IVar1 == 4) {
      objc_stub::drawCautionIcon(param_1);
      return;
    }
    if (IVar1 == 3) {
      objc_stub::drawWarningIcon(param_1);
      return;
    }
    if (IVar1 == 2) {
      objc_stub::drawImportantIcon(param_1);
      return;
    }
  }
  return;
}


// ===== MDCalloutIcon::drawCautionIcon @ 00007758 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutIcon::drawCautionIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  objc_stub::scale(param_1);
  objc_stub::scale(param_1);
  _CGAffineTransformMakeScale(&local_a0,extraout_d0,extraout_d0_00);
  IVar1 = objc_stub::color(param_1);
  objc_stub::setFill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x401d70a3d70a3d71,0x4033e66666666666);
  objc_stub::addLineToPoint_(IVar1,0x402abd70a3d70a3d,0x4033e66666666666);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x403019999999999a,0x4032ae147ae147ae,0x402d4ccccccccccd,0x4033e66666666666,
             0x402ec7ae147ae148);
  objc_stub::addLineToPoint_(IVar1,0x4033d70a3d70a3d7);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4034b851eb851eb8,0x40282e147ae147ae,0x40348a3d70a3d70a,0x402b5c28f5c28f5c,
             0x4034b851eb851eb8);
  objc_stub::addLineToPoint_(IVar1,0x4034b851eb851eb8);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4033c51eb851eb85,0x4015c28f5c28f5c3,0x4034b851eb851eb8,0x401af5c28f5c28f6,
             0x40347ae147ae147b,0x4019147ae147ae14);
  objc_stub::addLineToPoint_(IVar1,0x403019999999999a,0x3ff3ae147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402abd70a3d70a3d,0,0x402ecccccccccccd,0x3fdc28f5c28f5c29,0x402d4ccccccccccd,0);
  objc_stub::addLineToPoint_(IVar1,0x401d70a3d70a3d71,0);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4012851eb851eb85,0x3ff3ae147ae147ae,0x401851eb851eb852,0,0x401547ae147ae148,
             0x3fdccccccccccccd);
  objc_stub::addLineToPoint_(IVar1,0x3fec7ae147ae147b,0x4015c28f5c28f5c3);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0,0x401f3d70a3d70a3d,0x3fc70a3d70a3d70a,0x4018eb851eb851ec,0,0x401af5c28f5c28f6);
  objc_stub::addLineToPoint_(IVar1,0,0x40282e147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x3fec7ae147ae147b,0x402cf0a3d70a3d71,0,0x402a51eb851eb852,0x3fc70a3d70a3d70a,
             0x402b5c28f5c28f5c);
  objc_stub::addLineToPoint_(IVar1,0x4012851eb851eb85,0x4032ae147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401d70a3d70a3d71,0x4033e66666666666,0x401547ae147ae148,0x403375c28f5c28f6,
             0x401851eb851eb852,0x4033e66666666666);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x401f28f5c28f5c29,0x4031c51eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40185c28f5c28f5c,0x4031028f5c28f5c3,0x401b8f5c28f5c28f,0x4031c51eb851eb85,
             0x401a51eb851eb852);
  objc_stub::addLineToPoint_(IVar1,0x40067ae147ae147b,0x402abd70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4002b851eb851eb8,0x4027dc28f5c28f5c,0x400370a3d70a3d71,0x4029dc28f5c28f5c,
             0x4002b851eb851eb8);
  objc_stub::addLineToPoint_(IVar1,0x4002b851eb851eb8);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40067ae147ae147b,0x401a28f5c28f5c29,0x4002b851eb851eb8,0x401d000000000000,
             0x400370a3d70a3d71);
  objc_stub::addLineToPoint_(IVar1,0x40185c28f5c28f5c,0x4007333333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401f28f5c28f5c29,0x40011eb851eb851f,0x401a51eb851eb852,0x4002cccccccccccd,
             0x401b8f5c28f5c28f,0x40011eb851eb851f);
  objc_stub::addLineToPoint_(IVar1,0x4029e147ae147ae1,0x40011eb851eb851f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402d428f5c28f5c3,0x4007333333333333,0x402ba8f5c28f5c29,0x40011eb851eb851f,
             0x402c47ae147ae148,0x4002cccccccccccd);
  objc_stub::addLineToPoint_(IVar1,0x4031e8f5c28f5c29,0x401a28f5c28f5c29);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x403263d70a3d70a4,0x401fe147ae147ae1,0x40324a3d70a3d70a,0x401be147ae147ae1,
             0x403263d70a3d70a4,0x401d000000000000);
  objc_stub::addLineToPoint_(IVar1,0x403263d70a3d70a4,0x4027dc28f5c28f5c);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4031e8f5c28f5c29,0x402abd70a3d70a3d,0x403263d70a3d70a4,0x40294ccccccccccd,
             0x40324a3d70a3d70a,0x4029dc28f5c28f5c);
  objc_stub::addLineToPoint_(IVar1,0x402d428f5c28f5c3,0x4031028f5c28f5c3);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4029e147ae147ae1,0x4031c51eb851eb85,0x402c47ae147ae148,0x40318ccccccccccd,
             0x402ba8f5c28f5c29,0x4031c51eb851eb85);
  objc_stub::closePath(IVar1);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  objc_stub::applyTransform_(IVar1,&local_d0);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x4024b851eb851eb8,0x4026f5c28f5c28f6);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402699999999999a,0x402519999999999a,0x4025e147ae147ae1,0x4026f5c28f5c28f6,
             0x40268a3d70a3d70a,0x402651eb851eb852);
  objc_stub::addLineToPoint_(IVar1,0x4026e66666666666,0x401870a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024b33333333333,0x4014333333333333,0x4026f0a3d70a3d71,0x4015f5c28f5c28f6,
             0x4026051eb851eb85,0x4014333333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40228a3d70a3d70a,0x4018666666666666,0x40236147ae147ae1,0x4014333333333333,
             0x4022800000000000,0x4015eb851eb851ec);
  objc_stub::addLineToPoint_(IVar1,0x4022d70a3d70a3d7,0x402519999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024b851eb851eb8,0x4026f5c28f5c28f6,0x4022e147ae147ae1,0x40264ccccccccccd,
             0x40238f5c28f5c28f,0x4026f5c28f5c28f6);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x4024b851eb851eb8,0x402d851eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402723d70a3d70a4,0x402b4ccccccccccd,0x4026147ae147ae14,0x402d851eb851eb85,
             0x402723d70a3d70a4,0x402c99999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024b851eb851eb8,0x40290f5c28f5c28f,0x402723d70a3d70a4,0x402a000000000000,
             0x4026147ae147ae14,0x40290f5c28f5c28f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402251eb851eb852,0x402b4ccccccccccd,0x40236147ae147ae1,0x40290f5c28f5c28f,
             0x402251eb851eb852,0x402a000000000000);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024b851eb851eb8,0x402d851eb851eb85,0x402251eb851eb852,0x402c947ae147ae14,
             0x4023666666666666,0x402d851eb851eb85);
  objc_stub::closePath(IVar1);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  objc_stub::applyTransform_(IVar1,&local_d0);
  objc_stub::fill(IVar1);
  return;
}


// ===== MDCalloutIcon::drawWarningIcon @ 00007f18 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutIcon::drawWarningIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  objc_stub::scale(param_1);
  objc_stub::scale(param_1);
  _CGAffineTransformMakeScale(&local_90,extraout_d0,extraout_d0_00);
  IVar1 = objc_stub::color(param_1);
  objc_stub::setFill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x4006e147ae147ae1,0x4032ee147ae147ae);
  objc_stub::addLineToPoint_(IVar1,0x4031eb851eb851ec,0x4032ee147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4034c51eb851eb85,0x4030170a3d70a3d7,0x4033a8f5c28f5c29,0x4032ee147ae147ae,
             0x4034c51eb851eb85,0x4031a66666666666);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40346147ae147ae1,0x402d47ae147ae148,0x4034c51eb851eb85,0x402f333333333333,
             0x4034a3d70a3d70a4,0x402e333333333333);
  objc_stub::addLineToPoint_(IVar1,0x4029ae147ae147ae,0x3ff7ae147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024c7ae147ae148,0x3fa999999999999a,0x4028947ae147ae14,0x3fe0f5c28f5c28f6,
             0x4026b33333333333,0x3fa999999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401fc28f5c28f5c3,0x3ff7ae147ae147ae,0x4022d70a3d70a3d7,0x3fa999999999999a,
             0x4020f0a3d70a3d71,0x3fe0f5c28f5c28f6);
  objc_stub::addLineToPoint_(IVar1,0x3fd8f5c28f5c28f6,0x402d47ae147ae148);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0,0x4030170a3d70a3d7,0x3fbeb851eb851eb8,0x402e3851eb851eb8,0,0x402f333333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4006e147ae147ae1,0x4032ee147ae147ae,0,0x4031a66666666666,0x3ff1c28f5c28f5c3,
             0x4032ee147ae147ae);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x40091eb851eb851f,0x4030dc28f5c28f5c);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4001eb851eb851ec,0x402fd70a3d70a3d7,0x4004a3d70a3d70a4,0x4030dc28f5c28f5c,
             0x4001eb851eb851ec,0x40306b851eb851ec);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4002cccccccccccd,0x402ed1eb851eb852,0x4001eb851eb851ec,0x402f8f5c28f5c28f,
             0x400228f5c28f5c29,0x402f28f5c28f5c29);
  objc_stub::addLineToPoint_(IVar1,0x40233851eb851eb8,0x400599999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024c7ae147ae148,0x40023d70a3d70a3d,0x40238f5c28f5c28f,0x400347ae147ae148,
             0x40242e147ae147ae,0x40023d70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402651eb851eb852,0x4005ae147ae147ae,0x40256147ae147ae1,0x40023d70a3d70a3d,
             0x4025fae147ae147b,0x400347ae147ae148);
  objc_stub::addLineToPoint_(IVar1,0x40326b851eb851ec,0x402edc28f5c28f5c);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40328a3d70a3d70a,0x402fd70a3d70a3d7,0x4032800000000000,0x402f2e147ae147ae,
             0x40328a3d70a3d70a,0x402f8f5c28f5c28f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4031a147ae147ae1,0x4030dc28f5c28f5c,0x40328a3d70a3d70a,0x40306b851eb851ec,
             0x40322e147ae147ae,0x4030dc28f5c28f5c);
  objc_stub::closePath(IVar1);
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  local_a0 = local_70;
  objc_stub::applyTransform_(IVar1,&local_c0);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x4024c7ae147ae148,0x402819999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4026a3d70a3d70a4,0x40263d70a3d70a3d,0x4025f0a3d70a3d71,0x402819999999999a,
             0x402699999999999a,0x402775c28f5c28f6);
  objc_stub::addLineToPoint_(IVar1,0x4026f0a3d70a3d71,0x401ac28f5c28f5c3);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024c28f5c28f5c3,0x4016851eb851eb85,0x4027000000000000,0x401847ae147ae148,
             0x40260f5c28f5c28f,0x4016851eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402299999999999a,0x401ab851eb851eb8,0x402375c28f5c28f6,0x4016851eb851eb85,
             0x40228a3d70a3d70a,0x40183d70a3d70a3d);
  objc_stub::addLineToPoint_(IVar1,0x4022e147ae147ae1,0x40263d70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024c7ae147ae148,0x402819999999999a,0x4022eb851eb851ec,0x402770a3d70a3d71,
             0x402399999999999a,0x402819999999999a);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x4024c7ae147ae148,0x402ea8f5c28f5c29);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4027333333333333,0x402c70a3d70a3d71,0x40261eb851eb851f,0x402ea8f5c28f5c29,
             0x4027333333333333,0x402dbd70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024c7ae147ae148,0x402a333333333333,0x4027333333333333,0x402b1eb851eb851f,
             0x402623d70a3d70a4,0x402a333333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40225c28f5c28f5c,0x402c70a3d70a3d71,0x40236b851eb851ec,0x402a333333333333,
             0x40225c28f5c28f5c,0x402b23d70a3d70a4);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4024c7ae147ae148,0x402ea8f5c28f5c29,0x40225c28f5c28f5c,0x402dbd70a3d70a3d,
             0x402370a3d70a3d71,0x402ea8f5c28f5c29);
  objc_stub::closePath(IVar1);
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  local_a0 = local_70;
  objc_stub::applyTransform_(IVar1,&local_c0);
  objc_stub::fill(IVar1);
  return;
}


// ===== MDCalloutIcon::drawTipIcon @ 00008538 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutIcon::drawTipIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  objc_stub::scale(param_1);
  objc_stub::scale(param_1);
  _CGAffineTransformMakeScale(&local_a0,extraout_d0,extraout_d0_00);
  IVar1 = objc_stub::color(param_1);
  objc_stub::setFill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x4021333333333333,0x40135c28f5c28f5c);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4021b33333333333,0x401270a3d70a3d71,0x40217ae147ae147b,0x40135c28f5c28f5c,
             0x4021a8f5c28f5c29);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4025947ae147ae14,0x400570a3d70a3d71,0x40223d70a3d70a3d,0x400851eb851eb852,
             0x4022333333333333,0x4007eb851eb851ec);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4026051eb851eb85,0x40035c28f5c28f5c,0x4025d70a3d70a3d7,0x4005333333333333,
             0x4026051eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40258f5c28f5c28f,0x400147ae147ae148,0x4026051eb851eb85,0x40023d70a3d70a3d,
             0x4025d70a3d70a3d7,0x400170a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4021b33333333333,0x3fcd70a3d70a3d71,0x4022333333333333,0x3ffe147ae147ae14,
             0x40223d70a3d70a3d,0x3ffd1eb851eb851f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4021333333333333,0,0x4021a8f5c28f5c29,0x3fb999999999999a,0x40217ae147ae147b,0);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4020ae147ae147ae,0x3fceb851eb851eb8,0x4020e66666666666,0,0x4020b851eb851eb8,
             0x3fb999999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401999999999999a,0x400147ae147ae148,0x402028f5c28f5c29,0x3ffccccccccccccd,
             0x40202e147ae147ae,0x3ffd99999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4018b851eb851eb8,0x40035c28f5c28f5c,0x40190a3d70a3d70a,0x4001851eb851eb85,
             0x4018b851eb851eb8,0x40023d70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4019a3d70a3d70a4,0x400570a3d70a3d71,0x4018b851eb851eb8,0x40047ae147ae147b,
             0x40190a3d70a3d70a,0x4005333333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4020ae147ae147ae,0x401270a3d70a3d71,0x40202e147ae147ae,0x4007c28f5c28f5c3,
             0x402023d70a3d70a4);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4021333333333333,0x40135c28f5c28f5c,0x4020b851eb851eb8,0x4012f5c28f5c28f6,
             0x4020e66666666666,0x40135c28f5c28f5c);
  objc_stub::closePath(IVar1);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  objc_stub::applyTransform_(IVar1,&local_d0);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x400ecccccccccccd,0x40277ae147ae147b);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4011000000000000,0x4026c28f5c28f5c3,0x401047ae147ae148,0x40277ae147ae147b,
             0x4010eb851eb851ec);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401d666666666666,0x402099999999999a,0x4012666666666666,0x40219eb851eb851f,
             0x4012a3d70a3d70a4,0x4021947ae147ae14);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401ecccccccccccd,0x401f8f5c28f5c28f,0x401e333333333333,0x4020851eb851eb85,
             0x401ecccccccccccd,0x40203851eb851eb8);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401d666666666666,0x401e000000000000,0x401ecccccccccccd,0x401ec28f5c28f5c3,
             0x401e333333333333,0x401e147ae147ae14);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4011000000000000,0x4011ae147ae147ae,0x4012ae147ae147ae,0x401c851eb851eb85,
             0x40125c28f5c28f5c,0x401c333333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400ecccccccccccd,0x4010333333333333,0x4010eb851eb851ec,0x4010cccccccccccd,
             0x401047ae147ae148,0x4010333333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400b99999999999a,0x4011c28f5c28f5c3,0x400d1eb851eb851f,0x4010333333333333,
             0x400bd70a3d70a3d7,0x4010cccccccccccd);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x3fd6666666666666,0x401e000000000000,0x40091eb851eb851f,0x401c000000000000,
             0x40083d70a3d70a3d,0x401c0a3d70a3d70a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0,0x401f8f5c28f5c28f,0x3fc3333333333333,0x401e28f5c28f5c29,0,0x401ec28f5c28f5c3);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x3fd999999999999a,0x402099999999999a,0,0x40203d70a3d70a3d,0x3fc3333333333333,
             0x4020851eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400b99999999999a,0x4026b851eb851eb8,0x40083d70a3d70a3d,0x40216b851eb851ec,
             0x40091eb851eb851f,0x40218f5c28f5c28f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400ecccccccccccd,0x40277ae147ae147b,0x400bd70a3d70a3d7,0x40272e147ae147ae,
             0x400d1eb851eb851f,0x40277ae147ae147b);
  objc_stub::closePath(IVar1);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  objc_stub::applyTransform_(IVar1,&local_d0);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x40256b851eb851ec,0x4036970a3d70a3d7);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4026b851eb851eb8,0x4035fd70a3d70a3d,0x4026147ae147ae14,0x4036970a3d70a3d7,
             0x402699999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4031f33333333333,0x402ec7ae147ae148,0x402823d70a3d70a4,0x4030c00000000000,
             0x402999999999999a,0x402ff0a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40328f5c28f5c28f,0x402d75c28f5c28f6,0x40324f5c28f5c28f,0x402eb33333333333,
             0x40328f5c28f5c28f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4031f33333333333,0x402c28f5c28f5c29,0x40328f5c28f5c28f,0x402ccccccccccccd,
             0x40324f5c28f5c28f,0x402c428f5c28f5c3);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4026b851eb851eb8,0x401de147ae147ae1,0x40299eb851eb851f,0x402af0a3d70a3d71,
             0x40283851eb851eb8,0x402970a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40256b851eb851ec,0x401b8f5c28f5c28f,0x402699999999999a,0x401c851eb851eb85,
             0x4026147ae147ae14,0x401b8f5c28f5c28f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40241eb851eb851f,0x401de147ae147ae1,0x4024bd70a3d70a3d,0x401b8f5c28f5c28f,
             0x40243d70a3d70a3d,0x401c851eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400bc28f5c28f5c3,0x402c28f5c28f5c29,0x4022b33333333333,0x402970a3d70a3d71,
             0x40213851eb851eb8,0x402b051eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4006e147ae147ae1,0x402d75c28f5c28f6,0x4008e147ae147ae1,0x402c3d70a3d70a3d,
             0x4006e147ae147ae1,0x402cc7ae147ae148);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400bc28f5c28f5c3,0x402ec7ae147ae148,0x4006e147ae147ae1,0x402e28f5c28f5c29,
             0x4008cccccccccccd,0x402eae147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40241eb851eb851f,0x4035fd70a3d70a3d,0x4021333333333333,0x4030147ae147ae14,
             0x40228f5c28f5c28f,0x4030c00000000000);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40256b851eb851ec,0x4036970a3d70a3d7,0x40243d70a3d70a3d,0x4036570a3d70a3d7,
             0x4024c28f5c28f5c3,0x4036970a3d70a3d7);
  objc_stub::closePath(IVar1);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  objc_stub::applyTransform_(IVar1,&local_d0);
  objc_stub::fill(IVar1);
  return;
}


// ===== MDCalloutIcon::drawNoteIcon @ 00008e44 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutIcon::drawNoteIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  objc_stub::scale(param_1);
  objc_stub::scale(param_1);
  _CGAffineTransformMakeScale(&local_90,extraout_d0,extraout_d0_00);
  IVar1 = objc_stub::color(param_1);
  objc_stub::setFill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x4033bd70a3d70a3d,0x3fa47ae147ae147b);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4035f0a3d70a3d71,0x3fdae147ae147ae1,0x4035051eb851eb85,0x3fa47ae147ae147b);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x403707ae147ae148,0x3ff8000000000000,0x403668f5c28f5c29,0x3fe570a3d70a3d71,
             0x4036c7ae147ae148);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x403768f5c28f5c29,0x400dae147ae147ae,0x4037451eb851eb85,0x3fff851eb851eb85,
             0x403768f5c28f5c29);
  objc_stub::addLineToPoint_(IVar1,0x403768f5c28f5c29);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x403707ae147ae148,0x4030f0a3d70a3d71,0x403768f5c28f5c29,0x4030028f5c28f5c3,
             0x4037451eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4035f0a3d70a3d71,0x4032051eb851eb85,0x4036c7ae147ae148,0x403168f5c28f5c29,
             0x403668f5c28f5c29,0x4031c51eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4033bd70a3d70a3d,0x403268f5c28f5c29,0x40357ae147ae147b,0x4032451eb851eb85,
             0x4035051eb851eb85,0x403268f5c28f5c29);
  objc_stub::addLineToPoint_(IVar1,0x400d5c28f5c28f5c,0x403268f5c28f5c29);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x3ff75c28f5c28f5c,0x4032051eb851eb85,0x40031eb851eb851f,0x403268f5c28f5c29,
             0x3ffee147ae147ae1,0x4032451eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x3fd851eb851eb852,0x4030f0a3d70a3d71,0x3ff0000000000000,0x4031c51eb851eb85,
             0x3fe428f5c28f5c29,0x403168f5c28f5c29);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0,0x402d7ae147ae147b,0x3fc0a3d70a3d70a4,0x40307ae147ae147b,0,0x4030028f5c28f5c3);
  objc_stub::addLineToPoint_(IVar1,0,0x400dae147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x3fd851eb851eb852,0x3ff8000000000000,0,0x400370a3d70a3d71,0x3fc0a3d70a3d70a4,
             0x3fff851eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x3ff75c28f5c28f5c,0x3fdae147ae147ae1,0x3fe428f5c28f5c29,0x3ff0a3d70a3d70a4,
             0x3ff0000000000000,0x3fe570a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400d5c28f5c28f5c,0x3fa47ae147ae147b,0x3ffee147ae147ae1,0x3fc5c28f5c28f5c3,
             0x40031eb851eb851f,0x3fa47ae147ae147b);
  objc_stub::addLineToPoint_(IVar1,0x4033bd70a3d70a3d,0x3fa47ae147ae147b);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x4033ca3d70a3d70a,0x4000f5c28f5c28f6);
  objc_stub::addLineToPoint_(IVar1,0x400cf5c28f5c28f6,0x4000f5c28f5c28f6);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4005851eb851eb85,0x40023d70a3d70a3d,0x4008a3d70a3d70a4,0x4000f5c28f5c28f6);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4001eb851eb851ec,0x4005d70a3d70a3d7,0x4004000000000000,0x40030a3d70a3d70a,
             0x4002b851eb851eb8);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4000a3d70a3d70a4,0x400d47ae147ae148,0x40011eb851eb851f,0x400770a3d70a3d71,
             0x4000a3d70a3d70a4);
  objc_stub::addLineToPoint_(IVar1,0x4000a3d70a3d70a4);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4001eb851eb851ec,0x402f6b851eb851ec,0x4000a3d70a3d70a4,0x402ea3d70a3d70a4,
             0x40011eb851eb851f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4005851eb851eb85,0x40302b851eb851ec,0x4002b851eb851eb8,0x402fd1eb851eb852,
             0x4004000000000000,0x40300f5c28f5c28f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x400cf5c28f5c28f6,0x4030547ae147ae14,0x40071eb851eb851f,0x4030451eb851eb85,
             0x4008a3d70a3d70a4,0x4030547ae147ae14);
  objc_stub::addLineToPoint_(IVar1,0x4033ca3d70a3d70a,0x4030547ae147ae14);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4034b5c28f5c28f6,0x40302b851eb851ec,0x4034547ae147ae14,0x4030547ae147ae14,
             0x4034851eb851eb85,0x4030451eb851eb85);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40352b851eb851ec,0x402f6b851eb851ec,0x4034e8f5c28f5c29,0x40300f5c28f5c28f,
             0x40350f5c28f5c28f,0x402fd1eb851eb852);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4035547ae147ae14,0x402d947ae147ae14,0x4035451eb851eb85,0x402f0a3d70a3d70a,
             0x4035547ae147ae14,0x402ea3d70a3d70a4);
  objc_stub::addLineToPoint_(IVar1,0x4035547ae147ae14,0x400d47ae147ae148);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40352b851eb851ec,0x4005d70a3d70a3d7,0x4035547ae147ae14,0x4008f5c28f5c28f6,
             0x4035451eb851eb85,0x400770a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4034b5c28f5c28f6,0x40023d70a3d70a3d,0x40350f5c28f5c28f,0x400451eb851eb852,
             0x4034e8f5c28f5c29,0x40030a3d70a3d70a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4033ca3d70a3d70a,0x4000f5c28f5c28f6,0x4034851eb851eb85,0x400170a3d70a3d71,
             0x4034547ae147ae14,0x4000f5c28f5c28f6);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x40306e147ae147ae,0x40153d70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40312147ae147ae1,0x40180a3d70a3d70a,0x4030d1eb851eb852,0x40153d70a3d70a3d,
             0x40312147ae147ae1);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40306e147ae147ae,0x401ad70a3d70a3d7,0x40312147ae147ae1,0x401999999999999a,
             0x4030d1eb851eb852,0x401ad70a3d70a3d7);
  objc_stub::addLineToPoint_(IVar1,0x4017e147ae147ae1,0x401ad70a3d70a3d7);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4015147ae147ae14,0x40180a3d70a3d70a,0x401651eb851eb852,0x401ad70a3d70a3d7,
             0x4015147ae147ae14,0x401999999999999a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4017e147ae147ae1,0x40153d70a3d70a3d,0x4015147ae147ae14,0x40167ae147ae147b,
             0x401651eb851eb852,0x40153d70a3d70a3d);
  objc_stub::addLineToPoint_(IVar1,0x40306e147ae147ae,0x40153d70a3d70a3d);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x40306e147ae147ae,0x40210a3d70a3d70a);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40312147ae147ae1,0x402270a3d70a3d71,0x4030d1eb851eb852,0x40210a3d70a3d70a,
             0x40312147ae147ae1);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40306e147ae147ae,0x4023d70a3d70a3d7,0x40312147ae147ae1,0x40233851eb851eb8,
             0x4030d1eb851eb852,0x4023d70a3d70a3d7);
  objc_stub::addLineToPoint_(IVar1,0x4017e147ae147ae1,0x4023d70a3d70a3d7);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4015147ae147ae14,0x402270a3d70a3d71,0x401651eb851eb852,0x4023d70a3d70a3d7,
             0x4015147ae147ae14,0x40233851eb851eb8);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4017e147ae147ae1,0x40210a3d70a3d70a,0x4015147ae147ae14,0x4021ae147ae147ae,
             0x401651eb851eb852,0x40210a3d70a3d70a);
  objc_stub::addLineToPoint_(IVar1,0x40306e147ae147ae,0x40210a3d70a3d70a);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x4029d1eb851eb852,0x402775c28f5c28f6);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402b3851eb851eb8,0x4028dc28f5c28f5c,0x402a99999999999a,0x402775c28f5c28f6,
             0x402b3851eb851eb8);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4029d1eb851eb852,0x402a47ae147ae148,0x402b3851eb851eb8,0x4029a3d70a3d70a4,
             0x402a99999999999a,0x402a47ae147ae148);
  objc_stub::addLineToPoint_(IVar1,0x4017e147ae147ae1,0x402a47ae147ae148);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4015147ae147ae14,0x4028dc28f5c28f5c,0x401651eb851eb852,0x402a47ae147ae148,
             0x4015147ae147ae14,0x4029a3d70a3d70a4);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4017e147ae147ae1,0x402775c28f5c28f6,0x4015147ae147ae14,0x402819999999999a,
             0x401651eb851eb852,0x402775c28f5c28f6);
  objc_stub::addLineToPoint_(IVar1,0x4029d1eb851eb852,0x402775c28f5c28f6);
  objc_stub::closePath(IVar1);
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  local_a0 = local_70;
  objc_stub::applyTransform_(IVar1,&local_c0);
  objc_stub::fill(IVar1);
  return;
}


// ===== MDCalloutIcon::drawImportantIcon @ 000097c4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutIcon::drawImportantIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  objc_stub::scale(param_1);
  objc_stub::scale(param_1);
  _CGAffineTransformMakeScale(&local_90,extraout_d0,extraout_d0_00);
  IVar1 = objc_stub::color(param_1);
  objc_stub::setFill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x401a000000000000,0x4036000000000000);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4020947ae147ae14,0x403511eb851eb852,0x401c666666666666,0x4036000000000000,
             0x401e3d70a3d70a3d,0x4035b851eb851eb8);
  objc_stub::addLineToPoint_(IVar1,0x40273d70a3d70a3d,0x403223d70a3d70a4);
  objc_stub::addLineToPoint_(IVar1,0x40317851eb851eb8,0x403223d70a3d70a4);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x403623d70a3d70a4,0x402af0a3d70a3d71,0x40346e147ae147ae,0x403223d70a3d70a4,
             0x403623d70a3d70a4,0x4030666666666666);
  objc_stub::addLineToPoint_(IVar1,0x403623d70a3d70a4,0x401751eb851eb852);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40317851eb851eb8,0x3ff2666666666666,0x403623d70a3d70a4,0x4007333333333333,
             0x40346e147ae147ae,0x3ff2666666666666);
  objc_stub::addLineToPoint_(IVar1,0x4012ae147ae147ae,0x3ff2666666666666);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0,0x401751eb851eb852,0x3ffb5c28f5c28f5c,0x3ff2666666666666,0,0x40071eb851eb851f);
  objc_stub::addLineToPoint_(IVar1,0,0x402af0a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40123d70a3d70a3d,0x403223d70a3d70a4,0,0x4030666666666666,0x3ffc7ae147ae147b,
             0x403223d70a3d70a4);
  objc_stub::addLineToPoint_(IVar1,0x4014851eb851eb85,0x403223d70a3d70a4);
  objc_stub::addLineToPoint_(IVar1,0x4014851eb851eb85,0x4034733333333333);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x401a000000000000,0x4036000000000000,0x4014851eb851eb85,0x4035666666666666,
             0x40168f5c28f5c28f,0x4036000000000000);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x401c1eb851eb851f,0x403391eb851eb852);
  objc_stub::addLineToPoint_(IVar1,0x401c1eb851eb851f,0x4030cf5c28f5c28f);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4018c28f5c28f5c3,0x402ff0a3d70a3d71,0x401c1eb851eb851f,0x4030333333333333,
             0x401b0a3d70a3d70a,0x402ff0a3d70a3d71);
  objc_stub::addLineToPoint_(IVar1,0x4013147ae147ae14,0x402ff0a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40015c28f5c28f5c,0x402abd70a3d70a3d,0x400828f5c28f5c29,0x402ff0a3d70a3d71,
             0x40015c28f5c28f5c);
  objc_stub::addLineToPoint_(IVar1,0x40015c28f5c28f5c,0x4017ae147ae147ae);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4013147ae147ae14,0x400aa3d70a3d70a4,0x40015c28f5c28f5c,0x4010d70a3d70a3d7,
             0x400828f5c28f5c29,0x400aa3d70a3d70a4);
  objc_stub::addLineToPoint_(IVar1,0x40316147ae147ae1,0x400aa3d70a3d70a4);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4033f851eb851eb8,0x4017ae147ae147ae,0x40331eb851eb851f,0x400aa3d70a3d70a4,
             0x4033f851eb851eb8,0x4010d70a3d70a3d7);
  objc_stub::addLineToPoint_(IVar1,0x4033f851eb851eb8,0x402abd70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40316147ae147ae1,0x402ff0a3d70a3d71,0x4033f851eb851eb8,0x402e28f5c28f5c29,
             0x40331eb851eb851f,0x402ff0a3d70a3d71);
  objc_stub::addLineToPoint_(IVar1,0x4026f5c28f5c28f6,0x402ff0a3d70a3d71);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x40243d70a3d70a3d,0x403087ae147ae148,0x4025b33333333333,0x402ff0a3d70a3d71,
             0x40251eb851eb851f,0x4030147ae147ae14);
  objc_stub::closePath(IVar1);
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  local_a0 = local_70;
  objc_stub::applyTransform_(IVar1,&local_c0);
  objc_stub::fill(IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  objc_stub::moveToPoint_(IVar1,0x402628f5c28f5c29,0x4026570a3d70a3d7);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4028051eb851eb85,0x4024800000000000,0x40274ccccccccccd,0x4026570a3d70a3d7,
             0x4027fae147ae147b,0x4025b33333333333);
  objc_stub::addLineToPoint_(IVar1,0x402851eb851eb852,0x40173d70a3d70a3d);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402623d70a3d70a4,0x4013000000000000,0x40286147ae147ae1,0x4014cccccccccccd,
             0x402770a3d70a3d71,0x4013000000000000);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4023f5c28f5c28f6,0x4017333333333333,0x4024d1eb851eb852,0x4013000000000000,
             0x4023eb851eb851ec,0x4014c28f5c28f5c3);
  objc_stub::addLineToPoint_(IVar1,0x40243d70a3d70a3d,0x4024800000000000);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402628f5c28f5c29,0x4026570a3d70a3d7,0x40244ccccccccccd,0x4025b33333333333,
             0x4024fae147ae147b,0x4026570a3d70a3d7);
  objc_stub::closePath(IVar1);
  objc_stub::moveToPoint_(IVar1,0x402628f5c28f5c29,0x402ceb851eb851ec);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4028947ae147ae14,0x402aae147ae147ae,0x4027800000000000,0x402ceb851eb851ec,
             0x4028947ae147ae14,0x402c000000000000);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402628f5c28f5c29,0x402875c28f5c28f6,0x4028947ae147ae14,0x40296147ae147ae1,
             0x4027851eb851eb85,0x402875c28f5c28f6);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x4023b851eb851eb8,0x402aae147ae147ae,0x4024cccccccccccd,0x402875c28f5c28f6,
             0x4023b851eb851eb8,0x40296147ae147ae1);
  objc_stub::addCurveToPoint_controlPoint1_controlPoint2_
            (IVar1,0x402628f5c28f5c29,0x402ceb851eb851ec,0x4023b851eb851eb8,0x402bfae147ae147b,
             0x4024d1eb851eb852,0x402ceb851eb851ec);
  objc_stub::closePath(IVar1);
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  local_a0 = local_70;
  objc_stub::applyTransform_(IVar1,&local_c0);
  objc_stub::fill(IVar1);
  return;
}


// ===== MDCalloutIcon::type @ 00009e50 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long MDCalloutIcon::type(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 8);
}


// ===== MDCalloutIcon::setType: @ 00009e58 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutIcon::setType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  return;
}


// ===== MDCalloutIcon::fontSize @ 00009e60 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDCalloutIcon::fontSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x10);
}


// ===== MDCalloutIcon::setFontSize: @ 00009e68 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutIcon::setFontSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDCalloutIcon::scale @ 00009e70 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDCalloutIcon::scale(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x18);
}


// ===== MDCalloutIcon::setScale: @ 00009e78 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutIcon::setScale_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x18) = param_3;
  return;
}


// ===== MDCalloutIcon::color @ 00009e80 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDCalloutIcon::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}


// ===== MDCalloutIcon::setColor: @ 00009e8c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDCalloutIcon::setColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}


// ===== MDCalloutIcon::.cxx_destruct @ 00009e94 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDCalloutIcon::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


