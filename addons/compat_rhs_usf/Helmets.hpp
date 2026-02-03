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
RHS_BASECAP(rhs_Booniehat_ocp,ItemCore);
RHS_BASECAP(rhs_booniehat2_marpatd,ItemCore);
RHS_BASECAP(rhs_8point_marpatd,ItemCore);

RHS_HELMET_LIGHT(rhsusf_ach_helmet_ocp,H_HelmetB);
