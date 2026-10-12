// ===== MDFoldTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002b570 =====

void MDFoldTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___71__MDFoldTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateFoldInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDFoldTextStyler::backgroundColor @ 0002b85c =====

ID MDFoldTextStyler::backgroundColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundColor);
}

// ===== MDFoldTextStyler::setBackgroundColor: @ 0002b86c =====

void MDFoldTextStyler::setBackgroundColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_backgroundColor) = param_3;
  return;
}

// ===== MDFoldTextStyler::textColor @ 0002b878 =====

ID MDFoldTextStyler::textColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textColor);
}

// ===== MDFoldTextStyler::setTextColor: @ 0002b888 =====

void MDFoldTextStyler::setTextColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_textColor) = param_3;
  return;
}

// ===== MDFoldTextStyler::.cxx_destruct @ 0002b894 =====

void MDFoldTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_textColor) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundColor) = 0;
  return;
}

