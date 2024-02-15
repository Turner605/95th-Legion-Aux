params ["_factory"];

if (!isServer) exitWith {};
if(_factory getVariable "zen_placement_object") exitWith {};

//#################################### Init ####################################

_factory setVariable ["AUX_95th_Unit_Count", 0, true];