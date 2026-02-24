#include "script_component.hpp"

/// Garand
[
    "G_simc_US_Bandoleer_left",
    "GOGGLES",
    "Rozpakuj 12 klipów do Garanda",
    nil,
    nil,
    [
        {true},{goggles player == "G_simc_US_Bandoleer_left"}
    ],
    {
        [player, goggles player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;

[
    "G_simc_US_Bandoleer_left_ligt",
    "GOGGLES",
    "Rozpakuj 12 klipów do Garanda",
    nil,
    nil,
    [
        {true},{goggles player == "G_simc_US_Bandoleer_left_ligt"}
    ],
    {
        [player, goggles player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;

/// Carbine
[
    "G_simc_US_Bandoleer_right",
    "GOGGLES",
    "Rozpakuj 12 klipów do Carbine'a",
    nil,
    nil,
    [
        {true},{goggles player == "G_simc_US_Bandoleer_right"}
    ],
    {
        [player, goggles player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;

[
    "G_simc_US_Bandoleer_right_ligt",
    "GOGGLES",
    "Rozpakuj 12 klipów do Carbine'a",
    nil,
    nil,
    [
        {true},{goggles player == "G_simc_US_Bandoleer_right_ligt"}
    ],
    {
        [player, goggles player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;

/// BAR
[
    "G_simc_US_Bandoleer_BAR",
    "GOGGLES",
    "Rozpakuj 6 klipów do BARa",
    nil,
    nil,
    [
        {true},{goggles player == "G_simc_US_Bandoleer_BAR"}
    ],
    {
        [player, goggles player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;

[
    "G_simc_US_Bandoleer_BAR_left",
    "GOGGLES",
    "Rozpakuj 6 klipów do BARa",
    nil,
    nil,
    [
        {true},{goggles player == "G_simc_US_Bandoleer_BAR_left"}
    ],
    {
        [player, goggles player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;

[
    "bandolier_addon_BAR",
    "HMD",
    "Rozpakuj 6 klipów do BARa",
    nil,
    nil,
    [
        {true},{hmd player == "bandolier_addon_BAR"}
    ],
    {
        [player, hmd player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;

[
    "bandolier_addon_BAR_left",
    "HMD",
    "Rozpakuj 6 klipów do BARa",
    nil,
    nil,
    [
        {true},{hmd player == "bandolier_addon_BAR_left"}
    ],
    {
        [player, hmd player] call FUNC(unpack);
    }
] call CBA_fnc_addItemContextMenuOption;
