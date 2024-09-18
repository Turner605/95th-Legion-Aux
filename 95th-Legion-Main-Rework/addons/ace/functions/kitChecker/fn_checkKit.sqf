params ["_unit"];

if(!isNull (getAssignedCuratorLogic _unit))exitWith{}; //Disable if you're testing this you idiot
if(missionNamespace getVariable "AUX_95th_Kit_Checker_Disabled")exitWith{};
if(_unit getVariable "AUX_95th_Kit_Checker_Disabled")exitWith{};

[_unit] call AUX_95th_fnc_checkWeapons;
// [_unit] call AUX_95th_fnc_checkThrowables; // Cannot use until 2.18: Check version here: https://dev.arma3.com/
// [_unit] call AUX_95th_fnc_checkCerts;