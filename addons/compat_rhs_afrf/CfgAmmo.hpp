class CfgAmmo
{
	class RocketBase;
	class rhs_ammo_base_penetrator;
	class R_PG32V_F: RocketBase{};
	class rhs_rpg26_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_projectile";
		warheadName = "HEAT";
		submunitionAmmo = "rhs_rpg26_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 250;
		indirectHit = 10;
		indirectHitRange = 3.5;
		caliber = 0.8;
		cost = 200;
		airFriction = 0.0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 144;
		initTime = 0.15;
		thrustTime = 0.5;
		thrust = 10;
		fuseDistance = 5;
		explosive = 0.35;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};
	class rhs_rpg26_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 45;
	};
	class rhs_rpg18_rocket: rhs_rpg26_rocket
	{
		submunitionAmmo = "rhs_rpg18_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		airFriction = 0.7;
		hit = 200;
		maxSpeed = 115;
		timeToLive = 6;
	};
	class rhs_rpg18_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 38;
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vl";
		submunitionAmmo = "rhs_rpg7v2_pg7vl_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 300;
		indirectHit = 20;
		indirectHitRange = 4;
		cost = 200;
		airfriction = 0.6;
		sideAirFriction = 0.13;
		simulationStep = 0.01;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		airLock = 1;
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		class EventHandlers;
	};
	class rhs_rpg7v2_pg7vl_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 45;
	};
	class rhs_rpg7v2_pg7v: rhs_rpg7v2_pg7vl
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7v";
		airfriction = 0.82;
		sideAirFriction = 0.2105;
		thrustTime = 0.69;
		thrust = 195;
		submunitionAmmo = "rhs_rpg7v2_pg7v_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7v_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 38;
	};
	class rhs_rpg7v2_pg7vm: rhs_rpg7v2_pg7v
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vm";
		airfriction = 0.87;
		sideAirFriction = 0.175;
		submunitionAmmo = "rhs_rpg7v2_pg7vm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7vm_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 41;
	};
	class rhs_rpg7v2_pg7vs: rhs_rpg7v2_pg7vm
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vs";
		submunitionAmmo = "rhs_rpg7v2_pg7vm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7vs_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 45;
	};
	class rhs_rpg7v2_pg7vr: rhs_rpg7v2_pg7vl
	{
		AIAmmoUsageFlags = "128+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vr";
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_rpg7v2_pg7vr_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 700;
		indirectHit = 20;
		indirectHitRange = 3.8;
		cost = 300;
		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.9;
		sideAirFriction = 0.1;
		thrust = 120;
		fuseDistance = 5;
		timeToLive = 6;
		airLock = 1;
	};
	class rhs_rpg7v2_pg7vr_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 90;
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128+256";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\tbg7v";
		hit = 200;
		indirectHit = 65;
		indirectHitRange = 25;
		cost = 100;
		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.55;
		sideAirFriction = 0.055;
		thrust = 120;
		explosive = 1;
		allowAgainstInfantry = 1;
		timeToLive = 60;
		CraterEffects = "ArtyShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		explosionEffects = "RHS_FAE_Explosion";
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 227.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.23853;
			duration = 2;
			frequency = 20;
			distance = 83.9047;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone",15};
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = -1;
		triggerOnImpact = 1;
	};
	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128+256";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\og7v";
		submunitionAmmo = "";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 15;
		cost = 100;
		initTime = 0.0;
		thrust = 0;
		thrustTime = 0;
		airfriction = 0.25;
		sideAirFriction = 0.009;
		fuseDistance = 5;
		explosive = 1;
		allowAgainstInfantry = 1;
		timeToLive = 60;
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 231.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.5,25};
	};
	class rhs_rpg7v2_type63_airburst: rhs_rpg7v2_og7v
	{
		warheadName = "HE";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\Type69";
		hit = 67;
		indirectHit = 22;
		indirectHitRange = 15;
		cost = 100;
		airfriction = 0.6;
		sideAirFriction = 0.1;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;
		timeToLive = 8;
		deflecting = 0.999999;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
		class EventHandlers: EventHandlers
		{
			class RHS_Airburst
			{
				fired = "_this call RHS_fnc_rpg_airburst";
			};
		};
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128";
		hit = 85;
		indirectHit = 55;
		indirectHitRange = 12;
		caliber = 1;
		airFriction = 0.75;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		timeToLive = 20;
		effectsMissileInit = "RocketBackEffectsNLAW";
		maxSpeed = 144;
		initTime = 0.01;
		thrustTime = 0.1;
		thrust = 50;
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2_projectile";
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone",15};
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = -1;
		triggerOnImpact = 1;
	};
};
