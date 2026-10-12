// ===== MDDragTextOperation::resultForAttributedString:dragRange:destinationRange:selectionRange:dropAsNewLine: @ 000157e8 =====

ID MDDragTextOperation::
   resultForAttributedString_dragRange_destinationRange_selectionRange_dropAsNewLine_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5,_NSRange param_6,
             bool param_7)

{
  
  uVar9 = param_5.field1_0x8;
  uVar8 = param_5.field0_0x0;
  uVar7 = param_4.field1_0x8;
  uVar6 = param_4.field0_0x0;
  auVar13 = _NSUnionRange(uVar6,uVar7,uVar8,uVar9);
  lVar1 = auVar13._0_8_;
  uVar11 = uVar6 - lVar1;
  uVar10 = uVar8 - lVar1;
  IVar2 = attributedSubstringFromRange_(param_3,lVar1,auVar13._8_8_);
  self = mutableCopy(IVar2);
  IVar3 = attributedSubstringFromRange_(self,uVar11,uVar7);
  IVar2 = IVar3;
  local_88 = uVar8;
  if (in_stack_00000010 != '\0') {
    IVar2 = _objc_alloc(NSAttributedString);
    IVar4 = initWithString_(IVar2,&cf_newline_s_);
    IVar2 = _objc_alloc(NSMutableAttributedString);
    IVar2 = initWithAttributedString_(IVar2,IVar3);
    IVar5 = string(IVar3);
    IVar5 = hasPrefix_(IVar5,&cf_newline_s_);
    if (((IVar5 & 1) == 0) && (uVar8 != 0)) {
      IVar5 = string(param_3);
      IVar5 = characterAtIndex_(IVar5,uVar8 - 1);
      if ((int)IVar5 != 10) {
        insertAttributedString_atIndex_(IVar2,IVar4,0);
        local_88 = uVar8 + 1;
      }
    }
    IVar3 = string(IVar3);
    IVar3 = hasSuffix_(IVar3,&cf_newline_s_);
    if ((IVar3 & 1) == 0) {
      IVar3 = length(param_3);
      if (uVar8 + uVar9 < IVar3) {
        IVar3 = string(param_3);
        IVar3 = characterAtIndex_(IVar3,uVar8 + uVar9);
        if ((int)IVar3 != 10) {
          appendAttributedString_(IVar2,IVar4);
        }
      }
    }
    IVar3 = listItemInfoAtIndex_(param_3,uVar6);
    IVar4 = listItemInfoAtIndex_(param_3,uVar8);
    if (IVar3 != 0) {
      IVar3 = listLevel(IVar3);
      IVar5 = listLevel(IVar4);
      if (IVar5 + 1 < IVar3) {
        IVar3 = rangeOfIndentForListItemAtIndex_(IVar2,0);
        replaceCharactersInRange_withString_(IVar2,IVar3,extraout_x1,&cf___);
        IVar3 = listLevel(IVar4);
        if (IVar3 != 0xffffffffffffffff) {
          uVar12 = 0;
          do {
            IVar3 = _objc_alloc(NSAttributedString);
            IVar3 = initWithString_(IVar3,&cf_space_s_);
            replaceCharactersInRange_withAttributedString_(IVar2,0,0,IVar3);
            uVar12 = uVar12 + 1;
            IVar3 = listLevel(IVar4);
          } while (uVar12 < IVar3 + 1);
        }
      }
    }
  }
  if (uVar11 < uVar10) {
    replaceCharactersInRange_withAttributedString_(self,uVar10,uVar9,IVar2);
    replaceCharactersInRange_withString_(self,uVar11,uVar7,&cf___);
    local_88 = local_88 - uVar7;
  }
  else {
    replaceCharactersInRange_withString_(self,uVar11,uVar7,&cf___);
    replaceCharactersInRange_withAttributedString_(self,uVar10,uVar9,IVar2);
  }
  IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
  setReplacementAttributedString_(IVar2,self);
  setReplacementRange_(IVar2,lVar1,auVar13._8_8_);
  setProposedSelectionRange_(IVar2,local_88,uVar7);
  return IVar2;
}

