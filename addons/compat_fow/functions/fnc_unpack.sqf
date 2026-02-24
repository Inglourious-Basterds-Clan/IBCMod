params ["_unit","_item"];

switch (_item) do {
    /// Garand 12x Bandoleers
    case "G_simc_US_Bandoleer_left": {
        removeGoggles _unit;
        _unit addMagazines ["ibc_compat_fow_8Rnd_762x63_T", 12];
    };
    case "G_simc_US_Bandoleer_left_ligt": {
        removeGoggles _unit;
        _unit addMagazines ["ibc_compat_fow_8Rnd_762x63_T", 12];
    };

    // Carbine 12x Bandoleers
    case "G_simc_US_Bandoleer_right": {
        removeGoggles _unit;
        _unit addMagazines ["ibc_compat_fow_15Rnd_762x33_T", 12];
    };
    case "G_simc_US_Bandoleer_right_ligt": {
        removeGoggles _unit;
        _unit addMagazines ["ibc_compat_fow_15Rnd_762x33_T", 12];
    };

    // BAR 6x Bandoleers
    case "G_simc_US_Bandoleer_BAR" : {
        removeGoggles _unit;
        _unit addMagazines ["ibc_compat_fow_20Rnd_762x63_T", 6];
    };
    case "G_simc_US_Bandoleer_BAR_left" : {
        removeGoggles _unit;
        _unit addMagazines ["ibc_compat_fow_20Rnd_762x63_T", 6];
    };
    case "bandolier_addon_BAR" : {
        _unit unlinkItem "bandolier_addon_BAR";
        _unit addMagazines ["ibc_compat_fow_20Rnd_762x63_T", 6];
    };
    case "bandolier_addon_BAR_left" : {
        _unit unlinkItem "bandolier_addon_BAR_left";
        _unit addMagazines ["ibc_compat_fow_20Rnd_762x63_T", 6];
    };



    /// Shows up if you fucked something up.
    default {
        hintSilent "You fucked with something.";
    };
};
