// ===== _TtC11MDTextKitUI18PDFSearchOperation::isExecuting @ 000c8c40 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI18PDFSearchOperation::isExecuting(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _executing);
}


// ===== _TtC11MDTextKitUI18PDFSearchOperation::setExecuting: @ 000c8c60 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI18PDFSearchOperation::setExecuting_(ID param_1,SEL param_2,bool param_3)

{
  FUN_0005da58(param_1,param_2,param_3,0x7475636578457369,0xeb00000000676e69,&_executing);
  return;
}


// ===== _TtC11MDTextKitUI18PDFSearchOperation::isFinished @ 000c8cb0 =====

/* Function Stack Size: 0x10 bytes */

bool _TtC11MDTextKitUI18PDFSearchOperation::isFinished(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + _finished);
}


// ===== _TtC11MDTextKitUI18PDFSearchOperation::setFinished: @ 000c8cd0 =====

/* Function Stack Size: 0x14 bytes */

void _TtC11MDTextKitUI18PDFSearchOperation::setFinished_(ID param_1,SEL param_2,bool param_3)

{
  FUN_0005da58(param_1,param_2,param_3,0x6873696e69467369,0xea00000000006465,&_finished);
  return;
}


// ===== _TtC11MDTextKitUI18PDFSearchOperation::start @ 000c9448 =====

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18PDFSearchOperation::start(ID param_1,SEL param_2)

{
  MDTextKitUI::PDFSearchOperation::start((PDFSearchOperation *)param_1);
  return;
}


// ===== _TtC11MDTextKitUI18PDFSearchOperation::init @ 000c9520 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI18PDFSearchOperation::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  ID IVar2;
  objc_super local_30;
  
  puVar1 = (undefined8 *)(param_1 + pdfData);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(param_1 + searchOptions);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + searchString);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + matchFound) = 0;
  *(undefined1 *)(param_1 + _executing) = 0;
  *(undefined1 *)(param_1 + _finished) = 0;
  local_30.super_class = (class_t *)MDTextKitUI::PDFSearchOperation::typeMetadataAccessor();
  local_30.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}


// ===== _TtC11MDTextKitUI18PDFSearchOperation::.cxx_destruct @ 000c95ec =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI18PDFSearchOperation::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_0002bf54(*(undefined8 *)(param_1 + pdfData),((undefined8 *)(param_1 + pdfData))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + searchString + 8));
  return;
}


