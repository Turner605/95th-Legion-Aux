class CfgPatches {
	class 95th_Props {
        author="95th Aux Team";
        name="95th Legion Props";
		requiredAddons[]= {
			"ace_main",
            "3AS_Prop_Crates",
			"3as_GNK_Prop"
		};
		units[] = {
			"95th_Arsenal",
			"95th_Arsenal_Test",
			"95th_Permissions_Terminal",
			"95th_Health_Station",
			"95th_Briefing_Room",

			"95th_Resupply_Pad",
			"95th_Supply_Large_Ammo_Prop",
			"95th_Supply_Large_Medical_Prop",
			"95th_Supply_Large_Black_Prop",
			"95th_Supply_Large_Blue_Prop",
			"95th_Supply_Large_Red_Prop",

			"95th_Land_PortableWeatherStation_01_white_F",
			"95th_Land_lsb_fob_hBarrier_ramp",
			"95th_3AS_Barricade_2_C_prop",
			"95th_Land_lsb_fob_hBarrier_wall",
			"95th_3AS_Short_Wall_Bunker",
			"95th_3AS_HeavyRepeater_Unarmoured",

			"Medical_Shield_95th"
        };
	};
};

class CfgEditorCategories{
	class 95th_Props{displayName = "[95th] Props";};
};

class CfgEditorSubcategories{
	class 95th_Crates{displayName="Supply Crates";};
	class 95th_Misc{displayName="Misc";};
	class 95th_Ships{displayName="Ships";};
	class 95th_Air_Utilities{displayName = "Air Utilities";};
	class 95th_Ground_Utilities{displayName = "Ground Utilities";};
	class 95th_Utilities{displayName = "Utilities";};
	class 95th_Fortify{displayName = "Fortifications";};
};

class CfgVehicles {
//#########################################################################################################
//Supply Crates
//#########################################################################################################

	class 3AS_Supply_Large_Ammo_Prop;
    class 95th_Supply_Large_Ammo_Prop : 3AS_Supply_Large_Ammo_Prop {
		displayName="[95th] Platoon Ammo Crate";
		author="95th Aux Team";
        editorCategory="95th_Props";
		editorSubcategory="95th_Crates";
        maximumLoad=2000;

        ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

		class TransportMagazines {
			class _xx_JLTS_DC15A_mag{magazine="JLTS_DC15A_mag"; count=1;};  //TODO
		};

		class TransportWeapons {
			class _xx_JLTS_DC15A_plastic{weapon="JLTS_DC15A_plastic"; count=1;};  //TODO
		};

		//class TransportItems {}; //TODO
    };

	class 3AS_Supply_Large_Medical_Prop;
	class 95th_Supply_Large_Medical_Prop : 3AS_Supply_Large_Medical_Prop {
		displayName="[95th] Platoon Medical Crate";
		author="95th Aux Team";
        editorCategory="95th_Props";
		editorSubcategory="95th_Crates";
        maximumLoad=2000;

        ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

