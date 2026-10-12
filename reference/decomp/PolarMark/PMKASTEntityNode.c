// ===== PMKASTEntityNode::toString @ 00047d28 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x10 bytes */

ID PMKASTEntityNode::toString(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_38 [2];
  char local_21;
  
  objc_stub::node(param_1);
  __ZN3Ice6Inline10EntityNode8toStringEv(local_38);
  IVar1 = objc_stub::stringWithIceString_((ID)&_OBJC_CLASS___NSString,local_38);
  if (local_21 < '\0') {
    __ZdlPv(local_38[0]);
  }
  return IVar1;
}


