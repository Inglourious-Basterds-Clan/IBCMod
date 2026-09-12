class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    class InventoryOpticsItem_Base_F;
    class InventoryUnderItem_Base_F;
    class ItemCore;
    class Pistol;
    class Rifle;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class JCA_hgun_P320_base_F: Pistol_Base_F {
        ACE_barrelLength = 99;
        ACE_barrelTwist = 250;
        initSpeed = -1;
        magazines[] = {
            "JCA_15Rnd_9x19_P320C_FMJ_Mag",
            "JCA_15Rnd_9x19_P320C_JHP_Mag",
            "JCA_15Rnd_9x19_P320C_Red_Mag",
            "JCA_15Rnd_9x19_P320C_Green_Mag",
            "JCA_15Rnd_9x19_P320C_Yellow_Mag",
            "JCA_15Rnd_9x19_P320C_IR_Mag"
        };
        magazineWell[] = {
            "JCA_P320_Compact_9x19"
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.001527;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 16.3;
        };
    };
    class JCA_hgun_P226_base_F: Pistol_Base_F
    {
        ACE_barrelLength = 112;
        ACE_barrelTwist = 250;
        initSpeed = -1;
        magazines[] = {
            "JCA_15Rnd_9x19_P226_Mag",
            "JCA_15Rnd_9x19_P226_JHP_Mag",
            "JCA_15Rnd_9x19_P226_SUB_Mag",
            "JCA_15Rnd_9x19_P226_Red_Mag",
            "JCA_15Rnd_9x19_P226_Green_Mag",
            "JCA_15Rnd_9x19_P226_Yellow_Mag",
            "JCA_15Rnd_9x19_P226_IR_Mag"
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.001138;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 21.3;
        };
    };
    class JCA_hgun_G17_base_F: Pistol_Base_F
    {
        ACE_barrelLength = 114;
        ACE_barrelTwist = 250;
        initSpeed = -1;
        magazines[] = {
            "JCA_17Rnd_9x19_G17_Mag",
            "JCA_17Rnd_9x19_G17_JHP_Mag",
            "JCA_17Rnd_9x19_G17_SUB_Mag",
            "JCA_17Rnd_9x19_G17_Red_Mag",
            "JCA_17Rnd_9x19_G17_Green_Mag",
            "JCA_17Rnd_9x19_G17_Yellow_Mag",
            "JCA_17Rnd_9x19_G17_IR_Mag"
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.00111;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 13.2;
        };
    };
    class JCA_hgun_M9A1_base_F: Pistol_Base_F {
        ACE_barrelLength = 125;
        ACE_barrelTwist = 250;
        initSpeed = -1;
        magazines[] = {
            "JCA_15Rnd_9x19_M9A1_Mag",
            "JCA_15Rnd_9x19_M9A1_JHP_Mag",
            "JCA_15Rnd_9x19_M9A1_SUB_Mag",
            "JCA_15Rnd_9x19_M9A1_Red_Mag",
            "JCA_15Rnd_9x19_M9A1_Green_Mag",
            "JCA_15Rnd_9x19_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x19_M9A1_IR_Mag"
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.000966;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 20.8;
        };
    };
    class JCA_smg_MP5_base_F: Rifle_Short_Base_F {
        ACE_barrelLength = 225;
        ACE_barrelTwist = 250;
        ACE_RailHeightAboveBore = 3.74837;
        maxZeroing = 400;
        initSpeed = -1;
        descriptionShort = "Submachine Gun<br />Caliber: 9x19 mm";
        magazines[] = {
            "JCA_30Rnd_9x19_MP5_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag"
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.000765;
        };
        class FullAuto: Mode_FullAuto {
            dispersion = 0.000765;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 67.9;
        };
    };
    class JCA_smg_MP5_AFG_base_F: JCA_smg_MP5_base_F {};
    class JCA_smg_MP5_VFG_base_F: JCA_smg_MP5_base_F {};
    class JCA_smg_MP5_FL_base_F: JCA_smg_MP5_base_F {};
    class JCA_smg_MP5_AFG_sand_F: JCA_smg_MP5_AFG_base_F {
        magazines[] = {
            "JCA_30Rnd_9x19_MP5_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_smg_MP5_VFG_sand_F: JCA_smg_MP5_VFG_base_F {
        magazines[] = {
            "JCA_30Rnd_9x19_MP5_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_smg_MP5_FL_sand_F: JCA_smg_MP5_FL_base_F {
        magazines[] = {
            "JCA_30Rnd_9x19_MP5_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_hgun_Mk23_base_F: Pistol_Base_F {
        ACE_barrelLength = 149;
        ACE_barrelTwist = 378;
        initSpeed = -1;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 26.7;
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.001428;
        };
    };
    class JCA_smg_UMP_base_F: Rifle_Short_Base_F {
        ACE_RailHeightAboveBore = 4.84595;
        ACE_barrelLength = 200;
        ACE_barrelTwist = 406;
        maxZeroing = 300;
        initSpeed = -1;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 49.8;
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.001186;
        };
        class FullAuto: Mode_FullAuto {
            dispersion = 0.001186;
        };
        magazines[] = {
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag"
        };
    };
    class JCA_smg_UMP_AFG_base_F: JCA_smg_UMP_base_F {};
    class JCA_smg_UMP_VFG_base_F: JCA_smg_UMP_base_F {};
    class JCA_smg_UMP_sand_F: JCA_smg_UMP_base_F
    {
        magazines[] = {
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag"
        };
    };
    class JCA_smg_UMP_AFG_sand_F: JCA_smg_UMP_AFG_base_F {
        magazines[] = {
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag"
        };
    };
    class JCA_smg_UMP_VFG_sand_F: JCA_smg_UMP_VFG_base_F {
        magazines[] = {
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag"
        };
    };
    class JCA_arifle_HK433_base_F: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        ACE_railHeightAboveBore = 3.71386;
        maxZeroing = 1000;
        initSpeed = -0.942679;
        canShootInWater = 1;
        magazines[] = {
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77.2;
        };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000540;
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000540;
        };
    };
    class JCA_arifle_HK433_short_base_F: JCA_arifle_HK433_base_F {
        ACE_barrelLength = 279.4;
        maxZeroing = 900;
        initSpeed = -0.8727;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75;
        };
        class Single: Single {
            dispersion = 0.000612;
        };
        class FullAuto: FullAuto {
            dispersion = 0.000612;
        };
    };
    class JCA_arifle_HK433_sand_F: JCA_arifle_HK433_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_HK433_short_sand_F: JCA_arifle_HK433_short_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A1_base_F: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        ACE_railHeightAboveBore = 2.42081; 
        maxZeroing = 1000;
        initSpeed = -0.942679;
        canShootInWater = 1;
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 63.6; 
        };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000540;
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000540;
        };
    };
    class JCA_arifle_M4A1_GL_base_F: JCA_arifle_M4A1_base_F {
        ACE_barrelLength = 368.3;
        initSpeed = -0.942679;
        descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 93.6;
        };
    };
    class JCA_arifle_M4A1_short_base_F: JCA_arifle_M4A1_base_F {
        ACE_barrelLength = 261.62;
        maxZeroing = 900;
        initSpeed = -0.8545;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 60;
        };
        class Single: Single {
            dispersion = 0.000636;
        };
        class FullAuto: FullAuto {
            dispersion = 0.000636;
        };
    };
    class JCA_arifle_M4A1_sand_F: JCA_arifle_M4A1_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M4A1_GL_sand_F: JCA_arifle_M4A1_GL_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M4A1_short_sand_F: JCA_arifle_M4A1_short_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M4A4_base_F: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 261.62;
        ACE_railHeightAboveBore = 2.42081;
        maxZeroing = 900;
        initSpeed = -0.8545;
        canShootInWater = 1;
        magazines[] = {
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 60;
        };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000636;
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000636;
        };
    };
    class JCA_arifle_M4A4_AFG_base_F: JCA_arifle_M4A4_base_F {};
    class JCA_arifle_M4A4_VFG_base_F: JCA_arifle_M4A4_base_F {};
    class JCA_arifle_M4A4_GL_base_F: JCA_arifle_M4A4_base_F {
        ACE_barrelLength = 261.62;
        initSpeed = -0.8545; 
        descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 90;
        };
    };
    class JCA_arifle_M4A4_AFG_sand_F: JCA_arifle_M4A4_AFG_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A4_VFG_sand_F: JCA_arifle_M4A4_VFG_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A4_GL_sand_F: JCA_arifle_M4A4_GL_base_F {
        magazines[]= {
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M16A4_base_F: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 508;
        ACE_railHeightAboveBore = 2.42081;
        maxZeroing = 1100;
        initSpeed = -1;
        canShootInWater = 1;
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87.9;
        };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000494;
        };
        class Burst: Mode_Burst {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000494;
        };
    };
    class JCA_arifle_M16A4_FG_base_F: JCA_arifle_M16A4_base_F {
        initSpeed = -1;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87.9;
        };
    };
    class JCA_arifle_M16A4_GL_base_F: JCA_arifle_M16A4_base_F {
        initSpeed = -1;
        descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 117.9;
        };
    };
    class JCA_arifle_M16A4_sand_F: JCA_arifle_M16A4_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M16A4_FG_sand_F: JCA_arifle_M16A4_FG_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M16A4_GL_sand_F: JCA_arifle_M16A4_GL_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_SCAR_L_base_F: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        ACE_railHeightAboveBore = 4.38847;
        maxZeroing = 1000;
        initSpeed = -0.942679;
        canShootInWater = 1;
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 79.4;
        };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000540;
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType {
                beginwater1[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[] = {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[] = {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion = 0.000540;
        };
    };
    class JCA_arifle_SCAR_L_GL_base_F: JCA_arifle_SCAR_L_base_F {
        ACE_barrelLength = 254;
        maxZeroing = 900;
        initSpeed = -0.8467;
        descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 104.9;
        };
        class Single: Single
        {
            dispersion = 0.000646;
        };
        class FullAuto: FullAuto
        {
            dispersion = 0.000646;
        };
    };
    class JCA_arifle_SCAR_L_short_base_F: JCA_arifle_SCAR_L_base_F {
        ACE_barrelLength = 254;
        maxZeroing = 900;
        initSpeed = -0.8467;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75;
        };
        class Single: Single {
            dispersion = 0.000646;
        };
        class FullAuto: FullAuto {
            dispersion = 0.000646;
        };
    };
    class JCA_arifle_SCAR_L_sand_F: JCA_arifle_SCAR_L_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_SCAR_L_GL_sand_F: JCA_arifle_SCAR_L_GL_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_SCAR_L_short_sand_F: JCA_arifle_SCAR_L_short_base_F {
        magazines[] = {
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_HK437_base_F;
    class JCA_arifle_HK437_AFG_base_F: JCA_arifle_HK437_base_F {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_HK437_VFG_base_F: JCA_arifle_HK437_base_F {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_HK437_AFG_black_F: JCA_arifle_HK437_AFG_base_F {
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 228.6;
        ACE_railHeightAboveBore = 3.71386;
        maxZeroing = 700;
        initSpeed = -1;
        magazines[] = {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.3;
        };
        class Single: Single {
            dispersion = 0.0004;
        };
        class FullAuto: FullAuto {
            dispersion = 0.0004;
        };
    };
    class JCA_arifle_HK437_VFG_black_F: JCA_arifle_HK437_VFG_base_F {
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 228.6;
        ACE_railHeightAboveBore = 3.71386;
        maxZeroing = 700;
        initSpeed = -1;
        magazines[] = {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.3;
        };
        class Single: Single {
            dispersion = 0.0004;
        };
        class FullAuto: FullAuto {
            dispersion = 0.0004;
        };
    };
    class JCA_arifle_HK437_AFG_sand_F: JCA_arifle_HK437_AFG_base_F
    {
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 228.6;
        ACE_railHeightAboveBore = 3.71386;
        maxZeroing = 700;
        initSpeed = -1;
        magazines[] = {
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.3;
        };
        class Single: Single {
            dispersion = 0.0004;
        };
        class FullAuto: FullAuto {
            dispersion = 0.0004;
        };
    };
    class JCA_arifle_HK437_VFG_sand_F: JCA_arifle_HK437_VFG_base_F {
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 228.6;
        ACE_railHeightAboveBore = 3.71386;
        maxZeroing = 700;
        initSpeed = -1;
        magazines[] = {
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.3;
        };
        class Single: Single {
            dispersion = 0.0004;
        };
        class FullAuto: FullAuto
        {
            dispersion = 0.0004;
        };
    };
    class JCA_arifle_HK437_AFG_olive_F: JCA_arifle_HK437_AFG_base_F {
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 228.6;
        ACE_railHeightAboveBore = 3.71386;
        maxZeroing = 700;
        initSpeed = -1;
        magazines[] = {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.3;
        };
        class Single: Single {
            dispersion = 0.0004;
        };
        class FullAuto: FullAuto {
            dispersion = 0.0004;
        };
    };
    class JCA_arifle_HK437_VFG_olive_F: JCA_arifle_HK437_VFG_base_F
    {
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 228.6;
        ACE_railHeightAboveBore = 3.71386;
        maxZeroing = 700;
        initSpeed = -1;
        magazines[] = {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.3;
        };
        class Single: Single {
            dispersion = 0.0004;
        };
        class FullAuto: FullAuto {
            dispersion = 0.0004;
        };
    };
    class JCA_arifle_SCAR_H_base_F: Rifle_Base_F {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 406.4;
        ACE_railHeightAboveBore = 4.38847;
        maxZeroing = 1400;
        initSpeed = -0.9559;
        descriptionShort = "Assault Rifle<br />Caliber: 7.62x51 mm";
        magazines[] = {
            "JCA_20Rnd_762x51_SCAR_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Mag",
            "JCA_20Rnd_762x51_SCAR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Sand_Mag"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80; 
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.000481;
        };
        class FullAuto: Mode_FullAuto {
            dispersion = 0.000481;
        };
    };
    class JCA_arifle_SCAR_H_GL_base_F: JCA_arifle_SCAR_H_base_F {
        ACE_barrelLength = 330.2;
        maxZeroing = 1300;
        initSpeed = -0.9096;
        descriptionShort = "Assault Rifle<br />Caliber: 7.62x51 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 106.3;
        };
        class Single: Single {
            dispersion = 0.000527;
        };
        class FullAuto: FullAuto {
            dispersion = 0.000527;
        };
    };
    class JCA_arifle_SCAR_H_short_base_F: JCA_arifle_SCAR_H_base_F {
        ACE_barrelLength = 330.2;
        maxZeroing = 1300;
        initSpeed = -0.9096;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.2;
        };
        class Single: Single {
            dispersion = 0.000527;
        };
        class FullAuto: FullAuto {
            dispersion = 0.000527;
        };
    };
    class JCA_arifle_SCAR_H_sand_F: JCA_arifle_SCAR_H_base_F {
        magazines[] = {
            "JCA_20Rnd_762x51_SCAR_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Mag"
        };
    };
    class JCA_arifle_SCAR_H_GL_sand_F: JCA_arifle_SCAR_H_GL_base_F {
        magazines[] = {
            "JCA_20Rnd_762x51_SCAR_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Mag"
        };
    };
    class JCA_arifle_SCAR_H_short_sand_F: JCA_arifle_SCAR_H_short_base_F {
        magazines[] = {
            "JCA_20Rnd_762x51_SCAR_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Sand_Mag",
            "JCA_20Rnd_762x51_SCAR_Mag",
            "JCA_20Rnd_762x51_SCAR_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Green_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Mag",
            "JCA_20Rnd_762x51_SCAR_Tracer_IR_Mag",
            "JCA_20Rnd_762x51_SCAR_M80A1_Mag",
            "JCA_20Rnd_762x51_SCAR_M993AP_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk316_Mag",
            "JCA_20Rnd_762x51_SCAR_Mk319_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Mag",
            "JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Mag",
            "JCA_20Rnd_762x51_SCAR_Subsonic_Mag"
        };
    };
    class JCA_arifle_SR10_base_F: Rifle_Base_F {
        ACE_barrelTwist = 254;
        ACE_barrelLength = 368.3;
        ACE_railHeightAboveBore = 2.39586;
        maxZeroing = 1400; 
        initSpeed = -0.933;
        magazines[] = {
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M80A1_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Mk316_PMAG",
            "JCA_20Rnd_762x51_Mk319_PMAG",
            "JCA_20Rnd_762x51_SLAP_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_Sand_PMAG",
            "JCA_20Rnd_762x51_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_PMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M80A1_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Mk316_SMAG",
            "JCA_20Rnd_762x51_Mk319_SMAG",
            "JCA_20Rnd_762x51_SLAP_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_Sand_SMAG",
            "JCA_20Rnd_762x51_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_SMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 120;
        };
        class single: Mode_SemiAuto {
            dispersion = 0.000502;
        };
    };
    class JCA_arifle_SR10_AFG_base_F: JCA_arifle_SR10_base_F {};
    class JCA_arifle_SR10_VFG_base_F: JCA_arifle_SR10_base_F {};
    class JCA_arifle_SR10_AFG_sand_F: JCA_arifle_SR10_AFG_base_F
    {
        magazines[] = {
            "JCA_20Rnd_762x51_Sand_PMAG",
            "JCA_20Rnd_762x51_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M80A1_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Mk316_PMAG",
            "JCA_20Rnd_762x51_Mk319_PMAG",
            "JCA_20Rnd_762x51_SLAP_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_Sand_SMAG",
            "JCA_20Rnd_762x51_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M80A1_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Mk316_SMAG",
            "JCA_20Rnd_762x51_Mk319_SMAG",
            "JCA_20Rnd_762x51_SLAP_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG"
        };
    };
    class JCA_arifle_SR10_VFG_sand_F: JCA_arifle_SR10_VFG_base_F {
        magazines[]= {
            "JCA_20Rnd_762x51_Sand_PMAG",
            "JCA_20Rnd_762x51_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M80A1_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Mk316_PMAG",
            "JCA_20Rnd_762x51_Mk319_PMAG",
            "JCA_20Rnd_762x51_SLAP_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_Sand_SMAG",
            "JCA_20Rnd_762x51_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M80A1_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Mk316_SMAG",
            "JCA_20Rnd_762x51_Mk319_SMAG",
            "JCA_20Rnd_762x51_SLAP_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG"
        };
    };
    class JCA_arifle_SR25_base_F: Rifle_Base_F {
        ACE_barrelTwist = 285.75;
        ACE_barrelLength = 508;
        ACE_railHeightAboveBore = 2.4188499;
        maxZeroing = 1500;
        initSpeed = -1;
        descriptionShort = "Marksman Rifle<br />Caliber: 7.62x51 mm";
        magazines[]= {
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M80A1_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Mk316_SMAG",
            "JCA_20Rnd_762x51_Mk319_SMAG",
            "JCA_20Rnd_762x51_SLAP_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_Sand_SMAG",
            "JCA_20Rnd_762x51_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_SMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M80A1_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Mk316_PMAG",
            "JCA_20Rnd_762x51_Mk319_PMAG",
            "JCA_20Rnd_762x51_SLAP_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_Sand_PMAG",
            "JCA_20Rnd_762x51_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_PMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 153;
        };
        class single: Mode_SemiAuto {
            dispersion = 0.000267;
        };
    };
    class JCA_arifle_SR25_sand_F: JCA_arifle_SR25_base_F {
        magazines[] = {
            "JCA_20Rnd_762x51_Sand_SMAG",
            "JCA_20Rnd_762x51_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_SMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M80A1_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Mk316_SMAG",
            "JCA_20Rnd_762x51_Mk319_SMAG",
            "JCA_20Rnd_762x51_SLAP_SMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_Sand_PMAG",
            "JCA_20Rnd_762x51_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG",
            "JCA_20Rnd_762x51_M80A1_Sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk316_Sand_PMAG",
            "JCA_20Rnd_762x51_Mk319_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Sand_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_Sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_Sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M80A1_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Mk316_PMAG",
            "JCA_20Rnd_762x51_Mk319_PMAG",
            "JCA_20Rnd_762x51_SLAP_PMAG",
            "JCA_20Rnd_762x51_SLAP_Tracer_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG"
        };
    };
    class JCA_srifle_AWM_base_F: Rifle_Long_Base_F {
        ACE_barrelTwist = 279.4;
        ACE_barrelLength = 685.8;
        ACE_railHeightAboveBore = 1.64895;
        ace_overheating_closedBolt = 1;
        maxZeroing = 2300;
        initSpeed = -1;
        descriptionShort = "Sniper Rifle<br />Caliber: .338 Lapua Magnum";
        magazines[] = {
            "JCA_5Rnd_338LM_AWM_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Red_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Green_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_IR_Mag",
            "JCA_5Rnd_338LM_AWM_AP_Mag",
            "JCA_5Rnd_338LM_AWM_API_Mag"
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.000209;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 149.9;
        };
    };
    class JCA_srifle_M107_base_F: Rifle_Long_Base_F {
        ACE_RailHeightAboveBore = 3.46095;
        ACE_barrelLength = 736.6;
        ACE_barrelTwist = 381;
        ace_overheating_closedBolt = 1;
        maxZeroing = 3200;
        initSpeed = -1;
        descriptionShort = "Sniper Rifle<br />Caliber: 12.7x99 mm";
        magazines[] = {
            "JCA_10Rnd_127x99_M107_Mag",
            "JCA_10Rnd_127x99_M107_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Tracer_IR_Mag",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Sand_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Sand_Tracer_IR_Mag",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Sand_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Sand_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR"
        };
        class Single: Mode_SemiAuto {
            dispersion = 0.000267;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 287;
        };
    };
    class JCA_srifle_M107_sand_F: JCA_srifle_M107_base_F {
        magazines[]  = {
            "JCA_10Rnd_127x99_M107_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Sand_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Sand_Tracer_IR_Mag",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Sand_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Sand_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_Mag",
            "JCA_10Rnd_127x99_M107_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Tracer_IR_Mag",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Mag",
            "JCA_10Rnd_127x99_APDS_M107_Tracer_Red_Mag",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR"
        };
    };
    class JCA_optic_MRO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 2.32987;
    };
    class JCA_optic_MPO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 1.40109;
    };
    class JCA_optic_ROS_base: ItemCore {
        ACE_ScopeHeightAboveRail = 3.71751;
    };
    class JCA_optic_PRO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 1.72206;
    };
    class JCA_optic_ICO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.33929;
    };
    class JCA_optic_IHO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.91653;
    };
    class JCA_optic_IHO_base_magnifier: ItemCore {
        ACE_ScopeHeightAboveRail = 4.91653;
    };
    class JCA_optic_IHO_base_magnifier_UP: ItemCore {
        ACE_ScopeHeightAboveRail = 4.91653;
    };
    class JCA_optic_AHO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.80373;
    };
    class JCA_optic_ARO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 2.98032;
    };
    class JCA_optic_CRO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 2.77292;
    };
    class JCA_optic_ARS_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.12031;
    };
    class JCA_optic_MROS_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.48749;
    };
    class JCA_optic_MROS_base_magnifier: ItemCore {
        ACE_ScopeHeightAboveRail = 4.48749;
    };
    class JCA_optic_MROS_base_magnifier_UP: ItemCore {
        ACE_ScopeHeightAboveRail = 4.48749;
    };
    class JCA_optic_AICO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.15842;
    };
    class JCA_optic_ACOG_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.4543;
    };
    class JCA_optic_MRCS_base: ItemCore {
        ACE_ScopeHeightAboveRail = 3.75;
    };
    class JCA_optic_CRBS_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.58528; 
        ACE_ScopeZeroRange = 100; 
        ACE_ScopeAdjust_Vertical[] = {0,23}; 
        ACE_ScopeAdjust_Horizontal[] = {-11,11}; 
        ACE_ScopeAdjust_VerticalIncrement = 0.1; 
        ACE_ScopeAdjust_HorizontalIncrement = 0.1; 
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 17.3;
            class OpticsModes {
                class CRBS {
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2300;
                };
            };
        };
    };
    class JCA_optic_MRPS_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.51714;
        ACE_ScopeZeroRange = 100;
        ACE_ScopeAdjust_Vertical[] = {0,19};
        ACE_ScopeAdjust_Horizontal[] = {-9,9}; 
        ACE_ScopeAdjust_VerticalIncrement = 0.1;
        ACE_ScopeAdjust_HorizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 13.1;
            class OpticsModes {
                class MRPS
                {
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2200;
                };
            };
        };
    };
    class JCA_optic_HPPO_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.89867;
        ACE_ScopeZeroRange = 100;
        ACE_ScopeAdjust_Vertical[] = {0,34};
        ACE_ScopeAdjust_Horizontal[] = {-8,8};
        ACE_ScopeAdjust_VerticalIncrement = 0.1;
        ACE_ScopeAdjust_HorizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 24.8;
            class OpticsModes {
                class HPPO {
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2800;
                };
            };
        };
    };
    class JCA_optic_HPPO_RAD_base: ItemCore {
        ACE_ScopeHeightAboveRail = 4.89867;
        ACE_ScopeZeroRange = 100;
        ACE_ScopeAdjust_Vertical[] = {0,34};
        ACE_ScopeAdjust_Horizontal[] = {-8,8};
        ACE_ScopeAdjust_VerticalIncrement = 0.1;
        ACE_ScopeAdjust_HorizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 34.1;
            class OpticsModes {
                class HPPO {
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2800;
                };
            };
        };
    };
    class JCA_optic_HPCS_base: ItemCore {
        ACE_ScopeZeroRange = 100;
        ACE_ScopeHeightAboveRail = 3.85973;
        ACE_ScopeAdjust_Vertical[] = {0,16};
        ACE_ScopeAdjust_Horizontal[] = {-6.5,6.5};
        ACE_ScopeAdjust_VerticalIncrement = 0.1;
        ACE_ScopeAdjust_HorizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 18.6;
            class OpticsModes {
                class HPCS {
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 2000;
                };
            };
        };
    };
    class JCA_muzzle_snds_advanced_base: ItemCore {
        class ItemInfo;
    };
    class JCA_muzzle_snds_enhanced_base: ItemCore {
        class ItemInfo;
    };
    class JCA_muzzle_snds_tactical_base: ItemCore {
        class ItemInfo;
    };
    class JCA_muzzle_snds_MP5_base: ItemCore {
        class ItemInfo;
    };
    class JCA_muzzle_snds_SR25_base: ItemCore {
        class ItemInfo;
    };
    class JCA_muzzle_snds_AWM_base: ItemCore {
        class ItemInfo;
    };
    class JCA_muzzle_snds_M107_base: ItemCore {
        class ItemInfo;
    };
    class muzzle_snds_H: ItemCore {
        class ItemInfo;
    };
    class JCA_muzzle_snds_9MM_enhanced_black: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            mass = 5.5;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_9MM_enhanced_sand: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            mass = 5.5;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_9MM_enhanced_olive: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo
        {
            mass = 5.5;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1; 
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_9MM_tactical_black: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 6;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_9MM_tactical_sand: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 6;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef
            {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_9MM_tactical_olive: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 6;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_MP5_black: JCA_muzzle_snds_MP5_base {
        class ItemInfo: ItemInfo
        {
            mass = 9.5;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_MP5_sand: JCA_muzzle_snds_MP5_base {
        class ItemInfo: ItemInfo
        {
            mass = 9.5;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95; 
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_MP5_olive: JCA_muzzle_snds_MP5_base {
        class ItemInfo: ItemInfo {
            mass = 9.5; 
            class MagazineCoef {
                initSpeed = 1; 
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_45_tactical_black: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 8.4;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_45_tactical_sand: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 8.4;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1; 
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95; 
                recoilProneCoef = 0.95; 
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_45_tactical_olive: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 8.4; 
            class MagazineCoef {
                initSpeed = 1; 
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_556_advanced_black: JCA_muzzle_snds_advanced_base {
        class ItemInfo: ItemInfo
        {
            mass = 8;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_556_advanced_sand: JCA_muzzle_snds_advanced_base {
        class ItemInfo: ItemInfo {
            mass = 8;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_556_advanced_olive: JCA_muzzle_snds_advanced_base {
        class ItemInfo: ItemInfo {
            mass = 8;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_556_Enhanced_black: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            mass = 8; 
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_556_Enhanced_sand: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            mass = 8; 
            class MagazineCoef {
                initSpeed = 1; 
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_556_Enhanced_olive: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            mass = 8;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
        inertia = 0.1;
    };
    class JCA_muzzle_snds_300_Enhanced_black: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_300_Enhanced_sand: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_300_Enhanced_olive: JCA_muzzle_snds_enhanced_base {
        class ItemInfo: ItemInfo {
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_black: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 12.3;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_sand: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 12.3;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_olive: JCA_muzzle_snds_tactical_base {
        class ItemInfo: ItemInfo {
            mass = 12.3;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_black: JCA_muzzle_snds_SR25_base {
        class ItemInfo: ItemInfo {
            mass = 18.7;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_sand: JCA_muzzle_snds_SR25_base {
        class ItemInfo: ItemInfo {
            mass = 18.7;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_olive: JCA_muzzle_snds_SR25_base {
        class ItemInfo: ItemInfo {
            mass = 18.7;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_black: JCA_muzzle_snds_AWM_base {
        class ItemInfo: ItemInfo {
            mass = 10.5;
            class MagazineCoef {
                initSpeed = 1; 
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_sand: JCA_muzzle_snds_AWM_base {
        class ItemInfo: ItemInfo {
            mass = 10.5;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_olive: JCA_muzzle_snds_AWM_base {
        class ItemInfo: ItemInfo {
            mass = 10.5;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_M107_black: JCA_muzzle_snds_M107_base {
        class ItemInfo: ItemInfo {
            mass = 48.8;
            class MagazineCoef {
                initSpeed = 1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_M107_sand: JCA_muzzle_snds_M107_base{
        class ItemInfo: ItemInfo {
            mass = 48.8;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_muzzle_snds_M107_olive: JCA_muzzle_snds_M107_base {
        class ItemInfo: ItemInfo {
            mass = 48.8;
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class muzzle_snds_L: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.03;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class muzzle_snds_acp: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class muzzle_snds_M: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class muzzle_snds_B: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 0.3;
                audibleFire = 0.04;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
            };
            class MuzzleCoef {
                dispersionCoef = 1;
                artilleryDispersionCoef = 1;
                fireLightCoef = 0.1;
                recoilCoef = 0.95;
                recoilProneCoef = 0.95;
                minRangeCoef = 1;
                minRangeProbabCoef = 1;
                midRangeCoef = 1;
                midRangeProbabCoef = 1;
                maxRangeCoef = 1;
                maxRangeProbabCoef = 1;
            };
        };
    };
    class JCA_bipod_04_base: ItemCore {
        class ItemInfo: InventoryUnderItem_Base_F {
            mass = 8.8;
        };
    };
    class JCA_bipod_AWM_base: ItemCore {
        class ItemInfo: InventoryUnderItem_Base_F {
            mass = 13;
        };
    };
};
