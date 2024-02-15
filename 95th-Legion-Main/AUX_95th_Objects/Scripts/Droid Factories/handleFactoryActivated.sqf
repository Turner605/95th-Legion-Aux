params ["_terminal", "_nearestFactory", "_factoryTypes"];

[{
	(_this select 0) params ["_terminal", "_nearestFactory", "_factoryTypes"];
	_terminal setVariable ["AUX_95th_Factory_Frame_Handler", (_this select 1), true];

	if (!alive _nearestFactory) exitWith {
		[_this select 1] call CBA_fnc_removePerFrameHandler;
		_terminal setVariable ["AUX_95th_Terminal_Active", false, true];
		createVehicle["Bo_GBU12_LGB", getPosATL _nearestFactory, [], 0, "CAN_COLLIDE"];
		deleteVehicle _nearestFactory;
	};

	if((_nearestFactory getVariable "AUX_95th_Unit_Count") > 20) exitWith {};

	private _spawnArray = [];

	switch (typeOf _nearestFactory) do {
		case "AUX_95th_Ground_Factory": {_spawnArray = ["JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_AR", "JLTS_Droid_B1_AT"]};
	};

	private _allEntitiesInRange = _terminal nearEntities [["Man", "Car", "Motorcycle", "Tank"], 1500];
	private _bluforInRange = _allEntitiesInRange select { (side _x == blufor) };
	if(blufor countSide _bluforInRange < 1) exitWith {};

	_group = [position _nearestFactory, east, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;

	private _unitCount = (_nearestFactory getVariable "AUX_95th_Unit_Count");
	_nearestFactory setVariable ["AUX_95th_Unit_Count", (_unitCount + (count _spawnArray)), true];

	private _target = _bluforInRange select 0;
	private _targetPos = position _target;

	_group move _targetPos;

	private _spawnedUnits = units _group;
	
	{
		_x setVariable ["AUX_95th_Unit_Factory_Parent", _nearestFactory, true];
		
		_x addEventHandler ["Killed", {
			params ["_unit", "_killer"];

			private _nearestFactory = (_unit getVariable "AUX_95th_Unit_Factory_Parent");
			private _unitCount = (_nearestFactory getVariable "AUX_95th_Unit_Count");
			systemChat (str _unitCount);
			_nearestFactory setVariable ["AUX_95th_Unit_Count", (_unitCount-1), true];
		}];

		_this addEventHandler ["Deleted", {
			params ["_unit"];
			private _nearestFactory = (_unit getVariable "AUX_95th_Unit_Factory_Parent");
			private _unitCount = (_nearestFactory getVariable "AUX_95th_Unit_Count");
			systemChat (str _unitCount);
			_nearestFactory setVariable ["AUX_95th_Unit_Count", (_unitCount-1), true];
		}];
	} forEach _spawnedUnits;

}, 5, [_terminal, _nearestFactory, _factoryTypes]] call CBA_fnc_addPerFrameHandler;