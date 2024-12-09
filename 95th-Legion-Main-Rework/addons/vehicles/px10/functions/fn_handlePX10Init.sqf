params ["_vehicle"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

//#################################### Clear Foliage ####################################

_vehicle addAction ["<t color='#00fb21'>Clear Foliage</t>", {
	params ["_vehicle"];

	[5, [_vehicle], {
		params ["_args", "_elapsedTime", "_totalTime"]; 
		_args params ["_vehicle"];

		private _hideTObjs = [];

		private _pos = _vehicle modelToWorld [0,2,0.2];
		private _size = 20;

		{ _hideTObjs pushBack _x } forEach (nearestTerrainObjects [_pos,["TREE", "SMALL TREE", "BUSH"], _size]);

		{ if ((str(_x) find "fallen" >= 0) || 
		(str(_x) find "stump" >= 0) || 
		(str(_x) find "stone" >= 0)) then 
		{ _hideTObjs pushBack _x } else {}; } forEach (nearestTerrainObjects [_pos,[],_size]);

		{ _x hideObjectGlobal true } forEach _hideTObjs;

	}, {}, "Clearing Foliage...", {true}, ["isNotInside"]] call ace_common_fnc_progressBar;

},[], 1.5, true, true, ""];

//#################################### Clear Mines ####################################

_vehicle addAction ["<t color='#fb0026'>Clear Mines</t>", {
	params ["_vehicle"];

	[20, [_vehicle], {
		params ["_args", "_elapsedTime", "_totalTime"]; 
		_args params ["_vehicle"];

		private _pos = _vehicle modelToWorld [0,2,0.2];
		private _size = 20;

		private _allMines = nearestMines [_pos, [], _size];

		systemChat ("Cleared " + (str (count _allMines)) + " mines");

		deleteVehicle _allMines;

	}, {}, "Clearing Mines...", {true}, ["isNotInside"]] call ace_common_fnc_progressBar;

},[], 1.5, true, true, ""];

//#################################### Building ####################################

[
	_vehicle, 
	5000, 
	[
		["3AS_Prop_Baseplate_10x10_thin","",100,15,{}]
	], 
	{}
] call stx_logistics_fnc_addConstructionVehicle;