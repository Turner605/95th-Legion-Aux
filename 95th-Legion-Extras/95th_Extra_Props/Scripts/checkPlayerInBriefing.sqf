params ["_unit"];

private _nearestBriefingRoom = nearestObject [_unit, "95th_Briefing_Room"];

if(isNull _nearestBriefingRoom) exitWith {};

private _inside = false;

_relPos = _nearestBriefingRoom worldToModel (getPosATL _unit);
_boundingBox = boundingBox _nearestBriefingRoom;

_min = _boundingBox select 0;
_max = _boundingBox select 1;

_myX = _relPos select 0;
_myY = _relPos select 1;
_myZ = _relPos select 2;

if ((_myX > (_min select 0)) and (_myX < (_max select 0))) then {
	if ((_myY > (_min select 1)) and (_myY < (_max select 1))) then {
		if ((_myZ > (_min select 2)) and (_myZ < (_max select 2))) then {
			_inside = true;
		} else { _inside = false; };
	} else { _inside = false; };
} else { _inside = false; };

if(!_inside) exitWith {};

TF_speak_volume_level = "whispering"; 
5 call TFAR_fnc_setVoiceVolume;
2 cutText ["<t color='#ffffff' size='2'>Please whisper in the briefing rooms.</t><br/><t color='#ffffff' size='2'>You have been set to whisper.</t>", "PLAIN", 1, true, true];