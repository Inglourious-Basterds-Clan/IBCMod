#include "..\script_component.hpp"
/*
 * Author: kolmipilot
 * Find the part of the object hit by the projectile
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Hit Entity <OBJECT>
 * 2: Projectile Owner <OBJECT>
 * 3: Position of hit <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_charge] call ibc_breaching_fnc_setupBreach
 *
 * Public: No
 */

params ["_projectile", "_hitEntity", "_projectileOwner", "_pos"];

if (!local _projectile) exitWith {};
// Best positioning is achieved with VIEW LOD
private _intersections = lineIntersectsSurfaces [_pos, _pos vectorDiff (vectorDir _projectile), _projectile, objNull, true, 1, "VIEW"];
if (_intersections isEqualTo []) then {
    // Glass doors are supported only in GEOM LOD
    _intersections = lineIntersectsSurfaces [_pos, _pos vectorDiff (vectorDir _projectile), _projectile, objNull, true, 1, "GEOM"];
};
if (_intersections isEqualTo []) exitWith { LOG("no intersections"); };

(_intersections select 0) params ["_intersectPos", "_intersectNormal", "", "_obstacle"];
if (isNull _obstacle) exitWith { LOG("nothing to stick to") }; // terrain intersection returns objNull object

// House
if (_obstacle isKindOf "House") exitWith {
    LOG("house");

    // Modified version of ace_interaction_fnc_getDoor
    private _position0 = _pos vectorAdd [0, 0, 0];
    private _position1 = _position0 vectorAdd _pos;

    private _intersections = [_obstacle, "GEOM"] intersect [ASLToAGL _position0, ASLToAGL _position1];
    if (_intersections isEqualTo []) exitWith {};

    private _door = toLower ((_intersections select 0) select 0);

    // Check if door is glass because then we need to find the proper location of the door so we can use it
    if ((_door find "glass") != -1) then {
        _door = [10, _obstacle, _door] call ACEFUNC(interaction,getGlassDoor);
    };
    if (isNil "_door") exitWith {};
    TRACE_1("open door",_door);

    // Get animations
    private _doorAnimations = [_obstacle, _door] call ACEFUNC(interaction,getDoorAnimations);
    _doorAnimations params ["_animations"];
    if (_animations isEqualTo []) exitWith {};

    // Add handle on carrier
    if (typeOf _obstacle == "Land_Carrier_01_island_01_F") then {
        private _handle = format ["door_handle_%1_rotate_1", (_animations select 0) select [5, 1]];
        TRACE_1("carrier handle",_handle);
        _animations pushBack _handle;
    };

    {
        // instantly open
        _obstacle animate [_x, 1, 2];
    } forEach _animations;
};
