params ["_dispenser", "_group"];

_waveTime = 5;
private _cargo = getVehicleCargo _dispenser;

_dispenser setVariable ["ddOn",True];

while {alive _dispenser && _dispenser getVariable ["ddOn",false]} do {
	_dispenser animateSource ["deploy",1];
	sleep 4; // sleep enough for animation
	_group leaveVehicle _dispenser;
	
	//spot to handle movement
// 	private _infantryRallyWp = _group addWaypoint [_pos, 20];
	// if (isClass (configFile >> "CfgPatches" >> "acex_headless") && {acex_headless_enabled}) then {
	// 	_group setVariable ["acex_headless_blacklist", true, true];	//to ensure unload, blacklist
	// 	_infantryRallyWp setWaypointStatements ["true", "(group this) setVariable ['acex_headless_blacklist', false, true];"];	//after rally, unblacklist _group
	// };

 	sleep 8; // sleep enough for each 4 units

	_group setBehaviour "COMBAT";
	_group setSpeedMode "FULL";

	_dispenser animateSource ["deploy",0];	//close dispenser
	sleep 4; // sleep enough for animation

	_group = [[0,0,0], east, ["JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
	{_x moveInCargo _dispenser} forEach Units _group;
	
	{_x addCuratorEditableObjects [units _group, true];} forEach allCurators;
	sleep _waveTime;
};

_dispenser setVariable ["ddOn",False];
_ddOn = False;
_dispenser animateSource ["deploy",0];