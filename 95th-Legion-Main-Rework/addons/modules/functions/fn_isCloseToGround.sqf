params ["_distanceNeeded", "_unit"];

private _velocity = velocity _unit;
private _pos = getPosASL _unit;
private _distance = 500;
private _isClose = 0;

if ((_velocity select 2) < 0) then {
    private _vis = lineIntersectsSurfaces [_pos, _pos vectorAdd (_velocity vectorMultiply 2), _unit, objNull, true, 1, "FIRE", "GEOM"];

    if (_vis isNotEqualTo []) then {
        _distance = _pos distance (_vis select 0 select 0);
    };
    if (surfaceIsWater _pos) then {
        _distance = (_pos distance [_pos select 0, _pos select 1, 0]) min _distance;
    };
};

if (((getPosATL _unit) select 2) < _distanceNeeded) then { _isClose = 1; };
if (_distance < _distanceNeeded) then { _isClose = 1; };

_isClose;