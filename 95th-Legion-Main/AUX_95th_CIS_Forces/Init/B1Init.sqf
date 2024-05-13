params ["_droid"];

_droid addEventHandler ["Killed", {
	params ["_unit", "_killer"];

	[_unit] spawn {
		params ["_unit"];

		_soundSource = "HeliHEmpty" createVehicleLocal [0,0,0]; 
		_soundSource attachTo [_unit,[0,0,1.5]];
		playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", _soundSource, false, getPos _soundSource, 5, 0.7, 25];
		sleep 2;
		deleteVehicle _soundSource;
	}
}];