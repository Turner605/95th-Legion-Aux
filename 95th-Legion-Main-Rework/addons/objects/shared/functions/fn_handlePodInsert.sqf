params ["_user", "_includeGroup"];

if(_includeGroup) then {
    if(!((leader _user) == _user)) exitWith {
        systemChat "You must be the group leader.";
    };
};

openMap [true, false];

systemChat "Select a drop zone.";

_user onMapSingleClick {_this setVariable ["AUX_95th_Insertion_Location", _pos, true]; openMap [false, false]};

[{!visibleMap}, {
    params["_user", "_includeGroup"];

    _user onMapSingleClick "";

    private _dropPos = _user getVariable "AUX_95th_Insertion_Location";

    if (!(isNil "_dropPos")) then {
        private _groupUnits = [_user];

        if(_includeGroup) then {_groupUnits = units _user;};

        _pos = [(_dropPos select 0), (_dropPos select 1), 1000];

        private _pod = createVehicle ["3AS_EscapePod", _pos, [], 0, "NONE"];

        _pod setVectorDirAndUp [[0,0,-1],[2,0,0]];

        _pod setVehicleAmmo 0;

        {
            [[_x, _pod, _user], {
                params ["_unit", "_pod", "_user"];

                if((_user distance _unit) > 20) exitWith {};

                1 cutText ["","BLACK OUT",1]; 

                [{
                    params["_unit", "_pod"];
                    
                    _unit moveInAny _pod;
                }, [_unit, _pod], 1] call CBA_fnc_waitAndExecute;

                [{1 cutText ["","BLACK IN",1];}, [], 2] call CBA_fnc_waitAndExecute;

            }] remoteExec ["call", _x];

        } forEach _groupUnits;
    };

    _user setVariable ["AUX_95th_Insertion_Location", nil, true];

}, [_user, _includeGroup]] call CBA_fnc_waitUntilAndExecute;