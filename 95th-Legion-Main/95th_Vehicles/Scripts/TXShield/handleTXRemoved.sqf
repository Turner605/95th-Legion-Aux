params ["_tank"];

private _shield = _tank getVariable "AUX_95th_Shield_Object";

detach _shield;
deleteVehicle _shield;