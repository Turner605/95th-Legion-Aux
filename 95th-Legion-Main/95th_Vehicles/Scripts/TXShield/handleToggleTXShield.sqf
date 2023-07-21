params ["_this", "_player"];
if(NFL_Enable_TX_Debug)then{"TEST: TRIGGERED SHIELD 1" remoteExec ["hint", 0, false]; systemChat "TS1";};

private _shield = _this getVariable "NFL_Shield_Object";
private _tank = _this;

private _shieldRecharging = _tank getVariable "NFL_Shield_Recharging";
private _shieldAnimating = _tank getVariable "NFL_TX_Shield_Animating";
private _shieldActive = _tank getVariable "NFL_TX_Shield_Active";

if(NFL_Enable_TX_Debug)then{"TEST: TRIGGERED" remoteExec ["hint", 0, false]; systemChat "Triggered";};

if(_shieldRecharging) exitWith {};
if(_shieldAnimating) exitWith {};

if(_shieldActive) then {
	if(NFL_Enable_TX_Debug)then{"TEST: TRIGGERED SA" remoteExec ["hint", 0, false]; systemChat "SA";};
	[_shield, _tank] call NFA_fnc_TXShieldOffAnimation;
} else {
	if(NFL_Enable_TX_Debug)then{"TEST: TRIGGERED SE" remoteExec ["hint", 0, false]; systemChat "SE";};
	_tank setVariable ["NFL_TX_Shield_Animating", true, true];
	_tank setVariable ["NFL_TX_Shield_Active", true, true];
	[_shield, false] remoteExec ["hideObjectGlobal", 2];
	
	NFL_TX_Shield_Handle = [{
		(_this select 0) params ["_shield", "_tank"];
		if(NFL_Enable_TX_Debug)then{"TEST: NFL_TX_Shield_Handle" remoteExec ["hint", 0, false]; systemChat "NFL_TX_Shield_Handle";};

		private _shieldScale = (_tank getVariable "NFL_Shield_Scale") + 0.05;
		[_shield, _shieldScale] remoteExec ["setObjectScale"];
		_tank setVariable ["NFL_Shield_Scale", _shieldScale, true];

	}, 0, [_shield, _tank]] call CBA_fnc_addPerFrameHandler;

	[{((_this select 1) getVariable "NFL_Shield_Scale") > 0.95}, {
		params ["_shield", "_tank"];
		if(NFL_Enable_TX_Debug)then{"TEST: removePerFrameHandler" remoteExec ["hint", 0, false]; systemChat "removePerFrameHandler";};

		[NFL_TX_Shield_Handle] call CBA_fnc_removePerFrameHandler;
		_tank setVariable ["NFL_TX_Shield_Health", NFL_TX_Shield_Health, true];
		_tank setVariable ["NFL_Shield_Scale", 1, true];
		[_shield, 1] remoteExec ["setObjectScale"];
		_tank setVariable ["NFL_TX_Shield_Animating", false, true];

	}, [_shield, _tank]] call CBA_fnc_waitUntilAndExecute;
};