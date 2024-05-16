private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");

if !(_hasZen) exitWith {
	diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

//only load for zeus
if (!hasInterface) exitWith {};

// Jet Droid Insertion
["[95th] Supports", "Jet Droid Insertion", {
    params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

    ["Summon Jet Droids", [
        ["SLIDER", ["Unit Count", "The amount of Jet droids to insert."], [1, 24, 8, 0]]
    ], {
        params["_values", "_args"];
        _unitCount = _values#0;
        _position = _args select 0;

        [_position, _unitCount] call AUX_95th_fnc_jetDroidInsertion;
    }, {}, [_pos]] call zen_dialog_fnc_create;
}, "\AUX_95th_Modules\Data\Droid.paa"] call zen_custom_modules_fnc_register;

// // Droid Pod Insertion
// ["[95th] Supports", "Droid Pod Insertion", {
//     params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

//     ["Summon Jet Droids", [
//         ["SLIDER", ["Unit Count", "The amount of Jet droids to insert."], [1, 24, 8, 0]]
//     ], {
//         params["_values", "_args"];
//         _unitCount = _values#0;
//         _position = _args select 0;
// // ls_ground_droidDispenser
//         [_position, _unitCount] call AUX_95th_fnc_jetDroidInsertion;
//     }, {}, [_pos]] call zen_dialog_fnc_create;
// }, "\AUX_95th_Modules\Data\Droid.paa"] call zen_custom_modules_fnc_register;




