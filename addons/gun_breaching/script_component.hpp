#define COMPONENT gun_breaching
#define COMPONENT_BEAUTIFIED Gun_Breaching
#include "..\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_GUN_BREACHING
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_GUN_BREACHING
    #define DEBUG_SETTINGS DEBUG_SETTINGS_GUN_BREACHING
#endif

#include "..\main\script_macros.hpp"


#define WIRE_CLASS "Land_MetalWire_F"
