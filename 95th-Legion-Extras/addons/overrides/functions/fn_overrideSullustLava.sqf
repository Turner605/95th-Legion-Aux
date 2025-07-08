if ((worldName != "3AS_Sullust" && !TAS_Lava_Enable_Handler_All_Maps) || !isServer) exitWith {};

private _useAceDamage = isClass (configFile >> "CfgPatches" >> "ace_medical");
private _useBurnEm = isClass (configFile >> "CfgPatches" >> "WBK_PhoenixTreal_FlamethrowerMOD");

[TAS_LavaDamageFrameHandler] call CBA_fnc_removePerFrameHandler;

TAS_LavaDamageFrameHandler = [{
	(_this select 0) params ["_useAceDamage", "_useBurnEm"];

    {
        private _unit = _x;
        private _vehicle = vehicle _unit;
        private _isInVehicle = !(isNull objectParent _unit);
        
        private _damageModifier = TAS_Lava_Damage_Multiplier;

        if(_isInVehicle) then {_damageModifier = (TAS_Lava_Damage_Multiplier*0.2);};

        private _inside = false;
        
        private _nearestLavaObjects = nearestObjects[_unit, ["Land_3AS_Lava_Tile_5x5"], 30]; 

        {
            _lavaObject = _x;

            _relPos = _lavaObject worldToModel ASLToAGL (getPosASL _unit); 

            _boundingBox = boundingBox _lavaObject;
            
            _min = _boundingBox select 0;
            _max = _boundingBox select 1;
            
            _myX = _relPos select 0;
            _myY = _relPos select 1;
            _myZ = _relPos select 2;
            
            if ((_myX > (_min select 0)) and (_myX < (_max select 0))) then {
                if ((_myY > (_min select 1)) and (_myY < (_max select 1))) then {
                    if ((_myZ > (_min select 2)) and (_myZ < (_max select 2)) and (_myZ < 0)) exitWith {
                        _inside = true;
                    };
                };
            };

        } forEach _nearestLavaObjects;

        if(!_inside) exitWith {};

        if(((lifeState player) == "INCAPACITATED") && (_useBurnEm)) exitWith {
            _unit remoteExec ["Flame_Death_container", _unit];
        };

        if(_useAceDamage) exitWith {
            private _damageToApply = 2*_damageModifier;
            private _bodyPart = ["Head", "Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg"] selectRandomWeighted [0.2,0.5,1,1,1,1];
            [_unit, _damageToApply, _bodyPart, "burn"] call ace_medical_fnc_addDamageToUnit;
        };

        private _damageToApply = (getDammage _unit + (0.3*_damageModifier));
        _unit setDamage _damageToApply;

    } forEach allUnits;

}, 1, [_useAceDamage, _useBurnEm]] call CBA_fnc_addPerFrameHandler;

// Latest Lava Patch Changes:
// - Fixed taking damage when standing on a prop above lava
// - Fixed not taking damage when you should in some scenarios
// - Added setting for lava damage multiplier
// - Added setting to enable lava damage on other maps
// - WBK BurnEm integration

// Still TODO:
// Vehicle damage scaling (go off of the vehicles armour or add a property to make immune?) Consider Repulsor lifts
// Property to make units immune to lava
// Config value on gear for being immune to lava damage
// Set them on fire when theyre touching it? / Fire effects