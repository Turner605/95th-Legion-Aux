params ["_vehicle", "_projectile", "_magazine"];

if (!isServer) exitWith {};

private _detPos = [0,0,0];
private _offset = 0.1;
private _dir = (getDir _projectile);
private _spawnCrater = false;

while {alive _projectile} do {
	// private _velocity = velocity _projectile;
	_detPos = getPosASL _projectile;

	// private _vis = (lineIntersectsSurfaces [_detPos, _detPos vectorAdd (_velocity vectorMultiply 2), _vehicle, objNull, true, 1, "FIRE", "GEOM"]);
	// systemChat str _vis;

	// private _objectHit = objNull;

	// if(isNull _vis) then {_objectHit = (_vis select 2);};

	// if(isNull _objectHit) then {_spawnCrater = false;}else{_spawnCrater = true;};

	// sleep 0.01;
};

private _supplyBox = "";

switch (_magazine) do {
	case "NFL_LAAT_Resupply_Launcher_Magazine_Ammo": {_supplyBox = "AUX_95th_Crate_Platoon_Ammo";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_Medical": {_supplyBox = "AUX_95th_Crate_Platoon_Medical";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_Explosives": {_supplyBox = "AUX_95th_Crate_Platoon_Explosives";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_VehicleAmmo": {_supplyBox = "AUX_95th_Crate_Vehicle_Ammo";};
	case "NFL_LAAT_Resupply_Launcher_Magazine_VehicleFuel": {_supplyBox = "AUX_95th_Crate_Vehicle_Fuel";};
};

// private _position = (_detPos vectorAdd [0,0,_offset]);
private _position = _detPos;

if(_spawnCrater) then {
	private _crater = createVehicle ["CraterLong_small", _position, [], 0, "CAN_COLLIDE"]; 
	_crater setDir _dir;
};

private _resupply = createVehicle [_supplyBox, _position, [], 0, "CAN_COLLIDE"]; 
private _smoke = createVehicle ["SmokeShellBlue", _position, [], 0, "CAN_COLLIDE"]; 