// ===== PMKASTHTMLInlineNode::metadata @ 000477d0 =====

ID PMKASTHTMLInlineNode::metadata(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  if (*(char *)(IVar1 + 0x97) < '\0') {
    __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
              (&local_50,*(undefined8 *)(IVar1 + 0x80),*(undefined8 *)(IVar1 + 0x88));
  }
  else {
    uStack_48 = *(undefined8 *)(IVar1 + 0x88);
    local_50 = *(undefined8 *)(IVar1 + 0x80);
    local_40 = *(long *)(IVar1 + 0x90);
  }
  IVar1 = stringWithIceString_(NSString,&local_50);
  IVar2 = hasPrefix_(IVar1,&cf_<___);
  if ((int)IVar2 == 0) {
    IVar1 = 0;
  }
  else {
    IVar2 = length(IVar1);
    IVar1 = substringWithRange_(IVar1,4,IVar2 - 7);
    IVar1 = dataUsingEncoding_(IVar1,10);
    IVar1 = JSONObjectWithData_options_error_
                      (NSJSONSerialization,IVar1,0,0);
    if (IVar1 != 0) {
      uVar3 = _objc_opt_class(NSDictionary);
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

