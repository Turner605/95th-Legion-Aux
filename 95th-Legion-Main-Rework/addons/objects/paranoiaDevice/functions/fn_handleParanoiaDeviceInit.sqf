params ["_object"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

private _crystal = "3AS_Crystal_4_Red" createVehicle [0,0,0]; 

_crystal attachTo [_object,[-0.5,0.0,-0.5]]; 
_crystal setVectorDirAndUp [[0,-4,0],[0,0,1]];

_object addEventHandler ["Deleted", {
	params ["_object"];

    { 
        detach _x;
	    deleteVehicle _x;
    } forEach attachedObjects _object;
}];

_object addEventHandler ["Killed", {
    params ["_object", "_killer"];

    { 
        detach _x;
	    deleteVehicle _x;
    } forEach attachedObjects _object;
}];
