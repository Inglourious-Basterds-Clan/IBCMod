#include "script_component.hpp"

// Exit on Server and Headless Client
if (!hasInterface) exitWith {};

if(!GVAR(EnableBreaching)) exitWith {};
["ace_firedPlayer", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (_ammo in GVAR(availbreachingAmmos)) then {
        _projectile addEventHandler ["HitPart", {
	        params ["_projectile", "_hitEntity", "_projectileOwner", "_pos"];
            if(_projectile distance _projectileOwner < 10) then { // prevent breaching from long range
                [_projectile, _hitEntity, _projectileOwner, _pos] call FUNC(hitPart);
            };
        }];
    };
    if(GVAR(AllowAdditionalAmmos)) then {
        {
            if(_ammo isKindOf _x)exitWith {
                if(floor random 100 < GVAR(AdditionalAmmoChance)) then {
                    _projectile addEventHandler ["HitPart", {
                        params ["_projectile", "_hitEntity", "_projectileOwner", "_pos"];
                        if(_projectile distance _projectileOwner < 5) then { // prevent breaching from long range
                            [_projectile, _hitEntity, _projectileOwner, _pos] call FUNC(hitPart);
                        };
                    }];
                };
            };
        }forEach GVAR(availadditionalAmmos);
    };
    
}] call CBA_fnc_addEventHandler;

