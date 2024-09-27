params ["_unit"];

if(!((leader _unit) == _unit)) exitWith {
    systemChat "You must be the group leader.";
};

openMap [true, false];

systemChat "Select a drop zone.";

_unit onMapSingleClick {_this setVariable ["AUX_95th_Insertion_Location", _pos, true]; openMap [false, false]};

[{!visibleMap}, {
    params["_unit"];

    _unit onMapSingleClick "";

    private _dropPos = _unit getVariable "AUX_95th_Insertion_Location";

    if (!(isNil "_dropPos")) then {
        private _groupUnits = units _unit;

        {
            [[_x, _dropPos], {
                params ["_unit", "_dropPos"];

                1 cutText ["","BLACK OUT",1]; 

                [{
                    params["_unit", "_dropPos"];

                    private _priorFreefall = (getUnitFreefallInfo _unit) select 2;
                    _unit setVariable ["AUX_95th_Prior_Freefall_Height", _priorFreefall, true];
                    _unit setUnitFreefallHeight 10000;

                    [{isTouchingGround (_this select 0) || !alive (_this select 0)}, {
                        params["_unit"];
                        _unit setUnitFreefallHeight (_unit getVariable "AUX_95th_Prior_Freefall_Height");
                    }, [_unit]] call CBA_fnc_waitUntilAndExecute;

                    _pos = [(_dropPos select 0) - (random 10) + (random 10), (_dropPos select 1) - (random 10) + (random 10), (800 - (random 20))];
                    _unit setPosATL _pos;

                }, [_unit, _dropPos], 1] call CBA_fnc_waitAndExecute;

                [{1 cutText ["","BLACK IN",1];}, [], 2] call CBA_fnc_waitAndExecute;

            }] remoteExec ["call", _x];

        } forEach _groupUnits;
    };

    _unit setVariable ["AUX_95th_Insertion_Location", nil, true];

}, [_unit]] call CBA_fnc_waitUntilAndExecute;