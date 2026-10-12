// ===== _TtC11MDTextKitUI18MDTextFocusManager::initWithTextView: @ 001123f4 =====

ID _TtC11MDTextKitUI18MDTextFocusManager::initWithTextView_(ID param_1,SEL param_2,ID param_3)

{
  
  lVar1 = _TtC11MDTextKitUI22MDTextCoreFocusManager::textView;
  _swift_unknownObjectWeakInit(param_1 + _TtC11MDTextKitUI22MDTextCoreFocusManager::textView,0);
  *(undefined1 *)(param_1 + _TtC11MDTextKitUI22MDTextCoreFocusManager::addHorizontalPadding) = 0;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  local_58.super_class = (class_t *)MDTextKitUI::MDTextCoreFocusManager::typeMetadataAccessor();
  local_58.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_58,"init");
  return IVar2;
}

