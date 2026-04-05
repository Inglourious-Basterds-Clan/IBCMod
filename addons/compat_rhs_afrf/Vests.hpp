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

#define RHS_VEST_LIGHT(VestClass,BaseClass) \
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
                armor = 8; \
                passThrough = 0.5; \
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
                armor = 8; \
                passThrough = 0.5; \
                simulation = ""; \
            }; \
            class Abdomen \
            { \
                hitpointName = "HitAbdomen"; \
                armor = 8; \
                passThrough = 0.5; \
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
                passThrough = 0.5; \
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
                passThrough = 1; \
                simulation = ""; \
            }; \
        }; \
    }; \
}

class Vest_Camo_Base: ItemCore
{
    class ItemInfo;
};

RHS_VEST_MEDIUM(rhs_6b23,Vest_Camo_Base);
RHS_VEST_MEDIUM(rhs_6b23_crew,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_engineer,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_medic,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_rifleman,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_crewofficer,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_sniper,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_6sh92,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_6sh92_vog,rhs_6b23_6sh92);
RHS_VEST_MEDIUM(rhs_6b23_6sh92_vog_headset,rhs_6b23_6sh92_vog);
RHS_VEST_MEDIUM(rhs_6b23_6sh92_headset,rhs_6b23_6sh92);
RHS_VEST_MEDIUM(rhs_6b23_6sh92_headset_mapcase,rhs_6b23_6sh92);
RHS_VEST_MEDIUM(rhs_6b23_6sh92_radio,rhs_6b23_6sh92);
RHS_VEST_MEDIUM(rhs_6sh46,Vest_Camo_Base);
RHS_VEST_LBE(rhs_vest_commander,Vest_Camo_Base);
class rhs_vest_pistol_holster: rhs_vest_commander
{
    class ItemInfo: ItemInfo
    {
        class HitpointsProtectionInfo 
        {
            class Head
            {
                hitpointName="HitHead";
                Armor=0;
                passThrough = 1;
            };
            class Face
            {
                hitpointName="HitFace";
                Armor=0;
                passThrough = 1;
            };
            class Neck
            {
                hitpointName = "HitNeck";
                Armor=0;
                passThrough = 1;
                simulation = "";    
            };
            class Chest
            {
                hitpointName = "HitChest";
                Armor=0;
                passThrough = 1;
                simulation = "";    
            };
            class Arms
            {
                hitpointName = "HitArms";
                Armor=0;
                passThrough = 1;
                simulation = "";    
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                Armor=0;
                passThrough = 1;
                simulation = "";    
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                Armor=0;
                passThrough = 1;
                simulation = "";    
            };
            class Pelvis
            {
                hitpointName = "HitPelvis";
                Armor=0;
                passThrough = 1;
                simulation = "";        
            };
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 1;
                simulation = "";    
            };
        };
    };
};

class rhs_6b23_digi: rhs_6b23 {};
RHS_VEST_MEDIUM(rhs_6b23_digi_crew,rhs_6b23_crew);
RHS_VEST_MEDIUM(rhs_6b23_digi_engineer,rhs_6b23_engineer);
RHS_VEST_MEDIUM(rhs_6b23_digi_medic,rhs_6b23_medic);
RHS_VEST_MEDIUM(rhs_6b23_digi_rifleman,rhs_6b23_rifleman);
RHS_VEST_MEDIUM(rhs_6b23_digi_crewofficer,rhs_6b23_crewofficer);
RHS_VEST_MEDIUM(rhs_6b23_digi_sniper,rhs_6b23_sniper);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92,rhs_6b23_6sh92);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_vog,rhs_6b23_6sh92_vog);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_vog_headset,rhs_6b23_6sh92_vog_headset);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_headset,rhs_6b23_6sh92_headset);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_headset_mapcase,rhs_6b23_6sh92_headset_mapcase);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_radio,rhs_6b23_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_Spetsnaz,rhs_6b23_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz,rhs_6b23_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_headset_spetsnaz,rhs_6b23_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_spetsnaz2,rhs_6b23_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b23_digi_6sh92_Vog_Spetsnaz,rhs_6b23_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b23_ML,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b23_ML_crew,rhs_6b23_crew);
RHS_VEST_MEDIUM(rhs_6b23_ML_engineer,rhs_6b23_engineer);
RHS_VEST_MEDIUM(rhs_6b23_ML_medic,rhs_6b23_medic);
RHS_VEST_MEDIUM(rhs_6b23_ML_rifleman,rhs_6b23_rifleman);
RHS_VEST_MEDIUM(rhs_6b23_ML_crewofficer,rhs_6b23_crewofficer);
RHS_VEST_MEDIUM(rhs_6b23_ML_sniper,rhs_6b23_sniper);
RHS_VEST_MEDIUM(rhs_6b23_ML_6sh92,rhs_6b23_6sh92);
RHS_VEST_MEDIUM(rhs_6b23_ML_6sh92_vog,rhs_6b23_6sh92_vog);

