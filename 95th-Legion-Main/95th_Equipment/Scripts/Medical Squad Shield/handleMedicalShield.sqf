params ["_projectile", "_unit"];

private _offset = 0.2;
private _position = getPosATL _projectile vectorAdd [0,0,_offset];
private _shieldGenDep = createVehicle ["AUX_95th_Medical_Shield", _position, [], 0, "CAN_COLLIDE"];
deleteVehicle _projectile;
playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", _shieldGenDep, false, getPos _shieldGenDep, 5, 0.7, 50];

[{
	params["_shieldGenDep"];

	playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", _shieldGenDep, false, getPos _shieldGenDep, 5, 0.7, 50];
	sleep 0.5;
	deleteVehicle _shieldGenDep;
}, [_shieldGenDep], NFL_Medical_Shield_Duration] call CBA_fnc_waitAndExecute;

// Maybe kick off the different treatment options here?
// So that bandages can be applied and then the list updated on seperate loops

[_shieldGenDep, _unit] spawn NFA_fnc_handleMedicalShieldBandages;

while {alive _shieldGenDep} do {
	private _playersToTreat = [];
	
	{
		_relPos = _shieldGenDep worldToModel (getPosATL _x);
		_boundingBox = boundingBox _shieldGenDep;

		_min = _boundingBox select 0;
		_max = _boundingBox select 1;

		_myX = _relPos select 0;
		_myY = _relPos select 1;
		_myZ = _relPos select 2;

		if ((_myX > (_min select 0)) and (_myX < (_max select 0))) then {
			if ((_myY > (_min select 1)) and (_myY < (_max select 1))) then {
				if ((_myZ > (_min select 2)) and (_myZ < (_max select 2))) then {
					_playersToTreat pushBackUnique _x;
				} else { _inside = false; };
			} else { _inside = false; };
		} else { _inside = false; };

		// if(!_inside) exitWith {}; replace all the elses with exitWith
	} forEach allPlayers;

	_shieldGenDep setVariable ["PlayersToTreat", _playersToTreat, true];

	sleep 3;
};