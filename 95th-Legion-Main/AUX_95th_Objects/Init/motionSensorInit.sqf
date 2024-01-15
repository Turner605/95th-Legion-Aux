params ["_sensor"];

if (!isServer) exitWith {};

//#################################### Sensor Count ####################################
private _sensorNumber = missionNamespace getVariable "SensorNumber";

if (isNil "_sensorNumber") then {
	_sensorNumber = 1;
	missionNamespace setVariable ["SensorNumber", _sensorNumber];
} else {
	_sensorNumber = _sensorNumber + 1;
	missionNamespace setVariable ["SensorNumber", _sensorNumber];
};

//#################################### Logic ####################################
private _objNetId = _sensor call BIS_fnc_netId;
private _sensorName = "Sensor: " + (str _sensorNumber);

//#################################### Map Marker ####################################

[{
	(_this select 0) params ["_sensor", "_objNetId", "_sensorName"];

	if (!alive _sensor) exitWith {
		deleteMarker _objNetId;
		deleteMarker (_objNetId+"zone");
		[_this select 1] call CBA_fnc_removePerFrameHandler;
	};

	deleteMarker _objNetId;
	_marker = createMarker [_objNetId, position _sensor];
	_marker setMarkerType "JLTS_GAR_hq";
	_marker setMarkerText _sensorName;

	deleteMarker (_objNetId+"zone");
	_zoneMarker = createMarker [(_objNetId+"zone"), position _sensor];
	_zoneMarker setMarkerShape "ELLIPSE";
	_zoneMarker setMarkerColor "colorWEST";
	_zoneMarker setMarkerSize [100, 100];

	private _allUnitsInRange = []; 

	{
		if (!((vehicle _x) in _allUnitsInRange) and (alive (vehicle _x))) then {
			if (((_x distance (getposASL _sensor)) < 100)) then {
				_veh = vehicle _x; 
				_allUnitsInRange pushBack _veh; 
			}; 
		}; 
	} forEach (units opfor);

	private _detectedOpfor = _sensor getVariable "DetectedOpfor";

	if (isNil "_detectedOpfor") then {
		_sensor setVariable ["DetectedOpfor", false, true];
	};

	if((count _allUnitsInRange) > 0) then {
		if (!_detectedOpfor) then {
			_sensor setVariable ["DetectedOpfor", true, true];
			[[_sensorName], {params ["_sensorName"]; systemChat (_sensorName+": Hostiles Detected");}] remoteExec ["call", 0];
		};
	} else {
		if (_detectedOpfor) then {
			_sensor setVariable ["DetectedOpfor", false, true];
			[[_sensorName], {params ["_sensorName"]; systemChat (_sensorName+": Sector Clear");}] remoteExec ["call", 0];
		};
	};

}, 5, [_sensor, _objNetId, _sensorName]] call CBA_fnc_addPerFrameHandler;