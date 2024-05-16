Params ["_unit"];

if(!((leader _unit) == _unit)) exitWith {
    systemChat "You must be the group leader.";
};

missionNamespace setVariable ['AUX_95th_Airborne_Group', (group _unit), true];