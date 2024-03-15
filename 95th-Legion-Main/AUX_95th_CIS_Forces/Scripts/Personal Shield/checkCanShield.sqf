params ["_unit"];

private _canShield = false;

if (getNumber(configFile >> 'CfgVehicles' >> typeOf _unit >> 'AUX_95th_Can_Use_Shield') == 1) then {
	if (!captive _unit) then {
		_canShield = true;
	};
};

if (true) exitWith { _canShield; };