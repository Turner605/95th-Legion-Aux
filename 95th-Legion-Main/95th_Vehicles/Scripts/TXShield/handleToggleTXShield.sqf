params ["_this", "_player"];
private _shield = _this getVariable "NFL_Shield_Object";

private _shieldRecharging = _shield getVariable "NFL_Shield_Recharging";
private _shieldAnimating = _shield getVariable "NFL_TX_Shield_Animating";
private _shieldActive = _shield getVariable "NFL_TX_Shield_Active";

if(_shieldRecharging) exitWith {};
if(_shieldAnimating) exitWith {};

if(_shieldActive) then {
	[_shield] call NFA_fnc_TXShieldOffAnimation;
} else {
	_shield setVariable ["NFL_TX_Shield_Animating", true];
	_shield setVariable ["NFL_TX_Shield_Active", true];
	[_shield, false] remoteExec ["hideObjectGlobal", 2];
	
	NFL_TX_Shield_Handle = [{
		params ["_shield"];

		private _shieldScale = (_shield getVariable "NFL_Shield_Scale") + 0.05;
		[_Shield, _shieldScale] RemoteExec ["setObjectScale"];
		_shield setVariable ["NFL_Shield_Scale", _shieldScale];

	}, 0, _shield] call CBA_fnc_addPerFrameHandler;

	[{((_this select 0) getVariable "NFL_Shield_Scale") > 0.95}, {
		params ["_shield"];

		[NFL_TX_Shield_Handle] call CBA_fnc_removePerFrameHandler;
		_shield setVariable ["NFL_TX_Shield_Health", NFL_TX_Shield_Health];
		_shield setVariable ["NFL_Shield_Scale", 1];
		[_Shield, 1] RemoteExec ["setObjectScale"];
		_shield setVariable ["NFL_TX_Shield_Animating", false];

	}, [_shield]] call CBA_fnc_waitUntilAndExecute;
};