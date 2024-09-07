private _hasDiscShieldDevice = 0;

if(AUX_95th_Disc_Shield_Active == 1) exitWith {hint "Shield already active";};
if(AUX_95th_Disc_Shield_On_Cooldown == 1) exitWith {hint "Shield is on cooldown.";};

{
	if (getNumber(configFile >> "CfgWeapons" >> _x >> "AUX_95th_IsDiscShieldDevice") == 1) then {
		_hasDiscShieldDevice = 1;
	};
} forEach items player;

if(_hasDiscShieldDevice == 1) then {
	if (!captive player) then {
		[player] spawn AUX_95th_fnc_handleDiscTriggered;
	};
};