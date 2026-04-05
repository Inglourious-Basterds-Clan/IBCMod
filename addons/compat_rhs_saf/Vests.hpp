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

class VestItem: InventoryItem_Base_F {};
class Vest_Camo_Base: ItemCore
{
    class ItemInfo: VestItem {};
};

RHS_VEST_LIGHT(rhssaf_balistic_vest_base,Vest_Camo_Base);
RHS_VEST_LIGHT(rhssaf_tactical_vest_base,Vest_Camo_Base);
RHS_VEST_LIGHT(rhssaf_vest_md98_woodland,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md98_md2camo,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md98_digital,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md98_officer,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md98_rifleman,rhssaf_balistic_vest_base);
RHS_VEST_MEDIUM(rhssaf_vest_otv_md2camo,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_md2camo_rifleman,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_md2camo_rifleman_radio,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_digital_rifleman,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_digital_rifleman_radio,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_woodland_rifleman,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_woodland_rifleman_radio,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_md2camo,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_md2camo_radio,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_digital,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_digital_radio,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_woodland,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99_woodland_radio,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md12_digital,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md12_m70_rifleman,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md12_digital_desert,rhssaf_balistic_vest_base);
RHS_VEST_LIGHT(rhssaf_vest_md99a5_md2camo_rifleman,rhssaf_balistic_vest_base);
