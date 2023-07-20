params ["_shield", "_damage"];

private _shieldRecharging = _shield getVariable "NFL_Shield_Recharging";
private _shieldAnimating = _shield getVariable "NFL_TX_Shield_Animating";

if(_shieldRecharging) exitWith {};
if(_shieldAnimating) exitWith {};

private _shieldHealth = _shield getVariable "NFL_TX_Shield_Health";

private _newShieldHealth = _shieldHealth - _damage;

_shield setVariable ["NFL_TX_Shield_Health", _newShieldHealth];

if(_newShieldHealth < 0) then {
	[_shield] call NFA_fnc_TXShieldOffAnimation;
};