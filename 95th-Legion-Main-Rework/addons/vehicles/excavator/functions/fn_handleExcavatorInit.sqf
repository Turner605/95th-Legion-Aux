params ["_vehicle"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

_vehicle setObjectTextureGlobal [0,''];
_vehicle setObjectTextureGlobal [1,''];
_vehicle setObjectTextureGlobal [2,''];

private _excavatorObject = "Land_Excavator_01_abandoned_F" createVehicle [0,0,0];

_vehicle setVariable ["AUX_95th_Attached_Excavator", _excavatorObject, true];

_excavatorObject attachTo [_vehicle,[0.38,2.0,1.0]];
_excavatorObject setVectorDirAndUp [[0,0,0],[0,0,1]];

_vehicle addEventHandler ["Deleted", {
	params ["_vehicle"];
	private _excavatorObject = _vehicle getVariable "AUX_95th_Attached_Excavator";
	detach _excavatorObject;
	deleteVehicle _excavatorObject;
}];