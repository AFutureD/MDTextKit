// ===== PMKASTLinkAndImageNode::url @ 00047ad0 =====

ID PMKASTLinkAndImageNode::url(ID param_1,SEL param_2)

{
  
  node(param_1);
  __ZN3Ice6Inline12LinkBaseNode11destinationEv(local_38);
  IVar1 = stringWithIceString_(NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}

// ===== PMKASTLinkAndImageNode::title @ 00047b48 =====

ID PMKASTLinkAndImageNode::title(ID param_1,SEL param_2)

{
  
  node(param_1);
  __ZN3Ice6Inline12LinkBaseNode5titleEv(local_38);
  IVar1 = stringWithIceString_(NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}

// ===== PMKASTLinkAndImageNode::label @ 00047bc0 =====

ID PMKASTLinkAndImageNode::label(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  if (*(char *)(IVar1 + 0x97) < '\0') {
    __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
              (&local_40,*(undefined8 *)(IVar1 + 0x80),*(undefined8 *)(IVar1 + 0x88));
  }
  else {
    uStack_38 = *(undefined8 *)(IVar1 + 0x88);
    local_40 = *(undefined8 *)(IVar1 + 0x80);
    local_30 = *(long *)(IVar1 + 0x90);
  }
  IVar1 = stringWithIceString_(NSString,&local_40);
  if (local_30 < 0) {
    __ZdlPv(local_40);
  }
  return IVar1;
}

