#include "script_component.hpp"

private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");

if !(_hasZen) exitWith {
	diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

//only load for zeus
if (!hasInterface) exitWith {};

// Jet Droid Insertion
["[95th] Modules", "Jet Droid Insertion", {
    params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

    ["Summon Jet Droids", [
        ["SIDES", ["Side", "The side the dropped unit will be."], east],
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

// Droid Pod Insertion
["[95th] Modules", "Droid Pod Insertion", {
    params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

    ["Summon Droid Pod", [
        ["SIDES", ["Side", "The side the dropped unit will be."], east],
        ["CHECKBOX",["Warning","Should an orange smoke be placed beforehand"],[true]],
        ["TOOLBOX", "Squad Type", [0, 1, 3, ["B1", "B1+B2", "BX"]]],
        ["TOOLBOX", "Mode", [0, 1, 4, ["Hold", "Seek", "Garrison", "Garrison (Force)"]]],
        ["CHECKBOX",["Single Use","Should the pod not act as a spawner"],[false]],
        ["CHECKBOX",["Shielded","Should the pod have an attached shield"],[false]],
        ["CHECKBOX",["Smokescreen","Should the pod have a smokescreen"],[false]]
    ], {
        params["_values", "_args"];
        _unitSide = _values#0;
        _warning = _values#1;
        _squadType = _values#2;
        _mode = _values#3;
        _singleUse = _values#4;
        _shielded = _values#5;
        _smokescreen = _values#6;

        _position = _args select 0;

        [_position, _unitSide, _warning, _squadType, _mode, _singleUse, _shielded, _smokescreen] call AUX_95th_fnc_droidPodInsertion;
    }, {}, [_pos]] call zen_dialog_fnc_create;
}, "\z\AUX_95th\addons\modules\data\Droid.paa"] call zen_custom_modules_fnc_register;

// Droid Pod Insertion
["[95th] Modules", "CIS Quick Garrison", {
    params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

    ["CIS Quick Garrison", [
        ["SIDES", ["Side", "The side the dropped unit will be."], east],
        ["SLIDER:RADIUS",["Radius","Radius of garrison"],[1,200,50,0,(ASLToATL _pos),[255,255,0,75]]],
        ["SLIDER:PERCENT",["Garrison Percentage","Percentage of garrisonable spots to fill"],[0,1,1,0]],

        ["TOOLBOX", "B1 Type", [0, 1, 3, ["Normal", "Rocket", "Security"]]],
        ["CHECKBOX",["Include B2's","Should 10% of the units be B2's"],[true]]
    ], {
        params["_values", "_args"];
        _unitSide = _values#0;
        _radius = _values#1;
        _garrisonPercentage = _values#2;
        _b1Type = _values#3;
        _includeB2 = _values#4;

        _position = _args select 0;

        [_position, _unitSide, _radius, _garrisonPercentage, _b1Type, _includeB2] call AUX_95th_fnc_cisQuickGarrison;
    }, {}, [_pos]] call zen_dialog_fnc_create;
}, "\z\AUX_95th\addons\modules\data\Droid.paa"] call zen_custom_modules_fnc_register;


// module to drop droid turrets/vics?

// Docs:
// https://github.com/zen-mod/ZEN/blob/master/docs/frameworks/dynamic_dialog.md
