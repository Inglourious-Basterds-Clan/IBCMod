class CfgAmmo {
    class BulletBase;
    class B_338_Ball;
    class GrenadeHand;
    class JCA_B_9x19_Ball_P320C_FMJ: BulletBase {
        ACE_caliber = 9.03;
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 7.452;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.159};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {362};
        ACE_barrelLengths[] = {99};
        hit = 4.4;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        cost = 100;
        typicalSpeed = 361;
        airFriction = -0.00212379;
        caliber = 1.2;
        deflecting = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock = 1;
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 0;
        audibleFire = 30;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };
    class JCA_B_9x19_Ball_P320C_JHP: JCA_B_9x19_Ball_P320C_FMJ {
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 9.525;
        ACE_ballisticCoefficients[] = {0.176};
        ACE_muzzleVelocities[] = {301};
        hit = 6.9;
        typicalSpeed = 300;
        airFriction = -0.0012926;
        caliber = 0.72;
        visibleFire = 1;
        audibleFire = 5;
    };
    class JCA_B_9x19_Ball_P320C_FMJ_Tracer_Green: JCA_B_9x19_Ball_P320C_FMJ {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P320C_FMJ_Tracer_Red: JCA_B_9x19_Ball_P320C_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P320C_FMJ_Tracer_Yellow: JCA_B_9x19_Ball_P320C_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P320C_FMJ_Tracer_IR: JCA_B_9x19_Ball_P320C_FMJ {
        nvgOnly = 1;
    };
    class JCA_B_9x19_Ball_P226_FMJ: BulletBase {
        ACE_caliber = 9.03;
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 8.035;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.194};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_barrelLengths[] = {101.6, 127, 228.6};
        ACE_muzzleVelocities[] = {366, 398, 430};
        hit = 4.8;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        cost = 100;
        typicalSpeed = 378;
        airFriction = -0.0018639;
        caliber = 1.2;
        deflecting = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock = 1;
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 0;
        audibleFire = 30;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };
    class JCA_B_9x19_Ball_P226_JHP: JCA_B_9x19_Ball_P226_FMJ {
        ACE_ballisticCoefficients[] = {0.166};
        hit = 8;
        airFriction = -0.00217929;
        caliber = 0.72;
    };
    class JCA_B_9x19_Ball_P226_SUB: JCA_B_9x19_Ball_P226_FMJ {
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 9.525;
        ACE_ballisticCoefficients[] = {0.193};
        ACE_muzzleVelocities[] = {301, 327, 354};
        hit = 7.2;
        typicalSpeed = 311;
        airFriction = -0.00115451;
        caliber = 0.72;
        visibleFire = 1;
        audibleFire = 5;
    };
    class JCA_B_9x19_Ball_P226_FMJ_Tracer_Green: JCA_B_9x19_Ball_P226_FMJ {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P226_FMJ_Tracer_Red: JCA_B_9x19_Ball_P226_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P226_FMJ_Tracer_Yellow: JCA_B_9x19_Ball_P226_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P226_FMJ_Tracer_IR: JCA_B_9x19_Ball_P226_FMJ {
        nvgOnly = 1;
    };
    class JCA_B_9x19_Ball_Glock17_FMJ: BulletBase {
        ACE_caliber = 9.03;
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 8.035;
        ACE_ammoTempMuzzleVelocityShifts[] = {-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33};
        ACE_ballisticCoefficients[] = {0.196};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_barrelLengths[] = {101.6,127,228.6};
        ACE_muzzleVelocities[] = {365,397,429};
        hit = 4.85;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        cost = 100;
        typicalSpeed = 381;
        airFriction = -0.00186168;
        caliber = 1.2;
        deflecting = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock = 1;
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 0;
        audibleFire = 30;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };
    class JCA_B_9x19_Ball_Glock17_JHP: JCA_B_9x19_Ball_Glock17_FMJ {
        ACE_ballisticCoefficients[] = {0.169};
        hit = 8;
        airFriction = -0.0021588;
        caliber = 0.72;
    };
    class JCA_B_9x19_Ball_Glock17_SUB: JCA_B_9x19_Ball_Glock17_FMJ {
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 9.525;
        ACE_ballisticCoefficients[] = {0.197};
        ACE_muzzleVelocities[] = {300, 326, 353};
        hit = 7.2;
        typicalSpeed = 313;
        airFriction = -0.00115953;
        caliber = 0.72;
        visibleFire = 1;
        audibleFire = 5;
    };
    class JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Red: JCA_B_9x19_Ball_Glock17_FMJ {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Green: JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Yellow: JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_Glock17_FMJ_Tracer_IR: JCA_B_9x19_Ball_Glock17_FMJ {
        nvgOnly = 1;
    };
    class JCA_B_9x19_Ball_M9A1_FMJ: BulletBase {
        ACE_caliber = 9.03;
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 8.035;
        ACE_ammoTempMuzzleVelocityShifts[] = {-1.87, -1.82, -1.66, -1.4, -1.04, -0.57, 0, 0.68, 1.46, 2.34, 3.33};
        ACE_ballisticCoefficients[] = {0.212};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_barrelLengths[] = {101.6, 127, 228.6};
        ACE_muzzleVelocities[] = {365, 397, 429};
        hit = 5;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        cost = 100;
        typicalSpeed = 394;
        airFriction = -0.00179466;
        caliber = 1.2;
        deflecting = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock = 1;
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 0;
        audibleFire = 30;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };
    class JCA_B_9x19_Ball_M9A1_JHP: JCA_B_9x19_Ball_M9A1_FMJ {
        ACE_ballisticCoefficients[] = {0.181};
        hit = 8.3;
        airFriction = -0.00209318;
        caliber = 0.72;
    };
    class JCA_B_9x19_Ball_M9A1_SUB: JCA_B_9x19_Ball_M9A1_FMJ {
        ACE_bulletMass = 9.525;
        ACE_ballisticCoefficients[] = {0.217};
        ACE_muzzleVelocities[] = {300, 326, 353};
        hit = 7.5;
        typicalSpeed = 324;
        airFriction = -0.00116626;
        caliber = 0.72;
        visibleFire = 1;
        audibleFire = 5;
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green: JCA_B_9x19_Ball_M9A1_FMJ {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Red: JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Yellow: JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_M9A1_FMJ_Tracer_IR: JCA_B_9x19_Ball_M9A1_FMJ {
        nvgOnly = 1;
    };
    class JCA_B_9x19_Ball_MP5_FMJ: BulletBase {
        ACE_caliber = 9.03;
        ACE_bulletLength = 14.859;
        ACE_bulletMass = 8.035;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.235};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_barrelLengths[] = {101.6, 127, 228.6};
        ACE_muzzleVelocities[] = {366, 398, 430};
        hit = 5.4;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_9mm";
        cost = 100;
        typicalSpeed = 428;
        airFriction = -0.00173436;
        caliber = 1.2;
        deflecting = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock = 1;
        tracerScale = 0.5;
        tracerStartTime = 0.05;
        tracerEndTime = 1;
        nvgOnly = 0;
        audibleFire = 30;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };
    class JCA_B_9x19_Ball_MP5_JHP: JCA_B_9x19_Ball_MP5_FMJ {
        ACE_ballisticCoefficients[] = {0.204};
        hit = 9;
        airFriction = -0.00199741;
        caliber = 0.72;
    };
    class JCA_B_9x19_Ball_MP5_FMJ_Tracer_Green: JCA_B_9x19_Ball_MP5_FMJ {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_MP5_FMJ_Tracer_Red: JCA_B_9x19_Ball_MP5_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_MP5_FMJ_Tracer_Yellow: JCA_B_9x19_Ball_MP5_FMJ_Tracer_Green {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_MP5_FMJ_Tracer_IR: JCA_B_9x19_Ball_MP5_FMJ {
        nvgOnly = 1;
    };
    class JCA_B_45ACP_Ball_Mk23: BulletBase {
        ACE_caliber = 11.48;
        ACE_bulletLength = 16.99;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = {-1.87, -1.82, -1.66, -1.4, -1.04, -0.57, 0, 0.68, 1.46, 2.34, 3.33};
        ACE_ballisticCoefficients[] = {0.209};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {278, 302, 344};
        ACE_barrelLengths[] = {101.6, 127, 228.6};
        airLock = 1;
        hit = 6.2;
        indirectHit = 0;
        indirectHitRange = 0;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        caliber = 1.4;
        deflecting = 25;
        visibleFire = 1;
        audibleFire = 5;
        cost = 100;
        typicalSpeed = 311;
        airFriction = -0.00106842;
        tracerScale = 0.6;
        tracerStartTime = 0.0075;
        tracerEndTime = 5;
        nvgOnly = 0;
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_Red: JCA_B_45ACP_Ball_Mk23 {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_Green: JCA_B_45ACP_Ball_Mk23_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_Yellow: JCA_B_45ACP_Ball_Mk23_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_IR: JCA_B_45ACP_Ball_Mk23 {
        nvgOnly = 1;
    };
    class JCA_B_45ACP_Ball_UMP45: BulletBase {
        ACE_caliber = 11.48;
        ACE_bulletLength = 16.99;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = {-1.87, -1.82, -1.66, -1.4, -1.04, -0.57, 0, 0.68, 1.46, 2.34, 3.33};
        ACE_ballisticCoefficients[] = {0.261};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {278, 302, 344};
        ACE_barrelLengths[] = {101.6, 127, 228.6};
        airLock = 1;
        hit = 7;
        indirectHit = 0;
        indirectHitRange = 0;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        caliber = 1.4;
        deflecting = 25;
        visibleFire = 1;
        audibleFire = 5;
        cost = 100;
        typicalSpeed = 332;
        airFriction = -0.00103052;
        tracerScale = 0.6;
        tracerStartTime = 0.0075;
        tracerEndTime = 5;
        nvgOnly = 0;
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_Red: JCA_B_45ACP_Ball_UMP45 {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_Green: JCA_B_45ACP_Ball_UMP45_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_Yellow: JCA_B_45ACP_Ball_UMP45_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_IR: JCA_B_45ACP_Ball_UMP45 {
        nvgOnly = 1;
    };
    class JCA_B_556x45_Ball: BulletBase {
        ACE_caliber = 5.70;
        ACE_bulletLength = 23.01;
        ACE_bulletMass = 4.018;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.149};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 792, 840, 881, 898, 920, 934};
        ACE_barrelLengths[] = {203.2, 254, 304.8, 368.3, 406.4, 457.2, 508};
        airLock = 1;
        hit = 9.16;
        indirectHit = 0;
        indirectHitRange = 0;
        cost = 1;
        typicalSpeed = 926;
        airFriction = -0.00133644;
        waterFriction = -0.3;
        caliber = 0.869565;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 1;
        tracerStartTime = 0.17;
        tracerEndTime = 1.62;
        nvgOnly = 0;
        audibleFire = 35;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        aiAmmoUsageFlags = 64;
        class CamShakeExplode {
            power = 2.23607;
            duration = 0.4;
            frequency = 20;
            distance = 6.7082;
        };
        class CamShakeHit {
            power = 5;
            duration = 0.2;
            frequency = 20;
            distance = 1;
        };
    };
    class JCA_B_556x45_Ball_M855A1: JCA_B_556x45_Ball {
        ACE_bulletLength = 25.4;
        ACE_ballisticCoefficients[] = {0.149};
        ACE_muzzleVelocities[] = {734, 804, 853, 894, 911, 934, 948};
        hit = 9.44;
        typicalSpeed = 940;
        airFriction = -0.00132981;
        caliber = 1;
    };
    class JCA_B_556x45_Ball_M193: JCA_B_556x45_Ball {
        ACE_bulletLength = 19;
        ACE_bulletMass = 3.6;
        ACE_ballisticCoefficients[] = {0.280};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {772, 846, 898, 941, 960, 983, 998};
        hit = 9.38;
        typicalSpeed = 990;
        airFriction = -0.00139457;
    };
    class JCA_B_556x45_Ball_Mk262: JCA_B_556x45_Ball {
        ACE_bulletLength = 25.25;
        ACE_bulletMass = 4.99;
        ACE_ballisticCoefficients[] = {0.356};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {655, 717, 761, 798, 813, 833, 846};
        hit = 9.31;
        typicalSpeed = 838;
        airFriction = -0.00114664;
    };
    class JCA_B_556x45_Ball_Mk318: JCA_B_556x45_Ball {
        ACE_bulletLength = 23.67;
        ACE_bulletMass = 4.018;
        ACE_ballisticCoefficients[] = {0.303};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {742, 812, 862, 904, 921, 944, 958};
        hit = 9.64;
        typicalSpeed = 950;
        airFriction = -0.00130202;
    };
    class JCA_B_556x45_Ball_M995AP: JCA_B_556x45_Ball {
        ACE_bulletLength = 22.7;
        ACE_bulletMass = 4.536;
        ACE_ballisticCoefficients[] = {0.306};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {687, 753, 799, 838, 854, 875, 888};
        hit = 9.34;
        typicalSpeed = 880;
        airFriction = -0.00131582;
        caliber = 1.2;
    };
    class JCA_B_556x45_Ball_Dual: JCA_B_556x45_Ball {
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_muzzleVelocities[] = {220, 241, 255, 268, 273, 280, 284};
        visibleFire = 1;
        audibleFire = 5;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        typicalSpeed = 283;
        airFriction = -0.0005713;
        waterFriction = -0.01;
        effectFly = "AmmoUnderwater";
        nvgOnly = 1;
        aiAmmoUsageFlags = "96";
    };
    class JCA_B_556x45_Ball_Tracer_Red: JCA_B_556x45_Ball {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_556x45_Ball_Tracer_Green: JCA_B_556x45_Ball_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_556x45_Ball_Tracer_Yellow: JCA_B_556x45_Ball_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_556x45_Ball_IR_Dim_Tracer: JCA_B_556x45_Ball {
        tracerScale = 0.5;
        tracerStartTime = 0.01;
        tracerEndTime = 2.12;
        nvgOnly = 1;
    };
    class JCA_B_300BLK_Ball: BulletBase {
        ACE_caliber = 7.85;
        ACE_bulletLength = 33.73;
        ACE_bulletMass = 12.312;
        ACE_ammoTempMuzzleVelocityShifts[] = {-1.87, -1.82, -1.66, -1.4, -1.04, -0.57, 0, 0.68, 1.46, 2.34, 3.33};
        ACE_ballisticCoefficients[] = {0.437};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_barrelLengths[] = {228.6};
        ACE_muzzleVelocities[] = {290};
        hit = 7.6;
        visibleFire = 1;
        audibleFire = 5;
        dangerRadiusBulletClose = 4;
        suppressionRadiusBulletClose = 2;
        typicalSpeed = 290;
        caliber = 0.96;
        tracerStartTime = 0.18;
        tracerEndTime = 1.87;
        airFriction = -0.00044673;
        class CamShakeExplode {
            power = 2.23607;
            duration = 0.4;
            frequency = 20;
            distance = 6.7082;
        };
    };
    class JCA_B_300BLK_Ball_Tracer_Red: JCA_B_300BLK_Ball {
        visibleFire = 5;
    };
    class JCA_B_300BLK_Ball_Tracer_Green: JCA_B_300BLK_Ball {
        visibleFire = 5;
    };
    class JCA_B_300BLK_Ball_Tracer_Yellow: JCA_B_300BLK_Ball {
        visibleFire = 5;
    };
    class JCA_B_300BLK_Ball_Tracer_IR: JCA_B_300BLK_Ball {
        tracerScale = 0.5;
        tracerStartTime = 0.02;
        tracerEndTime = 3.03;
    };
    class JCA_B_300BLK_Ball_110gr: JCA_B_300BLK_Ball {
        ACE_bulletLength = 29.97;
        ACE_bulletMass = 7.128;
        ACE_transonicStabilityCoef = 1;
        ACE_ammoTempMuzzleVelocityShifts[] = {-3.74, -3.64, -3.32, -2.8, -2.08, -1.14, 0, 1.36, 2.92, 4.68, 6.66};
        ACE_ballisticCoefficients[] = {0.290};
        ACE_muzzleVelocities[] = {630};
        hit = 9.5;
        visibleFire = 3;
        audibleFire = 45;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        suppressionRadiusBulletClose = 6;
        typicalSpeed = 630;
        caliber = 1.28;
        airFriction = -0.00151328;
        class CamShakeExplode
        {
            power = 2.82843;
            duration = 0.6;
            frequency = 20;
            distance = 8.48528;
        };
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_Red: JCA_B_300BLK_Ball_110gr {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_Green: JCA_B_300BLK_Ball_110gr_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_Yellow: JCA_B_300BLK_Ball_110gr_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_IR: JCA_B_300BLK_Ball_110gr {
        tracerScale = 0.5;
        tracerStartTime = 0.02;
        tracerEndTime = 3.03;
        nvgOnly = 1;
    };
    class JCA_B_762x51_Ball_M80: BulletBase {
        ACE_caliber = 7.85;
        ACE_bulletLength = 28.96;
        ACE_bulletMass = 9.461;
        ACE_ammoTempMuzzleVelocityShifts[] = {-18.7, -18.2, -16.6, -14, -10.4, -5.7, 0, 6.8, 14.6, 23.4, 33.3};
        ACE_ballisticCoefficients[] = {0.2};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {700, 746, 784, 820, 833, 841, 845};
        ACE_barrelLengths[] = {254, 330.2, 406.4, 508, 558.8, 609.6, 660.4};
        hit = 12.2;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_762";
        visibleFire = 3;
        audibleFire = 45;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        cost = 1.2;
        airLock = 1;
        typicalSpeed = 820;
        caliber = 1.6;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 1;
        tracerStartTime = 0.18;
        tracerEndTime = 1.87;
        nvgOnly = 0;
        airFriction = -0.00103882;
        class CamShakeExplode {
            power = 2.82843;
            duration = 0.6;
            frequency = 20;
            distance = 8.48528;
        };
        class CamShakeHit {
            power = 5;
            duration = 0.2;
            frequency = 20;
            distance = 1;
        };
    };
    class JCA_B_762x51_Ball_M80A1: JCA_B_762x51_Ball_M80 {
        ACE_bulletLength = 30.26;
        ACE_bulletMass = 8.489;
        ACE_ballisticCoefficients[] = {0.173};
        ACE_muzzleVelocities[] = {759, 809, 850, 889, 903, 912, 916};
        hit = 12.9;
        typicalSpeed = 889;
        caliber = 2;
        airFriction = -0.00116766;
    };
    class JCA_B_762x51_Ball_M993AP: JCA_B_762x51_Ball_M80 {
        ACE_bulletLength = 28.96;
        ACE_bulletMass = 8.23;
        ACE_ballisticCoefficients[] = {0.359};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {782, 833, 875, 915, 930, 939, 943};
        hit = 13.6;
        typicalSpeed = 930;
        caliber = 2.2;
        airFriction = -0.0011103;
    };
    class JCA_B_762x51_Ball_Mk316: JCA_B_762x51_Ball_M80 {
        ACE_bulletLength = 31.5;
        ACE_bulletMass = 11.34;
        ACE_ammoTempMuzzleVelocityShifts[] = {-3.74, -3.64, -3.32, -2.8, -2.08, -1.14, 0, 1.36, 2.92, 4.68, 6.66};
        ACE_ballisticCoefficients[] = {0.489};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {674, 719, 755, 790, 803, 810, 814};
        hit = 13.6;
        typicalSpeed = 790;
        caliber = 1.8;
        airFriction = -0.00084907;
    };
    class JCA_B_762x51_Ball_Mk319: JCA_B_762x51_Ball_M80 {
        ACE_bulletLength = 25.93;
        ACE_bulletMass = 8.424;
        ACE_ammoTempMuzzleVelocityShifts[] = {-1.87, -1.82, -1.66, -1.4, -1.04, -0.57, 0, 0.68, 1.46, 2.34, 3.33};
        ACE_ballisticCoefficients[] = {0.377};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {776, 827, 869, 909, 923, 932, 936};
        hit = 13.3;
        typicalSpeed = 909;
        caliber = 1.5;
        airFriction = -0.00105916;
    };
    class JCA_B_762x51_Ball_SLAP: JCA_B_762x51_Ball_M80 {
        ACE_caliber = 4.83;
        ACE_bulletLength = 17.78;
        ACE_bulletMass = 3.402;
        ACE_ballisticCoefficients[] = {0.165};
        ACE_muzzleVelocities[] = {1015, 1082, 1137, 1190, 1208, 1220, 1226};
        hit = 9.7;
        typicalSpeed = 1220;
        caliber = 3.2;
        airFriction = -0.00107693;
    };
    class JCA_B_762x51_Ball_SLAP_Tracer: JCA_B_762x51_Ball_SLAP {
        ACE_caliber = 5.70;
        ACE_bulletLength = 23.11;
        ACE_bulletMass = 3.421;
        ACE_ballisticCoefficients[] = {0.127};
        hit = 13.5;
        typicalSpeed = 1220;
        caliber = 0.9;
        airFriction = -0.00139857;
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_762x51_Ball_Subsonic: JCA_B_762x51_Ball_M80 {
        ACE_bulletLength = 34.11;
        ACE_bulletMass = 12.96;
        ACE_ammoTempMuzzleVelocityShifts[] = {-1.87, -1.82, -1.66, -1.4, -1.04, -0.57, 0, 0.68, 1.46, 2.34, 3.33};
        ACE_ballisticCoefficients[] = {0.518};
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {290, 309, 325, 340, 345, 349, 350};
        hit = 6;
        visibleFire = 1;
        audibleFire = 5;
        dangerRadiusBulletClose = 4;
        suppressionRadiusBulletClose = 2;
        typicalSpeed = 320;
        caliber = 1;
        airFriction = -0.00049496;
        class CamShakeExplode {
            power = 2.23607;
            duration = 0.4;
            frequency = 20;
            distance = 6.7082;
        };
    };
    class JCA_B_762x51_Ball_M80_Tracer_Red: JCA_B_762x51_Ball_M80 {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_762x51_Ball_M80_Tracer_Green: JCA_B_762x51_Ball_M80_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_762x51_Ball_M80_Tracer_Yellow: JCA_B_762x51_Ball_M80_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_762x51_Ball_M80_IR_Dim_Tracer: JCA_B_762x51_Ball_M80 {
        tracerScale = 0.6;
        tracerStartTime = 0.02;
        tracerEndTime = 3.03;
        nvgOnly = 1;
    };
    class JCA_B_338LM_Ball: B_338_Ball {
        ACE_caliber = 8.61;
        ACE_bulletLength = 39.4;
        ACE_bulletMass = 16.2;
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.31, -5.094, -4.57, -4.024, -3.396, -2.56, -1.528, -0.306, 1.192, 3.034, 5.238};
        ACE_ballisticCoefficients[] = {0.648};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {908};
        ACE_barrelLengths[] = {685.8};
        hit = 20;
        caliber = 0.45;
        typicalSpeed = 906;
        tracerScale = 1.2;
        tracerStartTime = 0.23;
        tracerEndTime = 2.71;
        airFriction = -0.00061662;
    };
    class JCA_B_338LM_AP_Ball: JCA_B_338LM_Ball {
        ACE_bulletLength = 35.5;
        ACE_bulletMass = 16.1;
        ACE_ballisticCoefficients[] = {0.564};
        ACE_muzzleVelocities[] = {908};
        caliber = 1.35;
        hit = 20;
        typicalSpeed = 906;
        airFriction = -0.00070864;
    };
    class JCA_B_338LM_API_Ball: JCA_B_338LM_Ball {
        ACE_bulletLength = 39;
        ACE_bulletMass = 16.4;
        ACE_ballisticCoefficients[] = {0.554};
        ACE_muzzleVelocities[] = {898};
        ace_vehicle_damage_incendiary = 1;
        caliber = 1.1;
        hit = 34.6;
        indirectHit = 8;
        indirectHitRange = 0.2;
        typicalSpeed = 896;
        airFriction = -0.0007233;
        CraterEffects = "ExploAmmoCrater";
        class HitEffects {
            hitMetal = "ImpactMetalSabotSmall";
            hitMetalPlate = "ImpactMetalSabotSmall";
            hitBuilding = "ImpactConcreteSabotSmall";
            hitConcrete = "ImpactConcreteSabotSmall";
            hitGroundSoft = "ImpactEffectsGroundSabot";
            hitGroundRed = "ImpactEffectsGroundSabot";
            hitGroundHard = "ImpactEffectsGroundSabot";
            Hit_Foliage_green = "ImpactLeavesGreen";
            Hit_Foliage_Dead = "ImpactLeavesDead";
            Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
            Hit_Foliage_Palm = "ImpactLeavesPalm";
            Hit_Foliage_Pine = "ImpactLeavesPine";
            hitFoliage = "ImpactLeaves";
            hitGlass = "ImpactGlass";
            hitGlassArmored = "ImpactGlassThin";
            hitWood = "ImpactWood";
            hitHay = "ImpactHay";
            hitPlastic = "ImpactPlastic";
            hitRubber = "ImpactRubber";
            hitTyre = "ImpactTyre";
            hitMan = "ImpactEffectsBlood";
            hitWater = "ImpactEffectsWater";
            hitVirtual = "ImpactMetal";
            default_mat = "ImpactEffectsGroundSabot";
        };
    };
    class JCA_B_338LM_Ball_Tracer_Red: JCA_B_338LM_Ball {
        visibleFire = 5;
    };
    class JCA_B_338LM_Ball_Tracer_Green: JCA_B_338LM_Ball {
        visibleFire = 5;
    };
    class JCA_B_338LM_Ball_Tracer_Yellow: JCA_B_338LM_Ball {
        visibleFire = 5;
    };
    class JCA_B_338LM_Ball_Tracer_IR: JCA_B_338LM_Ball {
        tracerScale = 0.6;
        tracerStartTime = 0.02;
        tracerEndTime = 3.03;
    };
    class JCA_B_127x99_Ball_M33: BulletBase {
        ACE_caliber = 12.98;
        ACE_bulletLength = 58.42;
        ACE_bulletMass = 42.832;
        ACE_ammoTempMuzzleVelocityShifts[] = {-18.7, -18.2, -16.6, -14, -10.4, -5.7, 0, 6.8, 14.6, 23.4, 33.3};
        ACE_ballisticCoefficients[] = {0.62};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {762, 838, 853, 871, 903};
        ACE_barrelLengths[] = {508, 736.6, 812.8, 914.4, 1143};
        ace_vehicle_damage_incendiary = 0.2;
        hit = 32.3;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_127";
        visibleFire = 5;
        audibleFire = 120;
        dangerRadiusBulletClose = 12;
        dangerRadiusHit = 16;
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 12;
        cost = 5;
        airLock = 1;
        caliber = 2.6;
        typicalSpeed = 903;
        timeToLive = 10;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale = 1.2;
        tracerStartTime = 0.23;
        tracerEndTime = 2.71;
        nvgOnly = 0;
        airFriction = -0.00065856;
        class CamShakeExplode
        {
            power = 3.60555;
            duration = 0.8;
            frequency = 20;
            distance = 10.8167;
        };
        class CamShakeHit
        {
            power = 13;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
    };
    class JCA_B_127x99_Ball_M33_Tracer_Red: JCA_B_127x99_Ball_M33 {
        visibleFire = 8;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_M33_Tracer_Green: JCA_B_127x99_Ball_M33_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_127x99_Ball_M33_Tracer_Yellow: JCA_B_127x99_Ball_M33_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_127x99_Ball_M33_Tracer_IR: JCA_B_127x99_Ball_M33 {
        tracerScale = 0.6;
        tracerStartTime = 0.23;
        tracerEndTime = 1.51;
        nvgOnly = 1;
    };
    class JCA_B_127x99_Ball_AMAX: JCA_B_127x99_Ball_M33 {
        ACE_bulletLength = 64.77;
        ACE_bulletMass = 48.6;
        ACE_muzzleVelocityVariationSD = 0.2;
        ACE_ballisticCoefficients[] = {1.0362};
        ACE_muzzleVelocities[] = {751,826,840,858,889};
        hit = 35.5;
        caliber = 3;
        typicalSpeed = 889;
        airFriction = -0.00039574;
    };
    class JCA_B_127x99_Ball_M903_SLAP: JCA_B_127x99_Ball_M33 {
        ACE_caliber = 7.5;
        ACE_bulletLength = 36.8;
        ACE_bulletMass = 23.166;
        ACE_ballisticCoefficients[] = {0.735};
        ACE_muzzleVelocities[] = {1029,1132,1152,1177,1219};
        ace_vehicle_damage_incendiary = 0.8;
        hit = 51.6;
        caliber = 3.4;
        typicalSpeed = 1219;
        airFriction = -0.00051605;
        cost = 15;
        class CamShakeExplode {
            power = 4.47214;
            duration = 0.8;
            frequency = 20;
            distance = 13.4164;
        };
        class CamShakeHit {
            power = 20;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Red: JCA_B_127x99_Ball_M903_SLAP {
        ACE_bulletLength = 41.4;
        ACE_bulletMass = 23.004;
        hit = 51.2;
        visibleFire = 8;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 1;
        tracerStartTime = 0.01;
        tracerEndTime = 1.62;
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Green: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Yellow: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_IR: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red {
        visibleFire = 5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgOnly = 1;
    };
    class JCA_B_127x99_Ball_Mk211_HEIAP: JCA_B_127x99_Ball_M903_SLAP {
        ACE_caliber = 12.98;
        ACE_bulletLength = 58.42;
        ACE_bulletMass = 43.48;
        ACE_ballisticCoefficients[] = {0.651};
        ACE_muzzleVelocities[] = {752, 828, 842, 860, 891};
        ace_vehicle_damage_incendiary = 1;
        hit = 51.7;
        indirectHit = 6;
        indirectHitRange = 1.6;
        explosive = 0.4;
        explosionSoundEffect = "DefaultExplosion";
        CraterEffects = "ExploAmmoCrater";
        explosionEffects = "ExploAmmoExplosion";
        typicalSpeed = 891;
        airFriction = -0.00062936;
        class CamShakeExplode {
            power = 4;
            duration = 0.8;
            frequency = 20;
            distance = 43.7771;
        };
        class CamShakeHit {
            power = 20;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
        soundHit1[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01.wss",
            1.7782794,
            1,
            1300
        };
        soundHit2[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02.wss",
            1.7782794,
            1,
            1300
        };
        soundHit3[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03.wss",
            1.7782794,
            1,
            1300
        };
        soundHit4[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04.wss",
            1.7782794,
            1,
            1300
        };
        multiSoundHit[] = {
            "soundHit1",
            0.25,
            "soundHit2",
            0.25,
            "soundHit3",
            0.25,
            "soundHit4",
            0.25
        };
        SoundSetExplosion[] = {
            "Shell19mm25mm_Exp_SoundSet"
        };
    };
    class JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red: JCA_B_127x99_Ball_Mk211_HEIAP {
        visibleFire = 8;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR: JCA_B_127x99_Ball_Mk211_HEIAP {
        tracerScale = 0.6;
        tracerStartTime = 0.23;
        tracerEndTime = 1.51;
        nvgOnly = 1;
    };
    class JCA_B_127x99_Ball_M8_API: JCA_B_127x99_Ball_M903_SLAP {
        ACE_caliber = 12.98;
        ACE_bulletLength = 58.67;
        ACE_bulletMass = 40.337;
        ACE_ballisticCoefficients[] = {0.58};
        ACE_muzzleVelocities[] = {764, 841, 856, 874, 905};
        ace_vehicle_damage_incendiary = 1;
        hit = 49.5;
        indirectHit = 8;
        indirectHitRange = 0.2;
        typicalSpeed = 905;
        airFriction = -0.00070327;
        CraterEffects = "ExploAmmoCrater";
        class HitEffects
        {
            hitMetal = "ImpactMetalSabotSmall";
            hitMetalPlate = "ImpactMetalSabotSmall";
            hitBuilding = "ImpactConcreteSabotSmall";
            hitConcrete = "ImpactConcreteSabotSmall";
            hitGroundSoft = "ImpactEffectsGroundSabot";
            hitGroundRed = "ImpactEffectsGroundSabot";
            hitGroundHard = "ImpactEffectsGroundSabot";
            Hit_Foliage_green = "ImpactLeavesGreen";
            Hit_Foliage_Dead = "ImpactLeavesDead";
            Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
            Hit_Foliage_Palm = "ImpactLeavesPalm";
            Hit_Foliage_Pine = "ImpactLeavesPine";
            hitFoliage = "ImpactLeaves";
            hitGlass = "ImpactGlass";
            hitGlassArmored = "ImpactGlassThin";
            hitWood = "ImpactWood";
            hitHay = "ImpactHay";
            hitPlastic = "ImpactPlastic";
            hitRubber = "ImpactRubber";
            hitTyre = "ImpactTyre";
            hitMan = "ImpactEffectsBlood";
            hitWater = "ImpactEffectsWater";
            hitVirtual = "ImpactMetal"; // BulletBase
            default_mat = "ImpactEffectsGroundSabot";
        };
    };
    class JCA_B_127x99_Ball_M20_API_Tracer_Red: JCA_B_127x99_Ball_M8_API {
        visibleFire = 8;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_Mk257_API_Tracer_IR: JCA_B_127x99_Ball_M8_API {
        tracerScale = 0.6;
        tracerStartTime = 0.23;
        tracerEndTime = 1.51;
        nvgOnly = 1;
    };
    class JCA_GrenadeAmmo_HandFlare_Base: GrenadeHand {
        ace_frag_skip = 1;
        ace_frag_force = 0;
    };
    class JCA_B_460x30_Ball_AP: BulletBase {
        ACE_caliber=4.65; 
        ACE_bulletLength=19.2;
        ACE_bulletMass=2;
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33};
        ACE_ballisticCoefficients[]={0.179};
        ACE_dragModel=1;
        ACE_standardAtmosphere="ICAO";
        ACE_velocityBoundaries[]={};
        ACE_barrelLengths[]={180};
        ACE_muzzleVelocities[]={680};
        caliber=0.8;
        hit=7.2;
        indirectHit=0;
        indirectHitRange=0;
        typicalSpeed=680;
        airFriction=-0.00241303;
        deflecting=20;
        cartridge="FxCartridge_9mm";
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=0.6;
        tracerStartTime=0;
        tracerEndTime=0.65;
        nvgOnly=0;
        audibleFire=25;
        visibleFire=3;
        visibleFireTime=5;
        dangerRadiusBulletClose=8;
        suppressionRadiusBulletClose=6;
        dangerRadiusHit=12;
        suppressionRadiusHit=8;
    };
    class JCA_B_460x30_Ball_Action: JCA_B_460x30_Ball_AP {
        ACE_bulletLength=16.4;
        ACE_ballisticCoefficients[]={0.149};
        ACE_muzzleVelocities[]={688};
        caliber=0.55;
        hit=10.8;
        typicalSpeed=688;
        airFriction=-0.0028898;
    };
    class JCA_B_460x30_Ball_Subsonic: JCA_B_460x30_Ball_AP {
        ACE_bulletLength=21.9;
        ACE_bulletMass=5;
        ACE_ballisticCoefficients[]={0.145};
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={296};
        caliber=1.15;
        hit=5;
        typicalSpeed=296;
        airFriction=-0.00067053;
        audibleFire=5;
        visibleFire=1;
        visibleFireTime=2;
        dangerRadiusBulletClose=4;
        suppressionRadiusBulletClose=2;
    };
    class JCA_B_460x30_Ball_FMJ: JCA_B_460x30_Ball_AP {
        ACE_bulletLength=20;
        ACE_bulletMass=2.6;
        ACE_ballisticCoefficients[]={0.141};
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={622}; 
        caliber=0.65;
        hit=7.8;
        typicalSpeed=688;
        airFriction=-0.00162565;
    };
    class JCA_B_460x30_Ball_AP_Tracer_Red: JCA_B_460x30_Ball_AP {
        visibleFire=5;
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_460x30_Ball_AP_Tracer_Green: JCA_B_460x30_Ball_AP_Tracer_Red {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_460x30_Ball_AP_Tracer_Yellow: JCA_B_460x30_Ball_AP_Tracer_Red {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_460x30_Ball_AP_Tracer_IR: JCA_B_460x30_Ball_AP {
        tracerScale=0.3;
        nvgOnly=1;
    };
    class JCA_B_460x30_Ball_DM21: JCA_B_460x30_Ball_FMJ {};
    class JCA_B_460x30_Ball_DM41: JCA_B_460x30_Ball_Action {};
};
