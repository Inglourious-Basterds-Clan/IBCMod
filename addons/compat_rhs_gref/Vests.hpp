// Macro for standard vests without ACE hearing protection (armor 6)
#define RHS_VEST_MEDIUM(VestClass,BaseClass) \
class VestClass: BaseClass { \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo \
        { \
            class Neck \
            { \
                hitpointName = "HitNeck"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Chest \
            { \
                hitpointName = "HitChest"; \
                armor = 12; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Arms \
            { \
                hitpointName = "HitArms"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Diaphragm \
            { \
                hitpointName = "HitDiaphragm"; \
                armor = 12; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Abdomen \
            { \
                hitpointName = "HitAbdomen"; \
                armor = 12; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Pelvis \
            { \
                hitpointName = "HitPelvis"; \
                armor = 12; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
            class Body \
            { \
                hitpointName = "HitBody"; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
        }; \
    }; \
}

// Macro for Load bearing Equipment (armor 0)
#define RHS_VEST_LBE(VestClass,BaseClass) \
class VestClass: BaseClass { \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo \
        { \
            class Neck \
            { \
                hitpointName = "HitNeck"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Chest \
            { \
                hitpointName = "HitChest"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Arms \
            { \
                hitpointName = "HitArms"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Diaphragm \
            { \
                hitpointName = "HitDiaphragm"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Abdomen \
            { \
                hitpointName = "HitAbdomen"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Pelvis \
            { \
                hitpointName = "HitPelvis"; \
                armor = 0; \
                passThrough = 1; \
                simulation = ""; \
            }; \
            class Body \
            { \
                hitpointName = "HitBody"; \
                passThrough = 0.4; \
                simulation = ""; \
            }; \
        }; \
    }; \
}

class VestItem: InventoryItem_Base_F {};
class Vest_Camo_Base: ItemCore
{
    class ItemInfo: VestItem {};
};

class rhs_6b23: Vest_Camo_Base
{
    class ItemInfo;
};

// RHS GREF vests
RHS_VEST_MEDIUM(rhsgref_6b23_khaki,rhs_6b23);
RHS_VEST_MEDIUM(rhsgref_6b23_khaki_rifleman,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_khaki_sniper,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_khaki_officer,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_khaki_nco,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_khaki_medic,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_forest,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_forest_rifleman,rhsgref_6b23_khaki_rifleman);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_mountain,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_mountain_rifleman,rhsgref_6b23_khaki_rifleman);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_mountain_sniper,rhsgref_6b23_khaki_sniper);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_mountain_officer,rhsgref_6b23_khaki_officer);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_mountain_nco,rhsgref_6b23_khaki_nco);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_mountain_medic,rhsgref_6b23_khaki_medic);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_urban,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_urban_rifleman,rhsgref_6b23_khaki_rifleman);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_urban_sniper,rhsgref_6b23_khaki_sniper);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_urban_officer,rhsgref_6b23_khaki_officer);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_urban_nco,rhsgref_6b23_khaki_nco);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_urban_medic,rhsgref_6b23_khaki_medic);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_digi,rhsgref_6b23_khaki);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_digi_rifleman,rhsgref_6b23_khaki_rifleman);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_digi_sniper,rhsgref_6b23_khaki_sniper);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_digi_officer,rhsgref_6b23_khaki_officer);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_digi_nco,rhsgref_6b23_khaki_nco);
RHS_VEST_MEDIUM(rhsgref_6b23_ttsko_digi_medic,rhsgref_6b23_khaki_medic);
RHS_VEST_MEDIUM(rhsgref_otv_khaki,rhsgref_6b23_khaki_rifleman);
RHS_VEST_MEDIUM(rhsgref_otv_digi,rhsgref_otv_khaki);

class rhsgref_TacVest_ERDL: rhsgref_6b23_khaki_rifleman
{
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo 
        {
            class Neck
            {
                hitpointName = "HitNeck";
                armor = 0;
                passThrough = 1;
                simulation = "";    
            };
            class Chest
            {
                hitpointName = "HitChest";
                armor = 8;
                passThrough = 0.5;
                simulation = "";    
            };
            class Arms
            {
                hitpointName = "HitArms";
                armor = 0;
                passThrough = 1;
                simulation = "";    
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 8;
                passThrough = 0.5;
                simulation = "";    
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 8;
                passThrough = 0.5;
                simulation = "";    
            };
            class Pelvis
            {
                hitpointName = "HitPelvis";
                armor = 0;
                passThrough = 1;
                simulation = "";        
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.5;
                simulation = "";    
            };
        };
    };
};

RHS_VEST_LBE(rhsgref_alice_webbing,rhs_6b23);
RHS_VEST_LBE(rhsgref_chestrig,rhs_6b23);
RHS_VEST_LBE(rhsgref_chicom,rhsgref_chestrig);
RHS_VEST_LBE(rhsgref_chicom_m88,rhsgref_chicom);
