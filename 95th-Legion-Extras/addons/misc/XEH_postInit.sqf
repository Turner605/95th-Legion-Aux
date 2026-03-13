#include "script_component.hpp"

if(AUX_95th_Global_Locking_Enabled && isServer) then {
    [] call AUX_95th_Extras_fnc_lockMapDoors;
};