// Additional vests with medium armor
RHS_VEST_LBE(rhs_vydra_3m,Vest_Camo_Base);
RHS_VEST_MEDIUM(rhs_6b23_vydra_3m,rhs_6b23_6sh92);
RHS_VEST_MEDIUM(rhs_6b23_digi_vydra_3m,rhs_6b23_vydra_3m);
RHS_VEST_MEDIUM(rhs_6b23_ML_vydra_3m,rhs_6b23_vydra_3m);
RHS_VEST_MEDIUM(rhs_6b23_6sh116,rhs_6b23_digi);
RHS_VEST_MEDIUM(rhs_6b23_6sh116_flora,rhs_6b23_6sh116);
RHS_VEST_MEDIUM(rhs_6b23_6sh116_od,rhs_6b23_6sh116);
RHS_VEST_MEDIUM(rhs_6b23_6sh116_mixed,rhs_6b23_6sh116);
RHS_VEST_MEDIUM(rhs_6b23_6sh116_vog,rhs_6b23_6sh116);
RHS_VEST_MEDIUM(rhs_6b23_6sh116_vog_flora,rhs_6b23_6sh116_vog);
RHS_VEST_MEDIUM(rhs_6b23_6sh116_vog_od,rhs_6b23_6sh116_vog);
RHS_VEST_MEDIUM(rhs_6b23_6sh116_vog_mixed,rhs_6b23_6sh116_vog);
RHS_VEST_MEDIUM(rhs_6b13,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6b13_crewofficer,rhs_6b13);
RHS_VEST_MEDIUM(rhs_6b13_6sh92,rhs_6b13);
RHS_VEST_MEDIUM(rhs_6b13_6sh92_vog,rhs_6b13_6sh92);
RHS_VEST_MEDIUM(rhs_6b13_6sh92_headset_mapcase,rhs_6b13_6sh92);
RHS_VEST_MEDIUM(rhs_6b13_6sh92_radio,rhs_6b13_6sh92);
RHS_VEST_MEDIUM(rhs_6b13_EMR,rhs_6b13);
RHS_VEST_MEDIUM(rhs_6b13_EMR_6sh92,rhs_6b13_6sh92);
RHS_VEST_MEDIUM(rhs_6b13_EMR_6sh92_vog,rhs_6b13_6sh92_vog);
RHS_VEST_MEDIUM(rhs_6b13_EMR_6sh92_headset_mapcase,rhs_6b13_6sh92_headset_mapcase);
RHS_VEST_MEDIUM(rhs_6b13_EMR_6sh92_radio,rhs_6b13_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b13_Flora,rhs_6b13);
RHS_VEST_MEDIUM(rhs_6b13_Flora_crewofficer,rhs_6b13_crewofficer);
RHS_VEST_MEDIUM(rhs_6b13_Flora_6sh92,rhs_6b13_6sh92);
RHS_VEST_MEDIUM(rhs_6b13_Flora_6sh92_vog,rhs_6b13_6sh92_vog);
RHS_VEST_MEDIUM(rhs_6b13_Flora_6sh92_headset_mapcase,rhs_6b13_6sh92_headset_mapcase);
RHS_VEST_MEDIUM(rhs_6b13_Flora_6sh92_radio,rhs_6b13_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6b43,rhs_6b23);
RHS_VEST_MEDIUM(rhs_6sh92,Vest_Camo_Base);
RHS_VEST_MEDIUM(rhs_6sh92_vog,rhs_6sh92);
RHS_VEST_MEDIUM(rhs_6sh92_vog_headset,rhs_6sh92_vog);
RHS_VEST_MEDIUM(rhs_6sh92_headset,rhs_6sh92);
RHS_VEST_MEDIUM(rhs_6sh92_radio,rhs_6sh92);
RHS_VEST_MEDIUM(rhs_6sh92_digi,rhs_6sh92);
RHS_VEST_MEDIUM(rhs_6sh92_digi_vog,rhs_6sh92_vog);
RHS_VEST_MEDIUM(rhs_6sh92_digi_vog_headset,rhs_6sh92_vog_headset);
RHS_VEST_MEDIUM(rhs_6sh92_digi_headset,rhs_6sh92_headset);
RHS_VEST_MEDIUM(rhs_6sh92_digi_radio,rhs_6sh92_radio);
RHS_VEST_MEDIUM(rhs_6sh92_vsr,rhs_6sh92);
RHS_VEST_MEDIUM(rhs_6sh92_vsr_vog,rhs_6sh92_vog);
RHS_VEST_MEDIUM(rhs_6sh92_vsr_vog_headset,rhs_6sh92_vog_headset);
RHS_VEST_MEDIUM(rhs_6sh92_vsr_headset,rhs_6sh92_headset);
RHS_VEST_MEDIUM(rhs_6sh92_vsr_radio,rhs_6sh92_radio);

