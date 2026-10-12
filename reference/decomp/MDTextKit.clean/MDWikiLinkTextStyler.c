// ===== MDWikiLinkTextStyler::init @ 00038bdc =====

ID MDWikiLinkTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDWikiLinkTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = blackColor(NSColor);
    setLinkColor_(self,IVar1);
  }
  return self;
}

// ===== MDWikiLinkTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00038c50 =====

void MDWikiLinkTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_50 = 
  ___75__MDWikiLinkTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_40 = param_3;
  IStack_38 = param_1;
  enumerateWikiLinkInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_60);
  return;
}

// ===== MDWikiLinkTextStyler::linkColor @ 00039020 =====

ID MDWikiLinkTextStyler::linkColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_linkColor);
}

// ===== MDWikiLinkTextStyler::setLinkColor: @ 00039030 =====

void MDWikiLinkTextStyler::setLinkColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_linkColor) = param_3;
  return;
}

// ===== MDWikiLinkTextStyler::wikiLinkURLBlock @ 0003903c =====

ID MDWikiLinkTextStyler::wikiLinkURLBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_wikiLinkURLBlock);
}

// ===== MDWikiLinkTextStyler::setWikiLinkURLBlock: @ 0003904c =====

void MDWikiLinkTextStyler::setWikiLinkURLBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_wikiLinkURLBlock) = param_3;
  return;
}

// ===== MDWikiLinkTextStyler::.cxx_destruct @ 00039058 =====

void MDWikiLinkTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_wikiLinkURLBlock) = 0;
  *(undefined8 *)(param_1 + (long)_linkColor) = 0;
  return;
}

