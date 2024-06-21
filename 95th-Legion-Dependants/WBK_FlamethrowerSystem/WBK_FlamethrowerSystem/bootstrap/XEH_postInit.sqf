if (!(hasInterface) or (isDedicated)) exitWith {};
[] spawn
{
	waitUntil {!(isNull findDisplay 46) };
	player execVM "\WBK_FlamethrowerSystem\runWithFlamethrower.sqf";
	player addEventHandler ["Respawn", {
		player execVM "\WBK_FlamethrowerSystem\runWithFlamethrower.sqf";
	}];

(findDisplay 46)
displayAddEventHandler ["MouseButtonDown", {
_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
_weap = currentWeapon _unit;
if !(isNil {_unit getVariable "WBK_FlameInUse"}) exitWith {};
if ((_this select 1 == 0) and (getText (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_IsFlamethrower") != "") and (!dialog)) exitWith {
if ((_unit ammo primaryWeapon _unit) <= 0) exitWith {};
_balloonsRequired = getText (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_RequiredBackpack"); 
if ((_balloonsRequired != "") and (backpack _unit != _balloonsRequired)) exitWith {hintSilent format ["You require %1 backpack in order to use this flamethrower",getText (configFile >> "CfgVehicles" >> _balloonsRequired >> "displayName")];};
_unit setVariable ["WBK_FlameInUse",1,true];
[_unit, {
if (isDedicated) exitWith {};
_object = _this;
_arr1 = parseSimpleArray getText (configFile >> "CfgWeapons" >> currentWeapon _object >> "WBK_BurnEm_FlamethrowerSoundArray");  
_snd_Start = _arr1 select 0;
_snd_Loop = _arr1 select 1;
_snd_Loop_Sec = _arr1 select 2;
_snd_End = _arr1 select 3;

_smlfirelight = "#lightpoint" createVehicleLocal (getpos _object);
_smlfirelight attachTo [_object, [0,3,0], "leftHand"];
_smlfirelight setLightAmbient [1, 0.3, 0.1];
_smlfirelight setLightColor [1, 0.3, 0.1];
_smlfirelight setLightBrightness 0.51;
_blow_obj = "#particlesource" createVehicleLocal [0,0,0];
_arr2 = parseSimpleArray getText (configFile >> "CfgWeapons" >> currentWeapon _object >> "WBK_BurnEm_FlamethrowerParticlePos");  
_pos = _arr2 select 0;
_bone = _arr2 select 1;
_blow_obj attachTo [_object, _pos, _bone,true];
_blow_obj say3D [_snd_Start,130];
[_blow_obj,_snd_Loop,_snd_Loop_Sec] spawn {
sleep 0.4;
while {alive (_this select 0)} do {
(_this select 0) say3D [(_this select 1),130];
sleep (_this select 2);
};
};
_1_fum = "#particlesource" createVehicleLocal (getPosATL _blow_obj);
_1_fum setDropInterval 0.007;
_1_fum setParticleCircle [0, [0, 0, 0]];
_1_fum setParticleRandom [0.5,[0.1,0.1,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
[_1_fum,_object,_blow_obj] spawn {
_1_fum = _this select 0;
_object = _this select 1;
_blow_obj = _this select 2;
while {alive _1_fum} do {
_al_pressure_1 = getNumber (configFile >> "CfgWeapons" >> currentWeapon _object >> "WBK_BurnEm_FlamethrowerDistance");;
_flow_1 = _object weaponDirection currentWeapon _object vectorMultiply _al_pressure_1;
_1_fum setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
"",
"Billboard",
1,
0.8,
[0, 0, 0],
[_flow_1 select 0,_flow_1 select 1,_flow_1 select 2],
15,
10,
7.9,
0.035,
[0.1, 1, 2],
[[1, 0.5, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]],
[0.08],
1,
0,
"",
"",
_blow_obj,
0,
false,
0.3,
[[200,100,0.005,1],[200,100,0.005,1],[200,100,0.005,1]]
];
uiSleep 0.1;
};
};
sleep 0.4;
waitUntil {(getNumber (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _object >> "disableWeapons") == 1) or (isNil {_object getVariable "WBK_FlameInUse"}) or !(alive _object) or (currentWeapon _object != primaryWeapon _object) or ((_object ammo primaryWeapon _object) <= 0)};
_object setVariable ["WBK_FlameInUse",nil];
deleteVehicle _1_fum;
deleteVehicle _smlfirelight;
_end = "#particlesource" createVehicleLocal [0,0,0];
_end attachTo [_object, [-0.32,0.3,-0.3], "leftHand",true];
_end say3D [_snd_End,130];
sleep 0.4;
deleteVehicle _blow_obj;
sleep 1.6;
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
