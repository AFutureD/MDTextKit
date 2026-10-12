// ===== PMKASTEntityNode::toString @ 00047d28 =====

ID PMKASTEntityNode::toString(ID param_1,SEL param_2)

{
  
  node(param_1);
  __ZN3Ice6Inline10EntityNode8toStringEv(local_38);
  IVar1 = stringWithIceString_(NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}

