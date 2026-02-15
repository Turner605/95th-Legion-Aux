params ["_unit"];

private _throwables = throwables _unit;

private _throwablePointCountMax = AUX_95th_Points_Throwables_Max;
private _throwablePointList = AUX_95th_Arsenal_Grenades_Point_Values;
private _throwablePointCount = 0;
private _isOverThrowablePointMax = false;

{
    private _throwableToCheck = (_x select 0);
    private _throwableDetails = (_throwablePointList get _throwableToCheck);

    private _throwablePointValue = (_throwableDetails select 0);

    _throwablePointCount = _throwablePointCount + _throwablePointValue;
    
    AUX_95th_Points_Throwables_Current = _throwablePointCount;

} forEach _throwables;

if (_throwablePointCount > _throwablePointCountMax) then {
    _isOverThrowablePointMax = true;
};

_isOverThrowablePointMax;