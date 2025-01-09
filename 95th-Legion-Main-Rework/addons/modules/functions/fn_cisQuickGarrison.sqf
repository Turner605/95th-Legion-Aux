params ["_position", "_unitSide", "_radius", "_garrisonPercentage", "_b1Type", "_includeB2"];

private _buildingPositions = [];
{_buildingPositions append ([_x] call CBA_fnc_buildingPositions)} forEach (nearestObjects [_position,["Building"],_radius,true]);

private _count = 0;

{
    _xPos = _buildingPositions select (floor random (count _buildingPositions));

    if((_xPos nearEntities ["CAManBase",2]) isEqualTo []) then {
        _count = _count + 1;
    }
} forEach _buildingPositions;

_count = round (_count * _garrisonPercentage);

private _b1TypeArray = [
    ["AUX_95th_Droid_B1_Unit_Rifleman", "AUX_95th_Droid_B1_Unit_Rifleman", "AUX_95th_Droid_B1_Unit_Shotgun", "AUX_95th_Droid_B1_Unit_AutoRifleman", "AUX_95th_Droid_B1_Unit_AT"],
    ["AUX_95th_Droid_B1_Rocket_Unit_Rifleman", "AUX_95th_Droid_B1_Rocket_Unit_Rifleman", "AUX_95th_Droid_B1_Rocket_Unit_Rifleman", "AUX_95th_Droid_B1_Rocket_Unit_AT"],
    ["JLTS_Droid_B1_Security"]
];

private _b1TypesToSpawn = (_b1TypeArray select _b1Type);

if(!(_count < 1)) then {

    private _spawnArray = [];

    for "_i" from 0 to (_count-1) do {
        if((_i%10 == 0) && _includeB2) then {
            _spawnArray pushBack "AUX_95th_Droid_B2_Unit_Blaster";
        }else{
            _spawnArray pushBack (_b1TypesToSpawn select (floor random (count _b1TypesToSpawn)));
        };
    };

    _group = [_position, _unitSide, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
    private _units = (units _group) select {alive _x};

    [_position, nil, _units, (_radius+10), 1, false, true] call ace_ai_fnc_garrison;
};
