params ["_arsenal"];

[_this select 0, true] call ace_arsenal_fnc_initBox;

[_arsenal, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_removeVirtualItems;