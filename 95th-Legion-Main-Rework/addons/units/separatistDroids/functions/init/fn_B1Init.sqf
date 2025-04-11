params ["_droid"];

_droid addEventHandler ["Killed", {
	params ["_unit", "_killer"];

	// [_unit] spawn {
	// 	params ["_unit"];

	// 	_soundSource = "HeliHEmpty" createVehicleLocal [0,0,0]; 
	// 	_soundSource attachTo [_unit,[0,0,1.5]];
	// 	playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", _soundSource, false, getPos _soundSource, 5, 0.7, 25];
	// 	sleep 2;
	// 	deleteVehicle _soundSource;
	// }

	if(AUX_95th_Reanimate_Droids) then {
		private _reanimateTime = [5,40] call BIS_fnc_randomInt;

		[{
			params ["_unit"];

			private _randomInt = [0,100] call BIS_fnc_randomInt;

			if (_randomInt <= AUX_95th_Reanimate_Chance) then {
				[_unit] spawn AUX_95th_fnc_reanimateDroid;
			};

		}, [_unit], _reanimateTime] call CBA_fnc_waitAndExecute;
	}
}];