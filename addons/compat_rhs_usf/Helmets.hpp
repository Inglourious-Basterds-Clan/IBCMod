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


RHS_BASECAP(rhsusf_patrolcap_ocp,H_HelmetB);
class rhs_xmas_antlers : ItemCore
{
	class ItemInfo: HeadgearItem
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.0;
		mass = 25;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				Armor=8;
				passThrough = 0.5;
			};
			class Face
			 {
				hitpointName="HitFace";
				armor=8;
				passThrough=0.5;
			};
		};
	};
};
RHS_BASECAP(rhs_Booniehat_ocp,ItemCore);
RHS_BASECAP(rhs_booniehat2_marpatd,ItemCore);
RHS_BASECAP(rhs_8point_marpatd,ItemCore);

RHS_HELMET_LIGHT(rhsusf_ach_helmet_ocp,H_HelmetB);
RHS_HELMET_LIGHT(rhsusf_opscore_01,rhsusf_ach_helmet_ocp);
RHS_HELMET_LIGHT(rhsusf_opscore_cover,rhsusf_opscore_01);
RHS_HELMET_LIGHT(rhsusf_opscore_mar_01,rhsusf_ach_helmet_ocp);

RHS_HELMET_MEDIUM(rhsusf_cvc_helmet,rhsusf_opscore_01);

RHS_HELMET_HEAVY(rhsusf_hgu56p,rhsusf_opscore_01);

RHS_HELMET_MEDIUM(rhsusf_mich_helmet_marpatwd,H_HelmetB);

class rhsusf_mich_helmet_marpatwd_norotos_arc : rhsusf_mich_helmet_marpatwd
{
	class ItemInfo : ItemInfo{};
};
class rhsusf_mich_bare : rhsusf_mich_helmet_marpatwd
{
	class ItemInfo : ItemInfo{};
};
class rhsusf_mich_bare_headset : rhsusf_mich_bare
{
	class ItemInfo : ItemInfo{};
};

RHS_HELMET_MEDIUM(rhsusf_mich_bare_alt,rhsusf_mich_bare);

class rhsusf_mich_bare_norotos : rhsusf_mich_bare
{
	class ItemInfo : ItemInfo{};
};
class rhsusf_mich_bare_norotos_headset : rhsusf_mich_bare_headset
{
	class ItemInfo : ItemInfo{};
};

RHS_HELMET_MEDIUM(rhsusf_mich_bare_norotos_alt,rhsusf_mich_bare_norotos);
RHS_HELMET_MEDIUM(rhsusf_mich_bare_norotos_alt_headset,rhsusf_mich_bare_norotos_headset);

class rhsusf_mich_bare_norotos_arc : rhsusf_mich_bare
{
	class ItemInfo : ItemInfo{};
};
class rhsusf_mich_bare_norotos_arc_headset : rhsusf_mich_bare_headset
{
	class ItemInfo : ItemInfo{};
};

RHS_HELMET_MEDIUM(rhsusf_mich_bare_norotos_arc_alt,rhsusf_mich_bare_norotos_arc);
RHS_HELMET_MEDIUM(rhsusf_mich_bare_norotos_arc_alt_headset,rhsusf_mich_bare_norotos_arc_headset);
RHS_HELMET_MEDIUM(rhsusf_mich_bare_tan,rhsusf_mich_bare);
RHS_HELMET_MEDIUM(rhsusf_mich_bare_tan_headset,rhsusf_mich_bare_headset);
RHS_HELMET_MEDIUM(rhsusf_mich_bare_semi,rhsusf_mich_bare);
RHS_HELMET_MEDIUM(rhsusf_mich_bare_semi_headset,rhsusf_mich_bare_headset);

class rhsusf_mich_bare_norotos_semi : rhsusf_mich_bare_semi
{
	class ItemInfo : ItemInfo{};
};

RHS_HELMET_MEDIUM(rhsusf_mich_bare_norotos_semi_headset,rhsusf_mich_bare_semi_headset);
RHS_HELMET_MEDIUM(rhsusf_mich_bare_norotos_alt_semi,rhsusf_mich_bare_norotos_semi);
RHS_HELMET_MEDIUM(rhsusf_lwh_helmet_marpatd,H_HelmetB);

RHS_BASECAP(rhsusf_Bowman,ItemCore);
RHS_BASECAP(rhsusf_bowman_cap,rhsusf_Bowman);

RHS_HELMET_HEAVY(RHS_jetpilot_usaf,H_HelmetB);
RHS_HELMET_HEAVY(rhsusf_ihadss,rhsusf_opscore_01);

RHS_HELMET_LIGHT(rhsusf_protech_helmet,H_HelmetB);
