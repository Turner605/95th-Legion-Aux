params ["_object"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

private _shieldGen = createVehicle ["SquadShield", [0,0,0], [], 0, "CAN_COLLIDE"];

_shieldGen attachTo [_object, [0,-0.2,0], "spine3", true];
_shieldGen setVectorDirAndUp [[0,0,1], [0,-1,0]];

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


