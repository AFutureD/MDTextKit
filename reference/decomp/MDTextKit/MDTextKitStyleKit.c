// ===== MDTextKitStyleKit::initialize @ 0002d2e0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDTextKitStyleKit::initialize(ID param_1,SEL param_2)

{
  return;
}


// ===== MDTextKitStyleKit::drawLinkIconWithFrame:fillColor: @ 0002d2e4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDTextKitStyleKit::drawLinkIconWithFrame_fillColor_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ID IVar1;
  ID self;
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
  
  IVar1 = objc_stub::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  IVar1 = _objc_retainAutorelease(IVar1);
  IVar1 = objc_stub::CGContext(IVar1);
  dVar5 = (double)(long)(param_3.field1_0x10.field0_0x0 * 0.0 + 0.5);
  dVar11 = param_3.field0_0x0.field0_0x0 + dVar5;
  dVar2 = (double)(long)(param_3.field1_0x10.field1_0x8 * 0.0 + 0.5);
  dVar12 = param_3.field0_0x0.field1_0x8 + dVar2;
  dVar5 = (double)(long)(param_3.field1_0x10.field0_0x0 + 0.5) - dVar5;
  dVar2 = (double)(long)(param_3.field1_0x10.field1_0x8 + 0.5) - dVar2;
  self = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar3 = dVar12 + dVar2 * 0.14338;
  objc_stub::moveToPoint_(self);
  dVar4 = dVar12 + dVar2 * 0.1812;
  dVar7 = dVar12 + dVar2 * 0.14788;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.72663,dVar4,dVar11 + dVar5 * 0.68779,dVar7,
             dVar11 + dVar5 * 0.70015);
  dVar10 = dVar11 + dVar5 * 0.78616;
  objc_stub::lineToPoint_(self,dVar10,dVar12 + dVar2 * 0.24074);
  dVar13 = dVar11 + dVar5 * 0.82399;
  dVar9 = dVar11 + dVar5 * 0.81264;
  dVar8 = dVar11 + dVar5 * 0.81948;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar13,dVar12 + dVar2 * 0.29443,dVar9,dVar12 + dVar2 * 0.26721,dVar8,
             dVar12 + dVar2 * 0.27957);
  dVar6 = dVar11 + dVar5 * 0.82849;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar13,dVar12 + dVar2 * 0.33933,dVar6,dVar12 + dVar2 * 0.30928,dVar6,
             dVar12 + dVar2 * 0.32448);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar10,dVar12 + dVar2 * 0.39302,dVar8,dVar12 + dVar2 * 0.35419,dVar9,
             dVar12 + dVar2 * 0.36655);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.35648,dVar12 + dVar2 * 0.8227);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.31056,dVar12 + dVar2 * 0.86274,dVar11 + dVar5 * 0.33158,
             dVar12 + dVar2 * 0.84761,dVar11 + dVar5 * 0.32217,dVar12 + dVar2 * 0.85533);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.27382,dVar12 + dVar2 * 0.8786,dVar11 + dVar5 * 0.29895,
             dVar12 + dVar2 * 0.87016,dVar11 + dVar5 * 0.28718,dVar12 + dVar2 * 0.87524);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.21319,dVar12 + dVar2 * 0.88455,dVar11 + dVar5 * 0.26047,
             dVar12 + dVar2 * 0.88196,dVar11 + dVar5 * 0.24839,dVar12 + dVar2 * 0.88351);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.13186,dVar12 + dVar2 * 0.88695);
  dVar6 = dVar11 + dVar5 * 0.08;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar6,dVar12 + dVar2 * 0.83806,dVar11 + dVar5 * 0.10404,dVar12 + dVar2 * 0.88777,
             dVar11 + dVar5 * 0.08082,dVar12 + dVar2 * 0.86588);
  objc_stub::lineToPoint_(self,dVar6,dVar12 + dVar2 * 0.83495);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.0826,dVar12 + dVar2 * 0.75392);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.08868,dVar12 + dVar2 * 0.69346,dVar11 + dVar5 * 0.08373,
             dVar12 + dVar2 * 0.71881,dVar11 + dVar5 * 0.0853,dVar12 + dVar2 * 0.70677);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.10453,dVar12 + dVar2 * 0.65684,dVar11 + dVar5 * 0.09205,
             dVar12 + dVar2 * 0.68014,dVar11 + dVar5 * 0.09713,dVar12 + dVar2 * 0.66841);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.14449,dVar12 + dVar2 * 0.61105,dVar11 + dVar5 * 0.11194,
             dVar12 + dVar2 * 0.64528,dVar11 + dVar5 * 0.11964,dVar12 + dVar2 * 0.6359);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.57434,dVar4);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.62803,dVar3,dVar11 + dVar5 * 0.60082,dVar12 + dVar2 * 0.15472,
             dVar11 + dVar5 * 0.61317,dVar7);
  dVar4 = dVar12 + dVar2 * 0.13887;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.67294,dVar3,dVar11 + dVar5 * 0.64289,dVar4,
             dVar11 + dVar5 * 0.65808,dVar4);
  objc_stub::closePath(self);
  dVar3 = dVar11 + dVar5 * 0.52547;
  dVar4 = dVar12 + dVar2 * 0.3444;
  objc_stub::moveToPoint_(self,dVar3,dVar4);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.1651,dVar12 + dVar2 * 0.70483);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.15648,dVar12 + dVar2 * 0.81093);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.26254,dVar12 + dVar2 * 0.80227);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.62293,dVar12 + dVar2 * 0.44187);
  objc_stub::lineToPoint_(self,dVar3,dVar4);
  objc_stub::closePath(self);
  dVar3 = dVar11 + dVar5 * 0.65967;
  dVar9 = dVar12 + dVar2 * 0.23051;
  objc_stub::moveToPoint_(self,dVar3,dVar9);
  dVar4 = dVar12 + dVar2 * 0.22901;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.64471,dVar9,dVar11 + dVar5 * 0.65472,dVar4,
             dVar11 + dVar5 * 0.64966,dVar4);
  dVar8 = dVar12 + dVar2 * 0.24312;
  dVar6 = dVar12 + dVar2 * 0.23201;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.62681,dVar8,dVar11 + dVar5 * 0.63975,dVar6,
             dVar11 + dVar5 * 0.63563);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.57727,dVar12 + dVar2 * 0.29267);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.67467,dVar12 + dVar2 * 0.39007);
  dVar7 = dVar11 + dVar5 * 0.72425;
  objc_stub::lineToPoint_(self,dVar7,dVar12 + dVar2 * 0.34056);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar5 * 0.73581,dVar12 + dVar2 * 0.32557,dVar11 + dVar5 * 0.73131,
             dVar12 + dVar2 * 0.33349,dVar11 + dVar5 * 0.73418,dVar12 + dVar2 * 0.32945);
  dVar10 = dVar11 + dVar5 * 0.73686;
  objc_stub::lineToPoint_(self,dVar10,dVar12 + dVar2 * 0.32266);
  dVar4 = dVar11 + dVar5 * 0.73836;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar10,dVar12 + dVar2 * 0.30769,dVar4,dVar12 + dVar2 * 0.31771,dVar4,
             dVar12 + dVar2 * 0.31264);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar7,dVar12 + dVar2 * 0.28979,dVar11 + dVar5 * 0.73535,dVar12 + dVar2 * 0.30274,
             dVar11 + dVar5 * 0.73307,dVar12 + dVar2 * 0.29862);
  objc_stub::lineToPoint_(self,dVar11 + dVar5 * 0.67757,dVar8);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar3,dVar9,dVar11 + dVar5 * 0.66875,dVar12 + dVar2 * 0.23429,
             dVar11 + dVar5 * 0.66463,dVar6);
  objc_stub::closePath(self);
  objc_stub::setFill(param_4);
  objc_stub::fill(self);
  objc_stub::saveGraphicsState((ID)&_OBJC_CLASS___NSGraphicsContext);
  _CGContextSetAlpha(0x3fe0000000000000,IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar4 = dVar11 + dVar5 * 0.86081;
  dVar8 = dVar12 + dVar2 * 0.80697;
  objc_stub::moveToPoint_(IVar1,dVar4,dVar8);
  dVar6 = dVar11 + dVar5 * 0.90081;
  dVar7 = dVar11 + dVar5 * 0.8829;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar6,dVar12 + dVar2 * 0.84697,dVar7,dVar8,dVar6,dVar12 + dVar2 * 0.82488);
  dVar3 = dVar12 + dVar2 * 0.88697;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar4,dVar3,dVar6,dVar12 + dVar2 * 0.86906,dVar7,dVar3);
  objc_stub::lineToPoint_(IVar1,dVar11 + dVar5 * 0.43085,dVar12 + dVar2 * 0.88691);
  objc_stub::lineToPoint_(IVar1,dVar11 + dVar5 * 0.51085,dVar12 + dVar2 * 0.80691);
  objc_stub::lineToPoint_(IVar1,dVar4,dVar8);
  objc_stub::closePath(IVar1);
  objc_stub::setFill(param_4);
  objc_stub::fill(IVar1);
  objc_stub::restoreGraphicsState((ID)&_OBJC_CLASS___NSGraphicsContext);
  return;
}


