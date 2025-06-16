params ["_unit", "_range"];

_unit addEventHandler ["Deleted", {
	params ["_unit", "_killer"];

    private _objNetId = _unit call BIS_fnc_netId;
    deleteMarker _objNetId;

    private _priorJammed = _unit getVariable "AUX_95th_Radar_Prior_Targets";
    if (isNil "_priorJammed") then {_priorJammed = [];};
    {_x enableVehicleSensor ['ActiveRadarSensorComponent',true];} forEach _priorJammed;

    [_unit getVariable "AUX_95th_Radar_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
}];

_unit addEventHandler ["Killed", {
	params ["_unit", "_killer"];

    private _objNetId = _unit call BIS_fnc_netId;
    deleteMarker _objNetId;

    private _priorJammed = _unit getVariable "AUX_95th_Radar_Prior_Targets";
    if (isNil "_priorJammed") then {_priorJammed = [];};
    {_x enableVehicleSensor ['ActiveRadarSensorComponent',true];} forEach _priorJammed;

    [_unit getVariable "AUX_95th_Radar_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
}];

if (!isServer) exitWith {};

private _objNetId = _unit call BIS_fnc_netId;

_zoneMarker = createMarker [_objNetId, position _unit]; 
_zoneMarker setMarkerShapeLocal "ELLIPSE"; 
_zoneMarker setMarkerColorLocal "ColorBlack";
_zoneMarker setMarkerBrushLocal "SolidFull";
_zoneMarker setMarkerAlphaLocal 1; 
_zoneMarker setMarkerSizeLocal [_range, _range];
_zoneMarker setMarkerText "";

private _frameHandler = [{
	(_this select 0) params ["_unit", "_range"];

    private _objNetId = _unit call BIS_fnc_netId;
    _objNetId setMarkerPos _unit;

    private _priorJammed = _unit getVariable "AUX_95th_Radar_Prior_Targets";
    if (isNil "_priorJammed") then {_priorJammed = [];};

    private _airInRange = nearestObjects[_unit, ["Helicopter", "Plane"], _range];

    {_x enableVehicleSensor ['ActiveRadarSensorComponent',false];} forEach _airInRange;

    {if(!(_x in _airInRange)) then {_x enableVehicleSensor ['ActiveRadarSensorComponent',true];};} forEach _priorJammed;

    _unit setVariable ["AUX_95th_Radar_Prior_Targets", _airInRange, true];

}, 5, [_unit, _range]] call CBA_fnc_addPerFrameHandler;

_unit setVariable ["AUX_95th_Radar_Frame_Handler", _frameHandler, true];
