["95th_Spoke", "OnSpeak", {
	params ["_unit", "_volume"];
    if(!(TF_speak_volume_level == "whispering")) then {
        [_unit] spawn NFA_fnc_checkPlayerInBriefing;
    }
}] call TFAR_fnc_addEventHandler;

["95th_Changed_Volume", "OnSpeakVolume", {
	params ["_unit", "_distance"];
    if(!(_distance == 5)) then {
        [_unit] spawn NFA_fnc_checkPlayerInBriefing;
    }
}] call TFAR_fnc_addEventHandler;

["ace_firedPlayer", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
    [_unit] spawn NFA_fnc_checkPlayerInBriefing;
}] call CBA_fnc_addEventHandler;