// ===== MDTextKitStyleKit::drawHardLineBreakWithFrame:fillColor: @ 0002dd0c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDTextKitStyleKit::drawHardLineBreakWithFrame_fillColor_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ID self;
  double dVar1;
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
  
  dVar3 = (double)(long)(param_3.field1_0x10.field0_0x0 * 0.0 + 0.5);
  dVar11 = param_3.field0_0x0.field0_0x0 + dVar3;
  dVar1 = (double)(long)(param_3.field1_0x10.field1_0x8 * 0.0 + 0.5);
  dVar4 = param_3.field0_0x0.field1_0x8 + dVar1;
  dVar3 = (double)(long)(param_3.field1_0x10.field0_0x0 + 0.5) - dVar3;
  dVar1 = (double)(long)(param_3.field1_0x10.field1_0x8 + 0.5) - dVar1;
  self = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar5 = dVar11 + dVar3 * 0.46971;
  dVar8 = dVar4 + dVar1 * 0.17667;
  objc_stub::moveToPoint_(self,dVar5,dVar8);
  dVar6 = dVar11 + dVar3 * 0.82971;
  dVar2 = dVar4 + dVar1 * 0.47667;
  dVar7 = dVar11 + dVar3 * 0.66831;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar6,dVar2,dVar7,dVar8,dVar6,dVar4 + dVar1 * 0.27807);
  dVar9 = dVar4 + dVar1 * 0.77667;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar5,dVar9,dVar6,dVar4 + dVar1 * 0.67527,dVar7,dVar9);
  objc_stub::lineToPoint_(self,dVar11 + dVar3 * 0.37186,dVar9);
  objc_stub::lineToPoint_(self,dVar5,dVar4 + dVar1 * 0.91287);
  dVar9 = dVar11 + dVar3 * 0.41931;
  objc_stub::lineToPoint_(self,dVar9,dVar4 + dVar1 * 0.95667);
  dVar10 = dVar11 + dVar3 * 0.17931;
  objc_stub::lineToPoint_(self,dVar10,dVar4 + dVar1 * 0.74727);
  dVar7 = dVar4 + dVar1 * 0.68607;
  dVar6 = dVar11 + dVar3 * 0.15951;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar10,dVar7,dVar6,dVar4 + dVar1 * 0.73047,dVar6,dVar4 + dVar1 * 0.70287);
  objc_stub::lineToPoint_(self,dVar9,dVar2);
  objc_stub::lineToPoint_(self,dVar5,dVar4 + dVar1 * 0.52047);
  objc_stub::lineToPoint_(self,dVar11 + dVar3 * 0.35072,dVar7);
  objc_stub::lineToPoint_(self,dVar5,dVar7);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar11 + dVar3 * 0.73928,dVar4 + dVar1 * 0.48873,dVar11 + dVar3 * 0.59803,dVar7,
             dVar11 + dVar3 * 0.73085,dVar4 + dVar1 * 0.61358);
  dVar2 = dVar11 + dVar3 * 0.73971;
  objc_stub::lineToPoint_(self,dVar2,dVar4 + dVar1 * 0.47607);
  dVar6 = dVar4 + dVar1 * 0.26607;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar5,dVar6,dVar2,dVar4 + dVar1 * 0.34407,dVar11 + dVar3 * 0.60231,dVar6);
  dVar11 = dVar11 + dVar3 * 0.34971;
  objc_stub::lineToPoint_(self,dVar11,dVar6);
  objc_stub::lineToPoint_(self,dVar11,dVar8);
  objc_stub::lineToPoint_(self,dVar5,dVar8);
  objc_stub::closePath(self);
  objc_stub::setWindingRule_(self,1);
  objc_stub::setFill(param_4);
  objc_stub::fill(self);
  return;
}


