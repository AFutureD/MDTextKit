// ===== MDDragTextOperation::resultForAttributedString:dragRange:destinationRange:selectionRange:dropAsNewLine: @ 000157e8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x4c bytes */

ID MDDragTextOperation::
   resultForAttributedString_dragRange_destinationRange_selectionRange_dropAsNewLine_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,_NSRange param_5,_NSRange param_6,
             bool param_7)

{
  long lVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 extraout_x1;
  unsigned_long_long uVar6;
  unsigned_long_long uVar7;
  unsigned_long_long uVar8;
  unsigned_long_long uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  char in_stack_00000010;
  unsigned_long_long local_88;
  
  uVar9 = param_5.field1_0x8;
  uVar8 = param_5.field0_0x0;
  uVar7 = param_4.field1_0x8;
  uVar6 = param_4.field0_0x0;
  auVar13 = _NSUnionRange(uVar6,uVar7,uVar8,uVar9);
  lVar1 = auVar13._0_8_;
  uVar11 = uVar6 - lVar1;
  uVar10 = uVar8 - lVar1;
  IVar2 = objc_stub::attributedSubstringFromRange_(param_3,lVar1,auVar13._8_8_);
  self = objc_stub::mutableCopy(IVar2);
  IVar3 = objc_stub::attributedSubstringFromRange_(self,uVar11,uVar7);
  IVar2 = IVar3;
  local_88 = uVar8;
  if (in_stack_00000010 != '\0') {
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
    IVar4 = objc_stub::initWithString_(IVar2,&cf_newline_s_);
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
    IVar2 = objc_stub::initWithAttributedString_(IVar2,IVar3);
    IVar5 = objc_stub::string(IVar3);
    IVar5 = objc_stub::hasPrefix_(IVar5,&cf_newline_s_);
    if (((IVar5 & 1) == 0) && (uVar8 != 0)) {
      IVar5 = objc_stub::string(param_3);
      IVar5 = objc_stub::characterAtIndex_(IVar5,uVar8 - 1);
      if ((int)IVar5 != 10) {
        objc_stub::insertAttributedString_atIndex_(IVar2,IVar4,0);
        local_88 = uVar8 + 1;
      }
    }
    IVar3 = objc_stub::string(IVar3);
    IVar3 = objc_stub::hasSuffix_(IVar3,&cf_newline_s_);
    if ((IVar3 & 1) == 0) {
      IVar3 = objc_stub::length(param_3);
      if (uVar8 + uVar9 < IVar3) {
        IVar3 = objc_stub::string(param_3);
        IVar3 = objc_stub::characterAtIndex_(IVar3,uVar8 + uVar9);
        if ((int)IVar3 != 10) {
          objc_stub::appendAttributedString_(IVar2,IVar4);
        }
      }
    }
    IVar3 = objc_stub::listItemInfoAtIndex_(param_3,uVar6);
    IVar4 = objc_stub::listItemInfoAtIndex_(param_3,uVar8);
    if (IVar3 != 0) {
      IVar3 = objc_stub::listLevel(IVar3);
      IVar5 = objc_stub::listLevel(IVar4);
      if (IVar5 + 1 < IVar3) {
        IVar3 = objc_stub::rangeOfIndentForListItemAtIndex_(IVar2,0);
        objc_stub::replaceCharactersInRange_withString_(IVar2,IVar3,extraout_x1,&cf___);
        IVar3 = objc_stub::listLevel(IVar4);
        if (IVar3 != 0xffffffffffffffff) {
          uVar12 = 0;
          do {
            IVar3 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);
            IVar3 = objc_stub::initWithString_(IVar3,&cf_space_s_);
            objc_stub::replaceCharactersInRange_withAttributedString_(IVar2,0,0,IVar3);
            uVar12 = uVar12 + 1;
            IVar3 = objc_stub::listLevel(IVar4);
          } while (uVar12 < IVar3 + 1);
        }
      }
    }
  }
  if (uVar11 < uVar10) {
    objc_stub::replaceCharactersInRange_withAttributedString_(self,uVar10,uVar9,IVar2);
    objc_stub::replaceCharactersInRange_withString_(self,uVar11,uVar7,&cf___);
    local_88 = local_88 - uVar7;
  }
  else {
    objc_stub::replaceCharactersInRange_withString_(self,uVar11,uVar7,&cf___);
    objc_stub::replaceCharactersInRange_withAttributedString_(self,uVar10,uVar9,IVar2);
  }
  IVar2 = _objc_opt_new(&objc::class_t::MDTextOperationResult);
  objc_stub::setReplacementAttributedString_(IVar2,self);
  objc_stub::setReplacementRange_(IVar2,lVar1,auVar13._8_8_);
  objc_stub::setProposedSelectionRange_(IVar2,local_88,uVar7);
  return IVar2;
}


