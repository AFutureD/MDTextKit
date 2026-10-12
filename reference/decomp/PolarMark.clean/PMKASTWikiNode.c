// ===== PMKASTWikiNode::title @ 00047da0 =====

ID PMKASTWikiNode::title(ID param_1,SEL param_2)

{
  
  node(param_1);
  __ZN3Ice6Inline12WikilinkNode15encodedSegmentsEv(local_38);
  IVar1 = stringWithIceString_(NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}

// ===== PMKASTWikiNode::alias @ 00047e18 =====

ID PMKASTWikiNode::alias(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  if (*(char *)(IVar1 + 0xe7) < '\0') {
    __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEE25__init_copy_ctor_externalEPKDsm
              (&local_40,*(undefined8 *)(IVar1 + 0xd0),*(undefined8 *)(IVar1 + 0xd8));
  }
  else {
    uStack_38 = *(undefined8 *)(IVar1 + 0xd8);
    local_40 = *(undefined8 *)(IVar1 + 0xd0);
    local_30 = *(long *)(IVar1 + 0xe0);
  }
  IVar1 = stringWithIceString_(NSString,&local_40);
  if (local_30 < 0) {
    __ZdlPv(local_40);
  }
  return IVar1;
}

