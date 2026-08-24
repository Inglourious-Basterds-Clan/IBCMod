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
class CfgGlasses {
    class None;
    class USP_OVERLORD_BLK: None {
        scope = 0;
        picture = "\usp_gear_acc\data\ui\єЩвФ?ѝкѐ.paa";
    };
    class USP_OVERLORD_CBR: USP_OVERLORD_BLK {
        picture = "\usp_gear_acc\data\ui\ѓТ?ъТѕЯчЭФ.paa";
    };
    class USP_OVERLORD_GRN: USP_OVERLORD_BLK {
        picture = "\usp_gear_acc\data\ui\?ћщРХъУиїы.paa";
    };
    class USP_OVERLORD_MC: USP_OVERLORD_BLK {
        picture = "\usp_gear_acc\data\ui\ўўС*љ.paa";
    };
    class USP_OVERLORD_MIX: USP_OVERLORD_BLK {
        picture = "\usp_gear_acc\data\ui\Ц*иеюжХ.paa";
    };
    class USP_OVERLORD_TAN: USP_OVERLORD_BLK {
        picture = "\usp_gear_acc\data\ui\зєи?оёђля.paa";
    };
    class USP_SUUNTO_BLK: None{
        picture = "";
    };
    class USP_SUUNTO_BLK2: USP_SUUNTO_BLK{
        picture = "";
    };
    class USP_SUUNTO2_BLK: USP_SUUNTO_BLK{
        picture = "";
    };
    class USP_SUUNTO2_BLK2: USP_SUUNTO2_BLK{
        picture = "";
    };
};
