// Macro for standard helmet without ACE hearing protection (armor 6)
#define RHS_HELMET_LIGHT(HelmetClass,BaseClass) \
class HelmetClass: BaseClass { \
    class ItemInfo: ItemInfo { \
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

#define RHS_HELMET_HEAVY(HelmetClass,BaseClass) \
class HelmetClass: BaseClass { \
    class ItemInfo: ItemInfo { \
        class HitpointsProtectionInfo \
        { \
            class Head \
            { \
                hitpointName = "HitHead"; \
                armor = 8; \
                passThrough = 0.5; \
            }; \
            class Face \
            { \
                hitpointName="HitFace"; \
                armor = 8; \
                passThrough = 0.5; \
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

class rhs_fieldcap_digi2;

RHS_BASECAP(rhsgref_un_beret,ItemCore);
RHS_BASECAP(rhsgref_Booniehat_alpen,ItemCore);
RHS_BASECAP(rhsgref_patrolcap_specter,rhs_fieldcap_digi2);
RHS_BASECAP(rhsgref_fieldcap,H_HelmetB);
RHS_HELMET_MEDIUM(rhsgref_ssh68,H_HelmetB);
RHS_HELMET_MEDIUM(rhsgref_M56,H_HelmetB);
RHS_HELMET_MEDIUM(rhsgref_6b27m,H_HelmetB);
RHS_HELMET_LIGHT(rhsgref_helmet_M1_bare,H_HelmetB);
RHS_HELMET_LIGHT(rhsgref_helmet_M1_liner,H_HelmetB);
RHS_HELMET_LIGHT(rhsgref_helmet_M1_mit,H_HelmetB);
RHS_HELMET_LIGHT(rhsgref_helmet_M1_erdl,rhsgref_helmet_M1_mit);
RHS_HELMET_LIGHT(rhsgref_helmet_M1_des,rhsgref_helmet_M1_mit);

class rhsgref_hat_M1951 : H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            ace_hearing_protection = 1;
            ace_hearing_lowerVolume = 0.0;
            mass = 5;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=0;
                    passThrough=1;
                };
                class Face
                 {
                    hitpointName="HitFace";
                    armor=0;
                    passThrough=1;
                };
            };
        };
    };

class rhsgref_hat_m1941cap: rhsgref_hat_M1951
{
    class ItemInfo : ItemInfo{};
};

RHS_HELMET_MEDIUM(rhsgref_helmet_pasgt_erdl,H_HelmetB);
RHS_HELMET_MEDIUM(rhsgref_helmet_pasgt_erdl_rhino,H_HelmetB);
RHS_HELMET_MEDIUM(rhsgref_helmet_pasgt_woodland_rhino,rhsgref_helmet_pasgt_erdl_rhino);
RHS_HELMET_MEDIUM(rhsgref_helmet_pasgt_3color_desert_rhino,rhsgref_helmet_pasgt_erdl_rhino);

class rhsgref_helmet_m1940: rhsgref_helmet_M1_bare
{
    class ItemInfo : ItemInfo{};
};
class rhsgref_helmet_m1940_winter: rhsgref_helmet_m1940
{
    class ItemInfo : ItemInfo{};
};
class rhsgref_helmet_m1942: rhsgref_helmet_m1940
{
    class ItemInfo : ItemInfo{};
};
class rhsgref_helmet_m1942_camo01: rhsgref_helmet_m1942
{
    class ItemInfo : ItemInfo{};
};
class rhsgref_helmet_m1942_winter: rhsgref_helmet_m1942
{
    class ItemInfo : ItemInfo{};
};
class rhsgref_helmet_m1942_heermarshcover: rhsgref_helmet_m1942
{
    class ItemInfo : ItemInfo{};
};
