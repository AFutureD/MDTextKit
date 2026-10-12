// ===== MDUnorderedListTextStyler::init @ 0002875c =====

ID MDUnorderedListTextStyler::init(ID param_1,SEL param_2)

{
  
  local_40.super_class = &objc::class_t::MDUnorderedListTextStyler;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = blueColor(NSColor);
    setMarkerColor_(self,IVar1);
    IVar1 = lightGrayColor(NSColor);
    setCompletedTaskTextColor_(self,IVar1);
  }
  return self;
}

// ===== MDUnorderedListTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00028800 =====

void MDUnorderedListTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___80__MDUnorderedListTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_2
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_5;
  enumerateUnorderedListInRange_options_listBlock_listItemBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&___block_literal_global,&local_68);
  return;
}

// ===== MDUnorderedListTextStyler::attachmentForRepresentedAttributedText:listLevel:rtl: @ 00028ac4 =====

ID MDUnorderedListTextStyler::attachmentForRepresentedAttributedText_listLevel_rtl_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,bool param_5)

{
  
  local_90 = numberWithUnsignedInteger_(NSNumber,param_4 & 3);
  local_88 = numberWithBool_(NSNumber,(ulong)param_5);
  local_80 = string(param_3);
  IVar1 = arrayWithObjects_count_(NSArray,&local_90,3);
  IVar2 = cache(param_1);
  IVar2 = objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    baseFontSize(param_1);
    dVar5 = extraout_d0 * 0.4;
    IVar2 = _objc_alloc(&objc::class_t::MDUnorderedListTextAttachment);
    IVar2 = initWithRepresentedAttributedText_(IVar2,param_3);
    dVar6 = 0.0;
    if (1 < param_4) {
      baseFontSize(param_1);
      dVar6 = extraout_d0_00 * 0.2;
    }
    baseTabSize(param_1);
    setAttachmentSize_(IVar2);
    columnSize(param_1);
    dVar7 = (extraout_d0_01 - dVar5) * 0.5;
    dVar6 = dVar6 * 0.5;
    dVar4 = dVar6;
    setDrawingRect_(IVar2,dVar7,dVar6,dVar5,dVar5);
    if (param_5 != 0) {
      attachmentSize(IVar2);
      setDrawingRect_(IVar2,(extraout_d0_02 - dVar7) - dVar5,dVar6,dVar5,dVar5);
      dVar4 = dVar6;
    }
    attachmentSize(IVar2);
    baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,dVar4,0);
    setAttachmentBaselineOffset_(IVar2);
    IVar3 = markerColor(param_1);
    setBulletColor_(IVar2,IVar3);
    setBulletLevel_(IVar2,param_4);
    basePointSize(param_1);
    setBulletBorderWidth_(IVar2);
    updateAttachmentImage(IVar2);
    IVar3 = cache(param_1);
    setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = copy(IVar2);
    return IVar1;
  }
}

// ===== MDUnorderedListTextStyler::taskAttachmentForRepresentedAttributedText:listLevel:taskCompleted:rtl: @ 00028d94 =====

ID MDUnorderedListTextStyler::
   taskAttachmentForRepresentedAttributedText_listLevel_taskCompleted_rtl_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,bool param_5,bool param_6
             )

{
  
  local_78 = numberWithBool_(NSNumber,(ulong)param_6);
  IVar1 = string(param_3);
  local_70 = lowercaseString(IVar1);
  IVar1 = arrayWithObjects_count_(NSArray,&local_78,2);
  IVar2 = cache(param_1);
  IVar2 = objectForKey_(IVar2,IVar1);
  if (IVar2 == 0) {
    baseFontSize(param_1);
    dVar5 = extraout_d0 * 1.2;
    columnSize(param_1);
    dVar6 = (extraout_d0_00 - dVar5) * 0.5;
    IVar2 = _objc_alloc(&objc::class_t::MDTaskTextAttachment);
    IVar2 = initWithRepresentedAttributedText_(IVar2,param_3);
    baseTabSize(param_1);
    setAttachmentSize_(IVar2);
    uVar4 = 0;
    setDrawingRect_(IVar2,dVar6,0,dVar5,dVar5);
    if (param_6 != 0) {
      attachmentSize(IVar2);
      uVar4 = 0;
      setDrawingRect_(IVar2,(extraout_d0_01 - dVar6) - dVar5,0,dVar5,dVar5);
    }
    attachmentSize(IVar2);
    baselineOffsetForAttachmentAtIndex_attachmentHeight_(param_3,uVar4,0);
    setAttachmentBaselineOffset_(IVar2);
    IVar3 = taskFillColor(param_1);
    setFillColor_(IVar2,IVar3);
    IVar3 = taskBorderColor(param_1);
    setBorderColor_(IVar2,IVar3);
    IVar3 = taskCheckColor(param_1);
    setCheckColor_(IVar2,IVar3);
    baseFontSize(param_1);
    setBorderWidth_(IVar2,extraout_d0_02 * 0.1);
    basePointSize(param_1);
    setBorderCompletedWidth_(IVar2);
    setCompleted_(IVar2,(ulong)param_5);
    updateAttachmentImage(IVar2);
    IVar3 = cache(param_1);
    setObject_forKey_(IVar3,IVar2,IVar1);
  }
  else {
    setRepresentedAttributedText_(IVar2,param_3);
  }
  IVar1 = copy(IVar2);
    return IVar1;
  }
}

// ===== MDUnorderedListTextStyler::taskFillColor @ 00029098 =====

ID MDUnorderedListTextStyler::taskFillColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_taskFillColor);
}

// ===== MDUnorderedListTextStyler::setTaskFillColor: @ 000290a8 =====

void MDUnorderedListTextStyler::setTaskFillColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_taskFillColor) = param_3;
  return;
}

// ===== MDUnorderedListTextStyler::taskBorderColor @ 000290b4 =====

ID MDUnorderedListTextStyler::taskBorderColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_taskBorderColor);
}

// ===== MDUnorderedListTextStyler::setTaskBorderColor: @ 000290c4 =====

void MDUnorderedListTextStyler::setTaskBorderColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_taskBorderColor) = param_3;
  return;
}

// ===== MDUnorderedListTextStyler::taskCheckColor @ 000290d0 =====

ID MDUnorderedListTextStyler::taskCheckColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_taskCheckColor);
}

// ===== MDUnorderedListTextStyler::setTaskCheckColor: @ 000290e0 =====

void MDUnorderedListTextStyler::setTaskCheckColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_taskCheckColor) = param_3;
  return;
}

// ===== MDUnorderedListTextStyler::completedTaskTextColor @ 000290ec =====

ID MDUnorderedListTextStyler::completedTaskTextColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_completedTaskTextColor);
}

// ===== MDUnorderedListTextStyler::setCompletedTaskTextColor: @ 000290fc =====

void MDUnorderedListTextStyler::setCompletedTaskTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_completedTaskTextColor) = param_3;
  return;
}

// ===== MDUnorderedListTextStyler::.cxx_destruct @ 00029108 =====

void MDUnorderedListTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_completedTaskTextColor) = 0;
  *(undefined8 *)(param_1 + (long)_taskCheckColor) = 0;
  *(undefined8 *)(param_1 + (long)_taskBorderColor) = 0;
  *(undefined8 *)(param_1 + (long)_taskFillColor) = 0;
  return;
}

