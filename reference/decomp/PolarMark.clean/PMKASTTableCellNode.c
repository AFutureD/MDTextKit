// ===== PMKASTTableCellNode::alignment @ 00047cf0 =====

long_long PMKASTTableCellNode::alignment(ID param_1,SEL param_2)

{
  long_long lVar3;
  
  IVar2 = node(param_1);
  uVar1 = *(int *)(IVar2 + 0x80) - 1;
  if (uVar1 < 3) {
    lVar3 = *(long_long *)(&DAT_000b6218 + (ulong)uVar1 * 8);
  }
  else {
    lVar3 = 4;
  }
  return lVar3;
}