		class TransportItems {
			class _xx_ACE_packingBandage{name="ACE_packingBandage"; count=50;};
			class _xx_ACE_elasticBandage{name="ACE_elasticBandage"; count=50;};
			class _xx_ACE_fieldDressing{name="ACE_fieldDressing"; count=50;};
			class _xx_ACE_quikclot{name="ACE_quikclot"; count=25;};
			class _xx_kat_accuvac{name="kat_accuvac"; count=15;};
			class _xx_ACE_adenosine{name="ACE_adenosine"; count=30;};
			class _xx_ACE_salineIV{name="ACE_salineIV"; count=10;};
			class _xx_ACE_salineIV_500{name="ACE_salineIV_500"; count=15;};
			class _xx_ACE_salineIV_250{name="ACE_salineIV_250"; count=20;};
			class _xx_kat_X_AED{name="kat_X_AED"; count=5;};
			class _xx_kat_Pulseoximeter{name="kat_Pulseoximeter"; count=5;};
			class _xx_ACE_tourniquet{name="ACE_tourniquet"; count=30;};
			class _xx_ACE_surgicalKit{name="ACE_surgicalKit"; count=5;};
			class _xx_ACE_splint{name="ACE_splint"; count=20;};
			class _xx_ACE_morphine{name="ACE_morphine"; count=30;};
			class _xx_kat_larynx{name="kat_larynx"; count=20;};
			class _xx_kat_guedel{name="kat_guedel"; count=20;};
			class _xx_kat_IO_FAST{name="kat_IO_FAST"; count=10;};
			class _xx_ACE_epinephrine{name="ACE_epinephrine"; count=30;};
			class _xx_kat_chestSeal{name="kat_chestSeal"; count=15;};
			class _xx_ACE_bodyBag{name="ACE_bodyBag"; count=20;};
			class _xx_kat_aatKit{name="kat_aatKit"; count=15;};
			class _xx_kat_IV_16{name="kat_IV_16"; count=15;};
			class _xx_kat_Painkiller{name="kat_Painkiller"; count=30;};
		};
    };

	class 3AS_Supply_Large_Black_Prop;
	class 95th_Supply_Large_Black_Prop : 3AS_Supply_Large_Black_Prop {
		displayName="[95th] Platoon Explosives Crate";
		author="95th Aux Team";
        editorCategory="95th_Props";
		editorSubcategory="95th_Crates";
        maximumLoad=2000;

        ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

		//class TransportItems {}; //TODO
    };

	class 3AS_Supply_Large_Blue_Prop;
	class 95th_Supply_Large_Blue_Prop : 3AS_Supply_Large_Blue_Prop {
		displayName="[95th] Vehicle Ammo Crate";
		author="95th Aux Team";
        editorCategory="95th_Props";
		editorSubcategory="95th_Crates";
		ace_rearm_defaultSupply = 1200;
        maximumLoad=0;
        ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
	};

	class 3AS_Supply_Large_Red_Prop;
	class 95th_Supply_Large_Red_Prop : 3AS_Supply_Large_Red_Prop {
		displayName="[95th] Vehicle Fuel Crate";
		author="95th Aux Team";
        editorCategory="95th_Props";
		editorSubcategory="95th_Crates";
		ace_refuel_fuelCargo = 3000;
        ace_refuel_hooks[] = {{0,0,0},{0,0,0}};
        maximumLoad=0;
        ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
	};

	//#########################################################################################################
	//Resupply Utility Objects
	//#########################################################################################################

	class 3as_FOB_turret_base_prop;
	class 95th_Resupply_Pad : 3as_FOB_turret_base_prop {
		scope = 2;
		displayName="[95th] Resupply Pad";
		editorCategory="95th_Props";
		editorSubcategory="95th_Utilities";
		class UserActions {
			class SpawnAmmoCrate {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Spawn Platoon Ammo Crate";
				statement = "[this, '95th_Supply_Large_Ammo_Prop'] spawn NFA_fnc_handleCrateSpawned;"; 
			};
			class SpawnMedicalCrate {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Spawn Platoon Medical Crate";
				statement = "[this, '95th_Supply_Large_Medical_Prop'] spawn NFA_fnc_handleCrateSpawned;"; 
			};
			class SpawnExplosivesCrate {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Spawn Platoon Explosives Crate";
				statement = "[this, '95th_Supply_Large_Black_Prop'] spawn NFA_fnc_handleCrateSpawned;"; 
			};
			class SpawnVehicleAmmoCrate {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Spawn Vehicle Ammo Crate";
				statement = "[this, '95th_Supply_Large_Blue_Prop'] spawn NFA_fnc_handleCrateSpawned;"; 
			};
			class SpawnVehicleFuelCrate {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Spawn Vehicle Fuel Crate";
				statement = "[this, '95th_Supply_Large_Red_Prop'] spawn NFA_fnc_handleCrateSpawned;"; 
			};
		};
	};

