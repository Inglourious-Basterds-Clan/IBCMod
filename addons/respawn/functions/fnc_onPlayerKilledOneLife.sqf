#include "..\script_component.hpp"
/*
 * Author: 3Mydlo3
 * Function handles onPlayerKilled event.
 *
 * Arguments:
 * 0: Killed player <OBJECT>
 * 1: Killer <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob, ted] call ibc_respawn_fnc_onPlayerKilledOneLife
 *
 * Public: No
 */

params ["_oldUnit", "_killer"];

setPlayerRespawnTime TIME_DISABLED;

nil
