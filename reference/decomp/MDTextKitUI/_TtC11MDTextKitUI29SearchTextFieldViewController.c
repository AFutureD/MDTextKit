// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::leadingConstraint @ 0003d490 =====

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI29SearchTextFieldViewController::leadingConstraint(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = leadingConstraint;
  _swift_beginAccess(param_1 + leadingConstraint,auStack_38,0,0);
  IVar2 = param_1 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  return IVar2;
}


// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::setLeadingConstraint: @ 0003d51c =====

/* Function Stack Size: 0x18 bytes */

void _TtC11MDTextKitUI29SearchTextFieldViewController::setLeadingConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = leadingConstraint;
  _swift_beginAccess(param_1 + leadingConstraint,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::viewDidLoad @ 0003d714 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI29SearchTextFieldViewController::viewDidLoad(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class =
       (class_t *)MDTextKitUI::SearchTextFieldViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"viewDidLoad");
  IVar1 = objc_stub::view(param_1);
  objc_stub::setWantsLayer_(IVar1,1);
  IVar1 = objc_stub::view(param_1);
  IVar1 = objc_stub::layer(IVar1);
  if (IVar1 != 0) {
    objc_stub::setMasksToBounds_(IVar1,0);
  }
  return;
}


// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::initWithNibName:bundle: @ 0003d880 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11MDTextKitUI29SearchTextFieldViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  ID IVar2;
  String SVar3;
  objc_super local_40;
  
  if (param_3 == 0) {
    _swift_unknownObjectWeakInit(param_1 + leadingConstraint,0);
    pNVar1 = (NSString *)0x0;
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _swift_unknownObjectWeakInit(param_1 + leadingConstraint,0);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
  }
  local_40.super_class =
       (class_t *)MDTextKitUI::SearchTextFieldViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithNibName:bundle:",pNVar1,param_4);
  return IVar2;
}


// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::initWithCoder: @ 0003d9d4 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI29SearchTextFieldViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  _swift_unknownObjectWeakInit(param_1 + leadingConstraint,0);
  local_40.super_class =
       (class_t *)MDTextKitUI::SearchTextFieldViewController::typeMetadataAccessor();
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  return IVar1;
}


// ===== _TtC11MDTextKitUI29SearchTextFieldViewController::.cxx_destruct @ 0003da98 =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI29SearchTextFieldViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + leadingConstraint);
  return;
}


