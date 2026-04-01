[
    QGVAR(EnableBreaching),
    "CHECKBOX",
    [LLSTRING(SETTING_ENABLE_BREACHING), LLSTRING(SETTING_ENABLE_BREACHING_DISC)],
    LLSTRING(SETTING_CATEGORY_BREACHING),
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(breachingAmmos),
    "EDITBOX",
    [LLSTRING(SETTING_BREACHING_AMMOS), LLSTRING(SETTING_BREACHING_AMMOS_DISC)],
    LLSTRING(SETTING_CATEGORY_Breaching),
    "'B_12Gauge_Slug_NoCartridge', 'B_12Gauge_Pellets_Submunition', 'rhs_ammo_12g_slug', 'rhs_ammo_12g_00buckshot'",
    1,
    {
        private _array = [_this, "CfgAmmo"] call FUNC(getList);
        missionNamespace setVariable [QGVAR(availbreachingAmmos), _array, true];
    },
    true
] call CBA_fnc_addSetting;

[
    QGVAR(AllowAdditionalAmmos),
    "CHECKBOX",
    [LLSTRING(SETTING_ALLOW_ADDITIONAL_AMMOS), LLSTRING(SETTING_ALLOW_ADDITIONAL_AMMOS_DISC)],
    LLSTRING(SETTING_CATEGORY_BREACHING),
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(AdditionalAmmoChance),
    "SLIDER",
    [LLSTRING(SETTING_ADDITIONAL_AMMO_CHANCE), LLSTRING(SETTING_ADDITIONAL_AMMO_CHANCE_DISC)],
    LLSTRING(SETTING_CATEGORY_BREACHING),
    [0, 100, 10, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(additionalAmmos),
    "EDITBOX",
    [LLSTRING(SETTING_ADDITIONAL_AMMOS), LLSTRING(SETTING_ADDITIONAL_AMMOS_DISC)],
    LLSTRING(SETTING_CATEGORY_Breaching),
    "'B_556x45_Ball', 'B_762x39_Ball_F', 'B_762x51_Ball', 'rhs_ammo_762x51_M80_Ball', 'rhs_ammo_792x57_Ball', 'rhs_ammo_792x33_SmE_ball', 'rhs_ammo_762x63_M2B_ball', 'rhs_ammo_762x63_M1T_tracer', 'rhs_ammo_762x25_Ball', 'rhs_ammo_75x55_Ball', 'B_127x99_Ball', 'B_9x21_Ball', 'B_338_Ball', 'rhs_B_762x54_Ball', 'rhs_ammo_45ACP_MHP'",
    1,
    {
        private _array = [_this, "CfgAmmo"] call FUNC(getList);
        missionNamespace setVariable [QGVAR(availadditionalAmmos), _array, true];
    },
    true
] call CBA_fnc_addSetting;
