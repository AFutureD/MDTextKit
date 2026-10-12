// ===== (extension_MDTextKitUI)::__C::MDTextContainer::styleWith @ 000177ec =====

/* (extension in MDTextKitUI):__C.MDTextContainer.styleWith(renderer:
   __C.MDAttributedStringRenderer, themeManager: __C.SFThemeManager) -> () */

void (extension_MDTextKitUI)::__C::MDTextContainer::styleWith
               (MDAttributedStringRenderer *renderer,SFThemeManager *themeManager)

{
  ID unaff_x20;
  
  objc_stub::textContainerMaxWidth((ID)renderer);
  objc_stub::setMaxColumSize_(unaff_x20);
  objc_stub::textContainerMinInset((ID)renderer);
  objc_stub::setMinInset_(unaff_x20);
  return;
}


// ===== (extension_MDTextKitUI)::Swift::Range::nsRange @ 0001caf4 =====

/* (extension in MDTextKitUI):Swift.Range.nsRange(in: Swift.String) -> __C._NSRange */

_NSRange (extension_MDTextKitUI)::Swift::Range::nsRange(String in)

{
  UTF16View in_00;
  undefined1 *puVar1;
  UTF16View to;
  UTF16View to_00;
  __int64 _Var2;
  Index IVar3;
  Index IVar4;
  __int64 _Var5;
  undefined8 extraout_x8;
  long extraout_x12;
  long extraout_x13;
  _NSRange _Var6;
  undefined1 local_50 [16];
  
  IVar3.unknown = in.bridgeObject;
  in_00.unknown = in.str;
  (*(code *)PTR____chkstk_darwin_0020d728)();
  (**(code **)(extraout_x13 + 0x10))
            (local_50 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0),extraout_x8);
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_00234230,&DAT_001c30f0);
  puVar1 = local_50;
  _swift_dynamicCast(puVar1,local_50 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0));
  if (((((ulong)puVar1 & 1) == 0) ||
      (to.unknown = in_00.unknown, IVar4.unknown = IVar3.unknown,
      ::Swift::String::Index::_samePosition(in_00,IVar3), ((uint)IVar4.unknown & 0xff) == 1)) ||
     (to_00.unknown = in_00.unknown, ::Swift::String::Index::_samePosition(in_00,IVar3),
     ((uint)IVar3.unknown & 0xff) == 1)) {
    _Var2 = 0;
    _Var5 = 1;
  }
  else {
    _Var2 = ::Swift::String::UTF16View::distance((Index)0xf,(Index)to.unknown,in_00);
    _Var5 = ::Swift::String::UTF16View::distance((Index)to.unknown,(Index)to_00.unknown,in_00);
  }
  _Var6.length = _Var5;
  _Var6.location = _Var2;
  return _Var6;
}


// ===== (extension_MDTextKitUI)::Swift::String::anonymizedString @ 0002cdb0 =====

/* WARNING: Removing unreachable block (ram,0x0002ce14) */
/* WARNING: Removing unreachable block (ram,0x0002cf38) */
/* (extension in MDTextKitUI):Swift.String.anonymizedString() -> Swift.String */

String (extension_MDTextKitUI)::Swift::String::anonymizedString(void)

{
  UTF16View UVar1;
  code *pcVar2;
  bool bVar3;
  UTF16View UVar4;
  Iterator IVar5;
  long lVar6;
  char *in_x1;
  char *in_x2;
  char *in_x3;
  void *in_x4;
  Character CVar8;
  String SVar9;
  Character CVar10;
  String SVar11;
  Character CVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  char *pcVar7;
  
  UVar4.unknown = in_x1;
  IVar5.unknown = in_x1;
  _swift_bridgeObjectRetain();
  ::Swift::String::Iterator::_next((Iterator)UVar4.unknown);
  do {
    if (IVar5.unknown == (char *)0x0) {
      _swift_bridgeObjectRelease(in_x1);
      return (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
    CVar8.bridgeObject = IVar5.unknown;
    CVar8.str = UVar4.unknown;
    bVar3 = ::Swift::Character::get_isLetter(CVar8);
    if (bVar3) {
      if (((ulong)IVar5.unknown >> 0x3c & 1) == 0) {
        UVar1.unknown = UVar4.unknown;
        if (((ulong)IVar5.unknown & 0x2000000000000000) != 0) {
          UVar1.unknown = (undefined *)((ulong)IVar5.unknown >> 0x38 & 0xf);
        }
        in_x2 = IVar5.unknown;
        lVar6 = ::Swift::String::UTF16View::_nativeGetOffset
                          ((undefined *)((long)UVar1.unknown << 0x10 | 7),UVar4);
      }
      else {
        lVar6 = ::Swift::String::UTF16View::_foreignCount(UVar4);
      }
      if (lVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x2cfc4);
        (*pcVar2)();
      }
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        SVar9.bridgeObject = (void *)0xe100000000000000;
        SVar9.str = section_00000068.segname;
        SVar14.bridgeObject = in_x3;
        SVar14.str = in_x2;
        ::Swift::String::append(SVar9,SVar14);
      }
    }
    else {
      CVar10.bridgeObject = IVar5.unknown;
      CVar10.str = UVar4.unknown;
      bVar3 = ::Swift::Character::get_isNumber(CVar10);
      if (bVar3) {
        if (((ulong)IVar5.unknown >> 0x3c & 1) == 0) {
          UVar1.unknown = UVar4.unknown;
          if (((ulong)IVar5.unknown & 0x2000000000000000) != 0) {
            UVar1.unknown = (undefined *)((ulong)IVar5.unknown >> 0x38 & 0xf);
          }
          in_x2 = IVar5.unknown;
          lVar6 = ::Swift::String::UTF16View::_nativeGetOffset
                            ((undefined *)((long)UVar1.unknown << 0x10 | 7),UVar4);
        }
        else {
          lVar6 = ::Swift::String::UTF16View::_foreignCount(UVar4);
        }
        if (lVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x2cf88);
          (*pcVar2)();
        }
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          SVar11.bridgeObject = (void *)0xe100000000000000;
          SVar11.str = segment_command_00000020.segname + 9;
          SVar15.bridgeObject = in_x3;
          SVar15.str = in_x2;
          ::Swift::String::append(SVar11,SVar15);
        }
      }
    }
    _swift_bridgeObjectRelease(0xe000000000000000);
    in_x2 = (char *)((long)&MACH_HEADER.cputype + 3);
    CVar12.bridgeObject = IVar5.unknown;
    CVar12.str = UVar4.unknown;
    SVar13.bridgeObject = in_x4;
    SVar13.str = in_x3;
    pcVar7 = IVar5.unknown;
    ::Swift::String::insert(CVar12,(Index)0x7,SVar13);
    _swift_bridgeObjectRelease();
    ::Swift::String::Iterator::_next(IVar5);
    UVar4.unknown = IVar5.unknown;
    IVar5.unknown = pcVar7;
  } while( true );
}


// ===== (extension_MDTextKitUI)::__C::NSString::anonymizedString @ 0002cfc4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.NSString.anonymizedString() -> __C.NSString */

NSString * (extension_MDTextKitUI)::__C::NSString::anonymizedString(void)

{
  NSString *pNVar1;
  ID unaff_x20;
  
  pNVar1 = (NSString *)objc_stub::anonymizedString(unaff_x20);
  return pNVar1;
}


// ===== (extension_MDTextKitUI)::__C::NSAttributedString::anonymizedAttributedString @ 0002cffc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0002d138 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* (extension in MDTextKitUI):__C.NSAttributedString.anonymizedAttributedString() ->
   __C.NSAttributedString */

NSAttributedString *
(extension_MDTextKitUI)::__C::NSAttributedString::anonymizedAttributedString(void)

{
  ulong uVar1;
  UTF16View UVar2;
  ulong uVar3;
  NSAttributedString *self;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ID IVar7;
  undefined8 uVar8;
  NSString *pNVar9;
  Index IVar10;
  char *pcVar12;
  __int64 _Var13;
  __int64 _Var14;
  long lVar15;
  void *pvVar16;
  undefined *puVar19;
  ID unaff_x20;
  Index IVar20;
  String SVar21;
  Character CVar22;
  Character CVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  NSAttributedString *local_90;
  ulong uStack_88;
  String local_80 [2];
  UTF16View UVar11;
  char *pcVar17;
  char *pcVar18;
  
  IVar7 = objc_stub::mutableCopy(unaff_x20);
  ::Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(IVar7);
  uVar8 = 0;
  FUN_0002d2c4(0);
  _swift_dynamicCast(&local_90,local_80,PTR___type_metadata_for_Any_0020e318 + 8,uVar8,7);
  self = local_90;
  objc_stub::string(unaff_x20);
  SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar16 = SVar21.bridgeObject;
  uVar1 = (ulong)SVar21.str & 0xffffffffffff;
  if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar16 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    IVar20.unknown = (undefined *)((long)&MACH_HEADER.filetype + 3);
    local_80[0] = SVar21;
    do {
      IVar10 = ::Swift::String::index(IVar20,SVar21);
      CVar22 = ::Swift::String::get_subscript(IVar20,SVar21);
      pcVar17 = CVar22.bridgeObject;
      UVar11.unknown = CVar22.str;
      CVar23 = CVar22;
      FUN_000083c0();
      pcVar12 = CVar23.str;
      puVar19 = PTR___type_metadata_for_Swift_String_0020df20;
      _Var13 = ::Swift::String::Index::_utf16Offset(pcVar12,IVar20.unknown);
      if (((ulong)pcVar17 >> 0x3c & 1) == 0) {
        UVar2.unknown = UVar11.unknown;
        if (((ulong)pcVar17 & 0x2000000000000000) != 0) {
          UVar2.unknown = (undefined *)((ulong)pcVar17 >> 0x38 & 0xf);
        }
        IVar20.unknown = (undefined *)((long)UVar2.unknown << 0x10 | 7);
        _Var14 = ::Swift::String::UTF16View::_nativeGetOffset(IVar20,UVar11);
        local_90 = (NSAttributedString *)0x0;
        uStack_88 = 0xe000000000000000;
        bVar6 = ::Swift::Character::get_isLetter(CVar22);
        if (bVar6) {
          lVar15 = ::Swift::String::UTF16View::_nativeGetOffset(IVar20,UVar11);
joined_r0x0002d264:
          if (lVar15 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x2d2c4);
            (*pcVar5)();
          }
          for (; lVar15 != 0; lVar15 = lVar15 + -1) {
            SVar26.str = CVar22.bridgeObject;
            SVar24.bridgeObject = (void *)0xe100000000000000;
            SVar24.str = section_00000068.segname;
            pcVar18 = (char *)0xe100000000000000;
            SVar26.bridgeObject = pcVar12;
            ::Swift::String::append(SVar24,SVar26);
            CVar22.bridgeObject = SVar26.str;
            CVar22.str = pcVar18;
          }
        }
        else {
          bVar6 = ::Swift::Character::get_isNumber(CVar22);
          if (bVar6) {
            lVar15 = ::Swift::String::UTF16View::_nativeGetOffset(IVar20,UVar11);
joined_r0x0002d28c:
            if (lVar15 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x2d294);
              (*pcVar5)();
            }
            for (; lVar15 != 0; lVar15 = lVar15 + -1) {
              SVar27.str = CVar22.bridgeObject;
              SVar25.bridgeObject = (void *)0xe100000000000000;
              SVar25.str = segment_command_00000020.segname + 9;
              pcVar18 = (char *)0xe100000000000000;
              SVar27.bridgeObject = pcVar12;
              ::Swift::String::append(SVar25,SVar27);
              CVar22.bridgeObject = SVar27.str;
              CVar22.str = pcVar18;
            }
          }
        }
      }
      else {
        _Var14 = ::Swift::String::UTF16View::_foreignCount(UVar11);
        local_90 = (NSAttributedString *)0x0;
        uStack_88 = 0xe000000000000000;
        bVar6 = ::Swift::Character::get_isLetter(CVar22);
        if (bVar6) {
          pcVar18 = pcVar17;
          lVar15 = ::Swift::String::UTF16View::_foreignCount(UVar11);
          CVar22.bridgeObject = puVar19;
          CVar22.str = pcVar18;
          goto joined_r0x0002d264;
        }
        bVar6 = ::Swift::Character::get_isNumber(CVar22);
        if (bVar6) {
          pcVar18 = pcVar17;
          lVar15 = ::Swift::String::UTF16View::_foreignCount(UVar11);
          CVar22.bridgeObject = puVar19;
          CVar22.str = pcVar18;
          goto joined_r0x0002d28c;
        }
      }
      uVar4 = uStack_88;
      uVar3 = (ulong)local_90 & 0xffffffffffff;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar3 = uStack_88 >> 0x38 & 0xf;
      }
      _swift_bridgeObjectRelease(pcVar17);
      if (uVar3 == 0) {
        _swift_bridgeObjectRelease(uVar4);
      }
      else {
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(uVar4);
        objc_stub::replaceCharactersInRange_withString_((ID)self,_Var13,_Var14,pNVar9);
      }
      IVar20 = IVar10;
    } while (uVar1 * 4 - ((ulong)IVar10.unknown >> 0xe) != 0);
  }
  _swift_bridgeObjectRelease(pvVar16);
  return self;
}


