// ===== MDBaseTextStyler::addBoundarySpacerAttachment:inAttributedString:range:replacementBlock: @ 0001fe94 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDBaseTextStyler::addBoundarySpacerAttachment_inAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,_NSRange param_5,ID param_6,
               undefined4 param_7)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  unsigned_long_long uVar4;
  
  uVar4 = param_5.field0_0x0;
  IVar2 = objc_stub::attributesAtIndex_effectiveRange_(param_4,uVar4,0);
  IVar2 = objc_stub::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSMutableDictionary,IVar2);
  lVar1 = uVar4 + param_5.field1_0x8;
  IVar3 = objc_stub::attributesAtIndex_effectiveRange_(param_4,lVar1 + -1,0);
  IVar3 = objc_stub::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSMutableDictionary,IVar3);
  objc_stub::setObject_forKey_
            (IVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e728,&cf_MDSpacer);
  objc_stub::setObject_forKey_
            (IVar3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e740,&cf_MDSpacer);
  IVar2 = objc_stub::attachmentAttributedStringWithAttributes_(param_3,IVar2);
  IVar3 = objc_stub::attachmentAttributedStringWithAttributes_(param_3,IVar3);
  objc_stub::insertAttributedString_atIndex_(param_4,IVar3,lVar1);
  (**(code **)(param_6 + 0x10))(param_6,lVar1,0,IVar3);
  objc_stub::addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e740,lVar1 + -1,2);
  objc_stub::insertAttributedString_atIndex_(param_4,IVar2,uVar4);
  (**(code **)(param_6 + 0x10))(param_6,uVar4,0,IVar2);
  objc_stub::addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e728,uVar4,2);
  return;
}


// ===== MDBaseTextStyler::addLeftBoundarySpacerAttachment:inAttributedString:atIndex:replacementBlock: @ 000200b8 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDBaseTextStyler::addLeftBoundarySpacerAttachment_inAttributedString_atIndex_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               uint param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::attributesAtIndex_effectiveRange_
                    (param_4,param_5,0,param_5,param_6,(ulong)param_7);
  IVar1 = objc_stub::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSMutableDictionary,IVar1);
  objc_stub::setObject_forKey_
            (IVar1,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e728,&cf_MDSpacer);
  IVar1 = objc_stub::attachmentAttributedStringWithAttributes_(param_3,IVar1);
  objc_stub::insertAttributedString_atIndex_(param_4,IVar1,param_5);
  (**(code **)(param_6 + 0x10))(param_6,param_5,0,IVar1);
  objc_stub::addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e728,param_5,2);
  return;
}


// ===== MDBaseTextStyler::addRightBoundarySpacerAttachment:inAttributedString:atIndex:replacementBlock: @ 000201fc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDBaseTextStyler::addRightBoundarySpacerAttachment_inAttributedString_atIndex_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               uint param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::attributesAtIndex_effectiveRange_
                    (param_4,param_5 - 1,0,param_5,param_6,(ulong)param_7);
  IVar1 = objc_stub::dictionaryWithDictionary_((ID)&_OBJC_CLASS___NSMutableDictionary,IVar1);
  objc_stub::setObject_forKey_
            (IVar1,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e740,&cf_MDSpacer);
  IVar1 = objc_stub::attachmentAttributedStringWithAttributes_(param_3,IVar1);
  objc_stub::insertAttributedString_atIndex_(param_4,IVar1,param_5);
  (**(code **)(param_6 + 0x10))(param_6,param_5,0,IVar1);
  objc_stub::addAttribute_value_range_
            (param_4,&cf_MDSpacer,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0005e740,param_5 - 1,2)
  ;
  return;
}


// ===== MDBaseTextStyler::isAttributedString:RTLAtIndex: @ 000273a0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x20 bytes */

bool MDBaseTextStyler::isAttributedString_RTLAtIndex_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::writingDirectionAtIndex_(param_3,param_4);
  return (bool)(IVar1 == 1);
}


// ===== MDBaseTextStyler::forceWritingDirectionToMatchParagraphInRange:inAttributedString: @ 000273c4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDBaseTextStyler::forceWritingDirectionToMatchParagraphInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  undefined8 uVar2;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_0005ec00;
  IVar1 = objc_stub::writingDirectionAtIndex_(param_4,param_3.field0_0x0);
  uVar2 = *(undefined8 *)PTR__NSWritingDirectionAttributeName_0005ecb8;
  local_50 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
  objc_stub::addAttribute_value_range_(param_4,uVar2,IVar1,param_3.field0_0x0,param_3.field1_0x8);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDBaseTextStyler::forceWritingDirectionToLTRInRange:inAttributedString: @ 000274b8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDBaseTextStyler::forceWritingDirectionToLTRInRange_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  objc_stub::addAttribute_value_range_
            (param_4,*(undefined8 *)PTR__NSWritingDirectionAttributeName_0005ecb8,
             &PTR__OBJC_CLASS___NSConstantArray_0005e850,param_3.field0_0x0,param_3.field1_0x8);
  return;
}


