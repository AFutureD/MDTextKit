// ===== PMKASTListNode::isOrdered @ 000476b8 =====

bool PMKASTListNode::isOrdered(ID param_1,SEL param_2)

{
  
  node(param_1);
  bVar1 = __ZN3Ice5Block8ListNode9isOrderedEv();
  return bVar1;
}

// ===== PMKASTListNode::nestingLevel @ 000476cc =====

long_long PMKASTListNode::nestingLevel(ID param_1,SEL param_2)

{
  long_long lVar2;
  
  IVar1 = node(param_1);
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

