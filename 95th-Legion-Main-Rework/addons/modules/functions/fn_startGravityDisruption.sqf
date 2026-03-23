params ["_radius", "_duration", "_modulePos"];

private _targetList = _modulePos nearEntities [ ["StaticWeapon", "Man", "Car", "Motorcycle", "Tank", "Helicopter", "Plane", "ThingX"], _radius];

_gravity_handler = [{
	(_this select 0) params ["_modulePos", "_targetList"];

    {
        private _vel = velocity _x;

        _vel = [ 
            (_vel select 0), 
            (_vel select 1),
            (_vel select 2) + 1.2
        ];

        _x setVelocity _vel;

    } forEach _targetList;

}, 0.1, [_modulePos, _targetList]] call CBA_fnc_addPerFrameHandler;

[{
    params ["_handler"]; 
    [_handler] call CBA_fnc_removePerFrameHandler;
}, [_gravity_handler], _duration] call CBA_fnc_waitAndExecute;