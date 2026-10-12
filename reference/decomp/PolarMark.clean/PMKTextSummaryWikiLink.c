// ===== PMKTextSummaryWikiLink::wikiLinkWithTitle:offset: @ 0000a0c4 =====

ID PMKTextSummaryWikiLink::wikiLinkWithTitle_offset_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  
  self = _objc_opt_new(&objc::class_t::PMKTextSummaryWikiLink);
  setTitle_(self,param_3);
  setOffset_(self,param_4);
  return self;
}

// ===== PMKTextSummaryWikiLink::decodedTitle @ 0000a148 =====

ID PMKTextSummaryWikiLink::decodedTitle(ID param_1,SEL param_2)

{
  
  IVar1 = title(param_1);
  IVar1 = decodeTitleForWikiLink_((ID)&objc::class_t::PMKWikiLink,IVar1);
  return IVar1;
}

// ===== PMKTextSummaryWikiLink::description @ 0000a1b0 =====

ID PMKTextSummaryWikiLink::description(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::PMKTextSummaryWikiLink;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  title(param_1);
  offset(param_1);
  IVar1 = stringWithFormat_(NSString,&cf___title___offset__lu);
  return IVar1;
}

// ===== PMKTextSummaryWikiLink::title @ 0000a284 =====

ID PMKTextSummaryWikiLink::title(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

// ===== PMKTextSummaryWikiLink::setTitle: @ 0000a290 =====

void PMKTextSummaryWikiLink::setTitle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}

// ===== PMKTextSummaryWikiLink::offset @ 0000a298 =====

unsigned_long_long PMKTextSummaryWikiLink::offset(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}

// ===== PMKTextSummaryWikiLink::setOffset: @ 0000a2a0 =====

void PMKTextSummaryWikiLink::setOffset_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}

// ===== PMKTextSummaryWikiLink::.cxx_destruct @ 0000a2a8 =====

void PMKTextSummaryWikiLink::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

