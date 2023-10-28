private _hasAutoTurretDevice = 0;

if(NFL_Auto_Turret_Active == 1) exitWith {hint "Turret already active";};
if(NFL_Auto_Turret_On_Cooldown == 1) exitWith {hint "Turret is on cooldown.";};

{
	if (getNumber(configFile >> "CfgWeapons" >> _x >> "NFL_IsAutoTurretDevice") == 1) then {
		_hasAutoTurretDevice = 1;
	};
} forEach items player;

if(_hasAutoTurretDevice == 1) then {
	if (!captive player) then {
		[player] spawn NFA_fnc_handleAutoTurretTriggered;
	};
};