// ===== SFRectCollection::init @ 000300a4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFRectCollection::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SFRectCollection;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::setRects_(self,IVar1);
  }
  return self;
}


// ===== SFRectCollection::addRect: @ 00030118 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void SFRectCollection::addRect_(ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::rects(param_1);
  IVar1 = objc_stub::valueWithCGRect_
                    ((ID)&_OBJC_CLASS___NSValue,param_3.field0_0x0.field0_0x0,
                     param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  objc_stub::addObject_(self,IVar1);
  return;
}


// ===== SFRectCollection::enumerateRectsUsingBlock: @ 000301a0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFRectCollection::enumerateRectsUsingBlock_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID self;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  self = objc_stub::rects(param_1,param_3,(ulong)param_4);
  local_48 = PTR___NSConcreteStackBlock_0005ebe0;
  local_40 = 0xc2000000;
  local_38 = ___45__SFRectCollection_enumerateRectsUsingBlock___block_invoke;
  puStack_30 = &___block_descriptor_40_e8_32bs_e15_v32__0_8Q16_B24l;
  local_28 = param_3;
  objc_stub::enumerateObjectsUsingBlock_(self,&local_48);
  return;
}


// ===== SFRectCollection::firstRect @ 0003029c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

CGRect SFRectCollection::firstRect(ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar2;
  
  IVar1 = objc_stub::rects(param_1);
  IVar1 = objc_stub::firstObject(IVar1);
  objc_stub::CGRectValue(IVar1);
  CVar2.field0_0x0.field1_0x8 = in_d1;
  CVar2.field0_0x0.field0_0x0 = extraout_d0;
  CVar2.field1_0x10.field1_0x8 = in_d3;
  CVar2.field1_0x10.field0_0x0 = in_d2;
  return CVar2;
}


// ===== SFRectCollection::lastRect @ 00030318 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

CGRect SFRectCollection::lastRect(ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar2;
  
  IVar1 = objc_stub::rects(param_1);
  IVar1 = objc_stub::lastObject(IVar1);
  objc_stub::CGRectValue(IVar1);
  CVar2.field0_0x0.field1_0x8 = in_d1;
  CVar2.field0_0x0.field0_0x0 = extraout_d0;
  CVar2.field1_0x10.field1_0x8 = in_d3;
  CVar2.field1_0x10.field0_0x0 = in_d2;
  return CVar2;
}


// ===== SFRectCollection::description @ 00030394 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFRectCollection::description(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  objc_super local_40;
  
  self = objc_stub::string((ID)&_OBJC_CLASS___NSMutableString);
  local_40.super_class = &objc::class_t::SFRectCollection;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"description");
  objc_stub::appendString_(self,IVar1);
  IVar1 = objc_stub::rects(param_1);
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = ___31__SFRectCollection_description__block_invoke;
  puStack_50 = &___block_descriptor_40_e8_32s_e15_v32__0_8Q16_B24l;
  local_48 = self;
  objc_stub::enumerateObjectsUsingBlock_(IVar1,&local_68);
  return self;
}


// ===== SFRectCollection::rects @ 000304c8 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID SFRectCollection::rects(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== SFRectCollection::setRects: @ 000304d4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void SFRectCollection::setRects_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== SFRectCollection::selected @ 000304dc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool SFRectCollection::selected(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}


// ===== SFRectCollection::setSelected: @ 000304e4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x14 bytes */

void SFRectCollection::setSelected_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}


// ===== SFRectCollection::.cxx_destruct @ 000304ec =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void SFRectCollection::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


