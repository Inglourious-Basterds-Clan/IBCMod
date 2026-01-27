#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;

        author = "kolmipilot";
        authors[] = {"kolmipilot"};

        VERSION_CONFIG;

        requiredAddons[] = {"USP_Gear_Acc", "USP_Gear_NVG", "ibc_main", "USP_Gear_Pack"};
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "BettrIR_Config.hpp"
