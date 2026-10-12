// ===== PMKASTListNode::isOrdered @ 000476b8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKASTListNode::isOrdered(ID param_1,SEL param_2)

{
  bool bVar1;
  
  objc_stub::node(param_1);
  bVar1 = __ZN3Ice5Block8ListNode9isOrderedEv();
  return bVar1;
}


// ===== PMKASTListNode::nestingLevel @ 000476cc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

long_long PMKASTListNode::nestingLevel(ID param_1,SEL param_2)

{
  ID IVar1;
  long_long lVar2;
  long lVar3;
  
  IVar1 = objc_stub::node(param_1);
  lVar3 = *(long *)(*(long *)(IVar1 + 0x40) + 0x40);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if (*(short *)(lVar3 + 8) != 0x22) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      lVar3 = *(long *)(*(long *)(lVar3 + 0x40) + 0x40);
    } while (lVar3 != 0);
  }
  return lVar2;
}


