params ["_unit"];

private _weaponClass = (currentWeapon _unit);
private _isShielded = [configFile >> "CfgWeapons" >> _weaponClass, "JLTS_isShielded", 0] call BIS_fnc_returnConfigEntry;

if(_isShielded == 0)exitWith{};
if(_unit getVariable "AUX_95th_Riot_Flash_Is_On_Cooldown") exitWith {hint "Flash is recharging";};

playSound3D ['z\DSS\addons\grenades\Sounds\Flashbang\DSS_Flashbang_Detonated.wav', _unit, false, getPosASL _unit, 3, 1, 100];

[(_unit modelToWorld [0,0.75,0.5])] call DSS_fnc_handleFlashDetonate;

_unit setVariable ["AUX_95th_Riot_Flash_Is_On_Cooldown", true, true];

[{
	(_this select 0) setVariable ["AUX_95th_Riot_Flash_Is_On_Cooldown", false, true];
}, [_unit], AUX_95th_Riot_Flash_Cooldown] call CBA_fnc_waitAndExecute;