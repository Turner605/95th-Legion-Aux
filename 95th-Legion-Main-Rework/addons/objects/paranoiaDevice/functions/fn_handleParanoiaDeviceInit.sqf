params ["_object", "_range"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

private _crystal = "3AS_Crystal_4_Red" createVehicle [0,0,0];

private _AUX_95th_Paranoia_Frame_Handler = [{
    (_this select 0) params ["_object", "_range"];

    private _targetUnit = _object getVariable ["AUX_95th_Paranoia_Target", objNull];
    private _targetIsAlive = alive _targetUnit;
    private _isInRange = (_object distance _targetUnit) <= _range;
    if(!_targetIsAlive || !_isInRange) then { _targetUnit = objNull; };

    private _allUnitsInRange = (_object nearEntities ["CAManBase", _range]) select {isPlayer _x};

    if (isNull _targetUnit) then {
        if (count _allUnitsInRange > 0) then {
            _targetUnit = selectRandom _allUnitsInRange;
        };

        if (!isNull _targetUnit) then {
            _object setVariable ["AUX_95th_Paranoia_Target", _targetUnit, true];
        };
    };


}, 0.1, [_object, _range]] call CBA_fnc_addPerFrameHandler;


_crystal attachTo [_object,[-0.5,0.0,-0.5]];
_crystal setVectorDirAndUp [[0,-4,0],[0,0,1]];

_object setVariable ["AUX_95th_PerFrame", _AUX_95th_Paranoia_Frame_Handler, true];


_object addEventHandler ["Deleted", {
	params ["_object"];

    private _perFrame = _object getVariable "AUX_95th_PerFrame";
    [_perFrame] call CBA_fnc_removePerFrameHandler;

    {
        detach _x;
	    deleteVehicle _x;
    } forEach attachedObjects _object;
}];

_object addEventHandler ["Killed", {
    params ["_object", "_killer"];

    private _perFrame = _object getVariable "AUX_95th_PerFrame";
    [_perFrame] call CBA_fnc_removePerFrameHandler;

    {
        detach _x;
	    deleteVehicle _x;
    } forEach attachedObjects _object;
}];
