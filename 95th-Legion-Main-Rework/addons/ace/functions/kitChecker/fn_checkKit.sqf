params ["_unit"];

if(!isNull (getAssignedCuratorLogic _unit))exitWith{}; //Disable if you're testing this you idiot
if(missionNamespace getVariable "AUX_95th_Kit_Checker_Disabled")exitWith{};
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

[_unit] call AUX_95th_fnc_checkWeapons;
// [_unit] call AUX_95th_fnc_checkThrowables; // Cannot use until 2.18: Check version here: https://dev.arma3.com/