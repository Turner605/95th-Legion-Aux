params ["_this", "_player", "_vehicleClass"];

if(_player getVariable "IsOnAirRespawnCooldown") exitWith {"You are on a vehicle cooldown." remoteExec ["hint", _player];};

private _nearestObjects = nearestObjects[_this, [], 20];
private _targetPad = 0;

{
	if((typeOf _x) == "AUX_95th_AirUtil_Pad") then {
		_targetPad = _x;
	};
} forEach _nearestObjects;

if(!(isNil "_targetPad")) then {
	if(!(isNull _targetPad)) then {
		private _nearestVehicle = nearestObjects[_targetPad, ["Helicopter", "Plane"], 20] select 0; 
	
		if(!(isNil "_nearestVehicle")) then {
			deleteVehicle _nearestVehicle;
		};	
	
		sleep 0.5;

		private _padPosition = getPosATL _targetPad;
		private _padX = _padPosition select 0;
		private _padY = _padPosition select 1;
		private _padZ = _padPosition select 2;
		private _position = [_padX, _padY, _padZ + 5];

		private _direction = getDir _targetPad;

		private _spawnedVehicle = createVehicle[_vehicleClass, _position, [], 0, "CAN_COLLIDE"];

		switch (_vehicleClass) do {
			case "95th_LAAT_Mrk1": { [_spawnedVehicle, _player] spawn AUX_95th_fnc_handleSkinSelection; };
			case "95th_LAAT_Mrk2": { [_spawnedVehicle, _player] spawn AUX_95th_fnc_handleSkinSelection;  };
			case "95th_LAAT_Mrk2Lights": { [_spawnedVehicle, _player] spawn AUX_95th_fnc_handleSkinSelection;  };
		};

		_spawnedVehicle setDir _direction + 90;
	};
};