// ===== (extension_MDTextKitUI)::__C::NSFileManager::$temporaryUniqueDirectoryURL @ 0002d33c =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* static (extension in MDTextKitUI):__C.NSFileManager.temporaryUniqueDirectoryURL() ->
   Foundation.URL? */

undefined8 (extension_MDTextKitUI)::__C::NSFileManager::_temporaryUniqueDirectoryURL(void)

{
  UUID UVar1;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  UUID UVar5;
  NSURL *pNVar6;
  undefined8 uVar7;
  URL in_x3;
  undefined8 in_x8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined8 local_80 [2];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_0020d738;
  local_80[0] = in_x8;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = (long)local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_0020d728)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_0020d728)();
  lVar11 = lVar12 - extraout_x12;
  IVar3 = ::NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar4.unknown = (undefined *)::NSFileManager::temporaryDirectory(IVar3);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  UVar5 = Foundation::UUID::init();
  SVar14 = Foundation::UUID::get_uuidString(UVar5);
  (**(code **)(lVar8 + 8))(lVar10,UVar1.unknown);
  Foundation::URL::appendingPathComponent(SVar14,true,in_x3);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  pcVar9 = *(code **)(lVar13 + 8);
  (*pcVar9)(lVar12,UVar2.unknown);
  UVar4.unknown = (undefined *)::NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  local_70 = 0;
  IVar3 = ::NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar4.unknown,pNVar6,1,0,&local_70);
  uVar7 = local_70;
  if ((int)IVar3 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar7);
    (*pcVar9)(lVar11,UVar2.unknown);
    (**(code **)(lVar13 + 0x38))(local_80[0],1,1,UVar2.unknown);
    if (*(long *)PTR____stack_chk_guard_0020d738 == local_68) {
      return local_80[0];
    }
  }
  else {
    (**(code **)(lVar13 + 0x20))(local_80[0],lVar11,UVar2.unknown);
    (**(code **)(lVar13 + 0x38))(local_80[0],0,1,UVar2.unknown);
    if (*(long *)PTR____stack_chk_guard_0020d738 == local_68) {
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== (extension_MDTextKitUI)::__C::NSBezierPath::get_cgPath @ 00031f84 =====

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00031fc4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* (extension in MDTextKitUI):__C.NSBezierPath.cgPath.getter : __C.CGPathRef */

NSBezierPath * (extension_MDTextKitUI)::__C::NSBezierPath::get_cgPath(NSBezierPath *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  _ArrayBuffer<undefined> _Var3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  CGPoint control1;
  CGPoint control2;
  CGAffineTransform transform;
  ID unaff_x20;
  _ArrayBuffer<undefined> _Var7;
  undefined *puVar8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  _CGPathCreateMutable();
  uVar2 = 0;
  FUN_00005b04(0);
  _Var3 = ::Swift::Array<undefined>::_allocateBufferUninitialized(uVar2,uVar2);
  *(undefined8 *)(_Var3.unknown + 0x10) = 3;
  *(undefined8 *)(_Var3.unknown + 0x28) = 0;
  *(undefined8 *)(_Var3.unknown + 0x20) = 0;
  *(undefined8 *)(_Var3.unknown + 0x38) = 0;
  *(undefined8 *)(_Var3.unknown + 0x30) = 0;
  *(undefined8 *)(_Var3.unknown + 0x48) = 0;
  *(undefined8 *)(_Var3.unknown + 0x40) = 0;
  puVar4 = (undefined *)objc_stub::elementCount(unaff_x20);
  if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x32138);
    (*pcVar1)();
  }
  if (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    _Var7 = _Var3;
    do {
      puVar5 = _Var7.unknown;
      _swift_isUniquelyReferenced_nonNull_native();
      _Var3.unknown = _Var7.unknown;
      if (((ulong)puVar5 & 1) == 0) {
        _Var3.unknown = (undefined *)0x0;
        FUN_0001079c(0,*(undefined8 *)(_Var7.unknown + 0x10),0,_Var7.unknown);
      }
      transform.unknown = _Var3.unknown + 0x20;
      control2.unknown = puVar8;
      IVar6 = objc_stub::elementAtIndex_associatedPoints_(unaff_x20);
      if ((long)IVar6 < 2) {
        if (IVar6 == 0) {
          if (*(long *)(_Var3.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x32134);
            (*pcVar1)();
          }
          local_e8 = 0;
          uStack_e0 = 0;
          local_f0 = 0x3ff0000000000000;
          local_d8 = 0x3ff0000000000000;
          local_d0 = 0;
          uStack_c8 = 0;
          (extension_in_CoreGraphics):__C.CGMutablePathRef.move(to:___C.CGPoint,transform:___C.CGAffineTransform)_->_()
          ::_move((CGPoint)&local_f0,(CGAffineTransform)control1.unknown);
        }
        else if (IVar6 == 1) {
          if (*(long *)(_Var3.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x32130);
            (*pcVar1)();
          }
          local_b8 = 0;
          uStack_b0 = 0;
          local_c0 = 0x3ff0000000000000;
          local_a8 = 0x3ff0000000000000;
          local_a0 = 0;
          uStack_98 = 0;
          (extension_in_CoreGraphics):__C.CGMutablePathRef.addLine(to:___C.CGPoint,transform:___C.CGAffineTransform)_->_()
          ::_addLine((CGPoint)&local_c0,(CGAffineTransform)control1.unknown);
        }
      }
      else if (IVar6 == 2) {
        if (*(ulong *)(_Var3.unknown + 0x10) < 3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x3212c);
          (*pcVar1)();
        }
        local_88 = 0;
        uStack_80 = 0;
        local_90 = 0x3ff0000000000000;
        local_78 = 0x3ff0000000000000;
        local_70 = 0;
        uStack_68 = 0;
        (extension_in_CoreGraphics):__C.CGMutablePathRef.addCurve(to:___C.CGPoint,control1:___C.CGPoint,control2:___C.CGPoint,transform:___C.CGAffineTransform)_->_()
        ::_addCurve((CGPoint)&local_90,control1,control2,transform);
      }
      else if (IVar6 == 3) {
        _CGPathCloseSubpath(param_1);
      }
      puVar8 = puVar8 + 1;
      _Var7.unknown = _Var3.unknown;
    } while (puVar4 != puVar8);
  }
  _swift_bridgeObjectRelease(_Var3.unknown);
  return param_1;
}


// ===== (extension_MDTextKitUI)::Swift::String::character @ 00034f34 =====

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00034f7c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* (extension in MDTextKitUI):Swift.String.character(utf16Offset: Swift.Int) -> Swift.Character */

Character (extension_MDTextKitUI)::Swift::String::character(__int64 utf16Offset)

{
  Index IVar1;
  char *in_x1;
  void *in_x2;
  Character CVar2;
  String SVar3;
  undefined1 local_40 [16];
  
  FUN_000083c0();
  _swift_bridgeObjectRetain();
  IVar1 = ::Swift::String::Index::_init
                    (utf16Offset,local_40,PTR___type_metadata_for_Swift_String_0020df20,utf16Offset)
  ;
  SVar3.bridgeObject = in_x2;
  SVar3.str = in_x1;
  CVar2 = ::Swift::String::get_subscript(IVar1,SVar3);
  return CVar2;
}


// ===== (extension_MDTextKitUI)::__C::NSScrollView::scrollRectToVisible @ 0005d7f8 =====

/* (extension in MDTextKitUI):__C.NSScrollView.scrollRectToVisible(_: __C.CGRect, animated:
   Swift.Bool) -> () */

void (extension_MDTextKitUI)::__C::NSScrollView::scrollRectToVisible(CGRect param_1,bool animated)

{
  ID unaff_x20;
  
  objc_stub::scrollRectToVisible_animated_completionHandler_
            (unaff_x20,(ulong)((uint)param_1.unknown & 1),0);
  return;
}


// ===== (extension_MDTextKitUI)::__C::NSColor::brighten @ 0007b428 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.NSColor.brighten(by: CoreGraphics.CGFloat) -> __C.NSColor */

NSColor * (extension_MDTextKitUI)::__C::NSColor::brighten(CGFloat by)

{
  NSColor *pNVar1;
  ID unaff_x20;
  double in_d0;
  double dVar2;
  double dVar3;
  undefined8 local_58;
  double dStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_0020d738;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  dStack_50 = 0.0;
  objc_stub::getHue_saturation_brightness_alpha_
            (unaff_x20,&uStack_40,&local_48,&dStack_50,&local_58);
  dVar2 = (in_d0 + 1.0) * dStack_50;
  dVar3 = 1.0;
  if (dVar2 <= 1.0) {
    dVar3 = dVar2;
  }
  pNVar1 = (NSColor *)
           ::NSColor::colorWithHue_saturation_brightness_alpha_
                     ((ID)&_OBJC_CLASS___NSColor,uStack_40,local_48,dVar3,local_58);
  if (*(long *)PTR____stack_chk_guard_0020d738 == local_38) {
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== (extension_MDTextKitUI)::Swift::String::isURL @ 0007cedc =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):Swift.String.isURL() -> Swift.Bool */

bool (extension_MDTextKitUI)::Swift::String::isURL(void)

{
  bool bVar1;
  UTF16View in_x0;
  undefined *self;
  ID IVar2;
  __int64 _Var3;
  NSString *pNVar4;
  undefined8 uVar5;
  long extraout_x1;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_0020d738;
  self = &_OBJC_CLASS___NSDataDetector;
  _objc_allocWithZone();
  local_50 = 0;
  IVar2 = objc_stub::initWithTypes_error_((ID)self,0x20,&local_50);
  if (IVar2 == 0) {
    uVar5 = local_50;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar5);
  }
  else {
    _Var3 = ::Swift::String::UTF16View::get_count(in_x0);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar2 = objc_stub::firstMatchInString_options_range_(IVar2,pNVar4,0,0,_Var3);
    if ((IVar2 != 0) && (IVar2 = objc_stub::range(IVar2), IVar2 == 0 && extraout_x1 == _Var3)) {
      bVar1 = true;
      goto LAB_0007cffc;
    }
  }
  bVar1 = false;
LAB_0007cffc:
  if (*(long *)PTR____stack_chk_guard_0020d738 == local_48) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== (extension_MDTextKitUI)::__C::NSColor::isLightColor @ 00085600 =====

/* (extension in MDTextKitUI):__C.NSColor.isLightColor() -> Swift.Bool */

bool (extension_MDTextKitUI)::__C::NSColor::isLightColor(void)

{
  ID unaff_x20;
  undefined8 local_38;
  double local_30;
  double local_28;
  double local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_0020d738;
  local_20 = 0.0;
  local_30 = 0.0;
  local_28 = 0.0;
  local_38 = 0;
  objc_stub::getRed_green_blue_alpha_(unaff_x20,&local_20,&local_28,&local_30,&local_38);
  if (*(long *)PTR____stack_chk_guard_0020d738 == local_18) {
    return 1.0 - (local_20 * 0.299 + local_28 * 0.587 + local_30 * 0.114) < 0.5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// ===== (extension_MDTextKitUI)::__C::NSMenu::$findMenuItem @ 000aad20 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.NSMenu.findMenuItem(with: ObjectiveC.Selector) -> __C.NSMenuItem?
    */

ID (extension_MDTextKitUI)::__C::NSMenu::_findMenuItem(Selector with)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ID IVar4;
  undefined *puVar5;
  ulong self;
  ID unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  IVar4 = objc_stub::indexOfItemWithTarget_andAction_(unaff_x20,0,with.unknown);
  if (((long)IVar4 < 0) || (IVar4 = objc_stub::itemAtIndex_(unaff_x20,IVar4), IVar4 == 0)) {
    puVar5 = (undefined *)objc_stub::itemArray(unaff_x20);
    FUN_000aaeac(0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)puVar5 >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        _Var2.unknown = puVar5;
      }
      lVar6 = ::Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar6 != 0) {
      lVar8 = 4;
      do {
        uVar7 = lVar8 - 4;
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xaae68);
            (*pcVar3)();
          }
          self = *(ulong *)(puVar5 + lVar8 * 8);
        }
        else {
          self = uVar7;
          FUN_0000fd1c(uVar7,puVar5);
        }
        lVar1 = lVar8 + -3;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xaae64);
          (*pcVar3)();
        }
        IVar4 = objc_stub::submenu(self);
        if ((IVar4 != 0) && (IVar4 = objc_stub::findMenuItemWith_(IVar4,with.unknown), IVar4 != 0))
        {
          _swift_bridgeObjectRelease(puVar5);
          return IVar4;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar6);
    }
    _swift_bridgeObjectRelease(puVar5);
    IVar4 = 0;
  }
  return IVar4;
}


// ===== (extension_MDTextKitUI)::__C::NSMenu::insertItems @ 000aaf2c =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.NSMenu.insertItems(_: [__C.NSMenuItem], afterSelector:
   ObjectiveC.Selector, offset: Swift.Int) -> () */

