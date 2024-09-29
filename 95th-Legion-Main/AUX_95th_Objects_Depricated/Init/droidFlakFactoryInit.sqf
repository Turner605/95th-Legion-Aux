params ["_factory"];

if (!isServer) exitWith {};
if(_factory getVariable "zen_placement_object") exitWith {};

//#################################### Init ####################################

_factory setVariable ["AUX_95th_Factory_Unit_Count", 0, true];
_factory setVariable ["AUX_95th_Factory_Active", false, true];

//#################################### Frame Handler ####################################

private _frameHandler = [{
	(_this select 0) params ["_factory"];

	if(!(_factory getVariable "AUX_95th_Factory_Active")) exitWith {};
	if((alive (_factory getVariable "AUX_95th_Factory_Flak")) && (alive (_factory getVariable "AUX_95th_Factory_Flak_Crew"))) exitWith {};

	deleteVehicle (_factory getVariable "AUX_95th_Factory_Flak");
	deleteVehicle (_factory getVariable "AUX_95th_Factory_Flak_Crew");

	private _nearestProxy = nearestObject [_factory, "AUX_95th_Factory_Proxy"];
	if(isNull _nearestProxy) exitWith {};

	private _proxyPos = position _nearestProxy;
	private _createPos = [_proxyPos select 0, _proxyPos select 1, (_proxyPos select 2) + 8];

	// Create Flak
	private _flak = createVehicle ["3as_FlakCannon", _createPos, [], 0, "CAN_COLLIDE"];
	_flak setDir (getDir _nearestProxy);
	_flak setPosASL _createPos;
	private _flakGroup = createVehicleCrew _flak; 

	_factory setVariable ["AUX_95th_Factory_Flak", _flak, true];
	_factory setVariable ["AUX_95th_Factory_Flak_Crew", ((units _flakGroup) select 0), true];
	
}, AUX_95th_Droid_Factory_Flak_Build_Delay, [_factory]] call CBA_fnc_addPerFrameHandler;

//#################################### Tidy Up Handlers ####################################

_terminal setVariable ["AUX_95th_Factory_Frame_Handler", _frameHandler, true];

_factory addEventHandler ["Killed", {
	params ["_factory"];
	[_factory getVariable "AUX_95th_Factory_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
	createVehicle["Bo_GBU12_LGB", getPosATL _factory, [], 0, "CAN_COLLIDE"];
	deleteVehicle _factory;
}];

_factory addEventHandler ["Deleted", {
	params ["_factory"];
	[_factory getVariable "AUX_95th_Factory_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
}];
