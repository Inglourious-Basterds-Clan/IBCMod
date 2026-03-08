// Macro for standard helmet without ACE hearing protection (armor 6)
#define RHS_HELMET_LIGHT(HelmetClass,BaseClass) \
class HelmetClass: BaseClass { \
    class ItemInfo: HeadgearItem { \
        class HitpointsProtectionInfo \
        { \
            class Head \
            { \
                hitpointName = "HitHead"; \
                armor = 4; \
                passThrough = 0.5; \
            }; \
            class Face \
            { \
                hitpointName ="HitFace"; \
                armor = 0; \
                passThrough = 1; \
            }; \
        }; \
    }; \
}

#define RHS_HELMET_MEDIUM(HelmetClass,BaseClass) \
class HelmetClass: BaseClass { \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo \
        { \
            class Head \
            { \
                hitpointName = "HitHead"; \
                armor = 6; \
                passThrough = 0.5; \
            }; \
            class Face \
            { \
                hitpointName ="HitFace"; \
                armor = 0; \
                passThrough = 1; \
            }; \
        }; \
    }; \
}

#define RHS_HELMET_MEDIUM2(HelmetClass,BaseClass) \
class HelmetClass: BaseClass { \
    class ItemInfo: HeadgearItem { \
        class HitpointsProtectionInfo \
        { \
            class Head \
            { \
                hitpointName = "HitHead"; \
                armor = 6; \
                passThrough = 0.5; \
            }; \
            class Face \
            { \
                hitpointName ="HitFace"; \
                armor = 0; \
                passThrough = 1; \
            }; \
        }; \
    }; \
}

#define RHS_BASECAP(HelmetClass,BaseClass) \
class HelmetClass: BaseClass { \
    class ItemInfo: HeadgearItem { \
        class HitpointsProtectionInfo { \
            class HitpointsProtectionInfo \
            { \
                class Head \
                { \
                    hitpointName = "HitHead"; \
                    armor = 0; \
                    passThrough=1; \
                }; \
                class Face \
                { \
                    hitpointName = "HitFace"; \
                    armor = 0; \
                    passThrough = 1; \
                }; \
            }; \
        }; \
    }; \
}

class Default {};
class InventoryItem_Base_F {};
class ItemCore: Default {};
class HeadgearItem: InventoryItem_Base_F {};
class H_HelmetB: ItemCore {
    class ItemInfo: HeadgearItem {
        class HitpointsProtectionInfo {
            class Head {};
        };
    };
};

RHS_HELMET_LIGHT(rhssaf_helmet_base,H_HelmetB);
class rhssaf_helmet_m59_85_nocamo: rhssaf_helmet_base {};
RHS_HELMET_LIGHT(rhssaf_helmet_m59_85_oakleaf,rhssaf_helmet_base);
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_olive_nocamo,rhssaf_helmet_base);
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_olive_nocamo_black_ess,rhssaf_helmet_base);
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_olive_nocamo_black_ess_bare,rhssaf_helmet_m97_olive_nocamo_black_ess);
class rhssaf_helmet_m97_black_nocamo: rhssaf_helmet_m97_olive_nocamo{};
class rhssaf_helmet_m97_black_nocamo_black_ess: rhssaf_helmet_m97_olive_nocamo_black_ess {};
class rhssaf_helmet_m97_black_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess_bare {};
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_woodland,rhssaf_helmet_base);
class rhssaf_helmet_m97_digital: rhssaf_helmet_m97_woodland {};
class rhssaf_helmet_m97_md2camo: rhssaf_helmet_m97_woodland {};
class rhssaf_helmet_m97_oakleaf: rhssaf_helmet_m97_woodland {};
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_nostrap_blue,rhssaf_helmet_m97_woodland);
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_nostrap_blue_tan_ess,rhssaf_helmet_m97_woodland);
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_nostrap_blue_tan_ess_bare,rhssaf_helmet_m97_woodland);
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_woodland_black_ess,rhssaf_helmet_m97_olive_nocamo_black_ess);
class rhssaf_helmet_m97_digital_black_ess: rhssaf_helmet_m97_woodland_black_ess {};
class rhssaf_helmet_m97_md2camo_black_ess: rhssaf_helmet_m97_woodland_black_ess {};
class rhssaf_helmet_m97_oakleaf_black_ess: rhssaf_helmet_m97_woodland_black_ess {};
RHS_HELMET_MEDIUM2(rhssaf_helmet_m97_woodland_black_ess_bare,rhssaf_helmet_m97_woodland_black_ess);
class rhssaf_helmet_m97_digital_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare {};
class rhssaf_helmet_m97_md2camo_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare {};
class rhssaf_helmet_m97_oakleaf_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare {};
RHS_HELMET_MEDIUM(rhssaf_helmet_m97_veil_Base,rhssaf_helmet_m97_woodland);
RHS_HELMET_MEDIUM(rhssaf_helmet_m97_veil_woodland,rhssaf_helmet_m97_veil_Base);
RHS_HELMET_MEDIUM(rhssaf_helmet_m97_veil_digital,rhssaf_helmet_m97_veil_Base);
RHS_HELMET_MEDIUM(rhssaf_helmet_m97_veil_md2camo,rhssaf_helmet_m97_veil_Base);
RHS_HELMET_MEDIUM(rhssaf_helmet_m97_veil_oakleaf,rhssaf_helmet_m97_veil_Base);
RHS_BASECAP(rhssaf_beret_green,rhssaf_helmet_base);
class rhssaf_beret_red: rhssaf_beret_green
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_red_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BERET_RED_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_red_co.paa"};
};
class rhssaf_beret_para: rhssaf_beret_green
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_para_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BERET_PARA_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_red_para_co.paa"};
};
class rhssaf_beret_black: rhssaf_beret_green
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_black_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BERET_BLACK_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_black_co.paa"};
};
RHS_BASECAP(rhssaf_beret_blue_un,rhssaf_helmet_base);
class rhs_booniehat2_marpatd;
class rhssaf_booniehat_digital: rhs_booniehat2_marpatd
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_booniehat_digital_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BOONIEHAT_DIGITAL_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_digital_co.paa"};
};
class rhssaf_booniehat_md2camo: rhs_booniehat2_marpatd
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_booniehat_md2camo_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BOONIEHAT_MD2CAMO_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_md2camo_co.paa"};
};
class rhssaf_booniehat_woodland: rhs_booniehat2_marpatd
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_booniehat_woodland_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BOONIEHAT_WOODLAND_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_woodland_co.paa"};
};
class H_Bandanna_khk;
class rhssaf_bandana_digital: H_Bandanna_khk
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_digital_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BANDANA_DIGITAL_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_digital.paa"};
};
class rhssaf_bandana_digital_desert: rhssaf_bandana_digital
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_digital_desert_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BANDANA_DIGITAL_DESERT_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_digital_desert.paa"};
};
class rhssaf_bandana_oakleaf: rhssaf_bandana_digital
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_oakleaf_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BANDANA_OAKLEAF_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_oakleaf.paa"};
};
class rhssaf_bandana_smb: rhssaf_bandana_digital
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_smb_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BANDANA_SMB_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_smb.paa"};
};
class rhssaf_bandana_md2camo: rhssaf_bandana_digital
{
    picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_md2camo_ca.paa";
    dlc = "RHS_SAF";
    author = "$STR_RHSSAF_AUTHOR_FULL";
    scope = 2;
    scopeCurator = 2;
    displayName = "$STR_RHSSAF_BANDANA_MD2CAMO_DISPLAYNAME";
    hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_md2camo.paa"};
};
