#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;

        author = "MiszczuZPolski";
        authors[] = {"MiszczuZPolski", "kolmipilot"};

        VERSION_CONFIG;

        requiredAddons[] = {"Weapons_F_JCA_IA", "Weapons_F_JCA_IA_Accessories", "Weapons_F_JCA_IA_LongRangeRifles_AWM", "Weapons_F_JCA_IA_LongRangeRifles_M107", "Weapons_F_JCA_IA_Pistols_G17", "Weapons_F_JCA_IA_Pistols_M9A1", "Weapons_F_JCA_IA_Pistols_Mk23", "Weapons_F_JCA_IA_Pistols_P226", "Weapons_F_JCA_IA_Pistols_P320", "Weapons_F_JCA_IA_Rifles_HK433", "Weapons_F_JCA_IA_Rifles_HK437", "Weapons_F_JCA_IA_Rifles_M4A1", "Weapons_F_JCA_IA_Rifles_M4A4", "Weapons_F_JCA_IA_Rifles_M16A4", "Weapons_F_JCA_IA_Rifles_SCAR_H", "Weapons_F_JCA_IA_Rifles_SCAR_L", "Weapons_F_JCA_IA_Rifles_SR10", "Weapons_F_JCA_IA_Rifles_SR25", "Weapons_F_JCA_IA_SMGs_MP5", "Weapons_F_JCA_IA_SMGs_UMP","Weapons_F_JCA_HF_Explosives"};
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazinesWells.hpp"
#include "CfgWeapons.hpp"
#include "ACE_ATragMX_Presets.hpp"
