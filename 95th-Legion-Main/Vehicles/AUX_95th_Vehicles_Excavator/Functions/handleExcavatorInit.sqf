params ["_vehicle"];

_vehicle setObjectTextureGlobal [0,''];
_vehicle setObjectTextureGlobal [1,''];
_vehicle setObjectTextureGlobal [2,''];

// this; lodNoShadow = 1;

private _excavator = "Land_Excavator_01_abandoned_F" createVehicle (getPos _vehicle);

_excavator attachTo [_vehicle,[0.38,2.0,1.0]];
_excavator setVectorDirAndUp [[0,0,0],[0,0,1]];