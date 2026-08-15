class CfgVehicles{
	class Tank_F;
	class rhs_t14_base: Tank_F{
		class EventHandlers;
	};
	class rhs_t14_tv: rhs_t14_base{
		class EventHandlers: EventHandlers{
			class RHS_EventHandlers{
				init = "";
				postInit = "_this call rhs_fnc_reapplyTextures";
				deleted = "";
				killed = "";
				engine = "_this call rhs_fnc_engineCheckDamage";
			};
		};
	};
    class rhs_t15_base: Tank_F
	{
		class EventHandlers;
	};
	class rhs_t15_tv:rhs_t15_base
	{
		class EventHandlers:EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "";
				postInit = "_this call rhs_fnc_reapplyTextures";
				deleted = "";
				killed = "";
				engine = "_this call rhs_fnc_engineCheckDamage";
			};
		};
	};
};
