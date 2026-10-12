// ===== PMKASTTableCellNode::alignment @ 00047cf0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

long_long PMKASTTableCellNode::alignment(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  long_long lVar3;
  
  IVar2 = objc_stub::node(param_1);
  uVar1 = *(int *)(IVar2 + 0x80) - 1;
  if (uVar1 < 3) {
    lVar3 = *(long_long *)(&DAT_000b6218 + (ulong)uVar1 * 8);
  }
  else {
    lVar3 = 4;
  }
  return lVar3;
}


