params ["_vehicle"];

if (!isServer) exitWith {};
if(_vehicle getVariable "zen_placement_object") exitWith {};

_vehicle setObjectTextureGlobal [0,''];
_vehicle setObjectTextureGlobal [1,''];
_vehicle setObjectTextureGlobal [2,''];

// this; lodNoShadow = 1;

private _bullDozer = "Land_Bulldozer_01_wreck_F" createVehicle [0,0,0];

_bullDozer attachTo [_vehicle,[0.0,0.0,-0.5]];
_bullDozer setVectorDirAndUp [[0,-4,0],[0,0,1]];