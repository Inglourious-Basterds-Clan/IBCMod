#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;

        author = "MiszczuZPolski";
        authors[] = {"MiszczuZPolski"};

        VERSION_CONFIG;

        requiredAddons[] = {"rhsusf_main_loadorder"};
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgWeapons.hpp"
