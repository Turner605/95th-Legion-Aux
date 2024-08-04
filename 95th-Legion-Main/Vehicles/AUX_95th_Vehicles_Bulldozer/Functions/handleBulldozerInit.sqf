params ["_vehicle"];

_vehicle setObjectTextureGlobal [0,''];
_vehicle setObjectTextureGlobal [1,''];
_vehicle setObjectTextureGlobal [2,''];

// this; lodNoShadow = 1;
// Land_Excavator_01_abandoned_F

private _bullDozer = "Land_Bulldozer_01_wreck_F" createVehicle (getPos _vehicle);

_bullDozer attachTo [_vehicle,[0.0,0.0,-0.5]];
_bullDozer setVectorDirAndUp [[0,-4,0],[0,0,1]];