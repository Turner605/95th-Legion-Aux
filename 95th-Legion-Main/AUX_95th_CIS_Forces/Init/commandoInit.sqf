params ["_unit"];

_unit setVariable ['SFX_R_DisableDyingSounds',1,true]; 
_unit setSpeaker 'NoVoice'; 
_unit disableAI 'RADIOPROTOCOL'; 
removeGoggles _unit;