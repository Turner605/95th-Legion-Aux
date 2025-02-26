params ["_originalDroid", "_type"];

private _originalPos = getPosATL _originalDroid;
private _originalGroup = group _originalDroid;

private _droidOptions = [];

switch (_type) do {
	case "Standard": {
        _droidOptions = [
            "AUX_95th_Droid_B1_Unit_AutoRifleman",
            "AUX_95th_Droid_B1_Unit_Rifleman",
            "AUX_95th_Droid_B1_Unit_Shotgun",
            "AUX_95th_Droid_B1_Unit_Sniper"
        ];
    };

	case "StandardLaunchers": {
        _droidOptions = [
            "AUX_95th_Droid_B1_Unit_AA",
            "AUX_95th_Droid_B1_Unit_AT"
        ];
    };

    case "Specialists": {
        _droidOptions = [
            "AUX_95th_Droid_B1_Shield",
            "AUX_95th_Droid_B1_Unit_FireCauser",
            "AUX_95th_Droid_B1_Unit_Medic",
            "AUX_95th_Droid_B1_Turret",
            "AUX_95th_Droid_B1_Mortar"
        ];
    };
};

private _droidToSpawn = _droidOptions call BIS_fnc_SelectRandom;

deleteVehicle _originalDroid;

_droid = _originalGroup createUnit [_droidToSpawn, _originalPos, [], 0, "CAN_COLLIDE"];