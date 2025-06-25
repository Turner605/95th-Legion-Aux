params ["_unit"];

if (!isServer) exitWith {};
if (!isNull ZEN_placement_helper) exitWith {};

private _checkFrequency = 5;

private _b1TurretHandler = [{
    (_this select 0) params ["_unit"];

    private _targets = _unit targets [false, 150, [blufor]];

    if((count _targets) > 0) then {
        if(!(_unit getVariable["AUX_95th_Turret_Deployed", false]) && !(_unit getVariable["AUX_95th_Deployed_Turret_On_Cooldown", false])) then {
            private _placementPos = _unit modelToWorld [0,2,0.2];
            private _direction = getDir _unit;
    
            private _turret = createVehicle ["3AS_J10s_F", _placementPos, [], 0, "CAN_COLLIDE"];
            _turret setDir _direction;

            _unit setVariable ["AUX_95th_Turret_Deployed", true];
            _unit setVariable ["AUX_95th_Deployed_Turret", _turret];

            _turret addEventHandler ["Killed", {
                params ["_turret", "_killer"];
                _turret setVariable ["AUX_95th_Deployed_Turret_On_Cooldown", true];
                _unit setVariable ["AUX_95th_Turret_Deployed", false];
                _unit setVariable ["AUX_95th_Deployed_Turret", objNull];
                [{params ["_turret"]; _turret setVariable ["AUX_95th_Deployed_Turret_On_Cooldown", false];}, [_turret], 30] call CBA_fnc_waitAndExecute;
            }];
            
            _turret addEventHandler ["Deleted", {
                params ["_turret"];
                _turret setVariable ["AUX_95th_Deployed_Turret_On_Cooldown", true];
                _unit setVariable ["AUX_95th_Turret_Deployed", false];
                _unit setVariable ["AUX_95th_Deployed_Turret", objNull];
                [{params ["_turret"]; _turret setVariable ["AUX_95th_Deployed_Turret_On_Cooldown", false];}, [_turret], 30] call CBA_fnc_waitAndExecute;
            }];

            [{params ["_unit", "_turret"]; _unit moveInGunner _turret;}, [_unit, _turret], 0.5] call CBA_fnc_waitAndExecute;
        };
    };

    if((count _targets) == 0) then {
        private _turret = (_unit getVariable "AUX_95th_Deployed_Turret");
        _unit setVariable ["AUX_95th_Turret_Deployed", false];
        _unit setVariable ["AUX_95th_Deployed_Turret", objNull];
        _unit moveOut _turret;

        [{params ["_turret"]; deleteVehicle _turret;}, [_turret], 0.5] call CBA_fnc_waitAndExecute;
    };

}, _checkFrequency, [_unit]] call CBA_fnc_addPerFrameHandler;

_unit setVariable ["AUX_95th_B1_Turret_Handler", _b1TurretHandler];

_unit addEventHandler ["Killed", {
    params ["_unit", "_killer"];

    [_unit getVariable "AUX_95th_B1_Turret_Handler"] call CBA_fnc_removePerFrameHandler;
}];

_unit addEventHandler ["Deleted", {
	params ["_unit"];

    [_unit getVariable "AUX_95th_B1_Turret_Handler"] call CBA_fnc_removePerFrameHandler;
}];
