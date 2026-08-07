#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ibc_common",
            "a3_data_f",
			"a3_functions_f",
			"a3_ui_f",
			"a3_uifonts_f",
			"a3_3den"
        };
        author = "ArmaForces";
        VERSION_CONFIG;
    };
};

#include "ui\CfgControls.hpp"
#include "ui\RscMsgBox.hpp"
#include "ui\CfgWhitelist.hpp"