void (extension_MDTextKitUI)::__C::NSMenu::insertItems
               (undefined *param_1,Selector param_2,undefined *param_3)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  Selector SVar5;
  ulong uVar6;
  Selector SVar7;
  ID unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  SVar7.unknown = param_3;
  puVar4 = (undefined *)objc_stub::itemArray(unaff_x20);
  FUN_000aaeac(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar4 >> 0x3e == 0) {
    uVar10 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    uVar10 = ::Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar10 != 0) {
    uVar9 = 0;
    while( true ) {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xab100);
          (*pcVar2)();
        }
        uVar11 = *(ulong *)(puVar4 + uVar9 * 8 + 0x20);
      }
      else {
        uVar11 = uVar9;
        FUN_0000fd1c(uVar9,puVar4);
      }
      if (uVar9 == 0x7fffffffffffffff) break;
      SVar5.unknown = (undefined *)objc_stub::action(uVar11);
      if (((SVar5.unknown != (undefined *)0x0) &&
          (bVar3 = ObjectiveC::Selector::___infix(SVar5,param_2,SVar7), uVar11 = uVar9, bVar3)) ||
         (uVar9 = uVar9 + 1, uVar11 = uVar10 - 1, uVar10 == uVar9)) {
        _swift_bridgeObjectRelease(puVar4);
        if (uVar11 != 0xffffffffffffffff) {
          if ((ulong)param_1 >> 0x3e == 0) {
            uVar10 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < param_1) {
              _Var1.unknown = param_1;
            }
            uVar10 = ::Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          }
          if (uVar10 != 0) {
            if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0xab15c);
              (*pcVar2)();
            }
            uVar9 = 0;
            uVar8 = uVar11 ^ 0x7fffffffffffffff;
            do {
              uVar11 = uVar11 + 1;
              if (((ulong)param_1 & 0xc000000000000001) == 0) {
                uVar6 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
              }
              else {
                uVar6 = uVar9;
                FUN_0000fd1c(uVar9,param_1);
              }
              if (uVar8 == uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0xab0f8);
                (*pcVar2)();
              }
              if (SCARRY8(uVar11,(long)param_3)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0xab0fc);
                (*pcVar2)();
              }
              uVar9 = uVar9 + 1;
              objc_stub::insertItem_atIndex_(unaff_x20,uVar6,param_3 + uVar11);
            } while (uVar10 != uVar9);
          }
        }
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xab0f4);
    (*pcVar2)();
  }
  _swift_bridgeObjectRelease(puVar4);
  return;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::styleObject @ 000af978 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000afd24) */
/* WARNING: Removing unreachable block (ram,0x000afd28) */
/* WARNING: Removing unreachable block (ram,0x000afb00) */
/* WARNING: Removing unreachable block (ram,0x000afb0c) */
/* WARNING: Removing unreachable block (ram,0x000afb14) */
/* WARNING: Removing unreachable block (ram,0x000b0114) */
/* WARNING: Removing unreachable block (ram,0x000afb1c) */
/* WARNING: Removing unreachable block (ram,0x000afa90) */
/* WARNING: Removing unreachable block (ram,0x000afa94) */
/* WARNING: Removing unreachable block (ram,0x000af9ec) */
/* WARNING: Removing unreachable block (ram,0x000af9f8) */
/* WARNING: Removing unreachable block (ram,0x000afa00) */
/* WARNING: Removing unreachable block (ram,0x000b0110) */
/* WARNING: Removing unreachable block (ram,0x000afa08) */
/* WARNING: Removing unreachable block (ram,0x000afa34) */
/* WARNING: Removing unreachable block (ram,0x000afa58) */
/* WARNING: Removing unreachable block (ram,0x000afa6c) */
/* WARNING: Removing unreachable block (ram,0x000afa1c) */
/* WARNING: Removing unreachable block (ram,0x000afa30) */
/* WARNING: Removing unreachable block (ram,0x000afa48) */
/* WARNING: Removing unreachable block (ram,0x000afaa4) */
/* WARNING: Removing unreachable block (ram,0x000b0120) */
/* WARNING: Removing unreachable block (ram,0x000afac0) */
/* WARNING: Removing unreachable block (ram,0x000b0124) */
/* WARNING: Removing unreachable block (ram,0x000afbcc) */
/* WARNING: Removing unreachable block (ram,0x000afbe8) */
/* WARNING: Removing unreachable block (ram,0x000afd04) */
/* WARNING: Removing unreachable block (ram,0x000afb60) */
/* WARNING: Removing unreachable block (ram,0x000afd20) */
/* WARNING: Removing unreachable block (ram,0x000afb68) */
/* WARNING: Removing unreachable block (ram,0x000afbc8) */
/* WARNING: Removing unreachable block (ram,0x000afbdc) */
/* WARNING: Removing unreachable block (ram,0x000afd38) */
/* WARNING: Removing unreachable block (ram,0x000b0128) */
/* WARNING: Removing unreachable block (ram,0x000afd6c) */
/* WARNING: Removing unreachable block (ram,0x000b012c) */
/* WARNING: Removing unreachable block (ram,0x000afe14) */
/* WARNING: Removing unreachable block (ram,0x000b0130) */
/* WARNING: Removing unreachable block (ram,0x000afe88) */
/* WARNING: Removing unreachable block (ram,0x000b0134) */
/* WARNING: Removing unreachable block (ram,0x000aff08) */
/* WARNING: Removing unreachable block (ram,0x000b0138) */
/* WARNING: Removing unreachable block (ram,0x000aff54) */
/* WARNING: Removing unreachable block (ram,0x000b013c) */
/* WARNING: Removing unreachable block (ram,0x000affa8) */
/* WARNING: Removing unreachable block (ram,0x000b0140) */
/* WARNING: Removing unreachable block (ram,0x000b0018) */
/* WARNING: Removing unreachable block (ram,0x000b0088) */
/* WARNING: Removing unreachable block (ram,0x000b0144) */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.styleObject(with: __C.SFThemeManager)
   -> () */