// ===== MDTextKitStyleKit::drawArrowIconWithFrame:fillColor: @ 0002e07c =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDTextKitStyleKit::drawArrowIconWithFrame_fillColor_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ID self;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = (double)(long)(param_3.field1_0x10.field0_0x0 * 0.0 + 0.5);
  dVar7 = param_3.field0_0x0.field0_0x0 + dVar3;
  dVar1 = (double)(long)(param_3.field1_0x10.field1_0x8 * 0.0 + 0.5);
  dVar8 = param_3.field0_0x0.field1_0x8 + dVar1;
  dVar3 = (double)(long)(param_3.field1_0x10.field0_0x0 + 0.5) - dVar3;
  dVar1 = (double)(long)(param_3.field1_0x10.field1_0x8 + 0.5) - dVar1;
  self = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar4 = dVar7 + dVar3 * 0.55113;
  objc_stub::moveToPoint_(self,dVar4);
  dVar5 = dVar7 + dVar3 * 0.8066;
  objc_stub::lineToPoint_(self,dVar5,dVar8 + dVar1 * 0.51761);
  dVar2 = dVar7 + dVar3 * 0.8274;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (self,dVar5,dVar8 + dVar1 * 0.59335,dVar2,dVar8 + dVar1 * 0.53841,dVar2,
             dVar8 + dVar1 * 0.57255);
  objc_stub::lineToPoint_(self,dVar4,dVar8 + dVar1 * 0.84881);
  dVar2 = dVar7 + dVar3 * 0.4978;
  objc_stub::lineToPoint_(self,dVar2,dVar8 + dVar1 * 0.79548);
  dVar5 = dVar7 + dVar3 * 0.63912;
  dVar6 = dVar8 + dVar1 * 0.59881;
  objc_stub::lineToPoint_(self,dVar5,dVar6);
  dVar7 = dVar7 + dVar3 * 0.17278;
  objc_stub::lineToPoint_(self,dVar7,dVar6);
  dVar3 = dVar8 + dVar1 * 0.51215;
  objc_stub::lineToPoint_(self,dVar7,dVar3);
  objc_stub::lineToPoint_(self,dVar5,dVar3);
  objc_stub::lineToPoint_(self,dVar2,dVar8 + dVar1 * 0.31548);
  objc_stub::lineToPoint_(self,dVar4,dVar8 + dVar1 * 0.26215);
  objc_stub::closePath(self);
  objc_stub::setWindingRule_(self,1);
  objc_stub::setFill(param_4);
  objc_stub::fill(self);
  return;
}


