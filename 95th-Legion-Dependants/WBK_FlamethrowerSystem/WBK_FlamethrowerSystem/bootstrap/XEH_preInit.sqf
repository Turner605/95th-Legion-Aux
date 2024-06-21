
WBK_Flamethrower_Array = [];






Flame_Death_Particles = {
if ((isDedicated) or !(isNil "WBK_Flame_DisableParticles")) exitWith {};
_object = _this;
_smlfirelight = "#lightpoint" createVehicleLocal (getpos _object);
_smlfirelight attachTo [_object,[0,0,0],"spine3"];
_smlfirelight setLightAmbient [1, 0.3, 0.1];
_smlfirelight setLightColor [1, 0.3, 0.1];
_smlfirelight setLightBrightness 0.41;
_source01 = "#particlesource" createVehicleLocal (getPosATL _object);
_source01 setParticleClass "AirFireSparks";
_source01 attachTo [_object,[0,0,0],"spine3"];
_source02 = "#particlesource" createVehicleLocal (getPosATL _object);
_source02 setParticleClass "SmallDestructionSmoke";
_source02 attachTo [_object,[0,0,0],"spine3"];
_source01 say3D ["igned_idle",100];
_gar = "Land_Decal_ScorchMark_01_small_F" createVehicleLocal (getpos _object);
_gar attachTo [_object,[0,0,0]];
detach _gar;
uiSleep 20;
deleteVehicle _smlfirelight;
deleteVehicle _source01;
deleteVehicle _source02;
uiSleep 300;
deleteVehicle _gar;
};

