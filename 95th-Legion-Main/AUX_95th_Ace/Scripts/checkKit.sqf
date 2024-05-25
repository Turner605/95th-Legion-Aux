params ["_unit"];

if(!isNull (getAssignedCuratorLogic _unit))exitWith{}; //Disable if you're testing this you idiot
if(missionnamespace getVariable "AUX_95th_Kit_Checker_Disabled")exitWith{};
if(_unit getVariable "AUX_95th_Kit_Checker_Disabled")exitWith{};

private _allItems = items _unit;

// private _classCount = 0;
// // Bug where multiple items from a class will increase the count, need to exit when it finds something of a class
// {
//     private _classItems = _x;

//     {
//         if(_x in _allItems) then { _classCount = _classCount+1 };
//     } forEach _classItems;

// } forEach AUX_95th_Arsenal_Class_Items;

// if (_classCount > 1) then {
//     2 cutText ["<t color='#ffffff' size='2'>You seem to be multi-certing.</t><br/><t color='#ffffff' size='2'>Please check your gear.</t>", "PLAIN", 1, true, true];
// };

private _primary = primaryWeapon _unit;
private _secondary = handgunWeapon _unit;
private _launcher = secondaryWeapon _unit; 

if(!(_primary == "") && !(_primary in AUX_95th_Arsenal_Whitelisted_Items)) then {
    _unit removeWeapon _primary;
    systemChat ("Incorrect weapon removed: " + getText(configFile >> "CfgWeapons" >> _primary >> "displayName"));
};

if(!(_secondary == "") && !(_secondary in AUX_95th_Arsenal_Whitelisted_Items)) then {
    _unit removeWeapon _secondary;
    systemChat ("Incorrect weapon removed: " + getText(configFile >> "CfgWeapons" >> _secondary >> "displayName"));
};

if(!(_launcher == "") && !(_launcher in AUX_95th_Arsenal_Whitelisted_Items)) then {
    _unit removeWeapon _launcher;
    systemChat ("Incorrect weapon removed: " + getText(configFile >> "CfgWeapons" >> _launcher >> "displayName"));
};