// ===== MDTextKitStyleKit::drawHighlighterWithFrame:fillColor:accentColor: @ 0002e2a8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x40 bytes */

void MDTextKitStyleKit::drawHighlighterWithFrame_fillColor_accentColor_
               (ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  IVar1 = objc_stub::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  IVar1 = _objc_retainAutorelease(IVar1);
  IVar1 = objc_stub::CGContext(IVar1);
  dVar3 = (double)(long)(param_3.field1_0x10.field0_0x0 * 0.04987 + -0.25);
  dVar7 = param_3.field0_0x0.field0_0x0 + dVar3 + 0.75;
  dVar4 = (double)(long)(param_3.field1_0x10.field1_0x8 * 0.08835 + 0.17);
  dVar8 = param_3.field0_0x0.field1_0x8 + dVar4 + 0.33;
  dVar9 = ((double)(long)(param_3.field1_0x10.field0_0x0 * 0.97692 + -0.15) - dVar3) + -0.09;
  dVar10 = ((double)(long)(param_3.field1_0x10.field1_0x8 * 0.8977 + 0.03) - dVar4) + 0.14;
  objc_stub::saveGraphicsState((ID)&_OBJC_CLASS___NSGraphicsContext);
  _CGContextSetAlpha(0x3feccccccccccccd,IVar1);
  IVar2 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar3 = dVar7 + dVar9 * 0.60701;
  dVar4 = dVar8 + dVar10 * 0.0042;
  objc_stub::moveToPoint_(IVar2,dVar3,dVar4);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.67051,dVar8 + dVar10 * 0.04201,dVar7 + dVar9 * 0.62952,
             dVar8 + dVar10 * 0.01032,dVar7 + dVar9 * 0.64744,dVar8 + dVar10 * 0.02105);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.75696,dVar8 + dVar10 * 0.12489);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.76449,dVar8 + dVar10 * 0.1323);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.80862,dVar8 + dVar10 * 0.19797,dVar7 + dVar9 * 0.78689,
             dVar8 + dVar10 * 0.15495,dVar7 + dVar9 * 0.79935,dVar8 + dVar10 * 0.17342);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.81797,dVar8 + dVar10 * 0.28278,dVar7 + dVar9 * 0.81875,
             dVar8 + dVar10 * 0.22483,dVar7 + dVar9 * 0.82195,dVar8 + dVar10 * 0.25386);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.78937,dVar8 + dVar10 * 0.3593,dVar7 + dVar9 * 0.81433,
             dVar8 + dVar10 * 0.30927,dVar7 + dVar9 * 0.80624,dVar8 + dVar10 * 0.33078);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.78372,dVar8 + dVar10 * 0.36858);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.53031,dVar8 + dVar10 * 0.775);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.49926,dVar8 + dVar10 * 0.80991,dVar7 + dVar9 * 0.51992,
             dVar8 + dVar10 * 0.79069,dVar7 + dVar9 * 0.51105,dVar8 + dVar10 * 0.80068);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.45096,dVar8 + dVar10 * 0.83144,dVar7 + dVar9 * 0.48472,
             dVar8 + dVar10 * 0.8213,dVar7 + dVar9 * 0.4684,dVar8 + dVar10 * 0.82858);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.40713,dVar8 + dVar10 * 0.82965,dVar7 + dVar9 * 0.43676,
             dVar8 + dVar10 * 0.83377,dVar7 + dVar9 * 0.42425,dVar8 + dVar10 * 0.83324);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.37885,dVar8 + dVar10 * 0.82288);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.26755,dVar8 + dVar10 * 0.92623);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.07427,dVar8 + dVar10 * 0.73761);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.14425,dVar8 + dVar10 * 0.59901);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.13347,dVar8 + dVar10 * 0.56629);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.12568,dVar8 + dVar10 * 0.53324,dVar7 + dVar9 * 0.12949,
             dVar8 + dVar10 * 0.55396,dVar7 + dVar9 * 0.12708,dVar8 + dVar10 * 0.5439);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.12486,dVar8 + dVar10 * 0.52521);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.12447,dVar8 + dVar10 * 0.51683);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.12461,dVar8 + dVar10 * 0.50559);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.1346,dVar8 + dVar10 * 0.45943,dVar7 + dVar9 * 0.12543,
             dVar8 + dVar10 * 0.48965,dVar7 + dVar9 * 0.12879,dVar8 + dVar10 * 0.47411);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.15949,dVar8 + dVar10 * 0.41802,dVar7 + dVar9 * 0.14052,
             dVar8 + dVar10 * 0.44445,dVar7 + dVar9 * 0.14764,dVar8 + dVar10 * 0.43264);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.46478,dVar8 + dVar10 * 0.06174);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.47183,dVar8 + dVar10 * 0.05371);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.53246,dVar8 + dVar10 * 0.00837,dVar7 + dVar9 * 0.49331,
             dVar8 + dVar10 * 0.02987,dVar7 + dVar9 * 0.51037,dVar8 + dVar10 * 0.01706);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar3,dVar4,dVar7 + dVar9 * 0.55664,dVar8 + dVar10 * -0.00114,
             dVar7 + dVar9 * 0.58216,dVar8 + dVar10 * -0.00257);
  objc_stub::closePath(IVar2);
  dVar3 = dVar7 + dVar9 * 0.24014;
  dVar4 = dVar8 + dVar10 * 0.46966;
  objc_stub::moveToPoint_(IVar2,dVar3,dVar4);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.22445,dVar8 + dVar10 * 0.48596);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.22147,dVar8 + dVar10 * 0.4897);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.21704,dVar8 + dVar10 * 0.49612,dVar7 + dVar9 * 0.21947,
             dVar8 + dVar10 * 0.4923,dVar7 + dVar9 * 0.21807,dVar8 + dVar10 * 0.49435);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.21508,dVar8 + dVar10 * 0.50006);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.21365,dVar8 + dVar10 * 0.50421);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.21243,dVar8 + dVar10 * 0.51431,dVar7 + dVar9 * 0.21273,
             dVar8 + dVar10 * 0.50745,dVar7 + dVar9 * 0.21233,dVar8 + dVar10 * 0.51075);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.21347,dVar8 + dVar10 * 0.52243,dVar7 + dVar9 * 0.21252,
             dVar8 + dVar10 * 0.51739,dVar7 + dVar9 * 0.21282,dVar8 + dVar10 * 0.51968);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.21464,dVar8 + dVar10 * 0.52685);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.21825,dVar8 + dVar10 * 0.53784);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.23994,dVar8 + dVar10 * 0.59934);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.23909,dVar8 + dVar10 * 0.61368);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.18902,dVar8 + dVar10 * 0.71398);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.26863,dVar8 + dVar10 * 0.79265);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.35051,dVar8 + dVar10 * 0.71811);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.36266,dVar8 + dVar10 * 0.71494);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.41694,dVar8 + dVar10 * 0.72908);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.42645,dVar8 + dVar10 * 0.73116);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.4307,dVar8 + dVar10 * 0.7318);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.43856,dVar8 + dVar10 * 0.73165,dVar7 + dVar9 * 0.43371,
             dVar8 + dVar10 * 0.73214,dVar7 + dVar9 * 0.43586,dVar8 + dVar10 * 0.73209);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.44964,dVar8 + dVar10 * 0.72671,dVar7 + dVar9 * 0.44264,
             dVar8 + dVar10 * 0.73098,dVar7 + dVar9 * 0.44623,dVar8 + dVar10 * 0.72938);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.45736,dVar8 + dVar10 * 0.71832,dVar7 + dVar9 * 0.45233,
             dVar8 + dVar10 * 0.7246,dVar7 + dVar9 * 0.45444,dVar8 + dVar10 * 0.72238);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.46387,dVar8 + dVar10 * 0.7084);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.47305,dVar8 + dVar10 * 0.69352);
  objc_stub::lineToPoint_(IVar2,dVar3,dVar4);
  objc_stub::closePath(IVar2);
  dVar3 = dVar7 + dVar9 * 0.55697;
  dVar4 = dVar8 + dVar10 * 0.10908;
  objc_stub::moveToPoint_(IVar2,dVar3,dVar4);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.52922,dVar8 + dVar10 * 0.1312,dVar7 + dVar9 * 0.54799,
             dVar8 + dVar10 * 0.11253,dVar7 + dVar9 * 0.54141,dVar8 + dVar10 * 0.11764);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.30256,dVar8 + dVar10 * 0.39482);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.52272,dVar8 + dVar10 * 0.60944);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.70863,dVar8 + dVar10 * 0.31485);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.71261,dVar8 + dVar10 * 0.30831);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.72661,dVar8 + dVar10 * 0.27611,dVar7 + dVar9 * 0.7215,
             dVar8 + dVar10 * 0.29338,dVar7 + dVar9 * 0.72514,dVar8 + dVar10 * 0.28468);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.72762,dVar8 + dVar10 * 0.26669);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.72374,dVar8 + dVar10 * 0.24377,dVar7 + dVar9 * 0.72788,
             dVar8 + dVar10 * 0.25885,dVar7 + dVar9 * 0.72659,dVar8 + dVar10 * 0.25121);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.70277,dVar8 + dVar10 * 0.21441,dVar7 + dVar9 * 0.72006,
             dVar8 + dVar10 * 0.23419,dVar7 + dVar9 * 0.71501,dVar8 + dVar10 * 0.22677);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.61226,dVar8 + dVar10 * 0.12738);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.6073,dVar8 + dVar10 * 0.12294);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.58237,dVar8 + dVar10 * 0.10789,dVar7 + dVar9 * 0.5969,
             dVar8 + dVar10 * 0.1139,dVar7 + dVar9 * 0.5906,dVar8 + dVar10 * 0.1102);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar3,dVar4,dVar7 + dVar9 * 0.57376,dVar8 + dVar10 * 0.10549,
             dVar7 + dVar9 * 0.56528,dVar8 + dVar10 * 0.10588);
  objc_stub::closePath(IVar2);
  objc_stub::setFill(param_4);
  objc_stub::fill(IVar2);
  objc_stub::restoreGraphicsState((ID)&_OBJC_CLASS___NSGraphicsContext);
  IVar2 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar4 = dVar7 + dVar9 * 0.07117;
  dVar5 = dVar8 + dVar10 * 0.78833;
  objc_stub::moveToPoint_(IVar2,dVar4,dVar5);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.23313,dVar8 + dVar10 * 0.94717);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.21186,dVar8 + dVar10 * 0.9768);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.14632,dVar8 + dVar10 * 0.99445,dVar7 + dVar9 * 0.19598,
             dVar8 + dVar10 * 0.99892,dVar7 + dVar9 * 0.16914,dVar8 + dVar10 * 1.00615);
  objc_stub::lineToPoint_(IVar2,dVar7 + dVar9 * 0.01642,dVar8 + dVar10 * 0.92786);
  dVar3 = dVar7 + dVar9 * 0.00243;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar3,dVar8 + dVar10 * 0.88587,dVar3,dVar8 + dVar10 * 0.92069,
             dVar7 + dVar9 * -0.00383,dVar8 + dVar10 * 0.90189);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar2,dVar7 + dVar9 * 0.00632,dVar8 + dVar10 * 0.87866,dVar7 + dVar9 * 0.00344,
             dVar8 + dVar10 * 0.88328,dVar7 + dVar9 * 0.00475,dVar8 + dVar10 * 0.88085);
  objc_stub::lineToPoint_(IVar2,dVar4,dVar5);
  objc_stub::closePath(IVar2);
  objc_stub::setWindingRule_(IVar2,1);
  objc_stub::setFill(param_5);
  objc_stub::fill(IVar2);
  objc_stub::saveGraphicsState((ID)&_OBJC_CLASS___NSGraphicsContext);
  _CGContextSetAlpha(0x3fc999999999999a,IVar1);
  IVar1 = objc_stub::bezierPath((ID)&_OBJC_CLASS___NSBezierPath);
  dVar4 = dVar7 + dVar9 * 0.96162;
  dVar5 = dVar8 + dVar10 * 0.69696;
  objc_stub::moveToPoint_(IVar1,dVar4,dVar5);
  dVar3 = dVar9 + dVar7;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar3,dVar8 + dVar10 * 0.74639,dVar7 + dVar9 * 0.98282,dVar5,dVar3,
             dVar8 + dVar10 * 0.71909);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar7 + dVar9 * 0.99355,dVar8 + dVar10 * 0.7738,dVar3,dVar8 + dVar10 * 0.75614,
             dVar7 + dVar9 * 0.99776,dVar8 + dVar10 * 0.76568);
  objc_stub::lineToPoint_(IVar1,dVar7 + dVar9 * 0.89121,dVar8 + dVar10 * 0.95737);
  dVar3 = dVar8 + dVar10 * 0.97938;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar7 + dVar9 * 0.85928,dVar3,dVar7 + dVar9 * 0.88409,dVar8 + dVar10 * 0.97112,
             dVar7 + dVar9 * 0.87211,dVar3);
  dVar3 = dVar8 + dVar10 * 0.97936;
  objc_stub::lineToPoint_(IVar1,dVar7 + dVar9 * 0.35702,dVar3);
  dVar6 = dVar7 + dVar9 * 0.32849;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar6,dVar8 + dVar10 * 0.94668,dVar7 + dVar9 * 0.34126,dVar3,dVar6,
             dVar8 + dVar10 * 0.96473);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar7 + dVar9 * 0.33827,dVar8 + dVar10 * 0.92204,dVar6,dVar8 + dVar10 * 0.93723,
             dVar7 + dVar9 * 0.33205,dVar8 + dVar10 * 0.92825);
  objc_stub::lineToPoint_(IVar1,dVar7 + dVar9 * 0.39566,dVar8 + dVar10 * 0.86473);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar7 + dVar9 * 0.46375,dVar8 + dVar10 * 0.86645,dVar7 + dVar9 * 0.42865,
             dVar8 + dVar10 * 0.86808,dVar7 + dVar9 * 0.45135,dVar8 + dVar10 * 0.86865);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar7 + dVar9 * 0.53749,dVar8 + dVar10 * 0.82284,dVar7 + dVar9 * 0.49029,
             dVar8 + dVar10 * 0.86174,dVar7 + dVar9 * 0.51534,dVar8 + dVar10 * 0.84226);
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar7 + dVar9 * 0.58262,dVar8 + dVar10 * 0.75658,dVar7 + dVar9 * 0.55819,
             dVar8 + dVar10 * 0.80469,dVar7 + dVar9 * 0.5668,dVar8 + dVar10 * 0.7852);
  dVar3 = dVar8 + dVar10 * 0.69695;
  objc_stub::curveToPoint_controlPoint1_controlPoint2_
            (IVar1,dVar7 + dVar9 * 0.6958,dVar3,dVar7 + dVar9 * 0.61093,dVar8 + dVar10 * 0.71873,
             dVar7 + dVar9 * 0.65228,dVar3);
  objc_stub::lineToPoint_(IVar1,dVar4,dVar5);
  objc_stub::closePath(IVar1);
  objc_stub::setWindingRule_(IVar1,1);
  objc_stub::setFill(param_5);
  objc_stub::fill(IVar1);
  objc_stub::restoreGraphicsState((ID)&_OBJC_CLASS___NSGraphicsContext);
  return;
}


