params ["_terminal", "_stateToSet"];

if (!isServer) exitWith {};

private _difficulty = _terminal getVariable ['AUX_95th_AutoSpawnAirDifficulty', "Easy"];

if(!_stateToSet) exitWith {
	[(_terminal getVariable 'AUX_95th_AirSpawnHandler')] call CBA_fnc_removePerFrameHandler;
};

if(_stateToSet) then {

	private _frameHandler = [{
		(_this select 0) params ["_terminal"];

		// private _allMarkers	= ("AUX_95th_Misc_Auto_Airspawn_Marker" allObjects 0);

		// private _allPlayers = allPlayers;

		// private _allHeliPilots = _allPlayers select {(side _x == blufor) && ((vehicle _x) isKindOf "Helicopter") && ((driver (vehicle _x)) == _x)};
		// private _allPlanePilots = _allPlayers select {(side _x == blufor) && ((vehicle _x) isKindOf "Plane") && ((driver (vehicle _x)) == _x)};

		// // Define possible spawns for helis and planes (acts as a percentage chance thing)
		// private _heliSpawnList = [
		// 	"AUX_95th_Air_Unit_Vulture"
		// 	"AUX_95th_Air_Unit_Vulture"
		// 	"AUX_95th_Air_Unit_Vulture"
		// 	"AUX_95th_Air_Unit_Vulture"
		// 	"AUX_95th_Air_Unit_Vulture",
		// 	"AUX_95th_Air_Unit_Gunship"
		// ];

		// private _planeSpawnList = [
		// 	"AUX_95th_Air_Unit_Vulture",
		// 	"AUX_95th_Air_Unit_Vulture",
		// 	"AUX_95th_Air_Unit_Vulture",
		// 	"AUX_95th_Air_Unit_Vulture",
		// 	"AUX_95th_Air_Unit_Vulture",
		// 	"AUX_95th_Air_Unit_Vulture_AA",
		// 	"AUX_95th_Air_Unit_Vulture_CAS"
		// ];

		// // Calculate spawn amount based on heli and plane pilots
		// {
		// 	private _spawnList = [(selectRandom _heliSpawnList), (selectRandom _heliSpawnList)];

		// } forEach _allHeliPilots;

	}, 5, [_terminal]] call CBA_fnc_addPerFrameHandler;

	_terminal setVariable ['AUX_95th_AirSpawnHandler', _frameHandler, true];
	
};