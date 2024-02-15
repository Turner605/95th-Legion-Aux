params ["_terminal"];

private _factoryTypes = [
	"AUX_95th_Ground_Factory"
];

private _nearestFactory = nearestObjects[_terminal, _factoryTypes, 20] select 0; 

if(isNil "_nearestFactory") exitWith {systemChat "No Factory within range.";};

[_nearestFactory getVariable "AUX_95th_Factory_Frame_Handler"] call CBA_fnc_removePerFrameHandler;
