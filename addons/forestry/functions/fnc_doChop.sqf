#include "..\script_component.hpp"
/*
 * Author: Cyruz, Commy2, Drofseh
 * Chops the shrubbery.
 *
 * Arguments:
 * 0: Volume <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tac_forestry_fnc_doChop
 */

private _playerPos = AGLToASL positionCameraToWorld [0, 0, 0];
private _endPos = AGLToASL positionCameraToWorld [0, 0, 5];
private _intersection = (lineIntersectsSurfaces [_playerPos, _endPos, cameraOn, objNull, true, 1, "VIEW"]) #0;

if (isNil "_intersection") exitWith {
    [[QPATHTOF(resources\tree.paa), 2.0], ["Nothing to cut down"]] call CBA_fnc_notify;
};

private _intersectObj = _intersection #2;
private _parentObject = _intersection #3;

if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) exitWith {
    [[QPATHTOF(resources\tree.paa), 2.0], ["Nothing to cut down"]] call CBA_fnc_notify;
};

private _time=35;
private _finalObj = objNull;
private _obj = (nearestTerrainObjects [_intersectObj, ["TREE"], 0, false, true]) #0;
if(!(isNil "_obj"))then{
_time=30;
_finalObj=_obj;
};

_obj = (nearestTerrainObjects [_intersectObj, ["SMALL TREE"], 0, false, true]) #0;
if(!(isNil "_obj"))then{
_time=15;
_finalObj=_obj;
};


_obj = (nearestTerrainObjects [_intersectObj, ["BUSH"], 0, false, true]) #0;
if(!(isNil "_obj"))then{
_time=5;
_finalObj=_obj;
};


GVAR(chopping) = true;

[_time,
    _finalObj,
    {
        params ["_obj"];
        _obj setDamage [1, true, player];
        GVAR(chopping) = false;

        [{
            params ["_object"];
            [QGVAR(simulationEvent), _object] call CBA_fnc_serverEvent;
        }, _obj, 5] call CBA_fnc_waitAndExecute;
    }, {
        [[QPATHTOF(resources\tree.paa), 2.0], ["Aborted Nature Abuse"]] call CBA_fnc_notify;
        GVAR(chopping) = false;
    },
    "Attacking Nature",
    {GVAR(chopping)}
] call ACEFUNC(common,progressBar);

[{
    params ["_args", "_handle"];

    if (!GVAR(chopping)) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
    };

    playSound3D [QPATHTOF(resources\chop.ogg), objNull, false, getPosASL player, 5, 1, 75];
}, 5] call CBA_fnc_addPerFrameHandler;
