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

// CIS Quick Garrison
["[95th] Modules", "CIS Quick Garrison", {
    params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

    ["CIS Quick Garrison", [
        ["SIDES", ["Side", "The side the dropped unit will be."], east],
        ["SLIDER:RADIUS",["Radius","Radius of garrison"],[1,200,50,0,(ASLToATL _pos),[255,255,0,75]]],
        ["SLIDER:PERCENT",["Garrison Percentage","Percentage of garrisonable spots to fill"],[0,1,0.6,0]],

        ["TOOLBOX", "B1 Type", [0, 1, 3, ["Normal", "Rocket", "Security"]]],
        ["CHECKBOX",["Include B2's","Should 10% of the units be B2's"],[true]],
        ["CHECKBOX",["Randomize positions","Should units be randomized instead of building by building"],[true]]
    ], {
        params["_values", "_args"];
        _unitSide = _values#0;
        _radius = _values#1;
        _garrisonPercentage = _values#2;
        _b1Type = _values#3;
        _includeB2 = _values#4;
        _randomizePositions = _values#5;

        _position = _args select 0;

        [_position, _unitSide, _radius, _garrisonPercentage, _b1Type, _includeB2, _randomizePositions] call AUX_95th_fnc_cisQuickGarrison;
    }, {}, [_pos]] call zen_dialog_fnc_create;
}, "\z\AUX_95th\addons\modules\data\Droid.paa"] call zen_custom_modules_fnc_register;

// Orders
["[95th] Modules", "Execute Order", {
    params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

    ["Execute Order", [
        ["TOOLBOX", "Order", [1, 1, 3, ["37", "66", "65"]]],
        ["CHECKBOX",["(66) Warn Jedi","Should the Jedi feel it via the force."],[false]]
    ], {
        params["_values", "_args"];
        _order = _values#0;
        _jediWarning = _values#1;

        _position = _args select 0;

        switch (_order) do {
            case 0: {systemChat "Not Yet Added"};
            case 1: {[_jediWarning] call AUX_95th_fnc_broadcastOrder66;};
            case 2: {systemChat "Not Yet Added"};
        };

    }, {}, [_pos]] call zen_dialog_fnc_create;
}, "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa"] call zen_custom_modules_fnc_register;

// Ion Storm
["[95th] Modules", "Ion Storm", {
    params [["_pos", [0, 0, 0], [[]], 3], ["_logic", objNull, [objNull]]];

    ["Ion Storm", [
        ["SLIDER:RADIUS",["Radius","Radius of the storm"],[1,300,100,0,(ASLToATL _pos),[255,255,0,75]]],
        ["SLIDER", ["Frequency", "How often in seconds should lightning strike"], [0.5, 50, 2, 0]],
        ["SLIDER", ["Duration", "How long should the storm last"], [1, 240, 30, 0]],
        ["CHECKBOX",["Warn Nearby Players","Should nearby players receive a warning about the storm"],[true]]
    ], {
        params["_values", "_args"];

        _radius = _values#0;
        _frequency = _values#1;
        _duration = _values#2;
        _warnPlayers = _values#3;

        _position = _args select 0;

        if(_warnPlayers) then {
            private _warnList = [_position, _radius+100, _radius+100, 0, false] nearEntities [ ["Man"], false, false, true];

            [[], {
                titleText ["<t align = 'center' shadow = '2' color='#FF474C' size='1.5' font='PuristaMedium' >WARNING</t><br /><t color='#FFFFFF' size='1.5' font='PuristaMedium' shadow = '2' >ION STORM DETECTED</t>", "PLAIN DOWN", -1, true, true];
            }] remoteExec ["spawn", _warnList];
        };

        private _stormCloud = "#particlesource" createVehicleLocal (_position vectorAdd [0,0,300]);
        _stormCloud setParticleCircle [(_radius*2), [0, 0, 0]];
        _stormCloud setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
        _stormCloud setParticleParams [["\A3\data_f\blesk1", 1, 0, 1], "", "SpaceObject", 1, 0.5, [0, 0, 0], [0, 0, 0.1], 0, 10, 7, 0.075, [1, 0.9], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.5], 0, 0, "", "", XXXOBJECTXXX, 0, false];
        _stormCloud setDropInterval 0.02;

        [{
            params ["_radius", "_frequency", "_duration", "_position", "_stormCloud"];

            [_radius, _frequency, _duration, _position, _stormCloud] call AUX_95th_fnc_startIonStorm;
        }, [_radius, _frequency, _duration, _position, _stormCloud], 10] call CBA_fnc_waitAndExecute;


    }, {}, [_pos]] call zen_dialog_fnc_create;
}, "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\cas_ca.paa"] call zen_custom_modules_fnc_register;


// module to drop droid turrets/vics?

// Docs:
// https://github.com/zen-mod/ZEN/blob/master/docs/frameworks/dynamic_dialog.md
