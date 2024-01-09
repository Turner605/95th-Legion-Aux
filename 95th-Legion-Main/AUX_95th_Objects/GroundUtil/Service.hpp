class AUX_95th_GroundUtil_Service : 3AS_workbench_r1 {
	displayName="Ground Service Terminal";
	editorCategory="95th_Props";
	editorSubcategory="95th_Ground_Utilities";
	class UserActions {
		class ServiceGroundVehicle {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Service Ground Vehicle";
			statement = "[this, ['Car', 'Tank']] spawn NFA_fnc_handleGroundVehicleServiced;"; 
		};
		class EditPylons {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Edit Pylons";
			statement = "[this, player, ['Car', 'Tank']] spawn NFA_fnc_handlePylonEdit;"; 
		};
	};
};