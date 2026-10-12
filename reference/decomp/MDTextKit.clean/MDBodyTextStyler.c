// ===== MDBodyTextStyler::init @ 00012ccc =====

ID MDBodyTextStyler::init(ID param_1,SEL param_2)

{
  
  local_68.super_class = &objc::class_t::MDBodyTextStyler;
  local_68.receiver = param_1;
  self = _objc_msgSendSuper2(&local_68,"init");
  if (self != 0) {
    local_58 = _NSFontAttributeName;
    local_48 = systemFontOfSize_(NSFont,0x402c000000000000);
    local_50 = _NSParagraphStyleAttributeName;
    local_40 = defaultParagraphStyle(NSParagraphStyle);
    IVar1 = dictionaryWithObjects_forKeys_count_
                      (NSDictionary,&local_48,&local_58,2);
    setBodyTextAttributes_(self,IVar1);
  }
    return self;
  }
}

// ===== MDBodyTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00012dec =====

void MDBodyTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  IVar1 = bodyTextAttributes(param_1);
  if (IVar1 != 0) {
    IVar1 = bodyTextAttributes(param_1);
    addAttributes_range_(param_3,IVar1,param_4->field0_0x0,param_4->field1_0x8);
  }
  return;
}

// ===== MDBodyTextStyler::setBodyTextAttributes: @ 00012e6c =====

void MDBodyTextStyler::setBodyTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  
  IVar1 = dictionaryWithDictionary_(NSDictionary);
  *(ID *)(param_1 + (long)_bodyTextAttributes) = IVar1;
  return;
}

// ===== MDBodyTextStyler::bodyTextAttributes @ 00012eb0 =====

ID MDBodyTextStyler::bodyTextAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bodyTextAttributes);
}

// ===== MDBodyTextStyler::.cxx_destruct @ 00012ec0 =====

void MDBodyTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_bodyTextAttributes) = 0;
  return;
}

