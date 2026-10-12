// ===== MDBlockQuoteTextStyler::init @ 00029e00 =====

ID MDBlockQuoteTextStyler::init(ID param_1,SEL param_2)

{
  
  local_30.super_class = &objc::class_t::MDBlockQuoteTextStyler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar2 = redColor(NSColor);
    setMarkerColor_(self,IVar2);
    puVar1 = PTR____NSDictionary0__struct;
    setTextAttributes_(self,PTR____NSDictionary0__struct);
    setCalloutColors_(self,puVar1);
  }
  return self;
}

// ===== MDBlockQuoteTextStyler::styleTextInAttributedString:range:replacementBlock: @ 00029e94 =====

void MDBlockQuoteTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_70 = 
  ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_a8 = 
  ___77__MDBlockQuoteTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke_5;
  local_98 = param_1;
  local_90 = param_3;
  local_88 = param_5;
  local_60 = param_3;
  IStack_58 = param_1;
  enumerateBlockquoteInRange_options_listBlock_listItemBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_80,&local_b8);
  return;
}

// ===== MDBlockQuoteTextStyler::textAttributes @ 0002aa50 =====

ID MDBlockQuoteTextStyler::textAttributes(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textAttributes);
}

// ===== MDBlockQuoteTextStyler::setTextAttributes: @ 0002aa60 =====

void MDBlockQuoteTextStyler::setTextAttributes_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textAttributes) = param_3;
  return;
}

// ===== MDBlockQuoteTextStyler::calloutColors @ 0002aa6c =====

ID MDBlockQuoteTextStyler::calloutColors(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_calloutColors);
}

// ===== MDBlockQuoteTextStyler::setCalloutColors: @ 0002aa7c =====

void MDBlockQuoteTextStyler::setCalloutColors_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_calloutColors) = param_3;
  return;
}

// ===== MDBlockQuoteTextStyler::calloutLabels @ 0002aa88 =====

ID MDBlockQuoteTextStyler::calloutLabels(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_calloutLabels);
}

// ===== MDBlockQuoteTextStyler::setCalloutLabels: @ 0002aa98 =====

void MDBlockQuoteTextStyler::setCalloutLabels_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_calloutLabels) = param_3;
  return;
}

// ===== MDBlockQuoteTextStyler::.cxx_destruct @ 0002aaa4 =====

void MDBlockQuoteTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_calloutLabels) = 0;
  *(undefined8 *)(param_1 + (long)_calloutColors) = 0;
  *(undefined8 *)(param_1 + (long)_textAttributes) = 0;
  return;
}

