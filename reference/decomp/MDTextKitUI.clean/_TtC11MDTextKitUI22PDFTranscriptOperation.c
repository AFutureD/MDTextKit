// ===== _TtC11MDTextKitUI22PDFTranscriptOperation::isExecuting @ 000c6a98 =====

bool _TtC11MDTextKitUI22PDFTranscriptOperation::isExecuting(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _executing);
}

// ===== _TtC11MDTextKitUI22PDFTranscriptOperation::setExecuting: @ 000c6ab8 =====

void _TtC11MDTextKitUI22PDFTranscriptOperation::setExecuting_(ID param_1,SEL param_2,bool param_3)

{
  FUN(param_1,param_2,param_3,0x7475636578457369,0xeb00000000676e69,&_executing);
  return;
}

// ===== _TtC11MDTextKitUI22PDFTranscriptOperation::isFinished @ 000c6b08 =====

bool _TtC11MDTextKitUI22PDFTranscriptOperation::isFinished(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _finished);
}

// ===== _TtC11MDTextKitUI22PDFTranscriptOperation::setFinished: @ 000c6b28 =====

void _TtC11MDTextKitUI22PDFTranscriptOperation::setFinished_(ID param_1,SEL param_2,bool param_3)

{
  FUN(param_1,param_2,param_3,0x6873696e69467369,0xea00000000006465,&_finished);
  return;
}

// ===== _TtC11MDTextKitUI22PDFTranscriptOperation::start @ 000c76f8 =====

void _TtC11MDTextKitUI22PDFTranscriptOperation::start(ID param_1,SEL param_2)

{
  MDTextKitUI::PDFTranscriptOperation::start((PDFTranscriptOperation *)param_1);
  return;
}

// ===== _TtC11MDTextKitUI22PDFTranscriptOperation::init @ 000c7974 =====

ID _TtC11MDTextKitUI22PDFTranscriptOperation::init(ID param_1,SEL param_2)

{
  PDFTranscriptOperation *pPVar1;
  
  pPVar1 = MDTextKitUI::PDFTranscriptOperation::init((PDFTranscriptOperation *)param_1);
  return (ID)pPVar1;
}

// ===== _TtC11MDTextKitUI22PDFTranscriptOperation::.cxx_destruct @ 000c79c8 =====

void _TtC11MDTextKitUI22PDFTranscriptOperation::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_00026eec(*(undefined8 *)(param_1 + transcriptCompletionBlock),
               ((undefined8 *)(param_1 + transcriptCompletionBlock))[1]);
  FUN_00034ed8(param_1 + pdfURL);
  _swift_errorRelease(*(undefined8 *)(param_1 + error));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + transcript + 8));
  return;
}

