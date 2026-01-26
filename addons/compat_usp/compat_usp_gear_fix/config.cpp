#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ibc_main", "USP_Armor_Fix"};
        //skipWhenMissingDependencies = 1; nie potrzebne bo to tylko aby nadpisalo po tym modzie, a usp jesty sprawdzane w głównym addonie?
        author = "kolmipilot";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
