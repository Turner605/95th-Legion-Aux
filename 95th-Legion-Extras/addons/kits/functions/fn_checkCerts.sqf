params ["_unit", "_class"];

if(_class == "Unselected") exitWith {
    2 cutText ["<t color='#ffffff' size='2'>You are missing a class.</t><br/><t color='#ffffff' size='2'>Please equip one in the arsenal naviagtion tab.</t>", "PLAIN", 1, true, true];
};

private _classItems = AUX_95th_Arsenal_Class_Items get _class;

private _unitItems = items _unit;

_unitItems pushBack (primaryWeapon _unit);
_unitItems pushBack (handgunWeapon _unit);
_unitItems pushBack (secondaryWeapon _unit);
_unitItems pushBack (assignedItems _unit select {_x call BIS_fnc_itemType select 1 == "GPS"} param [0, ""]); // for uav terminal

private _hasOtherClassItems = false;
private _otherClassItems = "";

private _hasEngineerPermissions = (_unit getUnitTrait "Engineer");
private _hasMedicPermissions = (_unit getUnitTrait "Medic");

{
    private _itemToCheck = _x;

    {
        if(!(_x == _class)) then {
            if((_itemToCheck in _y) && !(_itemToCheck in _classItems)) then {
                _hasOtherClassItems = true;
                _otherClassItems = _otherClassItems + getText(configFile >> "CfgWeapons" >> _itemToCheck >> "displayName") + ", ";
            };
        };
    } forEach AUX_95th_Arsenal_Class_Items;
} forEach _unitItems;

if (_hasOtherClassItems) then {
    2 cutText ["<t color='#ffffff' size='2'>You seem to be multi-certing.</t><br/><t color='#ffffff' size='2'>Please check your gear.</t>", "PLAIN", 1, true, true];
    systemChat ("Incorrect Class Items: " + _otherClassItems);

    _unit setVariable ["AUX_95th_MultiCerting_Flag", true, true];
}else{
    _unit setVariable ["AUX_95th_MultiCerting_Flag", false, true];
};