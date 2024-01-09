class AUX_95th_GroundUtil_Refit : 3AS_workbench_s {
	displayName="Air Service Terminal";
	editorCategory="95th_Props";
	editorSubcategory="95th_Air_Utilities";
	class UserActions {
		class ServiceAirVehicle {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Service Air Vehicle";
			statement = "[this, ['Helicopter', 'Plane']] spawn NFA_fnc_handleAirVehicleServiced;"; 
		};
		class EditPylons {
			priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
			displayName = "Edit Pylons";
			statement = "[this, player, ['Helicopter', 'Plane']] spawn NFA_fnc_handlePylonEdit;"; 
		};
	};
};