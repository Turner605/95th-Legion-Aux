params ["_player"];

private _unit = objNull;

if (isRemoteControlling _player) then {
	_unit = remoteControlled _player;
} else {
	_unit = _player;
};

if (!(_unit call AUX_95th_fnc_checkCanJump)) exitWith {};
if (_unit call AUX_95th_fnc_checkIsInHouse) exitWith {systemChat "No free space to make a jump";};

if (
	(gestureState _unit == "Exo_Gest_Jump_Back") or
	(gestureState _unit == "Exo_Gest_Jump_Left") or
	(gestureState _unit == "Exo_Gest_Jump_Right") or
	(gestureState _unit == "Exo_Gest_Jump_Front") or 
	(gestureState _unit == "Exo_Gest_Jump_Back_unarmed") or 
	(gestureState _unit == "Exo_Gest_Jump_Left_unarmed") or
	(gestureState _unit == "Exo_Gest_Jump_Right_unarmed") or
	(gestureState _unit == "Exo_Gest_Jump_Front_unarmed") or 
	!(alive _unit) or 
	!(isNull objectParent _unit) or
	(lifeState _unit == "INCAPACITATED") or 
	(stance _unit == "PRONE") or 
	!(isTouchingGround _unit) or
	(isNull _unit) or
	(animationState _unit == "MAINWEAPON_Vault_Fast") or 
	(animationState _unit == "PISTOL_Vault_Fast") or 
	(animationState _unit == "UNARMED_Vault_Fast") or 
	(animationState _unit == "MAINWEAPON_Vault_Slow") or 
	(animationState _unit == "PISTOL_Vault_Fast") or 
	(animationState _unit == "UNARMED_Vault_Slow") or 
	(animationState _unit == "MAINWEAPON_Vault_Little") or 
	(animationState _unit == "PISTOL_Vault_Little") or 
	(animationState _unit == "UNARMED_Vault_Little") or 
	(animationState _unit == "UNARMED_Vault_Middle") or 
	(animationState _unit == "PISTOL_Vault_Middle") or 
	(animationState _unit == "MAINWEAPON_Vault_Middle") or 
	(animationState _unit == "MAINWEAPON_Vault_Middle_OVER") or 
	(animationState _unit == "PISTOL_Vault_Middle_OVER") or 
	(animationState _unit == "UNARMED_Vault_Middle_OVER") or 
	(animationState _unit == "MAINWEAPON_Climb_ON") or 
	(animationState _unit == "UNARMED_Climb_ON") or 
	(animationState _unit == "MAINWEAPON_Climb_ON_OVER") or 
	(animationState _unit == "UNARMED_Climb_ON_OVER") or 
	(animationState _unit == "UNARMED_In_Air_Grab_MIDDLE") or 
	(animationState _unit == "UNARMED_In_Air_Grab_HIGH") or 
	(animationState _unit == "UNARMED_JUMP_Land_Roll") or 
	(animationState _unit == "MAINWEAPON_JUMP_Land_Roll") or 
	(animationState _unit == "PISTOL_JUMP_Land_Roll") or
	(animationState _unit == "PISTOL_Slide") or
	(animationState _unit == "MAINWEAPON_Slide") or
	(animationState _unit == "Assasin_udar_Main") or
	(animationState _unit == "Assasin_udar_Unarmed")
) exitWith {};

if ((currentWeapon _unit == primaryWeapon _unit) and !(currentWeapon _unit == "")) then {
	[_unit,"Assasin_Jump_MainWeap"] remoteExec ['switchMove'];
	[_unit,"Assasin_Jump_MainWeap"] remoteExec ['playMoveNow'];
	_unit playMove "AfalPercMstpSrasWrflDnon";
	[_unit, [0,7,2]] remoteExec ["setVelocityModelSpace", _unit];
}else{
	[_unit,"Assasin_Jump_Unarmed"] remoteExec ['switchMove'];
	[_unit,"Assasin_Jump_Unarmed"] remoteExec ['playMoveNow'];
};

sleep 0.5;

if (!(animationState _unit == "Assasin_Jump_MainWeap") and !(animationState _unit == "Assasin_Jump_Unarmed")) exitWith {};

// [_unit, selectRandom ["assasin_grenade_01","assasin_grenade_02","assasin_grenade_03","assasin_grenade_04"], 100] call CBA_fnc_GlobalSay3d;

[_unit, [0,7,9.6]] remoteExec ["setVelocityModelSpace", _unit];

