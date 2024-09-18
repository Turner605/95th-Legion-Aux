#include "script_component.hpp"

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
        ["SIDES", ["Side", "The side the dropped unit will be as. (ONLY ONE!)"], east],
        ["SLIDER", ["Unit Count", "The amount of Jet droids to insert."], [1, 24, 8, 0]],
        ["CHECKBOX",["Include AT Droids","Add additional AT droids at a 1:4 ratio"],[true]],
        ["TOOLBOX", "Mode", [0, 1, 4, ["Hold", "Seek", "Garrison", "Garrison (Force)"]]],
        ["SLIDER", ["Unit Spread", "The spread of the units"], [1, 10, 2, 0]]
        // ["COMBO",["Test", "Tooltip"],[_optionsarray,(_pretty)+["alternative"], count _pretty]]  
    ], {
        params["_values", "_args"];
        _unitSide = _values#0;
        _unitCount = _values#1;
        _includeAT = _values#2;
        _mode = _values#3;
        _unitSpread = _values#4;

        _position = _args select 0;

        [_position, _unitSide, _unitCount, _includeAT, _mode, _unitSpread] call AUX_95th_fnc_jetDroidInsertion;
    }, {}, [_pos]] call zen_dialog_fnc_create;
}, "\z\AUX_95th\addons\modules\data\Droid.paa"] call zen_custom_modules_fnc_register;

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
// }, "\z\AUX_95th\addons\modules\data\Droid.paa"] call zen_custom_modules_fnc_register;
