#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;

        author = "kolmipilot";
        authors[] = {"kolmipilot"};

        VERSION_CONFIG;

        requiredAddons[] = {"rhs_main_loadorder", "ibc_main"};
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
