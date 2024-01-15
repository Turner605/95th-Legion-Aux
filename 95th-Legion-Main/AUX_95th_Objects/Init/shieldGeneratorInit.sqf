params ["_generator"];

if (!isServer) exitWith {};
if(_generator getVariable "zen_placement_object") exitWith {};

//#################################### Create Shield ####################################

private _shield = "AUX_95th_Shield_Small" createVehicle getPos _generator;

_shield attachTo [_generator, [0, 0, 1]];
_shield setdir 0;
[_shield, 0.05] remoteExec ["setObjectScale"];
[_shield, true] remoteExec ["hideObjectGlobal", 2];

//#################################### Init ####################################

_generator setVariable ["AUX_95th_Shield_Object", _shield, true];
_generator setVariable ["AUX_95th_Shield_Active", false, true];
_generator setVariable ["AUX_95th_Shield_Health", AUX_95th_Shield_Small_Health, true];
_generator setVariable ["AUX_95th_Shield_Recharging", false, true];
_generator setVariable ["AUX_95th_Shield_Animating", false, true];

//#################################### AddActions ####################################

[[_generator, _shield], {
	params ["_generator", "_shield"];

	_generator addAction ["<t color='#00fb21'>Turn On</t>", {
		params ["_generator","_caller","_id", "_args"];
		_args params ["_shield"];

		if(_generator getVariable "AUX_95th_Shield_Animating") exitWith {};
		if(_generator getVariable "AUX_95th_Shield_Recharging") exitWith {};

		_generator setVariable ["AUX_95th_Shield_Active", true, true];
		_generator setVariable ["AUX_95th_Shield_Animating", true, true];
		[_shield, false] remoteExec ["hideObjectGlobal", 2];

		[{
			(_this select 0) params ["_generator", "_shield"];

			private _scale = getObjectScale _shield;

			if (_scale >= 0.95) exitWith {
				_generator setVariable ["AUX_95th_Shield_Animating", false, true];
				[_this select 1] call CBA_fnc_removePerFrameHandler;
			};

			[_shield, (_scale + 0.05)] RemoteExec ["setObjectScale"];
		}, 0, [_generator, _shield]] call CBA_fnc_addPerFrameHandler;

	},[_shield], 1.5, true, true, "", "alive _originalTarget && !(_originalTarget getVariable ""AUX_95th_Shield_Active"")"];
}] remoteExec ["call", 0, true];

[[_generator, _shield], {
	params ["_generator", "_shield"];
	_generator addAction ["<t color='#cf0018'>Turn Off</t>", {
		params ["_generator","_caller","_id", "_args"];
		_args params ["_shield"];

		if(_generator getVariable "AUX_95th_Shield_Animating") exitWith {};
		if(_generator getVariable "AUX_95th_Shield_Recharging") exitWith {};

		_generator setVariable ["AUX_95th_Shield_Active", false, true];
		_generator setVariable ["AUX_95th_Shield_Animating", true, true];

		[{
			(_this select 0) params ["_generator", "_shield"];

			private _scale = getObjectScale _shield;

			if (_scale <= 0.05) exitWith {
				_generator setVariable ["AUX_95th_Shield_Animating", false, true];
				[_shield, true] remoteExec ["hideObjectGlobal", 2];
				[_this select 1] call CBA_fnc_removePerFrameHandler;
			};

			[_shield, (_scale - 0.05)] RemoteExec ["setObjectScale"];
		}, 0, [_generator, _shield]] call CBA_fnc_addPerFrameHandler;

	},[_shield], 1.5, true, true, "", "alive _originalTarget && (_originalTarget getVariable ""AUX_95th_Shield_Active"")"];
}] remoteExec ["call", 0, true];

//#################################### Handlers ####################################

[_shield, ["HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

	private _generator = attachedTo _target;

	if(_generator getVariable "AUX_95th_Shield_Animating") exitWith {};
	if(_generator getVariable "AUX_95th_Shield_Recharging") exitWith {};

	private _damage = (_ammo select 0);
	private _shieldHealth = (_generator getVariable "AUX_95th_Shield_Health");
	private _newShieldHealth = (_shieldHealth - _damage);

	_generator setVariable ["AUX_95th_Shield_Health", _newShieldHealth, true];

	if(_newShieldHealth < 0) then {
		_generator setVariable ["AUX_95th_Shield_Active", false, true];
		_generator setVariable ["AUX_95th_Shield_Animating", true, true];
		_generator setVariable ["AUX_95th_Shield_Recharging", true, true];

		[{
			(_this select 0) params ["_generator", "_shield"];

			private _scale = getObjectScale _shield;

			if (_scale <= 0.05) exitWith {
				_generator setVariable ["AUX_95th_Shield_Animating", false, true];
				[_shield, true] remoteExec ["hideObjectGlobal", 2];
				[_this select 1] call CBA_fnc_removePerFrameHandler;
			};

			[_shield, (_scale - 0.05)] RemoteExec ["setObjectScale"];
		}, 0, [_generator, _target]] call CBA_fnc_addPerFrameHandler;

        [{
            params["_generator"];
			_generator setVariable ["AUX_95th_Shield_Recharging", false, true];
        }, [_generator], AUX_95th_Shield_Small_Cooldown_Duration] call CBA_fnc_waitAndExecute;
	};
}]] remoteExec ["addEventHandler", 0, true];

_generator addEventHandler ["Killed", {
	params ["_unit", "_killer"];
	private _shield = _unit getVariable "AUX_95th_Shield_Object";
	detach _shield;
	deleteVehicle _shield;
}];

_generator addEventHandler ["Deleted", {
	params ["_entity"];
	private _shield = _entity getVariable "AUX_95th_Shield_Object";
	detach _shield;
	deleteVehicle _shield;
}];
