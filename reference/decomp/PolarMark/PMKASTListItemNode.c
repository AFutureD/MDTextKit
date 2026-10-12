// ===== PMKASTListItemNode::isTask @ 00047714 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKASTListItemNode::isTask(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::node(param_1);
  return (bool)(*(int *)(IVar1 + 0x84) != 2);
}


// ===== PMKASTListItemNode::isTaskCompleted @ 00047734 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool PMKASTListItemNode::isTaskCompleted(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::node(param_1);
  return (bool)(*(int *)(IVar1 + 0x84) == 1);
}


// ===== PMKASTListItemNode::itemIndex @ 00047754 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

long_long PMKASTListItemNode::itemIndex(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::node(param_1);
  return *(long *)(IVar1 + 0x90) - 1;
}


// ===== PMKASTListItemNode::orderedListItemNumber @ 00047770 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

long_long PMKASTListItemNode::orderedListItemNumber(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::node(param_1);
  return *(long_long *)(IVar1 + 0x88);
}


// ===== PMKASTListItemNode::nestingLevel @ 00047788 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

long_long PMKASTListItemNode::nestingLevel(ID param_1,SEL param_2)

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


