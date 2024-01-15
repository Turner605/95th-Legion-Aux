params ["_generator"];

if (!isServer) exitWith {};

if(!alive _generator) exitWith {};

private _shield = "AUX_95th_Shield_Small" createVehicle getPos _generator;
_shield attachTo [_generator, [0, 0, 1]];
_shield setdir 0;

// Land_3AS_ShieldGenerator, 0.05 scale,
[_shield, true] remoteExec ["hideObjectGlobal", 2];

_generator setVariable ["NFL_Shield_Object", _shield, true];
_generator setVariable ["NFL_TX_Shield_Active", false, true];
_generator setVariable ["NFL_Shield_Scale", 0.1, true];
_generator setVariable ["NFL_TX_Shield_Health", NFL_TX_Shield_Health, true];
_generator setVariable ["NFL_Shield_Recharging", false, true];
_generator setVariable ["NFL_TX_Shield_Animating", false, true];

_generator addEventHandler ["Killed", {
	params ["_unit", "_killer"];

	[_unit] call NFA_fnc_handleTXRemoved;
}];

_generator addEventHandler ["Deleted", {
	params ["_entity"];

	[_entity] call NFA_fnc_handleTXRemoved;
}];

[_shield, ["HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

	private _damage = _ammo select 0;
	[_target, _damage] call NFA_fnc_handleTXShieldDamage;
}]] remoteExec ["addEventHandler", 0, true];