class AUX_95th_Misc_Medical_Terminal : 3AS_Terminal_Console_Med_Prop {
	displayName="Medical Terminal";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Misc_Terminals";
	class UserActions {
		class HealPlayer {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Heal";
			statement = "[player] call ace_medical_treatment_fnc_fullHealLocal"; 
		};
	};
};