params ["_terminal"];

if (!isServer) exitWith {};
if(_terminal getVariable "zen_placement_object") exitWith {};

//#################################### Init ####################################

_terminal setVariable ["AUX_95th_Terminal_Active", false, true];

private _factoryTypes = [
	"AUX_95th_Ground_Factory"
];

//#################################### AddActions ####################################

[[_terminal], {
	params ["_terminal"];

	_terminal addAction ["<t color='#00fb21'>Activate Factory</t>", {
		params ["_generator","_caller","_id", "_args"];
		_args params ["_terminal"];

		private _nearestFactory = nearestObjects[_terminal, _factoryTypes, 20] select 0; 
		if(isNil "_nearestFactory") exitWith {systemChat "No Factory within range.";};

		_terminal setVariable ["AUX_95th_Terminal_Active", true, true];

		[_terminal, _nearestFactory, _factoryTypes] call AUX_95th_fnc_handleFactoryActivated;

	},[_terminal], 1.5, true, true, "", "!(_originalTarget getVariable ""AUX_95th_Terminal_Active"")"];
}] remoteExec ["call", 0, true];

[[_terminal], {
	params ["_terminal"];

	_terminal addAction ["<t color='#cf0018'>Deactivate Factory</t>", {
		params ["_generator","_caller","_id", "_args"];
		_args params ["_terminal"];

		private _nearestFactory = nearestObjects[_terminal, _factoryTypes, 20] select 0; 
		if(isNil "_nearestFactory") exitWith {systemChat "No Factory within range.";};

		_terminal setVariable ["AUX_95th_Terminal_Active", false, true];

		[_terminal, _nearestFactory, _factoryTypes] call AUX_95th_fnc_handleFactoryDeactivated;

	},[_terminal], 1.5, true, true, "", "(_originalTarget getVariable ""AUX_95th_Terminal_Active"")"];
}] remoteExec ["call", 0, true];
