params ["_unit"];

private _allItems = items _unit;

private _classCount = 0;
// Bug where multiple items from a class will increase the count, need to exit when it finds something of a class
{
    private _classItems = _x;

    {
        if(_x in _allItems) then { _classCount = _classCount+1 };
    } forEach _classItems;

} forEach AUX_95th_Arsenal_Class_Items;

if (_classCount > 1) then {
    2 cutText ["<t color='#ffffff' size='2'>You seem to be multi-certing.</t><br/><t color='#ffffff' size='2'>Please check your gear.</t>", "PLAIN", 1, true, true];
};