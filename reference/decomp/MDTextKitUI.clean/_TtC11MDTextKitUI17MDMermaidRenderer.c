// ===== _TtC11MDTextKitUI17MDMermaidRenderer::init @ 001a14e4 =====

ID _TtC11MDTextKitUI17MDMermaidRenderer::init(ID param_1,SEL param_2)

{
  MDMermaidRenderer *pMVar1;
  
  pMVar1 = MDTextKitUI::MDMermaidRenderer::init((MDMermaidRenderer *)param_1);
  return (ID)pMVar1;
}

// ===== _TtC11MDTextKitUI17MDMermaidRenderer::webView:didFinishNavigation: @ 001a17e4 =====

void _TtC11MDTextKitUI17MDMermaidRenderer::webView_didFinishNavigation_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<String,(extension_in_WebKit):__C_WKWebView_callAsyncJavaScript(_:_Swift_String,arguments:_[Swift_String_:_Any],in:___C_WKFrameInfo_,in:___C_WKContentWorld,completionHandler:_((Swift_Result<Any,Swift_Error>)__>________>___>
  arguments;
  String SVar2;
  
  arguments.unknown = PTR___swiftEmptyArrayStorage_0020e328;
  FUN_00024fd4();
  WKContentWorld::pageWorld(WKContentWorld);
  puVar1 = &DAT_0020cb18;
  _swift_allocObject(&DAT_0020cb18,0x18,7);
  *(ID *)(puVar1 + 0x10) = param_1;
  SVar2.bridgeObject = (void *)0x80000000001dc9b0;
  SVar2.str = (char *)0xd00000000000001c;
  (extension_WebKit)::__C::WKWebView::_callAsyncJavaScript(SVar2,arguments,(WKContentWorld *)0x0);
  _swift_bridgeObjectRelease(arguments.unknown);
  _swift_release(puVar1);
  return;
}

// ===== _TtC11MDTextKitUI17MDMermaidRenderer::imageFor:options: @ 001a19e4 =====

ID _TtC11MDTextKitUI17MDMermaidRenderer::imageFor_options_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String for;
  
  for = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = for.str;
  MDTextKitUI::MDMermaidRenderer::_image
            ((MDMermaidRenderer *)param_1,for,(MDMermaidRenderOptions *)param_4);
  _swift_bridgeObjectRelease(for.bridgeObject);
  return (ID)pcVar1;
}

// ===== _TtC11MDTextKitUI17MDMermaidRenderer::.cxx_destruct @ 001a3234 =====

void _TtC11MDTextKitUI17MDMermaidRenderer::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + renderQueue));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cache));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + inFlight));
  return;
}

