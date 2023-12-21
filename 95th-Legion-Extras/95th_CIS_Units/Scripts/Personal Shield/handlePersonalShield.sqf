params ["_player"];

private _unit = objNull;

if (isRemoteControlling _player) then {
	_unit = remoteControlled _player;
} else {
	_unit = _player;
};

if (!(_unit call NFA_fnc_checkCanShield)) exitWith {};
if (!(isNil {_unit getVariable "WalhammerShieldDestroyed"})) exitWith {systemChat "Shield is reloading";};

if ((gestureState _unit == "chargerAnim_Start") or (gestureState _unit == "chargerAnim_Loop")) exitWith {_unit playActionNow "chargerAnim_Out";};

[_unit, ["","preparing_shield_01","preparing_shield_02","preparing_shield_03","preparing_shield_04","preparing_shield_05","preparing_shield_06"], 100, false] call WBK_MakeVoiceOver_Combine; 

_unit playActionNow "chargerAnim_Start";
[_unit, "shield_ready", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
uiSleep 0.65; 

if (!(gestureState _unit == "chargerAnim_Start") or !(alive _unit)) exitWith {};

_unit setVariable ['IMS_IsUnitInvicibleScripted',1,true];

[_unit, "shield_start", 10, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_unit, "shield_down", 40, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_unit, "shield_hit2", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";

_unit forceWalk true;
_unit playActionNow "chargerAnim_Loop";

_personShield = "AUX_95th_WBK_Combine_WalhammerShield_actual" createVehicle [0,0,0];
_personShield attachTo [_unit,[-0.1,-0.2,0.2],"leftHand",true];
_y =90;
_p = 335;
_r  = 270;
_personShield setVectorDirAndUp [             
[sin _y * cos _p, cos _y * cos _p, sin _p],             
[[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D             
]; 
_personShield setVariable ["ShieldEnergy",100,true]; 
_personShield setVariable ["ShieldParent",_unit]; 

[_personShield, {
   _unit = _this;
   _unit addEventHandler ["HitPart", {
      (_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"]; 
      _penemParam = _ammo select 0;
      [_target, selectRandom ["shield_hit2","shield_hit1"],100] call CBA_fnc_GlobalSay3d;
      if ((_penemParam < 8)) exitWith {
         _health = _target getVariable "ShieldEnergy";
         _health = _health - 2;
         if (_health <= 0) exitWith {
            _enemy = _target getVariable "ShieldParent";
            [_enemy,_shooter] remoteExec ["WBK_CreateMeleeHitAnim", _enemy];
            _enemy setVariable ["WalhammerShieldDestroyed",1,true];
            _enemy spawn {sleep 120; _this setVariable ["WalhammerShieldDestroyed",nil,true];};
            deleteVehicle _target;
         };
         _target setVariable ["ShieldEnergy",_health,true];
      };
      if ((_penemParam >= 8) or (_penemParam < 15)) exitWith {
         _health = _target getVariable "ShieldEnergy";
         _health = _health - 5;
         if (_health <= 0) exitWith { 
            _enemy = _target getVariable "ShieldParent"; 
            [_enemy,_shooter] remoteExec ["WBK_CreateMeleeHitAnim", _enemy]; 
            _enemy setVariable ["WalhammerShieldDestroyed",1,true];
            _enemy spawn {sleep 120; _this setVariable ["WalhammerShieldDestroyed",nil,true];};
            deleteVehicle _target; 
         }; 
         _target setVariable ["ShieldEnergy",_health,true]; 
      }; 
      if ((_penemParam >= 15) or (_penemParam < 30)) exitWith { 
      _health = _target getVariable "ShieldEnergy"; 
      _health = _health - 10; 
      if (_health <= 0) exitWith { 
      _enemy = _target getVariable "ShieldParent"; 
      [_enemy,_shooter] remoteExec ["WBK_CreateMeleeHitAnim", _enemy]; 
      _enemy setVariable ["WalhammerShieldDestroyed",1,true];
      _enemy spawn {sleep 120; _this setVariable ["WalhammerShieldDestroyed",nil,true];};
      deleteVehicle _target; 
      }; 
      _target setVariable ["ShieldEnergy",_health,true]; 
      }; 
      if ((_penemParam >= 30) or (_penemParam < 50)) exitWith { 
      _health = _target getVariable "ShieldEnergy"; 
      _health = _health - 25; 
      if (_health <= 0) exitWith { 
      _enemy = _target getVariable "ShieldParent"; 
      [_enemy,_shooter] remoteExec ["WBK_CreateMeleeHitAnim", _enemy]; 
      _enemy setVariable ["WalhammerShieldDestroyed",1,true];
      _enemy spawn {sleep 120; _this setVariable ["WalhammerShieldDestroyed",nil,true];};
      deleteVehicle _target; 
      }; 
      _target setVariable ["ShieldEnergy",_health,true]; 
      }; 
      if ((_penemParam >= 50) or (_penemParam < 70)) exitWith { 
      _health = _target getVariable "ShieldEnergy"; 
      _health = _health - 35; 
      if (_health <= 0) exitWith { 
      _enemy = _target getVariable "ShieldParent"; 
      [_enemy,_shooter] remoteExec ["WBK_CreateMeleeHitAnim", _enemy]; 
      _enemy setVariable ["WalhammerShieldDestroyed",1,true];
      _enemy spawn {sleep 120; _this setVariable ["WalhammerShieldDestroyed",nil,true];};
      deleteVehicle _target; 
      }; 
      _target setVariable ["ShieldEnergy",_health,true]; 
      }; 
      if ((_penemParam >= 70) or (_penemParam < 100)) exitWith { 
      _health = _target getVariable "ShieldEnergy"; 
      _health = _health - 50; 
      if (_health <= 0) exitWith { 
      _enemy = _target getVariable "ShieldParent"; 
      [_enemy,_shooter] remoteExec ["WBK_CreateMeleeHitAnim", _enemy]; 
      _enemy setVariable ["WalhammerShieldDestroyed",1,true];
      _enemy spawn {sleep 120; _this setVariable ["WalhammerShieldDestroyed",nil,true];};
      deleteVehicle _target; 
      }; 
      _target setVariable ["ShieldEnergy",_health,true]; 
      }; 
      if ((_penemParam >= 100)) exitWith { 
      _health = _target getVariable "ShieldEnergy"; 
      _health = _health - 100; 
      if (_health <= 0) exitWith { 
      _enemy = _target getVariable "ShieldParent"; 
      [_enemy,_shooter] remoteExec ["WBK_CreateMeleeHitAnim", _enemy]; 
      _enemy setVariable ["WalhammerShieldDestroyed",1,true];
      _enemy spawn {sleep 120; _this setVariable ["WalhammerShieldDestroyed",nil,true];};
      deleteVehicle _target; 
      }; 
      _target setVariable ["ShieldEnergy",_health,true]; 
      }; 
   }]; 
}] remoteExec ["spawn", 0, true]; 

_smlfirelight = "#lightpoint" createVehicleLocal (getpos _unit);   
_smlfirelight setLightAmbient [0.2, 0, 1];    
_smlfirelight setLightColor [0.2, 0, 1];  
_smlfirelight setLightBrightness 0.3;   
_smlfirelight attachTo [_unit,[0,0,0],"leftHand",true]; 
_smlfirelight setLightDayLight true; 
_electra = "#particlesource" createVehicleLocal position _unit;  
_electra attachTo [_unit,[0,0,0],"leftHand",true]; 
_electra setParticleCircle [0, [0, 0, 0]];  
_electra setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];  
_electra setDropInterval 0.05;   
_electra setParticleParams [["A3\data_f\blesk1", 1, 0, 1],"", "spaceObject", 0.4, 0.1, [0,0,0], [0,0,0], 0,0.3,0.233,0, [0.005,0.005,0.01], [[1,1,1,0.5],[1,1,1,0.1]], [1], 0, 0, "", "", "",0,true];  
_basic_param = [[0,[0,0,0]],[0,[0,0,0],[0,0,0],0,0,[0,0,0,0],0,0]]; 
waitUntil {(isNull _personShield) or !(alive _unit) or (!(gestureState _unit == "chargerAnim_Start") and !(gestureState _unit == "chargerAnim_Loop"))}; 
_unit setVariable ['IMS_IsUnitInvicibleScripted',nil,true];
[_unit, "shield_down", 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";   
_unit forceWalk false; 
{deleteVehicle _x;} forEach [_smlfirelight,_electra,_personShield]; 