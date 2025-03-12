[ 
    "WBK_BurnEm_TankExplosion", 
    "SLIDER", 
    ["Flamethrower tank explosion chance","Flamethrower tank will only explode if it was hit with something above 9mm caliber and if the number will be above the chance value."],
    ["Burn Em","1) Main settings"],
     [0, 100, 40, 0],
    1,
    {   
        params ["_value"]; 
        WBK_BurnEm_FlameExplode_var = _value; 
    }
] call CBA_fnc_addSetting;

[ 
    "WBK_BurnEm_Bushes", 
    "CHECKBOX", 
    ["Enable ability to burn bushes?","Flamethrowers and Molotovs will activly burn all bushes in sight."],
    ["Burn Em","2) Environmental destruction"],
    true,
    1,
    {   
        params ["_value"]; 
        WBK_BurnEm_Bushes_var = _value; 
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_BurnEm_Trees", 
    "CHECKBOX", 
    ["Enable ability to burn trees? (Require CDLC)","Flamethrowers and Molotovs will set trees on fire if tree is damaged enough."],
    ["Burn Em","2) Environmental destruction"],
    false,
    1,
    {   
        params ["_value"]; 
        WBK_BurnEm_Trees_var = _value; 
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_BurnEm_Trees_Type", 
    "LIST", 
    ["What type of burned trees to use?","Select one option depending on what CDLC you have enabled, and what map you are using."],
    ["Burn Em","2) Environmental destruction"],
    [["RF", "SOG"], ["Reaction Forces","S.O.G. Prairie Fire"], 0],
    1,
    {   
        params ["_value"]; 
        WBK_BurnEm_BurnedTreesType = _value;
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_BurnEm_Napalm_Trees", 
    "CHECKBOX", 
    ["Will SOG napalm bombs burn trees? (Require CDLC)","Napalm will set trees on fire if tree is damaged enough."],
    ["Burn Em","2) Environmental destruction"],
    false,
    1,
    {   
        params ["_value"]; 
        WBK_BurnEm_SOG_NAPALM_Trees_var = _value; 
    }
] call CBA_fnc_addSetting;
WBK_Flamethrower_Array = [];

WBK_BurnEm_CreateSound = {
	params [
		["_source", objNull],
		["_sound", ""],
		["_distance",100],
		["_volume", 2]
	];
	if ((isNull _source) || (_sound == "") || !(alive _source)) exitWith {};
	[_this,{
		params [
			["_source", objNull],
			["_sound", ""],
			["_distance",100],
			["_volume", 2]
		];
		switch true do {
			case (isDedicated): {};
			case (player == _source): {playSoundUI [_sound, 0.8, 1, true, 0];};
			default {playSound3D [_sound, _source, false, getPosASL _source, _volume, 1, (_distance) + 15, 0, true];};
		};
	}] remoteExec ["call",0];
};

Flame_Death_Particles = {
	if ((isDedicated) or !(isNil "WBK_Flame_DisableParticles")) exitWith {};
	params ["_object","_killer"];
	_color = _killer call Flame_GetColorFlamethrower;
	_smlfirelight = "#lightpoint" createVehicleLocal (getpos _object);
	if (_object isKindOf "MAN") then {
		_smlfirelight attachTo [_object,[0,0,0],"spine3"];
	}else{
		_smlfirelight setPosATL (getPosATL _object);
	};
	_smlfirelight setLightDayLight true;
	_smlfirelight setLightAmbient (_color # 0);
	_smlfirelight setLightColor (_color # 0);
	_smlfirelight setLightBrightness 0.41;
	if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
		_smlfirelight setLightBrightness 4;
	}else{
		_smlfirelight setLightBrightness 0.41;
	};
	_source01  = "#particlesource" createVehiclelocal getposaTL _object; 
	_source01 setParticleRandom [0,[0.2,0.2,0],[0.4,0.4,1],1,0,[0,0,0,0.1],1,1];
	_source01 setDropInterval 0.1;
	_source01 setParticleCircle [0.2,[0,0,0]];
	_source01 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,5,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.1,0.01],[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],[1],0,0,"","",_source01, 0, false, 0.1, [[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]];
	if (_object isKindOf "MAN") then {
		_source01 attachTo [_object,[0,0,0]];
	}else{
		_source01 setPosATL (getPosATL _object);
	};
	_source01 say3D ["body_igned_idle",70];
	_source02 = "#particlesource" createVehicleLocal (getPosATL _object);
	if (_object isKindOf "MAN") then {
		_source02 attachTo [_object,[0,0,0]];
	}else{
		_source02 setPosATL (getPosATL _object);
	};
	_source02 setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],
				"",
				"Billboard",
				1,
				5,
				[0, 0, 0],
				[0,0,1],
				15,
				10,
				7.9,
				0.035,
				[0.2, 1.1, 2.2],
				[[0.01, 0.01, 0.01, 0.3],[0.01, 0.01, 0.01, 0.05]],
				[4.5],
				1,
				0,
				"",
				"",
				_source02,
				0,
				false,
				-1
				];
	_source02 setDropInterval 0.1;
	_source02 setParticleCircle [0, [0, 0, 0]];
	_source02 setParticleRandom [0.5,[0.45,0.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 = "#particlesource" createVehicleLocal (getPosATL _object);
	if (_object isKindOf "MAN") then {
		_source03 attachTo [_object,[0,0,0]];
	}else{
		_source03 setPosATL (getPosATL _object);
	};
	_source03 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
				"",
				"Billboard",
				1,
				2,
				[0, 0, 0],
				[0,0,0.5], ////moveVelocity
				15,///	rotationVelocity
				10,///weight
				7.9,///volume
				1.035,///	rubbing
				[0.4, 0.7, 1, 0.7, 0.4],
				[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],
				[0.08],
				1,
				0,
				"",
				"",
				_source03,
				260,
				false,
				0.3,
				[[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]
				];
	_source03 setDropInterval 0.1;
	_source03 setParticleCircle [0, [0, 0, 0]];
	_source03 setParticleRandom [0.5,[0.45,0.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 setParticleFire [15,0.5,0.1];
	_gar = "Land_Decal_ScorchMark_01_small_F" createVehicleLocal (getpos _object);
	_gar setPosATL [getPosATL _object select 0,getPosATL _object select 1,0]; 
	_grassCutter = "Land_ClutterCutter_medium_F" createVehicleLocal getPosATL _object;
	_grassCutter setPosATL [getPosATL _object select 0,getPosATL _object select 1,0]; 
	uiSleep 17;
	_gar say3D ["Bm_body_fireFadeout",70];
	deleteVehicle _smlfirelight;
	deleteVehicle _source01;
	deleteVehicle _source02;
	deleteVehicle _source03;
};

Flame_Death_Tree_Particles_Pre = {
	if ((isDedicated) or !(isNil "WBK_Flame_DisableParticles")) exitWith {};
	params ["_object","_killer"];
	_color = _killer call Flame_GetColorFlamethrower;
	_smlfirelight = "#lightpoint" createVehicleLocal (ASLToATL _object);
	_smlfirelight setPosATL (ASLToATL _object);
	_smlfirelight setLightDayLight true;
	_smlfirelight setLightAmbient (_color # 0);
	_smlfirelight setLightColor (_color # 0);
	_smlfirelight setLightBrightness 0.41;
	if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
		_smlfirelight setLightBrightness 1;
	}else{
		_smlfirelight setLightBrightness 0.11;
	};
	_source01  = "#particlesource" createVehiclelocal ASLToATL _object; 
	_source01 setParticleRandom [0,[0.2,0.2,0],[0.4,0.4,1],1,0,[0,0,0,0.1],1,1];
	_source01 setDropInterval 0.1;
	_source01 setParticleCircle [0.2,[0,0,0]];
	_source01 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,5,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.1,0.01],[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],[1],0,0,"","",_source01, 0, false, 0.1, [[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]];
	_source01 setPosATL (ASLToATL _object);
	_source01 say3D ["body_igned_idle",70];
	_source02 = "#particlesource" createVehicleLocal (ASLToATL _object);
	_source02 setPosATL (ASLToATL _object);
	_source02 setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],
				"",
				"Billboard",
				1,
				5,
				[0, 0, 0],
				[0,0,1],
				15,
				10,
				7.9,
				0.035,
				[0.2, 1.1, 2.2],
				[[0.01, 0.01, 0.01, 0.3],[0.01, 0.01, 0.01, 0.05]],
				[4.5],
				1,
				0,
				"",
				"",
				_source02,
				0,
				false,
				-1
				];
	_source02 setDropInterval 0.1;
	_source02 setParticleCircle [0, [0, 0, 0]];
	_source02 setParticleRandom [0.5,[0.45,0.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 = "#particlesource" createVehicleLocal (ASLToATL _object);
	_source03 setPosATL (ASLToATL _object);
	_source03 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
				"",
				"Billboard",
				1,
				2,
				[0, 0, 0],
				[0,0,0.5], ////moveVelocity
				15,///	rotationVelocity
				10,///weight
				7.9,///volume
				1.035,///	rubbing
				[0.4, 0.7, 1, 0.7, 0.4],
				[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],
				[0.08],
				1,
				0,
				"",
				"",
				_source03,
				260,
				false,
				0.3,
				[[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]
				];
	_source03 setDropInterval 0.1;
	_source03 setParticleCircle [0, [0, 0, 0]];
	_source03 setParticleRandom [0.5,[0.45,0.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 setParticleFire [15,0.5,0.1];
	uiSleep 3;
	if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
		_smlfirelight setLightBrightness 2;
	}else{
		_smlfirelight setLightBrightness 0.21;
	};
	_source02 say3D ["Bm_fireFadeout",100];
	_source02 say3D ["igned_idle",100];
	_source02 setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],
				"",
				"Billboard",
				1,
				5,
				[0, 0, 0],
				[0,0,1],
				15,
				10,
				7.9,
				0.035,
				[1.2, 2.1, 4.2],
				[[0.01, 0.01, 0.01, 0.3],[0.01, 0.01, 0.01, 0.05]],
				[4.5],
				1,
				0,
				"",
				"",
				_source02,
				0,
				false,
				-1
				];
	_source03 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
				"",
				"Billboard",
				1,
				2,
				[0, 0, 0],
				[0,0,0.5], ////moveVelocity
				15,///	rotationVelocity
				10,///weight
				7.9,///volume
				1.035,///	rubbing
				[1.4, 1.7, 2, 1.7, 1.4],
				[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],
				[0.08],
				1,
				0,
				"",
				"",
				_source03,
				260,
				false,
				0.3,
				[[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]
				];
	_source02 setParticleRandom [3,[1.45,1.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 setParticleRandom [3,[1.45,1.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	uiSleep 4;
	if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
		_smlfirelight setLightBrightness 3;
	}else{
		_smlfirelight setLightBrightness 0.31;
	};
	_source02 say3D ["Bm_fireFadeout",200];
	_source02 say3D ["igned_idle",200];
	_source02 setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],
				"",
				"Billboard",
				1,
				5,
				[0, 0, 0],
				[0,0,1],
				15,
				10,
				7.9,
				0.035,
				[2.2, 3.1, 5.2],
				[[0.01, 0.01, 0.01, 0.3],[0.01, 0.01, 0.01, 0.05]],
				[4.5],
				1,
				0,
				"",
				"",
				_source02,
				0,
				false,
				-1
				];
	_source03 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
				"",
				"Billboard",
				1,
				2,
				[0, 0, 0],
				[0,0,0.5], ////moveVelocity
				15,///	rotationVelocity
				10,///weight
				7.9,///volume
				1.035,///	rubbing
				[2.4, 2.7, 3, 2.7, 2.4],
				[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],
				[0.08],
				1,
				0,
				"",
				"",
				_source03,
				260,
				false,
				0.3,
				[[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]
				];
	_source02 setParticleRandom [5,[2.45,2.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 setParticleRandom [5,[2.45,2.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	uiSleep 5;
	if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
		_smlfirelight setLightBrightness 4;
	}else{
		_smlfirelight setLightBrightness 0.41;
	};
	_source02 setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],
				"",
				"Billboard",
				1,
				5,
				[0, 0, 0],
				[0,0,1],
				15,
				10,
				7.9,
				0.035,
				[4.2, 5.1, 6.2],
				[[0.01, 0.01, 0.01, 0.3],[0.01, 0.01, 0.01, 0.05]],
				[4.5],
				1,
				0,
				"",
				"",
				_source02,
				0,
				false,
				-1
				];
	_source03 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],
				"",
				"Billboard",
				1,
				2,
				[0, 0, 0],
				[0,0,0.5], ////moveVelocity
				15,///	rotationVelocity
				10,///weight
				7.9,///volume
				1.035,///	rubbing
				[3.4, 3.7, 4, 3.7, 3.4],
				[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],
				[0.08],
				1,
				0,
				"",
				"",
				_source03,
				260,
				false,
				0.3,
				[[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]
				];
	_source02 setParticleRandom [5,[4.45,4.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 setParticleRandom [5,[4.45,4.45,0.1],[0,0,0],1,0.01,[0,0,0,0.1],0.01,0,10];
	_source03 say3D [selectRandom ["bm_treeOnFire_1","bm_treeOnFire_2","bm_treeOnFire_3"],600];
	uiSleep 6;
	deleteVehicle _smlfirelight;
	deleteVehicle _source01;
	deleteVehicle _source02;
	deleteVehicle _source03;
};

Flame_Death_Tree_Particles = {
	if (isDedicated) exitWith {};
	params ["_object","_killer"];
	_color = _killer call Flame_GetColorFlamethrower;
	_globalMdlWrld = [0,0,6];
	_fireflies  = "#particlesource" createVehiclelocal (_object modelToWorld _globalMdlWrld); 
	_fireflies setParticleRandom [0,[0.2,0.2,0],[0.4,0.4,0.5],1,0,[0,0,0,0.1],1,1];
	_fireflies setDropInterval 0.1;
	_fireflies setParticleCircle [2,[0,0,0]];
	_fireflies setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,14,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.1],[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],[1],0,0,"","",_fireflies, 0, false, 0.1, [[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]];
	_particleAttach = "Land_Decal_ScorchMark_01_large_F" createVehicleLocal position _object; 
	_particleAttach setPosATL [getPosATL _object select 0,getPosATL _object select 1,0];
	_particleAttach setDir (random 360);
	_grassCutter = "Land_ClutterCutter_large_F" createVehicleLocal getPosATL _object;
	_grassCutter setPosATL [getPosATL _object select 0,getPosATL _object select 1,0];
	_fog1 = "#particlesource" createVehicleLocal (_object modelToWorld _globalMdlWrld); 
	_fog1 setParticleParams [ 
			["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, 
				[0, 0, 0], [0, 0, 0], 1, 1.21, 1, 0, 
				[2.3,2.6,2.3,2,1.2], [[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]], [1000], 1, 0, "", "", _fireflies, 0, false, -1, [[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]
			]; 
	_fog1 setParticleRandom [3, [3, 3, -3], [0, 0, -0.1], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
	_fog1 setParticleCircle [0.001, [0, 0, -0.12]]; 
	_fog1 setDropInterval 0.01; 
	_fog2 = "#particlesource" createVehicleLocal (_object modelToWorld _globalMdlWrld); 
	_fog2 setParticleParams [
	 ["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1], "", "Billboard", 1, 10,
				[0, 0, 0], [0, 0, 0], 1, 1.215, 1, 0,
				[3.3,3.6,3.3,3,2.2], [[0.01, 0.01, 0.01, 0.5],[0.01, 0.01, 0.01, 0.2],[0.01, 0.01, 0.01, 0.1],[0.01, 0.01, 0.01, 0.01]], [1000], 1, 0, "", "", _fireflies, 0, false
			];
	_fog2 setParticleRandom [3, [4, 4, -3], [0, 0, -0.1], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
	_fog2 setParticleCircle [0.001, [0, 0, -0.12]]; 
	_fog2 setDropInterval 0.1; 
	_smlfirelight = "#lightpoint" createVehicleLocal (_object modelToWorld _globalMdlWrld); 
	_smlfirelight setLightAmbient (_color # 0);
	_smlfirelight setLightColor (_color # 0);
	if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
		_smlfirelight setLightBrightness 6.5;
	}else{
		_smlfirelight setLightBrightness 0.81;
	};
	_smlfirelight setLightUseFlare true;
	_smlfirelight setLightDayLight true;
	_smlfirelight setLightFlareSize 10;
	_smlfirelight setLightFlareMaxDistance 400; 
	_smlfirelight say3D ["igned_idle",400];
	_fog1 setParticleFire [15,2,0.1];
	uisleep 1;
	_fog1 say3D ["igned_idle",200];
	uisleep 17;
	_fog1 setParticleFire [0,0,0.1];
	deleteVehicle _smlfirelight;
	deleteVehicle _fog1;
	_fireflies setDropInterval 0.3;
	_fireflies say3D ["Bm_fireFadeout",300];
	_fireflies say3D ["bm_embers",150];
	_fog2 setPosATL (getPosATL _object);
	_fog2 setParticleParams [
	 ["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1], "", "Billboard", 1, 15,
				[0, 0, 0], [0,0,1],
				15,
				10,
				7.9,
				0.035,
				[2,8], [[0.01, 0.01, 0.01, 0.1],[0.01, 0.01, 0.01, 0.2],[0.01, 0.01, 0.01, 0.05]], [1000], 1, 0, "", "", _fog2, 0, false
			];
	_fog2 setParticleRandom [0, [0.5, 0.5, 0], [0, 0, 0], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
	uiSleep 29;
	deleteVehicle _fog2;
	deleteVehicle _fireflies;
};

Flame_Death_ReplaceTree = {
	switch WBK_BurnEm_BurnedTreesType do {
		 case "RF": {_this call Flame_Death_ReplaceTree_RF;};
		 case "SOG": {_this call Flame_Death_ReplaceTree_SOG;};
		 default {};
	};
};

Flame_Death_ReplaceTree_RF = {
	params ["_tree","_killer","_spawnEffect"];
	_nameOfTheTree = str ((getModelInfo _tree) # 0);
	switch true do {
		case ((_nameOfTheTree find "pinuss1s_f") > -1): {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_pinuss1s_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		case ((_nameOfTheTree find "pinuss2s_f") > -1): {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_pinuss2s_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		case ((_nameOfTheTree find "pinuss2s_b_f") > -1 || (_nameOfTheTree find "populusn3s") > -1): { 
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_pinuss2s_b_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		case ((_nameOfTheTree find "ficusb1s_f") > -1): {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_ficusb1s_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		case ((_nameOfTheTree find "ficusb2s_f") > -1 || (_nameOfTheTree find "oleae2s") > -1): {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_oleae2s_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		case ((_nameOfTheTree find "fraxinusav") > -1): {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_fraxinusav2s_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		case ((_nameOfTheTree find "quercusir") > -1 || (_nameOfTheTree find "pinusp3s_f") > -1): {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_quercusir2s_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		case ((_nameOfTheTree find "poplar") > -1): {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_poplar2f_dead_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
		default {
			_burnedBush = createSimpleObject ["lxRF\props_rf\Trees\t_BroussonetiaP1s_RF.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
		};
	};
	[_tree,true] remoteExecCall ["hideObject",0];
};

Flame_Death_ReplaceTree_SOG = {
    params ["_tree","_killer","_spawnEffect"];
    _nameOfTheTree = str ((getModelInfo _tree) # 0);
    switch true do {
		case ((_nameOfTheTree find "rice_plant") > -1): {
			_particleAttach = "Land_Decal_ScorchMark_01_small_F" createVehicle position _tree; 
			_particleAttach setPosATL [position _tree select 0,position _tree select 1,0];
			_particleAttach setDir (random 360);
			_particleAttach enableSimulationGlobal false;
			_grassCutter = "Land_ClutterCutter_medium_F" createVehicle position _tree;
			_grassCutter setPosATL [position _tree select 0,position _tree select 1,0];
			_grassCutter enableSimulationGlobal false;
        };
		case ((_nameOfTheTree find "t_ficus_small_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_ficus_medium_01.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "t_ficus_medium_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_ficus_medium_01.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "b_cycas_f") > -1 || (_nameOfTheTree find "t_pritchardia_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_cocosnucifera_01.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,-18];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "t_cyathea_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_cocosnucifera_01.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,-7];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "t_cocosnucifera3s_tall_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_cocosnucifera_01.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "t_cocosnucifera2s_small_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_cocosnucifera_02.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "pine_tree_01") > -1 || (_nameOfTheTree find "t_agathis_wide_f") > -1): {
            _burnedBush = createSimpleObject ["vn\vn_plants_pmc\misc\vn_misc_burnspruce_pmc.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "t_ficus_big_01") > -1 || (_nameOfTheTree find "t_inocarpus_f") > -1 || (_nameOfTheTree find "t_ficus_big_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_ficus_big_01.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "t_ficus_big_02") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_ficus_big_02.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
		case ((_nameOfTheTree find "t_ficus_big_03") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_ficus_big_03.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (getDir _tree);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			};
        };
        case ((_nameOfTheTree find "treestump_natural_large_f") > -1 || (_nameOfTheTree find "t_ficus_big_04") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_ficus_big_04.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,0];
		     if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			 };
        };
		case ((_nameOfTheTree find "t_palaquium_f") > -1): {
            _burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_ficus_big_01.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
            _burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,-13.5];
            if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			 };
        };
		default {
			_burnedBush = createSimpleObject ["\vn\vegetation_f_vietnam_02\burned\vn_embers_t_cocosnucifera_02.p3d", [getPosWorld _tree # 0, getPosWorld _tree # 1,0]];
			_burnedBush setDir (random 360);
			_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,-5];
			if (_spawnEffect) then {
				[_burnedBush,_killer] remoteExec ["Flame_Death_Tree_Particles",[0,-2] select isDedicated,false];
			 };
		};
    };
    [_tree,true] remoteExecCall ["hideObject",0];
};

Flame_Death_containerSpecialEH = {
params ["_obj","_killer"];
if (!(alive _obj) or !(local _obj)) exitWith {};
if (getText (configfile >> 'CfgVehicles' >> typeOf _obj >> 'moves') != 'CfgMovesMaleSdr') exitWith {
	switch true do {
		case (typeOf _obj isKindOf "dev_flood_sangheili_o" || typeOf _obj isKindOf "dev_flood_carrier_o"|| typeOf _obj isKindOf "dev_flood_infection_o"): {
			[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
			[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
			[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
		};
		case (typeOf _obj isKindOf "OPTRE_FC_Elite_Undersuit" || typeOf _obj isKindOf "OPTRE_Spartan2_Soldier_Base"): {
			if (isNil {_obj getVariable "WBK_HaloCustomHp"}) exitWith {[_obj, [1, false, _killer]] remoteExec ["setDamage",2]; _obj remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];};
			if ((_obj getVariable "WBK_HaloCustomHp") <= 0) exitWith {
				[_obj,[selectRandom ["Elite_Death_1","Elite_Death_2","WBK_EliteMainWeap_Death_B"], 0, 0.2, false]] remoteExec ["switchMove",0];
				[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
				[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
				[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
			};
			_new_vv = (_obj getVariable "WBK_HaloCustomHp") - 20;
			_obj setVariable ["WBK_HaloCustomHp",_new_vv,true];
		};
		case (typeOf _obj isKindOf "WBK_Grunt_1"): {
			[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
			[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
			[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
		};
		case (typeOf _obj isKindOf "OPTRE_Jackal_base_F"): {
			[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
			[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
			[_obj,[selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3","flamethrower_burning_4","flamethrower_burning_5","flamethrower_burning_6","flamethrower_burning_7","flamethrower_tankExplodePre_1"], 0, 0.2, false]] remoteExec ["switchMove",0];
		};
		case (typeOf _obj isKindOf "TIOWSpaceMarine_Base"): {
			if ((damage _obj) >= 0.9) exitWith {
				[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
				[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
			};
			_obj setDamage ((damage _obj) + 0.02);
		};
		case (
			(typeOf _obj isKindOf "WBK_SpecialZombie_Corrupted_1") or
			(typeOf _obj isKindOf "WBK_DOS_Squig_Normal") or
			(typeOf _obj isKindOf "WBK_Headcrab_Normal") or
			(typeOf _obj isKindOf "WBK_Bullsquid_1") or
			(typeOf _obj isKindOf "WBK_HoundEye_1") or
			(typeOf _obj isKindOf "WBK_Antlion_1") or 
			(getText (configfile >> "CfgVehicles" >> typeOf _obj >> "editorSubcategory") == "dev_mutants")
		) : {
			[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
			[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
			[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
		};
		case (typeOf _obj isKindOf "WBK_DOS_Huge_ORK"): {
			if (_obj getVariable 'ORK_Health' <= 0) exitWith {
				[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
				_obj removeAllEventHandlers "HandleDamage";
				[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
			};
			_health = _obj getVariable "ORK_Health";
			_health = _health - 4;
			_obj setVariable ["ORK_Health",_health,true];
		};
		case (typeOf _obj isKindOf "WBK_SpecialZombie_Smasher_1"): {
			if (isNil {_obj getVariable "CanBeStunnedIMS"}) exitWith {
				[_obj, "Smasher_eat_voice", 120, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
				[_obj,["WBK_Smasher_HitHard", 0, 0.2, false]] remoteExec ["switchMove",0];
				_obj enableAI "MOVE";
				_obj enableAI "ANIM";
				_obj setVariable ["CanBeStunnedIMS",1,true];
				_obj spawn {uiSleep 6; _this setVariable ["CanBeStunnedIMS",nil,true];};
				_vv = _obj getVariable "WBK_SynthHP";
				_new_vv = _vv - 100;
				if (_new_vv <= 0) exitWith {[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false]; _obj removeAllEventHandlers "HitPart"; [_obj, [1, false, _killer]] remoteExec ["setDamage",2]; [_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];};
				_obj setVariable ["WBK_SynthHP",_new_vv,true];
			};
			_vv = _obj getVariable "WBK_SynthHP";
			_new_vv = _vv - 40;
			if (_new_vv <= 0) exitWith {[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false]; _obj removeAllEventHandlers "HitPart"; [_obj, [1, false, _killer]] remoteExec ["setDamage",2]; [_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];};
			_obj setVariable ["WBK_SynthHP",_new_vv,true];
		};
		case (typeOf _obj isKindOf "WBK_HaloHunter_1"): {
			if (isNil {_obj getVariable "CanBeStunnedIMS"}) exitWith {
				[_obj, "hunter_arm_melee1", 120, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
				[_obj,["Hunter_HitHard", 0, 0.2, false]] remoteExec ["switchMove",0];
				_obj enableAI "MOVE";
				_obj enableAI "ANIM";
				_obj setVariable ["CanBeStunnedIMS",1,true];
				_obj spawn {uiSleep 6; _this setVariable ["CanBeStunnedIMS",nil,true];};
				_vv = _obj getVariable "WBK_HaloCustomHp";
				_new_vv = _vv - 100;
				if (_new_vv <= 0) exitWith {[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false]; _obj removeAllEventHandlers "HitPart"; [_obj, [1, false, _killer]] remoteExec ["setDamage",2]; [_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];};
				_obj setVariable ["WBK_HaloCustomHp",_new_vv,true];
			};
			_vv = _obj getVariable "WBK_HaloCustomHp";
			_new_vv = _vv - 30;
			if (_new_vv <= 0) exitWith {[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false]; _obj removeAllEventHandlers "HitPart"; [_obj, [1, false, _killer]] remoteExec ["setDamage",2]; [_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];};
			_obj setVariable ["WBK_HaloCustomHp",_new_vv,true];
		};
	};
};
switch true do {
	case (((getText (configfile >> 'CfgWeapons' >> headgear _obj >> 'displayName') find 'Void-Helm') > -1) and !((getText (configfile >> 'CfgWeapons' >> headgear _obj >> 'displayName') find '(OPEN)') > -1)): {
		[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
		[_obj,[selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3","flamethrower_burning_4","flamethrower_burning_5","flamethrower_burning_6","flamethrower_burning_7","flamethrower_tankExplodePre_1"], 0, 0.2, false]] remoteExec ["switchMove",0];
		[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
		_deathSnd = "#particlesource" createVehicle position _this;
		_deathSnd attachTo [_obj,[0,0,0],"head"];
		[_deathSnd,selectRandom ["SolarAux_death_flamethrower_1","SolarAux_death_flamethrower_2","SolarAux_death_flamethrower_3"],190] call CBA_fnc_GlobalSay3d;
		_deathSnd spawn {uiSleep 30; deleteVehicle _this};
		[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
	};
	case (typeOf _obj isKindOf "dev_flood_combat_o"): {
		[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
		[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
		[_obj,[selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3","flamethrower_burning_4","flamethrower_burning_5","flamethrower_burning_6","flamethrower_burning_7","flamethrower_tankExplodePre_1"], 0, 0.2, false]] remoteExec ["switchMove",0];
		[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
	};
	case !(isNil {_obj getVariable "WBK_AI_ISZombie"}): {
		if (typeOf _obj isKindOf "Zombie_Special_OPFOR_Leaper_1") exitWith {
			_vv = _obj getVariable "WBK_SynthHP";
			_new_vv = _vv - 50;
			if (_new_vv <= 0) exitWith {
			_obj removeAllEventHandlers "HitPart";
			[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
			[_obj,[selectRandom ["WBK_Leaper_Death_1","WBK_Leaper_Death_2"], 0, 0.2, false]] remoteExec ["switchMove",0];
			[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
			};
			_obj setVariable ["WBK_SynthHP",_new_vv,true];
			_obj enableAI "MOVE";
		};
		[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
		[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
		[_obj,"BurnFace"] remoteExec ["setFace", 0];
		[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
		[_obj,[selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3"], 0, 0.2, false]] remoteExec ["switchMove",0];
		if (!(isNil {_obj getVariable "WBK_Zombie_CustomSounds"})) then {
			_snds = (_obj getVariable "WBK_Zombie_CustomSounds") select 4;
			[_obj, selectRandom _snds, 100, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		}else{
			[_obj, selectRandom ["plagued_burn_1","plagued_burn_2","plagued_burn_3"], 100, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
	};
	case (typeOf _obj isKindOf "WBK_MeleeOrks_1"): {
		[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
		[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
		[_obj,[selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3"], 0, 0.2, false]] remoteExec ["switchMove",0];
		[_obj,"Disable_Gesture"] remoteExec ["playActionNow", _obj];
	};
	case !(isNil {_obj getVariable "WBK_HL_CustomArmour"}): {
		if ((_obj getVariable "WBK_HL_CustomArmour") <= 0) exitWith {
		[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
		[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
		[_obj,[selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3"], 0, 0.2, false]] remoteExec ["switchMove",0];
		[_obj,"Disable_Gesture"] remoteExec ["playActionNow", _obj];
		};
		_obj setVariable ["WBK_HL_CustomArmour",(_obj getVariable "WBK_HL_CustomArmour") - 50,true];
		[_obj,"Flame_Hit_1"] remoteExec ["playActionNow",_obj];
	};
	default {
		if (!(isDamageAllowed _obj) and (isNil {_obj getVariable "IMS_ISAI"}) and !(typeOf _obj isKindOf "O_soldier_Melee_Hybrid") and !(typeOf _obj isKindOf "B_soldier_Melee_Hybrid")) exitWith {};
		if ((stance _obj == "PRONE") or (gestureState _obj == "Flame_Hit_1") or !(isNil {_obj getVariable "WasHittedByFlame"})) exitWith {
			[_obj, _killer] spawn Flame_Death_container;
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
};
};

Flame_Death_container = { 
	params ["_obj","_killer"];
	_obj setVariable ["SFX_R_DisableDyingSounds",1,true];
	[_obj, [1, false, _killer]] remoteExec ["setDamage",2];
	[_obj,[0,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
	[_obj,[1,"\WBK_FlamethrowerSystem\burnedFleshCO.paa"]] remoteExec ["setObjectTexture", 0, false];
	[_obj,[0,"Burnface\addons\data\face.rvmat"]] remoteExec ["setObjectMaterial", 0, false];
	[_obj,[1,"Burnface\addons\data\face.rvmat"]] remoteExec ["setObjectMaterial", 0, false];
	switch true do {
		case (stance _obj == "CROUCH"): {[_obj,["flamethrower_burning_4", 0, 0.2, false]] remoteExec ["switchMove",0];};
		case ((stance _obj == "STAND") or !(isNil {_obj getVariable "IMS_ISAI"})): {[_obj,[selectRandom ["flamethrower_burning_1","flamethrower_burning_2","flamethrower_burning_3","flamethrower_burning_5","flamethrower_burning_6","flamethrower_burning_7","flamethrower_tankExplodePre_1"], 0, 0.2, false]] remoteExec ["switchMove",0];}
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
	[_obj,_killer] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
	if !(typeOf _obj isKindOf "Naked1") then {
		[_obj,"BurnFace"] remoteExec ["setFace", 0];
		_obj spawn Flame_Death_Scream;
	};
};

Flame_Death_container_ArmaOne = { 
	params ["_obj"];
	if ((isBurning _obj) and (getText (configfile >> 'CfgVehicles' >> typeOf _obj >> 'moves') == 'CfgMovesMaleSdr')) then {
		[_obj,_obj] spawn Flame_Death_container;
	};
};

Flamethrower_Fired_EH = {
	_unit = _this select 0;
	if !(local _unit) exitWith {};
	_weap = _this select 1;
	switch true do {
		case (_weap == "Throw"): {
			_magazine = _this select 6;
			switch (_magazine) do {
				case "GrenadeMolotovPSRUS": {[(_this select 5)] spawn flameMolotovEH;};
				case "GrenadeInsiendPSENG": {[(_this select 5)] spawn flameIncindieryEH;};
				default {};
			};
		};
		case (!(isNil {_unit getVariable "WBK_FlameInUse"}) and (getText (_unit call WBK_GetCurrentMuzzle >> "WBK_BurnEm_IsFlamethrower") != "") and (!dialog) and !(_weap == "Throw")): {
			deleteVehicle (_this select 5);
			_balloonsRequired = getText (_unit call WBK_GetCurrentMuzzle >> "WBK_BurnEm_RequiredBackpack"); 
			if ((_balloonsRequired != "") and (backpack _unit != _balloonsRequired)) exitWith {};
			_value = getNumber (_unit call WBK_GetCurrentMuzzle >> "WBK_BurnEm_FlamethrowerDistance");
			_realVal = _value + 2;
			_bow_cursor_end = ((eyePos _unit) vectorAdd (_unit weaponDirection currentWeapon _unit vectorMultiply _realVal));
			_ins = lineIntersectsSurfaces [ 
			  eyePos _unit, 
			  _bow_cursor_end, 
			  _unit, 
			  objNull, 
			  true, 
			  1, 
			  "FIRE", 
			  "GEOM" 
			 ];
			if (count _ins == 0) exitWith {_unit setVariable ["WBK_FlamethrowerDistanceVar",_value,true];};
			if (((player distance (ASLToATL (_ins select 0 select 0))) - 2) <= 4) then {
				_unit setVariable ["WBK_FlamethrowerDistanceVar",4,true];
			}else{
				_unit setVariable ["WBK_FlamethrowerDistanceVar",(player distance (ASLToATL (_ins select 0 select 0))) - 2,true];
			};
			_firstObj = (_ins select 0 select 2);
			if (WBK_BurnEm_Bushes_var) then {
				{
					if (alive _x) then {
						_burnedBush = createSimpleObject ["A3\plants_f\Bush\b_ficusC2d_F.p3d", getPosWorld _x];
						_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,-1];
						_burnedBush setDir (random 360);
						[_burnedBush,_unit] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
						_x setDamage 1;
						_x spawn {
							uiSleep 1;
							[_this,true] remoteExecCall ["hideObject",0];
						};
					};
				} forEach nearestTerrainObjects [ASLToATL (_ins select 0 select 0), ["BUSH","SMALL TREE"], 3, false];
			};
			if (WBK_BurnEm_Trees_var) then {
				{
					if (alive _x) then {
						switch true do {
							case ((damage _x) >= 0.9): {};
							case ((damage _x) >= 0.8): {
								_x setDamage 0.9;
								[_x,_unit,(_ins select 0 select 0)] spawn {
									params ["_tree","_unit","_hitPos"];
									[_hitPos,_unit] remoteExec ["Flame_Death_Tree_Particles_Pre",[0,-2] select isDedicated,false];
									uiSleep 16;
									_tree setDamage 0.9;
									[_tree,_unit,true] call Flame_Death_ReplaceTree;
									uiSleep 1;
									_tree setDamage 1;
								};
							};
							default {
								_x setDamage ((damage _x) + 0.1);
							};
						};
					};
				} forEach nearestTerrainObjects [ASLToATL (_ins select 0 select 0), ["TREE"], 4, false];
			};
			if !(isNil "_firstObj") then {
				switch true do {
					case ((_firstObj isKindOf "MAN") and (alive _firstObj)): {[_firstObj,_unit] remoteExec ["Flame_Death_containerSpecialEH",_firstObj];};
					case (_firstObj isKindOf "CAR"): {[_firstObj,((damage _firstObj) + 0.01)] remoteExec ["setDamage",_firstObj];};
					case (_firstObj isKindOf "StaticWeapon"): {[_firstObj,((damage _firstObj) + 0.3)] remoteExec ["setDamage",_firstObj];};
				};
			};
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
if (stance _obj == "STAND") then {
	[_obj,["Acts_Shocked_3", 0, 0.2, false]] remoteExec ["switchMove",0];
	[_obj, 1.5] remoteExec ["setAnimSpeedCoef",0];
};
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
uiSleep 0.2;
_fulgi setParticleParams [["\A3\data_f\cl_exp",1,0,1],"","Billboard",1,2,[0,0,0],[0,0,0],17,10,7.9,0,[2,0.5,2],[[0,0,0,0.5],[0,0,0,1],[0,0,0,0]],[1],1,0,"","",_this];
uiSleep 0.2;
_fulgi setParticleRandom [0, [1, 1, 1], [5, 5, 8], 10, 0.25, [0, 0, 0, 0.1], 0, 0];
_fulgi setDropInterval 0.005;
_fulgi setParticleCircle [0, [0, 0, 0]];
_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.8,1,0,[0.15],[[1,1,1,1]],[1],0,0,"","",_this, 0, false, 0.3, [[200,100,0.005,1],[200,100,0.005,1],[200,100,0.005,1]]]; 
uiSleep 0.5;
deleteVehicle _fulgi;
}] remoteExec ["spawn", [0,-2] select isDedicated,false];
uiSleep 0.4;
_mine = createMine ["APERSMineDispenser_Mine_F", position _obj, [], 0];
_mine attachTo [_obj,[0,0,0],"Spine3"];
_mine setDamage 1;
_obj setDamage 1;
[_obj,["AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon", 0, 0.2, false]] remoteExec ["switchMove",0];
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
uiSleep 0.1;
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
[_x,_obj] remoteExec ["Flame_Death_containerSpecialEH",_x];
};
} forEach nearestObjects [_obj, ["Man"], 4];
};
if (alive _obj) then {
_obj disableAI "ALL";
[_obj,selectRandom ["burnttodeath3","burnttodeath6","burnttodeath4"],60] call CBA_fnc_GlobalSay3d;
if (stance _obj == "STAND") then {
	[_obj,[selectRandom ["flamethrower_tankExplodePre_1","flamethrower_tankExplodePre_2"], 0, 0.2, false]] remoteExec ["switchMove",0];
};
};
[_obj,{
if (isDedicated) exitWith {};
_veloMan = _this;
_canObj = "Land_HelipadEmpty_F" createVehicleLocal position _veloMan;
_canObj attachTo [_veloMan, [0,-0.3,0],"Spine3",true];
_canObj say3D [selectRandom ["fuelTank_befexp","fuelTank_befexp_1"],80];
_fireEffect = "#particlesource" createVehicleLocal position _canObj; 
_fireEffect setParticleCircle [0, [0, 0, 0]];
_fireEffect setParticleRandom [0, [0, 0, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_fireEffect setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 0.7, [0, 0, 0], [0, 0, 0.75], 5, 3, 7.9, 0.075, [0.1, 2, 4], [[1, 0.5, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _canObj];
_fireEffect setDropInterval 0.05;
_fireEffect attachTo [_canObj, [0,0,0]];
uiSleep 4;
deleteVehicle _canObj;
deleteVehicle _fireEffect;	
}] remoteExec ["spawn", [0,-2] select isDedicated,false];
uiSleep 4;
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
uiSleep 0.1;
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
[_x,_obj] remoteExec ["Flame_Death_containerSpecialEH",_x];
};
} forEach nearestObjects [_obj, ["Man"], 4];
};

Flame_Hit_container = { 
	_obj = _this select 0; 
	_shooter = _this select 1;
	if (_obj == _shooter) exitWith {};
	if (!(animationState _obj == "flamethrower_tankExplodePre_1") and !(animationState _obj == "flamethrower_tankExplodePre_2") and ((((_obj worldToModel (_shooter modelToWorld [0, 0, 0])) select 1) < 0) or (stance _obj == "PRONE")) and (getText (configFile >> "CfgVehicles" >> backpack _obj >> "WBK_BurnEm_FlamethrowerBaloons") != "")) then {
		[_obj,selectRandom ["WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_tank_bulletimpact_01.wav","WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_tank_bulletimpact_02.wav","WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_tank_bulletimpact_03.wav","WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_tank_bulletimpact_04.wav","WBK_FlamethrowerSystem\flameThrowerSounds\flamethrower_tank_bulletimpact_05.wav"],80] call WBK_BurnEm_CreateSound;
		_currentMag = currentMagazine _shooter;
		_currentMagConf = getText (configfile >> "CfgMagazines" >> _currentMag >> "ammo");
		_value = getNumber (configfile >> "CfgAmmo" >> _currentMagConf >> "hit");
		_rndVal = random 100;
		if ((_rndVal <= WBK_BurnEm_FlameExplode_var) and (_value >= 7)) then {
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
	[_spsObj,[selectRandom ["molotov_throw_1","molotov_throw_2","molotov_throw_3"],80]] remoteExecCall ["say3D",0];
	waitUntil {!(alive _grenadeObj)};
	[_spsObj,{
		if (isDedicated) exitWith {};
		_fireflies  = "#particlesource" createVehiclelocal getposaTL _this; 
		_fireflies setParticleRandom [0,[0.2,0.2,0],[0.4,0.4,0.5],1,0,[0,0,0,0.1],1,1];
		_fireflies setDropInterval 0.1;
		_fireflies setParticleCircle [2,[0,0,0]];
		_fireflies setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,14,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.1],[[1,0.2,0,1]],[1],0,0,"","",_this, 0, false, 0.1, [[255,40,0,1],[255,40,0,1],[255,40,0,1]]];
		_particleAttach = "Land_Decal_ScorchMark_01_large_F" createVehicleLocal position _this; 
		_particleAttach setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.2]; 
		_particleAttach spawn {uiSleep 300; deleteVehicle _this};
		_grassCutter = "Land_ClutterCutter_large_F" createVehicleLocal getPosATL _this;
		_grassCutter setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.2]; 
		_grassCutter spawn {uiSleep 300; deleteVehicle _this};
		_particleAttach2 = "#particlesource" createVehicleLocal position _this; 
		_particleAttach2 setParticleClass "MineExplosionParticles"; 
		_particleAttach2 setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.2]; 
		_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
		_fulgi setParticleRandom [0, [1, 1, 0], [5, 5, 8], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
		_fulgi setDropInterval 0.01;
		_fulgi setParticleCircle [0, [0, 0, 0]];
		_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[1,0.2,0,1]],[1],0,0,"","",_this, 0, false, 0.3, [[255,40,0,1],[255,40,0,1],[255,40,0,1]]]; 
		_fog1 = "#particlesource" createVehicleLocal getposaTL _this;
		_fog1 setParticleParams [ 
				["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, 
					[0, 0, 0], [0, 0, 0], 1, 1.25, 1, 0, 
					[1.3,1.6], [[1, 0.2, 0, 0.2], [1, 1, 1, 0.2], [1, 1, 1, 0.2]], [1000], 1, 0, "", "", _this, 0, false, -1, [[255,40,0,1],[255,40,0,1],[255,40,0,1]]
				]; 
		_fog1 setParticleRandom [3, [3, 2, 0.3], [0, 0, -0.1], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
		_fog1 setParticleCircle [0.001, [0, 0, -0.12]]; 
		_fog1 setDropInterval 0.01; 
		_fog2 = "#particlesource" createVehicleLocal getposaTL _this;
		_fog2 setParticleParams [
		 ["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1], "", "Billboard", 1, 10,
					[0, 0, 0], [0, 0, 0], 1, 1.275, 1, 0,
					[5,3], [[0.01, 0.01, 0.01, 0.2]], [1000], 1, 0, "", "", _this, 0, false
				];
		_fog2 setParticleRandom [3, [2.5, 1.5, 0.1], [0, 0, 0.8], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
		_fog2 setParticleCircle [0.001, [0, 0, -0.12]]; 
		_fog2 setDropInterval 0.1; 
		_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
		_smlfirelight setPosATL (getPosATL _this);
		_smlfirelight setLightAmbient [1, 0.2, 0];  
		_smlfirelight setLightColor [1, 0.2, 0];  
		if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
			_smlfirelight setLightBrightness 6.5;
		}else{
			_smlfirelight setLightBrightness 0.81;
		};
		_smlfirelight setLightUseFlare true;
		_smlfirelight setLightDayLight true;
		_smlfirelight setLightFlareSize 10;
		_smlfirelight setLightFlareMaxDistance 400; 
		_smlfirelight say3D ["igned_idle",100];
		_fog1 setParticleFire [15,1,0.1];
		uisleep 0.2;
		deleteVehicle _particleAttach2;
		uisleep 0.5;
		deleteVehicle _fulgi;
		uisleep 17;
		deleteVehicle _smlfirelight;
		_fog1 say3D ["Bm_fireFadeout",100];
		uisleep 3;
		deleteVehicle _fog1;
		deleteVehicle _fog2;
		deleteVehicle _fireflies;
	}] remoteExec ["spawn",0];
	{ 
		_isBehindGeometry = lineIntersects [ getPosATL _spsObj, eyePos _x, _spsObj, _x];
		if ((alive _x) and !(_isBehindGeometry)) then {
			switch true do {
				case !(_x isKindOf "MAN"): {_x setDamage 1;};
				default {
					if ((_x distance _spsObj) <= 3) then {
						_x setVariable ["WasHittedByFlame",1,true];
					};
					[_x,_spsObj] remoteExec ["Flame_Death_containerSpecialEH",_x];
				};
			};
		};
	} forEach nearestObjects [_spsObj, ["Man","StaticWeapon","ReammoBox_F"], 4];
	if (WBK_BurnEm_Bushes_var) then {
		{
			if (alive _x) then {
				_burnedBush = createSimpleObject ["A3\plants_f\Bush\b_ficusC2d_F.p3d", getPosWorld _x];
				_burnedBush setDir (random 360);
				[_burnedBush,_spsObj] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
				_x setDamage 1;
			};
		} forEach nearestTerrainObjects [_spsObj, ["BUSH","SMALL TREE"], 4, false];
	};
	if (WBK_BurnEm_Trees_var) then {
		{
			if ((alive _x) && ((damage _x) < 0.9)) then {
				_x setDamage 0.9;
				[_x,_spsObj,getPosASL _spsObj] spawn {
					params ["_tree","_unit","_hitPos"];
					[_hitPos,_unit] remoteExec ["Flame_Death_Tree_Particles_Pre",[0,-2] select isDedicated,false];
					uiSleep 17;
					_tree setDamage 0.9;
					[_tree,_unit,true] call Flame_Death_ReplaceTree;
					uiSleep 1;
					_tree setDamage 1;
				};
			};
		} forEach nearestTerrainObjects [_spsObj, ["TREE"], 5, false];
	};
	uiSleep 15;
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
		_grassCutter = "Land_ClutterCutter_medium_F" createVehicleLocal getPosATL _this;
		_grassCutter setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.2]; 
		_grassCutter spawn {uiSleep 300; deleteVehicle _this};
		_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
		_fulgi setParticleRandom [0, [1, 1, 0], [5, 5, 8], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
		_fulgi setDropInterval 0.005;
		_fulgi setParticleCircle [0, [0, 0, 0]];
		_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,1,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[1,1,1,1]],[1],0,0,"","",_this, 0, false, -1, [[200,100,0.005,1],[200,100,0.005,1],[200,100,0.005,1]]]; 
		_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
		_smlfirelight setPosATL (getPosATL _this);
		_smlfirelight setLightAmbient [1, 0.3, 0.1];
		_smlfirelight setLightColor [1, 0.3, 0.1];
		if (dayTime >= WBK_Flamethrowers_sunrise && dayTime <= WBK_Flamethrowers_sunset) then {
			_smlfirelight setLightBrightness 6.5;
		}else{
			_smlfirelight setLightBrightness 0.81;
		};
		_smlfirelight setLightUseFlare true;
		_smlfirelight setLightDayLight true;
		_smlfirelight setLightFlareSize 12;
		_smlfirelight setLightFlareMaxDistance 400; 
		_particleAttach2 = "#particlesource" createVehicleLocal position _this; 
		_particleAttach2 setParticleClass "CannonFired1";
		_particleAttach2 setPosATL [getPosATL _this select 0,getPosATL _this select 1,(getPosATL _this select 2) + 0.1]; 
		_particleAttach2 setParticleFire [15,2,0.1];
		uiSleep 23;
		deleteVehicle _smlfirelight;
		deleteVehicle _fulgi;
		deleteVehicle _particleAttach2;
	}] remoteExec ["spawn", [0,-2] select isDedicated,false];
	{ 
		_isBehindGeometry = lineIntersects [ getPosATL _spsObj, eyePos _x, _spsObj, _x];
		if ((alive _x) and !(_isBehindGeometry)) then {
			switch true do {
				case !(_x isKindOf "MAN"): {_x setDamage 1;};
				default {
					if ((_x distance _spsObj) <= 3) then {
						_x setVariable ["WasHittedByFlame",1,true];
					};
					[_x,_spsObj] remoteExec ["Flame_Death_containerSpecialEH",_x];
				};
			};
		};
	} forEach nearestObjects [_spsObj, ["Man","StaticWeapon","ReammoBox_F"], 4];
	{
		if (alive _x) then {
			_burnedBush = createSimpleObject ["A3\plants_f\Bush\b_ficusC2d_F.p3d", getPosWorld _x];
			_burnedBush setDir (random 360);
			[_burnedBush,_spsObj] remoteExec ["Flame_Death_Particles",[0,-2] select isDedicated,false];
			_x setDamage 1;
		};
	} forEach nearestTerrainObjects [_spsObj, ["BUSH","SMALL TREE"], 4, false];
	uiSleep 23;
	deleteVehicle _spsObj;
};

Flame_GetColorFlamethrower = {
	params ["_unit"];
	if (isArray (_unit call WBK_GetCurrentMuzzle >> "WBK_BurnEm_FlamethrowerColor")) exitWith {
		_colorVars = getArray (_unit call WBK_GetCurrentMuzzle >> "WBK_BurnEm_FlamethrowerColor");
		_colorVars
	};
	_colorVars = [[1, 0.2, 0],[255,40,0,1]];
	_colorVars
};

WBK_GetCurrentMuzzle = {
	if (currentWeapon _this == currentMuzzle _this) exitWith {
		_muzzle = (configFile >> "CfgWeapons" >> currentWeapon _this);
		_muzzle
	};
	_muzzle = (configFile >> "CfgWeapons" >> currentWeapon _this >> currentMuzzle _this);
	_muzzle
};

WBK_Flamethrowers_sunrise = (date call BIS_fnc_sunriseSunsetTime) select 0;
WBK_Flamethrowers_sunset = (date call BIS_fnc_sunriseSunsetTime) select 1;

WBK_Sog_Napalm_EnvDamage = {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_projectile","_magazine","_gunner"];
	if (getText (configfile >> "CfgAmmo" >> _ammo >> "craterEffects") != "vn_vfx_napalm_small_fire_effects") exitWith {};
	_projectile addEventHandler ["Explode", {
		params ["_projectile", "_pos", "_velocity"];
		_pos spawn {
			[_this,{
				if (isDedicated) exitWith {};
				_fireflies  = "#particlesource" createVehiclelocal _this; 
				_fireflies setPosATL [getPosATL _fireflies # 0,getPosATL _fireflies # 1, 0];
				_color = [[1, 0.2, 0],[255,40,0,1]];
				_fireflies setParticleRandom [0,[2.2,2.2,0],[2.4,2.4,0.5],1,0,[0,0,0,0.1],1,1];
				_fireflies setDropInterval 0.1;
				_fireflies setParticleCircle [5,[0,0,0]];
				_fireflies setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,14,[0,0,14],[0,0,0.5],13,1.3,1,0,[0.1,0.3],[[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.7],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,1],[(_color # 0) # 0,(_color # 0) # 1,(_color # 0) # 2,0.01]],[1],0,0,"","",_fireflies, 0, false, 0.1, [[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.7],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,1],[(_color # 1) # 0,(_color # 1) # 1,(_color # 1) # 2,0.01]]];
				_fireflies say3D ["bm_embers",450];
				uiSleep 20;
				_fireflies say3D ["bm_embers",450];
				uiSleep 20;
				_fireflies say3D ["bm_embers",450];
				uiSleep 20;
				_fireflies say3D ["bm_embers",450];
				uiSleep 20;
				_fireflies say3D ["bm_embers",450];
				uiSleep 100;
				deleteVehicle _fireflies;
			}] remoteExec ["spawn",[0,-2] select isDedicated];
			{
				if (alive _x) then {
					_burnedBush = createSimpleObject ["A3\plants_f\Bush\b_ficusC2d_F.p3d", getPosWorld _x];
					_burnedBush setPosATL [getPosATL _burnedBush # 0, getPosATL _burnedBush # 1,-0.5];
					_burnedBush setDir (random 360);
					_particleAttach = "Land_Decal_ScorchMark_01_large_F" createVehicle position _x; 
					_particleAttach setPosATL [position _x select 0,position _x select 1,0];
					_particleAttach setDir (random 360);
					_grassCutter = "Land_ClutterCutter_large_F" createVehicle position _x;
					_grassCutter setPosATL [position _x select 0,position _x select 1,0];
					[_x,true] remoteExecCall ["hideObject",0];
					_x setDamage 1;
				};
				uiSleep 0.1;
			} forEach nearestTerrainObjects [_this, ["BUSH","SMALL TREE"], 40, false,true];
			{ 
				if (alive _x) then {
					_particleAttach = "Land_Decal_ScorchMark_01_large_F" createVehicle position _x; 
					_particleAttach setPosATL [position _x select 0,position _x select 1,0];
					_particleAttach setDir (random 360);
					_grassCutter = "Land_ClutterCutter_large_F" createVehicle position _x;
					_grassCutter setPosATL [position _x select 0,position _x select 1,0];
					[_x,_x,false] call Flame_Death_ReplaceTree; 
					_x setDamage 1; 
				}; 
				uiSleep 0.1;
			} forEach nearestTerrainObjects [_this, ["TREE"], 40, false,true]; 
		};
	}];
};