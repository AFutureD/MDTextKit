// ===== MDUnorderedListTextStyler::init @ 0002875c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDUnorderedListTextStyler::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::blueColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setMarkerColor_(self,IVar1);
    IVar1 = objc_stub::lightGrayColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setCompletedTaskTextColor_(self,IVar1);
  }
  return self;
}


// ===== MDUnorderedListTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00028800 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

void MDUnorderedListTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  ID local_38;
  
  local_68 = PTR___NSConcreteStackBlock_0005ebe0;
  local_60 = 0xc2000000;
  local_58 = 
  ___80__MDUnorderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
  ;
  puStack_50 = &
               ___block_descriptor_56_e8_32s40s48bs_e55_v56__0__NSRange_QQ_8__NSRange_QQ_24__PMKListInfo_40_B48l
  ;
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_5;
  objc_stub::enumerateUnorderedListInRange_options_listBlock_listItemBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&___block_literal_global,&local_68);
  return;
}


// ===== MDUnorderedListTextStyler::attachmentForRepresentedAttributedText:listLevel:rtl: @ 00028ac4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x24 bytes */

ID MDUnorderedListTextStyler::attachmentForRepresentedAttributedText_listLevel_rtl_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,bool param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ID local_90;
  ID local_88;
  ID local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_90 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,param_4 & 3);
  local_88 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)param_5);
  local_80 = objc_stub::string(param_3);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_90,3);
  IVar2 = objc_stub::cache(param_1);
  IVar2 = objc_stub::objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    objc_stub::baseFontSize(param_1);
    dVar5 = extraout_d0 * 0.4;
    IVar2 = _objc_alloc(&objc::class_t::MDUnorderedListTextAttachment);
    IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar2,param_3);
    dVar6 = 0.0;
    if (1 < param_4) {
      objc_stub::baseFontSize(param_1);
      dVar6 = extraout_d0_00 * 0.2;
    }
    objc_stub::baseTabSize(param_1);
    objc_stub::setAttachmentSize_(IVar2);
    objc_stub::columnSize(param_1);
    dVar7 = (extraout_d0_01 - dVar5) * 0.5;
    dVar6 = dVar6 * 0.5;
    dVar4 = dVar6;
    objc_stub::setDrawingRect_(IVar2,dVar7,dVar6,dVar5,dVar5);
    if (param_5 != 0) {
      objc_stub::attachmentSize(IVar2);
      objc_stub::setDrawingRect_(IVar2,(extraout_d0_02 - dVar7) - dVar5,dVar6,dVar5,dVar5);
      dVar4 = dVar6;
    }
    objc_stub::attachmentSize(IVar2);
    objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,dVar4,0);
    objc_stub::setAttachmentBaselineOffset_(IVar2);
    IVar3 = objc_stub::markerColor(param_1);
    objc_stub::setBulletColor_(IVar2,IVar3);
    objc_stub::setBulletLevel_(IVar2,param_4);
    objc_stub::basePointSize(param_1);
    objc_stub::setBulletBorderWidth_(IVar2);
    objc_stub::updateAttachmentImage(IVar2);
    IVar3 = objc_stub::cache(param_1);
    objc_stub::setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    objc_stub::setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = objc_stub::copy(IVar2);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_78) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDUnorderedListTextStyler::taskAttachmentForRepresentedAttributedText:listLevel:taskCompleted:rtl: @ 00028d94 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x28 bytes */

