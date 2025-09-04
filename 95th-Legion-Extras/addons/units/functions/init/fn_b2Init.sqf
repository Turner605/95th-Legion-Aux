params ["_unit"];

_unit allowFleeing 0;
_unit setSpeaker "NoVoice";
_unit setVariable ["disableUnitSFX",1,true];
[_unit, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];

[_unit] call crowsEW_spectrum_fnc_initDroneSignals;

_unit addEventHandler ["PathCalculated", {
	_unit = _this select 0;
	_unit spawn {
		sleep 0.5;
		_this playMoveNow "B2_SupperBattleDroid_walk";
	};

	_pathFindPoses = _this select 1;
	_arStart = _unit getVariable "WBK_DT_PathFindingObjects";

	if (!(isNil "_arStart")) then {
		deleteVehicle _arStart;
	};

	_lastPoint = _pathFindPoses select (count _pathFindPoses - 1);
	_marker = "Sign_Arrow_Yellow_F" createVehicleLocal _lastPoint; 
	_marker hideObject true;
	_unit setVariable ["WBK_DT_PathFindingObjects",_marker];

	[_unit,_marker] spawn {
		_unit = _this select 0;
		_marker = _this select 1;
		waitUntil {
			sleep 0.2; 
			if ((isNull _unit) or (isNull _marker) or !(alive _unit)) exitWith { true };
			((_unit distance _marker) <= 2)
		};
		_unit playMoveNow "B2_SupperBattleDroid_idle";
	};
}];

_unit addEventHandler ["HandleDamage", {
	params ["_unit", "_selection", "_damage", "_source"];

	if (!(_unit == _source) && (alive _unit)) then {
		_rndHitAnim = random 100;

		if ((_rndHitAnim >= 85) and !(animationState _unit == "B2_SupperBattleDroid_hit")) then {
			_unit spawn {
				_this disableAI "ALL";
				[_this, "B2_SupperBattleDroid_hit"] remoteExec ["switchMove", 0];
				sleep 1.21;
				if (!(animationState _this == "B2_SupperBattleDroid_hit")) exitWith {_this enableAI "ALL";};
				[_this, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];
				_this enableAI "ALL";
			};
		};
	};

	_damage;
}];

