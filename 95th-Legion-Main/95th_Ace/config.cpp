class CfgPatches
{
	class 95th_Ace
	{
        author="95th Aux Team";
        name="95th Legion ACE";
		requiredAddons[]=
		{
			"ace_main",
            "cba_settings"
		};
		units[] = {};
	};
};

class ACEX_Fortify_Presets {
    class 95th_Fortify_Preset_Standard {
        displayName = "[95th] Standard Preset";
        objects[] = {
            {"Land_PortableWeatherStation_01_white_F", 10},
            {"Land_lsb_fob_hBarrier_3", 15},
            {"3AS_Short_Wall_Bunker", 30},
            {"3AS_Prop_Concrete_Platform_10x10", 30},
            {"ls_commandPost_republic_blue", 30},
            {"3AS_HeavyRepeater_Unarmoured", 40},
        };
    };
};


class Extended_PreInit_EventHandlers
{
	class 95th_Ace_PreInit
	{
		init="call compile preprocessFileLineNumbers '\95th_Ace\Bootstrap\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers
{
	class 95th_Ace_PostInit
	{
		init="call compile preprocessFileLineNumbers '\95th_Ace\Bootstrap\XEH_postInit.sqf'";
	};
};