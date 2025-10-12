params ["_radius", "_frequency", "_duration", "_modulePos"];

_ion_storm_handler = [{
	(_this select 0) params ["_modulePos", "_radius"];

    // Ground Targets
    private _shouldStrikePlayer = [true, false] selectRandomWeighted [0.1,1];
    private _targetList = _modulePos nearEntities [ ["Man", "Car", "Motorcycle", "Tank"], _radius];
    private _scanPos = [];

    if (_shouldStrikePlayer && ((count _targetList) > 0)) then {
        _scanPos = getPosWorld (selectRandom _targetList);
    } else {
        _scanPos = [[[_modulePos, _radius]], []] call BIS_fnc_randomPos;
    };

    private _hitPos = _scanPos;

    lineIntersectsSurfaces [
        _scanPos vectorAdd [0, 0, 200],
        _scanPos,
        objNull, objNull, true, 1, "GEOM", "FIRE"
    ] select 0 params ["_intersectPos","","",""];

    if (!isNil "_intersectPos") then {_hitPos = _intersectPos}; 
    
    private _tempTarget = createSimpleObject ["Land_HelipadEmpty_F", _hitPos];
    
    [_tempTarget, nil, true] remoteExec ["BIS_fnc_moduleLightning"];

    // Air Targets
    private _airTargetList = [_modulePos vectorAdd [0, 0, 300], _radius+100, _radius+100, 0, false, 100] nearEntities [ ["Man"], false, false, true];

    {
        private _airCraftPos = (getPosWorld _x);
        private _tempTarget = createSimpleObject ["Land_HelipadEmpty_F", _airCraftPos];
        [_x, nil, true] remoteExec ["BIS_fnc_moduleLightning"];
    } forEach _airTargetList;

}, _frequency, [_modulePos, _radius]] call CBA_fnc_addPerFrameHandler;

[{
    params ["_handler"]; 
    [_handler] call CBA_fnc_removePerFrameHandler;
}, [_ion_storm_handler], _duration] call CBA_fnc_waitAndExecute;




