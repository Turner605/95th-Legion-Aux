class AUX_95th_Droid_B1_Rocket_Unit_AT : JLTS_Droid_B1_Rocket {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 AT (E-5)";
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids_Rocket";
	AUX_95th_Is_Immune_To_FallDamage = 1;
	weapons[]={"JLTS_E5", "JLTS_RPS6", "Throw", "Put"};
	respawnWeapons[]={"JLTS_E5", "JLTS_RPS6", "Throw", "Put"};
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag"
	};
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
};

class AUX_95th_Droid_B1_Rocket_Unit_Rifleman : JLTS_Droid_B1_Rocket {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Rifleman (E-5)";
    faction="AUX_95th_Faction_SeparatistDroids";
    editorCategory="AUX_95th_Faction_SeparatistDroids";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids_Rocket";
	AUX_95th_Is_Immune_To_FallDamage = 1;
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
};