void (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::styleObject(SFThemeManager *with)

{
  code *pcVar1;
  NSArray *pNVar2;
  ID unaff_x20;
  
  pNVar2 = (NSArray *)objc_stub::textStylers(unaff_x20);
  if (pNVar2 != (NSArray *)0x0) {
    ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_00236678,&DAT_001c4c80);
    (extension_Foundation)::Swift::Array<undefined>::__forceBridgeFromObjectiveC(pNVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb0120);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb011c);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::baseFontSizeForThemeManager @ 000b4218 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.baseFontSizeForThemeManager(__C.SFThemeManager) ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::baseFontSizeForThemeManager
                  (SFThemeManager *param_1)

{
  NSString *pNVar1;
  ID self;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::numberForKey_((ID)param_1,pNVar1);
  if (self != 0) {
    objc_stub::floatValue(self);
  }
  return (CGFloat)(undefined *)0x0;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::baseFontForThemeManager @ 000b4368 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.baseFontForThemeManager(__C.SFThemeManager) ->
   __C.NSFont */

NSFont * (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::baseFontForThemeManager
                   (SFThemeManager *param_1)

{
  code *pcVar1;
  NSString *pNVar2;
  NSFont *pNVar3;
  ID unaff_x20;
  
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::baseFontSizeForThemeManager_(unaff_x20,param_1);
  pNVar3 = (NSFont *)objc_stub::fontForKey_size_((ID)param_1,pNVar2);
  if (pNVar3 != (NSFont *)0x0) {
    return pNVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb43e4);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::codeFontSizeMultiplierForThemeManager @ 000b4488 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.codeFontSizeMultiplierForThemeManager(__C.SFThemeManager)
   -> CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::
        codeFontSizeMultiplierForThemeManager(SFThemeManager *param_1)

{
  code *pcVar1;
  ID self;
  NSString *pNVar2;
  ID self_00;
  ID unaff_x20;
  
  self = objc_stub::baseFontForThemeManager_(unaff_x20,param_1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::pointSize(self);
  self_00 = objc_stub::fontForKey_size_((ID)param_1,pNVar2);
  if (self_00 == 0) {
    objc_stub::pointSize(self);
    self_00 = NSFont::monospacedSystemFontOfSize_weight_((ID)&_OBJC_CLASS___NSFont);
    objc_stub::xHeight(self);
    if (self_00 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb45bc);
      (*pcVar1)();
    }
  }
  else {
    objc_stub::xHeight(self);
  }
  NSFont::xHeight(self_00);
  objc_stub::capHeight(self);
  NSFont::capHeight(self_00);
  return (CGFloat)(undefined *)0x0;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::codeFontForThemeManager @ 000b4620 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.codeFontForThemeManager(__C.SFThemeManager) ->
   __C.NSFont */

NSFont * (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::codeFontForThemeManager
                   (SFThemeManager *param_1)

{
  code *pcVar1;
  NSString *pNVar2;
  NSFont *pNVar3;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::baseFontSizeForThemeManager_(unaff_x20,param_1);
  objc_stub::codeFontSizeMultiplierForThemeManager_(unaff_x20,param_1);
  pNVar3 = (NSFont *)objc_stub::fontForKey_size_((ID)param_1,extraout_d0 * extraout_d0_00,pNVar2);
  if (pNVar3 != (NSFont *)0x0) {
    return pNVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb46b8);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::pointSizeForFontSize @ 000b4778 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.pointSizeForFontSize(CoreGraphics.CGFloat) ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::pointSizeForFontSize
                  (CGFloat param_1)

{
  CGFloat CVar1;
  
  CVar1.unknown = (undefined *)NSFont::basePointSizeForFontSize_(&_OBJC_CLASS___NSFont);
  return (CGFloat)CVar1.unknown;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::tabSizeForFontSize @ 000b47d0 =====

/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.tabSizeForFontSize(CoreGraphics.CGFloat) ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::tabSizeForFontSize
                  (CGFloat param_1)

{
  return (CGFloat)param_1.unknown;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::baseParagraphStyleForThemeManager @ 000b4808 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.baseParagraphStyleForThemeManager(__C.SFThemeManager)
   -> __C.NSParagraphStyle */

NSParagraphStyle *
(extension_MDTextKitUI)::__C::MDAttributedStringRenderer::baseParagraphStyleForThemeManager
          (SFThemeManager *param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  NSString *pNVar6;
  undefined *self;
  NSDictionary *pNVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  NSArray *pNVar11;
  ulong uVar12;
  ulong uVar13;
  ID unaff_x20;
  float extraout_s0;
  float extraout_s0_00;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar14;
  double dVar15;
  NSParagraphStyle *local_b8;
  undefined1 auStack_b0 [32];
  
  IVar4 = 0;
  FUN_00006084(0,&DAT_002345c0,&PTR__OBJC_CLASS___NSMutableParagraphStyle_00221180);
  IVar5 = IVar4;
  _swift_getObjCClassFromMetadata();
  IVar5 = objc_stub::defaultParagraphStyle(IVar5);
  IVar5 = objc_stub::mutableCopy(IVar5);
  ::Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(IVar5);
  _swift_dynamicCast(&local_b8,auStack_b0,PTR___type_metadata_for_Any_0020e318 + 8,IVar4,7);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::numberForKey_((ID)param_1,pNVar6);
  dVar15 = 0.0;
  dVar14 = 0.0;
  if (IVar5 != 0) {
    objc_stub::floatValue(IVar5);
    dVar14 = (double)extraout_s0;
  }
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::numberForKey_((ID)param_1,pNVar6);
  if (IVar5 != 0) {
    objc_stub::floatValue(IVar5);
    dVar15 = (double)extraout_s0_00;
  }
  IVar5 = objc_stub::baseFontForThemeManager_(unaff_x20,param_1);
  objc_stub::defaultParagraphIndent(unaff_x20);
  objc_stub::pointSize(IVar5);
  objc_stub::tabSizeForFontSize_(unaff_x20);
  puVar3 = PTR___swiftEmptyArrayStorage_0020e328;
  uVar13 = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_0020e328;
  do {
    puVar9 = puVar3;
    FUN_00026840(puVar3);
    self = &_OBJC_CLASS___NSTextTab;
    _objc_allocWithZone();
    FUN_00005ab4(0);
    FUN_00005b98(&DAT_00233fb0,FUN_00005ab4,&TargetProtocolConformanceDescriptor_001c2350);
    pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar9);
    IVar4 = objc_stub::initWithTextAlignment_location_options_
                      ((ID)self,extraout_d0 + extraout_d0_00 * (double)uVar13,4,pNVar7);
    puVar9 = puVar10;
    _swift_isUniquelyReferenced_nonNull_bridgeObject();
    if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
       (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar10 >> 0x3e == 0) {
        lVar8 = *(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          _Var1.unknown = puVar10;
        }
        lVar8 = ::Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      puVar9 = (undefined *)0x0;
      FUN_000114c4(0,lVar8 + 1,1,puVar10);
    }
    uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar12 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_000114c4(puVar10,uVar2 + 1,1,puVar9);
      uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
    *(ID *)(uVar12 + uVar2 * 8 + 0x20) = IVar4;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x13);
  objc_stub::setCenteredLineHeightMultiplier_forFont_((ID)local_b8,dVar14,IVar5);
  FUN_00006084(0,&DAT_00234760,&PTR__OBJC_CLASS___NSTextTab_00221228);
  pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::setTabStops_((ID)local_b8,pNVar11);
  objc_stub::setDefaultTabInterval_((ID)local_b8,extraout_d0_00);
  objc_stub::setHeadIndent_((ID)local_b8,extraout_d0);
  objc_stub::setFirstLineHeadIndent_((ID)local_b8,extraout_d0);
  objc_stub::setTailIndent_((ID)local_b8,-extraout_d0);
  objc_stub::pointSize(IVar5);
  objc_stub::setParagraphSpacing_((ID)local_b8,dVar15 * extraout_d0_01);
  _swift_bridgeObjectRelease(puVar10);
  return local_b8;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::lineWidthForForThemeManager @ 000b4c40 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.lineWidthForForThemeManager(__C.SFThemeManager) ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::lineWidthForForThemeManager
                  (SFThemeManager *param_1)

{
  NSString *pNVar1;
  ID self;
  ID unaff_x20;
  
  objc_stub::baseFontSizeForThemeManager_(unaff_x20,param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::numberForKey_((ID)param_1,pNVar1);
  if (self != 0) {
    objc_stub::floatValue(self);
  }
  return (CGFloat)(undefined *)0x0;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::columnSizeForFontSize @ 000b4dbc =====

/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.columnSizeForFontSize(CoreGraphics.CGFloat) ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::columnSizeForFontSize
                  (CGFloat param_1)

{
  CGFloat CVar1;
  ID unaff_x20;
  
  CVar1.unknown = (undefined *)objc_stub::tabSizeForFontSize_(unaff_x20);
  return (CGFloat)CVar1.unknown;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::gutterSizeForFontSize @ 000b4e20 =====

/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.gutterSizeForFontSize(CoreGraphics.CGFloat) ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::gutterSizeForFontSize
                  (CGFloat param_1)

{
  CGFloat CVar1;
  ID unaff_x20;
  
  CVar1.unknown = (undefined *)objc_stub::tabSizeForFontSize_(unaff_x20);
  return (CGFloat)CVar1.unknown;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::setPreferredTypingAlignment @ 000b4e84 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.setPreferredTypingAlignment(__C.NSTextAlignment) ->
   () */

undefined8
(extension_MDTextKitUI)::__C::MDAttributedStringRenderer::setPreferredTypingAlignment
          (NSTextAlignment param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  Dictionary<undefined,undefined> DVar4;
  long lVar5;
  undefined8 uVar6;
  ID *pIVar7;
  ID IVar8;
  ID unaff_x20;
  ID local_68 [5];
  
  objc_stub::defaultTextAttributes(unaff_x20);
  uVar3 = 0;
  FUN_00005af0();
  FUN_00005b98(&DAT_00233fd0,FUN_00005af0,&TargetProtocolConformanceDescriptor_001c2394);
  puVar1 = PTR___type_metadata_for_Any_0020e318;
  DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar4.unknown + 0x10) != 0) {
    lVar5 = *(long *)PTR__NSParagraphStyleAttributeName_0020d890;
    thunk_FUN_0002152c(lVar5);
    if ((uVar3 & 1) != 0) {
      FUN_00005f48(*(long *)(DVar4.unknown + 0x38) + lVar5 * 0x20,local_68 + 1);
      _swift_bridgeObjectRelease(DVar4.unknown);
      if (local_68[4] != 0) {
        uVar6 = 0;
        FUN_00006084(0,&DAT_00235ef0,&PTR__OBJC_CLASS___NSParagraphStyle_00221418);
        pIVar7 = local_68;
        _swift_dynamicCast(pIVar7,local_68 + 1,puVar1 + 8,uVar6,6);
        if (((ulong)pIVar7 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xb506c);
          (*pcVar2)();
        }
        IVar8 = objc_stub::mutableCopy(local_68[0]);
        ::Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar8);
        uVar6 = 0;
        FUN_00006084(0,&DAT_002345c0,&PTR__OBJC_CLASS___NSMutableParagraphStyle_00221180);
        _swift_dynamicCast(local_68,local_68 + 1,puVar1 + 8,uVar6,7);
        objc_stub::setAlignment_(local_68[0],param_1.unknown);
        objc_stub::setBaseWritingDirection_
                  (local_68[0],(ulong)(param_1.unknown != (undefined *)0x0));
        IVar8 = objc_stub::bidiStyler(unaff_x20);
        if (IVar8 != 0) {
          objc_stub::setPreferredParagraphStyle_(IVar8,local_68[0]);
          return 0;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb5070);
        (*pcVar2)();
      }
      goto LAB_000b504c;
    }
  }
  local_68[2] = 0;
  local_68[1] = 0;
  local_68[4] = 0;
  local_68[3] = 0;
  _swift_bridgeObjectRelease(DVar4.unknown);
LAB_000b504c:
  FUN_00027650(local_68 + 1,&DAT_002341f0,&DAT_001c3340);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xb5068);
  (*pcVar2)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::setBodyParagraphIndent @ 000b50a0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000b5130 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* (extension in
   MDTextKitUI):__C.MDAttributedStringRenderer.setBodyParagraphIndent(CoreGraphics.CGFloat) -> () */

void (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::setBodyParagraphIndent
               (CGFloat param_1)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Dictionary<undefined,undefined> DVar5;
  undefined1 *puVar6;
  ID *pIVar7;
  undefined *puVar8;
  ID self;
  ID self_00;
  undefined *puVar9;
  ID unaff_x20;
  double in_d0;
  ID local_a0;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [32];
  
  IVar2 = objc_stub::bodyStyler(unaff_x20);
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5460);
    (*pcVar1)();
  }
  local_a0 = *(ID *)PTR__NSParagraphStyleAttributeName_0020d890;
  uVar3 = 0;
  FUN_00005af0(0);
  puVar4 = &DAT_00233fd0;
  FUN_00005b98(&DAT_00233fd0,FUN_00005af0,&TargetProtocolConformanceDescriptor_001c2394);
  ::Swift::AnyHashable::_init(auStack_98,puVar4,uVar3,puVar4);
  IVar2 = objc_stub::bodyTextAttributes(IVar2);
  puVar8 = PTR___type_metadata_for_Any_0020e318;
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5464);
    (*pcVar1)();
  }
  puVar9 = PTR___type_metadata_for_Swift_AnyHashable_0020e088;
  DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar5.unknown + 0x10) != 0) {
    puVar6 = auStack_98;
    FUN_000215b8(puVar6);
    if (((ulong)puVar9 & 1) != 0) {
      FUN_00005f48(*(long *)(DVar5.unknown + 0x38) + (long)puVar6 * 0x20,auStack_70);
      FUN_00026f40(auStack_98);
      _swift_bridgeObjectRelease(DVar5.unknown);
      uVar3 = 0;
      FUN_00006084(0,&DAT_002345c0,&PTR__OBJC_CLASS___NSMutableParagraphStyle_00221180);
      pIVar7 = &local_a0;
      _swift_dynamicCast(pIVar7,auStack_70,puVar8 + 8,uVar3,6);
      IVar2 = local_a0;
      if (((ulong)pIVar7 & 1) != 0) {
        objc_stub::setHeadIndent_(local_a0);
        objc_stub::setFirstLineHeadIndent_(IVar2);
        objc_stub::setTailIndent_(IVar2,-in_d0);
      }
      goto LAB_000b5230;
    }
  }
  _swift_bridgeObjectRelease(DVar5.unknown);
  FUN_00026f40(auStack_98);
LAB_000b5230:
  IVar2 = objc_stub::bidiStyler(unaff_x20);
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5468);
    (*pcVar1)();
  }
  objc_stub::setParagraphIndent_(IVar2);
  puVar8 = &DAT_00236680;
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_00236680,&DAT_001c4c88);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 6;
  *(undefined8 *)(puVar8 + 0x10) = 3;
  IVar2 = objc_stub::bidiStyler(unaff_x20);
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb546c);
    (*pcVar1)();
  }
  IVar2 = objc_stub::ltrParagraphStyle(IVar2);
  *(ID *)(puVar8 + 0x20) = IVar2;
  IVar2 = objc_stub::bidiStyler(unaff_x20);
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5470);
    (*pcVar1)();
  }
  self = objc_stub::rtlParagraphStyle(IVar2);
  *(ID *)(puVar8 + 0x28) = self;
  IVar2 = objc_stub::bidiStyler(unaff_x20);
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5474);
    (*pcVar1)();
  }
  self_00 = objc_stub::preferredParagraphStyle(IVar2);
  *(ID *)(puVar8 + 0x30) = self_00;
  IVar2 = *(ID *)(puVar8 + 0x20);
  if ((IVar2 != 0) &&
     (_swift_dynamicCastObjCClass(IVar2,&_OBJC_CLASS___NSMutableParagraphStyle), IVar2 != 0)) {
    objc_stub::setHeadIndent_(IVar2);
    objc_stub::setFirstLineHeadIndent_(IVar2);
    objc_stub::setTailIndent_(IVar2,-in_d0);
  }
  if ((self != 0) &&
     (_swift_dynamicCastObjCClass(self,&_OBJC_CLASS___NSMutableParagraphStyle), self != 0)) {
    objc_stub::setHeadIndent_(self);
    objc_stub::setFirstLineHeadIndent_(self);
    objc_stub::setTailIndent_(self,-in_d0);
  }
  if ((self_00 != 0) &&
     (_swift_dynamicCastObjCClass(self_00,&_OBJC_CLASS___NSMutableParagraphStyle), self_00 != 0)) {
    objc_stub::setHeadIndent_(self_00);
    objc_stub::setFirstLineHeadIndent_(self_00);
    objc_stub::setTailIndent_(self_00,-in_d0);
  }
  _swift_release(puVar8);
  return;
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::$defaultTextAttributes @ 000b54ac =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.defaultTextAttributes() ->
   [__C.NSAttributedStringKey : Any] */