	//#########################################################################################################
	//Misc Utility Objects
	//#########################################################################################################

	class 3AS_Supply_Large_Prop;
	class 95th_Arsenal: 3AS_Supply_Large_Prop {
		displayName="[95th] Arsenal";
		editorCategory="95th_Props";
		editorSubcategory="95th_Utilities";
		maximumLoad=2000;
        ace_dragging_canDrag = 0; ace_dragging_canCarry = 0;
        ace_cargo_size = 0; ace_cargo_canLoad = 0; ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;
	};

	class 95th_Arsenal_Missing: 95th_Arsenal {
		displayName="[95th] Dev Arsenal";
		editorCategory="95th_Props";
		editorSubcategory="95th_Utilities";
	};

	class 3AS_Venator_Room_Medium_Prop;
	class 95th_Briefing_Room : 3AS_Venator_Room_Medium_Prop {
		displayName="[95th] Briefing Room";
		editorCategory="95th_Props";
		editorSubcategory="95th_Utilities";
	};

	class DSS_Permissions_Droid;
	class 95th_Permissions_Terminal : DSS_Permissions_Droid {
		model="optre_bw_buildings\reserchbase\doorconsole\doorconsole.p3d";
		hiddenSelectionsTextures[]= { "optre_bw_buildings\reserchbase\doorconsole\data\cor_terminal_grn.paa" };
		displayName="[95th] Permissions Terminal";
		editorCategory="95th_Props";
		editorSubcategory="95th_Utilities";
	};

	class Box_C_IDAP_UAV_06_medical_F;
	class 95th_Health_Station : Box_C_IDAP_UAV_06_medical_F {
		displayName="[95th] Health Station";
		editorCategory="95th_Props";
		editorSubcategory="95th_Utilities";
		class UserActions {
			class HealPlayer {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Heal";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal"; 
			};
		};
	};

	//#########################################################################################################
	//Fortify Objects
	//#########################################################################################################

	class Land_PortableWeatherStation_01_white_F;
	class 95th_Land_PortableWeatherStation_01_white_F : Land_PortableWeatherStation_01_white_F {
		displayName="Radio Extender";
		editorCategory="95th_Props";
		editorSubcategory="95th_Fortify";
	};

	class Land_lsb_fob_hBarrier_ramp;
	class 95th_Land_lsb_fob_hBarrier_ramp: Land_lsb_fob_hBarrier_ramp {
		displayName="Ramp";
		editorCategory="95th_Props";
		editorSubcategory="95th_Fortify";
	};

	class 3AS_Barricade_2_C_prop;
	class 95th_3AS_Barricade_2_C_prop : 3AS_Barricade_2_C_prop {
		displayName="Barricade";
		editorCategory="95th_Props";
		editorSubcategory="95th_Fortify";
	};

	class Land_lsb_fob_hBarrier_wall;
	class 95th_Land_lsb_fob_hBarrier_wall: Land_lsb_fob_hBarrier_wall {
		displayName="Wall";
		editorCategory="95th_Props";
		editorSubcategory="95th_Fortify";
	};

	class 3AS_Short_Wall_Bunker;
	class 95th_3AS_Short_Wall_Bunker: 3AS_Short_Wall_Bunker {
		displayName="Bunker";
		editorCategory="95th_Props";
		editorSubcategory="95th_Fortify";
	};

	class 3AS_HeavyRepeater_Unarmoured;
	class 95th_3AS_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_Unarmoured {
		displayName="Heavy Repeater";
		editorCategory="95th_Props";
		editorSubcategory="95th_Fortify";
	};

	//#########################################################################################################
	//Shield Objects
	//#########################################################################################################

	class 3as_planetaryshield_50;
	class 95th_planetaryshield_50 : 3as_planetaryshield_50 {
		displayName="[95th] TX Shield";
		editorCategory="95th_Props";
		editorSubcategory="95th_Misc";
	};

