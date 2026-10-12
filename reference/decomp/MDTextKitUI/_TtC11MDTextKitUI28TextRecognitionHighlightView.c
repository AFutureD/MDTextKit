// ===== _TtC11MDTextKitUI28TextRecognitionHighlightView::initWithCoder: @ 000f8870 =====

/* Function Stack Size: 0x18 bytes */

ID _TtC11MDTextKitUI28TextRecognitionHighlightView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)((long)&MACH_HEADER.magic + 2);
  SVar2.str = (char *)((long)&MACH_HEADER.cpusubtype + 3);
  Swift::_assertionFailure
            ((StaticString)0x1dadd8,SVar2,(StaticString)0xd000000000000025,0x80000000001dc610,
             0x1dc600);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf88c8);
  (*pcVar1)();
}


// ===== _TtC11MDTextKitUI28TextRecognitionHighlightView::layout @ 000f8914 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI28TextRecognitionHighlightView::layout(ID param_1,SEL param_2)

{
  MDTextKitUI::TextRecognitionHighlightView::layout((TextRecognitionHighlightView *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI28TextRecognitionHighlightView::viewDidMoveToSuperview @ 000f8970 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI28TextRecognitionHighlightView::viewDidMoveToSuperview(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class =
       (class_t *)MDTextKitUI::TextRecognitionHighlightView::typeMetadataAccessor();
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidMoveToSuperview");
  FUN_0000cc48();
  return;
}


// ===== _TtC11MDTextKitUI28TextRecognitionHighlightView::copyLayer @ 000f9058 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI28TextRecognitionHighlightView::copyLayer(ID param_1,SEL param_2)

{
  MDTextKitUI::TextRecognitionHighlightView::_copyLayer((TextRecognitionHighlightView *)param_1);
  return param_1;
}


