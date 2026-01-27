#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ibc_main", "ace_hearing", "USP_Gear_Head"};
        skipWhenMissingDependencies = 1;
        author = "kolmipilot";
        VERSION_CONFIG;
    };
};

#include "Helmets.hpp"
