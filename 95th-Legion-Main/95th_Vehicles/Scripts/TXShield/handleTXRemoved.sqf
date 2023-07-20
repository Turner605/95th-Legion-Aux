params ["_tank"];

hint "RemDel";
systemChat "RemDel";

private _shield = _tank getVariable "NFL_Shield_Object";

detach _shield;
deleteVehicle _shield;