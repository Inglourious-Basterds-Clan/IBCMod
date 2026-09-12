class CfgMagazines {
    class CA_Magazine;
    class JCA_17Rnd_9x19_P320_Mag;
    class JCA_15Rnd_9x19_P320C_FMJ_Mag: JCA_17Rnd_9x19_P320_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P320 FMJ Mag";
        ammo = "JCA_B_9x19_Ball_P320C_FMJ";
        type = 16;
        count = 15;
        mass = 5.6;
        initSpeed = 361;
        descriptionShort = "Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P320 Compact";
        displaynameshort = "FMJ";
    };
    class JCA_15Rnd_9x19_P320C_JHP_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P320 JHP Mag";
        ammo = "JCA_B_9x19_Ball_P320C_JHP";
        mass = 6.3;
        initSpeed = 300;
        displaynameshort = "JHP";
    };
    class JCA_15Rnd_9x19_P320C_Red_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P320 Tracer (Red) Mag";
        ammo = "JCA_B_9x19_Ball_P320C_FMJ_Tracer_Red";
        tracersEvery = 1;
        displaynameshort = "Tracer";
    };
    class JCA_15Rnd_9x19_P320C_Green_Mag: JCA_15Rnd_9x19_P320C_Red_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P320 Tracer (Green) Mag";
        ammo = "JCA_B_9x19_Ball_P320C_FMJ_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P320C_Yellow_Mag: JCA_15Rnd_9x19_P320C_Red_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P320 Tracer (Yellow) Mag";
        ammo = "JCA_B_9x19_Ball_P320C_FMJ_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P320C_IR_Mag: JCA_15Rnd_9x19_P320C_Red_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P320 Tracer (IR) Mag";
        ammo = "JCA_B_9x19_Ball_P320C_FMJ_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_15Rnd_9x19_P226_Mag: CA_Magazine {
        displayName = "9 mm 15Rnd P226 FMJ Mag";
        ammo = "JCA_B_9x19_Ball_P226_FMJ";
        mass = 5.7;
        initSpeed = 378;
        displaynameshort = "FMJ";
    };
    class JCA_15Rnd_9x19_P226_JHP_Mag: JCA_15Rnd_9x19_P226_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P226 JHP Mag";
        ammo = "JCA_B_9x19_Ball_P226_JHP";
        displaynameshort = "JHP";
    };
    class JCA_15Rnd_9x19_P226_SUB_Mag: JCA_15Rnd_9x19_P226_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd P226 Subsonic Mag";
        ammo = "JCA_B_9x19_Ball_P226_SUB";
        mass = 6.3;
        initSpeed = 311;
        displaynameshort = "Subsonic";
    };
    class JCA_15Rnd_9x19_P226_Red_Mag: JCA_15Rnd_9x19_P226_Mag {
        ammo = "JCA_B_9x19_Ball_P226_FMJ_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_15Rnd_9x19_P226_Green_Mag: JCA_15Rnd_9x19_P226_Red_Mag {
        ammo = "JCA_B_9x19_Ball_P226_FMJ_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P226_Yellow_Mag: JCA_15Rnd_9x19_P226_Red_Mag {
        ammo = "JCA_B_9x19_Ball_P226_FMJ_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P226_IR_Mag: JCA_15Rnd_9x19_P226_Red_Mag {
        ammo = "JCA_B_9x19_Ball_P226_FMJ_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_17Rnd_9x19_G17_Mag: CA_Magazine {
        displayName = "9 mm 18Rnd G17 FMJ Mag";
        ammo = "JCA_B_9x19_Ball_Glock17_FMJ";
        mass = 6.4;
        initSpeed = 381;
    };
    class JCA_17Rnd_9x19_G17_JHP_Mag: JCA_17Rnd_9x19_G17_Mag {
        author = "Laid3acK";
        displayName = "9 mm 18Rnd G17 JHP Mag";
        ammo = "JCA_B_9x19_Ball_Glock17_JHP";
        displaynameshort = "JHP";
    };
    class JCA_17Rnd_9x19_G17_SUB_Mag: JCA_17Rnd_9x19_G17_Mag {
        author = "Laid3acK";
        displayName = "9 mm 18Rnd G17 Subsonic Mag";
        ammo = "JCA_B_9x19_Ball_Glock17_SUB";
        mass = 7;
        initSpeed = 313;
        displaynameshort = "Subsonic";
    };
    class JCA_17Rnd_9x19_G17_Red_Mag: JCA_17Rnd_9x19_G17_Mag {
        ammo = "JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_17Rnd_9x19_G17_Green_Mag: JCA_17Rnd_9x19_G17_Red_Mag {
        ammo = "JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Green";
    };
    class JCA_17Rnd_9x19_G17_Yellow_Mag: JCA_17Rnd_9x19_G17_Red_Mag {
        ammo = "JCA_B_9x19_Ball_Glock17_FMJ_Tracer_Yellow";
    };
    class JCA_17Rnd_9x19_G17_IR_Mag: JCA_17Rnd_9x19_G17_Red_Mag {
        ammo = "JCA_B_9x19_Ball_Glock17_FMJ_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_15Rnd_9x19_M9A1_Mag: CA_Magazine {
        displayName = "9 mm 15Rnd M9A1 FMJ Mag";
        ammo = "JCA_B_9x19_Ball_M9A1_FMJ";
        mass = 6.1;
        initSpeed = 394;
        displaynameshort = "FMJ";
    };
    class JCA_15Rnd_9x19_M9A1_JHP_Mag: JCA_15Rnd_9x19_M9A1_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd M9A1 JHP Mag";
        ammo = "JCA_B_9x19_Ball_M9A1_JHP";
        displaynameshort = "JHP";
    };
    class JCA_15Rnd_9x19_M9A1_SUB_Mag: JCA_15Rnd_9x19_M9A1_Mag {
        author = "Laid3acK";
        displayName = "9 mm 15Rnd M9A1 Subsonic Mag";
        ammo = "JCA_B_9x19_Ball_M9A1_SUB";
        mass = 6.6;
        initSpeed = 324;
        displaynameshort = "Subsonic";
    };
    class JCA_15Rnd_9x19_M9A1_Red_Mag: JCA_15Rnd_9x19_M9A1_Mag {
        ammo = "JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_15Rnd_9x19_M9A1_Green_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag {
        ammo = "JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Green";
    };
    class JCA_15Rnd_9x19_M9A1_Yellow_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag {
        ammo = "JCA_B_9x19_Ball_M9A1_FMJ_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_M9A1_IR_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag {
        ammo = "JCA_B_9x19_Ball_M9A1_FMJ_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_Mag: CA_Magazine {
        displayName = "9 mm 30Rnd MP5 FMJ Mag";
        ammo = "JCA_B_9x19_Ball_MP5_FMJ";
        mass = 10;
        initSpeed = 428;
        displaynameshort = "FMJ";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Mag: JCA_30Rnd_9x19_MP5_Mag {
        author = "Laid3acK";
        displayName = "9 mm 30Rnd MP5 JHP Mag";
        ammo = "JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort = "JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Mag: JCA_30Rnd_9x19_MP5_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Red";
    };
    class JCA_30Rnd_9x19_MP5_Green_Mag: JCA_30Rnd_9x19_MP5_Red_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Mag: JCA_30Rnd_9x19_MP5_Red_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Mag: JCA_30Rnd_9x19_MP5_Red_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Mag: JCA_30Rnd_9x19_MP5_Red_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_Sand_Mag: JCA_30Rnd_9x19_MP5_Mag {
        displayName = "9 mm 30Rnd MP5 FMJ Sand Mag";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Sand_Mag: JCA_30Rnd_9x19_MP5_Sand_Mag {
        author = "Laid3acK";
        displayName = "9 mm 30Rnd MP5 JHP Sand Mag";
        ammo = "JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort = "JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Red";
    };
    class JCA_30Rnd_9x19_MP5_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_9x19_Ball_MP5_FMJ_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_12Rnd_45ACP_Mk23_Mag: CA_Magazine {
        ammo = "JCA_B_45ACP_Ball_Mk23";
        initSpeed = 311;
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag: JCA_12Rnd_45ACP_Mk23_Mag {
        ammo = "JCA_B_45ACP_Ball_Mk23_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_Green_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_Mk23_Tracer_Green";
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_Yellow_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_Mk23_Tracer_Yellow";
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_IR_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_Mk23_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_25Rnd_45ACP_UMP_Mag: CA_Magazine {
        ammo = "JCA_B_45ACP_Ball_UMP45";
        initSpeed = 332;
    };
    class JCA_25Rnd_45ACP_UMP_Red_Mag: JCA_25Rnd_45ACP_UMP_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Red";
    };
    class JCA_25Rnd_45ACP_UMP_Green_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Yellow_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_IR_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_IR";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_25Rnd_45ACP_UMP_Sand_Mag: JCA_25Rnd_45ACP_UMP_Mag {
    };
    class JCA_25Rnd_45ACP_UMP_Red_Sand_Mag: JCA_25Rnd_45ACP_UMP_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Red";
    };
    class JCA_25Rnd_45ACP_UMP_Green_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_IR_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_IR";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_45ACP_Ball_UMP45_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_30Rnd_556x45_PMAG: CA_Magazine {
        ammo = "JCA_B_556x45_Ball";
        mass = 6.6;
        initSpeed = 926;
        displaynameshort = "M855";
    };
    class JCA_30Rnd_556x45_M855A1_PMAG: JCA_30Rnd_556x45_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M855A1 PMAG";
        ammo = "JCA_B_556x45_Ball_M855A1";
        initSpeed = 940;
        displaynameshort = "M855A1";
    };
    class JCA_30Rnd_556x45_M193_PMAG: JCA_30Rnd_556x45_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M193 PMAG";
        ammo = "JCA_B_556x45_Ball_M193";
        mass = 6.4;
        initSpeed = 990;
        displaynameshort = "M193";
    };
    class JCA_30Rnd_556x45_Mk262_PMAG: JCA_30Rnd_556x45_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk262 PMAG";
        ammo = "JCA_B_556x45_Ball_Mk262";
        mass = 7;
        initSpeed = 838;
        displaynameshort = "Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_PMAG: JCA_30Rnd_556x45_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk318 PMAG";
        ammo = "JCA_B_556x45_Ball_Mk318";
        initSpeed = 950;
        displaynameshort = "Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_PMAG: JCA_30Rnd_556x45_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M995 AP PMAG";
        ammo = "JCA_B_556x45_Ball_M995AP";
        mass = 6.7;
        initSpeed = 880;
        displaynameshort = "M995 AP";
    };
    class JCA_30Rnd_556x45_UW_PMAG: JCA_30Rnd_556x45_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Dual Purpose PMAG";
        ammo = "JCA_B_556x45_Ball_Dual";
        initSpeed = 283;
        displaynameshort = "UW";
    };
    class JCA_30Rnd_556x45_Red_PMAG: JCA_30Rnd_556x45_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_PMAG: JCA_30Rnd_556x45_Red_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort = "M855 Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort = "M855 Tracer IR";
    };
    class JCA_30Rnd_556x45_sand_PMAG: JCA_30Rnd_556x45_PMAG {
    };
    class JCA_30Rnd_556x45_M855A1_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M855A1 Sand PMAG";
        ammo = "JCA_B_556x45_Ball_M855A1";
        initSpeed = 940;
        displaynameshort = "M855A1";
    };
    class JCA_30Rnd_556x45_M193_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M193 Sand PMAG";
        ammo = "JCA_B_556x45_Ball_M193";
        mass = 6.4;
        initSpeed = 990;
        displaynameshort = "M193";
    };
    class JCA_30Rnd_556x45_Mk262_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk262 Sand PMAG";
        ammo = "JCA_B_556x45_Ball_Mk262";
        mass = 7;
        initSpeed = 838;
        displaynameshort = "Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk318 Sand PMAG";
        ammo = "JCA_B_556x45_Ball_Mk318";
        initSpeed = 950;
        displaynameshort = "Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M995 AP Sand PMAG";
        ammo = "JCA_B_556x45_Ball_M995AP";
        mass = 6.7;
        initSpeed = 880;
        displaynameshort = "M995 AP";
    };
    class JCA_30Rnd_556x45_UW_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Dual Purpose Sand PMAG";
        ammo = "JCA_B_556x45_Ball_Dual";
        initSpeed = 283;
        displaynameshort = "UW";
    };
    class JCA_30Rnd_556x45_Red_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort = "M855 Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort = "M855 Tracer IR";
    };
    class JCA_30Rnd_556x45_EMAG: CA_Magazine {
        ammo = "JCA_B_556x45_Ball";
        mass = 6.8;
        initSpeed = 926;
        displaynameshort = "M855";
    };
    class JCA_30Rnd_556x45_M855A1_EMAG: JCA_30Rnd_556x45_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M855A1 EMAG";
        ammo = "JCA_B_556x45_Ball_M855A1";
        initSpeed = 940;
        displaynameshort = "M855A1";
    };
    class JCA_30Rnd_556x45_M193_EMAG: JCA_30Rnd_556x45_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M193 EMAG";
        ammo = "JCA_B_556x45_Ball_M193";
        mass = 6.6;
        initSpeed = 990;
        displaynameshort = "M193";
    };
    class JCA_30Rnd_556x45_Mk262_EMAG: JCA_30Rnd_556x45_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk262 EMAG";
        ammo = "JCA_B_556x45_Ball_Mk262";
        mass = 7.2;
        initSpeed = 838;
        displaynameshort = "Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_EMAG: JCA_30Rnd_556x45_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk318 EMAG";
        ammo = "JCA_B_556x45_Ball_Mk318";
        initSpeed = 950;
        displaynameshort = "Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_EMAG: JCA_30Rnd_556x45_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M995 AP EMAG";
        ammo = "JCA_B_556x45_Ball_M995AP";
        mass = 6.9;
        initSpeed = 880;
        displaynameshort = "M995 AP";
    };
    class JCA_30Rnd_556x45_UW_EMAG: JCA_30Rnd_556x45_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Dual Purpose EMAG";
        ammo = "JCA_B_556x45_Ball_Dual";
        initSpeed = 283;
        displaynameshort = "UW";
    };
    class JCA_30Rnd_556x45_Red_EMAG: JCA_30Rnd_556x45_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_EMAG: JCA_30Rnd_556x45_Red_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_EMAG: JCA_30Rnd_556x45_Red_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_EMAG: JCA_30Rnd_556x45_Red_EMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_EMAG: JCA_30Rnd_556x45_Red_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort = "M855 Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_EMAG: JCA_30Rnd_556x45_Tracer_Red_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_EMAG: JCA_30Rnd_556x45_Tracer_Red_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_EMAG: JCA_30Rnd_556x45_Tracer_Red_EMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort = "M855 Tracer IR";
    };
    class JCA_30Rnd_556x45_sand_EMAG: JCA_30Rnd_556x45_EMAG {
    };
    class JCA_30Rnd_556x45_M855A1_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M855A1 Sand EMAG";
        ammo = "JCA_B_556x45_Ball_M855A1";
        initSpeed = 940;
        displaynameshort = "M855A1";
    };
    class JCA_30Rnd_556x45_M193_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M193 Sand EMAG";
        ammo = "JCA_B_556x45_Ball_M193";
        mass = 6.6;
        initSpeed = 990;
        displaynameshort = "M193";
    };
    class JCA_30Rnd_556x45_Mk262_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk262 Sand EMAG";
        ammo = "JCA_B_556x45_Ball_Mk262";
        mass = 7.2;
        initSpeed = 838;
        displaynameshort = "Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk318 Sand EMAG";
        ammo = "JCA_B_556x45_Ball_Mk318";
        initSpeed = 950;
        displaynameshort = "Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M995 AP Sand EMAG";
        ammo = "JCA_B_556x45_Ball_M995AP";
        mass = 6.9;
        initSpeed = 880;
        displaynameshort = "M995 AP";
    };
    class JCA_30Rnd_556x45_UW_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Dual Purpose Sand EMAG";
        ammo = "JCA_B_556x45_Ball_Dual";
        initSpeed = 283;
        displaynameshort = "UW";
    };
    class JCA_30Rnd_556x45_Red_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort = "M855 Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_sand_EMAG: JCA_30Rnd_556x45_Tracer_Red_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG: JCA_30Rnd_556x45_Tracer_Red_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_sand_EMAG: JCA_30Rnd_556x45_Tracer_Red_sand_EMAG {
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort = "M855 Tracer IR";
    };
    class JCA_30Rnd_556x45_Stanag: CA_Magazine {
        picture = "\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        author = "Laid3acK";
        scope = 2;
        displayName = "5.56 mm 30Rnd Mag";
        ammo = "JCA_B_556x45_Ball";
        count = 30;
        mass = 8;
        initSpeed = 926;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: 5.56 STANAG Rifles";
        modelSpecial = "weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy = 1;
        displaynameshort = "M855";
    };
    class JCA_30Rnd_556x45_Stanag_M855A1: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M855A1 Mag";
        ammo = "JCA_B_556x45_Ball_M855A1";
        initSpeed = 940;
        displaynameshort = "M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_M193: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M193 Mag";
        ammo = "JCA_B_556x45_Ball_M193";
        mass = 7.8;
        initSpeed = 990;
        displaynameshort = "M193";
    };
    class JCA_30Rnd_556x45_Stanag_Mk262: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk262 Mag";
        ammo = "JCA_B_556x45_Ball_Mk262";
        mass = 8.4;
        initSpeed = 838;
        displaynameshort = "Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Mk318: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk318 Mag";
        ammo = "JCA_B_556x45_Ball_Mk318";
        initSpeed = 950;
        displaynameshort = "Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_M995AP: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M995 AP Mag";
        ammo = "JCA_B_556x45_Ball_M995AP";
        mass = 8.1;
        initSpeed = 880;
        displaynameshort = "M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_UW: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Dual Purpose Mag";
        ammo = "JCA_B_556x45_Ball_Dual";
        initSpeed = 283;
        displaynameshort = "UW";
    };
    class JCA_30Rnd_556x45_Stanag_Red: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (Red) Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer = 4;
    };
    class JCA_30Rnd_556x45_Stanag_Green: JCA_30Rnd_556x45_Stanag_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (Green) Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Yellow: JCA_30Rnd_556x45_Stanag_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_IR: JCA_30Rnd_556x45_Stanag_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (IR) Mag";
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Red: JCA_30Rnd_556x45_Stanag_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (Red) Mag";
        tracersEvery = 1;
        displaynameshort = "M855 Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Green: JCA_30Rnd_556x45_Stanag_Tracer_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (Green) Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Tracer_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (Yellow) Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_IR: JCA_30Rnd_556x45_Stanag_Tracer_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (IR) Mag";
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort = "M855 Tracer IR";
    };
    class JCA_30Rnd_556x45_Stanag_Sand: JCA_30Rnd_556x45_Stanag {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Sand Mag";
        picture = "\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_sand_CA.paa";
        hiddenSelections[] = {
            "Camo"
        };
        hiddenSelectionsTextures[] = {
            "weapons_f_JCA_IA\MagazineProxies\data\mag_30Rnd_556_SMAG_sand_CO.paa"
        };
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M855A1: JCA_30Rnd_556x45_Stanag_Sand {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M855A1 Sand Mag";
        ammo = "JCA_B_556x45_Ball_M855A1";
        initSpeed = 940;
        displaynameshort = "M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M193: JCA_30Rnd_556x45_Stanag_Sand {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M193 Sand Mag";
        ammo = "JCA_B_556x45_Ball_M193";
        mass = 7.8;
        initSpeed = 990;
        displaynameshort = "M193";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk262: JCA_30Rnd_556x45_Stanag_Sand {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk262 Sand Mag";
        ammo = "JCA_B_556x45_Ball_Mk262";
        mass = 8.4;
        initSpeed = 838;
        displaynameshort = "Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk318: JCA_30Rnd_556x45_Stanag_Sand {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Mk318 Sand Mag";
        ammo = "JCA_B_556x45_Ball_Mk318";
        initSpeed = 950;
        displaynameshort = "Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M995AP: JCA_30Rnd_556x45_Stanag_Sand {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd M995 AP Sand Mag";
        ammo = "JCA_B_556x45_Ball_M995AP";
        mass = 8.1;
        initSpeed = 880;
        displaynameshort = "M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_UW: JCA_30Rnd_556x45_Stanag_Sand {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Dual Purpose Sand Mag";
        ammo = "JCA_B_556x45_Ball_Dual";
        initSpeed = 283;
        displaynameshort = "UW";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Red: JCA_30Rnd_556x45_Stanag_Sand {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (Red) Sand Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer = 4;
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Green: JCA_30Rnd_556x45_Stanag_Sand_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (Green) Sand Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (Yellow) Sand Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_IR: JCA_30Rnd_556x45_Stanag_Sand_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Reload Tracer (IR) Sand Mag";
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red: JCA_30Rnd_556x45_Stanag_Sand_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (Red) Sand Mag";
        tracersEvery = 1;
        displaynameshort = "M855 Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (Green) Sand Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (Yellow) Sand Mag";
        ammo = "JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red {
        author = "Laid3acK";
        displayName = "5.56 mm 30Rnd Tracer (IR) Sand Mag";
        ammo = "JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort = "M855 Tracer IR";
    };
    class JCA_30Rnd_300BLK_EMAG: CA_Magazine {
        mass = 9.9;
        initSpeed = 290;
        displaynameshort = "Subsonic";
    };
    class JCA_30Rnd_300BLK_Red_EMAG: JCA_30Rnd_300BLK_EMAG {
    };
    class JCA_30Rnd_300BLK_Tracer_Red_EMAG: JCA_30Rnd_300BLK_Red_EMAG {
        displaynameshort = "Subsonic-T";
    };
    class JCA_30Rnd_300BLK_Tracer_IR_EMAG: JCA_30Rnd_300BLK_Tracer_Red_EMAG {
        displaynameshort = "Subsonic-T IR";
    };
    class JCA_30Rnd_300BLK_sand_EMAG: JCA_30Rnd_300BLK_EMAG {
    };
    class JCA_30Rnd_300BLK_Red_sand_EMAG: JCA_30Rnd_300BLK_sand_EMAG {
    };
    class JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG: JCA_30Rnd_300BLK_Red_sand_EMAG {
        displaynameshort = "Subsonic-T";
    };
    class JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG: JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG {
        displaynameshort = "Subsonic-T IR";
    };
    class JCA_30Rnd_300BLK_110gr_EMAG: JCA_30Rnd_300BLK_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr";
        mass = 7.4;
        initSpeed = 630;
        displaynameshort = "Frangible";
    };
    class JCA_30Rnd_300BLK_110gr_Red_EMAG: JCA_30Rnd_300BLK_110gr_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (Red) EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Red";
        lastRoundsTracer = 4;
    };
    class JCA_30Rnd_300BLK_110gr_Green_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (Green) EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Yellow_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (Yellow) EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_IR_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (IR) EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_IR";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (Red) EMAG";
        tracersEvery = 1;
        displaynameshort = "Frangible-T";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (Green) EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (Yellow) EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (IR) EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_IR";
        displaynameshort = "Frangible-T IR";
    };
    class JCA_30Rnd_300BLK_110gr_sand_EMAG: JCA_30Rnd_300BLK_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr";
        mass = 7.4;
        initSpeed = 630;
        displaynameshort = "Frangible";
    };
    class JCA_30Rnd_300BLK_110gr_Red_sand_EMAG: JCA_30Rnd_300BLK_110gr_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (Red) Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Red";
        lastRoundsTracer = 4;
    };
    class JCA_30Rnd_300BLK_110gr_Green_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (Green) Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (Yellow) Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_IR_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Reload Tracer (IR) Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_IR";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (Red) Sand EMAG";
        tracersEvery = 1;
        displaynameshort = "Frangible-T";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (Green) Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (Yellow) Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG {
        author = "Laid3acK";
        displayName = ".300 BLK 30Rnd 110gr Tracer (IR) Sand EMAG";
        ammo = "JCA_B_300BLK_Ball_110gr_Tracer_IR";
        displaynameshort = "Frangible-T IR";
    };
    class JCA_20Rnd_762x51_PMAG: CA_Magazine {
        ammo = "JCA_B_762x51_Ball_M80";
        mass = 11.3;
        initSpeed = 820;
        displaynameshort = "M80";
    };
    class JCA_20Rnd_762x51_M80A1_PMAG: JCA_20Rnd_762x51_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M80A1 PMAG";
        ammo = "JCA_B_762x51_Ball_M80A1";
        mass = 11;
        initSpeed = 889;
        displaynameshort = "M80A1";
    };
    class JCA_20Rnd_762x51_M993AP_PMAG: JCA_20Rnd_762x51_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M993 AP PMAG";
        ammo = "JCA_B_762x51_Ball_M993AP";
        mass = 10.9;
        initSpeed = 915;
        displaynameshort = "M993 AP";
    };
    class JCA_20Rnd_762x51_Mk316_PMAG: JCA_20Rnd_762x51_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk316 PMAG";
        ammo = "JCA_B_762x51_Ball_Mk316";
        mass = 11.9;
        initSpeed = 790;
        displaynameshort = "Mk316";
    };
    class JCA_20Rnd_762x51_Mk319_PMAG: JCA_20Rnd_762x51_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk319 PMAG";
        ammo = "JCA_B_762x51_Ball_Mk319";
        mass = 11;
        initSpeed = 909;
        displaynameshort = "Mk319";
    };
    class JCA_20Rnd_762x51_SLAP_PMAG: JCA_20Rnd_762x51_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP PMAG";
        ammo = "JCA_B_762x51_Ball_SLAP";
        mass = 9.4;
        initSpeed = 1190;
        displaynameshort = "SLAP";
    };
    class JCA_20Rnd_762x51_SLAP_Tracer_PMAG: JCA_20Rnd_762x51_SLAP_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP Tracer PMAG";
        ammo = "JCA_B_762x51_Ball_SLAP_Tracer";
        mass = 9.3;
        tracersEvery = 1;
        displaynameshort = "SLAP Tracer";
    };
    class JCA_20Rnd_762x51_Subsonic_PMAG: JCA_20Rnd_762x51_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Subsonic PMAG";
        ammo = "JCA_B_762x51_Ball_Subsonic";
        mass = 12.5;
        initSpeed = 340;
        displaynameshort = "Subsonic";
    };
    class JCA_20Rnd_762x51_Red_PMAG: JCA_20Rnd_762x51_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_PMAG: JCA_20Rnd_762x51_Red_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
        displaynameshort = "M80 Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
        displaynameshort = "M80 Tracer IR";
    };
    class JCA_20Rnd_762x51_Sand_PMAG: JCA_20Rnd_762x51_PMAG {
    };
    class JCA_20Rnd_762x51_M80A1_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M80A1 Sand PMAG";
        ammo = "JCA_B_762x51_Ball_M80A1";
        mass = 11;
        initSpeed = 889;
        displaynameshort = "M80A1";
    };
    class JCA_20Rnd_762x51_M993AP_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M993 AP Sand PMAG";
        ammo = "JCA_B_762x51_Ball_M993AP";
        mass = 10.9;
        initSpeed = 915;
        displaynameshort = "M993 AP";
    };
    class JCA_20Rnd_762x51_Mk316_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk316 Sand Mag";
        ammo = "JCA_B_762x51_Ball_Mk316";
        mass = 11.9;
        initSpeed = 790;
        displaynameshort = "Mk316";
    };
    class JCA_20Rnd_762x51_Mk319_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk319 Sand Mag";
        ammo = "JCA_B_762x51_Ball_Mk319";
        mass = 11;
        initSpeed = 909;
        displaynameshort = "Mk319";
    };
    class JCA_20Rnd_762x51_SLAP_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP Sand Mag";
        ammo = "JCA_B_762x51_Ball_SLAP";
        mass = 9.4;
        initSpeed = 1190;
        displaynameshort = "SLAP";
    };
    class JCA_20Rnd_762x51_SLAP_Tracer_Sand_PMAG: JCA_20Rnd_762x51_SLAP_Sand_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP Tracer Sand Mag";
        ammo = "JCA_B_762x51_Ball_SLAP_Tracer";
        mass = 9.3;
        tracersEvery = 1;
        displaynameshort = "SLAP Tracer";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Subsonic Sand PMAG";
        ammo = "JCA_B_762x51_Ball_Subsonic";
        mass = 12.5;
        initSpeed = 340;
        displaynameshort = "Subsonic";
    };
    class JCA_20Rnd_762x51_Red_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
        displaynameshort = "M80 Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
        displaynameshort = "M80 Tracer IR";
    };
    class JCA_20Rnd_762x51_SMAG: CA_Magazine {
        ammo = "JCA_B_762x51_Ball_M80";
        mass = 12;
        initSpeed = 820;
        displaynameshort = "M80";
    };
    class JCA_20Rnd_762x51_M80A1_SMAG: JCA_20Rnd_762x51_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M80A1 Mag";
        ammo = "JCA_B_762x51_Ball_M80A1";
        mass = 11.6;
        initSpeed = 889;
        displaynameshort = "M80A1";
    };
    class JCA_20Rnd_762x51_M993AP_SMAG: JCA_20Rnd_762x51_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M993 AP Mag";
        ammo = "JCA_B_762x51_Ball_M993AP";
        mass = 11.5;
        initSpeed = 915;
        displaynameshort = "M993 AP";
    };
    class JCA_20Rnd_762x51_Mk316_SMAG: JCA_20Rnd_762x51_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk316 Mag";
        ammo = "JCA_B_762x51_Ball_Mk316";
        mass = 12.6;
        initSpeed = 790;
        displaynameshort = "Mk316";
    };
    class JCA_20Rnd_762x51_Mk319_SMAG: JCA_20Rnd_762x51_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk319 Mag";
        ammo = "JCA_B_762x51_Ball_Mk319";
        mass = 11.6;
        initSpeed = 909;
        displaynameshort = "Mk319";
    };
    class JCA_20Rnd_762x51_SLAP_SMAG: JCA_20Rnd_762x51_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP Mag";
        ammo = "JCA_B_762x51_Ball_SLAP";
        mass = 10.1;
        initSpeed = 1190;
        displaynameshort = "SLAP";
    };
    class JCA_20Rnd_762x51_SLAP_Tracer_SMAG: JCA_20Rnd_762x51_SLAP_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP Tracer Mag";
        ammo = "JCA_B_762x51_Ball_SLAP_Tracer";
        mass = 10;
        tracersEvery = 1;
        displaynameshort = "SLAP Tracer";
    };
    class JCA_20Rnd_762x51_Subsonic_SMAG: JCA_20Rnd_762x51_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Subsonic Mag";
        ammo = "JCA_B_762x51_Ball_Subsonic";
        mass = 13.2;
        initSpeed = 340;
        displaynameshort = "Subsonic";
    };
    class JCA_20Rnd_762x51_Red_SMAG: JCA_20Rnd_762x51_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_SMAG: JCA_20Rnd_762x51_Red_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
        displaynameshort = "M80 Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
        displaynameshort = "M80 Tracer IR";
    };
    class JCA_20Rnd_762x51_Sand_SMAG: JCA_20Rnd_762x51_SMAG {
    };
    class JCA_20Rnd_762x51_M80A1_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M80A1 Sand Mag";
        ammo = "JCA_B_762x51_Ball_M80A1";
        mass = 11.6;
        initSpeed = 889;
        displaynameshort = "M80A1";
    };
    class JCA_20Rnd_762x51_M993AP_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd M993 AP Sand Mag";
        ammo = "JCA_B_762x51_Ball_M993AP";
        mass = 11.5;
        initSpeed = 915;
        displaynameshort = "M993 AP";
    };
    class JCA_20Rnd_762x51_Mk316_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk316 Sand Mag";
        ammo = "JCA_B_762x51_Ball_Mk316";
        mass = 12.6;
        initSpeed = 790;
        displaynameshort = "Mk316";
    };
    class JCA_20Rnd_762x51_Mk319_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Mk319 Sand Mag";
        ammo = "JCA_B_762x51_Ball_Mk319";
        mass = 11.6;
        initSpeed = 909;
        displaynameshort = "Mk319";
    };
    class JCA_20Rnd_762x51_SLAP_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP Sand Mag";
        ammo = "JCA_B_762x51_Ball_SLAP";
        mass = 10.1;
        initSpeed = 1190;
        displaynameshort = "SLAP";
    };
    class JCA_20Rnd_762x51_SLAP_Tracer_Sand_SMAG: JCA_20Rnd_762x51_SLAP_Sand_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SLAP Tracer Sand Mag";
        ammo = "JCA_B_762x51_Ball_SLAP_Tracer";
        mass = 10;
        tracersEvery = 1;
        displaynameshort = "SLAP Tracer";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd Subsonic Sand Mag";
        ammo = "JCA_B_762x51_Ball_Subsonic";
        mass = 13.2;
        initSpeed = 340;
        displaynameshort = "Subsonic";
    };
    class JCA_20Rnd_762x51_Red_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
        displaynameshort = "M80 Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
        displaynameshort = "M80 Tracer IR";
    };
    class JCA_20Rnd_762x51_SCAR_Mag: CA_Magazine {
        ammo = "JCA_B_762x51_Ball_M80";
        mass = 12.6;
        initSpeed = 820;
        displaynameshort = "M80";
    };
    class JCA_20Rnd_762x51_SCAR_M80A1_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR M80A1 Mag";
        ammo = "JCA_B_762x51_Ball_M80A1";
        mass = 12.3;
        initSpeed = 889;
        displaynameshort = "M80A1";
    };
    class JCA_20Rnd_762x51_SCAR_M993AP_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR M993 AP Mag";
        ammo = "JCA_B_762x51_Ball_M993AP";
        mass = 12.2;
        initSpeed = 915;
        displaynameshort = "M993 AP";
    };
    class JCA_20Rnd_762x51_SCAR_Mk316_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR Mk316 Mag";
        ammo = "JCA_B_762x51_Ball_Mk316";
        mass = 13.2;
        initSpeed = 790;
        displaynameshort = "Mk316";
    };
    class JCA_20Rnd_762x51_SCAR_Mk319_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR Mk319 Mag";
        ammo = "JCA_B_762x51_Ball_Mk319";
        mass = 12.3;
        initSpeed = 909;
        displaynameshort = "Mk319";
    };
    class JCA_20Rnd_762x51_SCAR_SLAP_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR SLAP Mag";
        ammo = "JCA_B_762x51_Ball_SLAP";
        mass = 10.7;
        initSpeed = 1190;
        displaynameshort = "SLAP";
    };
    class JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Mag: JCA_20Rnd_762x51_SCAR_SLAP_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR SLAP Tracer Mag";
        ammo = "JCA_B_762x51_Ball_SLAP_tracer";
        mass = 10.6;
        tracersEvery = 1;
        displaynameshort = "SLAP Tracer";
    };
    class JCA_20Rnd_762x51_SCAR_Subsonic_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR Subsonic Mag";
        ammo = "JCA_B_762x51_Ball_Subsonic";
        mass = 13.8;
        initSpeed = 340;
        displaynameshort = "Subsonic";
    };
    class JCA_20Rnd_762x51_SCAR_Red_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
    };
    class JCA_20Rnd_762x51_SCAR_Green_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_SCAR_Yellow_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_SCAR_IR_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag: JCA_20Rnd_762x51_SCAR_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
        displaynameshort = "M80 Tracer";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_Green_Mag: JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Mag: JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_IR_Mag: JCA_20Rnd_762x51_SCAR_Tracer_Red_Mag {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
        displaynameshort = "M80 Tracer IR";
    };
    class JCA_20Rnd_762x51_SCAR_Sand_Mag: JCA_20Rnd_762x51_SCAR_Mag {
    };
    class JCA_20Rnd_762x51_SCAR_M80A1_Sand_Mag: JCA_20Rnd_762x51_SCAR_Sand_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR M80A1 Sand Mag";
        ammo = "JCA_B_762x51_Ball_M80A1";
        mass = 12.3;
        initSpeed = 889;
        displaynameshort = "M80A1";
    };
    class JCA_20Rnd_762x51_SCAR_M993AP_Sand_Mag: JCA_20Rnd_762x51_SCAR_Sand_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR M993 AP Sand Mag";
        ammo = "JCA_B_762x51_Ball_M993AP";
        mass = 12.2;
        initSpeed = 915;
        displaynameshort = "M993 AP";
    };
    class JCA_20Rnd_762x51_SCAR_Mk316_Sand_Mag: JCA_20Rnd_762x51_SCAR_Sand_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR Mk316 Sand Mag";
        ammo = "JCA_B_762x51_Ball_Mk316";
        mass = 13.2;
        initSpeed = 790;
        displaynameshort = "Mk316";
    };
    class JCA_20Rnd_762x51_SCAR_Mk319_Sand_Mag: JCA_20Rnd_762x51_SCAR_Sand_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR Mk319 Sand Mag";
        ammo = "JCA_B_762x51_Ball_Mk319";
        mass = 12.3;
        initSpeed = 909;
        displaynameshort = "Mk319";
    };
    class JCA_20Rnd_762x51_SCAR_SLAP_Sand_Mag: JCA_20Rnd_762x51_SCAR_Sand_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR SLAP Sand Mag";
        ammo = "JCA_B_762x51_Ball_SLAP";
        mass = 10.7;
        initSpeed = 1190;
        displaynameshort = "SLAP";
    };
    class JCA_20Rnd_762x51_SCAR_SLAP_Tracer_Sand_Mag: JCA_20Rnd_762x51_SCAR_SLAP_Sand_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR SLAP Tracer Sand Mag";
        ammo = "JCA_B_762x51_Ball_SLAP_Tracer";
        mass = 10.6;
        tracersEvery = 1;
        displaynameshort = "SLAP Tracer";
    };
    class JCA_20Rnd_762x51_SCAR_Subsonic_Sand_Mag: JCA_20Rnd_762x51_SCAR_Sand_Mag {
        author = "Laid3acK";
        displayName = "7.62 mm 20Rnd SCAR Subsonic Sand Mag";
        ammo = "JCA_B_762x51_Ball_Subsonic";
        mass = 13.8;
        initSpeed = 340;
        displaynameshort = "Subsonic";
    };
    class JCA_20Rnd_762x51_SCAR_Red_Sand_Mag: JCA_20Rnd_762x51_SCAR_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
    };
    class JCA_20Rnd_762x51_SCAR_Green_Sand_Mag: JCA_20Rnd_762x51_SCAR_Red_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_SCAR_Yellow_Sand_Mag: JCA_20Rnd_762x51_SCAR_Red_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_SCAR_IR_Sand_Mag: JCA_20Rnd_762x51_SCAR_Red_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag: JCA_20Rnd_762x51_SCAR_Red_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Red";
        displaynameshort = "M80 Tracer";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_Green_Sand_Mag: JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Green";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_Yellow_Sand_Mag: JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_SCAR_Tracer_IR_Sand_Mag: JCA_20Rnd_762x51_SCAR_Tracer_Red_Sand_Mag {
        ammo = "JCA_B_762x51_Ball_M80_IR_Dim_Tracer";
        displaynameshort = "M80 Tracer IR";
    };
    class JCA_5Rnd_338LM_AWM_Mag: CA_Magazine {
        mass = 9.7;
        initSpeed = 906;
    };
    class JCA_5Rnd_338LM_AWM_AP_Mag: JCA_5Rnd_338LM_AWM_Mag {
        author = "Laid3acK";
        displayName = ".338 LM 5Rnd M115A3 AP Mag";
        ammo = "JCA_B_338LM_AP_Ball";
        displaynameshort = "AP";
    };
    class JCA_5Rnd_338LM_AWM_API_Mag: JCA_5Rnd_338LM_AWM_Mag {
        author = "Laid3acK";
        displayName = ".338 LM 5Rnd M115A3 API Mag";
        ammo = "JCA_B_338LM_API_Ball";
        initSpeed = 896;
        displaynameshort = "API";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Red_Mag: JCA_5Rnd_338LM_AWM_Mag {
        displaynameshort = "Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Green_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag {
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag {
    };
    class JCA_5Rnd_338LM_AWM_Tracer_IR_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag {
        displaynameshort = "Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_Mag: CA_Magazine {
        displayName = "12.7 mm 10Rnd M107A1 M33 Mag";
        ammo = "JCA_B_127x99_Ball_M33";
        initSpeed = 838;
        mass = 25.2;
    };
    class JCA_10Rnd_127x99_M107_Tracer_Red_Mag: JCA_10Rnd_127x99_M107_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M33 Tracer (Red) Mag";
        ammo = "JCA_B_127x99_Ball_M33_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_10Rnd_127x99_M107_Tracer_IR_Mag: JCA_10Rnd_127x99_M107_Tracer_Red_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M33 Tracer (IR) Mag";
        ammo = "JCA_B_127x99_Ball_M33_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_AMAX_Mag: JCA_10Rnd_127x99_M107_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 AMAX Mag";
        ammo = "JCA_B_127x99_Ball_AMAX";
        initSpeed = 826;
        mass = 25.8;
        displaynameshort = "AMAX";
    };
    class JCA_10Rnd_127x99_APDS_M107_Mag: JCA_10Rnd_127x99_M107_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M903 SLAP Mag";
        ammo = "JCA_B_127x99_Ball_M903_SLAP";
        initSpeed = 1132;
        descriptionShort = "Caliber: .50 SLAP<br />Rounds: 10<br />Used in: M107A1";
        mass = 20.9;
        displaynameshort = "SLAP";
    };
    class JCA_10Rnd_127x99_APDS_M107_Tracer_Red_Mag: JCA_10Rnd_127x99_M107_Tracer_Red_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M962 SLAP Tracer (Red) Mag";
        ammo = "JCA_B_127x99_Ball_M962_SLAP_Tracer_Red";
        initSpeed = 1132;
        descriptionShort = "Caliber: .50 SLAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "SLAP-T";
    };
    class JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag: JCA_10Rnd_127x99_M107_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 Mk211 HEIAP Mag";
        ammo = "JCA_B_127x99_Ball_Mk211_HEIAP";
        initSpeed = 828;
        descriptionShort = "Caliber: .50 HEIAP<br />Rounds: 10<br />Used in: M107A1";
        mass = 25.2;
        displaynameshort = "HEIAP";
    };
    class JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 Mk300 HEIAP Tracer (Red) Mag";
        ammo = "JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red";
        tracersEvery = 1;
        descriptionShort = "Caliber: .50 HEIAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "HEIAP-T";
    };
    class JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 MP-DT HEIAP Tracer (IR) Mag";
        ammo = "JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR";
        descriptionShort = "Caliber: .50 HEIAP-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "HEIAP-T IR";
    };
    class JCA_10Rnd_127x99_M107_M8_API_Mag: JCA_10Rnd_127x99_M107_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 M8 API Mag";
        ammo = "JCA_B_127x99_Ball_M8_API";
        initSpeed = 841;
        descriptionShort = "Caliber: .50 API<br />Rounds: 10<br />Used in: M107A1";
        mass = 25.2;
        displaynameshort = "API";
    };
    class JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M8_API_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 M20 API Tracer (Red) Mag";
        ammo = "JCA_B_127x99_Ball_M20_API_Tracer_Red";
        tracersEvery = 1;
        descriptionShort = "Caliber: .50 API-T<br />Rounds: 10<br />Used in: M107A1";
        mass = 24.7;
        displaynameshort = "API-T";
    };
    class JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 Mk257 API Tracer (IR) Mag";
        ammo = "JCA_B_127x99_Ball_Mk257_API_Tracer_IR";
        descriptionShort = "Caliber: .50 API-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "API-T IR";
    };
    class JCA_10Rnd_127x99_M107_Sand_Mag: JCA_10Rnd_127x99_M107_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M33 Sand Mag";
    };
    class JCA_10Rnd_127x99_M107_Sand_Tracer_Red_Mag: JCA_10Rnd_127x99_M107_Sand_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M33 Tracer (Red) Sand Mag";
        ammo = "JCA_B_127x99_Ball_M33_Tracer_Red";
        displaynameshort = "Tracer";
    };
    class JCA_10Rnd_127x99_M107_Sand_Tracer_IR_Mag: JCA_10Rnd_127x99_M107_Sand_Tracer_Red_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M33 Tracer (IR) Sand Mag";
        ammo = "JCA_B_127x99_Ball_M33_Tracer_IR";
        displaynameshort = "Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_AMAX_Sand_Mag: JCA_10Rnd_127x99_M107_Sand_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 AMAX Sand Mag";
        ammo = "JCA_B_127x99_Ball_AMAX";
        initSpeed = 826;
        mass = 25.8;
        displaynameshort = "AMAX";
    };
    class JCA_10Rnd_127x99_APDS_M107_Sand_Mag: JCA_10Rnd_127x99_M107_Sand_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M903 SLAP Sand Mag";
        ammo = "JCA_B_127x99_Ball_M903_SLAP";
        initSpeed = 1132;
        descriptionShort = "Caliber: .50 SLAP<br />Rounds: 10<br />Used in: M107A1";
        mass = 20.9;
        displaynameshort = "SLAP";
    };
    class JCA_10Rnd_127x99_APDS_M107_Sand_Tracer_Red_Mag: JCA_10Rnd_127x99_M107_Sand_Tracer_Red_Mag {
        displayName = "12.7 mm 10Rnd M107A1 M962 SLAP Tracer (Red) Sand Mag";
        ammo = "JCA_B_127x99_Ball_M962_SLAP_Tracer_Red";
        initSpeed = 1132;
        descriptionShort = "Caliber: .50 SLAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "SLAP-T";
    };
    class JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag: JCA_10Rnd_127x99_M107_Sand_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 Mk211 HEIAP Sand Mag";
        ammo = "JCA_B_127x99_Ball_Mk211_HEIAP";
        initSpeed = 828;
        descriptionShort = "Caliber: .50 HEIAP<br />Rounds: 10<br />Used in: M107A1";
        mass = 25.2;
        displaynameshort = "HEIAP";
    };
    class JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 Mk300 HEIAP Tracer (Red) Sand Mag";
        ammo = "JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red";
        tracersEvery = 1;
        descriptionShort = "Caliber: .50 HEIAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "HEIAP-T";
    };
    class JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 MP-DT HEIAP Tracer (IR) Sand Mag";
        ammo = "JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR";
        descriptionShort = "Caliber: .50 HEIAP-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "HEIAP-T IR";
    };
    class JCA_10Rnd_127x99_M107_M8_API_Sand_Mag: JCA_10Rnd_127x99_M107_Sand_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 M8 API Sand Mag";
        ammo = "JCA_B_127x99_Ball_M8_API";
        initSpeed = 841;
        descriptionShort = "Caliber: .50 API<br />Rounds: 10<br />Used in: M107A1";
        mass = 25.2;
        displaynameshort = "API";
    };
    class JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M8_API_Sand_Mag {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 M20 API Tracer (Red) Sand Mag";
        ammo = "JCA_B_127x99_Ball_M20_API_Tracer_Red";
        tracersEvery = 1;
        descriptionShort = "Caliber: .50 API-T<br />Rounds: 10<br />Used in: M107A1";
        mass = 24.7;
        displaynameshort = "API-T";
    };
    class JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red {
        author = "Laid3acK";
        displayName = "12.7 mm 10Rnd M107A1 Mk257 API Tracer (IR) Sand Mag";
        ammo = "JCA_B_127x99_Ball_Mk257_API_Tracer_IR";
        descriptionShort = "Caliber: .50 API-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort = "API-T IR";
    };
};
