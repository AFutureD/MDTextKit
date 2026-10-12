// ===== PMKASTBlockQuoteNode::isCallout @ 00047650 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKASTBlockQuoteNode::isCallout(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::node(param_1);
  if ((*(long *)(IVar2 + 0x48) == 0) || (*(short *)(*(long *)(IVar2 + 0x48) + 8) != 0x88)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}


// ===== PMKASTBlockQuoteNode::calloutType @ 00047684 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long PMKASTBlockQuoteNode::calloutType(ID param_1,SEL param_2)

{
  ID IVar1;
  unsigned_long_long uVar2;
  long lVar3;
  
  IVar1 = objc_stub::node(param_1);
  lVar3 = *(long *)(IVar1 + 0x48);
  if ((lVar3 == 0) || (*(short *)(lVar3 + 8) != 0x88)) {
    uVar2 = 0x7fffffffffffffff;
  }
  else {
    uVar2 = (unsigned_long_long)*(uint *)(lVar3 + 0x80);
  }
  return uVar2;
}