// ===== MDTextKitStyleKit::imageOfLinkIconWithSize:fillColor: @ 0002f640 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDTextKitStyleKit::imageOfLinkIconWithSize_fillColor_
             (ID param_1,SEL param_2,CGSize param_3,ID param_4)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  double local_40;
  double dStack_38;
  
  dStack_38 = param_3.field1_0x8;
  local_40 = param_3.field0_0x0;
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = ___55__MDTextKitStyleKit_imageOfLinkIconWithSize_fillColor___block_invoke;
  puStack_50 = &___block_descriptor_56_e8_32s_e39_B40__0_CGRect__CGPoint_dd__CGSize_dd__8l;
  local_48 = param_4;
  IVar1 = objc_stub::imageWithSize_flipped_drawingHandler_
                    ((ID)&_OBJC_CLASS___NSImage,local_40,dStack_38,1,&local_68);
  return IVar1;
}


// ===== MDTextKitStyleKit::imageOfHardLineBreakWithSize:fillColor: @ 0002f728 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDTextKitStyleKit::imageOfHardLineBreakWithSize_fillColor_
             (ID param_1,SEL param_2,CGSize param_3,ID param_4)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  double local_40;
  double dStack_38;
  
  dStack_38 = param_3.field1_0x8;
  local_40 = param_3.field0_0x0;
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = ___60__MDTextKitStyleKit_imageOfHardLineBreakWithSize_fillColor___block_invoke;
  puStack_50 = &___block_descriptor_56_e8_32s_e39_B40__0_CGRect__CGPoint_dd__CGSize_dd__8l;
  local_48 = param_4;
  IVar1 = objc_stub::imageWithSize_flipped_drawingHandler_
                    ((ID)&_OBJC_CLASS___NSImage,local_40,dStack_38,1,&local_68);
  return IVar1;
}


