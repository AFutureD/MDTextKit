// ===== SFRectCollection::init @ 000300a4 =====

ID SFRectCollection::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::SFRectCollection;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = array(NSMutableArray);
    setRects_(self,IVar1);
  }
  return self;
}

// ===== SFRectCollection::addRect: @ 00030118 =====

void SFRectCollection::addRect_(ID param_1,SEL param_2,CGRect param_3)

{
  
  self = rects(param_1);
  IVar1 = valueWithCGRect_
                    (NSValue,param_3.field0_0x0.field0_0x0,
                     param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  addObject_(self,IVar1);
  return;
}

// ===== SFRectCollection::enumerateRectsUsingBlock: @ 000301a0 =====

void SFRectCollection::enumerateRectsUsingBlock_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  
  self = rects(param_1,param_3,(ulong)param_4);
  local_38 = ___45__SFRectCollection_enumerateRectsUsingBlock___block_invoke;
  local_28 = param_3;
  enumerateObjectsUsingBlock_(self,&local_48);
  return;
}

// ===== SFRectCollection::firstRect @ 0003029c =====

CGRect SFRectCollection::firstRect(ID param_1,SEL param_2)

{
  CGRect CVar2;
  
  IVar1 = rects(param_1);
  IVar1 = firstObject(IVar1);
  CGRectValue(IVar1);
  CVar2.field0_0x0.field1_0x8 = in_d1;
  CVar2.field0_0x0.field0_0x0 = extraout_d0;
  CVar2.field1_0x10.field1_0x8 = in_d3;
  CVar2.field1_0x10.field0_0x0 = in_d2;
  return CVar2;
}

// ===== SFRectCollection::lastRect @ 00030318 =====

CGRect SFRectCollection::lastRect(ID param_1,SEL param_2)

{
  CGRect CVar2;
  
  IVar1 = rects(param_1);
  IVar1 = lastObject(IVar1);
  CGRectValue(IVar1);
  CVar2.field0_0x0.field1_0x8 = in_d1;
  CVar2.field0_0x0.field0_0x0 = extraout_d0;
  CVar2.field1_0x10.field1_0x8 = in_d3;
  CVar2.field1_0x10.field0_0x0 = in_d2;
  return CVar2;
}

// ===== SFRectCollection::description @ 00030394 =====

ID SFRectCollection::description(ID param_1,SEL param_2)

{
  
  self = string(NSMutableString);
  local_40.super_class = &objc::class_t::SFRectCollection;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"description");
  appendString_(self,IVar1);
  IVar1 = rects(param_1);
  local_58 = ___31__SFRectCollection_description__block_invoke;
  local_48 = self;
  enumerateObjectsUsingBlock_(IVar1,&local_68);
  return self;
}

// ===== SFRectCollection::rects @ 000304c8 =====

ID SFRectCollection::rects(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== SFRectCollection::setRects: @ 000304d4 =====

void SFRectCollection::setRects_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== SFRectCollection::selected @ 000304dc =====

bool SFRectCollection::selected(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}

// ===== SFRectCollection::setSelected: @ 000304e4 =====

void SFRectCollection::setSelected_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}

// ===== SFRectCollection::.cxx_destruct @ 000304ec =====

void SFRectCollection::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

