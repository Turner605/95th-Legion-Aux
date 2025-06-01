params ["_player"];

private _flag = (_player getVariable "AUX_95th_Attached_Flag");
_flag setFlagOwner objNull;
deleteVehicle _flag;
