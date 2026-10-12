// ===== _TtC11MDTextKitUI24LinkMetadataCacheManager::init @ 0002b5b4 =====

ID _TtC11MDTextKitUI24LinkMetadataCacheManager::init(ID param_1,SEL param_2)

{
  FUN_0002b44c();
  return param_1;
}

// ===== _TtC11MDTextKitUI24LinkMetadataCacheManager::.cxx_destruct @ 0002b608 =====

void _TtC11MDTextKitUI24LinkMetadataCacheManager::_cxx_destruct(ID param_1,SEL param_2)

{
  URL UVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cache));
  lVar1 = cacheDirectoryURL;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + lVar1,UVar2.unknown);
  return;
}

