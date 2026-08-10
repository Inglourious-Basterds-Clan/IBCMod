class CfgMagazines
{
    class Vorona_HEAT;
    class Vorona_HE;
    class MRAWS_HE_F;
    class MRAWS_HEAT55_F;

    class MAA_MAAWS_GMM_HEAT: Vorona_HEAT
    {
        author = "Neonex";
        displayName = CSTRING(Name_GMMHEAT);
        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
        ammo = "MAA_M_GMM_HEAT";
        picture = QPATHTOF(UI\GMMHEAT.paa);
        displayNameShort = "GMM HEAT";
        descriptionShort = CSTRING(Desc_GMMHEAT);
        mass = 70;
    };

    class MAA_MAAWS_GMM_HE: Vorona_HE
    {
        author = "Neonex";
        displayName = CSTRING(Name_GMMHE);
        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap";
        ammo = "MAA_M_GMM_HE";
        displayNameShort = "GMM HE";
        picture = QPATHTOF(UI\GMMHE.paa);
        descriptionShort = CSTRING(Desc_GMMHE);
        mass = 50;
    };

    class MAA_MAAWS_GMM_MT: Vorona_HEAT
    {
        author = "Neonex";
        displayName = CSTRING(Name_GMMMT);
        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
        ammo = "MAA_M_GMM_MT";
        picture = QPATHTOF(UI\GMMMT.paa);
        displayNameShort = "GMM MT";
        descriptionShort = CSTRING(Desc_GMMMT);
        mass = 100;
    };

    class MAA_MAAWS_ILLUM545: MRAWS_HE_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_ILLUM545);
        model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
        ammo = "MAA_M_ILLUM545";
        picture = QPATHTOF(UI\ILLUM545.paa);
        displayNameShort = "ILLUM";
        descriptionShort = CSTRING(Desc_ILLUM545);
        mass = 30;
    };

    class MAA_MAAWS_SMOKE469: MRAWS_HE_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_SMOKE469);
        model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
        ammo = "MAA_M_SMOKE469";
        picture = QPATHTOF(UI\SMOKE469.paa);
        displayNameShort = "SMOKE";
        descriptionShort = CSTRING(Desc_SMOKE469);
        mass = 30;
    };

    class MAA_MAAWS_ASM509: MRAWS_HE_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_ASM509);
        ammo = "MAA_M_ASM509";
        displayNameShort = "ASM";
        picture = QPATHTOF(UI\ASM509.paa);
        descriptionShort = CSTRING(Desc_ASM509);
        mass = 50;
    };

    class MAA_MAAWS_HEDP502: MRAWS_HEAT55_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_HEDP502);
        ammo = "MAA_M_HEDP502";
        displayNameShort = "HEDP";
        picture = QPATHTOF(UI\HEDP502.paa);
        descriptionShort = CSTRING(Desc_HEDP502);
        mass = 40;
    };

    class MAA_MAAWS_MT756: MRAWS_HEAT55_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_MT756);
        ammo = "MAA_M_MT756";
        displayNameShort = "MT";
        picture = QPATHTOF(UI\MT756.paa);
        descriptionShort = CSTRING(Desc_MT756);
        mass = 90;
    };

    class MAA_MAAWS_HE441_AB100: MRAWS_HE_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_HE441AB100);
        ammo = "MAA_M_HE441_AB100";
        displayNameShort = "Airburst 100 m";
        descriptionShort = CSTRING(Desc_HE441AB100);
    };

    class MAA_MAAWS_HE441_AB250: MRAWS_HE_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_HE441AB250);
        ammo = "MAA_M_HE441_AB250";
        displayNameShort = "Airburst 250 m";
        descriptionShort = CSTRING(Desc_HE441AB250);
    };

    class MAA_MAAWS_HE441_AB500: MRAWS_HE_F
    {
        author = "Neonex";
        displayName = CSTRING(Name_HE441AB500);
        ammo = "MAA_M_HE441_AB500";
        displayNameShort = "Airburst 500 m";
        descriptionShort = CSTRING(Desc_HE441AB500);
    };
};
