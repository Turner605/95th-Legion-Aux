params ["_vehicle", "_crateType"];

if (!isServer) exitWith {};

private _buildables = [];

switch (_crateType) do {
	case "GroundDeployment": {_buildables = [
		["AUX_95th_GroundUtil_Pad","",5,4,{}],
		["AUX_95th_GroundUtil_Refit","",1,4,{}],
		["AUX_95th_GroundUtil_Service","",1,4,{}],
		["AUX_95th_GroundUtil_Vehicles_Heavy","",1,4,{}],
		["AUX_95th_GroundUtil_Vehicles_Light","",1,4,{}],
		["AUX_95th_GroundUtil_Vehicles_Support","",1,4,{}]
	]};

	case "AirDeployment": {_buildables = [
		["AUX_95th_AirUtil_Pad","",5,4,{}],
		["AUX_95th_AirUtil_Service","",1,4,{}],
		["AUX_95th_AirUtil_Transport","",1,4,{}],
		["AUX_95th_AirUtil_Fighter","",1,4,{}],
		["AUX_95th_Misc_Crate_Pad","",1,4,{}]
	]};

	case "DefenceDeployment": {_buildables = [
		["3AS_Venator_Cannon_Small","",5,4,{}],
		["AUX_95th_Misc_Shield_Generator","",2,4,{}],
		["AUX_95th_Misc_Motion_Sensor","",2,4,{}],
		["3AS_Republic_Mortar","",2,4,{}],
		["3AS_BlasterTurret","",3,4,{}],
		["3AS_StationaryTurret","",2,4,{}]
	]};

	case "UtilityDeployment": {_buildables = [
		["AUX_95th_Misc_Medical_Terminal","",1,4,{}],
		["AUX_95th_Misc_Permission_Terminal","",1,4,{}]
	]};
};

[
	_vehicle, 
	100, 
	_buildables, 
	{}
] call stx_logistics_fnc_addConstructionVehicle;