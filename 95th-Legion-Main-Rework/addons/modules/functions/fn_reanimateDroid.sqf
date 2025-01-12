params ["_deadDroid"];

_droid = (createGroup east) createUnit [(typeOf _deadDroid), (getPos _deadDroid), [], 0, "CAN_COLLIDE"];

deleteVehicle _deadDroid;

if ((isPlayer _droid) or !(isNil {_droid getVariable "WBK_AI_ISZombie"}) or !(alive _droid)) exitWith {};

group _droid setSpeedMode "FULL";
_droid setSpeaker "NoVoice";
_droid setUnitPos "UP";
_droid setVariable ["WBK_AI_ISZombie",true,true];
_droid setVariable ["WBK_SynthHP",WBK_Zombies_TriggermanHP,true];
[_droid, "WBK_ShooterZombie_unnarmed_idle"] remoteExec ["switchMove", 0];
_droid setVariable ["WBK_AI_ZombieMoveSet","WBK_ShooterZombie_unnarmed_idle", true];

if !(isNil "WBK_IsPresent_Necroplague") then {
    _droid setVariable ['isMutant',true];
};

if !(isNil "WBK_IsPresent_PIR") then {
    _droid setVariable ["dam_ignore_hit0",true,true];
    _droid setVariable ["dam_ignore_effect0",true,true];
};

_droid addEventHandler ["PathCalculated", { 
    _unit = _this select 0;
    _unit spawn {
        uiSleep 0.5;
        if (behaviour _this == "COMBAT") exitWith {_this playMoveNow "WBK_ShooterZombie_armed_walk";};
        _this playMoveNow "WBK_ShooterZombie_unnarmed_walk";
        uiSleep 20;
        if (behaviour _this == "COMBAT") exitWith {_this playMoveNow "WBK_ShooterZombie_armed_idle";};
        _this playMoveNow "WBK_ShooterZombie_unnarmed_idle";
    };
}];

_droid addEventHandler ["Fired", {
    _obj = _this select 0; 
    _obj setAmmo [currentWeapon _obj, 50];
    [_obj] spawn {
        _obj = _this select 0;
        _val = _obj getVariable "WBK_AmountOfAmmunition";
        _val = _val - 1;
        if (_val > 0) then {
            _obj setVariable ["WBK_AmountOfAmmunition",_val];
        }else{
            _obj playActionNow "WBK_ShooterZombie_reload";
            _value = getNumber (configFile >> "CfgMagazines" >> currentMagazine _obj >> "count");
            _obj setVariable ["WBK_AmountOfAmmunition",_value];
        };
    };
}];

_droid addEventHandler ["Deleted", {
    params ["_zombie"];
    {
        _ifDelete = [_x] call CBA_fnc_removePerFrameHandler;
    } forEach (_zombie getVariable "WBK_AI_AttachedHandlers");
}];

_droid addEventHandler ["Killed", {
    {
        _ifDelete = [_x] call CBA_fnc_removePerFrameHandler;
    } forEach ((_this select 0) getVariable "WBK_AI_AttachedHandlers");
}];

[_droid, {
_this removeAllEventHandlers "HitPart";
_this addEventHandler [
    "HitPart",
    {
        (_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
        if ((_target == _shooter) or !(alive _target)) exitWith {};
        switch true do {
            case ((_selection select 0) in ["head","neck"]): {
                _new_vv = (_target getVariable "WBK_SynthHP") - ((_ammo select 0) * WBK_Zombies_HeadshotMP);
                if (_new_vv <= 0) exitWith {
                    if (isNil "WBK_IsPresent_DAH") then {
                        [_target, [_shooter vectorModelToWorld [0,500,50], _target selectionPosition "head", false]] remoteExec ["addForce", _target];
                    };
                    _target removeAllEventHandlers "HitPart"; 
                    [_target, [1, false, _shooter]] remoteExec ["setDamage",2];
                };
                _target setVariable ["WBK_SynthHP",_new_vv,true];
            };
            default {
                _new_vv = (_target getVariable "WBK_SynthHP") - (_ammo select 0);
                if (_new_vv <= 0) exitWith {
                    if (isNil "WBK_IsPresent_DAH") then {
                        [_target, [_shooter vectorModelToWorld [0,500,50], _target selectionPosition (_selection select 0), false]] remoteExec ["addForce", _target];
                    };
                    _target removeAllEventHandlers "HitPart"; 
                    [_target, [1, false, _shooter]] remoteExec ["setDamage",2];
                };
                _target setVariable ["WBK_SynthHP",_new_vv,true];
                [_target, selectRandom ["WBK_ZombieHitGest_1_weapon","WBK_ZombieHitGest_2_weapon","WBK_ZombieHitGest_3_weapon"]] remoteExec ["playActionNow",_target];
            };
        };
    }
];
}] remoteExec ["spawn",0,true];


uiSleep 0.5;
_value = getNumber (configFile >> "CfgMagazines" >> currentMagazine _droid >> "count");
_droid setVariable ["WBK_AmountOfAmmunition",(_value) + 1];
_droid setSkill ["aimingSpeed", 0.1];
_droid setSkill ["aimingAccuracy", 0.3];
_droid setSkill ["aimingShake", 0.4];
_droid setSkill ["spotDistance", 1];
_droid setSkill ["spotTime", 0.55];
_loopPathfindDoMove = [{
    _array = _this select 0;
    _unit = _array select 0;
    if (alive _unit != isAwake _unit) exitWith {_unit setDamage 1;};
    _unit disableAI "MINEDETECTION";
    _unit disableAI "WEAPONAIM";
    _unit disableAI "SUPPRESSION";
    _unit disableAI "COVER";
    _unit disableAI "AIMINGERROR";
    _unit disableAI "TARGET";
    _unit disableAI "AUTOCOMBAT";
    _unit disableAI "FSM";
    _unit allowDamage false;
    _nearEnemy = _unit findNearestEnemy _unit; 
        if ((isNull _nearEnemy) or !(alive _nearEnemy) or !(alive _unit)) exitWith {
            _unit setBehaviour "AWARE";
            if (animationState _unit in ["wbk_shooterzombie_armed_idle","wbk_shooterzombie_armed_walk"]) then {
                _unit playMoveNow "WBK_ShooterZombie_unnarmed_idle";
            };
        };
        _unit setBehaviour "COMBAT";
        if (animationState _unit in ["wbk_shooterzombie_unnarmed_idle","wbk_shooterzombie_unnarmed_walk"]) then {
            _unit playMoveNow "WBK_ShooterZombie_armed_idle";
        };
}, 3, [_droid]] call CBA_fnc_addPerFrameHandler;
_droid setVariable ["WBK_AI_AttachedHandlers", [_loopPathfindDoMove]];
