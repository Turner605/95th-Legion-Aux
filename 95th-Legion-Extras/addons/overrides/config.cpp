#include "script_component.hpp"

// Needs to have the correct required addons

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_Extras_main",
            "3AS_AAT",
            "3AS_CIS_Wheeled",
            "3AS_CIS_Static",
            "3AS_Characters_Droids",
            "3AS_Deka",
			"JLTS_characters_DroidUnits",
            "ls_vehicles_ground",
            "lsd_units_redfor",
            "WBK_PhoenixTreal_FlamethrowerMOD",
			"AUX_95th_voicelines",
            "ls_loadorder",
            "WBK_DifferentRobotics_1",
            "A3_Data_F",
            "A3_Weapons_F"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th_Extras {
        class Overrides {
			file = "\z\AUX_95th_Extras\addons\overrides\functions";
            class removeStamina {};
        };
    };
};

// Smoke override to make smokes more effective
class cfgCloudlets {
	class Default;
	class SmokeShellWhite : Default {
		moveVelocity[]={0.2,0.50000001,0.1};
		size[]={0.36,3.5,12};
		MoveVelocityVar[]={0.7,0.4,0.7};
	};
};

class CfgSounds {
	sounds[] = {};
	class burnttodeath1 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath2 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath3 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath4 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath5 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath6 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
    class burnttodeath_distant1 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath_distant2 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath_distant3 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath_distant4 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath_distant5 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class burnttodeath_distant6 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
    class hit_by_flame_1 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class hit_by_flame_2 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class hit_by_flame_3 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
	class hit_by_flame_4 {sound[] = {"\z\AUX_95th_Extras\addons\overrides\sounds\noSound.ogg",0,0};};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    #include "./includes/vehicles.hpp"
    #include "./includes/infantry.hpp"
};

#include "CfgEventHandlers.hpp"