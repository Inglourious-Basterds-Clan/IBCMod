#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ibc_main", "ace_hearing", "USP_Gear_Pack", "USP_Gear_Acc", "USP_Gear_Body", "USP_Gear_Face", "USP_Gear_Head", "USP_Gear_NVG", "USP_Gear_Pack", "USP_Gear_Vest"};
        skipWhenMissingDependencies = 1;
        author = "kolmipilot";
        VERSION_CONFIG;
    };
};

//#include "Helmets.hpp"
#include "CfgWeapons.hpp"
