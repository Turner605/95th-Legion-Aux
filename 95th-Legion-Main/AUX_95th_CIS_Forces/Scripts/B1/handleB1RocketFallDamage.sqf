params ["_unit", "_allDamages", "_typeOfDamage"];

if (getNumber(configFile >> 'CfgVehicles' >> typeOf _unit >> 'AUX_95th_Is_Immune_To_FallDamage') == 1) exitWith {[];};

[_unit, _allDamages, _typeOfDamage];




// params ["_unit", "_allDamages", "_typeOfDamage"];

// if (getNumber(configFile >> 'CfgVehicles' >> typeOf _unit >> 'AUX_95th_Is_Immune_To_FallDamage') == 1) then {
//     if(_typeOfDamage == "falling") exitWith {[];};
//     if(_unit getVariable "AUX_95th_Insertion_Is_In_Progress") exitWith {[];};
// };

// [_unit, _allDamages, _typeOfDamage];