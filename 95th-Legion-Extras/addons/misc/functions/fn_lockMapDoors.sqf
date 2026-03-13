private _position = [worldSize / 2, worldSize / 2];
private _radius = (worldSize * sqrt 2 / 2);
private _buildingLockChance = AUX_95th_Global_Locking_House_Chance;
private _doorLockChance = AUX_95th_Global_Locking_Door_Chance;
private _buildingTypes = ["BUILDING", "HOUSE", "CHURCH", "CHAPEL", "BUNKER", "FORTRESS", "VIEW-TOWER", "LIGHTHOUSE", "FUELSTATION", "HOSPITAL", "TOURISM"];
private _buildings = (nearestTerrainObjects [_position, _buildingTypes, _radius] + nearestObjects [_position, _buildingTypes, _radius]);

{
    if(((random 1) < _buildingLockChance)) then {
        for "_i" from 0 to (count (configfile >> "CfgVehicles" >> typeOf _x >> "UserActions")) do {
            if ((random 1) < _doorLockChance) then {
                _x setVariable [format ["bis_disabled_Door_%1", _i], 1, true];
            };
        };
    };
} forEach _buildings;

// Missing blacklist option