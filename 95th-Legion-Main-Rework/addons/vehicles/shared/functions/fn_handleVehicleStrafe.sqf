params ["_player", "_direction"];

private _vehicle = vehicle _player;
private _vehicleType = typeOf _vehicle;

if(_vehicle == _player) exitWith {};
if(_player getVariable ["AUX_95th_Strafing_Active", false]) exitWith {};
if((fuel _vehicle) == 0) exitWith {};
if((_vehicle getHitPointDamage "hitEngine") == 1) exitWith {};
if(!(isEngineOn _vehicle)) exitWith {};

private _canStrafe = [configFile >> "CfgVehicles" >> _vehicleType, "AUX_95th_Strafing_Available", 0] call BIS_fnc_returnConfigEntry;
private _strafeSpeed = [configFile >> "CfgVehicles" >> _vehicleType, "AUX_95th_Strafing_Speed", 5] call BIS_fnc_returnConfigEntry;
private _strafeResistance = [configFile >> "CfgVehicles" >> _vehicleType, "AUX_95th_Strafing_Resistance", 1.5] call BIS_fnc_returnConfigEntry;
private _strafeDownforce = [configFile >> "CfgVehicles" >> _vehicleType, "AUX_95th_Strafing_Downforce", -0.9] call BIS_fnc_returnConfigEntry;

if(!(_canStrafe == 1)) exitWith {};

_player setVariable ["AUX_95th_Strafing_Active", true, true];

AUX_95th_Vehicle_Strafe_Handler = [{
	(_this select 0) params ["_vehicle", "_direction", "_strafeResistance", "_strafeSpeed", "_strafeDownforce"];

    private _vel = velocity _vehicle;
    private _dir = direction _vehicle;

    private _speed = diag_deltaTime * _strafeSpeed;
    private _dirSpeed = 0;

    switch (_direction) do {
        case "Right": {_dirSpeed = 90};
        case "Left": {_dirSpeed = -90};
    };

    private _velAddY = (_vel select 1) + (cos (_dir + _dirSpeed) * _speed);

    if(_velAddY < -10) then {_velAddY = -10};
    if(_velAddY > 10) then {_velAddY = 10};

    _vel = [ 
        (_vel select 0) + (sin (_dir + _dirSpeed) * _speed), 
        _velAddY, 
        (_vel select 2)
    ];

    if (isTouchingGround _vehicle) then {
        private _airResistance = _vel vectorMultiply (-0.1 * diag_deltaTime * _strafeResistance);
        _vel = _vel vectorAdd _airResistance;

        _vel =  [
            (_vel select 0), 
            (_vel select 1), 
            _strafeDownforce
        ];

        _vehicle setVelocity _vel;
    };
}, 0, [_vehicle, _direction, _strafeResistance, _strafeSpeed, _strafeDownforce]] call CBA_fnc_addPerFrameHandler; 