// ===== MDBaseTextStyler::indentParagraphsForListItemRange:indentWidth:inAttributedString:replacementBlock: @ 000280b4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDBaseTextStyler::
     indentParagraphsForListItemRange_indentWidth_inAttributedString_replacementBlock_
               (ID param_1,SEL param_2,_NSRange param_3,double param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  ID IVar1;
  ID self;
  undefined8 extraout_x1;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  ID local_c8;
  ID IStack_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  IVar1 = objc_stub::string(param_5);
  IVar1 = objc_stub::paragraphRangeForRange_(IVar1,param_3.field0_0x0,param_3.field1_0x8);
  local_80 = 0;
  local_70 = 0x2020000000;
  local_68 = 0;
  local_a0 = 0;
  local_90 = 0x2020000000;
  local_88 = 1;
  puStack_98 = &local_a0;
  puStack_78 = &local_80;
  self = objc_stub::string(param_5);
  local_e8 = PTR___NSConcreteStackBlock_0005ebe0;
  local_e0 = 0xc2000000;
  local_d8 = 
  ___112__MDBaseTextStyler_ListUtils__indentParagraphsForListItemRange_indentWidth_inAttributedString_replacementBlock___block_invoke
  ;
  puStack_d0 = &
               ___block_descriptor_72_e8_32s40s48r56r_e52_v56__0__NSString_8__NSRange_QQ_16__NSRange_QQ_32_B48l
  ;
  local_c8 = param_5;
  IStack_c0 = param_1;
  local_b8 = &local_80;
  puStack_b0 = &local_a0;
  local_a8 = param_4;
  objc_stub::enumerateSubstringsInRange_options_usingBlock_(self,IVar1,extraout_x1,0x201,&local_e8);
  __Block_object_dispose(&local_a0,8);
  __Block_object_dispose(&local_80,8);
  return;
}


// ===== MDBaseTextStyler::attachmentForRange:inAttributedString: @ 00028310 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDBaseTextStyler::attachmentForRange_inAttributedString_
             (ID param_1,SEL param_2,_NSRange param_3,ID param_4)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  
  objc_stub::baseTabSize(param_1);
  objc_stub::defaultParagraphIndent(param_1);
  objc_stub::baseFontSize(param_1);
  IVar1 = objc_stub::attachmentForRange_inAttributedString_tabSize_paragraphIndent_fontSize_
                    ((ID)&objc::class_t::MDIndentSpaceTextStyler,extraout_d0,extraout_d0_00,
                     extraout_d0_01,param_3.field0_0x0,param_3.field1_0x8,param_4);
  return IVar1;
}


// ===== MDBaseTextStyler::indentParagraphsForBlockquoteItemRange:indentWidth:inAttributedString:replacementBlock: @ 000283bc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x38 bytes */

void MDBaseTextStyler::
     indentParagraphsForBlockquoteItemRange_indentWidth_inAttributedString_replacementBlock_
               (ID param_1,SEL param_2,_NSRange param_3,double param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  ID self;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID IStack_60;
  double local_58;
  
  self = objc_stub::string(param_5);
  local_88 = PTR___NSConcreteStackBlock_0005ebe0;
  local_80 = 0xc2000000;
  local_78 = 
  ___118__MDBaseTextStyler_ListUtils__indentParagraphsForBlockquoteItemRange_indentWidth_inAttributedString_replacementBlock___block_invoke
  ;
  puStack_70 = &
               ___block_descriptor_56_e8_32s40s_e52_v56__0__NSString_8__NSRange_QQ_16__NSRange_QQ_32_B48l
  ;
  local_68 = param_5;
  IStack_60 = param_1;
  local_58 = param_4;
  objc_stub::enumerateSubstringsInRange_options_usingBlock_
            (self,param_3.field0_0x0,param_3.field1_0x8,0x201,&local_88);
  return;
}


// ===== MDBaseTextStyler::matchIndentOnNewlineForListItemRange:indentWidth:inAttributedString: @ 00028564 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x30 bytes */

