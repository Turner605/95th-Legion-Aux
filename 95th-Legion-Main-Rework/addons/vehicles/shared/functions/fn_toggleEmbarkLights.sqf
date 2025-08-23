params ["_vehicle"];

private _lightPosition = [(configFile >> "CfgVehicles" >> (typeOf _vehicle)),"AUX_95th_Embark_Light_Positions", Objnull] call BIS_fnc_returnConfigEntry;

// if (!isServer) exitWith {};
// if(isNull _lightPosition) exitWith {};

private _lightColourMode = _vehicle getVariable ["AUX_95th_Embark_Light_Mode", 0];
private _lightAttached = _vehicle getVariable ["AUX_95th_Embark_Light_Attached", Objnull];

private _lightColourName = "<t color='#FF0000'>Red</t>";
private _lightColour = [1, 0, 0];
private _nextLightMode = 1;

if(isNull _lightAttached) then {
    _lightAttached = "#lightpoint" createVehicleLocal (getPosATL _vehicle);
    _lightAttached setLightBrightness 0.3;
    _lightAttached setLightAmbient [0, 0, 0];
    _lightAttached setLightColor _lightColour;
    _lightAttached lightAttachObject [_vehicle, _lightPosition];
    _lightAttached setLightDayLight true;

    _vehicle setVariable ["AUX_95th_Embark_Light_Attached", _lightAttached, true];
};

switch (_lightColourMode) do {
    case 0: { _lightColourName = "<t color='#FF0000'>Red</t>"; _lightColour = [1, 0, 0]; _nextLightMode = 1; };
    case 1: { _lightColourName = "<t color='#00FF00'>Green</t>"; _lightColour = [0, 1, 0]; _nextLightMode = 0; };
};

_lightAttached setLightColor _lightColour;

_vehicle setVariable ["AUX_95th_Embark_Light_Mode", _nextLightMode, true];

[format ["Embark Lights: %1", _lightColourName], 2] call ace_common_fnc_displayTextStructured;


// [{0, 2, 3}, {0, -1, 3}]

// _newLightAttached setDir (getDir _vehicle);
