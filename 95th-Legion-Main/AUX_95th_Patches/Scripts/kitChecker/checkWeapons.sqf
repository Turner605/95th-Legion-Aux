params ["_unit"];

private _primary = primaryWeapon _unit;
private _secondary = handgunWeapon _unit;
private _launcher = secondaryWeapon _unit; 

if(!(_primary == "") && !(_primary in AUX_95th_Arsenal_Whitelisted_Weapons)) then {
    _unit removeWeapon _primary;
    systemChat ("Incorrect weapon removed: " + getText(configFile >> "CfgWeapons" >> _primary >> "displayName"));
};

if(!(_secondary == "") && !(_secondary in AUX_95th_Arsenal_Whitelisted_Weapons)) then {
    _unit removeWeapon _secondary;
    systemChat ("Incorrect weapon removed: " + getText(configFile >> "CfgWeapons" >> _secondary >> "displayName"));
};

if(!(_launcher == "") && !(_launcher in AUX_95th_Arsenal_Whitelisted_Weapons)) then {
    _unit removeWeapon _launcher;
    systemChat ("Incorrect weapon removed: " + getText(configFile >> "CfgWeapons" >> _launcher >> "displayName"));
};
