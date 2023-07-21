params ["_shield", "_tank"];
// needs a check to see if it was turned off or if it was damaged to death	
_tank setVariable ["NFL_TX_Shield_Animating", true, true];

NFL_TX_Shield_Handle = [{
	(_this select 0) params ["_shield", "_tank"];

	private _shieldScale = (_tank getVariable "NFL_Shield_Scale") - 0.1;
	[_shield, _shieldScale] RemoteExec ["setObjectScale"];
	_tank setVariable ["NFL_Shield_Scale", _shieldScale, true];

}, 0, [_shield, _tank]] call CBA_fnc_addPerFrameHandler;

[{((_this select 1) getVariable "NFL_Shield_Scale") < 0.2}, {
	params ["_shield", "_tank"];

	[NFL_TX_Shield_Handle] call CBA_fnc_removePerFrameHandler;
	[_shield, true] remoteExec ["hideObjectGlobal", 2];
	_tank setVariable ["NFL_Shield_Recharging", true, true];
	_tank setVariable ["NFL_TX_Shield_Active", false, true];
	_tank setVariable ["NFL_TX_Shield_Animating", false, true];

		[{
			params ["_shield", "_tank"];
			_tank setVariable ["NFL_Shield_Recharging", false, true];
			_tank setVariable ["NFL_TX_Shield_Health", NFL_TX_Shield_Health, true];
			_tank setVariable ["NFL_Shield_Scale", 0.1, true];

		}, [_shield, _tank], NFL_TX_Shield_Cooldown_Duration] call CBA_fnc_waitAndExecute; // recharging call

}, [_shield, _tank]] call CBA_fnc_waitUntilAndExecute;