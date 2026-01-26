#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ibc_main", "USP_Armor_Fix"};
        skipWhenMissingDependencies = 1;
        author = "kolmipilot";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