Dictionary<NSAttributedStringKey,(extension_in_MDTextKitUI):__C_MDAttributedStringRenderer_defaultTextAttributes()__>____C_NSAttributedStringKey___Any_>
 (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::_defaultTextAttributes(void)

{
  code *pcVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  Dictionary<undefined,undefined> DVar4;
  ID unaff_x20;
  
  IVar2 = objc_stub::bodyStyler(unaff_x20);
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5544);
    (*pcVar1)();
  }
  IVar2 = objc_stub::bodyTextAttributes(IVar2);
  if (IVar2 != 0) {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar4 = DVar3;
    FUN_000b5548();
    _swift_bridgeObjectRelease(DVar3.unknown);
    return (Dictionary<NSAttributedStringKey,(extension_in_MDTextKitUI):__C_MDAttributedStringRenderer_defaultTextAttributes()__>____C_NSAttributedStringKey___Any_>
            )DVar4.unknown;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5548);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultFontSize @ 000b5908 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.defaultFontSize() ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultFontSize(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  
  self = objc_stub::bodyStyler(unaff_x20);
  if (self != 0) {
    objc_stub::baseFontSize(self);
    return (CGFloat)(undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5958);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultLineSpacing @ 000b59b4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000b5a38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.defaultLineSpacing() ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultLineSpacing(void)

{
  undefined *puVar1;
  code *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Dictionary<undefined,undefined> DVar6;
  undefined1 *puVar7;
  ID *pIVar8;
  undefined *puVar9;
  ID unaff_x20;
  ID local_90;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [32];
  
  pIVar8 = &local_90;
  IVar3 = objc_stub::bodyStyler(unaff_x20);
  if (IVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb5b44);
    (*pcVar2)();
  }
  local_90 = *(ID *)PTR__NSParagraphStyleAttributeName_0020d890;
  uVar4 = 0;
  FUN_00005af0(0);
  puVar5 = &DAT_00233fd0;
  FUN_00005b98(&DAT_00233fd0,FUN_00005af0,&TargetProtocolConformanceDescriptor_001c2394);
  ::Swift::AnyHashable::_init(auStack_88,puVar5,uVar4,puVar5);
  IVar3 = objc_stub::bodyTextAttributes(IVar3);
  puVar1 = PTR___type_metadata_for_Any_0020e318;
  if (IVar3 != 0) {
    puVar9 = PTR___type_metadata_for_Swift_AnyHashable_0020e088;
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar6.unknown + 0x10) != 0) {
      puVar7 = auStack_88;
      FUN_000215b8(puVar7);
      if (((ulong)puVar9 & 1) != 0) {
        FUN_00005f48(*(long *)(DVar6.unknown + 0x38) + (long)puVar7 * 0x20,auStack_60);
        FUN_00026f40(auStack_88);
        _swift_bridgeObjectRelease(DVar6.unknown);
        uVar4 = 0;
        FUN_00006084(0,&DAT_00235ef0,&PTR__OBJC_CLASS___NSParagraphStyle_00221418);
        _swift_dynamicCast(&local_90,auStack_60,puVar1 + 8,uVar4,6);
        if (((ulong)pIVar8 & 1) == 0) {
          return (CGFloat)(undefined *)pIVar8;
        }
        objc_stub::lineSpacing(local_90);
        return (CGFloat)(undefined *)0x0;
      }
    }
    _swift_bridgeObjectRelease(DVar6.unknown);
    puVar7 = auStack_88;
    FUN_00026f40();
    return (CGFloat)puVar7;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xb5b48);
  (*pcVar2)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultParagraphIndent @ 000b5b84 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.defaultParagraphIndent() ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultParagraphIndent(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  
  self = objc_stub::bodyStyler(unaff_x20);
  if (self != 0) {
    objc_stub::defaultParagraphIndent(self);
    return (CGFloat)(undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5bd4);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::tabSize @ 000b5c30 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.tabSize() -> CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::tabSize(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  
  self = objc_stub::bodyStyler(unaff_x20);
  if (self != 0) {
    objc_stub::baseTabSize(self);
    return (CGFloat)(undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5c80);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultPointsize @ 000b5cdc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.defaultPointsize() ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::defaultPointsize(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  
  self = objc_stub::bodyStyler(unaff_x20);
  if (self != 0) {
    objc_stub::basePointSize(self);
    return (CGFloat)(undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5d2c);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::columnSize @ 000b5d88 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.columnSize() -> CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::columnSize(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  
  self = objc_stub::bodyStyler(unaff_x20);
  if (self != 0) {
    objc_stub::columnSize(self);
    return (CGFloat)(undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5dd8);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::gutterSize @ 000b5e34 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.gutterSize() -> CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::gutterSize(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  
  self = objc_stub::bodyStyler(unaff_x20);
  if (self != 0) {
    objc_stub::gutterSize(self);
    return (CGFloat)(undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5e84);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::textContainerMaxWidth @ 000b5ee0 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.textContainerMaxWidth() ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::textContainerMaxWidth(void)

{
  code *pcVar1;
  ID self;
  ID unaff_x20;
  
  self = objc_stub::bodyStyler(unaff_x20);
  if (self != 0) {
    objc_stub::maxTextContainerWidth(self);
    return (CGFloat)(undefined *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5f30);
  (*pcVar1)();
}


// ===== (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::textContainerMinInset @ 000b5f8c =====

/* (extension in MDTextKitUI):__C.MDAttributedStringRenderer.textContainerMinInset() ->
   CoreGraphics.CGFloat */

CGFloat (extension_MDTextKitUI)::__C::MDAttributedStringRenderer::textContainerMinInset(void)

{
  CGFloat in_x0;
  
  return (CGFloat)in_x0.unknown;
}


// ===== (extension_MDTextKitUI)::__C::MDEditorController::$styleTextView @ 000c04dc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.MDEditorController.styleTextView(_: MDTextKitUI.MDTextView, with:
   __C.SFThemeManager) -> __C.NSError? */

ID (extension_MDTextKitUI)::__C::MDEditorController::_styleTextView
             (MDTextView *param_1,SFThemeManager *with)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  MDTextView *pMVar6;
  Dictionary<undefined,undefined> DVar7;
  undefined8 uVar8;
  NSDictionary *pNVar9;
  NSString *pNVar10;
  ID IVar11;
  MDTextFocusManager *pMVar12;
  MDTextHighlightManager *pMVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ID IVar17;
  Dictionary<undefined,undefined> DVar18;
  undefined8 extraout_x1;
  ID unaff_x20;
  undefined8 uVar19;
  undefined1 auStack_128 [32];
  ID local_108 [3];
  undefined8 local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [32];
  
  IVar3 = objc_stub::textStorage((ID)param_1);
  IVar4 = 0;
  if (IVar3 != 0) {
    _swift_dynamicCastObjCClass(IVar3,&_OBJC_CLASS___MDTextStorage);
    if (IVar3 == 0) {
      IVar4 = 0;
    }
    else {
      IVar4 = objc_stub::restyleTimer(unaff_x20);
      if (IVar4 != 0) {
        IVar4 = objc_stub::restyleTimer(unaff_x20);
        if (IVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xc0e34);
          (*pcVar2)();
        }
        objc_stub::fire(IVar4);
        objc_stub::setRestyleTimer_(unaff_x20,0);
      }
      IVar4 = objc_stub::attributedStringRenderer(unaff_x20);
      if (IVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xc0e24);
        (*pcVar2)();
      }
      objc_stub::styleObjectWith_(IVar4,with);
      IVar4 = objc_stub::textContainer((ID)param_1);
      if ((IVar4 != 0) &&
         (_swift_dynamicCastObjCClass(IVar4,&_OBJC_CLASS___MDTextContainer), IVar4 != 0)) {
        IVar5 = objc_stub::attributedStringRenderer(unaff_x20);
        if (IVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xc0e38);
          (*pcVar2)();
        }
        objc_stub::styleWithRenderer_themeManager_(IVar4,IVar5,with);
      }
      IVar4 = objc_stub::layoutManager((ID)param_1);
      if ((IVar4 != 0) &&
         (_swift_dynamicCastObjCClass(IVar4,&_OBJC_CLASS___MDLayoutManager), IVar4 != 0)) {
        IVar5 = objc_stub::attributedStringRenderer(unaff_x20);
        if (IVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xc0e3c);
          (*pcVar2)();
        }
        objc_stub::styleWithRenderer_themeManager_(IVar4,IVar5,with);
      }
      IVar4 = objc_stub::styleTextStorage_with_(unaff_x20,IVar3,with);
      IVar5 = objc_stub::window((ID)param_1);
      if ((((IVar5 != 0) &&
           (pMVar6 = (MDTextView *)objc_stub::firstResponder(IVar5), pMVar6 != (MDTextView *)0x0))
          && (pMVar6 == param_1)) &&
         (IVar5 = objc_stub::autoHideMarkdown(unaff_x20), (int)IVar5 != 0)) {
        IVar5 = objc_stub::selectedRange((ID)param_1);
        objc_stub::showMarkdownInTextView_range_(unaff_x20,param_1,IVar5,extraout_x1);
      }
      IVar5 = objc_stub::attributedStringRenderer(unaff_x20);
      if (IVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xc0e28);
        (*pcVar2)();
      }
      objc_stub::defaultTextAttributes(IVar5);
      FUN_00005af0();
      FUN_000b9450();
      DVar7 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      lVar1 = _TtC11MDTextKitUI10MDTextView::defaultTextAttributes;
      _swift_beginAccess(param_1 + _TtC11MDTextKitUI10MDTextView::defaultTextAttributes,auStack_80,1
                         ,0);
      uVar8 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = DVar7.unknown;
      _swift_bridgeObjectRelease(uVar8);
      IVar5 = objc_stub::attributedStringRenderer(unaff_x20);
      if (IVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xc0e2c);
        (*pcVar2)();
      }
      objc_stub::defaultTextAttributes(IVar5);
      DVar7 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(DVar7.unknown);
      objc_stub::setTypingAttributes_((ID)param_1,pNVar9);
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar5 = objc_stub::colorForKey_((ID)with,pNVar10);
      if (IVar5 == 0) {
        IVar5 = ::NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
      }
      objc_stub::setBackgroundColor_((ID)param_1,IVar5);
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar5 = objc_stub::colorForKey_((ID)with,pNVar10);
      if (IVar5 != 0) {
        pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar11 = objc_stub::colorForKey_((ID)with,pNVar10);
        if (IVar11 != 0) {
          pMVar12 = MDTextKitUI::MDTextView::get_textFocusManager(param_1,(MDTextView *)0x0);
          *(ID *)(pMVar12 + _TtC11MDTextKitUI14MDFocusManager::backgroundColor) = IVar5;
          pMVar13 = MDTextKitUI::MDTextView::get_textHighlightManager(param_1,(MDTextView *)0x0);
          *(ID *)(pMVar13 + _TtC11MDTextKitUI26MDTextCoreHighlightManager::primaryBackgroundColor) =
               IVar5;
          lVar1 = _TtC11MDTextKitUI10MDTextView::___lazy_storage___textHighlightManager;
          lVar14 = *(long *)(param_1 +
                            _TtC11MDTextKitUI10MDTextView::___lazy_storage___textHighlightManager);
          IVar5 = objc_stub::isLightColor(IVar5);
          if ((int)IVar5 == 0) {
            IVar5 = ::NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
          }
          else {
            IVar5 = ::NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
          }
          *(ID *)(lVar14 + _TtC11MDTextKitUI26MDTextCoreHighlightManager::primaryForegroundColor) =
               IVar5;
          *(ID *)(*(long *)(param_1 + lVar1) +
                 _TtC11MDTextKitUI26MDTextCoreHighlightManager::secondaryBackgroundColor) = IVar11;
        }
      }
      puVar15 = &DAT_002345c8;
      ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_002345c8,&DAT_001c4b50);
      _swift_initStackObject();
      *(undefined8 *)(puVar15 + 0x18) = 2;
      *(undefined8 *)(puVar15 + 0x10) = 1;
      *(undefined8 *)(puVar15 + 0x20) = *(undefined8 *)PTR__NSCursorAttributeName_0020d818;
      IVar5 = NSCursor::pointingHandCursor((ID)&_OBJC_CLASS___NSCursor);
      uVar8 = 0;
      FUN_00006084(0,&DAT_00238590,&PTR__OBJC_CLASS___NSCursor_002210f8);
      *(undefined8 *)(puVar15 + 0x40) = uVar8;
      *(ID *)(puVar15 + 0x28) = IVar5;
      puVar16 = puVar15;
      FUN_000253b4(puVar15);
      _swift_setDeallocating(puVar15);
      FUN_00027650(puVar15 + 0x20,&DAT_002345e0,&DAT_001c3320);
      pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar16);
      objc_stub::setLinkTextAttributes_((ID)param_1,pNVar9);
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar5 = objc_stub::colorForKey_((ID)with,pNVar10);
      if (IVar5 != 0) {
        pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar11 = objc_stub::colorForKey_((ID)with,pNVar10);
        if (IVar11 != 0) {
          pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar17 = objc_stub::colorForKey_((ID)with,pNVar10);
          if (IVar17 != 0) {
            objc_stub::setInsertionPointColor_((ID)param_1,IVar5);
            IVar5 = objc_stub::colorWithAlphaComponent_(IVar11,0x3fe6666666666666);
            lVar1 = _TtC11MDTextKitUI10MDTextView::completionColor;
            _swift_beginAccess(param_1 + _TtC11MDTextKitUI10MDTextView::completionColor,auStack_e0,1
                               ,0);
            *(ID *)(param_1 + lVar1) = IVar5;
            objc_stub::selectedTextAttributes((ID)param_1);
            DVar18 = (extension_Foundation)::Swift::Dictionary::
                     __unconditionallyBridgeFromObjectiveC();
            uVar19 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_0020d800;
            uVar8 = 0;
            FUN_00006084(0,&DAT_002346d8,&PTR__OBJC_CLASS___NSColor_002210f0);
            local_108[0] = IVar17;
            local_f0 = uVar8;
            FUN_00005f48(local_108,auStack_128);
            DVar7 = DVar18;
            _swift_isUniquelyReferenced_nonNull_native(DVar18.unknown);
            FUN_00044480(auStack_128,uVar19,DVar7.unknown);
            local_e8 = DVar18.unknown;
            ___swift_destroy_boxed_opaque_existential_1(local_108);
            FUN_000b7fc0(local_108,*(undefined8 *)PTR__NSForegroundColorAttributeName_0020d868);
            FUN_00027650(local_108,&DAT_002341f0,&DAT_001c3340);
            puVar15 = local_e8;
            pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
            objc_stub::setSelectedTextAttributes_((ID)param_1,pNVar9);
            _swift_bridgeObjectRelease(puVar15);
          }
        }
      }
      IVar5 = objc_stub::attributedStringRenderer(unaff_x20);
      if (IVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xc0e30);
        (*pcVar2)();
      }
      objc_stub::defaultFontSize(IVar5);
      IVar3 = objc_stub::length(IVar3);
      objc_stub::rearrangeAttachmentsViewsInTextView_range_(unaff_x20,param_1,0,IVar3);
    }
  }
  return IVar4;
}


// ===== (extension_MDTextKitUI)::__C::MDEditorController::$styleTextStorage @ 000c0eb4 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.MDEditorController.styleTextStorage(_: __C.MDTextStorage, with:
   __C.SFThemeManager) -> __C.NSError? */

