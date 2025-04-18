params ["_vehicle"];

// Features TODO: 
// Passive Opfor Radar
// Radio range extender

// Possible Features: 
// "Deploy UAV" Function? - Maybe a new UAV that does the sonar scan when you fire?
// Instead of scan maybe a HUD display of the groups it can currently see?

if (!isServer) exitWith {};

//#################################### Output Count ####################################
private _outpostNumber = missionNamespace getVariable "OutpostNumber";

if (isNil "_outpostNumber") then {
	_outpostNumber = 1;
	missionNamespace setVariable ["OutpostNumber", _outpostNumber];
} else {
	_outpostNumber = _outpostNumber + 1;
	missionNamespace setVariable ["OutpostNumber", _outpostNumber];
};

//#################################### Logic ####################################
private _objNetId = _vehicle call BIS_fnc_netId;
private _outpostName = "Outpost: " + (str _outpostNumber);

//#################################### Building ####################################

[
	_vehicle, 
	5000, 
	[
		["3AS_Prop_FOB_modular_Wall_Corner","",100,15,{}],
		["3AS_Prop_FOB_modular_Wall_straight_Long","",100,15,{}],
		["3AS_Prop_FOB_modular_Wall_gate","",100,15,{}],
		["3AS_Prop_FOB_modular_watchTower","",50,15,{}],
		["3AS_Prop_FOB_modular_Bunker","",50,15,{}],
		["3AS_Prop_FOB_modular_Wall_ramp","",100,15,{}]
	], 
	{}
] call stx_logistics_fnc_addConstructionVehicle;

//#################################### Map Marker ####################################

[{
	(_this select 0) params ["_vehicle", "_objNetId", "_outpostName"];

	if (!alive _vehicle) exitWith {
		deleteMarker _objNetId;
		deleteMarker (_objNetId+"zone");
		[_this select 1] call CBA_fnc_removePerFrameHandler;
	};

	deleteMarker _objNetId;
	_marker = createMarker [_objNetId, position _vehicle];
	_marker setMarkerTypeLocal "JLTS_GAR_hq";
	_marker setMarkerText _outpostName;

	deleteMarker (_objNetId+"zone");
	_zoneMarker = createMarker [(_objNetId+"zone"), position _vehicle];
	_zoneMarker setMarkerShapeLocal "ELLIPSE";
	_zoneMarker setMarkerColorLocal "colorWEST";
	_zoneMarker setMarkerSize [150, 150];

	private _allUnitsInRange = []; 

	{
		if (!((vehicle _x) in _allUnitsInRange) and (alive (vehicle _x))) then {
			if (((_x distance (getPosASL _vehicle)) < 150)) then {
				_veh = vehicle _x; 
				_allUnitsInRange pushBack _veh; 
			}; 
		}; 
	} forEach (units opfor);

	private _detectedOpfor = _vehicle getVariable "DetectedOpfor";

	if (isNil "_detectedOpfor") then {
		_vehicle setVariable ["DetectedOpfor", false, true];
	};

	if((count _allUnitsInRange) > 0) then {
		if (!_detectedOpfor) then {
			_vehicle setVariable ["DetectedOpfor", true, true];
			[[_outpostName], {params ["_outpostName"]; systemChat (_outpostName+": Hostiles Detected");}] remoteExec ["call", 0];
		};
	} else {
		if (_detectedOpfor) then {
			_vehicle setVariable ["DetectedOpfor", false, true];
			[[_outpostName], {params ["_outpostName"]; systemChat (_outpostName+": Sector Clear");}] remoteExec ["call", 0];
		};
	};

}, 5, [_vehicle, _objNetId, _outpostName]] call CBA_fnc_addPerFrameHandler;

//#################################### Arsenal ####################################
[_vehicle, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;

//#################################### Respawn ####################################
[west, _vehicle, _outpostName] call BIS_fnc_addRespawnPosition;

//#################################### Radio ####################################
[_vehicle, 50000] call tfar_antennas_fnc_initRadioTower;

//#################################### Pick Up ####################################

[[_outpostName, _vehicle], {
	params ["_outpostName", "_vehicle"];

	_vehicle addAction ["<t color='#00fb21'>Request Pickup</t>", {
		params ["_target","_caller","_id","_args"];
		_args params ["_outpostName"];

		private _allPilots = [];
		_allPilots = allPlayers select {
			(side _x == blufor) &&
			((vehicle _x) isKindOf "Helicopter" || (vehicle _x) isKindOf "Plane")
		};

		[[_outpostName], {
			params ["_outpostName"];
			1 cutText ["<t color='#ffffff' size='1'>Pickup Requested from " + _outpostName + ".</t>", "PLAIN", 2, true, true, true];
		}] remoteExec ["call", _allPilots];
	},[_outpostName]];
}] remoteExec ["call", 0, true];