#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ibc_main",
            "cba_main",
            "ace_arsenal",
            "acre_main"
        };
        author = "kolmipilot";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
