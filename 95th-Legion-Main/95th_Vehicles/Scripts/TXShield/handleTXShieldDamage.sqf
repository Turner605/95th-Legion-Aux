params ["_shield", "_damage"];

private _tank = attachedTo _shield;

private _shieldRecharging = _tank getVariable "AUX_95th_Shield_Recharging";
private _shieldAnimating = _tank getVariable "AUX_95th_Shield_Animating";

if(_shieldRecharging) exitWith {};
if(_shieldAnimating) exitWith {};

private _shieldHealth = _tank getVariable "AUX_95th_Shield_Small_Health";

private _newShieldHealth = _shieldHealth - _damage;

_tank setVariable ["AUX_95th_Shield_Small_Health", _newShieldHealth, true];

if(_newShieldHealth < 0) then {
	[_shield, _tank] call NFA_fnc_TXShieldOffAnimation;
};