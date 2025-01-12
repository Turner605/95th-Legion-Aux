private _message = "<t color='#82101d' size='2'> Execute Order 66 </t>";
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

[[_message], {
    params ["_message"];

    2 cutText [_message, "PLAIN", 1, true, true];
}] remoteExec ["call", _playersToBroadcast];
