// ===== _TtC11MDTextKitUI18LinkMetadataParser::init @ 000a11a8 =====

ID _TtC11MDTextKitUI18LinkMetadataParser::init(ID param_1,SEL param_2)

{
  class_t *pcVar3;
  
  *(undefined8 *)(param_1 + ___lazy_storage___urlSession) = 0;
  lVar1 = receivedData;
  pcVar3 = (class_t *)PTR___swiftEmptyArrayStorage_0020e328;
  puVar2 = PTR___swiftEmptyArrayStorage_0020e328;
  FUN_0002637c();
  *(undefined **)(param_1 + lVar1) = puVar2;
  lVar1 = completionHandlers;
  FUN_000264dc();
  *(class_t **)(param_1 + lVar1) = pcVar3;
  FUN_000a12a0();
  local_40.receiver = param_1;
  local_40.super_class = pcVar3;
  IVar4 = _objc_msgSendSuper2(&local_40,"init");
  return IVar4;
}

// ===== _TtC11MDTextKitUI18LinkMetadataParser::.cxx_destruct @ 000a1258 =====

void _TtC11MDTextKitUI18LinkMetadataParser::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + receivedData));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + completionHandlers));
  return;
}

// ===== _TtC11MDTextKitUI18LinkMetadataParser::URLSession:dataTask:didReceiveResponse:completionHandler: @ 000a12c0 =====

void _TtC11MDTextKitUI18LinkMetadataParser::
     URLSession_dataTask_didReceiveResponse_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  
  aBlock = __Block_copy((void *)param_6);
  FUN_000a1cac(param_5,aBlock);
  __Block_release(aBlock);
  return;
}

// ===== _TtC11MDTextKitUI18LinkMetadataParser::URLSession:dataTask:didReceiveData: @ 000a1560 =====

void _TtC11MDTextKitUI18LinkMetadataParser::URLSession_dataTask_didReceiveData_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  Data DVar1;
  
  DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_5);
  FUN_000a1e34(param_4,DVar1.unknown,param_2);
  FUN_00016a30(DVar1.unknown,param_2);
  return;
}

// ===== _TtC11MDTextKitUI18LinkMetadataParser::URLSession:task:didCompleteWithError: @ 000a1c20 =====

void _TtC11MDTextKitUI18LinkMetadataParser::URLSession_task_didCompleteWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  FUN_000a21a0(param_4,param_5);
  return;
}

