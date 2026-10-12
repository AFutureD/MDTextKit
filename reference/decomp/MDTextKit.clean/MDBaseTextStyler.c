// ===== MDBaseTextStyler::addBoundarySpacerAttachment:inAttributedString:range:replacementBlock: @ 0001fe94 =====

void MDBaseTextStyler::addBoundarySpacerAttachment_inAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5,ID param_6,
               undefined4 param_7)

{
  
  uVar4 = param_5.field0_0x0;
  IVar2 = attributesAtIndex_effectiveRange_(param_4,uVar4,0);
  IVar2 = dictionaryWithDictionary_(NSMutableDictionary,IVar2);
  lVar1 = uVar4 + param_5.field1_0x8;
  IVar3 = attributesAtIndex_effectiveRange_(param_4,lVar1 + -1,0);
  IVar3 = dictionaryWithDictionary_(NSMutableDictionary,IVar3);
  setObject_forKey_
            (IVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber,&cf_MDSpacer);
  setObject_forKey_
            (IVar3,&PTR__OBJC_CLASS___NSConstantIntegerNumber,&cf_MDSpacer);
  IVar2 = attachmentAttributedStringWithAttributes_(param_3,IVar2);
  IVar3 = attachmentAttributedStringWithAttributes_(param_3,IVar3);
  insertAttributedString_atIndex_(param_4,IVar3,lVar1);
  (**(code **)(param_6 + 0x10))(param_6,lVar1,0,IVar3);
  addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber,lVar1 + -1,2);
  insertAttributedString_atIndex_(param_4,IVar2,uVar4);
  (**(code **)(param_6 + 0x10))(param_6,uVar4,0,IVar2);
  addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber,uVar4,2);
  return;
}

// ===== MDBaseTextStyler::addLeftBoundarySpacerAttachment:inAttributedString:atIndex:replacementBlock: @ 000200b8 =====

void MDBaseTextStyler::addLeftBoundarySpacerAttachment_inAttributedString_atIndex_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               uint param_7)

{
  
  IVar1 = attributesAtIndex_effectiveRange_
                    (param_4,param_5,0,param_5,param_6,(ulong)param_7);
  IVar1 = dictionaryWithDictionary_(NSMutableDictionary,IVar1);
  setObject_forKey_
            (IVar1,&PTR__OBJC_CLASS___NSConstantIntegerNumber,&cf_MDSpacer);
  IVar1 = attachmentAttributedStringWithAttributes_(param_3,IVar1);
  insertAttributedString_atIndex_(param_4,IVar1,param_5);
  (**(code **)(param_6 + 0x10))(param_6,param_5,0,IVar1);
  addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber,param_5,2);
  return;
}

// ===== MDBaseTextStyler::addRightBoundarySpacerAttachment:inAttributedString:atIndex:replacementBlock: @ 000201fc =====

void MDBaseTextStyler::addRightBoundarySpacerAttachment_inAttributedString_atIndex_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               uint param_7)

{
  
  IVar1 = attributesAtIndex_effectiveRange_
                    (param_4,param_5 - 1,0,param_5,param_6,(ulong)param_7);
  IVar1 = dictionaryWithDictionary_(NSMutableDictionary,IVar1);
  setObject_forKey_
            (IVar1,&PTR__OBJC_CLASS___NSConstantIntegerNumber,&cf_MDSpacer);
  IVar1 = attachmentAttributedStringWithAttributes_(param_3,IVar1);
  insertAttributedString_atIndex_(param_4,IVar1,param_5);
  (**(code **)(param_6 + 0x10))(param_6,param_5,0,IVar1);
  addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber,param_5 - 1,2)
  return;
}

// ===== MDBaseTextStyler::isAttributedString:RTLAtIndex: @ 000273a0 =====

bool MDBaseTextStyler::isAttributedString_RTLAtIndex_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  
  IVar1 = writingDirectionAtIndex_(param_3,param_4);
  return (bool)(IVar1 == 1);
}

// ===== MDBaseTextStyler::forceWritingDirectionToMatchParagraphInRange:inAttributedString: @ 000273c4 =====

void MDBaseTextStyler::forceWritingDirectionToMatchParagraphInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  IVar1 = writingDirectionAtIndex_(param_4,param_3.field0_0x0);
  uVar2 = _NSWritingDirectionAttributeName;
  local_50 = numberWithInteger_(NSNumber,IVar1);
  IVar1 = arrayWithObjects_count_(NSArray,&local_50,1);
  addAttribute_value_range_(param_4,uVar2,IVar1,param_3.field0_0x0,param_3.field1_0x8);
    return;
  }
}

