class AUX_95th_GroundUtil_Vehicles : 3AS_Terminal_1_Prop {
	displayName="DEPRECATED";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Ground_Utilities";
	class UserActions {
		class SpawnDeprecated {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "DEPRECATED";
			statement = "systemChat 'THIS ASSET IS DEPRECATED';"; 
		};
	};
};