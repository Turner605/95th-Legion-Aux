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