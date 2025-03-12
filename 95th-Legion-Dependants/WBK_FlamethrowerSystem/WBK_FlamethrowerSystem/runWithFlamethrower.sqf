_unit = _this;
while {alive _unit} do {
	if ((getText (configFile >> "CfgVehicles" >> backpack _unit >> "WBK_BurnEm_FlamethrowerBaloons") != "") and ((_unit ammo primaryWeapon _unit) != 0) and (animationState _unit in ["amovpercmevasraswrfldf","amovpercmevasraswrfldfl","amovpercmevasraswrfldfr","amovpercmevasraswpstdf","amovpercmevasraswpstdfl","amovpercmevasraswpstdfr","amovpercmevaslowwpstdf","amovpercmevaslowwpstdfl","amovpercmevaslowwpstdfr","amovpercmevaslowwrfldf","amovpercmevaslowwrfldfl","amovpercmevaslowwrfldfr","amovpknlmevasraswrfldf","amovpknlmevasraswrfldfl","amovpknlmevasraswrfldfr","amovpknlmevasraswpstdf","amovpknlmevasraswpstdfl","amovpknlmevasraswpstdfr","amovpercmevasnonwnondf","amovpercmevasnonwnondfl","amovpercmevasnonwnondfr"])) then { 
		[_unit,selectRandom ["WBK_FlamethrowerSystem\flameThrowerSounds\run_flame_1.wav","WBK_FlamethrowerSystem\flameThrowerSounds\run_flame_2.wav","WBK_FlamethrowerSystem\flameThrowerSounds\run_flame_3.wav","WBK_FlamethrowerSystem\flameThrowerSounds\run_flame_4.wav","WBK_FlamethrowerSystem\flameThrowerSounds\run_flame_5.wav","WBK_FlamethrowerSystem\flameThrowerSounds\run_flame_6.wav"],20] call WBK_BurnEm_CreateSound;
		uisleep 0.31;
	}else{
		uisleep 1;
	};
};