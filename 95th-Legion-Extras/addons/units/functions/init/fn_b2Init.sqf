params ["_unit"];

if (isPlayer _this) exitWith {};

_unit setSkill 1;
_unit setSpeaker "NoVoice";
_unit allowDamage false;
_unit playActionNow "WBK_Droids_B2_Idle";
_unit setUnitPos "UP";
_unit setAmmo [currentWeapon _unit, 10];
_unit allowSprint false;

if (isNil {_this getVariable "Droid_Health"}) then {
	if !(isNil "WBK_LambsPresent") then {
		(group _this) setVariable ["lambs_danger_disableGroupAI", true];
		_this setVariable ["lambs_danger_disableAI", true];
	};
	_this setVariable ["WBK_Droids_VoiceType","WBK_Droids\sounds\b2\"];
	_this setVariable ["disableUnitSFX",true];
	_this setVariable ["WBK_DAH_DisableAnim_Death",true];
	_this setVariable ["WBK_DAH_DisableAnim_Hit",true];
	_this setVariable ["WBK_BloodMod_Disable",true];
	_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
	_this setVariable ["WBK_AmountOfAmmunition",(_value) + 1];
	_this setVariable ["Droid_Health",parseNumber WBK_Droids_B2_Health,true];
	if !(isNil "WBK_3ASPresent") then {
		[_this, primaryWeapon _this] call WBK_3AS_SwapWeapons;
	};
};

[_unit] call crowsEW_spectrum_fnc_initDroneSignals;

_unit addEventHandler ["HandleDamage", {
	params ["_unit", "_selection", "_damage", "_source"];

	if (!(_unit == _source) && (alive _unit)) then {
		_rndHitAnim = random 100;

		if ((_rndHitAnim >= 95) and !(animationState _unit == "B2_SupperBattleDroid_hit")) then {
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

_this addEventHandler ["Suppressed", {
	params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
	if ((_unit == _instigator) || (_distance > 10)) exitWith {};
	{_x reveal [_shooter,4];} forEach units group _unit;
}];

_this removeAllEventHandlers "Killed";
_this addEventHandler ["Killed", {
	_killed = _this select 0;
	removeAllWeapons _killed;
	_killed removeAllEventHandlers "Killed";
	_killed removeAllEventHandlers "Fired";
	_killed removeAllEventHandlers "Suppressed";
	_killed removeAllEventHandlers "AnimStateChanged";
	_killer = _this select 1;
	_killed setDamage 1;
	[_killed,((_killed getVariable "WBK_Droids_VoiceType") + (selectRandom ["death_1.ogg"])),200] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
	_killed spawn {
		uiSleep 0.3;
		{
			if ((side _x == side (group _this)) && (alive _x) && (_x != _this) && !(isNil {_x getVariable "Droid_Health"}) && (behaviour _x == "COMBAT")) exitWith {
				[_x,((_x getVariable "WBK_Droids_VoiceType") + (selectRandom ["friendly_kia_1.ogg","friendly_kia_2.ogg","friendly_kia_3.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
			};
		} forEach nearestObjects [_this,["MAN"],10];
		waituntil {
			sleep 0.1;  
			if (isNull _this) exitWith {true}; 
			(animationState _this == "deadstate") 
		}; 
		if (isNull _this) exitWith {}; 
		[_this,selectRandom ["WBK_Droids\sounds\b1\bodyfall_1.ogg","WBK_Droids\sounds\b1\bodyfall_2.ogg","WBK_Droids\sounds\b1\bodyfall_3.ogg"],45] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
	};
	switch true do {
		case (stance _killed == "PRONE"): {_killed addForce [_killer vectorModelToWorld [0,200,50], _killed selectionPosition "head", false];};
		default {[_killed,["B2_Droid_die", 0, 0.2, false]] remoteExec ["switchMove",0];};
	};
	_killed playActionNow "WBK_Droid_Disable_Gesture";
}];

_this addEventHandler ["Fired", {
	_obj = _this select 0; 
	if (currentWeapon _obj != primaryWeapon _obj) exitWith {};
	_obj setAmmo [currentWeapon _obj, 10];
	_obj spawn {
		_val = _this getVariable "WBK_AmountOfAmmunition";
		_val = _val - 1;
		if (_val > 0) then {
			_en = getAttackTarget _this;
			_this setVariable ["WBK_AmountOfAmmunition",_val];
			switch true do {
				case (isNil {_this getVariable "B1Speak"}): {
					[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["shoot_1.ogg","shoot_2.ogg","shoot_3.ogg","shoot_4.ogg","shoot_5.ogg"]))] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
					_this setVariable ["B1Speak",false];
					uisleep (random 25);
					_this setVariable ["B1Speak",nil];
				};
				default {};
			};
		}else{
			_this playActionNow "WBK_Droids_B2_Run";
			_value = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
			_this setVariable ["WBK_AmountOfAmmunition",_value];
		};
	};
}];

// WBK_B2_Melee = {
// 	_unitToPlay = _this;
// 	if ((isNull _unitToPlay) or !(alive _unitToPlay)) exitWith {};
// 	_unitToPlay disableAI "ALL";
// 	[_unitToPlay, "B2_SupperBattleDroid_melee"] remoteExec ["switchMove", 0];
// 	sleep 0.1;
// 	if (!(animationState _unitToPlay == "B2_SupperBattleDroid_melee")) exitWith {_unitToPlay enableAI "ALL";};
// 	[_unitToPlay, selectRandom ["generis_empty_4","generis_empty_5","generis_empty_2"], 50, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
// 	sleep 0.1;
// 	if (!(animationState _unitToPlay == "B2_SupperBattleDroid_melee")) exitWith {_unitToPlay enableAI "ALL";};
// 	if (isNil {_unitToPlay getVariable "B2Speak"}) then {
// 		_unitToPlay spawn {
// 		_this setVariable ["B2Speak",1];
// 		[_this, selectRandom ["WBK_b2_firing_1","WBK_b2_firing_2","WBK_b2_firing_3","WBK_b2_firing_4","WBK_b2_firing_5"], 60] call CBA_fnc_globalSay3d;
// 		sleep 3;
// 		_this setVariable ["B2Speak",nil];
// 		};
// 	};
// 	_myNearestEnemy = _unitToPlay findNearestEnemy _unitToPlay;
// 	if ((_myNearestEnemy distance _unitToPlay) <= 2.5) then {
// 		_myNearestEnemy setDamage 1;
// 		[_myNearestEnemy, "dobi_CriticalHit", 50, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
// 		[_myNearestEnemy, selectRandom ["lightsaber_death_11","lightsaber_death_20","lightsaber_death_5","lightsaber_death_8"]] remoteExec ["switchMove", 0];
// 		[_myNearestEnemy, (_myNearestEnemy getDir _unitToPlay)] remoteExec ["setDir", 0];
// 	};
// 	sleep 0.9;
// 	if (!(animationState _unitToPlay == "B2_SupperBattleDroid_melee")) exitWith {_unitToPlay enableAI "ALL";};
// 	_unitToPlay enableAI "ALL";
// 	[_unitToPlay, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];
// };

// _this remoteExecCall ["WBK_Droids_B1_LoadHitHandlers",0,true];

[{((({(getNumber (configfile >> "CfgAmmo" >> typeOf _x >> "hit") > 1) && (isNil {_x getVariable "B1ItsOwnNade"})} count (_this nearObjects ["Grenade", 8])) >= 1) || !(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"}))}, {
	if (!(alive _this) || (isNull _this) || !(isNil {_this getVariable "B1CanSayNade"})) exitWith {};
	_this setVariable ["B1CanSayNade",false];
	[_this,((_this getVariable "WBK_Droids_VoiceType") + (selectRandom ["inc_grenade_1.ogg","inc_grenade_2.ogg"])),300] remoteExecCall ["WBK_Droid_VoiceLines",[0,-2] select isDedicated];
}, _this, -1] call CBA_fnc_waitUntilAndExecute;
while {alive _this} do {
	if (alive _this != isAwake _this) exitWith {_this setDamage 1;};
	_this allowDamage false;
	switch true do {
		case ((gestureState _this in ["gesturethrowgrenade","gesturethrowgrenadepistol","gesturethrowgrenadeuna","gesturereloadmxugl"]) || !(alive _this) || (animationState _this in ["b2_droid_die_1"]) || !(isNull attachedTo _this) || (currentWeapon _this != primaryWeapon _this) || (gestureState _this == (getText (configfile >> "CfgWeapons" >> currentWeapon _this >> "reloadAction")))): {};
		case ((((velocity _this) # 0) > 2) || (((velocity _this) # 0) < (-2)) || (((velocity _this) # 1) > 2) || (((velocity _this) # 1) < (-2))): {_this playActionNow "WBK_Droids_B2_Run";};
		case (!(isNull objectParent _this) || (stance _this == "PRONE") || (getNumber (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "weaponLowered") == 1)): {_this playActionNow "WBK_Droid_Disable_Gesture";};
		default {_this playActionNow "WBK_Droids_B2_Idle";};
	};
	uiSleep 0.2;
};