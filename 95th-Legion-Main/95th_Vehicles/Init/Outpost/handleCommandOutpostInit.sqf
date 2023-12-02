params ["_vehicle"];

// Features TODO: 
// Arsenal
// Pick up requester (HUD markers for air)
// Map Marker
// Passive Opfor Radar
// Radio range extender

// Possible Features: 
// "Deploy UAV" Function? - Maybe a new UAV that does the sonar scan when you fire?
// Instead of scan maybe a HUD display of the groups it can currently see?

//#################################### Logic ####################################
private _allPilots = [];
private _outpostName = "Temp Name";

//#################################### Arsenal ####################################
[_vehicle, Arsenal_All_Items_95th] call ace_arsenal_fnc_initBox;

//#################################### Respawn ####################################
[west, _vehicle, _outpostName] call BIS_fnc_addRespawnPosition; // Needs name adding to it

//#################################### Pick Up ####################################
_vehicle addAction["<t color='#00fb21'>Request Pickup</t>",{
	[[_outpostName], {
		params ["_outpostName"];
		10 cutText ["<t color='#ffffff' size='2'>You seem to be multi-certing.</t><br/><t color='#ffffff' size='2'>Please check your gear.</t>", "PLAIN", 1, true, true];
	}] remoteExec ["call", _allPilots];
}];


// [VenBroad, "Pickup requested from garrison"] remoteExec ["sideChat", 2];

	[[_targetUnit], {
		params ["_targetUnit"];
	}] remoteExec ["call", _allPilots];

	// [[_targetUnit], {
	// 	params ["_targetUnit"];

	// 	playSound "Beep_Target";

	// 	_DSS_Hacked_Display_Handler = [{
	// 		_params = _this select 0;
	// 		_target = _params select 0;

	// 		drawIcon3D [
	// 			"\a3\ui_f\data\IGUI\Cfg\Cursors\select_ca.paa", //select_ca lock_target_ca
	// 			[0,0.3,0.6,0.9], 
	// 			ASLToAGL aimPos _target,
	// 			1.3,
	// 			1.3,
	// 			0,
	// 			localize "STR_DSS_Sonar_Target_Blufor",
	// 			0,
	// 			0.04,
	// 			"RobotoCondensed",
	// 			"center",
	// 			true
	// 		];
	// 	}, 0.001, [_targetUnit]] call CBA_fnc_addPerFrameHandler;

	// 	[{!alive (_this select 0)}, {
	// 		params ["_targetUnit", "_DSS_Hacked_Display_Handler"];
	// 		[_DSS_Hacked_Display_Handler] call CBA_fnc_removePerFrameHandler;
	// 	}, [_targetUnit, _DSS_Hacked_Display_Handler]] call CBA_fnc_waitUntilAndExecute;

	// }] remoteExec ["call", _unitGroup];