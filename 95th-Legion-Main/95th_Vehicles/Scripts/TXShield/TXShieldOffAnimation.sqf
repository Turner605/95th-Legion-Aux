params ["_shield"];
// needs a check to see if it was turned off or if it was damaged to death	
_shield setVariable ["NFL_TX_Shield_Animating", true];

NFL_TX_Shield_Handle = [{
	params ["_shield"];

	private _shieldScale = (_shield getVariable "NFL_Shield_Scale") - 0.1;
	[_Shield, _shieldScale] RemoteExec ["setObjectScale"];
	_shield setVariable ["NFL_Shield_Scale", _shieldScale];

}, 0, _shield] call CBA_fnc_addPerFrameHandler;

[{((_this select 0) getVariable "NFL_Shield_Scale") < 0.2}, {
	params ["_shield"];

	[NFL_TX_Shield_Handle] call CBA_fnc_removePerFrameHandler;
	[_shield, true] remoteExec ["hideObjectGlobal", 2];
	_shield setVariable ["NFL_Shield_Recharging", true];
	_shield setVariable ["NFL_TX_Shield_Active", false];
	_shield setVariable ["NFL_TX_Shield_Animating", false];

		[{
			params ["_shield"];
			_shield setVariable ["NFL_Shield_Recharging", false];
			_shield setVariable ["NFL_TX_Shield_Health", NFL_TX_Shield_Health];
			_shield setVariable ["NFL_Shield_Scale", 0.1];

		}, [_shield], NFL_TX_Shield_Cooldown_Duration] call CBA_fnc_waitAndExecute; // recharging call

}, [_shield]] call CBA_fnc_waitUntilAndExecute;