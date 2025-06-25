class AUX_95th_Droid_B1_Unit_AA : JLTS_Droid_B1_AT {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 AA (E60R)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	weapons[]={"JLTS_E5", "SWLW_E60R_AA", "Throw", "Put"};
	respawnWeapons[]={"JLTS_E5", "SWLW_E60R_AA", "Throw", "Put"};
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag", "SWLW_e60r_aa_mag"
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

class AUX_95th_Droid_B1_Unit_AT : JLTS_Droid_B1_AT {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 AT (RPS-6)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag"
	};
};

class AUX_95th_Droid_B1_Unit_AutoRifleman : JLTS_Droid_B1_AR {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Auto Rifleman (E-5C)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag", "JLTS_E5C_mag",
		"SmokeShell", "SmokeShell"
	};
};

class AUX_95th_Droid_B1_Unit_Commander : JLTS_Droid_B1_Commander {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Commander (E-5)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class AUX_95th_Droid_B1_Unit_Crew : JLTS_Droid_B1_Crew {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Crew (E-5)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class AUX_95th_Droid_B1_Unit_Pilot : JLTS_Droid_B1_Pilot {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Pilot (E-5)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class AUX_95th_Droid_B1_Unit_Rifleman : JLTS_Droid_B1_E5 {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Rifleman (E-5)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag", "JLTS_E5_mag",
		"SmokeShell", "SmokeShell"
	};
};

class AUX_95th_Droid_B1_Unit_Shotgun : JLTS_Droid_B1_SBB3 {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 CQB (SB-B3)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag",
		"SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"
	};
	respawnMagazines[]={
		"JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag", "JLTS_SBB3_mag",
		"SmokeShell", "SmokeShell", "DSS_Grenade_Magazine_Thermal_C1"
	};
};

class AUX_95th_Droid_B1_Unit_Sniper : JLTS_Droid_B1_Sniper {
	scope=2;
	identityTypes[] = {"Aux_95th_Identity_B1"};
	DSS_DamageSystem_Active=1;
	DSS_DamageSystem_Resistance=0.25;
	DSS_DamageSystem_Headshot_Multiplier=4;
	displayName="B1 Sniper (E-5S)";
    faction="AUX_95th_Separatist_Army";
    editorCategory="AUX_95th_Separatist_Army";
    editorSubcategory="AUX_95th_Faction_SeparatistDroids_Category_Ground_B1_Battledroids";
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		init = "[(_this select 0)] call AUX_95th_fnc_B1Init;"; 
	};
    DSS_EMP_Protection_Value=0.1;
	impactEffectsBlood = "ImpactMetal";
	impactEffectsNoBlood = "ImpactPlastic";
	canBleed = 0;
	magazines[]={
		"JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag",
		"SmokeShell", "SmokeShell"
	};
	respawnMagazines[]={
		"JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag", "JLTS_E5S_mag",
		"SmokeShell", "SmokeShell"
	};
};