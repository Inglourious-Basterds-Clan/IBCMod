#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;

        author = "kolmipilot";
        authors[] = {"kolmipilot"};

        VERSION_CONFIG;

        requiredAddons[] = {"rhssaf_c_gear", "rhssaf_main", "ibc_main"};
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgWeapons.hpp"
