// ===== PMKASTNode::nodeForASTNode: @ 00047170 =====

ID PMKASTNode::nodeForASTNode_(ID param_1,SEL param_2,Node *param_3)

{
  
  if (param_3 == (Node *)0x0) {
    return 0;
  }
  uVar1 = param_3->field1_0x8;
  if (uVar1 < 0x26) {
    if (uVar1 < 0xf) {
      if (uVar1 == 4) {
        ppuVar2 = &PTR_PMKASTATXHeadingNode_000ee6f8;
        goto LAB_000472b4;
      }
      if (uVar1 == 8) {
        ppuVar2 = &PTR_PMKASTBlockQuoteNode_000ee6d0;
        goto LAB_000472b4;
      }
      if (uVar1 == 10) {
        ppuVar2 = &PTR_PMKASTFencedCodeBlockNode_000ee6f0;
        goto LAB_000472b4;
      }
    }
    else {
      if (uVar1 == 0xf) {
        ppuVar2 = &PTR_PMKASTFootnoteDefinitionNode_000ee710;
        goto LAB_000472b4;
      }
      if (uVar1 == 0x22) {
        ppuVar2 = &PTR_PMKASTListNode_000ee6d8;
        goto LAB_000472b4;
      }
      if (uVar1 == 0x23) {
        ppuVar2 = &PTR_PMKASTListItemNode_000ee6e0;
        goto LAB_000472b4;
      }
    }
  }
  else if (uVar1 < 0x55) {
    if (uVar1 == 0x26) {
      ppuVar2 = &PTR_PMKASTSetextHeadingNode_000ee700;
      goto LAB_000472b4;
    }
    if (uVar1 == 0x2e) {
      ppuVar2 = &PTR_PMKASTTableCellNode_000ee718;
      goto LAB_000472b4;
    }
    if (uVar1 == 0x44) {
      ppuVar2 = &PTR_PMKASTEntityNode_000ee720;
      goto LAB_000472b4;
    }
  }
  else if (uVar1 < 0x73) {
    if ((uVar1 == 0x55) || (uVar1 == 100)) {
      ppuVar2 = &PTR_PMKASTLinkAndImageNode_000ee708;
      goto LAB_000472b4;
    }
  }
  else {
    if (uVar1 == 0x73) {
      ppuVar2 = &PTR_PMKASTHTMLInlineNode_000ee6e8;
      goto LAB_000472b4;
    }
    if (uVar1 == 0x7f) {
      ppuVar2 = &PTR_PMKASTWikiNode_000ee728;
      goto LAB_000472b4;
    }
  }
  ppuVar2 = &PTR_PMKASTNode_000ee730;
LAB_000472b4:
  self = _objc_opt_new(*ppuVar2);
  setNode_(self,param_3);
  return self;
}

// ===== PMKASTNode::type @ 000472f8 =====

int PMKASTNode::type(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  return (int)*(ushort *)(IVar1 + 8);
}

// ===== PMKASTNode::typeAsString @ 00047310 =====

ID PMKASTNode::typeAsString(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  __ZNSt3__112basic_stringIDsNS_11char_traitsIDsEENS_9allocatorIDsEEEC2B9nqe220106ILi0EEEPKDs
            (local_38,*(undefined8 *)(IVar1 + 0x10));
  IVar1 = stringWithIceString_(NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}

// ===== PMKASTNode::range @ 0004738c =====

_NSRange PMKASTNode::range(ID param_1,SEL param_2)

{
  
  node(param_1);
  _Var2.field0_0x0 = __ZN3Ice4Node11startOffsetEv();
  IVar1 = node(param_1);
  _Var2.field1_0x8 = *(unsigned_long_long *)(IVar1 + 0x28);
  return _Var2;
}

// ===== PMKASTNode::parent @ 000473c4 =====

ID PMKASTNode::parent(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  IVar1 = nodeForASTNode_((ID)&objc::class_t::PMKASTNode,*(undefined8 *)(IVar1 + 0x40));
  return IVar1;
}

// ===== PMKASTNode::firstChild @ 000473f0 =====

ID PMKASTNode::firstChild(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  IVar1 = nodeForASTNode_((ID)&objc::class_t::PMKASTNode,*(undefined8 *)(IVar1 + 0x48));
  return IVar1;
}

// ===== PMKASTNode::lastChild @ 0004741c =====

ID PMKASTNode::lastChild(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  IVar1 = nodeForASTNode_((ID)&objc::class_t::PMKASTNode,*(undefined8 *)(IVar1 + 0x50));
  return IVar1;
}

// ===== PMKASTNode::previousSibling @ 00047448 =====

ID PMKASTNode::previousSibling(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  IVar1 = nodeForASTNode_((ID)&objc::class_t::PMKASTNode,*(undefined8 *)(IVar1 + 0x58));
  return IVar1;
}

// ===== PMKASTNode::nextSibling @ 00047474 =====

ID PMKASTNode::nextSibling(ID param_1,SEL param_2)

{
  
  IVar1 = node(param_1);
  IVar1 = nodeForASTNode_((ID)&objc::class_t::PMKASTNode,*(undefined8 *)(IVar1 + 0x60));
  return IVar1;
}

// ===== PMKASTNode::nextInSequence @ 000474a0 =====

ID PMKASTNode::nextInSequence(ID param_1,SEL param_2)

{
  
  node(param_1);
  uVar1 = __ZN3Ice4Node14nextInSequenceEv();
  IVar2 = nodeForASTNode_((ID)&objc::class_t::PMKASTNode,uVar1);
  return IVar2;
}

// ===== PMKASTNode::previousInSequence @ 000474d0 =====

ID PMKASTNode::previousInSequence(ID param_1,SEL param_2)

{
  
  node(param_1);
  uVar1 = __ZN3Ice4Node18previousInSequenceEv();
  IVar2 = nodeForASTNode_((ID)&objc::class_t::PMKASTNode,uVar1);
  return IVar2;
}

// ===== PMKASTNode::direction @ 00047500 =====

unsigned_long_long PMKASTNode::direction(ID param_1,SEL param_2)

{
  
  IVar3 = node(param_1);
  puVar1 = &_PMKDirectionLtrValue;
  if (*(int *)(IVar3 + 0x78) != 1) {
    puVar1 = &_PMKDirectionNaturalValue;
  }
  puVar2 = &_PMKDirectionRtlValue;
  if (*(int *)(IVar3 + 0x78) != 2) {
    puVar2 = puVar1;
  }
  return *puVar2;
}

// ===== PMKASTNode::description @ 00047544 =====

ID PMKASTNode::description(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::PMKASTNode;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"description");
  typeAsString(param_1);
  range(param_1);
  _NSStringFromRange();
  IVar1 = stringWithFormat_(NSString,&cf_______);
  return IVar1;
}

// ===== PMKASTNode::node @ 00047640 =====

Node * PMKASTNode::node(ID param_1,SEL param_2)

{
  return *(Node **)(param_1 + 8);
}

// ===== PMKASTNode::setNode: @ 00047648 =====

void PMKASTNode::setNode_(ID param_1,SEL param_2,Node *param_3)

{
  *(Node **)(param_1 + 8) = param_3;
  return;
}

