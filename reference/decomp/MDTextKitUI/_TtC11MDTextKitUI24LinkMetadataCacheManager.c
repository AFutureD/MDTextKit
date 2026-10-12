// ===== _TtC11MDTextKitUI24LinkMetadataCacheManager::init @ 0002b5b4 =====

/* Function Stack Size: 0x10 bytes */

ID _TtC11MDTextKitUI24LinkMetadataCacheManager::init(ID param_1,SEL param_2)

{
  FUN_0002b44c();
  return param_1;
}


// ===== _TtC11MDTextKitUI24LinkMetadataCacheManager::.cxx_destruct @ 0002b608 =====

/* Function Stack Size: 0x10 bytes */

void _TtC11MDTextKitUI24LinkMetadataCacheManager::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  URL UVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cache));
  lVar1 = cacheDirectoryURL;
  UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0002b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + lVar1,UVar2.unknown);
  return;
}


