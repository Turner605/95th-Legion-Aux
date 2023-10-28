params ["_unit", "_toDeleteVics", "_toDeleteGroup"];

NFL_Auto_Turret_On_Cooldown = 1;
NFL_Auto_Turret_Active = 0;

playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", _turret, false, getPos _turret, 5, 0.7, 25];
sleep 0.5;

{deleteVehicle _x;} forEach items _toDeleteVics;
deleteGroup _toDeleteGroup;

sleep NFL_Auto_Turret_Cooldown_Duration;

NFL_Auto_Turret_On_Cooldown = 0;