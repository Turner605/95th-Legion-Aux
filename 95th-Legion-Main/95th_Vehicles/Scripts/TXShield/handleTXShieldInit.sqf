params ["_this"];

if(!alive _this) exitWith {};

private _shield = "95th_planetaryshield_50" createVehicle getPos _this;
_shield attachTo [_this, [0, 0, 1]];
_shield setdir 0;

// Land_3AS_ShieldGenerator, 0.05 scale,
[_shield, true] remoteExec ["hideObjectGlobal", 2];

_this setVariable ["NFL_Shield_Object", _shield];
_this setVariable ["NFL_TX_Shield_Active", false, true];
_this setVariable ["NFL_Shield_Scale", 0.1, true];
_this setVariable ["NFL_TX_Shield_Health", NFL_TX_Shield_Health, true];
_this setVariable ["NFL_Shield_Recharging", false, true];
_this setVariable ["NFL_TX_Shield_Animating", false, true];

_this addEventHandler ["Killed", {
	params ["_unit", "_killer"];

	[_unit] call NFA_fnc_handleTXRemoved;
}];

_this addEventHandler ["Deleted", {
	params ["_entity"];

	[_entity] call NFA_fnc_handleTXRemoved;
}];

[_shield, ["HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

	private _damage = _ammo select 0;
	[_target, _damage] call NFA_fnc_handleTXShieldDamage;
}]] remoteExec ["addEventHandler", 2];