// Light armor vests
RHS_VEST_LIGHT(rhs_6b2,Vest_Camo_Base);
RHS_VEST_LIGHT(rhs_6b2_AK,rhs_6b2);
RHS_VEST_LIGHT(rhs_6b2_chicom,rhs_6b2_AK);
RHS_VEST_LIGHT(rhs_6b2_lifchik,rhs_6b2_AK);
RHS_VEST_LIGHT(rhs_6b2_holster,rhs_6b2_AK);
RHS_VEST_LIGHT(rhs_6b2_RPK,rhs_6b2_AK);
RHS_VEST_LIGHT(rhs_6b2_SVD,rhs_6b2_AK);
RHS_VEST_LIGHT(rhs_6b3,rhs_6b2);
RHS_VEST_LIGHT(rhs_6b3_AK,rhs_6b3);
RHS_VEST_LIGHT(rhs_6b3_AK_2,rhs_6b3_AK);
RHS_VEST_LIGHT(rhs_6b3_AK_3,rhs_6b3_AK);
RHS_VEST_LIGHT(rhs_6b3_holster,rhs_6b3);
RHS_VEST_LIGHT(rhs_6b3_off,rhs_6b3);
RHS_VEST_LIGHT(rhs_6b3_R148,rhs_6b3_AK);
RHS_VEST_LIGHT(rhs_6b3_RPK,rhs_6b3);
RHS_VEST_LIGHT(rhs_6b3_VOG,rhs_6b3);
RHS_VEST_LIGHT(rhs_6b3_VOG_2,rhs_6b3_VOG);
RHS_VEST_LIGHT(rhs_6b5,rhs_6b23);
RHS_VEST_LIGHT(rhs_6b5_officer,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_medic,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_sniper,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_rifleman,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_khaki,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_officer_khaki,rhs_6b5_officer);
RHS_VEST_LIGHT(rhs_6b5_medic_khaki,rhs_6b5_medic);
RHS_VEST_LIGHT(rhs_6b5_sniper_khaki,rhs_6b5_sniper);
RHS_VEST_LIGHT(rhs_6b5_rifleman_khaki,rhs_6b5_rifleman);
RHS_VEST_LIGHT(rhs_6b5_vsr,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_officer_vsr,rhs_6b5_officer);
RHS_VEST_LIGHT(rhs_6b5_medic_vsr,rhs_6b5_medic);
RHS_VEST_LIGHT(rhs_6b5_sniper_vsr,rhs_6b5_sniper);
RHS_VEST_LIGHT(rhs_6b5_rifleman_vsr,rhs_6b5_rifleman);
RHS_VEST_LIGHT(rhs_6b5_ttsko,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_officer_ttsko,rhs_6b5_officer);
RHS_VEST_LIGHT(rhs_6b5_medic_ttsko,rhs_6b5_medic);
RHS_VEST_LIGHT(rhs_6b5_sniper_ttsko,rhs_6b5_sniper);
RHS_VEST_LIGHT(rhs_6b5_rifleman_ttsko,rhs_6b5_rifleman);
RHS_VEST_LIGHT(rhs_6b5_spetsodezhda,rhs_6b5);
RHS_VEST_LIGHT(rhs_6b5_officer_spetsodezhda,rhs_6b5_officer);
RHS_VEST_LIGHT(rhs_6b5_medic_spetsodezhda,rhs_6b5_medic);
RHS_VEST_LIGHT(rhs_6b5_sniper_spetsodezhda,rhs_6b5_sniper);
RHS_VEST_LIGHT(rhs_6b5_rifleman_spetsodezhda,rhs_6b5_rifleman);
RHS_VEST_LBE(rhs_chicom,Vest_Camo_Base);
RHS_VEST_LBE(rhs_chicom_khk,rhs_chicom);
RHS_VEST_LBE(rhs_gear_OFF,rhs_chicom);
RHS_VEST_LBE(rhs_lifchik,rhs_chicom);
RHS_VEST_LBE(rhs_lifchik_light,rhs_lifchik);
RHS_VEST_LBE(rhs_lifchik_NCO,rhs_lifchik);
RHS_VEST_LBE(rhs_lifchik_vog,rhs_lifchik);
RHS_VEST_LBE(rhs_belt_sks,rhs_chicom);
RHS_VEST_LBE(rhs_belt_svd,rhs_belt_sks);
RHS_VEST_LBE(rhs_belt_AK,rhs_belt_sks);
RHS_VEST_LBE(rhs_belt_AK_back,rhs_belt_sks);
RHS_VEST_LBE(rhs_belt_AK_GL,rhs_belt_sks);
RHS_VEST_LBE(rhs_belt_AK4,rhs_belt_sks);
RHS_VEST_LBE(rhs_belt_AK4_back,rhs_belt_sks);
RHS_VEST_LBE(rhs_belt_holster,rhs_belt_sks);
RHS_VEST_LBE(rhs_belt_RPK,rhs_belt_sks);
RHS_VEST_LBE(rhs_suspender_SKS,rhs_belt_sks);
RHS_VEST_LBE(rhs_suspender_AK,rhs_belt_sks);
RHS_VEST_LBE(rhs_suspender_AK4,rhs_belt_sks);
RHS_VEST_LBE(rhs_suspender_AK8_chestrig,rhs_belt_sks);
RHS_VEST_MEDIUM(rhs_6b45,rhs_6b43);
RHS_VEST_MEDIUM(rhs_6sh117_rifleman,Vest_Camo_Base);
RHS_VEST_MEDIUM(rhs_6sh117_nco,rhs_6sh117_rifleman);
RHS_VEST_MEDIUM(rhs_6sh117_nco_azart,rhs_6sh117_rifleman);
RHS_VEST_MEDIUM(rhs_6sh117_mg,rhs_6sh117_rifleman);
RHS_VEST_MEDIUM(rhs_6sh117_ar,rhs_6sh117_rifleman);
RHS_VEST_MEDIUM(rhs_6sh117_svd,rhs_6sh117_rifleman);
RHS_VEST_MEDIUM(rhs_6sh117_val,rhs_6sh117_rifleman);
RHS_VEST_MEDIUM(rhs_6sh117_grn,rhs_6sh117_rifleman);