// ===== MDTextKitStyleKit::imageOfArrowIconWithSize:fillColor: @ 0002f810 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDTextKitStyleKit::imageOfArrowIconWithSize_fillColor_
             (ID param_1,SEL param_2,CGSize param_3,ID param_4)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  double local_40;
  double dStack_38;
  
  dStack_38 = param_3.field1_0x8;
  local_40 = param_3.field0_0x0;
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = ___56__MDTextKitStyleKit_imageOfArrowIconWithSize_fillColor___block_invoke;
  puStack_50 = &___block_descriptor_56_e8_32s_e39_B40__0_CGRect__CGPoint_dd__CGSize_dd__8l;
  local_48 = param_4;
  IVar1 = objc_stub::imageWithSize_flipped_drawingHandler_
                    ((ID)&_OBJC_CLASS___NSImage,local_40,dStack_38,1,&local_68);
  return IVar1;
}


// ===== MDTextKitStyleKit::imageOfHighlighterWithSize:fillColor:accentColor: @ 0002f8f8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

ID MDTextKitStyleKit::imageOfHighlighterWithSize_fillColor_accentColor_
             (ID param_1,SEL param_2,CGSize param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID local_58;
  double local_50;
  double dStack_48;
  
  dStack_48 = param_3.field1_0x8;
  local_50 = param_3.field0_0x0;
  local_80 = PTR___NSConcreteStackBlock_0005ebe0;
  local_78 = 0xc2000000;
  local_70 = 
  ___70__MDTextKitStyleKit_imageOfHighlighterWithSize_fillColor_accentColor___block_invoke;
  puStack_68 = &___block_descriptor_64_e8_32s40s_e39_B40__0_CGRect__CGPoint_dd__CGSize_dd__8l;
  local_60 = param_4;
  local_58 = param_5;
  IVar1 = objc_stub::imageWithSize_flipped_drawingHandler_
                    ((ID)&_OBJC_CLASS___NSImage,local_50,dStack_48,1,&local_80);
  return IVar1;
}


