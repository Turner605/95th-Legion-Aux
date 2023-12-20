params ["_unit"];

if (local _unit) then {
	_unit setVariable ['NFL_Has_Commando_Jump',getText (configFile >> 'CfgVehicles' >> typeOf _unit >> 'NFL_Has_Commando_Jump'),true];
};

_unit setVariable ['SFX_R_DisableDyingSounds',1,true]; 
_unit setSpeaker 'NoVoice'; 
_unit disableAI 'RADIOPROTOCOL'; 
removeGoggles _unit;