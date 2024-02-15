params ["_terminal"];

private _isActive = false;

private _factoryTypes = [
	"AUX_95th_Ground_Factory"
];

private _nearestFactory = nearestObjects[_terminal, _factoryTypes, 20] select 0; 
if(isNil "_nearestFactory") exitWith {_isActive;};
if((_nearestFactory getVariable "AUX_95th_Factory_Active")) then {_isActive = true;};

if (true) exitWith { _isActive; };