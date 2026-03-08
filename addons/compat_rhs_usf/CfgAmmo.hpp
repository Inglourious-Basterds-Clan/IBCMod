class CfgAmmo
{
    class RocketBase;
    
    class rhsusf_ammo_basic_penetrator;
	class rhs_ammo_M136_rocket: RocketBase
	{
		submunitionAmmo = "rhs_ammo_M136_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_weapons2\M136\at4_rocket";
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 4.1;
		cost = 200;
		explosive = 0.65;
		caliber = 0.8;
		airFriction = 0.0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 219;
		initTime = 0.1;
		thrustTime = 0.0;
		thrust = 10;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
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
	};
	class rhs_ammo_M136_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 45;
	};
	class rhs_ammo_M136_hp_rocket: rhs_ammo_M136_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 250;
	};
	class rhs_ammo_M136_hp_penetrator: rhs_ammo_M136_penetrator
	{
		caliber = 50;
	};
	class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hedp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 250;
		indirectHit = 31;
		indirectHitRange = 6.1;
		cost = 200;
		explosive = 0.65;
	};
	class rhs_ammo_M136_hedp_penetrator: rhs_ammo_M136_penetrator
	{
		hit = 235;
		caliber = 30;
	};
	class rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hedp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 145;
		indirectHit = 19;
	};
	class rhs_ammo_maaws_HEAT: RocketBase
	{
		submunitionAmmo = "rhs_ammo_maaws_HEAT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.65;
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 300;
		indirectHit = 15;
		indirectHitRange = 3.1;
		caliber = 0.8;
		cost = 800;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 290;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
		warheadName = "TandemHEAT";
	};
	class rhs_ammo_maaws_HEAT_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 50;
		warheadName = "TandemHEAT";
	};
	class rhs_ammo_maaws_HEDP: RocketBase
	{
		submunitionAmmo = "rhs_ammo_maaws_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.65;
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 300;
		indirectHit = 45;
		indirectHitRange = 5.1;
		cost = 500;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 230;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_HEDP_penetrator: rhs_ammo_M136_penetrator
	{
		caliber = 35;
	};
	class rhs_ammo_maaws_HE: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 75;
		indirectHit = 65;
		indirectHitRange = 11;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_SMOKE: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 2;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectsSmoke = "SmokeShellWhite";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_ILLUM: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 1;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectFlare = "FlareShell";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_smaw_HEAA: RocketBase
	{
		submunitionAmmo = "rhs_ammo_smaw_HEAA_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04",10.0,1,1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6",5.6234136,1,35};
		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 450;
		indirectHit = 11;
		indirectHitRange = 3.1;
		explosive = 0.65;
		cost = 800;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEAA_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 55;
	};
	class rhs_ammo_smaw_HEDP: RocketBase
	{
		submunitionAmmo = "rhs_ammo_smaw_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04",10.0,1,1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6",5.6234136,1,35};
		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 250;
		indirectHit = 51;
		indirectHitRange = 6.7;
		explosive = 0.65;
		cost = 500;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEDP_penetrator: rhs_ammo_M136_penetrator
	{
		hit = 335;
		caliber = 45;
	};
	class rhs_ammo_smaw_SR: RocketBase
	{
		explosive = 0.0;
		soundHit[] = {"\a3\sounds_f\weapons\hits\plastic_4.wss",0.70794576,1,20};
		audibleFire = 3.0;
		caliber = 0.01;
		model = "rhsusf\addons\rhsusf_weapons2\smaw\tracer_smaw.p3d";
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 500;
		airFriction = 0.0;
		sideAirFriction = 0.02;
		maxSpeed = 220;
		initTime = 0.5;
		thrustTime = 0.0;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_cartrige";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(5^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
};
