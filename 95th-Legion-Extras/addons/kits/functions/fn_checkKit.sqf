params ["_unit"];

// if(!isNull (getAssignedCuratorLogic _unit))exitWith{}; //Disable if you're testing this you idiot
if(missionNamespace getVariable "AUX_95th_Kit_Checker_Disabled")exitWith{};
if(_unit getVariable "AUX_95th_Kit_Checker_Disabled")exitWith{};

private _classItem = assignedItems _unit select {_x call BIS_fnc_itemType select 1 == "Compass"} param [0, ""];

private _class = [(configFile >> "CfgWeapons" >> _classItem),"AUX_95th_Class_Designation", "Unselected"] call BIS_fnc_returnConfigEntry;

[(configFile >> "CfgWeapons" >> _classItem),"AUX_95th_Class_Designation",0] call BIS_fnc_returnConfigEntry;

if(_class == "FunOp" || _class == "Zeus")exitWith{_unit setVariable ["AUX_95th_Is_Bypassing_Cert", true, true];};

_unit setVariable ["AUX_95th_Is_Bypassing_Cert", false, true];

[_unit] call AUX_95th_Extras_fnc_checkWeapons;
[_unit, _class] call AUX_95th_Extras_fnc_checkThrowables;
[_unit, _class] call AUX_95th_Extras_fnc_checkCerts;