ID (extension_MDTextKitUI)::__C::MDEditorController::_styleTextStorage
             (MDTextStorage *param_1,SFThemeManager *with)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  void *pvVar8;
  undefined *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  NSString *pNVar13;
  NSDictionary *pNVar14;
  _StringGuts _Var16;
  ID unaff_x20;
  ulong *puVar17;
  ulong *puVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8 [11];
  _StringGuts _Var15;
  
  IVar5 = objc_stub::ast((ID)param_1);
  IVar5 = objc_stub::annotatedString(IVar5);
  IVar6 = objc_stub::attributedStringRenderer(unaff_x20);
  if (IVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xc1504);
    (*pcVar3)();
  }
  if (IVar5 == 0) {
    IVar7 = 0;
  }
  else {
    IVar7 = objc_stub::length(IVar5);
  }
  IVar6 = objc_stub::styleAttributedString_inRange_(IVar6,IVar5,0,IVar7);
  IVar7 = objc_stub::textAttachmentConfigurator(unaff_x20);
  objc_stub::
  validateTextAttachmentsWithConfigurator_inAttributedString_selectionRange_selectionLocationOffset_
            (unaff_x20,IVar7,IVar6,0,0);
  _swift_unknownObjectRelease(IVar7);
  IVar7 = objc_stub::autoHideMarkdown(unaff_x20);
  if ((int)IVar7 != 0) {
    if (IVar5 == 0) {
      IVar5 = 0;
    }
    else {
      IVar5 = objc_stub::length(IVar5);
    }
    objc_stub::hideMarkdownInRange_inAttributedString_(unaff_x20,0,IVar5,IVar6);
  }
  if (IVar6 != 0) {
    objc_stub::string(IVar6);
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var15.unknown = SVar19.bridgeObject;
    objc_stub::string((ID)param_1);
    SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar8 = SVar20.bridgeObject;
    if (SVar19 == SVar20) {
      _swift_bridgeObjectRelease(_Var15.unknown);
      _swift_bridgeObjectRelease(pvVar8);
    }
    else {
      _Var16.unknown = _Var15.unknown;
      bVar4 = ::Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar19.str,_Var15,(_StringComparisonResult)(__int8)SVar20.str)
      ;
      _swift_bridgeObjectRelease(_Var15.unknown);
      _swift_bridgeObjectRelease(pvVar8);
      if (!bVar4) {
        local_e8 = (undefined *)0x0;
        local_e0 = 0xe000000000000000;
        ::Swift::_StringGuts::grow(0x46,_Var16);
        SVar19.bridgeObject = (void *)0x80000000001dc3b0;
        SVar19.str = (char *)0xd000000000000036;
        ::Swift::String::append(SVar19,SVar20);
        IVar5 = objc_stub::anonymizedAttributedString(IVar6);
        objc_stub::description(IVar5);
        SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        ::Swift::String::append(SVar19,SVar20);
        _swift_bridgeObjectRelease(SVar19.bridgeObject);
        SVar21.bridgeObject = (void *)0xec0000000a0a3a65;
        SVar21.str = (char *)0x6761726f74530a0a;
        ::Swift::String::append(SVar21,SVar20);
        IVar5 = objc_stub::anonymizedAttributedString((ID)param_1);
        objc_stub::description(IVar5);
        SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        ::Swift::String::append(SVar19,SVar20);
        _swift_bridgeObjectRelease(SVar19.bridgeObject);
        uVar2 = local_e0;
        puVar11 = local_e8;
        puVar12 = &DAT_00235218;
        ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_00235218,&DAT_001c3fa0);
        _swift_initStackObject();
        *(undefined8 *)(puVar12 + 0x18) = 2;
        *(undefined8 *)(puVar12 + 0x10) = 1;
        SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(char **)(puVar12 + 0x20) = SVar19.str;
        *(undefined **)(puVar12 + 0x48) = PTR___type_metadata_for_Swift_String_0020df20;
        *(void **)(puVar12 + 0x28) = SVar19.bridgeObject;
        *(undefined **)(puVar12 + 0x30) = puVar11;
        *(undefined8 *)(puVar12 + 0x38) = uVar2;
        puVar11 = puVar12;
        FUN_00024fd4(puVar12);
        _swift_setDeallocating(puVar12);
        FUN_00027650(puVar12 + 0x20,&DAT_00235220,&DAT_001c4730);
        puVar12 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar14 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar11);
        IVar5 = objc_stub::initWithDomain_code_userInfo_((ID)puVar12,pNVar13,1,pNVar14);
        return IVar5;
      }
    }
    local_b8[0] = PTR___swiftEmptyArrayStorage_0020e328;
    objc_stub::beginEditing((ID)param_1);
    IVar5 = objc_stub::length(IVar6);
    puVar12 = &DAT_00208d28;
    _swift_allocObject(&DAT_00208d28,0x20,7);
    *(MDTextStorage **)(puVar12 + 0x10) = param_1;
    *(undefined ***)(puVar12 + 0x18) = local_b8;
    puVar11 = &DAT_00208d50;
    _swift_allocObject(&DAT_00208d50,0x20,7);
    *(code **)(puVar11 + 0x10) = FUN_000c1a84;
    *(undefined **)(puVar11 + 0x18) = puVar12;
    local_c8 = FUN_000167b0;
    local_e8 = PTR___NSConcreteStackBlock_0020d720;
    local_e0 = 0x42000000;
    local_d8 = FUN_000c1960;
    puStack_d0 = &::_block_descriptor;
    local_c0 = puVar11;
    pvVar8 = __Block_copy(&local_e8);
    puVar9 = local_c0;
    _swift_retain(puVar11);
    _swift_release(puVar9);
    objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar6,0,IVar5,0,pvVar8);
    __Block_release(pvVar8);
    puVar9 = puVar11;
    _swift_isEscapingClosureAtFileLocation(puVar11,"",0x6e,0x78,0x6e,1);
    _swift_release(puVar11);
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc149c);
      (*pcVar3)();
    }
    objc_stub::endEditing((ID)param_1);
    puVar11 = local_b8[0];
    if ((ulong)local_b8[0] >> 0x3e == 0) {
      puVar17 = *(ulong **)(((ulong)local_b8[0] & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)local_b8[0] & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < local_b8[0]) {
        _Var1.unknown = local_b8[0];
      }
      puVar17 = (ulong *)::Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (puVar17 != (ulong *)0x0) {
      if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc1500);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(puVar11);
      puVar9 = PTR__swift_isaMask_0020e4b8;
      puVar18 = (ulong *)0x0;
      do {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          puVar10 = *(ulong **)(puVar11 + (long)puVar18 * 8 + 0x20);
        }
        else {
          puVar10 = puVar18;
          FUN_0000e928(puVar18,puVar11);
        }
        puVar18 = (ulong *)((long)puVar18 + 1);
        (**(code **)((*(ulong *)puVar9 & *puVar10) + 0x1c0))(with);
      } while (puVar17 != puVar18);
      _swift_bridgeObjectRelease(puVar11);
    }
    puVar11 = local_b8[0];
    _swift_release(puVar12);
    _swift_bridgeObjectRelease(puVar11);
  }
  return 0;
}


// ===== (extension_MDTextKitUI)::__C::NSView::roundCorners @ 000c6a24 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.NSView.roundCorners(corners: __C.CACornerMask, radius:
   CoreGraphics.CGFloat) -> () */

undefined8 (extension_MDTextKitUI)::__C::NSView::roundCorners(CACornerMask corners,CGFloat radius)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::layer(unaff_x20);
  objc_stub::setCornerRadius_(IVar1);
  IVar1 = objc_stub::layer(unaff_x20);
  objc_stub::setMaskedCorners_(IVar1,corners.unknown);
  return 0;
}


// ===== (extension_MDTextKitUI)::__C::NSPopover::$get_backgroundColor @ 000d0fd8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.NSPopover.backgroundColor.getter : __C.NSColor? */

void (extension_MDTextKitUI)::__C::NSPopover::_get_backgroundColor(NSPopover *param_1)

{
  ID IVar1;
  
  FUN_000d11b4();
  if (((param_1 != (NSPopover *)0x0) && (IVar1 = objc_stub::layer((ID)param_1), IVar1 != 0)) &&
     (IVar1 = objc_stub::backgroundColor(IVar1), IVar1 != 0)) {
    ::NSColor::colorWithCGColor_((ID)&_OBJC_CLASS___NSColor,IVar1);
  }
  return;
}


// ===== (extension_MDTextKitUI)::__C::NSPopover::$set_backgroundColor @ 000d10b8 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.NSPopover.backgroundColor.setter : __C.NSColor? */

undefined8 __thiscall (extension_MDTextKitUI)::__C::NSPopover::_set_backgroundColor(NSPopover *this)

{
  ID in_x0;
  ID IVar1;
  ID IVar2;
  undefined8 *puVar3;
  
  IVar2 = in_x0;
  FUN_000d11b4();
  if (IVar2 != 0) {
    puVar3 = (undefined8 *)PTR__NSAppearanceNameDarkAqua_0020d7e0;
    if ((in_x0 != 0) &&
       (IVar1 = objc_stub::isLightColor(in_x0),
       puVar3 = (undefined8 *)PTR__NSAppearanceNameDarkAqua_0020d7e0, (IVar1 & 1) != 0)) {
      puVar3 = (undefined8 *)PTR__NSAppearanceNameAqua_0020d7d8;
    }
    IVar1 = NSAppearance::appearanceNamed_((ID)&_OBJC_CLASS___NSAppearance,*puVar3);
    objc_stub::setAppearance_((ID)this,IVar1);
    IVar2 = objc_stub::layer(IVar2);
    if (IVar2 != 0) {
      if (in_x0 == 0) {
        IVar1 = 0;
      }
      else {
        IVar1 = objc_stub::CGColor(in_x0);
      }
      objc_stub::setBackgroundColor_(IVar2,IVar1);
    }
  }
  return 0;
}


// ===== (extension_MDTextKitUI)::__C::NSButton::styleObjectForPanel @ 000f6d10 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.NSButton.styleObjectForPanel(with: __C.SFThemeManager) -> () */

undefined8 (extension_MDTextKitUI)::__C::NSButton::styleObjectForPanel(SFThemeManager *with)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  NSString *pNVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  MDTextKitUIStyleKit *self;
  NSColor *pNVar10;
  _StringGuts _Var11;
  ID unaff_x20;
  ulong uVar12;
  double in_d2;
  double in_d3;
  String SVar13;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar7 = objc_stub::colorForKey_((ID)with,pNVar6);
  if (IVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xf7510);
    (*pcVar3)();
  }
  IVar7 = objc_stub::isLightColor(IVar7);
  objc_stub::keyEquivalent(unaff_x20);
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var11.unknown = SVar13.bridgeObject;
  if ((SVar13.str == (undefined *)((long)&MACH_HEADER.filetype + 1)) &&
     (_Var11.unknown == (undefined *)0xe100000000000000)) {
    _swift_bridgeObjectRelease(0xe100000000000000);
LAB_000f6e10:
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar8 = objc_stub::colorForKey_((ID)with,pNVar6);
    if (IVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf7514);
      (*pcVar3)();
    }
  }
  else {
    bVar4 = ::Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar13.str,_Var11,(_StringComparisonResult)0xd);
    _swift_bridgeObjectRelease(_Var11.unknown);
    if (bVar4) goto LAB_000f6e10;
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar8 = objc_stub::colorForKey_((ID)with,pNVar6);
    if (IVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf752c);
      (*pcVar3)();
    }
    if ((IVar7 & 1) != 0) {
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar9 = objc_stub::colorForKey_((ID)with,pNVar6);
      if (IVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf7530);
        (*pcVar3)();
      }
      goto LAB_000f6e90;
    }
  }
  IVar9 = ::NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
LAB_000f6e90:
  uVar1 = (uint)IVar7 ^ 1;
  uVar12 = (ulong)uVar1;
  objc_stub::setBordered_(unaff_x20,0xbfb999999999999a,0);
  MDTextKitUI::MDCheckbox::typeMetadataAccessor();
  IVar7 = unaff_x20;
  _swift_dynamicCastClass();
  if (IVar7 == 0) {
    MDTextKitUI::MDButton::typeMetadataAccessor();
    _swift_dynamicCastClass();
    if (unaff_x20 != 0) {
      bVar5 = ::Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      lVar2 = _TtC11MDTextKitUI8MDButton::tintColor;
      if ((bVar5 & 1) == 0) {
        _swift_beginAccess(unaff_x20 + _TtC11MDTextKitUI8MDButton::tintColor,auStack_98,1,0);
        *(ID *)(unaff_x20 + lVar2) = IVar8;
        lVar2 = _TtC11MDTextKitUI8MDButton::titleColor;
        _swift_beginAccess(unaff_x20 + _TtC11MDTextKitUI8MDButton::titleColor,auStack_b0,1,0);
        *(ID *)(unaff_x20 + lVar2) = IVar9;
        lVar2 = _TtC11MDTextKitUI8MDButton::isDark;
        _swift_beginAccess(unaff_x20 + _TtC11MDTextKitUI8MDButton::isDark,auStack_c8,1,0);
        *(char *)(unaff_x20 + lVar2) = (char)uVar1;
        objc_stub::setButtonType_(unaff_x20,5);
        FUN_0019e148();
        return 0;
      }
      objc_stub::setBezelColor_(unaff_x20,IVar8);
      objc_stub::setBordered_(unaff_x20,1);
    }
  }
  else {
    bVar5 = ::Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar5 & 1) == 0) {
      objc_stub::bounds(IVar7);
      objc_stub::bounds(IVar7);
      objc_stub::setButtonType_(IVar7,3);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar8 = objc_stub::colorForKey_((ID)with,pNVar6);
      if (IVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf751c);
        (*pcVar3)();
      }
      if (in_d3 <= 18.0) {
        in_d3 = 18.0;
      }
      in_d2 = in_d2 + 20.0;
      pNVar6 = (NSString *)objc_stub::title(IVar7);
      if (pNVar6 == (NSString *)0x0) {
        SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar13.bridgeObject);
      }
      self = MDTextKitUI::MDTextKitUIStyleKit::typeMetadataAccessor();
      IVar8 = objc_stub::
              imageOfCheckboxImageWithImageSize_tintColor_titleColor_title_isDarkTheme_isOn_
                        ((ID)self,in_d2,in_d3,IVar8,IVar9,pNVar6,uVar12,0);
      objc_stub::setImage_(IVar7,IVar8);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar8 = objc_stub::colorForKey_((ID)with,pNVar6);
      if (IVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf7520);
        (*pcVar3)();
      }
      pNVar10 = NSColor::brighten((CGFloat)0x0);
      pNVar6 = (NSString *)objc_stub::title(IVar7);
      if (pNVar6 == (NSString *)0x0) {
        SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar13.bridgeObject);
      }
      IVar8 = objc_stub::
              imageOfCheckboxImageWithImageSize_tintColor_titleColor_title_isDarkTheme_isOn_
                        ((ID)self,in_d2,in_d3,pNVar10,IVar9,pNVar6,uVar12,0);
      lVar2 = _TtC11MDTextKitUI10MDCheckbox::highlightedImage;
      _swift_beginAccess(IVar7 + _TtC11MDTextKitUI10MDCheckbox::highlightedImage,auStack_98,1,0);
      *(ID *)(IVar7 + lVar2) = IVar8;
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar8 = objc_stub::colorForKey_((ID)with,pNVar6);
      if (IVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf7524);
        (*pcVar3)();
      }
      pNVar6 = (NSString *)objc_stub::title(IVar7);
      if (pNVar6 == (NSString *)0x0) {
        SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar13.bridgeObject);
      }
      IVar8 = objc_stub::
              imageOfCheckboxImageWithImageSize_tintColor_titleColor_title_isDarkTheme_isOn_
                        ((ID)self,in_d2,in_d3,IVar8,IVar9,pNVar6,uVar12,1);
      objc_stub::setAlternateImage_(IVar7,IVar8);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar8 = objc_stub::colorForKey_((ID)with,pNVar6);
      if (IVar8 != 0) {
        pNVar10 = NSColor::brighten((CGFloat)0x0);
        pNVar6 = (NSString *)objc_stub::title(IVar7);
        if (pNVar6 == (NSString *)0x0) {
          SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar13.bridgeObject);
        }
        IVar8 = objc_stub::
                imageOfCheckboxImageWithImageSize_tintColor_titleColor_title_isDarkTheme_isOn_
                          ((ID)self,in_d2,in_d3,pNVar10,IVar9,pNVar6,uVar12,1);
        lVar2 = _TtC11MDTextKitUI10MDCheckbox::highlightedAlternateImage;
        _swift_beginAccess(IVar7 + _TtC11MDTextKitUI10MDCheckbox::highlightedAlternateImage,
                           auStack_b0,1,0);
        *(ID *)(IVar7 + lVar2) = IVar8;
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setTitle_(IVar7,pNVar6);
        return 0;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf7528);
      (*pcVar3)();
    }
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar8 = objc_stub::colorForKey_((ID)with,pNVar6);
    if (IVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf7518);
      (*pcVar3)();
    }
    objc_stub::setBezelColor_(IVar7,IVar8);
    objc_stub::setContentTintColor_(IVar7,IVar9);
  }
  return 0;
}


