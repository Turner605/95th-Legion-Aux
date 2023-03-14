
Fired_95th_EH = {
    _unit = _this select 0;
    if !(local _unit) exitWith {};

    _weap = _this select 1;
    _magazine = _this select 6;

    if (_weap == "Throw") then {
        switch (_magazine) do {
            case "95th_Pyro_Grenade": {[(_this select 5)] spawn flameIncindieryEH;};
        };
    };
};

