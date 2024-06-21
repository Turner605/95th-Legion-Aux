_unitToPlay = _this select 0;
_sound = _this select 1;
_radius = _this select 2;
_secondsToDelete = _this select 3;
if (!(isNil {_unitToPlay getVariable "IMS_SoundObject"})) exitWith {
_soundCache = _unitToPlay getVariable "IMS_SoundObject";
if (isNull _soundCache) exitWith {
_soundCache = "#particlesource" createVehicle position _unitToPlay;
_unitToPlay setVariable ["IMS_SoundObject",_soundCache,true];
if (_unitToPlay isKindOf "MAN") then {
_soundCache attachTo [_unitToPlay, [0, 0, 0.2], "Spine3"]; 
}else{
_soundCache attachTo [_unitToPlay, [0, 0, 0]]; 
};
[_soundCache, _sound, _radius] call CBA_fnc_globalSay3d;
waitUntil {
	if (isNull _soundCache) exitWith { true }; // has to return true to continue
	isNull _unitToPlay;
};
deleteVehicle _soundCache;
};
[_soundCache, _sound, _radius] call CBA_fnc_globalSay3d;
};
_soundCache = "#particlesource" createVehicle position _unitToPlay;
_unitToPlay setVariable ["IMS_SoundObject",_soundCache,true];
if (_unitToPlay isKindOf "MAN") then {
_soundCache attachTo [_unitToPlay, [0, 0, 0.2], "Spine3"]; 
}else{
_soundCache attachTo [_unitToPlay, [0, 0, 0]]; 
};
[_soundCache, _sound, _radius] call CBA_fnc_globalSay3d;
waitUntil {
	if (isNull _soundCache) exitWith { true }; // has to return true to continue
	isNull _unitToPlay;
};
deleteVehicle _soundCache;