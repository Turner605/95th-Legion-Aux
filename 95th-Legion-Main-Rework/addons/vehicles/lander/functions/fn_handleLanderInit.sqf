params ["_vehicle"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

_vehicle setObjectTextureGlobal [0,''];
_vehicle setObjectTextureGlobal [1,''];
_vehicle setObjectTextureGlobal [2,''];
_vehicle setObjectTextureGlobal [3,''];
_vehicle setObjectTextureGlobal [4,''];

private _landerObject = "3as_StaticVehicle_CISLander" createVehicle [0,0,0];

_vehicle setVariable ["AUX_95th_Attached_Lander", _landerObject, true];

_landerObject attachTo [_vehicle,[0.0,0.0,27]];
_landerObject setVectorDirAndUp [[0,-4,0],[0,0,1]];

_vehicle addEventHandler ["Deleted", {
	params ["_vehicle"];
	private _landerObject = _vehicle getVariable "AUX_95th_Attached_Lander";
	detach _landerObject;
	deleteVehicle _landerObject;
}];