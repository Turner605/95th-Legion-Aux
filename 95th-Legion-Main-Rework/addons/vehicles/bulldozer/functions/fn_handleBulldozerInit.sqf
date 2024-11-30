params ["_vehicle"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

_vehicle setObjectTextureGlobal [0,''];
_vehicle setObjectTextureGlobal [1,''];
_vehicle setObjectTextureGlobal [2,''];

private _bullDozerObject = "Land_Bulldozer_01_abandoned_F" createVehicle [0,0,0];

_vehicle setVariable ["AUX_95th_Attached_Bulldozer", _bullDozerObject, true];

_bullDozerObject attachTo [_vehicle,[0.0,0.0,-0.5]];
_bullDozerObject setVectorDirAndUp [[0,-4,0],[0,0,1]];

_vehicle addEventHandler ["Deleted", {
	params ["_vehicle"];
	private _bullDozerObject = _vehicle getVariable "AUX_95th_Attached_Bulldozer";
	detach _bullDozerObject;
	deleteVehicle _bullDozerObject;
}];

_vehicle addAction ["<t color='#00fb21'>Clear Foliage</t>", {
	params ["_vehicle","_caller","_id", "_args"];

	private _hideTObjs = [];

	private _pos = _vehicle modelToWorld [0,2,0.2];
	private _size = 20;


	{ _hideTObjs pushBack _x } foreach (nearestTerrainObjects [_pos,["TREE", "SMALL TREE", "BUSH"],_size]);

	{ if ((str(_x) find "fallen" >= 0) || 
	(str(_x) find "stump" >= 0) || 
	(str(_x) find "stone" >= 0)) then 
	{ _hideTObjs pushBack _x } else {}; } foreach (nearestTerrainObjects [_pos,[],_size]);

	{ _x hideObjectGlobal true } foreach _hideTObjs;

},[], 1.5, true, true, ""];