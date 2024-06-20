Flamethrower_Fired_EH = {
    _unit = _this select 0;
    if !(local _unit) exitWith {};

    _weap = _this select 1;
    _magazine = _this select 6;

    if (
        !(isNil {_unit getVariable "WBK_FlameInUse"})
        and (getText (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_IsFlamethrower") != "")
        and (!dialog) and !(_weap == "Throw")
    ) exitWith {
        deleteVehicle (_this select 5);
        _balloonsRequired = getText (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_RequiredBackpack"); 

        if ((_balloonsRequired != "") and (backpack _unit != _balloonsRequired)) exitWith {};

        _value = getNumber (configFile >> "CfgWeapons" >> _weap >> "WBK_BurnEm_FlamethrowerDistance");
        _realVal = _value + 2;
        _bow_cursor_end = ((eyePos _unit) vectorAdd (_unit weaponDirection currentWeapon _unit vectorMultiply _realVal));

        _ins = lineIntersectsSurfaces [ 
            eyePos _unit, 
            _bow_cursor_end, 
            _unit, 
            objNull, 
            true, 
            1, 
            "GEOM", 
            "NONE" 
        ];

        if (count _ins == 0) exitWith {};

        {_x setDamage 1;} forEach nearestTerrainObjects [ASLToATL _bow_cursor_end, ["BUSH","SMALL TREE"], 5, false];
        {_x setDamage 1;} forEach nearestTerrainObjects [_unit, ["BUSH","SMALL TREE"], 4, false];

        _firstObj = (_ins select 0 select 2);
        if !(isNil "_firstObj") then {
            _secObj = (_ins select 0 select 3);

            if ((_firstObj isKindOf "MAN") and (alive _firstObj)) exitWith {
                _firstObj remoteExec ["Flame_Death_containerSpecialEH",_firstObj];
            };
            if (_firstObj isKindOf "CAR") exitWith {
                [_firstObj,((damage _firstObj) + 0.01)] remoteExec ["setDamage",_firstObj];
            };
            if (_firstObj isKindOf "StaticWeapon") exitWith {
                [_firstObj,((damage _firstObj) + 0.3)] remoteExec ["setDamage",_firstObj];
            };
        };
    };

    if (_weap == "Throw") then {
        switch (_magazine) do {
            case "GrenadeMolotovPSRUS": {[(_this select 5)] spawn flameMolotovEH;};
            case "GrenadeInsiendPSENG": {[(_this select 5)] spawn flameIncindieryEH;};
        };
    };
};