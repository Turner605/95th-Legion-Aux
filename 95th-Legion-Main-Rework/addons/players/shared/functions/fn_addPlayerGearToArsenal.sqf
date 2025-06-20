params ["_playerName", "_macroArray"];

{
    private _className = (_x select 0);
    private _enabled = (_x select 1);

    if(_enabled == 1) then {
        AUX_95th_Arsenal_Whitelisted_Customs pushBack (_className + _playername);
    };

} forEach _macroArray;