	class SquadShield;
	class Medical_Shield_95th: SquadShield {
		model="3AS\3AS_Shield\SquadShield.p3d";
		vehicleClass="VRObjects";
		armor=999999;
		simulation="Fountain";
		armorStructural=999;
		scope=1;
		scopecurator=1;
		displayName="-";
		editorCategory="EdCat_VRObjects";
		editorSubcategory="EdSubcat_Helpers";
		sound="Shield";
	};

	//#########################################################################################################
	//Ship Objects
	//#########################################################################################################

	class ls_acclamator_4;
	class Acclimator_95th: ls_acclamator_4 {
		displayname = "Acclamator (Hollow)";
		editorCategory="95th_Props";
		editorSubcategory="95th_Ships";
		hiddenselectionstextures[] = {
			"95th_Props\Data\Acclimator\body_co.paa",
			"95th_Props\Data\Acclimator\body_2_co.paa",
			"95th_Props\Data\Acclimator\body_3_co.paa",
			"95th_Props\Data\Acclimator\body_4_co.paa",
			"95th_Props\Data\Acclimator\body_5_co.paa",
			"95th_Props\Data\Acclimator\body_6_co.paa",
			"95th_Props\Data\Acclimator\engine_co.paa",
			"","","","","","","",""
		};
	};
};

//#########################################################################################################
//Functions
//#########################################################################################################

class CfgFunctions {
	class NFA {
		class Utilities {
			class handleAirSpawned {file = "\95th_Props\Scripts\handleAirSpawned.sqf";};
			class handleLoadATRT {file = "\95th_Props\Scripts\handleLoadATRT.sqf";};
			class handleGroundSpawned {file = "\95th_Props\Scripts\handleGroundSpawned.sqf";};
			class handleAirVehicleServiced {file = "\95th_Props\Scripts\handleAirVehicleServiced.sqf";};
			class handleGroundVehicleServiced {file = "\95th_Props\Scripts\handleGroundVehicleServiced.sqf";};
			class handlePylonEdit {file = "\95th_Props\Scripts\handlePylonEdit.sqf";};
			class handleSkinSelection {file = "\95th_Props\Scripts\handleSkinSelection.sqf";};
			class checkPlayerInBriefing {file = "\95th_Props\Scripts\checkPlayerInBriefing.sqf";};
			class handleCrateSpawned {file = "\95th_Props\Scripts\handleCrateSpawned.sqf";};

			class addDefaultClasses {file = "\95th_Props\Scripts\Arsenal\addDefaultClasses.sqf";};
			class handleCreateDevArsenal {file = "\95th_Props\Scripts\Arsenal\createDevArsenal.sqf";};
		};
	};
};

class Extended_PostInit_EventHandlers {
	class 95th_Props_PostInit {
		init="call compile preprocessFileLineNumbers '\95th_Props\Init\XEH_postInit.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
	class 95th_Props_PreInit {
		init="call compile preprocessFileLineNumbers '\95th_Props\Init\XEH_preInit.sqf'";
	};
};

class Extended_InitPost_EventHandlers {
	class 95th_Supply_Large_Ammo_Prop {
		class 95th_Supply_Large_Ammo_Prop_Init {
			onRespawn="true";
			init="[_this select 0, true] call ace_arsenal_fnc_initBox;";
		};
	};

	class 95th_Arsenal {
		class 95th_Arsenal_Init {
			onRespawn="true";
			init="[_this select 0, Arsenal_All_Items_95th] call ace_arsenal_fnc_initBox;";
		};
	};

	class 95th_Arsenal_Missing {
		class 95th_Arsenal_Missing_Init {
			onRespawn="true";
			init="[_this select 0] call NFA_fnc_handleCreateDevArsenal;";
		};
	};

	class 95th_Land_PortableWeatherStation_01_white_F {
		class 95th_Land_PortableWeatherStation_01_white_F_Init {
			onRespawn="true";
			init="[_this select 0, 5000] call TFAR_antennas_fnc_initRadioTower;";
		};
	};
};