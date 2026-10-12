// ===== _TtC11MDTextKitUI14MDMathRenderer::init @ 0006035c =====

ID _TtC11MDTextKitUI14MDMathRenderer::init(ID param_1,SEL param_2)

{
  MDMathRenderer *pMVar1;
  
  pMVar1 = MDTextKitUI::MDMathRenderer::init((MDMathRenderer *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI14MDMathRenderer::webView:didFinishNavigation: @ 00060660 =====

void _TtC11MDTextKitUI14MDMathRenderer::webView_didFinishNavigation_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<String,(extension_in_WebKit):__C_WKWebView_callAsyncJavaScript(_:_Swift_String,arguments:_[Swift_String_:_Any],in:___C_WKFrameInfo_,in:___C_WKContentWorld,completionHandler:_((Swift_Result<Any,Swift_Error>)__>________>___>
  arguments;
  String SVar2;
  
  arguments.unknown = PTR___swiftEmptyArrayStorage_0020e328;
  FUN_00024fd4();
  WKContentWorld::pageWorld(WKContentWorld);
  puVar1 = &DAT_002073b0;
  _swift_allocObject(&DAT_002073b0,0x18,7);
  *(ID *)(puVar1 + 0x10) = param_1;
  SVar2.bridgeObject = (void *)0x80000000001db780;
  SVar2.str = (char *)0xd00000000000001c;
  (extension_WebKit)::__C::WKWebView::_callAsyncJavaScript(SVar2,arguments,(WKContentWorld *)0x0);
  _swift_bridgeObjectRelease(arguments.unknown);
  _swift_release(puVar1);
  return;
}

// ===== _TtC11MDTextKitUI14MDMathRenderer::imageFor:options: @ 000608ac =====

ID _TtC11MDTextKitUI14MDMathRenderer::imageFor_options_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String for;
  
  for = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = for.str;
  MDTextKitUI::MDMathRenderer::_image((MDMathRenderer *)param_1,for,(MDMathRenderOptions *)param_4);
  _swift_bridgeObjectRelease(for.bridgeObject);
  return (ID)pcVar1;
}

// ===== _TtC11MDTextKitUI14MDMathRenderer::.cxx_destruct @ 00061c10 =====

void _TtC11MDTextKitUI14MDMathRenderer::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + renderQueue));
  return;
}

