params ["_unit"];

private _squadUnits = units _unit;

{
    private _squadMember = _x;

    // Distance check against global variable

    if(!((vehicle _squadMember) == _squadMember)) exitWith {};

    private _currentShield = _squadMember getVariable["AUX_95th_Ward_Shield", objNull];

    if(!(isNull _currentShield)) then {deleteVehicle _currentShield};

    private _shieldObj = createVehicle ["AUX_95th_Ward_Shield", [0,0,0], [], 0, "CAN_COLLIDE"];
    createVehicleCrew _shieldObj;

    _shieldObj attachTo [_squadMember, [0, 0, -0.8], "Pelvis", true]; 
    _shieldObj setDir 0;

	_squadMember setVariable ["AUX_95th_Ward_Shield", _shieldObj, true];

} forEach _squadUnits;