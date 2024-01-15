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
    class 95th_Fortify_Preset_Testing {
        displayName = "[95th] Testing Preset";
        objects[] = {
            {"ls_commandPost_republic_blue", 1}
        };
    };

    class 95th_Fortify_Preset_Standard {
        displayName = "[95th] Standard Preset";
        objects[] = {
            {"AUX_95th_Misc_Radio_Extender", 10}, //Radio Station
            {"AUX_95th_Misc_Motion_Sensor", 10}, //Motion Sensor
            {"Land_lsb_fob_hBarrier_3", 15},
            {"3AS_Short_Wall_Bunker", 10},
            {"3AS_Prop_Concrete_Platform_10x10", 10},
            {"ls_commandPost_republic_blue", 10},
            {"3AS_HeavyRepeater_Unarmoured", 10},
        };
    };

    class 95th_Fortify_Preset_Small {
        displayName = "[95th] Small Preset";
        objects[] = {
            {"AUX_95th_Misc_Radio_Extender", 10}, //Radio Station
            {"AUX_95th_Misc_Motion_Sensor", 10}, //Motion Sensor
            {"AUX_95th_Fortify_Barricade", 10}, //Barricade
            {"AUX_95th_Fortify_Ramp", 10}, //Ramp
            {"AUX_95th_Fortify_Wall", 10}, //Wall
            {"AUX_95th_Fortify_Bunker", 10}, //Bunker
            {"AUX_95th_Fortify_Turret", 10} //Turret
        };
    };
};


class Extended_PreInit_EventHandlers {
	class 95th_Ace_PreInit {
		init="call compile preprocessFileLineNumbers '\95th_Ace\Bootstrap\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class 95th_Ace_PostInit {
		init="call compile preprocessFileLineNumbers '\95th_Ace\Bootstrap\XEH_postInit.sqf'";
	};
};