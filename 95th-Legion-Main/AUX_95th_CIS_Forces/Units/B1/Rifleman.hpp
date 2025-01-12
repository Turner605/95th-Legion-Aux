class AUX_95th_Droid_B1_Unit_Rifleman : JLTS_Droid_B1_E5 {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Rifleman (E-5)";
	editorCategory="AUX_95th_CIS_Forces";
	editorSubcategory="AUX_95th_CIS_Forces_Droids_B1";
	faction="AUX_95th_CIS";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
};