void MDBaseTextStyler::matchIndentOnNewlineForListItemRange_indentWidth_inAttributedString_
               (ID param_1,SEL param_2,_NSRange param_3,double param_4,ID param_5)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  double extraout_d0;
  double dVar6;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar7;
  
  uVar1 = param_3.field0_0x0 + param_3.field1_0x8;
  lVar5 = uVar1 - 1;
  IVar2 = objc_stub::newlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  IVar3 = objc_stub::string(param_5);
  IVar3 = objc_stub::characterAtIndex_(IVar3,lVar5);
  IVar2 = objc_stub::characterIsMember_(IVar2,IVar3);
  IVar3 = objc_stub::length(param_5);
  if (uVar1 < IVar3) {
    IVar3 = objc_stub::newlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar4 = objc_stub::string(param_5);
    IVar4 = objc_stub::characterAtIndex_(IVar4,uVar1);
    IVar3 = objc_stub::characterIsMember_(IVar3,IVar4);
    if (((uint)IVar2 & (uint)IVar3) == 1) {
      IVar2 = objc_stub::isListOrBlockquoteParagraphEmptyAtIndex_(param_5,lVar5);
      IVar3 = objc_stub::paragraphStyleAtIndex_(param_5,lVar5);
      IVar3 = objc_stub::mutableCopy(IVar3);
      IVar4 = objc_stub::listOrBlockquoteItemInfoAtIndex_itemRange_markerRange_(param_5,lVar5,0,0);
      objc_stub::firstLineHeadIndent(IVar3);
      if (extraout_d0 <= param_4) {
        IVar4 = objc_stub::listLevel(IVar4);
        dVar6 = param_4 + (double)IVar4 * param_4;
        dVar7 = dVar6 - param_4;
        if ((int)IVar2 == 0) {
          dVar7 = dVar6;
        }
        objc_stub::headIndent(IVar3);
        objc_stub::setHeadIndent_(IVar3,extraout_d0_00 + dVar7);
        objc_stub::firstLineHeadIndent(IVar3);
        objc_stub::setFirstLineHeadIndent_(IVar3,extraout_d0_01 + dVar7);
      }
      objc_stub::addAttribute_value_range_
                (param_5,*(undefined8 *)PTR__NSParagraphStyleAttributeName_0005ec98,IVar3,uVar1,1);
    }
  }
  return;
}


// ===== MDBaseTextStyler::init @ 00039098 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBaseTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  undefined8 uVar1;
  ID IVar2;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDBaseTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    uVar1 = _objc_opt_new(&_OBJC_CLASS___NSCache);
    objc_stub::setCache_(self,uVar1);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setMarkerColor_(self,IVar2);
    IVar2 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setBaseTextColor_(self,IVar2);
  }
  return self;
}


// ===== MDBaseTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00039160 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDBaseTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  return;
}


// ===== MDBaseTextStyler::canStyleAsync @ 00039164 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

bool MDBaseTextStyler::canStyleAsync(ID param_1,SEL param_2)

{
  return 0;
}


// ===== MDBaseTextStyler::cache @ 0003916c =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBaseTextStyler::cache(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


// ===== MDBaseTextStyler::setCache: @ 00039178 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setCache_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


// ===== MDBaseTextStyler::markerColor @ 00039180 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBaseTextStyler::markerColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


// ===== MDBaseTextStyler::setMarkerColor: @ 0003918c =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setMarkerColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


// ===== MDBaseTextStyler::baseTextColor @ 00039194 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDBaseTextStyler::baseTextColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


// ===== MDBaseTextStyler::setBaseTextColor: @ 000391a0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setBaseTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


// ===== MDBaseTextStyler::baseFontSize @ 000391a8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBaseTextStyler::baseFontSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x20);
}


// ===== MDBaseTextStyler::setBaseFontSize: @ 000391b0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setBaseFontSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x20) = param_3;
  return;
}


// ===== MDBaseTextStyler::baseTabSize @ 000391b8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBaseTextStyler::baseTabSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x28);
}


// ===== MDBaseTextStyler::setBaseTabSize: @ 000391c0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setBaseTabSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x28) = param_3;
  return;
}


// ===== MDBaseTextStyler::basePointSize @ 000391c8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBaseTextStyler::basePointSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x30);
}


// ===== MDBaseTextStyler::setBasePointSize: @ 000391d0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setBasePointSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x30) = param_3;
  return;
}


// ===== MDBaseTextStyler::defaultParagraphIndent @ 000391d8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBaseTextStyler::defaultParagraphIndent(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x38);
}


// ===== MDBaseTextStyler::setDefaultParagraphIndent: @ 000391e0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setDefaultParagraphIndent_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x38) = param_3;
  return;
}


// ===== MDBaseTextStyler::columnSize @ 000391e8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBaseTextStyler::columnSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x40);
}


// ===== MDBaseTextStyler::setColumnSize: @ 000391f0 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setColumnSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x40) = param_3;
  return;
}


// ===== MDBaseTextStyler::gutterSize @ 000391f8 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBaseTextStyler::gutterSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x48);
}


// ===== MDBaseTextStyler::setGutterSize: @ 00039200 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setGutterSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x48) = param_3;
  return;
}


// ===== MDBaseTextStyler::maxTextContainerWidth @ 00039208 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

double MDBaseTextStyler::maxTextContainerWidth(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x50);
}


// ===== MDBaseTextStyler::setMaxTextContainerWidth: @ 00039210 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDBaseTextStyler::setMaxTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x50) = param_3;
  return;
}


// ===== MDBaseTextStyler::.cxx_destruct @ 00039218 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDBaseTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


