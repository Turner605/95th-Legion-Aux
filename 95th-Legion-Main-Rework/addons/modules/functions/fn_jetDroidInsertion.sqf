params ["_pos", "_unitCount"];

private _spawnArray = [];

for "_i" from 0 to _unitCount do {_spawnArray pushBack "AUX_95th_Droid_B1_Rocket_Unit_Rifleman";};

// Spawn group and move to target
_group = [[0,0,0], east, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;

private _spawnedUnits = units _group;

{
    // Send them into the sky
    _x setUnitFreefallHeight 10000;
    _x setVariable ["AUX_95th_Insertion_Is_In_Progress", true, true];

    private _distanceMulti = (2*_unitCount);

    _dropPos = [
        (_pos select 0) + (random _distanceMulti) - (random _distanceMulti),
        (_pos select 1) + (random _distanceMulti) - (random _distanceMulti),
        300
    ];

    _x setPosATL _dropPos;

    // Remove drop handler when they touch the ground
    [{isTouchingGround (_this select 0) || !alive (_this select 0)}, {
        params["_unit"];

        private _frameHandler = (_unit getVariable "AUX_95th_Insertion_Handler");

        [_frameHandler] call CBA_fnc_removePerFrameHandler;

        [{
            params["_unit"];
            _unit setVariable ["AUX_95th_Insertion_Is_In_Progress", false, true];
        }, [_unit], 1] call CBA_fnc_waitAndExecute;

    }, [_x]] call CBA_fnc_waitUntilAndExecute;

    // Wait until theyre close to the ground then handle the slow down
    [{([80, (_this select 0)] call AUX_95th_fnc_isCloseToGround) == 1}, {
        params["_unit"];

        _insertionHandler = [{
		    (_this select 0) params ["_unit"];

            _pack = backpackContainer _unit;

            playSound3D ["3AS\3AS_Weapons\X42\SFX\flamer.ogg", _unit, false, getPosASL _unit, 0.5];

            [[_unit],{
                params ["_unit"];

                _pack = backpackContainer _unit;

                private _jetfirecentre = "#particlesource" createVehicleLocal (getPosATL _pack);
                private _jetsmokecentre = "#particlesource" createVehicleLocal (getPosATL _pack);
                _jetsmokecentre attachTo [_unit, [0,0,0], "Spine3"];
                _jetfirecentre attachTo [_unit, [0,0,0], "Spine3"];
                _jetsmokecentre setParticleClass "AvionicsSmoke";
                _jetfirecentre setParticleClass "Flare2";
                _jetfirecentre setDropInterval 0.01;

                [{
                    {deleteVehicle _x;} forEach _this;
                }, [_jetsmokecentre,_jetfirecentre], 1] call CBA_fnc_waitAndExecute;

                private _playerVelocity = velocity _unit;
                private _velocityX = _playerVelocity select 0;
                private _velocityY = _playerVelocity select 1;
                private _velocityZ = _playerVelocity select 2;

                private _newVelocityX = _velocityX*0.5;
                private _newVelocityY = _velocityY*0.5;
                private _newVelocityZ = _velocityZ*0.5;

                if(_newVelocityZ > -6) then { _newVelocityZ = -6; };

                _unit setVelocity [_newVelocityX, _newVelocityY, _newVelocityZ];

            }] remoteExec ["call"];
        }, 1, [_unit]] call CBA_fnc_addPerFrameHandler;

        _unit setVariable ["AUX_95th_Insertion_Handler", _insertionHandler, true];

    }, [_x]] call CBA_fnc_waitUntilAndExecute;

} forEach _spawnedUnits;