// ===== MDBaseTextStyler::forceWritingDirectionToLTRInRange:inAttributedString: @ 000274b8 =====

void MDBaseTextStyler::forceWritingDirectionToLTRInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  addAttribute_value_range_
            (param_4,_NSWritingDirectionAttributeName,
             &PTR__OBJC_CLASS___NSConstantArray,param_3.field0_0x0,param_3.field1_0x8);
  return;
}

// ===== MDBaseTextStyler::indentParagraphsForListItemRange:indentWidth:inAttributedString:replacementBlock: @ 000280b4 =====

void MDBaseTextStyler::
     indentParagraphsForListItemRange_indentWidth_inAttributedString_replacementBlock_
               (ID param_1,SEL param_2,_NSRange param_3,double param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  
  IVar1 = string(param_5);
  IVar1 = paragraphRangeForRange_(IVar1,param_3.field0_0x0,param_3.field1_0x8);
  local_88 = 1;
  self = string(param_5);
  local_d8 = 
  ___112__MDBaseTextStyler_ListUtils__indentParagraphsForListItemRange_indentWidth_inAttributedString_replacementBlock___block_invoke
  local_c8 = param_5;
  IStack_c0 = param_1;
  local_a8 = param_4;
  enumerateSubstringsInRange_options_usingBlock_(self,IVar1,extraout_x1,0x201,&local_e8);
  __Block_object_dispose(&local_a0,8);
  __Block_object_dispose(&local_80,8);
  return;
}

// ===== MDBaseTextStyler::attachmentForRange:inAttributedString: @ 00028310 =====

ID MDBaseTextStyler::attachmentForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  
  baseTabSize(param_1);
  defaultParagraphIndent(param_1);
  baseFontSize(param_1);
  IVar1 = attachmentForRange_inAttributedString_tabSize_paragraphIndent_fontSize_
                    ((ID)&objc::class_t::MDIndentSpaceTextStyler,extraout_d0,extraout_d0_00,
                     extraout_d0_01,param_3.field0_0x0,param_3.field1_0x8,param_4);
  return IVar1;
}

// ===== MDBaseTextStyler::indentParagraphsForBlockquoteItemRange:indentWidth:inAttributedString:replacementBlock: @ 000283bc =====

void MDBaseTextStyler::
     indentParagraphsForBlockquoteItemRange_indentWidth_inAttributedString_replacementBlock_
               (ID param_1,SEL param_2,_NSRange param_3,double param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  
  self = string(param_5);
  local_78 = 
  ___118__MDBaseTextStyler_ListUtils__indentParagraphsForBlockquoteItemRange_indentWidth_inAttributedString_replacementBlock___block_invoke
  local_68 = param_5;
  IStack_60 = param_1;
  local_58 = param_4;
  enumerateSubstringsInRange_options_usingBlock_
            (self,param_3.field0_0x0,param_3.field1_0x8,0x201,&local_88);
  return;
}

// ===== MDBaseTextStyler::matchIndentOnNewlineForListItemRange:indentWidth:inAttributedString: @ 00028564 =====

void MDBaseTextStyler::matchIndentOnNewlineForListItemRange_indentWidth_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,double param_4,ID param_5)

{
  
  uVar1 = param_3.field0_0x0 + param_3.field1_0x8;
  lVar5 = uVar1 - 1;
  IVar2 = newlineCharacterSet(NSCharacterSet);
  IVar3 = string(param_5);
  IVar3 = characterAtIndex_(IVar3,lVar5);
  IVar2 = characterIsMember_(IVar2,IVar3);
  IVar3 = length(param_5);
  if (uVar1 < IVar3) {
    IVar3 = newlineCharacterSet(NSCharacterSet);
    IVar4 = string(param_5);
    IVar4 = characterAtIndex_(IVar4,uVar1);
    IVar3 = characterIsMember_(IVar3,IVar4);
    if (((uint)IVar2 & (uint)IVar3) == 1) {
      IVar2 = isListOrBlockquoteParagraphEmptyAtIndex_(param_5,lVar5);
      IVar3 = paragraphStyleAtIndex_(param_5,lVar5);
      IVar3 = mutableCopy(IVar3);
      IVar4 = listOrBlockquoteItemInfoAtIndex_itemRange_markerRange_(param_5,lVar5,0,0);
      firstLineHeadIndent(IVar3);
      if (extraout_d0 <= param_4) {
        IVar4 = listLevel(IVar4);
        dVar6 = param_4 + (double)IVar4 * param_4;
        dVar7 = dVar6 - param_4;
        if ((int)IVar2 == 0) {
          dVar7 = dVar6;
        }
        headIndent(IVar3);
        setHeadIndent_(IVar3,extraout_d0_00 + dVar7);
        firstLineHeadIndent(IVar3);
        setFirstLineHeadIndent_(IVar3,extraout_d0_01 + dVar7);
      }
      addAttribute_value_range_
                (param_5,_NSParagraphStyleAttributeName,IVar3,uVar1,1);
    }
  }
  return;
}

