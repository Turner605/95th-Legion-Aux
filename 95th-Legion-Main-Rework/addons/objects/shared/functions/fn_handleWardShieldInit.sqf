params ["_vehicle"];

if (!isServer) exitWith {};

[[_vehicle], {
	params ["_vehicle"];
    _vehicle setPhysicsCollisionFlag false;
}] remoteExec ["call", 0, true];

_vehicle setVariable ["AUX_95th_Shield_Small_Health", AUX_95th_Shield_Ward_Health, true];

[_vehicle, ["HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

	private _damage = _ammo select 0;
	
	private _shieldHealth = _target getVariable "AUX_95th_Shield_Small_Health";

	private _newShieldHealth = _shieldHealth - _damage;

	_target setVariable ["AUX_95th_Shield_Small_Health", _newShieldHealth, true];

	if(_newShieldHealth < 0) then {
		deleteVehicle _target;
	};
}]] remoteExec ["addEventHandler", 0, true];