Flame_Death_containerSpecialEH = {
_obj = _this;
if (!(alive _obj) or !(local _obj)) exitWith {};
if (getText (configfile >> 'CfgVehicles' >> typeOf _obj >> 'moves') != 'CfgMovesMaleSdr') exitWith {
if (typeOf _obj isKindOf "TIOWSpaceMarine_Base") exitWith {
if ((damage _obj) >= 0.9) exitWith {
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
_obj setDamage 1;
};
_obj setDamage ((damage _obj) + 0.01);
};
if (
(typeOf _obj isKindOf "WBK_SpecialZombie_Corrupted_1") or
(typeOf _obj isKindOf "WBK_DOS_Squig_Normal") or
(typeOf _obj isKindOf "WBK_Headcrab_Normal") or
(typeOf _obj isKindOf "WBK_Bullsquid_1") or
(typeOf _obj isKindOf "WBK_HoundEye_1") or
(typeOf _obj isKindOf "WBK_Antlion_1") or 
(getText (configfile >> "CfgVehicles" >> typeOf _obj >> "editorSubcategory") == "dev_mutants")
) exitWith {
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
_obj setDamage 1;
[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, true];
};
if (typeOf _obj isKindOf "WBK_DOS_Huge_ORK") exitWith {
if (_obj getVariable 'ORK_Health' <= 0) exitWith {
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
_obj removeAllEventHandlers "HandleDamage";
_obj setDamage 1;
};
_health = _obj getVariable "ORK_Health";
_health = _health - 4;
_obj setVariable ["ORK_Health",_health,true];
};
if (typeOf _obj isKindOf "WBK_SpecialZombie_Smasher_1") exitWith {
if (isNil {_obj getVariable "CanBeStunnedIMS"}) exitWith {
[_obj, "Smasher_eat_voice", 120, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_obj, "WBK_Smasher_HitHard"] remoteExec ["switchMove", 0];
[_obj, "WBK_Smasher_HitHard"] remoteExec ["playMoveNow", 0];
_obj enableAI "MOVE";
_obj enableAI "ANIM";
_obj setVariable ["CanBeStunnedIMS",1,true];
_obj spawn {sleep 6; _this setVariable ["CanBeStunnedIMS",nil,true];};
_vv = _obj getVariable "WBK_SynthHP";
_new_vv = _vv - 100;
if (_new_vv <= 0) exitWith {[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false]; _obj removeAllEventHandlers "HitPart"; _obj setDamage 1; _obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];};
_obj setVariable ["WBK_SynthHP",_new_vv,true];
};
_vv = _obj getVariable "WBK_SynthHP";
_new_vv = _vv - 40;
if (_new_vv <= 0) exitWith {[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false]; _obj removeAllEventHandlers "HitPart"; _obj setDamage 1; _obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];};
_obj setVariable ["WBK_SynthHP",_new_vv,true];
};
};
if !(isNil {_obj getVariable "WBK_AI_ISZombie"}) exitWith {
if (typeOf _obj isKindOf "Zombie_Special_OPFOR_Leaper_1") exitWith {
_vv = _obj getVariable "WBK_SynthHP";
_new_vv = _vv - 50;
if (_new_vv <= 0) exitWith {
_obj removeAllEventHandlers "HitPart";
_obj setDamage 1;
_rndAnim = selectRandom ["WBK_Leaper_Death_1","WBK_Leaper_Death_2"];
[_obj, _rndAnim] remoteExec ["switchMove", 0];
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
};
_obj setVariable ["WBK_SynthHP",_new_vv,true];
_obj enableAI "MOVE";
};
_obj setDamage 1;
[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
[_obj,"BurnFace"] remoteExec ["setFace", 0];
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
[_obj,selectRandom
["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3"]] remoteExec ["switchMove", 0];
if (!(isNil {_obj getVariable "WBK_Zombie_CustomSounds"})) then {
_snds = (_obj getVariable "WBK_Zombie_CustomSounds") select 4;
[_obj, selectRandom _snds, 100, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
}else{
[_obj, selectRandom ["plagued_burn_1","plagued_burn_2","plagued_burn_3"], 100, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
};
};
if (typeOf _obj isKindOf "WBK_MeleeOrks_1") exitWith {
_obj setDamage 1;
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
[_obj,selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3"]] remoteExec ["switchMove", 0];
[_obj,"Disable_Gesture"] remoteExec ["playActionNow", _obj];
};
if !(isNil {_obj getVariable "WBK_HL_CustomArmour"}) exitWith {
if ((_obj getVariable "WBK_HL_CustomArmour") <= 0) exitWith {
_obj setDamage 1;
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
[_obj,selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3"]] remoteExec ["switchMove", 0];
[_obj,"Disable_Gesture"] remoteExec ["playActionNow", _obj];
};
_obj setVariable ["WBK_HL_CustomArmour",(_obj getVariable "WBK_HL_CustomArmour") - 50,true];
[_obj,"Flame_Hit_1"] remoteExec ["playActionNow",_obj];
};
if (!(isDamageAllowed _obj) and (isNil {_obj getVariable "IMS_ISAI"}) and !(typeOf _obj isKindOf "O_soldier_Melee_Hybrid") and !(typeOf _obj isKindOf "B_soldier_Melee_Hybrid")) exitWith {};
if ((stance _obj == "PRONE") or (gestureState _obj == "Flame_Hit_1") or !(isNil {_obj getVariable "WasHittedByFlame"})) exitWith {
_obj spawn Flame_Death_container;
_obj setVariable ["WasHittedByFlame",nil,true];
};
_obj setVariable ["WasHittedByFlame",1,true];
[_obj,"Flame_Hit_1"] remoteExec ["playActionNow",_obj];
if (isPlayer _obj) then {
[_obj,{
playSound [selectRandom ["hit_by_flame_1","hit_by_flame_2","hit_by_flame_3","hit_by_flame_4"],true];
}] remoteExec ["spawn",_obj];
};
};





Flame_Death_container = { 
_obj = _this;
_obj setVariable ["SFX_R_DisableDyingSounds",1,true];
_obj setDamage 1;
[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
[_obj,[1,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
[_obj,[0,"Burnface\addons\data\face.rvmat"]] remoteExec ["setObjectMaterial", 0, false];
[_obj,[1,"Burnface\addons\data\face.rvmat"]] remoteExec ["setObjectMaterial", 0, false];
if ((stance _obj == "STAND") or !(isNil {_obj getVariable "IMS_ISAI"})) then {
[_obj,selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3","flamethrower_burning_5","flamethrower_burning_6","flamethrower_burning_7"]] remoteExec ["switchMove", 0];
}else{
if (stance _obj == "CROUCH") then {
[_obj,"flamethrower_burning_4"] remoteExec ["switchMove", 0];
}else{
if (stance _obj == "PRONE") then {
[_obj,selectRandom ["prone_burn_left","prone_burn_right"]] remoteExec ["switchMove", 0];
};
};
};
[_obj,"Disable_Gesture"] remoteExec ["playActionNow", _obj];
[_obj,{
removeVest _this;
removeGoggles _this;
removeHeadgear _this;
if (getText (configFile >> "CfgVehicles" >> backpack _this >> "WBK_BurnEm_FlamethrowerBaloons") != "") then {
_this spawn flameTankExplode;
}else{
removeBackpack _this;
};
_this unassignItem hmd _this;
_this removeItem hmd _this;
}] remoteExec ["spawn",_obj];
_obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
if !(typeOf _obj isKindOf "Naked1") then {
[_obj,"BurnFace"] remoteExec ["setFace", 0];
_obj spawn Flame_Death_Scream;
};
};




Flame_Death_container_ArmaOne = { 
_obj = _this select 0;
if ((isBurning _obj) and (getText (configfile >> 'CfgVehicles' >> typeOf _obj >> 'moves') == 'CfgMovesMaleSdr')) then {
_obj spawn Flame_Death_container;
};
};


Flamethrower_Fired_EH = {
_unit = _this select 0;
if !(local _unit) exitWith {};
_weap = _this select 1;
_magazine = _this select 6;
if (!(isNil {_unit getVariable "WBK_FlameInUse"}) and (getText (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_IsFlamethrower") != "") and (!dialog) and !(_weap == "Throw")) exitWith {
deleteVehicle (_this select 5);
_balloonsRequired = getText (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_RequiredBackpack"); 
if ((_balloonsRequired != "") and (backpack _unit != _balloonsRequired)) exitWith {};
_value = getNumber (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_FlamethrowerDistance");
_realVal = _value + 2;
_bow_cursor_end = ((eyePos _unit) vectorAdd (_unit weaponDirection currentWeapon _unit vectorMultiply _realVal));
_ins = lineIntersectsSurfaces [ 
  eyePos _unit, 
  _bow_cursor_end, 
  _unit, 
  objNull, 
  true, 
  1, 
  "GEOM", 
  "NONE" 
 ];
if (count _ins == 0) exitWith {};
{_x setDamage 1;} forEach nearestTerrainObjects [ASLToATL _bow_cursor_end, ["BUSH","SMALL TREE"], 5, false];
{_x setDamage 1;} forEach nearestTerrainObjects [_unit, ["BUSH","SMALL TREE"], 4, false];
_firstObj = (_ins select 0 select 2);
if !(isNil "_firstObj") then {
_secObj = (_ins select 0 select 3);
if ((_firstObj isKindOf "MAN") and (alive _firstObj)) exitWith {
_firstObj remoteExec ["Flame_Death_containerSpecialEH",_firstObj];
};
if (_firstObj isKindOf "CAR") exitWith {
[_firstObj,((damage _firstObj) + 0.01)] remoteExec ["setDamage",_firstObj];
};
if (_firstObj isKindOf "StaticWeapon") exitWith {
[_firstObj,((damage _firstObj) + 0.3)] remoteExec ["setDamage",_firstObj];
};
};
};
if (_weap == "Throw") then {
switch (_magazine) do {
    case "GrenadeMolotovPSRUS": {[(_this select 5)] spawn flameMolotovEH;};
    case "GrenadeInsiendPSENG": {[(_this select 5)] spawn flameIncindieryEH;};
};
};
};


Flame_Death_Scream = {
[_this, {
if (isDedicated) exitWith {};
_soundCache = "#particlesource" createVehicleLocal position _this;
_soundCache attachTo [_this,[0,0,0],"head"];
if ((player distance _this) <= 25) then {
_soundCache say3D [
selectRandom ["burnttodeath1","burnttodeath2","burnttodeath3","burnttodeath4","burnttodeath5","burnttodeath6"], 
300, 
1, 
false, 
0];
}else{
uiSleep (0.1 + random 0.1);
_soundCache say3D [
selectRandom ["burnttodeath_distant1","burnttodeath_distant2","burnttodeath_distant3","burnttodeath_distant4","burnttodeath_distant5","burnttodeath_distant6"], 
600, 
1, 
false, 
0];
};
uiSleep 10;
deleteVehicle _soundCache;
}] remoteExec ["spawn",0];
};


flameTankExplode = {
_obj = _this;
if ((random 100) >= 60) exitWith {
_rndAnim = selectRandom ["flamethrower_tankExplodePre_1","flamethrower_tankExplodePre_2"];
[_obj, _rndAnim] remoteExec ["switchMove",0];
[_obj, _rndAnim] remoteExec ["playMove",0];
_obj disableAI "ALL";
[_obj,selectRandom ["burnttodeath3","burnttodeath6","burnttodeath4"],60] call CBA_fnc_GlobalSay3d;
[_obj, {
if (isDedicated) exitWith {};
_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
_fulgi say3D ["Bm_gas_leak",50];
_basic_param = [[0,[0,0,0]],[0,[0,0,0],[0,0,0],0,0,[0,0,0,0],0,0]];
_fulgi attachTo [_this,[0,0,0],"Spine3",true];
_fulgi setParticleCircle _basic_param # 0;
_fulgi setParticleRandom [1,[1,1,1],[2,2,3],0,0.1,[0,0,0,0.1],1,0];
_fulgi setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1],"","Billboard",1,2,[0,0,0],[0,0,0],17,10,7.9,0,[2,0.5,2],[[0,0,0,0.5],[0,0,0,1],[0,0,0,0]],[1],1,0,"","",_this];
_fulgi setDropInterval 0.001;
sleep 0.2;
_fulgi setParticleParams [["\A3\data_f\cl_exp",1,0,1],"","Billboard",1,2,[0,0,0],[0,0,0],17,10,7.9,0,[2,0.5,2],[[0,0,0,0.5],[0,0,0,1],[0,0,0,0]],[1],1,0,"","",_this];
sleep 0.2;
_fulgi setParticleRandom [0, [1, 1, 1], [5, 5, 8], 10, 0.25, [0, 0, 0, 0.1], 0, 0];
_fulgi setDropInterval 0.005;
_fulgi setParticleCircle [0, [0, 0, 0]];
_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.8,1,0,[0.15],[[1,1,1,1]],[1],0,0,"","",_this, 0, false, 0.3, [[200,100,0.005,1],[200,100,0.005,1],[200,100,0.005,1]]]; 
sleep 0.5;
deleteVehicle _fulgi;
}] remoteExec ["spawn", [0,-2] select isDedicated,false];
sleep 0.4;
_mine = createMine ["APERSMineDispenser_Mine_F", position _obj, [], 0];
_mine attachTo [_obj,[0,0,0],"Spine3"];
_mine setDamage 1;
_obj setDamage 1;
[_obj,"Disable_Gesture"] remoteExec ["playActionNow", _obj];
[_obj,"BurnFace"] remoteExec ["setFace", 0];
[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
switch (backpack _obj) do 
{
    case "41_Flammenwerfer_Balloons": {_obj remoteExec ["removeBackpack",_obj]; [_obj,"41_Flammenwerfer_Balloons_Burn"] remoteExec ["addBackpack",_obj];};
	case "M2_Flamethrower_Balloons": {_obj remoteExec ["removeBackpack",_obj]; [_obj,"M2_Flamethrower_Balloons_Burn"] remoteExec ["addBackpack",_obj];};
	case "M2_Flamethrower_Balloons_Pipe": {_obj remoteExec ["removeBackpack",_obj]; [_obj,"M2_Flamethrower_Balloons_Burn"] remoteExec ["addBackpack",_obj];};
	default {_obj remoteExec ["removeBackpack",_obj];};
};
sleep 0.1;
_source02 = "#particlesource" createVehicle (getPosATL _obj);
_source02 setParticleClass "SmallDestructionSmoke";
_source02 attachTo [_obj,[0,0,0],"spine3"];
[_source02,"igned_idle",60] call CBA_fnc_GlobalSay3d;
_source02 spawn {uiSleep 20; deleteVehicle _this;};
[_obj, [_obj vectorModelToWorld [0,400,-1000], _obj selectionPosition "head"]] remoteExec ["addForce", _obj];
_gar = "Land_Decal_ScorchMark_01_small_F" createVehicle (getpos _obj);
_gar attachTo [_obj,[0,0,0]];
detach _gar;
{
if !(_x == _obj) then {
if ((_x distance _obj) <= 3) then {
_x setVariable ["WasHittedByFlame",1,true];
};
_x remoteExec ["Flame_Death_containerSpecialEH",_x];
};
} forEach nearestObjects [_obj, ["Man"], 4];
};
if (alive _obj) then {
_obj disableAI "ALL";
[_obj,selectRandom ["burnttodeath3","burnttodeath6","burnttodeath4"],60] call CBA_fnc_GlobalSay3d;
_rndAnim = selectRandom ["flamethrower_tankExplodePre_1","flamethrower_tankExplodePre_2"];
[_obj, _rndAnim] remoteExec ["switchMove",0];
[_obj, _rndAnim] remoteExec ["playMove",0];
};
[_obj, selectRandom ["fuelTank_befexp","fuelTank_befexp_1"], 60, 4] execVM "\WBK_FlamethrowerSystem\createSoundGlobal.sqf";
[_obj,{
if (isDedicated) exitWith {};
_veloMan = _this;
_canObj = "Land_HelipadEmpty_F" createVehicleLocal position _veloMan;
_canObj attachTo [_veloMan, [0,-0.3,0],"Spine3",true];
_fireEffect = "#particlesource" createVehicleLocal position _canObj; 
_fireEffect setParticleCircle [0, [0, 0, 0]];
_fireEffect setParticleRandom [0, [0, 0, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_fireEffect setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 0.7, [0, 0, 0], [0, 0, 0.75], 5, 3, 7.9, 0.075, [0.1, 2, 4], [[1, 0.5, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _canObj];
_fireEffect setDropInterval 0.05;
_fireEffect attachTo [_canObj, [0,0,0]];
sleep 4;
deleteVehicle _canObj;
deleteVehicle _fireEffect;	
}] remoteExec ["spawn", [0,-2] select isDedicated,false];
sleep 4;
_mine = createMine ["APERSMineDispenser_Mine_F", position _obj, [], 0];
_mine attachTo [_obj,[0,0,0],"Spine3"];
_mine setDamage 1;
_obj setDamage 1;
[_obj,"Disable_Gesture"] remoteExec ["playActionNow", _obj];
[_obj,"BurnFace"] remoteExec ["setFace", 0];
[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
switch (backpack _obj) do 
{
    case "41_Flammenwerfer_Balloons": {_obj remoteExec ["removeBackpack",_obj]; [_obj,"41_Flammenwerfer_Balloons_Burn"] remoteExec ["addBackpack",_obj];};
	case "M2_Flamethrower_Balloons": {_obj remoteExec ["removeBackpack",_obj]; [_obj,"M2_Flamethrower_Balloons_Burn"] remoteExec ["addBackpack",_obj];};
	case "M2_Flamethrower_Balloons_Pipe": {_obj remoteExec ["removeBackpack",_obj]; [_obj,"M2_Flamethrower_Balloons_Burn"] remoteExec ["addBackpack",_obj];};
	default {_obj remoteExec ["removeBackpack",_obj];};
};
sleep 0.1;
_source02 = "#particlesource" createVehicle (getPosATL _obj);
_source02 setParticleClass "SmallDestructionSmoke";
_source02 attachTo [_obj,[0,0,0],"spine3"];
[_source02,"igned_idle",60] call CBA_fnc_GlobalSay3d;
_source02 spawn {uiSleep 20; deleteVehicle _this;};
[_obj, [_obj vectorModelToWorld [0,400,-1000], _obj selectionPosition "head"]] remoteExec ["addForce", _obj];
_gar = "Land_Decal_ScorchMark_01_small_F" createVehicle (getpos _obj);
_gar attachTo [_obj,[0,0,0]];
detach _gar;
{
if !(_x == _obj) then {
_x setVariable ["WasHittedByFlame",1,true];
_x remoteExec ["Flame_Death_containerSpecialEH",_x];
};
} forEach nearestObjects [_obj, ["Man"], 4];
};


Flame_Hit_container = { 
_obj = _this select 0; 
_shooter = _this select 1;
if (_obj == _shooter) exitWith {};
if (!(animationState _obj == "flamethrower_tankExplodePre_1") and !(animationState _obj == "flamethrower_tankExplodePre_2") and ((((_obj worldToModel (_shooter modelToWorld [0, 0, 0])) select 1) < 0) or (stance _obj == "PRONE")) and (getText (configFile >> "CfgVehicles" >> backpack _obj >> "WBK_BurnEm_FlamethrowerBaloons") != "")) then {
_rndSound = ["flamethrower_tank_bulletimpact_01","flamethrower_tank_bulletimpact_02","flamethrower_tank_bulletimpact_03","flamethrower_tank_bulletimpact_04","flamethrower_tank_bulletimpact_05"] call BIS_fnc_SelectRandom;
[_obj, _rndSound, 80, 3] execVM "\WBK_FlamethrowerSystem\createSoundGlobal.sqf";
_currentMag = currentMagazine _shooter;
_currentMagConf = getText (configfile >> "CfgMagazines" >> _currentMag >> "ammo");
_value = getNumber (configfile >> "CfgAmmo" >> _currentMagConf >> "hit");
_rndVal = random 100;
if ((_rndVal >= 60) and (_value >= 7)) then {
_obj spawn flameTankExplode;
};
};
};



flameMolotovEH = {
_grenadeObj = _this select 0;
_spsObj = "#particlesource" createVehicle position _grenadeObj;
_spsObj attachTo [_grenadeObj, [0, 0, 0.05]]; 
_spsObj setParticleClass "SmallDestructionFire"; 
_spsObj setDropInterval 0.01;
waitUntil {!(alive _grenadeObj)};
[_spsObj, {
if (isDedicated) exitWith {};
_particleAttach = "Land_Decal_ScorchMark_01_large_F" createVehicleLocal position _this; 
_particleAttach setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.2]; 
_particleAttach spawn {uiSleep 300; deleteVehicle _this};
_particleAttach2 = "#particlesource" createVehicleLocal position _this; 
_particleAttach2 setParticleClass "MineExplosionParticles"; 
_particleAttach2 setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.2]; 
_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
_fulgi setParticleRandom [0, [1, 1, 0], [5, 5, 8], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
_fulgi setDropInterval 0.01;
_fulgi setParticleCircle [0, [0, 0, 0]];
_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[1,1,1,1]],[1],0,0,"","",_this, 0, false, -1, [[200,100,0.005,1],[200,100,0.005,1],[200,100,0.005,1]]]; 
_fog1 = "#particlesource" createVehicleLocal getposaTL _this;
_fog1 setParticleParams [ 
        ["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, 
            [0, 0, 0], [0, 0, 0], 1, 1.25, 1, 0, 
            [1.3,1.6], [[1, 1, 1, 0.2], [1, 1, 1, 0.2], [1, 1, 1, 0.2]], [1000], 1, 0, "", "", _this, 0, false, -1, [[200,100,0.005,1],[200,100,0.005,1],[200,100,0.005,1]]
        ]; 
_fog1 setParticleRandom [3, [3, 2, 0.3], [0, 0, -0.1], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
_fog1 setParticleCircle [0.001, [0, 0, -0.12]]; 
_fog1 setDropInterval 0.01; 
_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
_smlfirelight setPosATL (getPosATL _this);
_smlfirelight setLightAmbient [1, 0.3, 0.1];
_smlfirelight setLightColor [1, 0.3, 0.1];
_smlfirelight setLightBrightness 0.51;
_smlfirelight setLightUseFlare true;
_smlfirelight setLightDayLight true;
_smlfirelight setLightFlareSize 12;
_smlfirelight setLightFlareMaxDistance 400; 
_smlfirelight say3D ["igned_idle",100];
_fog1 setParticleFire [15,2,0.1];
sleep 0.2;
deleteVehicle _particleAttach2;
sleep 0.5;
deleteVehicle _fulgi;
sleep 17;
deleteVehicle _smlfirelight;
sleep 3;
deleteVehicle _fog1;
}] remoteExec ["spawn", [0,-2] select isDedicated,false];
{ 
_isBehindGeometry = lineIntersects [ getPosATL _spsObj, eyePos _x, _spsObj, _x];
if ((alive _x) and !(_isBehindGeometry)) then {
if !(_x isKindOf "MAN") then {
_x setDamage 1;
}else{
if ((_x distance _spsObj) <= 3) then {
_x setVariable ["WasHittedByFlame",1,true];
};
_x remoteExec ["Flame_Death_containerSpecialEH",_x];
};
};
} forEach nearestObjects [_spsObj, ["Man","StaticWeapon","ReammoBox_F"], 4];
sleep 15;
deleteVehicle _spsObj;
};



flameIncindieryEH = {
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
sleep 23;
deleteVehicle _spsObj;
};