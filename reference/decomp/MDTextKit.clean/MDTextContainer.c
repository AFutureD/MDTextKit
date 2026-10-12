// ===== MDTextContainer::lineFragmentPadding @ 0002ae00 =====

double MDTextContainer::lineFragmentPadding(ID param_1,SEL param_2)

{
  
  lVar1 = (long)_maxColumSize;
  if (*(double *)(param_1 + lVar1) == 0.0) {
    local_30.super_class = &objc::class_t::MDTextContainer;
    local_30.receiver = param_1;
    _objc_msgSendSuper2(&local_30,"lineFragmentPadding");
    dVar3 = extraout_d0_00;
  }
  else {
    size(param_1);
    dVar2 = (extraout_d0 - *(double *)(param_1 + lVar1)) * 0.5;
    dVar3 = *(double *)(param_1 + (long)_minInset);
    if (*(double *)(param_1 + (long)_minInset) <= dVar2) {
      dVar3 = dVar2;
    }
  }
  return dVar3;
}

// ===== MDTextContainer::currentColumnWidth @ 0002ae84 =====

double MDTextContainer::currentColumnWidth(ID param_1,SEL param_2)

{
  
  size(param_1);
  lineFragmentPadding(param_1);
  return extraout_d0 + extraout_d0_00 * -2.0;
}

// ===== MDTextContainer::minInset @ 0002aec0 =====

double MDTextContainer::minInset(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_minInset);
}

// ===== MDTextContainer::setMinInset: @ 0002aed0 =====

void MDTextContainer::setMinInset_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_minInset) = param_3;
  return;
}

// ===== MDTextContainer::maxColumSize @ 0002aee0 =====

double MDTextContainer::maxColumSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxColumSize);
}

// ===== MDTextContainer::setMaxColumSize: @ 0002aef0 =====

void MDTextContainer::setMaxColumSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxColumSize) = param_3;
  return;
}