// ===== (extension_MDTextKitUI)::__C::NSButton::styleObjectForMainApp @ 000f7580 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.NSButton.styleObjectForMainApp(with: __C.SFThemeManager) -> () */

undefined8 (extension_MDTextKitUI)::__C::NSButton::styleObjectForMainApp(SFThemeManager *with)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  NSString *pNVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  undefined *puVar14;
  _StringGuts _Var15;
  undefined8 uVar16;
  ID unaff_x20;
  String SVar17;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar10 = objc_stub::colorForKey_((ID)with,pNVar9);
  if (IVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0xf7b10);
    (*pcVar7)();
  }
  IVar10 = objc_stub::isLightColor(IVar10);
  objc_stub::keyEquivalent(unaff_x20);
  SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var15.unknown = SVar17.bridgeObject;
  if ((SVar17.str == (undefined *)((long)&MACH_HEADER.filetype + 1)) &&
     (_Var15.unknown == (undefined *)0xe100000000000000)) {
    _swift_bridgeObjectRelease(0xe100000000000000);
LAB_000f7678:
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar11 = objc_stub::colorForKey_((ID)with,pNVar9);
    if (IVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0xf7b14);
      (*pcVar7)();
    }
  }
  else {
    bVar8 = ::Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar17.str,_Var15,(_StringComparisonResult)0xd);
    _swift_bridgeObjectRelease(_Var15.unknown);
    if (bVar8) goto LAB_000f7678;
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar11 = objc_stub::colorForKey_((ID)with,pNVar9);
    if (IVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0xf7b18);
      (*pcVar7)();
    }
    if ((IVar10 & 1) != 0) {
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar12 = objc_stub::colorForKey_((ID)with,pNVar9);
      if (IVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0xf7b1c);
        (*pcVar7)();
      }
      uVar16 = 0xbfb999999999999a;
      goto LAB_000f76fc;
    }
  }
  IVar12 = ::NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  uVar16 = 0xbfb999999999999a;
  if ((int)IVar10 == 0) {
    uVar16 = 0x3fb999999999999a;
  }
LAB_000f76fc:
  bVar5 = (byte)IVar10 ^ 1;
  objc_stub::setBordered_(unaff_x20,0);
  FUN_000fee7c(0);
  IVar10 = unaff_x20;
  _swift_dynamicCastClass();
  if (IVar10 != 0) {
    bVar4 = *(byte *)(IVar10 + _TtC11MDTextKitUI15SegmentedButton::isNavButton);
    if ((bVar4 & 1) == 0) {
      objc_stub::title(IVar10);
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    else {
      SVar17 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
    IVar13 = ::NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setContentTintColor_(IVar10,IVar13);
    objc_stub::setImage_(IVar10,0);
    objc_stub::setAlternateImage_(IVar10,0);
    objc_stub::setButtonType_(IVar10,5);
    puVar14 = &DAT_0020a1a0;
    _swift_allocObject(&DAT_0020a1a0,0x3a,7);
    *(ID *)(puVar14 + 0x10) = IVar10;
    *(ID *)(puVar14 + 0x18) = IVar11;
    *(ID *)(puVar14 + 0x20) = IVar12;
    *(String *)(puVar14 + 0x28) = SVar17;
    puVar14[0x38] = bVar5;
    puVar14[0x39] = bVar4;
    puVar1 = (undefined8 *)(IVar10 + _TtC11MDTextKitUI15SegmentedButton::drawing);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_000f7e9c;
    puVar1[1] = puVar14;
    _swift_bridgeObjectRetain(SVar17.bridgeObject);
    FUN_00026eec(uVar2,uVar3);
    puVar14 = &DAT_0020a1c8;
    _swift_allocObject(&DAT_0020a1c8,0x41,7);
    puVar14[0x10] = bVar5;
    *(ID *)(puVar14 + 0x18) = IVar10;
    *(ID *)(puVar14 + 0x20) = IVar11;
    *(ID *)(puVar14 + 0x28) = IVar12;
    *(String *)(puVar14 + 0x30) = SVar17;
    puVar14[0x40] = bVar4;
    puVar1 = (undefined8 *)(IVar10 + _TtC11MDTextKitUI15SegmentedButton::drawingDisabled);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_000f7ef0;
    puVar1[1] = puVar14;
    _swift_bridgeObjectRetain(SVar17.bridgeObject);
    FUN_00026eec(uVar2,uVar3);
    puVar14 = &DAT_0020a1f0;
    _swift_allocObject(&DAT_0020a1f0,0x42,7);
    *(ID *)(puVar14 + 0x10) = IVar10;
    *(ID *)(puVar14 + 0x18) = IVar11;
    *(undefined8 *)(puVar14 + 0x20) = uVar16;
    *(ID *)(puVar14 + 0x28) = IVar12;
    *(String *)(puVar14 + 0x30) = SVar17;
    puVar14[0x40] = bVar5;
    puVar14[0x41] = bVar4;
    puVar1 = (undefined8 *)(IVar10 + _TtC11MDTextKitUI15SegmentedButton::drawingAlternate);
    uVar16 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = FUN_000f7f44;
    puVar1[1] = puVar14;
    FUN_00026eec(uVar16,uVar2);
    return uVar16;
  }
  MDTextKitUI::MDButton::typeMetadataAccessor();
  _swift_dynamicCastClass();
  lVar6 = _TtC11MDTextKitUI8MDButton::tintColor;
  if (unaff_x20 != 0) {
    _swift_beginAccess(unaff_x20 + _TtC11MDTextKitUI8MDButton::tintColor,auStack_88,1,0);
    *(ID *)(unaff_x20 + lVar6) = IVar11;
    lVar6 = _TtC11MDTextKitUI8MDButton::titleColor;
    _swift_beginAccess(unaff_x20 + _TtC11MDTextKitUI8MDButton::titleColor,auStack_a0,1,0);
    *(ID *)(unaff_x20 + lVar6) = IVar12;
    lVar6 = _TtC11MDTextKitUI8MDButton::isDark;
    _swift_beginAccess(unaff_x20 + _TtC11MDTextKitUI8MDButton::isDark,auStack_b8,1,0);
    *(byte *)(unaff_x20 + lVar6) = bVar5;
    objc_stub::setButtonType_(unaff_x20,5);
    FUN_0019e148();
    return 0;
  }
  return 0;
}


// ===== (extension_MDTextKitUI)::__C::MDLayoutManager::styleWith @ 000f90bc =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.MDLayoutManager.styleWith(renderer:
   __C.MDAttributedStringRenderer, themeManager: __C.SFThemeManager) -> () */

void (extension_MDTextKitUI)::__C::MDLayoutManager::styleWith
               (MDAttributedStringRenderer *renderer,SFThemeManager *themeManager)

{
  undefined *puVar1;
  ulong uVar2;
  Dictionary<undefined,undefined> DVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  NSString *pNVar7;
  ID IVar8;
  ID unaff_x20;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  objc_stub::defaultTextAttributes((ID)renderer);
  uVar2 = 0;
  FUN_00005af0();
  FUN_000b9450();
  puVar1 = PTR___type_metadata_for_Any_0020e318;
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar3.unknown + 0x10) == 0) {
LAB_000f9194:
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
    _swift_bridgeObjectRelease(DVar3.unknown);
  }
  else {
    lVar4 = *(long *)PTR__NSFontAttributeName_0020d830;
    thunk_FUN_0002152c(lVar4);
    if ((uVar2 & 1) == 0) goto LAB_000f9194;
    FUN_00005f48(*(long *)(DVar3.unknown + 0x38) + lVar4 * 0x20,&local_60);
    _swift_bridgeObjectRelease(DVar3.unknown);
    if (local_48 != 0) {
      uVar5 = 0;
      FUN_000f9370(0);
      puVar6 = &local_68;
      _swift_dynamicCast(puVar6,&local_60,puVar1 + 8,uVar5,6);
      if ((int)puVar6 == 0) {
        local_68 = 0;
      }
      goto LAB_000f91b0;
    }
  }
  FUN_00007078(&local_60);
  local_68 = 0;
LAB_000f91b0:
  objc_stub::setDefaultFont_(unaff_x20,local_68);
  objc_stub::defaultLineSpacing((ID)renderer);
  objc_stub::setDefaultLineSpacing_(unaff_x20);
  objc_stub::defaultParagraphIndent((ID)renderer);
  objc_stub::setDefaultParagraphIndent_(unaff_x20);
  objc_stub::tabSize((ID)renderer);
  objc_stub::setBaseTabSize_(unaff_x20);
  objc_stub::defaultPointsize((ID)renderer);
  objc_stub::setBasePointSize_(unaff_x20);
  objc_stub::columnSize((ID)renderer);
  objc_stub::setColumnSize_(unaff_x20);
  objc_stub::gutterSize((ID)renderer);
  objc_stub::setGutterSize_(unaff_x20);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = objc_stub::colorForKey_((ID)themeManager,pNVar7);
  objc_stub::setSelectionInactiveColor_(unaff_x20,IVar8);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = objc_stub::numberForKey_((ID)themeManager,pNVar7);
  if (IVar8 == 0) {
    IVar8 = 0;
  }
  else {
    IVar8 = objc_stub::boolValue(IVar8);
  }
  objc_stub::setShowBackgroundGrid_(unaff_x20,IVar8);
  return;
}


// ===== (extension_MDTextKitUI)::__C::NSTextView::boundingRect @ 001032f8 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.NSTextView.boundingRect(forCharacterRange: __C._NSRange) ->
   __C.CGRect */

CGRect (extension_MDTextKitUI)::__C::NSTextView::boundingRect(_NSRange forCharacterRange)

{
  ID IVar1;
  CGRect CVar2;
  undefined8 extraout_x1;
  ID unaff_x20;
  
  IVar1 = objc_stub::layoutManager(unaff_x20);
  if (IVar1 == 0) {
    CVar2.unknown = (undefined *)0x0;
  }
  else {
    IVar1 = objc_stub::glyphRangeForCharacterRange_actualCharacterRange_
                      (IVar1,forCharacterRange.location,forCharacterRange.length,0);
    CVar2.unknown = (undefined *)objc_stub::boundingRectForGlyphRange_(unaff_x20,IVar1,extraout_x1);
  }
  return (CGRect)CVar2.unknown;
}


// ===== (extension_MDTextKitUI)::__C::NSTextView::boundingRect @ 00103444 =====

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* (extension in MDTextKitUI):__C.NSTextView.boundingRect(forGlyphRange: __C._NSRange) -> __C.CGRect
    */

CGRect (extension_MDTextKitUI)::__C::NSTextView::boundingRect(_NSRange forGlyphRange)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  CGRect CVar3;
  ID unaff_x20;
  
  self = objc_stub::layoutManager(unaff_x20);
  if (self == 0) {
    CVar3.unknown = (undefined *)0x0;
  }
  else {
    IVar2 = objc_stub::textContainer(unaff_x20);
    if (IVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103518);
      (*pcVar1)();
    }
    objc_stub::boundingRectForGlyphRange_inTextContainer_
              (self,forGlyphRange.location,forGlyphRange.length,IVar2);
    CVar3.unknown = (undefined *)objc_stub::textContainerOrigin(unaff_x20);
  }
  return (CGRect)CVar3.unknown;
}


