params ["_unit"];

AUX_95th_Disc_Shield_Active = 1;
private _shield = "Shield_Deployed" createVehicle getPos _unit;
playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", player, false, getPos player, 5, 0.7, 25];
_shield attachTo [_unit, [0.3, 1, -0.3], "Weapon", true]; _shield setDir 0;

sleep AUX_95th_Disc_Shield_Duration;
AUX_95th_Disc_Shield_On_Cooldown = 1;
AUX_95th_Disc_Shield_Active = 0;
playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", player, false, getPos player, 5, 0.7, 25];
sleep 0.5;
detach _shield;
deleteVehicle _shield;

sleep AUX_95th_Disc_Shield_Cooldown_Duration;
AUX_95th_Disc_Shield_On_Cooldown = 0;
