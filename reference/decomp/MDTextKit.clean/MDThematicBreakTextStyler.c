// ===== MDThematicBreakTextStyler::styleTextInAttributedString:range:replacementBlock: @ 0002aaf8 =====

void MDThematicBreakTextStyler::styleTextInAttributedString_range_replacementBlock_
               (ID param_1,SEL param_2,ID param_3,_NSRange *param_4,ID param_5,undefined4 param_6)

{
  
  local_58 = 
  ___80__MDThematicBreakTextStyler_styleTextInAttributedString_range_replacementBlock___block_invoke
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_5;
  enumerateThematicBreakInRange_options_usingBlock_
            (param_3,param_4->field0_0x0,param_4->field1_0x8,0,&local_68);
  return;
}

// ===== MDThematicBreakTextStyler::borderColor @ 0002add0 =====

ID MDThematicBreakTextStyler::borderColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_borderColor);
}

// ===== MDThematicBreakTextStyler::setBorderColor: @ 0002ade0 =====

void MDThematicBreakTextStyler::setBorderColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_borderColor) = param_3;
  return;
}

// ===== MDThematicBreakTextStyler::.cxx_destruct @ 0002adec =====

void MDThematicBreakTextStyler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_borderColor) = 0;
  return;
}

