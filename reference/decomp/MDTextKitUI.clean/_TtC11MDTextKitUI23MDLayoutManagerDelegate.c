// ===== _TtC11MDTextKitUI23MDLayoutManagerDelegate::layoutManager:shouldBreakLineByWordBeforeCharacterAtIndex: @ 0010dfec =====

bool _TtC11MDTextKitUI23MDLayoutManagerDelegate::
     layoutManager_shouldBreakLineByWordBeforeCharacterAtIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  
  bVar1 = MDTextKitUI::MDLayoutManagerDelegate::layoutManager
                    ((MDLayoutManagerDelegate *)param_1,(NSLayoutManager *)param_3,param_4);
  return (bool)bVar1;
}

// ===== _TtC11MDTextKitUI23MDLayoutManagerDelegate::layoutManager:lineSpacingAfterGlyphAtIndex:withProposedLineFragmentRect: @ 0010e054 =====

double _TtC11MDTextKitUI23MDLayoutManagerDelegate::
       layoutManager_lineSpacingAfterGlyphAtIndex_withProposedLineFragmentRect_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4,CGRect param_5)

{
  
  FUN_0010e2f4(param_3,param_4,param_3,param_4,param_5.field0_0x0.field0_0x0,
               param_5.field0_0x0.field1_0x8,param_5.field1_0x10.field0_0x0,
               param_5.field1_0x10.field1_0x8);
  return in_d0;
}

// ===== _TtC11MDTextKitUI23MDLayoutManagerDelegate::layoutManager:shouldSetLineFragmentRect:lineFragmentUsedRect:baselineOffset:inTextContainer:forGlyphRange: @ 0010e14c =====

bool _TtC11MDTextKitUI23MDLayoutManagerDelegate::
     layoutManager_shouldSetLineFragmentRect_lineFragmentUsedRect_baselineOffset_inTextContainer_forGlyphRange_
               (ID param_1,SEL param_2,ID param_3,CGRect *param_4,CGRect *param_5,double *param_6,
               ID param_7,_NSRange param_8)

{
  
  _swift_dynamicCastObjCClass(param_3,MDLayoutManager);
  if (param_3 != 0) {
    IVar1 = 
            layoutManager_shouldSetLineFragmentRect_lineFragmentUsedRect_baselineOffset_inTextContainer_forGlyphRange_
                      (param_3,param_3,param_4,param_5,param_6,param_7);
    return (bool)IVar1;
  }
  return 0;
}

// ===== _TtC11MDTextKitUI23MDLayoutManagerDelegate::init @ 0010e248 =====

ID _TtC11MDTextKitUI23MDLayoutManagerDelegate::init(ID param_1,SEL param_2)

{
  
  lVar1 = cache;
  self = NSCache;
  _objc_allocWithZone();
  IVar2 = init((ID)self);
  setCountLimit_(IVar2,0x14);
  *(ID *)(param_1 + lVar1) = IVar2;
  local_40.super_class = (class_t *)MDTextKitUI::MDLayoutManagerDelegate::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"init");
  return IVar2;
}

// ===== _TtC11MDTextKitUI23MDLayoutManagerDelegate::.cxx_destruct @ 0010e2e4 =====

void _TtC11MDTextKitUI23MDLayoutManagerDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}

