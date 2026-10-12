// ===== _TtC11MDTextKitUI17AsyncFocusTracker::init @ 000ce8cc =====

ID _TtC11MDTextKitUI17AsyncFocusTracker::init(ID param_1,SEL param_2)

{
  
  *(undefined **)(param_1 + focusSearchResults) = PTR___swiftEmptyArrayStorage_0020e328;
  local_30.super_class = (class_t *)MDTextKitUI::AsyncFocusTracker::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  return IVar1;
}

// ===== _TtC11MDTextKitUI17AsyncFocusTracker::.cxx_destruct @ 000ce94c =====

void _TtC11MDTextKitUI17AsyncFocusTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + focusSearchResults));
  return;
}

