params ["_tank", "_player"];

private _shield = _tank getVariable "AUX_95th_Shield_Object";

private _shieldRecharging = _tank getVariable "AUX_95th_Shield_Recharging";
private _shieldAnimating = _tank getVariable "AUX_95th_Shield_Animating";
private _shieldActive = _tank getVariable "AUX_95th_Shield_Active";

if(_shieldRecharging) exitWith {};
if(_shieldAnimating) exitWith {};

if(_shieldActive) then {
	[_shield, _tank] call AUX_95th_fnc_TXShieldOffAnimation;
} else {
	_tank setVariable ["AUX_95th_Shield_Animating", true, true];
	_tank setVariable ["AUX_95th_Shield_Active", true, true];
	[_shield, false] remoteExec ["hideObjectGlobal", 2];
	
	NFL_TX_Shield_Handle = [{
		(_this select 0) params ["_shield", "_tank"];

		private _shieldScale = (_tank getVariable "NFL_Shield_Scale") + 0.05;
		[_shield, _shieldScale] remoteExec ["setObjectScale"];
		_tank setVariable ["NFL_Shield_Scale", _shieldScale, true];

	}, 0, [_shield, _tank]] call CBA_fnc_addPerFrameHandler;

	[{((_this select 1) getVariable "NFL_Shield_Scale") > 0.95}, {
		params ["_shield", "_tank"];

		[NFL_TX_Shield_Handle] call CBA_fnc_removePerFrameHandler;
		_tank setVariable ["AUX_95th_Shield_Small_Health", AUX_95th_Shield_Small_Health, true];
		_tank setVariable ["NFL_Shield_Scale", 1, true];
		[_shield, 1] remoteExec ["setObjectScale"];
		_tank setVariable ["AUX_95th_Shield_Animating", false, true];

	}, [_shield, _tank]] call CBA_fnc_waitUntilAndExecute;
};