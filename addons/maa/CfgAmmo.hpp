#define AddTracerRed model="\A3\Weapons_f\Data\bullettracer\tracer_red"
#define AddTracerGreen model="\A3\Weapons_f\Data\bullettracer\tracer_green"
#define AddTracerYellow model="\A3\Weapons_f\Data\bullettracer\tracer_yellow"
#define AddTracerWhite model="\A3\Weapons_f\Data\bullettracer\tracer_white"

class CfgAmmo
{
    class M_Titan_AT;
    class M_Titan_AP;
    class ammo_Penetrator_MRAAWS;
    class ammo_Penetrator_MRAAWS_HEAT55;
    class R_MRAAWS_HE_F;
    class R_MRAAWS_HEAT55_F;

    class MAA_M_GMM_HEAT: M_Titan_AT
    {
        model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
        hit=150;
        indirectHit=14;
        indirectHitRange=3;
        explosive=1;
        warheadName="HE";
        submunitionAmmo="ammo_Penetrator_MRAAWS";
        submunitionDirectionType="SubmunitionModelDirection";
        submunitionInitSpeed=1000;
        submunitionParentSpeedCoef=0;
        submunitionInitialOffset[]={0,0,-0.2};
        cost=500;
        initTime=0.1;
        maxControlRange=2500;
    };

    class MAA_M_GMM_HE: M_Titan_AP
    {
        hit=200;
        indirectHit=50;
        indirectHitRange=6;
        warheadName="HE";
    };

    class MAA_M_GMM_MT: M_Titan_AT
    {
        hit=200;
        indirectHit=40;
        indirectHitRange=5;
        warheadName="HE";
        submunitionAmmo="MAA_Penetrator_MT756";
        CraterEffects="ArtyShellCrater";
        ExplosionEffects="MortarExplosion";
        explosionEffectsDir="explosionDir";
    };

    class MAA_M_ASM509: R_MRAAWS_HE_F
    {
        hit=300;
        indirectHit=50;
        indirectHitRange=10;
        warheadName="HE";
        CraterEffects="ArtyShellCrater";
        ExplosionEffects="MortarExplosion";
        explosionEffectsDir="explosionDir";
    };

    class MAA_M_HEDP502: R_MRAAWS_HEAT55_F
    {
        hit=150;
        indirectHit=40;
        caliber = 5;
        indirectHitRange=6;
        warheadName="HE";
        submunitionAmmo="MAA_Penetrator_HEDP502";
    };

    class MAA_Penetrator_HEDP502: ammo_Penetrator_MRAAWS_HEAT55
    {
        caliber=10;
        hit=400;
    };

    class MAA_M_ILLUM545: R_MRAAWS_HE_F
    {
        hit=30;
        explosive=0;
        brightness=120;
        caliber=1;
        indirectHit=0;
        indirectHitRange=2;
        submunitionAmmo="F_40mm_Yellow";
        triggerOnImpact=1;
        ExplosionEffects="";
        explosionEffectsDir="";
        deleteParentWhenTriggered=1;
        triggerTime=0.7;
        triggerDistance=5;
        submunitionInitialOffset[]={0,0,0.1};
        submunitionInitSpeed=1;
        //submunitionParentSpeedCoef = 1;
    };

    class MAA_M_SMOKE469: R_MRAAWS_HE_F
    {
        hit=30;
        explosive=0;
        caliber=1;
        indirectHit=0;
        indirectHitRange=2;
        submunitionAmmo="G_40mm_Smoke";
        submunitionConeType[] = {"poissondisccenter",3};
        submunitionConeAngle = 20;
        submunitionConeAngleHorizontal = 50;
        triggerDistance=5;
        triggerOnImpact=1;
        ExplosionEffects="";
        explosionEffectsDir="";
        deleteParentWhenTriggered=1;
        submunitionInitSpeed=0;
    };

    class MAA_M_MT756: R_MRAAWS_HEAT55_F
    {
        hit=200;
        indirectHit=40;
        indirectHitRange=5;
        warheadName="HE";
        submunitionAmmo="MAA_Penetrator_MT756";
        CraterEffects="ArtyShellCrater";
        ExplosionEffects="MortarExplosion";
        explosionEffectsDir="explosionDir";
    };

    class MAA_Penetrator_MT756: ammo_Penetrator_MRAAWS
    {
        caliber=40;
        warheadName="TandemHEAT";
        hit=600;
    };

    class MAA_M_HE441_AB100: R_MRAAWS_HE_F
    {
        timeToLive=0.2857;
    };

    class MAA_M_HE441_AB250: R_MRAAWS_HE_F
    {
        timeToLive=0.71425;
    };

    class MAA_M_HE441_AB500: R_MRAAWS_HE_F
    {
        timeToLive=1.4285;
    };
};
