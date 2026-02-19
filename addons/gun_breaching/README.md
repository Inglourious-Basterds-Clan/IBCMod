# About

Adds the ability to breach closed doors by shooting them with configured ammunition.
You can configure breaching ammunition in the add-on settings, but you must specify AMMO classes, not magazines.
For example:
```cpp
'B_12Gauge_Slug_NoCartridge', 'B_12Gauge_Pellets_Submunition', 'rhs_ammo_12g_slug', 'rhs_ammo_12g_00buckshot'
```
You can find the ammo class in ACE Arsenal, in the top-left corner when you select the desired magazine. Many magazines use the same ammo.

## Features
- Breaching ammunition — ammunition that opens any door with a single shot. You need to configure the specific ammo class. Works at up to 10 m distance.
- Additional ammunition — ammunition that opens doors less effectively; you can configure the chance to open in the add-on settings. This setting uses inheritance, so it is easier to configure. Works at up to 5 m distance.

## Known Bugs

White door from vanilla building, can be breach only from one side, sometimes it can be also did by shooting at door future. There is nothing i can do to fix that without adding lots of usless stuff.

This mod uses elements from breaching charge scripts/mods.
Sources:
- [Synixe Contractors Mod](https://github.com/SynixeContractors/Mod/tree/main/addons/breaching)
- [Breaching Charge](https://github.com/ampersand38/Breaching-Charge)

### Authors

- [kolmipilot](https://github.com/kolmipilot)
