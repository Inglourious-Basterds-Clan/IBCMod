class rhs_weap_FFARLauncher: RocketPods
{
    magazines[]=
    {
        "rhs_mag_M151_19",
        "rhs_mag_M151_19_green",
        "rhs_mag_M151_7",
        "rhs_mag_M151_7_green",
        "rhs_mag_M151_7_USAF_LAU131",
        "rhs_mag_M151_21_USAF_LAU131_3",
        "rhs_mag_FFAR_7_USAF",
        "rhs_mag_FFAR_21_USAF_LAU68_3",
        "rhs_mag_FFAR_19_USAF",
        "rhs_mag_FFAR_57_USAF_LAU61_3"
    };
    displayName="Hydra (M151 HE)";
    modes[]=
    {
        "Far_AI",
        "Single",
        "Burst"
    };
    cursor="rocket";
    cursorAim="EmptyCursor";
    cursorSize=0;
    class Far_AI: RocketPods
    {
        displayName="Hydra";
        burst=1;
        reloadTime=0.079999998;
        autoFire=0;
        showToPlayer=0;
        soundBurst=0;
        dispersion=0.011;
        minRange=150;
        minRangeProbab=0.60000002;
        midRange=600;
        midRangeProbab=0.89999998;
        maxRange=2500;
        maxRangeProbab=0.12;
        sounds[]=
        {
            "StandardSound"
        };
        class StandardSound
        {
            weaponSoundEffect="DefaultRifle";
            begin1[]=
            {
                "\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",
                3.2,
                1,
                1100
            };
            soundBegin[]=
            {
                "begin1",
                1
            };
        };
    };
    class Burst: RocketPods
    {
        displayName="ALL";
        burst=1;
        salvo=2;
        reloadTime=0.079999998;
        soundContinuous=0;
        autoFire=1;
        aiDispersionCoefX=1.5;
        aiDispersionCoefY=1;
        dispersion=0.012;
        textureType="fullAuto";
        minRange=1;
        minRangeProbab=0.001;
        midRange=2;
        midRangeProbab=0.001;
        maxRange=3;
        maxRangeProbab=0.001;
        sounds[]=
        {
            "StandardSound"
        };
        class StandardSound
        {
            weaponSoundEffect="DefaultRifle";
            begin1[]=
            {
                "\rhsusf\addons\rhsusf_a2port_air\data\Sounds\RocketLauncher_Shot21",
                3.2,
                1,
                1100
            };
            soundBegin[]=
            {
                "begin1",
                1
            };
        };
        soundBurst=0;
    };
    class Single: Burst
    {
        displayName="1";
        autoFire=0;
        salvo=1;
        textureType="semi";
    };
    class Two: Single
    {
        displayName="2";
        salvo=2;
        burst=1;
    };
    class Four: Single
    {
        displayName="4";
        salvo=2;
        burst=2;
    };
    class Eight: Four
    {
        displayName="8";
        burst=8;
    };
    class Twelve: Four
    {
        displayName="12";
        burst=12;
    };
    class TwentyFour: Four
    {
        displayName="24";
        burst=24;
    };
};
class rhs_weap_FFARLauncher_M229: rhs_weap_FFARLauncher
{
    displayName="Hydra (M229 HEPD)";
    magazines[]=
    {
        "rhs_mag_M229_19",
        "rhs_mag_M229_19_green",
        "rhs_mag_M229_7",
        "rhs_mag_M229_7_green"
    };
};
class rhs_weap_FFARLauncher_M257: rhs_weap_FFARLauncher
{
    displayName="Hydra (M257 ILLUM)";
    magazines[]=
    {
        "rhs_mag_M257_7",
        "rhs_mag_M257_7_green",
        "rhs_mag_M257_7_USAF_LAU131"
    };
    modes[]=
    {
        "Far_AI",
        "Single"
    };
    class Far_AI: Far_AI
    {
        minRange=3000;
        minRangeProbab=0.60000002;
        midRange=4000;
        midRangeProbab=0.89999998;
        maxRange=6000;
        maxRangeProbab=0.60000002;
    };
};
