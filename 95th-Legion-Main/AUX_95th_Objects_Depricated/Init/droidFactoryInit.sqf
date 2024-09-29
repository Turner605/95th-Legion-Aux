params ["_factory"];

if (!isServer) exitWith {};
if(_factory getVariable "zen_placement_object") exitWith {};

//#################################### Init ####################################

_factory setVariable ["AUX_95th_Factory_Unit_Count", 0, true];
_factory setVariable ["AUX_95th_Factory_Active", false, true];

//#################################### Frame Handler ####################################

private _frameHandler = [{
	(_this select 0) params ["_factory"];

	if((_factory getVariable "AUX_95th_Factory_Unit_Count") > 20) exitWith {};
	if(!(_factory getVariable "AUX_95th_Factory_Active")) exitWith {};

	// Find valid blufor target
	private _allEntitiesInRange = _factory nearEntities [["Man", "Car", "Motorcycle", "Tank"], AUX_95th_Droid_Factory_Ground_Range];
	private _bluforInRange = _allEntitiesInRange select { (side _x == blufor) };
	if(blufor countSide _bluforInRange < 1) exitWith {};

	// Set spawn array for factory type
	private _spawnArray = [];

	switch (typeOf _factory) do {
		case "AUX_95th_Ground_Factory": {_spawnArray = ["AUX_95th_Droid_B1_Unit_Rifleman", "AUX_95th_Droid_B1_Unit_Rifleman", "AUX_95th_Droid_B1_Unit_Rifleman", "AUX_95th_Droid_B1_Unit_Rifleman"]};
	};

	// Decide if spawning on factory or proxy position
	private _spawnPos = position _factory;
	private _nearestProxy = nearestObject [_factory, "AUX_95th_Factory_Proxy"];
	if(!(isNull _nearestProxy)) then {_spawnPos = position _nearestProxy};

	// Spawn group and move to target
	_group = [_spawnPos, east, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;

	private _unitCount = (_factory getVariable "AUX_95th_Factory_Unit_Count");
	_factory setVariable ["AUX_95th_Factory_Unit_Count", (_unitCount + (count _spawnArray)), true];

	_group move (position (_bluforInRange select 0));

	private _spawnedUnits = units _group;
	
	{
		_x setVariable ["AUX_95th_Unit_Factory_Parent", _factory, true];
		
		_x addEventHandler ["Killed", {
			params ["_unit", "_killer"];

			private _factory = (_unit getVariable "AUX_95th_Unit_Factory_Parent");
			private _unitCount = (_factory getVariable "AUX_95th_Factory_Unit_Count");
			_factory setVariable ["AUX_95th_Factory_Unit_Count", (_unitCount-1), true];
		}];

		_x addEventHandler ["Deleted", {
			params ["_unit"];
			private _factory = (_unit getVariable "AUX_95th_Unit_Factory_Parent");
			private _unitCount = (_factory getVariable "AUX_95th_Factory_Unit_Count");
			_factory setVariable ["AUX_95th_Factory_Unit_Count", (_unitCount-1), true];
		}];
	} forEach _spawnedUnits;

}, AUX_95th_Droid_Factory_Wave_Delay, [_factory]] call CBA_fnc_addPerFrameHandler;

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
