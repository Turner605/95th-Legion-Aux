params ["_vehicle", "_attachClass", "_offsetString", "_vectorDirAndUpString"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

// switch (_vehicle) do {
// 	case "CarModel": {}; // Car
// 	case "TankModel": {}; // Tank
// 	case "PlaneModel": {}; // Plane
// 	case "3AS_Aegis_Shuttle_F": {}; // Helicopter
// };

if(_vehicle isKindOf "CAManBase") then {
	// Hide parent
	_vehicle hideObjectGlobal true;
	_vehicle enableAIFeature ["AUTOTARGET", false];
	_vehicle enableAIFeature ["PATH", false];
};

if(
	_vehicle isKindOf "Tank" || 
	_vehicle isKindOf "Car" || 
	_vehicle isKindOf "Helicopter" || 
	_vehicle isKindOf "Plane"
) then {
	// Hide parent
	_vehicle setObjectTextureGlobal [0,''];
	_vehicle setObjectTextureGlobal [1,''];
	_vehicle setObjectTextureGlobal [2,''];
	_vehicle setObjectTextureGlobal [3,''];
	_vehicle setObjectTextureGlobal [4,''];
	_vehicle setObjectTextureGlobal [5,''];
	_vehicle setObjectTextureGlobal [6,''];
	_vehicle setObjectTextureGlobal [7,''];
};

private _vectorDirAndUp = parseSimpleArray _vectorDirAndUpString;
private _offset = parseSimpleArray _offsetString;

// Create fake object and attach to parent
private _attachedObject = _attachClass createVehicle [0,0,0];
_attachedObject attachTo [_vehicle,_offset];
_attachedObject setVectorDirAndUp _vectorDirAndUp;

// Set variable for cleanup and damage handling
_vehicle setVariable ["AUX_95th_Attached_Object", _attachedObject, true];

_vehicle addEventHandler ["Killed", {
    params ["_vehicle"];

	private _attachedObject = _vehicle getVariable "AUX_95th_Attached_Object";
	_attachedObject setDamage 1;
}];

_vehicle addEventHandler ["Deleted", {
	params ["_vehicle"];
	private _attachedObject = _vehicle getVariable "AUX_95th_Attached_Object";
	detach _attachedObject;
	deleteVehicle _attachedObject;
}];

[_attachedObject, ["HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

	private _damage = _ammo select 0;

	systemChat str _damage;
}]] remoteExec ["addEventHandler", 0, true];