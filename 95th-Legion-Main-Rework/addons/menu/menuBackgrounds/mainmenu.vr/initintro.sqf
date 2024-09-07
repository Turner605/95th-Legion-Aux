enableSaving [ false, false ];
cutText ["", "BLACK FADED", 69];
enableEnvironment false;
showCinemaBorder false;


while {true} do
{
	_video = ["AUX_95th_Server\menuBackgrounds\mainmenu.vr\Tutorial.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};