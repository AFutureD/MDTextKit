// ===== _TtC11MDTextKitUI24TextRecognitionOperation::isExecuting @ 0005d9a4 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI24TextRecognitionOperation::isExecuting(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _executing);
}


// ===== _TtC11MDTextKitUI24TextRecognitionOperation::setExecuting: @ 0005d9c4 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI24TextRecognitionOperation::setExecuting_(ID param_1,SEL param_2,bool param_3)

{
  FUN_0005da58(param_1,param_2,param_3,0x7475636578457369,0xeb00000000676e69,&_executing);
  return;
}


// ===== _TtC11MDTextKitUI24TextRecognitionOperation::isFinished @ 0005da14 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI24TextRecognitionOperation::isFinished(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _finished);
}


// ===== _TtC11MDTextKitUI24TextRecognitionOperation::setFinished: @ 0005da34 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI24TextRecognitionOperation::setFinished_(ID param_1,SEL param_2,bool param_3)

{
  FUN_0005da58(param_1,param_2,param_3,0x6873696e69467369,0xea00000000006465,&_finished);
  return;
}


// ===== _TtC11MDTextKitUI24TextRecognitionOperation::start @ 0005e0ec =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI24TextRecognitionOperation::start(ID param_1,SEL param_2)

{
  MDTextKitUI::TextRecognitionOperation::start((TextRecognitionOperation *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI24TextRecognitionOperation::init @ 0005f1b0 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI24TextRecognitionOperation::init(ID param_1,SEL param_2)

{
  TextRecognitionOperation *pTVar1;
  
  pTVar1 = MDTextKitUI::TextRecognitionOperation::init((TextRecognitionOperation *)param_1);
  return (ID)pTVar1;
}


// ===== _TtC11MDTextKitUI24TextRecognitionOperation::.cxx_destruct @ 0005f314 =====

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI24TextRecognitionOperation::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00034ed8(param_1 + imageURL);
  FUN_00026eec(*(undefined8 *)(param_1 + ocrCompletionBlock),
               ((undefined8 *)(param_1 + ocrCompletionBlock))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ocrResults));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ocrTranscript + 8));
  _swift_errorRelease(*(undefined8 *)(param_1 + ocrError));
  return;
}