// ===== (extension_MDTextKitUI)::__C::CALayer::$bumpAnimation @ 001046e0 =====

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* (extension in MDTextKitUI):__C.CALayer.bumpAnimation(with: Swift.Double, scale:
   CoreGraphics.CGFloat, completion: ((Swift.Bool) -> ())?) -> () */

undefined8 (extension_MDTextKitUI)::__C::CALayer::_bumpAnimation(double with,CGFloat scale)

{
  undefined *puVar1;
  undefined *puVar2;
  NSString *pNVar3;
  ID self;
  ID IVar4;
  NSNumber *this;
  NSNumber *pNVar5;
  NSArray *pNVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  ID IVar10;
  undefined *puVar11;
  void *aBlock;
  undefined8 in_x1;
  ID unaff_x20;
  undefined8 in_d1;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = CAKeyframeAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CAKeyframeAnimation,pNVar3);
  IVar4 = CAKeyframeAnimation::setDuration_(self,with);
  FUN_000160fc();
  IVar8 = IVar4;
  _swift_allocObject();
  *(undefined8 *)(IVar8 + 0x18) = 0xb;
  *(undefined8 *)(IVar8 + 0x10) = 5;
  this = (NSNumber *)0x0;
  FUN_00006084(0,&DAT_002348f8,&PTR__OBJC_CLASS___NSNumber_002211b8);
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.0);
  *(NSNumber **)(IVar8 + 0x20) = pNVar5;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.1);
  *(NSNumber **)(IVar8 + 0x28) = pNVar5;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.15);
  *(NSNumber **)(IVar8 + 0x30) = pNVar5;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.2);
  *(NSNumber **)(IVar8 + 0x38) = pNVar5;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.35);
  *(NSNumber **)(IVar8 + 0x40) = pNVar5;
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(IVar8);
  CAKeyframeAnimation::setKeyTimes_(self,pNVar6);
  puVar9 = &DAT_002344f0;
  ___swift_instantiateConcreteTypeFromMangledNameV2(&DAT_002344f0,&DAT_001c34c0);
  puVar7 = puVar9;
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 10;
  *(undefined8 *)(puVar7 + 0x10) = 5;
  puVar1 = PTR___type_metadata_for_Swift_Int_0020dfa8;
  *(undefined8 *)(puVar7 + 0x20) = 1;
  *(undefined **)(puVar7 + 0x58) = puVar1;
  *(undefined **)(puVar7 + 0x38) = puVar1;
  *(undefined8 *)(puVar7 + 0x40) = 1;
  puVar2 = PTR___type_metadata_for_CoreGraphics_CGFloat_0020eb68;
  *(undefined **)(puVar7 + 0x78) = PTR___type_metadata_for_CoreGraphics_CGFloat_0020eb68;
  *(undefined8 *)(puVar7 + 0x60) = in_d1;
  *(undefined8 *)(puVar7 + 0x80) = in_d1;
  puVar11 = PTR___type_metadata_for_Swift_Double_0020df98;
  *(undefined **)(puVar7 + 0xb8) = PTR___type_metadata_for_Swift_Double_0020df98;
  *(undefined **)(puVar7 + 0x98) = puVar2;
  *(undefined8 *)(puVar7 + 0xa0) = 0x3ff0000000000000;
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar7);
  CAKeyframeAnimation::setValues_(self,pNVar6);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = CAKeyframeAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CAKeyframeAnimation,pNVar3);
  CAKeyframeAnimation::setDuration_(IVar8,with);
  _swift_allocObject(IVar4,((ulong)*(uint *)(IVar4 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                     *(ushort *)(IVar4 + 0x34) | 7);
  *(undefined8 *)(IVar4 + 0x18) = 9;
  *(undefined8 *)(IVar4 + 0x10) = 4;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.0);
  *(NSNumber **)(IVar4 + 0x20) = pNVar5;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.1);
  *(NSNumber **)(IVar4 + 0x28) = pNVar5;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0.8);
  *(NSNumber **)(IVar4 + 0x30) = pNVar5;
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,1);
  *(NSNumber **)(IVar4 + 0x38) = pNVar5;
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(IVar4);
  CAKeyframeAnimation::setKeyTimes_(IVar8,pNVar6);
  _swift_allocObject(puVar9,0xa0,7);
  *(undefined8 *)(puVar9 + 0x18) = 8;
  *(undefined8 *)(puVar9 + 0x10) = 4;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined **)(puVar9 + 0x38) = puVar1;
  *(undefined8 *)(puVar9 + 0x40) = 0x3ff0000000000000;
  *(undefined **)(puVar9 + 0x58) = puVar11;
  *(undefined8 *)(puVar9 + 0x60) = 0x3ff0000000000000;
  *(undefined **)(puVar9 + 0x98) = puVar1;
  *(undefined **)(puVar9 + 0x78) = puVar11;
  *(undefined8 *)(puVar9 + 0x80) = 0;
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar9);
  CAKeyframeAnimation::setValues_(IVar8,pNVar6);
  puVar9 = &_OBJC_CLASS___CAAnimationGroup;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar9);
  IVar10 = objc_stub::setDuration_(IVar4,with);
  FUN_000160d8();
  _swift_allocObject();
  *(undefined8 *)(IVar10 + 0x18) = 5;
  *(undefined8 *)(IVar10 + 0x10) = 2;
  *(ID *)(IVar10 + 0x20) = self;
  *(ID *)(IVar10 + 0x28) = IVar8;
  FUN_00006084(0,&DAT_002348e8,&PTR__OBJC_CLASS___CAAnimation_00221268);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(IVar10);
  objc_stub::setAnimations_(IVar4,pNVar6);
  IVar8 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_0020dbf8);
  objc_stub::setTimingFunction_(IVar4,IVar8);
  objc_stub::setFillMode_(IVar4,*(undefined8 *)PTR__kCAFillModeForwards_0020dbe0);
  objc_stub::setRemovedOnCompletion_(IVar4,0);
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  puVar9 = &DAT_0020a560;
  _swift_allocObject(&DAT_0020a560,0x18,7);
  _swift_unknownObjectWeakInit(puVar9 + 0x10,unaff_x20);
  puVar11 = &DAT_0020a588;
  _swift_allocObject(&DAT_0020a588,0x28,7);
  *(undefined **)(puVar11 + 0x10) = puVar9;
  *(undefined **)(puVar11 + 0x18) = scale.unknown;
  *(undefined8 *)(puVar11 + 0x20) = in_x1;
  local_90 = FUN_00105024;
  local_b0 = PTR___NSConcreteStackBlock_0020d720;
  local_a8 = 0x42000000;
  local_a0 = thunk_FUN_00018050;
  puStack_98 = &::_block_descriptor;
  local_88 = puVar11;
  aBlock = __Block_copy(&local_b0);
  puVar9 = local_88;
  FUN_00019830(scale.unknown,in_x1);
  _swift_release(puVar9);
  CATransaction::setCompletionBlock_((ID)&_OBJC_CLASS___CATransaction,aBlock);
  __Block_release(aBlock);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::addAnimation_forKey_(unaff_x20,IVar4,pNVar3);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  return 0;
}


// ===== (extension_MDTextKitUI)::__C::CALayer::$bumpAnimation @ 00104de4 =====

/* (extension in MDTextKitUI):__C.CALayer.bumpAnimation(with: Swift.Double, completion:
   ((Swift.Bool) -> ())?) -> () */

void (extension_MDTextKitUI)::__C::CALayer::_bumpAnimation(double with)

{
  long in_x0;
  void *aBlock;
  undefined8 in_x1;
  ID unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  undefined8 local_58;
  
  if (in_x0 == 0) {
    aBlock = (void *)0x0;
  }
  else {
    local_80 = PTR___NSConcreteStackBlock_0020d720;
    local_78 = 0x42000000;
    local_70 = FUN_0002dbb8;
    puStack_68 = &_block_descriptor_5;
    local_58 = in_x1;
    aBlock = __Block_copy(&local_80);
    FUN_00019830();
    _swift_release(local_58);
  }
  objc_stub::bumpAnimationWith_scale_completion_(unaff_x20,with,0x3ff199999999999a,aBlock);
  __Block_release(aBlock);
  return;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::MDTextFieldWillBecomeFirstResponder::unsafeMutableAddressor @ 0010e744 =====

/* (extension in
   MDTextKitUI):__C.NSNotification.MDTextFieldWillBecomeFirstResponder.unsafeMutableAddressor :
   __C.NSNotificationName */

undefined8 *
(extension_MDTextKitUI)::__C::NSNotification::MDTextFieldWillBecomeFirstResponder::
unsafeMutableAddressor(void)

{
  if (DAT_00239f00 != -1) {
    _swift_once(&DAT_00239f00,FUN_0010e720);
  }
  return &__sSo14NSNotificationC11MDTextKitUIE0B29FieldWillBecomeFirstResponderSo0A4NameavpZ;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldWillBecomeFirstResponder @ 0010e784 =====

/* static (extension in MDTextKitUI):__C.NSNotification.MDTextFieldWillBecomeFirstResponder.getter :
   __C.NSNotificationName */

void (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldWillBecomeFirstResponder
               (NSNotification *param_1)

{
  FUN_0010e6e0(&DAT_00239f00,
               &__sSo14NSNotificationC11MDTextKitUIE0B29FieldWillBecomeFirstResponderSo0A4NameavpZ,
               FUN_0010e720);
  return;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::MDTextFieldDidBecomeFirstResponder::unsafeMutableAddressor @ 0010e7e0 =====

/* (extension in
   MDTextKitUI):__C.NSNotification.MDTextFieldDidBecomeFirstResponder.unsafeMutableAddressor :
   __C.NSNotificationName */

undefined8 *
(extension_MDTextKitUI)::__C::NSNotification::MDTextFieldDidBecomeFirstResponder::
unsafeMutableAddressor(void)

{
  if (DAT_00239f08 != -1) {
    _swift_once(&DAT_00239f08,FUN_0010e7bc);
  }
  return &__sSo14NSNotificationC11MDTextKitUIE0B28FieldDidBecomeFirstResponderSo0A4NameavpZ;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldDidBecomeFirstResponder @ 0010e820 =====

/* static (extension in MDTextKitUI):__C.NSNotification.MDTextFieldDidBecomeFirstResponder.getter :
   __C.NSNotificationName */

void (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldDidBecomeFirstResponder
               (NSNotification *param_1)

{
  FUN_0010e6e0(&DAT_00239f08,
               &__sSo14NSNotificationC11MDTextKitUIE0B28FieldDidBecomeFirstResponderSo0A4NameavpZ,
               FUN_0010e7bc);
  return;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::MDTextFieldWillResignFirstResponder::unsafeMutableAddressor @ 0010e8c0 =====

/* (extension in
   MDTextKitUI):__C.NSNotification.MDTextFieldWillResignFirstResponder.unsafeMutableAddressor :
   __C.NSNotificationName */

undefined8 *
(extension_MDTextKitUI)::__C::NSNotification::MDTextFieldWillResignFirstResponder::
unsafeMutableAddressor(void)

{
  if (DAT_00239f10 != -1) {
    _swift_once(&DAT_00239f10,FUN_0010e89c);
  }
  return &__sSo14NSNotificationC11MDTextKitUIE0B29FieldWillResignFirstResponderSo0A4NameavpZ;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldWillResignFirstResponder @ 0010e900 =====

/* static (extension in MDTextKitUI):__C.NSNotification.MDTextFieldWillResignFirstResponder.getter :
   __C.NSNotificationName */

void (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldWillResignFirstResponder
               (NSNotification *param_1)

{
  FUN_0010e6e0(&DAT_00239f10,
               &__sSo14NSNotificationC11MDTextKitUIE0B29FieldWillResignFirstResponderSo0A4NameavpZ,
               FUN_0010e89c);
  return;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::MDTextFieldDidResignFirstResponder::unsafeMutableAddressor @ 0010e9a8 =====

/* (extension in
   MDTextKitUI):__C.NSNotification.MDTextFieldDidResignFirstResponder.unsafeMutableAddressor :
   __C.NSNotificationName */

undefined8 *
(extension_MDTextKitUI)::__C::NSNotification::MDTextFieldDidResignFirstResponder::
unsafeMutableAddressor(void)

{
  if (DAT_00239f18 != -1) {
    _swift_once(&DAT_00239f18,FUN_0010e938);
  }
  return &__sSo14NSNotificationC11MDTextKitUIE0B28FieldDidResignFirstResponderSo0A4NameavpZ;
}


// ===== (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldDidResignFirstResponder @ 0010e9e8 =====

/* static (extension in MDTextKitUI):__C.NSNotification.MDTextFieldDidResignFirstResponder.getter :
   __C.NSNotificationName */

void (extension_MDTextKitUI)::__C::NSNotification::get_MDTextFieldDidResignFirstResponder
               (NSNotification *param_1)

{
  FUN_0010e6e0(&DAT_00239f18,
               &__sSo14NSNotificationC11MDTextKitUIE0B28FieldDidResignFirstResponderSo0A4NameavpZ,
               FUN_0010e938);
  return;
}


