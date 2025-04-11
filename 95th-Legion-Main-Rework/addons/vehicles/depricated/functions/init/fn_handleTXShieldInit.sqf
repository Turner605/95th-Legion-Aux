params ["_tank"];

if(!alive _tank) exitWith {};

private _shield = "AUX_95th_Shield_Small" createVehicle getPos _tank;
_shield attachTo [_tank, [0, 0, 1]];
_shield setDir 0;

// Land_3AS_ShieldGenerator, 0.05 scale,
[_shield, true] remoteExec ["hideObjectGlobal", 2];

_tank setVariable ["AUX_95th_Shield_Object", _shield, true];
_tank setVariable ["AUX_95th_Shield_Active", false, true];
_tank setVariable ["NFL_Shield_Scale", 0.1, true];
_tank setVariable ["AUX_95th_Shield_Small_Health", AUX_95th_Shield_Small_Health, true];
_tank setVariable ["AUX_95th_Shield_Recharging", false, true];
_tank setVariable ["AUX_95th_Shield_Animating", false, true];

_tank addEventHandler ["Killed", {
	params ["_unit", "_killer"];

	[_unit] call AUX_95th_fnc_handleTXRemoved;
}];

_tank addEventHandler ["Deleted", {
	params ["_entity"];

	[_entity] call AUX_95th_fnc_handleTXRemoved;
}];

[_shield, ["HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

	private _damage = _ammo select 0;
	[_target, _damage] call AUX_95th_fnc_handleTXShieldDamage;
}]] remoteExec ["addEventHandler", 0, true];