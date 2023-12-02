params ["_unit"];

if (local _unit) then {
	_unit setVariable ['WBK_CombineType',getText (configFile >> 'CfgVehicles' >> typeOf _unit >> 'WBK_CombineType'),true];
};

_unit setVariable ['SFX_R_DisableDyingSounds',1,true]; 
_unit setSpeaker 'NoVoice'; 
_unit disableAI 'RADIOPROTOCOL'; 
removeGoggles _unit;