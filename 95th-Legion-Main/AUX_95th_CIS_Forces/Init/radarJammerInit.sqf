params ["_unit", "_range"];

private _frameHandler = [{
	(_this select 0) params ["_unit", "_range"];

    private _priorJammed = _unit getVariable "AUX_95th_Radar_Prior_Targets";
    if (isNil "_priorJammed") then {_priorJammed = [];};

    private _airInRange = nearestObjects[_unit, ["Helicopter", "Plane"], _range];

    {_x enableVehicleSensor ['ActiveRadarSensorComponent',false];} forEach _airInRange;

    {if(!(_x in _airInRange)) then {_x enableVehicleSensor ['ActiveRadarSensorComponent',true];};} forEach _priorJammed;

    _unit setVariable ["AUX_95th_Radar_Prior_Targets", _airInRange, true];

}, 5, [_unit, _range]] call CBA_fnc_addPerFrameHandler;

_unit setVariable ["AUX_95th_Radar_Frame_Handler", _frameHandler, true];

_droid addEventHandler ["Killed", {
	params ["_unit", "_killer"];

    [_unit getVariable "AUX_95th_Radar_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
}];