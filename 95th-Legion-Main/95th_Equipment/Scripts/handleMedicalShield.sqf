params ["_projectile"];

private _offset = 0.2;
private _position = getPosATL _projectile vectorAdd [0,0,_offset];

private _shieldGenDep = createVehicle ["Medical_Shield_95th", _position, [], 0, "CAN_COLLIDE"];
deleteVehicle _projectile;
playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", _shieldGenDep, false, getPos _shieldGenDep, 5, 0.7, 50];

sleep TAS_SquadShieldTime;
playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", _shieldGenDep, false, getPos _shieldGenDep, 5, 0.7, 50];
sleep 0.5;
deleteVehicle _shieldGenDep;