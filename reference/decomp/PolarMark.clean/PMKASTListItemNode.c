// ===== PMKASTListItemNode::isTask @ 00047714 =====

bool PMKASTListItemNode::isTask(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  return (bool)(*(int *)(IVar1 + 0x84) != 2);
}

// ===== PMKASTListItemNode::isTaskCompleted @ 00047734 =====

bool PMKASTListItemNode::isTaskCompleted(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  return (bool)(*(int *)(IVar1 + 0x84) == 1);
}

// ===== PMKASTListItemNode::itemIndex @ 00047754 =====

long_long PMKASTListItemNode::itemIndex(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  return *(long *)(IVar1 + 0x90) - 1;
}

// ===== PMKASTListItemNode::orderedListItemNumber @ 00047770 =====

long_long PMKASTListItemNode::orderedListItemNumber(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  return *(long_long *)(IVar1 + 0x88);
}

// ===== PMKASTListItemNode::nestingLevel @ 00047788 =====

long_long PMKASTListItemNode::nestingLevel(ID param_1,SEL param_2)

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