[_unit, "longfall_land_01", 35] call CBA_fnc_globalSay3d;

_unit spawn {
	_this setVariable ["canMakeAttack",1]; 
	_this setVariable ["actualSwordBlock",0, true]; 
	_this setVariable ['IMS_IsUnitInvicibleScripted',1,true];
	_this setVariable ["WBK_forceShieldS",1]; 

	sleep 0.35;

	_this setVariable ["canMakeAttack",0]; 
	_this setVariable ["actualSwordBlock",0, true]; 
	_this setVariable ['IMS_IsUnitInvicibleScripted',nil,true];

	waitUntil {!(alive _this) or (isTouchingGround _this)};

	_this setVariable ["WBK_forceShieldS",nil]; 
	// [_this, selectRandom ["assasin_pain_01","assasin_pain_02","assasin_pain_03","assasin_pain_04","assasin_pain_05","assasin_pain_06","assasin_pain_07","assasin_pain_08","assasin_pain_09","assasin_pain_10"], 100] call CBA_fnc_GlobalSay3d;
	// [_this, selectRandom ["longfall_land_03","longfall_land_02"], 35, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
	[_this, selectRandom ["longfall_land_03","longfall_land_02"], 35] call CBA_fnc_globalSay3d;

	uiSleep 0.05;

	if (
		(isNull _this) or
		(animationState _this == "MAINWEAPON_Vault_Fast") or 
		(animationState _this == "PISTOL_Vault_Fast") or 
		(animationState _this == "UNARMED_Vault_Fast") or 
		(animationState _this == "MAINWEAPON_Vault_Slow") or 
		(animationState _this == "PISTOL_Vault_Fast") or 
		(animationState _this == "UNARMED_Vault_Slow") or 
		(animationState _this == "MAINWEAPON_Vault_Little") or 
		(animationState _this == "PISTOL_Vault_Little") or 
		(animationState _this == "UNARMED_Vault_Little") or 
		(animationState _this == "UNARMED_Vault_Middle") or 
		(animationState _this == "PISTOL_Vault_Middle") or 
		(animationState _this == "MAINWEAPON_Vault_Middle") or 
		(animationState _this == "MAINWEAPON_Vault_Middle_OVER") or 
		(animationState _this == "PISTOL_Vault_Middle_OVER") or 
		(animationState _this == "UNARMED_Vault_Middle_OVER") or 
		(animationState _this == "MAINWEAPON_Climb_ON") or 
		(animationState _this == "UNARMED_Climb_ON") or 
		(animationState _this == "MAINWEAPON_Climb_ON_OVER") or 
		(animationState _this == "UNARMED_Climb_ON_OVER") or 
		(animationState _this == "UNARMED_In_Air_Grab_MIDDLE") or 
		(animationState _this == "UNARMED_In_Air_Grab_HIGH") or 
		(animationState _this == "UNARMED_JUMP_Land_Roll") or 
		(animationState _this == "MAINWEAPON_JUMP_Land_Roll") or 
		(animationState _this == "PISTOL_JUMP_Land_Roll") or
		(animationState _this == "PISTOL_Slide") or
		(animationState _this == "MAINWEAPON_Slide")
	) exitWith {};

	if ((currentWeapon _this == primaryWeapon _this) and !(currentWeapon _this == "")) then {
		[_this,"AssasinLand_Heavy"] remoteExec ['switchMove'];
		[_this,"AssasinLand_Heavy"] remoteExec ['playMoveNow'];
		_this playMove "AmovPercMstpSrasWrflDnon";
	}else{
		if ((currentWeapon _this == handgunWeapon _this) and !(currentWeapon _this == "")) then {
			[_this,"AssasinLand_Light_PIST"] remoteExec ['switchMove'];
			[_this,"AssasinLand_Light_PIST"] remoteExec ['playMoveNow'];
			_this playMove "AmovPercMstpSrasWpstDnon";
		}else{
			[_this,"AssasinLand_Light"] remoteExec ['switchMove'];
			[_this,"AssasinLand_Light"] remoteExec ['playMoveNow'];
			_this playMove "AmovPercMstpSnonWnonDnon";
		};
	};

	_electra = "#particlesource" createVehicle position _this; 
	_electra setParticleClass "HDustVTOL1"; 
	_electra attachTo [_this,[0,0,2]];  
	detach _electra;
	sleep 0.5;
	deleteVehicle _electra;
};