// ===== MDBaseTextStyler::init @ 00039098 =====

ID MDBaseTextStyler::init(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::MDBaseTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(NSCache);
    setCache_(self,uVar1);
    IVar2 = blackColor(NSColor);
    setMarkerColor_(self,IVar2);
    IVar2 = blackColor(NSColor);
    setBaseTextColor_(self,IVar2);
  }
  return self;
}

// ===== MDBaseTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00039160 =====

void MDBaseTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  return;
}

// ===== MDBaseTextStyler::canStyleAsync @ 00039164 =====

bool MDBaseTextStyler::canStyleAsync(ID param_1,SEL param_2)

{
  return 0;
}

// ===== MDBaseTextStyler::cache @ 0003916c =====

ID MDBaseTextStyler::cache(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

// ===== MDBaseTextStyler::setCache: @ 00039178 =====

void MDBaseTextStyler::setCache_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}

// ===== MDBaseTextStyler::markerColor @ 00039180 =====

ID MDBaseTextStyler::markerColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}

// ===== MDBaseTextStyler::setMarkerColor: @ 0003918c =====

void MDBaseTextStyler::setMarkerColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}

// ===== MDBaseTextStyler::baseTextColor @ 00039194 =====

ID MDBaseTextStyler::baseTextColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}

// ===== MDBaseTextStyler::setBaseTextColor: @ 000391a0 =====

void MDBaseTextStyler::setBaseTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}

// ===== MDBaseTextStyler::baseFontSize @ 000391a8 =====

double MDBaseTextStyler::baseFontSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x20);
}

// ===== MDBaseTextStyler::setBaseFontSize: @ 000391b0 =====

void MDBaseTextStyler::setBaseFontSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x20) = param_3;
  return;
}

// ===== MDBaseTextStyler::baseTabSize @ 000391b8 =====

double MDBaseTextStyler::baseTabSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x28);
}

// ===== MDBaseTextStyler::setBaseTabSize: @ 000391c0 =====

void MDBaseTextStyler::setBaseTabSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x28) = param_3;
  return;
}

// ===== MDBaseTextStyler::basePointSize @ 000391c8 =====

double MDBaseTextStyler::basePointSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x30);
}

// ===== MDBaseTextStyler::setBasePointSize: @ 000391d0 =====

void MDBaseTextStyler::setBasePointSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x30) = param_3;
  return;
}

// ===== MDBaseTextStyler::defaultParagraphIndent @ 000391d8 =====

double MDBaseTextStyler::defaultParagraphIndent(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x38);
}

// ===== MDBaseTextStyler::setDefaultParagraphIndent: @ 000391e0 =====

void MDBaseTextStyler::setDefaultParagraphIndent_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x38) = param_3;
  return;
}

// ===== MDBaseTextStyler::columnSize @ 000391e8 =====

double MDBaseTextStyler::columnSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x40);
}

// ===== MDBaseTextStyler::setColumnSize: @ 000391f0 =====

void MDBaseTextStyler::setColumnSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x40) = param_3;
  return;
}

// ===== MDBaseTextStyler::gutterSize @ 000391f8 =====

double MDBaseTextStyler::gutterSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x48);
}

// ===== MDBaseTextStyler::setGutterSize: @ 00039200 =====

void MDBaseTextStyler::setGutterSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x48) = param_3;
  return;
}

// ===== MDBaseTextStyler::maxTextContainerWidth @ 00039208 =====

double MDBaseTextStyler::maxTextContainerWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x50);
}

// ===== MDBaseTextStyler::setMaxTextContainerWidth: @ 00039210 =====

void MDBaseTextStyler::setMaxTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x50) = param_3;
  return;
}

// ===== MDBaseTextStyler::.cxx_destruct @ 00039218 =====

void MDBaseTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

