#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ibc_main", "rhs_c_heavyweapons"};
        skipWhenMissingDependencies = 1;
        author = "kolmipilot";
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	class Weapon_Bag_Base;
	class RHS_NSV_Tripod_Bag:Weapon_Bag_Base
	{
		mass = 376;
	};
	class RHS_NSV_Gun_Bag:Weapon_Bag_Base
	{
		mass = 580;
	};
	class RHS_DShkM_Gun_Bag:RHS_NSV_Gun_Bag
	{
		mass = 800;
	};
	class RHS_DShkM_TripodHigh_Bag:RHS_NSV_Tripod_Bag
	{
		mass = 296;
	};
	class RHS_Podnos_Bipod_Bag:RHS_DShkM_TripodHigh_Bag
	{
		mass = 730;
	};
	class RHS_Podnos_Gun_Bag:RHS_DShkM_Gun_Bag
	{
		mass = 380;
	};
	class RHS_Metis_Gun_Bag:RHS_DShkM_Gun_Bag
	{
		mass = 300;
	};
	class RHS_Metis_Tripod_Bag:RHS_DShkM_TripodHigh_Bag
	{
		mass = 83;
	};
	class RHS_Kornet_Gun_Bag:RHS_NSV_Gun_Bag
	{
		mass = 612;
	};
	class RHS_Kornet_Tripod_Bag:RHS_NSV_Tripod_Bag
	{
		mass = 104;
	};
	class RHS_AGS30_Tripod_Bag:RHS_DShkM_TripodHigh_Bag
	{
		mass = 376;
	};
	class RHS_AGS30_Gun_Bag:RHS_DShkM_Gun_Bag
	{
		mass = 677;
	};
	class RHS_DShkM_TripodLow_Bag:RHS_DShkM_TripodHigh_Bag
	{
		mass = 296;
	};
	class RHS_Kord_Tripod_Bag:RHS_DShkM_TripodHigh_Bag
	{
		mass = 376;
	};
	class RHS_Kord_Gun_Bag:RHS_DShkM_Gun_Bag
	{
		mass = 596;
	};
};