ID MDUnorderedListTextStyler::
   taskAttachmentForRepresentedAttributedText_listLevel_taskCompleted_rtl_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,bool param_5,bool param_6
             )

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  ID local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_0005ec00;
  local_78 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)param_6);
  IVar1 = objc_stub::string(param_3);
  local_70 = objc_stub::lowercaseString(IVar1);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_78,2);
  IVar2 = objc_stub::cache(param_1);
  IVar2 = objc_stub::objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    objc_stub::baseFontSize(param_1);
    dVar5 = extraout_d0 * 1.2;
    objc_stub::columnSize(param_1);
    dVar6 = (extraout_d0_00 - dVar5) * 0.5;
    IVar2 = _objc_alloc(&objc::class_t::MDTaskTextAttachment);
    IVar2 = objc_stub::initWithRepresentedAttributedText_(IVar2,param_3);
    objc_stub::baseTabSize(param_1);
    objc_stub::setAttachmentSize_(IVar2);
    uVar4 = 0;
    objc_stub::setDrawingRect_(IVar2,dVar6,0,dVar5,dVar5);
    if (param_6 != 0) {
      objc_stub::attachmentSize(IVar2);
      uVar4 = 0;
      objc_stub::setDrawingRect_(IVar2,(extraout_d0_01 - dVar6) - dVar5,0,dVar5,dVar5);
    }
    objc_stub::attachmentSize(IVar2);
    objc_stub::baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,uVar4,0);
    objc_stub::setAttachmentBaselineOffset_(IVar2);
    IVar3 = objc_stub::taskFillColor(param_1);
    objc_stub::setFillColor_(IVar2,IVar3);
    IVar3 = objc_stub::taskBorderColor(param_1);
    objc_stub::setBorderColor_(IVar2,IVar3);
    IVar3 = objc_stub::taskCheckColor(param_1);
    objc_stub::setCheckColor_(IVar2,IVar3);
    objc_stub::baseFontSize(param_1);
    objc_stub::setBorderWidth_(IVar2,extraout_d0_02 * 0.1);
    objc_stub::basePointSize(param_1);
    objc_stub::setBorderCompletedWidth_(IVar2);
    objc_stub::setCompleted_(IVar2,(ulong)param_5);
    objc_stub::updateAttachmentImage(IVar2);
    IVar3 = objc_stub::cache(param_1);
    objc_stub::setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    objc_stub::setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = objc_stub::copy(IVar2);
  if (*(long *)PTR____stack_chk_guard_0005ec00 == local_68) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


// ===== MDUnorderedListTextStyler::taskFillColor @ 00029098 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDUnorderedListTextStyler::taskFillColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_taskFillColor);
}


// ===== MDUnorderedListTextStyler::setTaskFillColor: @ 000290a8 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextStyler::setTaskFillColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_taskFillColor) = param_3;
  return;
}


// ===== MDUnorderedListTextStyler::taskBorderColor @ 000290b4 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDUnorderedListTextStyler::taskBorderColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_taskBorderColor);
}


// ===== MDUnorderedListTextStyler::setTaskBorderColor: @ 000290c4 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextStyler::setTaskBorderColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_taskBorderColor) = param_3;
  return;
}


// ===== MDUnorderedListTextStyler::taskCheckColor @ 000290d0 =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDUnorderedListTextStyler::taskCheckColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_taskCheckColor);
}


// ===== MDUnorderedListTextStyler::setTaskCheckColor: @ 000290e0 =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextStyler::setTaskCheckColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_taskCheckColor) = param_3;
  return;
}


// ===== MDUnorderedListTextStyler::completedTaskTextColor @ 000290ec =====

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID MDUnorderedListTextStyler::completedTaskTextColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_completedTaskTextColor);
}


// ===== MDUnorderedListTextStyler::setCompletedTaskTextColor: @ 000290fc =====

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void MDUnorderedListTextStyler::setCompletedTaskTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_completedTaskTextColor) = param_3;
  return;
}


// ===== MDUnorderedListTextStyler::.cxx_destruct @ 00029108 =====

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

void MDUnorderedListTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_completedTaskTextColor) = 0;
  *(undefined8 *)(param_1 + (long)_taskCheckColor) = 0;
  *(undefined8 *)(param_1 + (long)_taskBorderColor) = 0;
  *(undefined8 *)(param_1 + (long)_taskFillColor) = 0;
  return;
}


