params ["_player"];

private _currentWeapon = currentWeapon _player;
private _currentMagazine = currentMagazine _player;
private _currentMuzzle = currentMuzzle _player;
private _currentWeaponClass = _currentWeapon;
private _currentAmmoCount = (_player ammo _currentMuzzle);

private _nextWeapon = [(configFile >> "CfgWeapons" >> _currentWeaponClass), "AUX_95th_NextWeaponmode", "void"] call BIS_fnc_returnConfigEntry;
private _nextWeaponMuzzle = [(configFile >> "CfgWeapons" >> _currentWeaponClass), "AUX_95th_NextWeaponmuzzle", "void"] call BIS_fnc_returnConfigEntry;
private _nextWeaponSound = [(configFile >> "CfgWeapons" >> _currentWeaponClass), "AUX_95th_NextWeaponsound", "void"] call BIS_fnc_returnConfigEntry;
private _nextWeaponMag = (compatibleMagazines _nextWeapon) select 0;

if((_nextWeapon == "void") || (_nextWeaponMuzzle == "void")) exitWith {hint "No available weaponmode"};

// playSound3D [_nextWeaponSound, _player, false, getPosATL _player, 4, 1, 10];
[_player, _currentWeapon] call ace_safemode_fnc_playChangeFiremodeSound;

_player removeWeaponGlobal _currentWeapon;

if(!(_nextWeaponMuzzle == "Standard")) then {
    _player addMagazineGlobal _nextWeaponMag;
};

if(_currentMuzzle == "Standard") then {
    (vestContainer _player) addMagazineAmmoCargo [_currentMagazine, 1, _currentAmmoCount];
};

_player addWeaponGlobal _nextWeapon;
_player selectWeapon _nextWeaponMuzzle;