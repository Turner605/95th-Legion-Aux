params ["_position", "_unitSide", "_radius", "_garrisonPercentage", "_b1Type", "_includeB2"];

private _b1TypeArray = [
    ["JLTS_Droid_B1_E5", "JLTS_Droid_B1_E5", "JLTS_Droid_B1_SBB3", "JLTS_Droid_B1_AR", "JLTS_Droid_B1_AT"],
    ["AUX_95th_Droid_B1_Rocket_E5", "AUX_95th_Droid_B1_Rocket_E5", "AUX_95th_Droid_B1_Rocket_E5", "AUX_95th_Droid_B1_Rocket_AT"],
    ["JLTS_Droid_B1_Security"]
];

private _b1TypesToSpawn = (_b1TypeArray select _b1Type);

private _buildings = nearestObjects [_position, ["House", "Building"], _radius]; 
private _buildingPositions = []; 

// Find all garrison points
{
    private _i = 0;
    while {true} do {
        private _pos = _x buildingPos _i;

        if (_pos isEqualTo [0,0,0]) exitWith {};
        if (!((_pos nearEntities ["CAManBase",1]) isEqualTo [])) exitWith {};

        _buildingPositions pushBack _pos;
        _i = _i + 1;
    };
} forEach _buildings;

private _totalToGarrison = ((count _buildingPositions) * _garrisonPercentage);
private _units = [];

// Spawn and garrison the correct spots
if(!(_totalToGarrison < 1)) then {

    private _spawnArray = [];

    for "_i" from 0 to (_totalToGarrison-1) do {
        if((_i%10 == 0) && _includeB2) then {
            _spawnArray pushBack "ls_droid_b2";
        }else{
            _spawnArray pushBack (_b1TypesToSpawn select (floor random (count _b1TypesToSpawn)));
        };
    };

    _group = [_position, _unitSide, _spawnArray ,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
    _units = (units _group) select {alive _x};

    [_position, nil, _units, _radius, 2, false, true] call ace_ai_fnc_garrison;
};

// Clear up any non garrisoned units
{
    if (_x checkAIFeature "PATH") then {
        deleteVehicle _x;
    };
} forEach _units;