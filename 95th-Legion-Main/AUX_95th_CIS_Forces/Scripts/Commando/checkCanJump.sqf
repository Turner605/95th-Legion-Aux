params ["_unit"];

private _canJump = false;

if (getNumber(configFile >> 'CfgVehicles' >> typeOf _unit >> 'AUX_95th_Has_Commando_Jump') == 1) then {
	if (!captive _unit) then {
		_canJump = true;
	};
};

if (true) exitWith { _canJump; };