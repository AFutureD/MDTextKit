// ===== PMKTextSummaryWikiLink::wikiLinkWithTitle:offset: @ 0000a0c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

ID PMKTextSummaryWikiLink::wikiLinkWithTitle_offset_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID self;
  
  self = _objc_opt_new(&objc::class_t::PMKTextSummaryWikiLink);
  objc_stub::setTitle_(self,param_3);
  objc_stub::setOffset_(self,param_4);
  return self;
}


// ===== PMKTextSummaryWikiLink::decodedTitle @ 0000a148 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKTextSummaryWikiLink::decodedTitle(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::title(param_1);
  IVar1 = objc_stub::decodeTitleForWikiLink_((ID)&objc::class_t::PMKWikiLink,IVar1);
  return IVar1;
}


// ===== PMKTextSummaryWikiLink::description @ 0000a1b0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKTextSummaryWikiLink::description(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::PMKTextSummaryWikiLink;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  objc_stub::title(param_1);
  objc_stub::offset(param_1);
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___title___offset__lu);
  return IVar1;
}


// ===== PMKTextSummaryWikiLink::title @ 0000a284 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKTextSummaryWikiLink::title(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


// ===== PMKTextSummaryWikiLink::setTitle: @ 0000a290 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTextSummaryWikiLink::setTitle_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


// ===== PMKTextSummaryWikiLink::offset @ 0000a298 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKTextSummaryWikiLink::offset(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}


// ===== PMKTextSummaryWikiLink::setOffset: @ 0000a2a0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void PMKTextSummaryWikiLink::setOffset_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x10) = param_3;
  return;
}


// ===== PMKTextSummaryWikiLink::.cxx_destruct @ 0000a2a8 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void PMKTextSummaryWikiLink::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


