class AUX_95th_Misc_Airborne_Terminal : 3AS_HoloTable_Rectangle_Prop {
	displayName="Airborne Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Misc_Terminals";
	class UserActions {
		class SelectInsert {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Select Dropzone";
			statement = "[player] call AUX_95th_fnc_handleParadrop"; 
		};
		class SetupGroup {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Become Airborne Group";
			statement = "[player] call AUX_95th_fnc_becomeAirborne"; 
		};
	};
};