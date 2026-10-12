// ===== _TtC11MDTextKitUI19MDMathRenderOptions::fontSize @ 00061c58 =====

double _TtC11MDTextKitUI19MDMathRenderOptions::fontSize(ID param_1,SEL param_2)

{
  
  lVar1 = fontSize;
  _swift_beginAccess(param_1 + fontSize,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::setFontSize: @ 00061cdc =====

void _TtC11MDTextKitUI19MDMathRenderOptions::setFontSize_(ID param_1,SEL param_2,double param_3)

{
  
  lVar1 = fontSize;
  _swift_beginAccess(param_1 + fontSize,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::isBlock @ 00061db8 =====

bool _TtC11MDTextKitUI19MDMathRenderOptions::isBlock(ID param_1,SEL param_2)

{
  
  lVar1 = isBlock;
  _swift_beginAccess(param_1 + isBlock,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::setIsBlock: @ 00061e3c =====

void _TtC11MDTextKitUI19MDMathRenderOptions::setIsBlock_(ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = isBlock;
  _swift_beginAccess(param_1 + isBlock,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::textColor @ 00061f18 =====

ID _TtC11MDTextKitUI19MDMathRenderOptions::textColor(ID param_1,SEL param_2)

{
  FUN_00061f94(param_1,param_2,&textColor);
  return param_1;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::setTextColor: @ 00061f30 =====

void _TtC11MDTextKitUI19MDMathRenderOptions::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00062060();
  return;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::backgroundColor @ 00061f88 =====

ID _TtC11MDTextKitUI19MDMathRenderOptions::backgroundColor(ID param_1,SEL param_2)

{
  FUN_00061f94(param_1,param_2,&backgroundColor);
  return param_1;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::setBackgroundColor: @ 00062054 =====

void _TtC11MDTextKitUI19MDMathRenderOptions::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  FUN_00062060();
  return;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::renderAsPDF @ 0006216c =====

bool _TtC11MDTextKitUI19MDMathRenderOptions::renderAsPDF(ID param_1,SEL param_2)

{
  
  lVar1 = renderAsPDF;
  _swift_beginAccess(param_1 + renderAsPDF,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::setRenderAsPDF: @ 000621f0 =====

void _TtC11MDTextKitUI19MDMathRenderOptions::setRenderAsPDF_(ID param_1,SEL param_2,bool param_3)

{
  
  lVar1 = renderAsPDF;
  _swift_beginAccess(param_1 + renderAsPDF,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::init @ 00062550 =====

ID _TtC11MDTextKitUI19MDMathRenderOptions::init(ID param_1,SEL param_2)

{
  
  *(undefined8 *)(param_1 + fontSize) = 0x402e000000000000;
  *(undefined1 *)(param_1 + isBlock) = 0;
  puVar1 = (undefined8 *)(param_1 + textColor);
  *puVar1 = 0x6b63616c62;
  puVar1[1] = 0xe500000000000000;
  puVar1 = (undefined8 *)(param_1 + backgroundColor);
  *puVar1 = 0x6574696877;
  puVar1[1] = 0xe500000000000000;
  *(undefined1 *)(param_1 + renderAsPDF) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::MDMathRenderOptions::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}

// ===== _TtC11MDTextKitUI19MDMathRenderOptions::.cxx_destruct @ 000625fc =====

void _TtC11MDTextKitUI19MDMathRenderOptions::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + textColor + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + backgroundColor + 8));
  return;
}

