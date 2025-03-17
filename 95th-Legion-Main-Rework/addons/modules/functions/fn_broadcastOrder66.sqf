params ["_warnJedi"];

[[], {
    playMusic ["anakinBetrayal", 15];
}] remoteExec ["spawn", 0];

[{
    params ["_warnJedi"];

    _itemToRestrict = "WBK_Cybercrystal";

    private _playersToBroadcast = [];
    private _jediPlayers = [];

    private _players = allPlayers - entities "HeadlessClient_F";

    {
        _items = (items _x) + (magazines _x);

        if(!(_itemToRestrict in _items)) then {
            _playersToBroadcast pushBack _x;
        }else{
            _jediPlayers pushBack _x;
        }
    } forEach _players;

    _jediPlayers joinSilent createGroup east;

    {
        _x addRating -2000;

        if(_warnJedi) then {
            titleText ["<t align = 'center' shadow = '2' color='#47acff' size='1.5' font='PuristaMedium' >THE FORCE</t><br /><t color='#FFFFFF' size='1.5' font='PuristaMedium' shadow = '2' >You feel a disturbance...</t>", "PLAIN DOWN", -1, true, true];
        }
    } forEach _jediPlayers;

    [[], {
        playSound "executeOrder66";
        titleText ["<t align = 'center' shadow = '2' color='#FF474C' size='1.5' font='PuristaMedium' >CHANCELLOR PALPATINE</t><br /><t color='#FFFFFF' size='1.5' font='PuristaMedium' shadow = '2' >The time has come.</t>", "PLAIN DOWN", -1, true, true];
        sleep 3;
        titleText ["<t align = 'center' shadow = '2' color='#FF474C' size='1.5' font='PuristaMedium' >CHANCELLOR PALPATINE</t><br /><t color='#FFFFFF' size='1.5' font='PuristaMedium' shadow = '2' >Execute Order 66.</t>", "PLAIN DOWN", -1, true, true];
    }] remoteExec ["spawn", _playersToBroadcast];

}, [_warnJedi], 15] call CBA_fnc_waitAndExecute;
