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

class Vest_Camo_Base: ItemCore
{
	class ItemInfo;
};


RHS_VEST_MEDIUM(rhsusf_iotv_ocp_base,Vest_Camo_Base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp_Grenadier,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp_Medic,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp_Repair,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp_Rifleman,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp_SAW,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp_Squadleader,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ocp_Teamleader,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_base,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp,rhsusf_iotv_ocp);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_Grenadier,rhsusf_iotv_ucp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_Medic,rhsusf_iotv_ucp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_Repair,rhsusf_iotv_ucp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_Rifleman,rhsusf_iotv_ucp_base);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_SAW,rhsusf_iotv_ucp_base);
RHS_VEST_MEDIUM(rhsusf_spc,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_spc_rifleman,rhsusf_spc);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_Squadleader,rhsusf_iotv_ucp_base);
RHS_VEST_MEDIUM(rhsusf_spc_iar,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_iotv_ucp_Teamleader,rhsusf_iotv_ucp_base);
RHS_VEST_MEDIUM(rhsusf_spc_corpsman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_crewman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_light,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_marksman,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_mg,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_sniper,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_squadleader,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_teamleader,rhsusf_spc_rifleman);
RHS_VEST_MEDIUM(rhsusf_spc_patchless,rhsusf_spc_light);
RHS_VEST_MEDIUM(rhsusf_spc_patchless_radio,rhsusf_spc_squadleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_squadleader,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_teamleader,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_teamleader_alt,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_saw,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_grenadier,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_rifleman,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_rifleman_alt,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_medic,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_crewman,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_machinegunner,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ocp_sniper,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp,rhsusf_spcs_ocp);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_squadleader,rhsusf_spcs_ocp_squadleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_teamleader,rhsusf_spcs_ocp_teamleader);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_teamleader_alt,rhsusf_spcs_ocp_teamleader_alt);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_saw,rhsusf_spcs_ocp_saw);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_grenadier,rhsusf_spcs_ocp_grenadier);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_rifleman,rhsusf_spcs_ocp_rifleman);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_rifleman_alt,rhsusf_spcs_ocp_rifleman_alt);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_medic,rhsusf_spcs_ocp_medic);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_crewman,rhsusf_spcs_ocp_crewman);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_machinegunner,rhsusf_spcs_ocp_machinegunner);
RHS_VEST_MEDIUM(rhsusf_spcs_ucp_sniper,rhsusf_spcs_ocp_sniper);
RHS_VEST_MEDIUM(rhsusf_mbav,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_mbav_light,rhsusf_mbav);
RHS_VEST_MEDIUM(rhsusf_mbav_rifleman,rhsusf_mbav_light);
RHS_VEST_MEDIUM(rhsusf_mbav_mg,rhsusf_mbav_light);
RHS_VEST_MEDIUM(rhsusf_mbav_grenadier,rhsusf_mbav_light);
RHS_VEST_MEDIUM(rhsusf_mbav_medic,rhsusf_mbav_light);
RHS_VEST_MEDIUM(rhsusf_plateframe_sapi,rhsusf_iotv_ocp_base);
RHS_VEST_MEDIUM(rhsusf_plateframe_light,rhsusf_plateframe_sapi);
RHS_VEST_MEDIUM(rhsusf_plateframe_rifleman,rhsusf_plateframe_sapi);
RHS_VEST_MEDIUM(rhsusf_plateframe_teamleader,rhsusf_plateframe_rifleman);
RHS_VEST_MEDIUM(rhsusf_plateframe_grenadier,rhsusf_plateframe_rifleman);
RHS_VEST_MEDIUM(rhsusf_plateframe_machinegunner,rhsusf_plateframe_rifleman);
RHS_VEST_MEDIUM(rhsusf_plateframe_marksman,rhsusf_plateframe_rifleman);
RHS_VEST_MEDIUM(rhsusf_plateframe_medic,rhsusf_plateframe_rifleman);
