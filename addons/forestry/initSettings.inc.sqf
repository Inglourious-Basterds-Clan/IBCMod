[
    QGVAR(tree_time),
    "TIME",
    [LLSTRING(SETTING_TREE_TIME), LLSTRING(SETTING_TREE_TIME_DISC)],
    LLSTRING(SETTING_CATEGORY_FORESTRY),
    [1, 120, 30],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(small_tree_time),
    "TIME",
    [LLSTRING(SETTING_SMALL_TREE_TIME), LLSTRING(SETTING_SMALL_TREE_TIME_DISC)],
    LLSTRING(SETTING_CATEGORY_FORESTRY),
    [1, 120, 15],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(bush_time),
    "TIME",
    [LLSTRING(SETTING_BUSH_TIME), LLSTRING(SETTING_BUSH_TIME_DISC)],
    LLSTRING(SETTING_CATEGORY_FORESTRY),
    [1, 120, 5],
    true
] call CBA_fnc_addSetting;
