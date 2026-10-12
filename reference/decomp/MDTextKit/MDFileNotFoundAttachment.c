// ===== MDFileNotFoundAttachment::decodeWithCoder: @ 0003a220 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileNotFoundAttachment::decodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFileNotFoundAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"decodeWithCoder:",param_3);
  IVar1 = objc_stub::decodeObjectForKey_(param_3,&cf_notFoundFilePath);
  IVar1 = objc_stub::stringValue(IVar1);
  objc_stub::setFilePath_(param_1,IVar1);
  return;
}


// ===== MDFileNotFoundAttachment::encodeWithCoder: @ 0003a2d0 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileNotFoundAttachment::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDFileNotFoundAttachment;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"encodeWithCoder:",param_3);
  IVar1 = objc_stub::filePath(param_1);
  objc_stub::encodeObject_forKey_(param_3,IVar1,&cf_notFoundFilePath);
  return;
}


// ===== MDFileNotFoundAttachment::copyWithZone: @ 0003a364 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

ID MDFileNotFoundAttachment::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDFileNotFoundAttachment;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"copyWithZone:");
  IVar1 = objc_stub::filePath(param_1);
  objc_stub::setFilePath_(self,IVar1);
  return self;
}


// ===== MDFileNotFoundAttachment::filePath @ 0003a3d4 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDFileNotFoundAttachment::filePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_filePath);
}


// ===== MDFileNotFoundAttachment::setFilePath: @ 0003a3e4 =====

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDFileNotFoundAttachment::setFilePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_filePath) = param_3;
  return;
}


// ===== MDFileNotFoundAttachment::.cxx_destruct @ 0003a3f0 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDFileNotFoundAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_filePath) = 0;
  return;
}