_unit removeAllEventHandlers "Killed";
_unit addEventHandler ["Killed", {
	_unit = _this select 0;
	_arStart = _unit getVariable "WBK_DT_PathFindingObjects";

	if (!(isNil "_arStart")) then {
		deleteVehicle _arStart;
	};

	[_unit, "B2_SupperBattleDroid_die"] remoteExec ["switchMove", 0];
	[_unit, "WBK_b2_dying", 70, 10] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	[_unit, {
		_object = _this;
		_particlesSpark = "#particlesource" createVehicleLocal (getPosATL _object);                                  
		_particlesSpark setParticleParams [
			["\A3\data_f\ParticleEffects\Universal\Universal", 16, 4, 11, 4],  //sprite name
			"", //animation name
			"Billboard", //type
			0.5, 1.4, //timer period and fadeout timer
			[0, 0, 0], //position
			[3, 3, 3], //move velocity
			5, 1, 0.35,  0.80, //rot vel, weight, volume, rubbing
			[0.08,0.01], //size transform
			[[1,1,1,0], [0.1,0.1,0.1,-4], [0,0,0,-4],[1,1,1,1]],  //color and transperency
			[1000], //animation phase speed
			0.2,   //randomdirection period
			0.9,  //randomization intensity
			"", //onTimer
			"",  //beforeDestroy
			"",  //object
			360,  //angle
			false,  //on the surface
			0  //bounce         
		];          
		_particlesSpark setDropInterval 0.001;         
		_particlesSpark attachTo [_object,[0.3,0,0.04],"neck"];
		sleep 0.1;
		deleteVehicle _particlesSpark;
	}] remoteExec ["spawn", [0,-2] select isDedicated,false];

    [_unit getVariable "AUX_95th_B2_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
}];

_unit addEventHandler ["Deleted", {
	params ["_unit"];

    [_unit getVariable "AUX_95th_B2_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
}];

_unit addEventHandler ["Fired", {
	_unit = _this select 0;
	if (isNil {_unit getVariable "B2Speak"}) then {
		_unit spawn {
			_this setVariable ["B2Speak",1];
			[_this, selectRandom ["WBK_b2_firing_1","WBK_b2_firing_2","WBK_b2_firing_3","WBK_b2_firing_4","WBK_b2_firing_5"], 60] call CBA_fnc_globalSay3d;
			sleep 7;
			_this setVariable ["B2Speak",nil];
		};
	};
}];

_unit setUnitPos "UP";
// _unit allowDamage false;

WBK_B2_Melee = {
	_unitToPlay = _this;
	_unitToPlay disableAI "ALL";
	[_unitToPlay, "B2_SupperBattleDroid_melee"] remoteExec ["switchMove", 0];
	sleep 0.1;
	if (!(animationState _unitToPlay == "B2_SupperBattleDroid_melee")) exitWith {_unitToPlay enableAI "ALL";};
	[_unitToPlay, selectRandom ["generis_empty_4","generis_empty_5","generis_empty_2"], 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	sleep 0.1;
	if (!(animationState _unitToPlay == "B2_SupperBattleDroid_melee")) exitWith {_unitToPlay enableAI "ALL";};
	if (isNil {_unitToPlay getVariable "B2Speak"}) then {
		_unitToPlay spawn {
		_this setVariable ["B2Speak",1];
		[_this, selectRandom ["WBK_b2_firing_1","WBK_b2_firing_2","WBK_b2_firing_3","WBK_b2_firing_4","WBK_b2_firing_5"], 60] call CBA_fnc_globalSay3d;
		sleep 3;
		_this setVariable ["B2Speak",nil];
		};
	};
	_myNearestEnemy = _unitToPlay findNearestEnemy _unitToPlay;
	if ((_myNearestEnemy distance _unitToPlay) <= 2.5) then {
		_myNearestEnemy setDamage 1;
		[_myNearestEnemy, "dobi_CriticalHit", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		[_myNearestEnemy, selectRandom ["lightsaber_death_11","lightsaber_death_20","lightsaber_death_5","lightsaber_death_8"]] remoteExec ["switchMove", 0];
		[_myNearestEnemy, (_myNearestEnemy getDir _unitToPlay)] remoteExec ["setDir", 0];
	};
	sleep 0.9;
	if (!(animationState _unitToPlay == "B2_SupperBattleDroid_melee")) exitWith {_unitToPlay enableAI "ALL";};
	_unitToPlay enableAI "ALL";
	[_unitToPlay, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];
};

_actFr = [{
    _array = _this select 0;
    _droid = _array select 0;
	_droid disableAI "MINEDETECTION";
	_droid disableAI "SUPPRESSION";
	_droid disableAI "COVER";
	_droid disableAI "AIMINGERROR";
	_droid disableAI "FSM";
	_droid setBehaviour "CARELESS";
	// _droid allowDamage false;

	{
		_ifInter = lineIntersects [ getPosASL _droid, eyePos _x, _droid, _x];

		if (!(_ifInter)) then {
			 _droid reveal [_x, 4]; 
		};
	} forEach nearestObjects [_droid, ["Man"], 15]; 

	_myNearestEnemy = _droid findNearestEnemy _droid;

	if (
		!(handgunWeapon _myNearestEnemy in IMS_Lightsabers) and
		(((_myNearestEnemy worldToModel (_droid modelToWorld [0, 0, 0])) select 1) > 0) and
		((_myNearestEnemy distance _droid) <= 2.5) and
		(_droid getVariable "canMakeAttack" == 0) and
		(alive _droid) and
		!(lifeState _droid == "INCAPACITATED") and
		!(animationState _droid == "B2_SupperBattleDroid_melee")
	) then {
		_droid spawn WBK_B2_Melee;
	};
}, 0.4, [_unit]] call CBA_fnc_addPerFrameHandler;

_unit setVariable ["AUX_95th_B2_Frame_Handler", _actFr];