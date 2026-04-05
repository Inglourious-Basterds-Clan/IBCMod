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
#define RHS_HELMET_LIGHT2(HelmetClass,BaseClass) \
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

#define RHS_BASECAP2(HelmetClass,BaseClass) \
class HelmetClass: BaseClass { \
    class ItemInfo: ItemInfo { \
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

RHS_BASECAP(rhs_fieldcap,H_HelmetB);
class rhs_fieldcap_digi: rhs_fieldcap
{
    class ItemInfo : ItemInfo{};
};
class rhs_fieldcap_digi2: rhs_fieldcap
{
    class ItemInfo : ItemInfo{};
};

RHS_BASECAP2(rhs_fieldcap_helm,rhs_fieldcap);
RHS_BASECAP(rhs_beanie,H_HelmetB);

RHS_HELMET_MEDIUM(rhs_6b26,H_HelmetB);
RHS_HELMET_MEDIUM(rhs_6b26_bala,rhs_6b26);
RHS_HELMET_MEDIUM(rhs_6b26_ess,rhs_6b26);
RHS_HELMET_MEDIUM(rhs_6b26_ess_bala,rhs_6b26);

class rhs_6b26_green: rhs_6b26
{
    class ItemInfo : ItemInfo{};
};

class rhs_6b26_digi: rhs_6b26 {};
RHS_HELMET_MEDIUM(rhs_6b26_digi_bala,rhs_6b26_digi);
RHS_HELMET_MEDIUM(rhs_6b26_digi_ess,rhs_6b26_digi);
RHS_HELMET_MEDIUM(rhs_6b26_digi_ess_bala,rhs_6b26_digi);
RHS_HELMET_MEDIUM(rhs_6b27m,H_HelmetB);
RHS_HELMET_MEDIUM(rhs_6b27m_ess_bala,rhs_6b27m);
RHS_HELMET_MEDIUM(rhs_6b27m_bala,rhs_6b27m);
RHS_HELMET_MEDIUM(rhs_6b27m_ml_bala,rhs_6b27m_bala);
RHS_HELMET_MEDIUM(rhs_6b27m_ess,rhs_6b27m);
RHS_HELMET_MEDIUM(rhs_6b27m_green_bala,rhs_6b27m_bala);
RHS_HELMET_MEDIUM(rhs_6b28,rhs_6b27m);
RHS_HELMET_MEDIUM(rhs_6b28_ess,rhs_6b28);
RHS_HELMET_MEDIUM(rhs_6b28_bala,rhs_6b28);
RHS_HELMET_MEDIUM(rhs_6b28_ess_bala,rhs_6b28);
class rhs_Booniehat_digi: ItemCore
{
    class ItemInfo : HeadgearItem{};
};
class rhs_Booniehat_flora: rhs_Booniehat_digi
{
    class ItemInfo : ItemInfo{};
};

RHS_HELMET_LIGHT2(rhs_ssh68,rhs_6b27m);

RHS_HELMET_HEAVY(rhs_zsh7a,H_HelmetB);

class rhs_zsh7a_mike: rhs_zsh7a
{
    class ItemInfo : ItemInfo{};
};
class rhs_zsh7a_mike_green: rhs_zsh7a_mike
{
    class ItemInfo : ItemInfo{};
};

RHS_BASECAP(rhs_gssh18,H_HelmetB);
RHS_BASECAP(rhs_6m2,H_HelmetB);

RHS_HELMET_LIGHT(rhs_tsh4,H_HelmetB);
RHS_HELMET_LIGHT2(rhs_tsh4_ess,rhs_tsh4);
RHS_HELMET_LIGHT2(rhs_tsh4_bala,rhs_tsh4);
RHS_HELMET_LIGHT2(rhs_tsh4_ess_bala,rhs_tsh4);

class rhs_6b47: rhs_6b28
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b7_1m: rhs_6b28
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b7_1m_bala1: rhs_6b7_1m
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b7_1m_bala1_emr: rhs_6b7_1m_bala1
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b7_1m_bala2: rhs_6b7_1m
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b7_1m_bala2_emr: rhs_6b7_1m_bala2
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b7_1m_emr: rhs_6b7_1m
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b7_1m_flora: rhs_6b7_1m_emr
{
    class ItemInfo : ItemInfo{};
};

RHS_HELMET_HEAVY(rhs_altyn,rhs_6b7_1m_emr);
RHS_HELMET_HEAVY(rhs_altyn_visordown,rhs_altyn);

class rhs_altyn_novisor: rhs_altyn
{
    class ItemInfo : ItemInfo{};
};
class rhs_altyn_novisor_bala: rhs_altyn_novisor
{
    class ItemInfo : ItemInfo{};
};
class rhs_altyn_novisor_ess: rhs_altyn
{
    class ItemInfo : ItemInfo{};
};
class rhs_zsh12: rhs_altyn_novisor
{
    class ItemInfo : ItemInfo{};
};

RHS_HELMET_LIGHT(rhs_beret_vdv1,rhs_Booniehat_flora);

class rhs_beret_milp: rhs_beret_vdv1
{
    class ItemInfo : ItemInfo{};
};

RHS_HELMET_MEDIUM(rhs_stsh81,rhs_ssh68);

class rhs_fieldcap_m88: rhs_beanie
{
    class ItemInfo : HeadgearItem{};
};
class rhs_fieldcap_m88_back: rhs_fieldcap_m88
{
    class ItemInfo : ItemInfo{};
};
class rhs_beret_vdv_early: rhs_beret_vdv1
{
    class ItemInfo : HeadgearItem{};
};
class rhs_vkpo_cap: rhs_fieldcap_m88
{
    class ItemInfo : HeadgearItem{};
};
class rhs_6b47_bare: rhs_6b47
{
    class ItemInfo : ItemInfo{};
};
class rhs_6b47_emr: rhs_6b47
{
    class ItemInfo : ItemInfo{};
};
