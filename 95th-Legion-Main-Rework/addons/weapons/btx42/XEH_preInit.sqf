#include "script_component.hpp"

flameIncindieryUGLEH = {
	_grenadeObj = _this select 0;
	_spsObj = "#particlesource" createVehicle position _grenadeObj;
	_spsObj attachTo [_grenadeObj, [0, 0, 0.05]]; 
	waitUntil {!(alive _grenadeObj)};

	[_spsObj, {
		if (isDedicated) exitWith {};
		_particleAttach = "Land_Decal_ScorchMark_01_small_F" createVehicleLocal position _this; 
		_particleAttach setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.2]; 
		_particleAttach spawn {uiSleep 300; deleteVehicle _this};
		_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
		_fulgi setParticleRandom [0, [1, 1, 0], [5, 5, 8], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
		_fulgi setDropInterval 0.005;
		_fulgi setParticleCircle [0, [0, 0, 0]];
		_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,1,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[1,1,1,1]],[1],0,0,"","",_this, 0, false, -1, [[200,100,0.005,1],[200,100,0.005,1],[200,100,0.005,1]]]; 
		_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
		_smlfirelight setPosATL (getPosATL _this);
		_smlfirelight setLightAmbient [1, 0.3, 0.1];
		_smlfirelight setLightColor [1, 0.3, 0.1];
		_smlfirelight setLightBrightness 0.51;
		_smlfirelight setLightUseFlare true;
		_smlfirelight setLightDayLight true;
		_smlfirelight setLightFlareSize 12;
		_smlfirelight setLightFlareMaxDistance 400; 
		_particleAttach2 = "#particlesource" createVehicleLocal position _this; 
		_particleAttach2 setParticleClass "CannonFired1";
		_particleAttach2 setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.1]; 
		_particleAttach2 setParticleFire [15,2,0.1];
		sleep 23;
		deleteVehicle _smlfirelight;
		deleteVehicle _fulgi;
		deleteVehicle _particleAttach2;
	}] remoteExec ["spawn", [0,-2] select isDedicated,false];

	{
		_isBehindGeometry = lineIntersects [ getPosATL _spsObj, eyePos _x, _spsObj, _x];
		if ((alive _x) and !(_isBehindGeometry)) then {
			if !(_x isKindOf "MAN") then {
				_x setDamage 1;
			}else{
				if ((_x distance _spsObj) <= 2) then {
					_x setVariable ["WasHittedByFlame",1,true];
				};
				_x remoteExec ["Flame_Death_containerSpecialEH",_x];
			};
		};
	} forEach nearestObjects [_spsObj, ["Man","StaticWeapon","ReammoBox_F"], 4];

	{
		_isBehindGeometry = lineIntersects [ getPosATL _spsObj, eyePos _x, _spsObj, _x];
		if ((alive _x) and !(_isBehindGeometry)) then {
			private _priorDamage = damage _x;
			_x setDamage (_priorDamage + 0.3);
		};
	} forEach nearestObjects [_spsObj, ["LandVehicle"], 4];

	sleep 23;
	deleteVehicle _spsObj;
};

// Webknight Override
Flame_Hit_container = { 
	_obj = _this select 0; 
	_shooter = _this select 1;

	if (_obj == _shooter) exitWith {};

	if (
		!(animationState _obj == "flamethrower_tankExplodePre_1")
		and !(animationState _obj == "flamethrower_tankExplodePre_2")
		and ((((_obj worldToModel (_shooter modelToWorld [0, 0, 0])) select 1) < 0) or (stance _obj == "PRONE"))
		and (getText (configFile >> "CfgVehicles" >> backpack _obj >> "WBK_BurnEm_FlamethrowerBaloons") != "")
	) then {
		_rndSound = ["flamethrower_tank_bulletimpact_01",
			"flamethrower_tank_bulletimpact_02",
			"flamethrower_tank_bulletimpact_03",
			"flamethrower_tank_bulletimpact_04",
			"flamethrower_tank_bulletimpact_05"
		] call BIS_fnc_SelectRandom;

		[_obj, _rndSound, 80, 3] execVM "\WBK_FlamethrowerSystem\createSoundGlobal.sqf";

		_currentMag = currentMagazine _shooter;
		_currentMagConf = getText (configfile >> "CfgMagazines" >> _currentMag >> "ammo");
		_value = getNumber (configfile >> "CfgAmmo" >> _currentMagConf >> "hit");
		_rndVal = random 100;

		if ((_rndVal > 95) and (_value >= 7)) then {
			_obj spawn flameTankExplode;
		};
	};
};