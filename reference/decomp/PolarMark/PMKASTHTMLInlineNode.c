// ===== PMKASTHTMLInlineNode::metadata @ 000477d0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKASTHTMLInlineNode::metadata(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  IVar1 = objc_stub::node(param_1);
  if (*(char *)(IVar1 + 0x97) < '\0') {
    __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
              (&local_50,*(undefined8 *)(IVar1 + 0x80),*(undefined8 *)(IVar1 + 0x88));
  }
  else {
    uStack_48 = *(undefined8 *)(IVar1 + 0x88);
    local_50 = *(undefined8 *)(IVar1 + 0x80);
    local_40 = *(long *)(IVar1 + 0x90);
  }
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,&local_50);
  IVar2 = objc_stub::hasPrefix_(IVar1,&cf_<___);
  if ((int)IVar2 == 0) {
    IVar1 = 0;
  }
  else {
    IVar2 = objc_stub::length(IVar1);
    IVar1 = objc_stub::substringWithRange_(IVar1,4,IVar2 - 7);
    IVar1 = objc_stub::dataUsingEncoding_(IVar1,10);
    IVar1 = objc_stub::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar1,0,0);
    if (IVar1 != 0) {
      uVar3 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);
      uVar4 = _objc_opt_isKindOfClass(IVar1,uVar3);
      if ((uVar4 & 1) != 0) goto LAB_000478e0;
    }
    IVar1 = 0;
  }
LAB_000478e0:
  if (local_40 < 0) {
    __ZdlPv(local_50);
  }
  return IVar1;
}


