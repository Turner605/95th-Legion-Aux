if (!(hasInterface) or (isDedicated)) exitWith {};
[] spawn
{
	waitUntil {!(isNull findDisplay 46) };
	player execVM "\WBK_FlamethrowerSystem\runWithFlamethrower.sqf";
	player addEventHandler ["Respawn", {
		player execVM "\WBK_FlamethrowerSystem\runWithFlamethrower.sqf";
	}];
	(findDisplay 46) displayAddEventHandler ["MouseButtonDown", {
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		_currentFlamethrower = _unit call WBK_GetCurrentMuzzle;
		if !(isNil {_unit getVariable "WBK_FlameInUse"}) exitWith {};
		if ((_this select 1 == 0) and (getText (_currentFlamethrower >> "WBK_BurnEm_IsFlamethrower") != "") and (!dialog) and !(visibleMap) and (isNull objectParent _unit) and (lifeState _unit != "INCAPACITATED")) exitWith {
			if (((_unit ammo _muz) <= 0) || (gestureState _unit == (getText (_currentFlamethrower >>  "reloadAction")))) exitWith {};
			_balloonsRequired = getText (_currentFlamethrower >> "WBK_BurnEm_RequiredBackpack"); 
			if ((_balloonsRequired != "") and (backpack _unit != _balloonsRequired)) exitWith {hintSilent format ["You require %1 backpack in order to use this flamethrower",getText (configFile >> "CfgVehicles" >> _balloonsRequired >> "displayName")];};
			_unit setVariable ["WBK_FlameInUse",1,true];
			[[_unit,parseSimpleArray getText (_currentFlamethrower >> "WBK_BurnEm_FlamethrowerSoundArray"),parseSimpleArray getText (_currentFlamethrower >> "WBK_BurnEm_FlamethrowerParticlePos"),_unit call Flame_GetColorFlamethrower,currentMuzzle _unit],{
			if (isDedicated) exitWith {};
			params ["_object","_arr1","_arr2","_color","_ogMuzzle"];
			_snd_Start = _arr1 select 0;
			_snd_Loop = _arr1 select 1;
			_snd_Loop_Sec = _arr1 select 2;
			_snd_End = _arr1 select 3;

			_smlfirelight = "#lightpoint" createVehicleLocal (getpos _object);
			_smlfirelight attachTo [_object, [0,4,0], "leftHand"];
			_smlfirelight setLightAmbient (_color select 0);  
			_smlfirelight setLightColor (_color select 0);  
			if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
				_smlfirelight setLightBrightness 8;
			}else{
				_smlfirelight setLightBrightness 0.51;
			};
			_smlfirelight setLightDayLight true;
			_blow_obj = "#particlesource" createVehicleLocal (getpos _object);
			_pos = _arr2 select 0;
			_bone = _arr2 select 1;
			_blow_obj attachTo [_object, _pos, _bone,true];
			_blow_obj say3D [_snd_Start,130];
			[_blow_obj,_snd_Loop,_snd_Loop_Sec] spawn {
			uisleep 0.4;
			while {alive (_this select 0)} do {
			(_this select 0) say3D [(_this select 1),130];
			uisleep (_this select 2);
			};
			};
			_1_fum = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
			_1_fum setDropInterval 0.005;
			_1_fum setParticleCircle [0, [0, 0, 0]];
			_1_fum setParticleRandom [0.5,[0.1,0.1,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
			_1_fum setParticleFire [15,1,0.1];
			_2_fum = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
			_2_fum setDropInterval 0.005;
			_2_fum setParticleCircle [0, [0, 0, 0]];
			_2_fum setParticleRandom [0.5,[0.1,0.1,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
			_fireflies  = "#particlesource" createVehiclelocal (getposaTL _blow_obj); 
			_fireflies setParticleRandom [0,[0,0,0],[1,1,0.1],10,0,[0,0,0,0.1],1,7];
			_fireflies setDropInterval 0.01;
			_fireflies setParticleCircle [0.01,[0,0,0]];
			
			[_1_fum,_2_fum,_fireflies,_object,_blow_obj,_color] spawn {
				_1_fum = _this select 0;
				_2_fum = _this select 1;
				_fireflies = _this select 2;
				_object = _this select 3;
				_blow_obj = _this select 4;
				_color = _this select 5;
				while {alive _1_fum} do {
					_al_pressure_1 = _object getVariable ["WBK_FlamethrowerDistanceVar",30];
					_flow_1 = _object weaponDirection currentWeapon _object vectorMultiply _al_pressure_1;
					_fireflies setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,1.2,[0,0,0],[_flow_1 select 0,_flow_1 select 1,_flow_1 select 2],13,1.3,1,0,[0.05,0.1],[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1]],[1],0,0,"","",_blow_obj, 0, false, 0.3, [[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1]]];
					_1_fum setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
					"",
					"Billboard",
					1,
					0.8,
					[0, 0, 0],
					[_flow_1 select 0,_flow_1 select 1,_flow_1 select 2],
					15,
					12,
					7.9,
					0.035,
					[0.1, 0.6, 2],
					[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.1]],
					[0.08],
					1,
					0,
					"",
					"",
					_blow_obj,
					0,
					false,
					0.3,
					[[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.1]]
					];
					_2_fum setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],
					"",
					"Billboard",
					1,
					0.8,
					[0, 0, 0],
					[_flow_1 select 0,_flow_1 select 1,_flow_1 select 2],
					15,
					12,
					7.9,
					0.035,
					[0.2, 1.1, 2.2],
					[[0.01, 0.01, 0.01, 0.2]],
					[4.5],
					1,
					0,
					"",
					"",
					_blow_obj,
					0,
					false,
					0.3
					];
					uiSleep 0.1;
				};
			};
			uisleep 0.4;
			waitUntil {(getNumber (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _object >> "disableWeapons") == 1) or (isNil {_object getVariable "WBK_FlameInUse"}) or !(alive _object) or (currentMuzzle _object != _ogMuzzle) or ((_object ammo currentMuzzle _object) <= 0) or (dialog) or (visibleMap) or !(isNull objectParent _object) or (lifeState _object == "INCAPACITATED") or (gestureState _object == (getText (configfile >> "CfgWeapons" >> currentWeapon _object >> currentMuzzle _object >> "reloadAction")))};
			_object setVariable ["WBK_FlameInUse",nil];
			deleteVehicle _1_fum;
			deleteVehicle _2_fum;
			deleteVehicle _fireflies;
			deleteVehicle _smlfirelight;
			_end = "#particlesource" createVehicleLocal [0,0,0];
			_end attachTo [_object, [-0.32,0.3,-0.3], "leftHand",true];
			_end say3D [_snd_End,130];
			uisleep 0.4;
			deleteVehicle _blow_obj;
			uisleep 1.6;
			deleteVehicle _end;
			}] remoteExec ["spawn", [0,-2] select isDedicated,false];
		};
	}];
	(findDisplay 46) displayAddEventHandler ["MouseButtonUp", {
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		if (_this select 1 == 0) then {
			_unit setVariable ["WBK_FlameInUse",nil,true];
		};
	}];
};
