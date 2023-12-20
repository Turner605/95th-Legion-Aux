params ["_unit"];

private _canJump = false;

{
	if (getNumber(configFile >> 'CfgVehicles' >> typeOf _unit >> 'NFL_Has_Commando_Jump') == 1) then {
		if (!captive _unit) then {
			_canJump = true;
		};
	};
} forEach items _unit;

if (true) exitWith { _canJump; };