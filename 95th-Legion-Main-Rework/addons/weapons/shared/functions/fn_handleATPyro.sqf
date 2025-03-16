params ["_projectile"];

while {alive _projectile} do {
	_impactPos = getPosATL _projectile;
	sleep 0.1;
};

_pyroATHandler = [{
    (_this select 0) params ["_impactPos"];
    
    private _nearVehicles = nearestObjects[_impactPos, ["LandVehicle"], 5];

    {
        if(alive _x) then {
            _x setDamage ((getDammage _x) + 0.1);
        };
    } forEach _nearVehicles;

}, 1, [_impactPos]] call CBA_fnc_addPerFrameHandler;

[{
    params ["_pyroATHandler"];

    [_pyroATHandler] call CBA_fnc_removePerFrameHandler;

}, [_pyroATHandler], 12] call CBA_fnc_waitAndExecute;

// BEFORE PUSHING:
// TIME NEEDS AJUSTING ON THE WAIT TO MATCH THE PYRO LENGTH
// NEED TO MAKE SURE THE AT WORKS PROPERLY
// ATTACH FLAME OBJECT TO NEAREST VEHICLE?